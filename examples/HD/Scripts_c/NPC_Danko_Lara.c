// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Tiredness|W:Sympathy|W:Confusion|W:Fear|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|A:RemoveItemByType|W:ui/NPC_Lara.png|W:ui/NPC_Lara_b.png|W:quest_d1_04|W:k2q04AnnaGotoGatherer1|A:FindMark|A:Remove|W:k2q04MladVladGotoAnna|W:k2q04AnnaGotoGatherer3|W:completed|W:money1000 is given|W:funduk3 is given|W:funduk|W:playsound|W:givemoney|W:giveitem|W:fail|W:pt_map_station|A:ShowMap|W:d1q01LaraMarkMladVlad|W:pt_map_mladvlad|A:AddMark|W:ood1Lara1|W:ood1Lara2|W:powder|W:ood8Lara1|W:burah_serum is given|W:burah_serum|W:ood9Lara1|W:d9q03|W:d9q04|W:Gun_danko|W:walnut2 is given|W:walnut|W:peanut3 is given|W:peanut|W:milk is given|W:milk|W:ood3Lara1|W:d9LaraVisit|W:ood10Lara1|W:lens is given|W:lens|W:ood2Lara1|W:ood2Lara2|W:ood2Lara3|W:ood2Lara4|W:d2q03|W:d2q03LaraGotoMoneyFoodSelf|W:pt_map_lara|W:d2q03LaraGotoJulia|W:pt_map_julia|W:d2q03LaraGotoMaria|W:pt_map_maria|W:d2q03LaraGotoMladVlad|W:quest_d2_03|W:d2q03LaraGotoSklad|W:pt_map_d2q03_shouse|W:smoked_meat|W:dried_fish|W:bread|W:birdmask|W:pt_map_ospina|W:bread is given|W:ood4Lara1|W:d4q01|W:d4q01LaraGotoMladVlad|W:d4q01LaraGotoMladVladSelf|W:ood4Lara2|W:d4q01_subquest|W:d4q01LaraGotoOspina|W:ood4Lara3|W:d4q02LaraGivesMedcine|W:d4q02AnnaGivesMedcine|W:d4q02JuliaGivesMedcine|W:d4q02|W:d4q02BirdmaskNearHome|W:pt_d4q02_birdmask|W:quest_d4_02|W:d5q01|W:d2LaraVisit|W:ood6Lara1|W:lara blood is given|W:d6q01_lara_blood|W:ood6Lara2|W:ood6Lara3|W:ood6Lara4|W:d6q01LaraVolonteer|W:quest_d6_01|W:KnowLara|W:morfin is given|W:morfin|W:etorfin is given|W:etorfin|W:novocaine is given|W:novocaine|W:d1q04|W:d1q01|W:d8q04|W:d9q02|W:d6q01|W:microscope_d6q01_lara_blood|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x1a6b
// @RUN_TASK: 26
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x28d vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x618 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9cb vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3a vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xeec vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1129 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x134b vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1429 vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x15de vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1821 vars=int,int
// @TASK_22: vars=object params=2
// @TASK_23: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1943 vars=int,int
// @TASK_24: vars=object params=2
// @TASK_25: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a41 vars=int,int
// @TASK_26: vars=cvector params=0
// @EVENT_7: op=0x1ab7 vars=int
// @EVENT_6: op=0x1add vars=
// @EVENT_5: op=0x1aec vars=
// @EVENT_45: op=0x1af9 vars=bool
// @EVENT_0: op=0x1b05 vars=object
// @PE: 0x51,0x90,0xa6,0x1eb,0x277,0x28d,0x53d,0x602,0x618,0x976,0x9b5,0x9cb,0xa98,0xb24,0xb3a,0xe85,0xed6,0xeec,0x1087,0x1113,0x1129,0x12fb,0x1335,0x134b,0x13c6,0x1413,0x1429,0x1544,0x15c8,0x15de,0x17cc,0x180b,0x1821,0x18ee,0x192d,0x1943,0x19f1,0x1a2b,0x1a41,0x1ab7,0x1add,0x1af9,0x1d48,0x1d83,0x1db4,0x1dbe,0x1dc9,0x1dcf,0x1dfa,0x1e1a,0x1e20,0x1e26,0x1e2d,0x1e33,0x1e3e,0x1e44,0x1e50,0x1e59,0x1e6f,0x1e7a,0x1e85,0x1e90,0x1e96,0x1e9c,0x1ea1,0x1ea7,0x1eb2,0x1eb8,0x1ebe,0x1ec4,0x1f30,0x1f36,0x1f3d,0x1f4d,0x1f5d,0x1f68,0x1f8e,0x1fa8,0x1fae,0x1ff8,0x2001,0x2007,0x200d,0x201b,0x2021,0x2027,0x202d,0x2033,0x2041,0x2047,0x2057,0x2062,0x206d,0x2078,0x2084,0x2090,0x209c,0x20a8,0x20b4,0x20c0,0x20cb,0x20d7,0x20e3,0x20ef,0x20fb,0x2106,0x2112,0x211e,0x212a,0x2136,0x2142,0x214e,0x215a,0x2166,0x2172,0x217c,0x2186,0x2192,0x219e,0x21aa,0x21b6,0x21c2,0x21ce,0x21da,0x21e6,0x21f2,0x21fe,0x220a,0x2216,0x2222,0x222e,0x223a,0x2246,0x2252,0x225e,0x226a,0x2276,0x2416

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_66_bool == (int)510;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_8257();
			var_76_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500441);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508443, (int)35012, (int)9266);
			@@@var_0_object:AddReply((int)533485, (int)35013, (int)35011);
			return 0;
		}
		var_101_bool = var_66_bool == (int)35013;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533488, (int)35012, (int)35014);
			@@@var_0_object:AddReply((int)533489, (int)35012, (int)35015);
			return 0;
		}
		var_111_bool = var_66_bool == (int)35012;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533486);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533491, (int)9267, (int)35019);
			@@@var_0_object:AddReply((int)533490, (int)35022, (int)35018);
			return 0;
		}
		var_121_bool = var_66_bool == (int)35022;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533494);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533495, (int)35024, (int)35023);
			return 0;
		}
		var_128_bool = var_66_bool == (int)35024;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533497, (int)35021, (int)35025);
			return 0;
		}
		var_135_bool = var_66_bool == (int)9267;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500443, (int)519, (int)512);
			@@@var_0_object:AddReply((int)533492, (int)35021, (int)35020);
			return 0;
		}
		var_145_bool = var_66_bool == (int)35021;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533493);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533498, (int)522, (int)35027);
			@@@var_0_object:AddReply((int)533499, (int)516, (int)35028);
			return 0;
		}
		var_155_bool = var_66_bool == (int)516;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500449, (int)-1, (int)518);
			@@@var_0_object:AddReply((int)500446, (int)-1, (int)515);
			return 0;
		}
		var_165_bool = var_66_bool == (int)519;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500450);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500451, (int)522, (int)520);
			@@@var_0_object:AddReply((int)500452, (int)-1, (int)521);
			return 0;
		}
		var_175_bool = var_66_bool == (int)522;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_144(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500454, (int)-1, (int)523);
			@@@var_0_object:AddReply((int)500455, (int)-1, (int)524);
			return 0;
		}
		var_3_string = true;
		var_184_bool = 0;
		func_7553(var_184_bool);
		if(var_184_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_67_cvector == (int)13929;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_8199();
		}
		var_77_bool = var_67_cvector == (int)11890;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_8205(var_79_object);
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_8219();
		}
		var_130_bool = var_67_cvector == (int)11891;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_8205(var_132_object);
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_8219();
		}
		var_136_bool = var_67_cvector == (int)13930;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_8225();
		}
		var_142_bool = var_67_cvector == (int)40680;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_7836();
		}
		var_154_bool = var_67_cvector == (int)40681;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_7836();
		}
		var_158_bool = var_67_cvector == (int)11915;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_8243();
		}
		var_178_bool = var_67_cvector == (int)3969;
		if(var_178_bool != 0) {
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_8231();
		}
		var_184_bool = var_67_cvector == (int)3968;
		if(var_184_bool != 0) {
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_8237();
		}
		var_190_bool = var_66_bool == (int)3967;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)503662);
			@@@var_0_object:ClearReplies();
			var_209_bool = 0;
			var_209_bool = 0;
			var_210_bool = 0; var_211_object = Obj();
			var_211_object = var_1_object;
			func_8738(var_211_object);
			if(var_210_bool != 0) {
				var_218_bool = 0; var_219_object = Obj();
				var_219_object = var_1_object;
				func_8750(var_219_object);
				if(var_218_bool != 0) {
					var_209_bool = 1;
				}
			}
			if(var_209_bool != 0) {
				@@@var_0_object:AddReply((int)512735, (int)11881, (int)13929);
			}
			var_227_bool = 0;
			var_227_bool = 0;
			var_228_bool = 0;
			var_228_bool = 0;
			var_229_bool = 0;
			var_229_bool = 0;
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_8762(var_231_object);
			if(var_230_bool != 0) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_8774(var_237_object);
				if(var_236_bool != 0) {
					var_229_bool = 1;
				}
			}
			if(var_229_bool != 0) {
				var_242_bool = 0; var_243_object = Obj();
				var_243_object = var_1_object;
				func_8810(var_243_object);
				var_248_bool = var_242_bool == 0; //@nz
				if(var_248_bool != 0) {
					var_228_bool = 1;
				}
			}
			if(var_228_bool != 0) {
				var_249_bool = 0; var_250_object = Obj();
				var_250_object = var_1_object;
				func_8822(var_250_object);
				var_255_bool = var_249_bool == 0; //@nz
				if(var_255_bool != 0) {
					var_227_bool = 1;
				}
			}
			if(var_227_bool != 0) {
				@@@var_0_object:AddReply((int)512736, (int)11904, (int)13930);
			}
			var_259_bool = 0;
			var_259_bool = 0;
			var_260_bool = 0; var_261_object = Obj();
			var_261_object = var_1_object;
			func_8786(var_261_object);
			if(var_260_bool != 0) {
				var_266_bool = 0; var_267_object = Obj();
				var_267_object = var_1_object;
				func_8606(var_267_object);
				if(var_266_bool != 0) {
					var_259_bool = 1;
				}
			}
			if(var_259_bool != 0) {
				@@@var_0_object:AddReply((int)503664, (int)3970, (int)3969);
			}
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_object;
			func_8798(var_276_object);
			if(var_275_bool != 0) {
				@@@var_0_object:AddReply((int)503663, (int)3972, (int)3968);
			}
			@@@var_0_object:AddReply((int)513019, (int)-1, (int)14225);
			return 0;
		}
		var_288_bool = var_66_bool == (int)3972;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)503667);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503668, (int)3975, (int)3973);
			@@@var_0_object:AddReply((int)503669, (int)3975, (int)3974);
			@@@var_0_object:AddReply((int)503672, (int)3981, (int)3978);
			return 0;
		}
		var_301_bool = var_66_bool == (int)3975;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)503670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503671, (int)3981, (int)3976);
			@@@var_0_object:AddReply((int)503673, (int)-1, (int)3980);
			return 0;
		}
		var_311_bool = var_66_bool == (int)3981;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)503674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503675, (int)3984, (int)3982);
			@@@var_0_object:AddReply((int)503676, (int)3984, (int)3983);
			return 0;
		}
		var_321_bool = var_66_bool == (int)3984;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)503677);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503678, (int)3988, (int)3986);
			@@@var_0_object:AddReply((int)503679, (int)3988, (int)3987);
			return 0;
		}
		var_331_bool = var_66_bool == (int)3988;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)503680);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503681, (int)-1, (int)3989);
			@@@var_0_object:AddReply((int)503682, (int)-1, (int)3990);
			@@@var_0_object:AddReply((int)503685, (int)-1, (int)3995);
			return 0;
		}
		var_344_bool = var_66_bool == (int)3970;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)503665);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503666, (int)-1, (int)3971);
			return 0;
		}
		var_351_bool = var_66_bool == (int)11904;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510774, (int)11906, (int)11905);
			@@@var_0_object:AddReply((int)510789, (int)11906, (int)11923);
			@@@var_0_object:AddReply((int)510790, (int)11906, (int)11925);
			return 0;
		}
		var_364_bool = var_66_bool == (int)11906;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510776, (int)11908, (int)11907);
			@@@var_0_object:AddReply((int)510788, (int)11908, (int)11921);
			return 0;
		}
		var_374_bool = var_66_bool == (int)11908;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510777);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510778, (int)11910, (int)11909);
			@@@var_0_object:AddReply((int)510787, (int)11910, (int)11920);
			return 0;
		}
		var_384_bool = var_66_bool == (int)11910;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510779);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510780, (int)11912, (int)11911);
			@@@var_0_object:AddReply((int)510785, (int)11912, (int)11916);
			@@@var_0_object:AddReply((int)510786, (int)11912, (int)11918);
			return 0;
		}
		var_397_bool = var_66_bool == (int)11912;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510782, (int)40679, (int)11913);
			@@@var_0_object:AddReply((int)510784, (int)-1, (int)11915);
			return 0;
		}
		var_407_bool = var_66_bool == (int)40679;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)538763);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538764, (int)-1, (int)40680);
			@@@var_0_object:AddReply((int)538765, (int)-1, (int)40681);
			return 0;
		}
		var_417_bool = var_66_bool == (int)11881;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510754, (int)11883, (int)11882);
			return 0;
		}
		var_424_bool = var_66_bool == (int)11883;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510755);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510756, (int)11885, (int)11884);
			@@@var_0_object:AddReply((int)510766, (int)-1, (int)11895);
			return 0;
		}
		var_434_bool = var_66_bool == (int)11885;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510758, (int)11887, (int)11886);
			@@@var_0_object:AddReply((int)510765, (int)-1, (int)11894);
			return 0;
		}
		var_444_bool = var_66_bool == (int)11887;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510760, (int)11889, (int)11888);
			@@@var_0_object:AddReply((int)510764, (int)11889, (int)11892);
			return 0;
		}
		var_454_bool = var_66_bool == (int)11889;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_631(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)510761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510762, (int)-1, (int)11890);
			@@@var_0_object:AddReply((int)510763, (int)-1, (int)11891);
			return 0;
		}
		var_3_string = true;
		var_463_bool = 0;
		func_7553(var_463_bool);
		if(var_463_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x28e";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_67_cvector == (int)7604;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_7882();
		}
		var_147_bool = var_67_cvector == (int)8158;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_7882();
		}
		var_151_bool = var_67_cvector == (int)7606;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_7864();
		}
		var_157_bool = var_67_cvector == (int)8161;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_7962(var_159_object);
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_7984();
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_7614(var_187_object);
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_7791(var_211_object);
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_7802(var_217_object);
			var_222_object = Obj(); var_223_object = Obj();
			var_222_object = var_1_object;
			var_223_object = var_0_object;
			func_7847(var_223_object);
		}
		var_229_bool = var_67_cvector == (int)35461;
		if(var_229_bool != 0) {
			var_230_object = Obj(); var_231_object = Obj();
			var_230_object = var_1_object;
			var_231_object = var_0_object;
			func_7962(var_231_object);
			var_232_object = Obj(); var_233_object = Obj();
			var_232_object = var_1_object;
			var_233_object = var_0_object;
			func_7984();
			var_234_object = Obj(); var_235_object = Obj();
			var_234_object = var_1_object;
			var_235_object = var_0_object;
			func_7614(var_235_object);
			var_236_object = Obj(); var_237_object = Obj();
			var_236_object = var_1_object;
			var_237_object = var_0_object;
			func_7802(var_237_object);
			var_238_object = Obj(); var_239_object = Obj();
			var_238_object = var_1_object;
			var_239_object = var_0_object;
			func_7791(var_239_object);
		}
		var_241_bool = var_67_cvector == (int)8165;
		if(var_241_bool != 0) {
			var_242_object = Obj(); var_243_object = Obj();
			var_242_object = var_1_object;
			var_243_object = var_0_object;
			func_7870();
			var_246_object = Obj(); var_247_object = Obj();
			var_246_object = var_1_object;
			var_247_object = var_0_object;
			func_7990();
			var_251_object = Obj(); var_252_object = Obj();
			var_251_object = var_1_object;
			var_252_object = var_0_object;
			func_7939();
			var_271_object = Obj(); var_272_object = Obj();
			var_271_object = var_1_object;
			var_272_object = var_0_object;
			func_8263(var_272_object);
		}
		var_298_bool = var_67_cvector == (int)35455;
		if(var_298_bool != 0) {
			var_299_object = Obj(); var_300_object = Obj();
			var_299_object = var_1_object;
			var_300_object = var_0_object;
			func_7876();
		}
		var_304_bool = var_66_bool == (int)7599;
		if(var_304_bool != 0) {
			var_305_bool = 0;
			var_305_bool = 0;
			var_306_bool = 0; var_307_object = Obj();
			var_307_object = var_1_object;
			func_8502(var_307_object);
			if(var_306_bool != 0) {
				var_314_bool = 0; var_315_object = Obj();
				var_315_object = var_1_object;
				func_8550(var_315_object);
				if(var_314_bool != 0) {
					var_305_bool = 1;
				}
			}
			if(var_305_bool != 0) {
				var_320_object = Obj(); var_321_object = Obj();
				var_320_object = var_1_object;
				var_321_object = var_0_object;
				func_7858();
				var_324_object = Obj(); var_325_object = Obj();
				var_324_object = var_1_object;
				var_325_object = var_0_object;
				func_8193();
				var_328_string = "";
				func_1538(var_67_cvector, "Sympathy");
				@@@var_0_object:SetMessage((int)506893);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)507378, (int)8140, (int)8139);
				@@@var_0_object:AddReply((int)507384, (int)8140, (int)8145);
				return 0;
			}
			var_352_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507377);
			@@@var_0_object:ClearReplies();
			var_354_bool = 0;
			var_354_bool = 0;
			var_355_bool = 0;
			var_355_bool = 0;
			var_356_bool = 0; var_357_object = Obj();
			var_357_object = var_1_object;
			func_8514(var_357_object);
			if(var_356_bool != 0) {
				var_362_bool = 0; var_363_object = Obj();
				var_363_object = var_1_object;
				func_8594(var_363_object);
				if(var_362_bool != 0) {
					var_355_bool = 1;
				}
			}
			if(var_355_bool != 0) {
				var_368_bool = 0; var_369_object = Obj();
				var_369_object = var_1_object;
				func_8572(var_368_bool, var_369_object);
				if(var_368_bool != 0) {
					var_354_bool = 1;
				}
			}
			if(var_354_bool != 0) {
				@@@var_0_object:AddReply((int)506900, (int)7607, (int)7606);
			}
			var_386_bool = 0;
			var_386_bool = 0;
			var_387_bool = 0;
			var_387_bool = 0;
			var_388_bool = 0; var_389_object = Obj();
			var_389_object = var_1_object;
			func_8526(var_389_object);
			if(var_388_bool != 0) {
				var_394_bool = 0; var_395_object = Obj();
				var_395_object = var_1_object;
				func_8572(var_394_bool, var_395_object);
				if(var_394_bool != 0) {
					var_387_bool = 1;
				}
			}
			if(var_387_bool != 0) {
				var_396_bool = 0; var_397_object = Obj();
				var_397_object = var_1_object;
				func_8582(var_397_object);
				if(var_396_bool != 0) {
					var_386_bool = 1;
				}
			}
			if(var_386_bool != 0) {
				@@@var_0_object:AddReply((int)506902, (int)7609, (int)7608);
			}
			var_405_bool = 0;
			var_405_bool = 0;
			var_406_bool = 0; var_407_object = Obj();
			var_407_object = var_1_object;
			func_8562(var_406_bool, var_407_object);
			if(var_406_bool != 0) {
				var_430_bool = 0; var_431_object = Obj();
				var_431_object = var_1_object;
				func_8582(var_431_object);
				if(var_430_bool != 0) {
					var_405_bool = 1;
				}
			}
			if(var_405_bool != 0) {
				@@@var_0_object:AddReply((int)506905, (int)7612, (int)7611);
			}
			var_435_bool = 0; var_436_object = Obj();
			var_436_object = var_1_object;
			func_8550(var_436_object);
			if(var_435_bool != 0) {
				@@@var_0_object:AddReply((int)507745, (int)7601, (int)8545);
			}
			var_440_bool = 0; var_441_object = Obj();
			var_441_object = var_1_object;
			func_8538(var_441_object);
			if(var_440_bool != 0) {
				@@@var_0_object:AddReply((int)533897, (int)10389, (int)35455);
			}
			@@@var_0_object:AddReply((int)507744, (int)-1, (int)8544);
			@@@var_0_object:AddReply((int)533898, (int)-1, (int)35456);
			return 0;
		}
		var_456_bool = var_66_bool == (int)10389;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509451);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509471, (int)10391, (int)10412);
			@@@var_0_object:AddReply((int)509452, (int)10391, (int)10390);
			return 0;
		}
		var_466_bool = var_66_bool == (int)10391;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_1538(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)509453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509454, (int)10393, (int)10392);
			@@@var_0_object:AddReply((int)509467, (int)10408, (int)10407);
			@@@var_0_object:AddReply((int)509470, (int)-1, (int)10411);
			return 0;
		}
		var_479_bool = var_66_bool == (int)10408;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_1538(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)509468);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509469, (int)10393, (int)10409);
			return 0;
		}
		var_486_bool = var_66_bool == (int)10393;
		if(var_486_bool != 0) {
			var_487_string = "";
			func_1538(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)509455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509456, (int)10395, (int)10394);
			@@@var_0_object:AddReply((int)509463, (int)10403, (int)10402);
			@@@var_0_object:AddReply((int)509466, (int)-1, (int)10406);
			return 0;
		}
		var_499_bool = var_66_bool == (int)10403;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_1538(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)509464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509465, (int)10395, (int)10404);
			return 0;
		}
		var_506_bool = var_66_bool == (int)10395;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_1538(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)509457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509458, (int)10397, (int)10396);
			@@@var_0_object:AddReply((int)509462, (int)10397, (int)10400);
			return 0;
		}
		var_516_bool = var_66_bool == (int)10397;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_1538(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)509459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509460, (int)-1, (int)10398);
			@@@var_0_object:AddReply((int)509461, (int)-1, (int)10399);
			return 0;
		}
		var_526_bool = var_66_bool == (int)7612;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506907, (int)-1, (int)7613);
			return 0;
		}
		var_533_bool = var_66_bool == (int)7609;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506903);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507397, (int)8163, (int)8162);
			return 0;
		}
		var_540_bool = var_66_bool == (int)8163;
		if(var_540_bool != 0) {
			var_541_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507398);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507399, (int)-1, (int)8165);
			return 0;
		}
		var_547_bool = var_66_bool == (int)7607;
		if(var_547_bool != 0) {
			var_548_string = "";
			func_1538(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)506901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533899, (int)35458, (int)35457);
			return 0;
		}
		var_554_bool = var_66_bool == (int)35458;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_1538(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)533900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533901, (int)35460, (int)35459);
			@@@var_0_object:AddReply((int)533903, (int)-1, (int)35461);
			return 0;
		}
		var_564_bool = var_66_bool == (int)35460;
		if(var_564_bool != 0) {
			var_565_string = "";
			func_1538(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)533902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533904, (int)35463, (int)35462);
			@@@var_0_object:AddReply((int)533909, (int)35466, (int)35467);
			return 0;
		}
		var_574_bool = var_66_bool == (int)35463;
		if(var_574_bool != 0) {
			var_575_string = "";
			func_1538(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)533905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533906, (int)35466, (int)35464);
			@@@var_0_object:AddReply((int)533907, (int)35466, (int)35465);
			return 0;
		}
		var_584_bool = var_66_bool == (int)35466;
		if(var_584_bool != 0) {
			var_585_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507396, (int)-1, (int)8161);
			return 0;
		}
		var_591_bool = var_66_bool == (int)8140;
		if(var_591_bool != 0) {
			var_592_string = "";
			func_1538(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)507379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507380, (int)8142, (int)8141);
			return 0;
		}
		var_598_bool = var_66_bool == (int)8142;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_1538(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)507381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507382, (int)8144, (int)8143);
			@@@var_0_object:AddReply((int)507386, (int)8150, (int)8149);
			return 0;
		}
		var_608_bool = var_66_bool == (int)8150;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507388, (int)8144, (int)8151);
			return 0;
		}
		var_615_bool = var_66_bool == (int)8144;
		if(var_615_bool != 0) {
			var_616_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506894, (int)8153, (int)7600);
			return 0;
		}
		var_622_bool = var_66_bool == (int)8153;
		if(var_622_bool != 0) {
			var_623_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507390, (int)7601, (int)8154);
			@@@var_0_object:AddReply((int)507391, (int)-1, (int)8155);
			return 0;
		}
		var_632_bool = var_66_bool == (int)7601;
		if(var_632_bool != 0) {
			var_633_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506896, (int)7603, (int)7602);
			@@@var_0_object:AddReply((int)507392, (int)8157, (int)8156);
			return 0;
		}
		var_642_bool = var_66_bool == (int)8157;
		if(var_642_bool != 0) {
			var_643_string = "";
			func_1538(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507395, (int)7603, (int)8159);
			return 0;
		}
		var_649_bool = var_66_bool == (int)7603;
		if(var_649_bool != 0) {
			var_650_string = "";
			func_1538(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)506897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506898, (int)-1, (int)7604);
			@@@var_0_object:AddReply((int)507394, (int)-1, (int)8158);
			return 0;
		}
		var_3_string = true;
		var_658_bool = 0;
		func_7553(var_658_bool);
		if(var_658_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x619";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_67_cvector == (int)10923;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_7824();
		}
		var_77_bool = var_67_cvector == (int)10931;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_8029(var_79_object);
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_7813(var_103_object);
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_7631();
		}
		var_113_bool = var_66_bool == (int)10922;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_2485(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509915);
			@@@var_0_object:ClearReplies();
			var_132_bool = 0; var_133_object = Obj();
			var_133_object = var_1_object;
			func_8478(var_133_object);
			if(var_132_bool != 0) {
				@@@var_0_object:AddReply((int)509916, (int)10924, (int)10923);
			}
			@@@var_0_object:AddReply((int)509924, (int)-1, (int)10933);
			return 0;
		}
		var_147_bool = var_66_bool == (int)10924;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_2485(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509918, (int)10926, (int)10925);
			@@@var_0_object:AddReply((int)509922, (int)10926, (int)10929);
			@@@var_0_object:AddReply((int)509923, (int)-1, (int)10931);
			return 0;
		}
		var_160_bool = var_66_bool == (int)10926;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_2485(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509920, (int)-1, (int)10927);
			@@@var_0_object:AddReply((int)509921, (int)-1, (int)10928);
			return 0;
		}
		var_3_string = true;
		var_169_bool = 0;
		func_7553(var_169_bool);
		if(var_169_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9cc";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_67_cvector == (int)12160;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_8040();
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_8046();
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_8013(var_125_object);
		}
		var_151_bool = var_67_cvector == (int)12161;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_8040();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_8046();
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_8013(var_157_object);
		}
		var_159_bool = var_67_cvector == (int)12181;
		if(var_159_bool != 0) {
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_8078();
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_8084();
		}
		var_177_bool = var_67_cvector == (int)12182;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_8078();
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_8084();
		}
		var_183_bool = var_67_cvector == (int)12183;
		if(var_183_bool != 0) {
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_8078();
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_8084();
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_7997(var_189_object);
		}
		var_196_bool = var_67_cvector == (int)12649;
		if(var_196_bool != 0) {
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_8104();
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_8110();
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_8116(var_206_object);
			var_244_object = Obj(); var_245_object = Obj();
			var_244_object = var_1_object;
			var_245_object = var_0_object;
			func_8301(var_245_object);
			var_268_object = Obj(); var_269_object = Obj();
			var_268_object = var_1_object;
			var_269_object = var_0_object;
			func_8279(var_269_object);
			var_274_object = Obj(); var_275_object = Obj();
			var_274_object = var_1_object;
			var_275_object = var_0_object;
			func_8290(var_275_object);
			var_280_object = Obj(); var_281_object = Obj();
			var_280_object = var_1_object;
			var_281_object = var_0_object;
			func_7631();
		}
		var_285_bool = var_67_cvector == (int)12650;
		if(var_285_bool != 0) {
			var_286_object = Obj(); var_287_object = Obj();
			var_286_object = var_1_object;
			var_287_object = var_0_object;
			func_8104();
		}
		var_289_bool = var_67_cvector == (int)12684;
		if(var_289_bool != 0) {
			var_290_object = Obj(); var_291_object = Obj();
			var_290_object = var_1_object;
			var_291_object = var_0_object;
			func_8110();
			var_292_object = Obj(); var_293_object = Obj();
			var_292_object = var_1_object;
			var_293_object = var_0_object;
			func_8116(var_293_object);
			var_294_object = Obj(); var_295_object = Obj();
			var_294_object = var_1_object;
			var_295_object = var_0_object;
			func_8279(var_295_object);
			var_296_object = Obj(); var_297_object = Obj();
			var_296_object = var_1_object;
			var_297_object = var_0_object;
			func_8301(var_297_object);
			var_298_object = Obj(); var_299_object = Obj();
			var_298_object = var_1_object;
			var_299_object = var_0_object;
			func_8290(var_299_object);
			var_300_object = Obj(); var_301_object = Obj();
			var_300_object = var_1_object;
			var_301_object = var_0_object;
			func_7631();
		}
		var_303_bool = var_66_bool == (int)11193;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510151);
			@@@var_0_object:ClearReplies();
			var_322_bool = 0;
			var_322_bool = 0;
			var_323_bool = 0; var_324_object = Obj();
			var_324_object = var_1_object;
			func_8630(var_324_object);
			if(var_323_bool != 0) {
				var_329_bool = 0; var_330_object = Obj();
				var_330_object = var_1_object;
				func_8618(var_330_object);
				if(var_329_bool != 0) {
					var_322_bool = 1;
				}
			}
			if(var_322_bool != 0) {
				@@@var_0_object:AddReply((int)510152, (int)11195, (int)11194);
			}
			var_338_bool = 0;
			var_338_bool = 0;
			var_339_bool = 0; var_340_object = Obj();
			var_340_object = var_1_object;
			func_8642(var_340_object);
			if(var_339_bool != 0) {
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_8654(var_346_object);
				if(var_345_bool != 0) {
					var_338_bool = 1;
				}
			}
			if(var_338_bool != 0) {
				@@@var_0_object:AddReply((int)510995, (int)12163, (int)12162);
			}
			var_354_bool = 0;
			var_354_bool = 0;
			var_355_bool = 0; var_356_object = Obj();
			var_356_object = var_1_object;
			func_8678(var_356_object);
			if(var_355_bool != 0) {
				var_361_bool = 0; var_362_object = Obj();
				var_362_object = var_1_object;
				func_8666(var_362_object);
				if(var_361_bool != 0) {
					var_354_bool = 1;
				}
			}
			if(var_354_bool != 0) {
				@@@var_0_object:AddReply((int)511435, (int)12638, (int)12637);
			}
			var_370_bool = 0;
			var_370_bool = 0;
			var_371_bool = 0;
			var_371_bool = 0;
			var_372_bool = 0; var_373_object = Obj();
			var_373_object = var_1_object;
			func_8666(var_373_object);
			if(var_372_bool != 0) {
				var_374_bool = 0; var_375_object = Obj();
				var_375_object = var_1_object;
				func_8690(var_375_object);
				var_380_bool = var_374_bool == 0; //@nz
				if(var_380_bool != 0) {
					var_371_bool = 1;
				}
			}
			if(var_371_bool != 0) {
				var_381_bool = 0; var_382_object = Obj();
				var_382_object = var_1_object;
				func_8678(var_382_object);
				var_383_bool = var_381_bool == 0; //@nz
				if(var_383_bool != 0) {
					var_370_bool = 1;
				}
			}
			if(var_370_bool != 0) {
				@@@var_0_object:AddReply((int)511476, (int)12683, (int)12682);
			}
			@@@var_0_object:AddReply((int)511479, (int)-1, (int)12685);
			return 0;
		}
		var_391_bool = var_66_bool == (int)12683;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511478, (int)-1, (int)12684);
			return 0;
		}
		var_398_bool = var_66_bool == (int)12638;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511437, (int)12640, (int)12639);
			@@@var_0_object:AddReply((int)511450, (int)12654, (int)12653);
			return 0;
		}
		var_408_bool = var_66_bool == (int)12654;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511451);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511452, (int)12656, (int)12655);
			return 0;
		}
		var_415_bool = var_66_bool == (int)12656;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511454, (int)12640, (int)12657);
			return 0;
		}
		var_422_bool = var_66_bool == (int)12640;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511438);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511439, (int)12642, (int)12641);
			return 0;
		}
		var_429_bool = var_66_bool == (int)12642;
		if(var_429_bool != 0) {
			var_430_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511441, (int)12644, (int)12643);
			@@@var_0_object:AddReply((int)511449, (int)12644, (int)12651);
			return 0;
		}
		var_439_bool = var_66_bool == (int)12644;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511443, (int)12646, (int)12645);
			return 0;
		}
		var_446_bool = var_66_bool == (int)12646;
		if(var_446_bool != 0) {
			var_447_string = "";
			func_2852(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)511444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511445, (int)12648, (int)12647);
			return 0;
		}
		var_453_bool = var_66_bool == (int)12648;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_2852(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)511446);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511447, (int)-1, (int)12649);
			@@@var_0_object:AddReply((int)511448, (int)-1, (int)12650);
			return 0;
		}
		var_463_bool = var_66_bool == (int)12163;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_2852(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510997, (int)12165, (int)12164);
			return 0;
		}
		var_470_bool = var_66_bool == (int)12165;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_2852(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510999, (int)12167, (int)12166);
			@@@var_0_object:AddReply((int)511001, (int)12170, (int)12168);
			return 0;
		}
		var_480_bool = var_66_bool == (int)12170;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511003, (int)12167, (int)12171);
			@@@var_0_object:AddReply((int)511004, (int)12167, (int)12172);
			return 0;
		}
		var_490_bool = var_66_bool == (int)12167;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_2852(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)511000);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511005, (int)12176, (int)12175);
			@@@var_0_object:AddReply((int)511008, (int)12176, (int)12178);
			return 0;
		}
		var_500_bool = var_66_bool == (int)12176;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_2852(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)511006);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511007, (int)12180, (int)12177);
			@@@var_0_object:AddReply((int)511012, (int)-1, (int)12183);
			return 0;
		}
		var_510_bool = var_66_bool == (int)12180;
		if(var_510_bool != 0) {
			var_511_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511009);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511010, (int)-1, (int)12181);
			@@@var_0_object:AddReply((int)511011, (int)-1, (int)12182);
			return 0;
		}
		var_520_bool = var_66_bool == (int)11195;
		if(var_520_bool != 0) {
			var_521_string = "";
			func_2852(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510153);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510977, (int)12140, (int)12139);
			@@@var_0_object:AddReply((int)510154, (int)11197, (int)11196);
			return 0;
		}
		var_530_bool = var_66_bool == (int)11197;
		if(var_530_bool != 0) {
			var_531_string = "";
			func_2852(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510155);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510982, (int)12145, (int)12144);
			@@@var_0_object:AddReply((int)510986, (int)12149, (int)12148);
			return 0;
		}
		var_540_bool = var_66_bool == (int)12149;
		if(var_540_bool != 0) {
			var_541_string = "";
			func_2852(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510987);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510988, (int)12143, (int)12150);
			return 0;
		}
		var_547_bool = var_66_bool == (int)12145;
		if(var_547_bool != 0) {
			var_548_string = "";
			func_2852(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510984, (int)12143, (int)12146);
			@@@var_0_object:AddReply((int)510985, (int)12143, (int)12147);
			return 0;
		}
		var_557_bool = var_66_bool == (int)12140;
		if(var_557_bool != 0) {
			var_558_string = "";
			func_2852(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)510978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510980, (int)12143, (int)12142);
			return 0;
		}
		var_564_bool = var_66_bool == (int)12143;
		if(var_564_bool != 0) {
			var_565_string = "";
			func_2852(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)510981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510159, (int)12154, (int)11201);
			@@@var_0_object:AddReply((int)510990, (int)12154, (int)12155);
			return 0;
		}
		var_574_bool = var_66_bool == (int)12154;
		if(var_574_bool != 0) {
			var_575_string = "";
			func_2852(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)510989);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510992, (int)12157, (int)12158);
			return 0;
		}
		var_581_bool = var_66_bool == (int)12157;
		if(var_581_bool != 0) {
			var_582_string = "";
			func_2852(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)510991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510993, (int)-1, (int)12160);
			@@@var_0_object:AddReply((int)510994, (int)-1, (int)12161);
			return 0;
		}
		var_3_string = true;
		var_590_bool = 0;
		func_7553(var_590_bool);
		if(var_590_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb3b";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_67_cvector == (int)37097;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_8184();
		}
		var_100_bool = var_67_cvector == (int)12878;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_8184();
		}
		var_104_bool = var_67_cvector == (int)37118;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_8184();
		}
		var_108_bool = var_67_cvector == (int)37096;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_8184();
		}
		var_112_bool = var_66_bool == (int)12861;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_3798(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)511662);
			@@@var_0_object:ClearReplies();
			var_131_bool = 0;
			var_131_bool = 1;
			var_132_bool = 0;
			var_132_bool = 1;
			var_133_bool = 0; var_134_object = Obj();
			var_134_object = var_1_object;
			func_8726(var_134_object);
			if(var_133_bool != 1) {
				var_141_bool = 0; var_142_object = Obj();
				var_142_object = var_1_object;
				func_8702(var_142_object);
				if(var_141_bool != 1) {
					var_132_bool = 0;
				}
			}
			if(var_132_bool != 1) {
				var_147_bool = 0; var_148_object = Obj();
				var_148_object = var_1_object;
				func_8714(var_148_object);
				if(var_147_bool != 1) {
					var_131_bool = 0;
				}
			}
			if(var_131_bool != 0) {
				@@@var_0_object:AddReply((int)511663, (int)12863, (int)12862);
			}
			@@@var_0_object:AddReply((int)511960, (int)-1, (int)13174);
			return 0;
		}
		var_160_bool = var_66_bool == (int)12863;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_3798(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)511664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511680, (int)12867, (int)12879);
			@@@var_0_object:AddReply((int)511665, (int)12865, (int)12864);
			return 0;
		}
		var_170_bool = var_66_bool == (int)12865;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_3798(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)511666);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511667, (int)12867, (int)12866);
			return 0;
		}
		var_177_bool = var_66_bool == (int)12867;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_3798(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)511668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511669, (int)12869, (int)12868);
			@@@var_0_object:AddReply((int)511684, (int)12886, (int)12885);
			@@@var_0_object:AddReply((int)535434, (int)12875, (int)37115);
			return 0;
		}
		var_190_bool = var_66_bool == (int)12875;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_3798(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)511676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511677, (int)12877, (int)12876);
			@@@var_0_object:AddReply((int)535416, (int)-1, (int)37096);
			return 0;
		}
		var_200_bool = var_66_bool == (int)12886;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_3798(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)511685);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511686, (int)12888, (int)12887);
			return 0;
		}
		var_207_bool = var_66_bool == (int)12888;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_3798(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)511687);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511688, (int)12869, (int)12889);
			return 0;
		}
		var_214_bool = var_66_bool == (int)12869;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_3798(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)511670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511673, (int)12873, (int)12872);
			@@@var_0_object:AddReply((int)511671, (int)12871, (int)12870);
			return 0;
		}
		var_224_bool = var_66_bool == (int)12871;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_3798(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)511672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511681, (int)12882, (int)12881);
			return 0;
		}
		var_231_bool = var_66_bool == (int)12882;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_3798(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)511682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511683, (int)12873, (int)12883);
			return 0;
		}
		var_238_bool = var_66_bool == (int)12873;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_3798(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)511674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511675, (int)12877, (int)12874);
			@@@var_0_object:AddReply((int)535436, (int)-1, (int)37118);
			return 0;
		}
		var_248_bool = var_66_bool == (int)12877;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_3798(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)511678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535417, (int)-1, (int)37097);
			@@@var_0_object:AddReply((int)511679, (int)-1, (int)12878);
			return 0;
		}
		var_3_string = true;
		var_257_bool = 0;
		func_7553(var_257_bool);
		if(var_257_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xeed";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_67_cvector == (int)34206;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_7555();
		}
		var_114_bool = var_67_cvector == (int)33349;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_7706();
		}
		var_120_bool = var_67_cvector == (int)33351;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_7690();
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_7674(var_140_object);
		}
		var_166_bool = var_67_cvector == (int)34210;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_7555();
		}
		var_170_bool = var_67_cvector == (int)34213;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_7567();
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_7718(var_199_object);
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_7604(var_217_object);
			var_237_object = Obj(); var_238_object = Obj();
			var_237_object = var_1_object;
			var_238_object = var_0_object;
			func_7625();
		}
		var_242_bool = var_67_cvector == (int)34214;
		if(var_242_bool != 0) {
			var_243_object = Obj(); var_244_object = Obj();
			var_243_object = var_1_object;
			var_244_object = var_0_object;
			func_7637();
		}
		var_268_bool = var_66_bool == (int)34203;
		if(var_268_bool != 0) {
			var_269_bool = 0; var_270_object = Obj();
			var_270_object = var_1_object;
			func_8372(var_270_object);
			if(var_269_bool != 0) {
				var_277_object = Obj(); var_278_object = Obj();
				var_277_object = var_1_object;
				var_278_object = var_0_object;
				func_7712();
				var_281_string = "";
				func_4371(var_67_cvector, "Sympathy");
				@@@var_0_object:SetMessage((int)532729);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)533502, (int)35033, (int)35032);
				@@@var_0_object:AddReply((int)533511, (int)35033, (int)35041);
				return 0;
			}
			var_305_string = "";
			func_4371(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531944);
			@@@var_0_object:ClearReplies();
			var_307_bool = 0;
			var_307_bool = 0;
			var_308_bool = 0;
			var_308_bool = 0;
			var_309_bool = 0; var_310_object = Obj();
			var_310_object = var_1_object;
			func_8360(var_310_object);
			if(var_309_bool != 0) {
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_8348(var_316_object);
				if(var_315_bool != 0) {
					var_308_bool = 1;
				}
			}
			if(var_308_bool != 0) {
				var_321_bool = 0; var_322_object = Obj();
				var_322_object = var_1_object;
				func_8324(var_322_object);
				if(var_321_bool != 0) {
					var_307_bool = 1;
				}
			}
			if(var_307_bool != 0) {
				@@@var_0_object:AddReply((int)531945, (int)33350, (int)33349);
			}
			var_330_bool = 0; var_331_object = Obj();
			var_331_object = var_1_object;
			func_8312(var_331_object);
			if(var_330_bool != 0) {
				@@@var_0_object:AddReply((int)532734, (int)34209, (int)34208);
			}
			var_339_bool = 0;
			var_339_bool = 0;
			var_340_bool = 0; var_341_object = Obj();
			var_341_object = var_1_object;
			func_8384(var_340_bool, var_341_object);
			if(var_340_bool != 0) {
				var_349_bool = 0; var_350_object = Obj();
				var_350_object = var_1_object;
				func_8336(var_350_object);
				if(var_349_bool != 0) {
					var_339_bool = 1;
				}
			}
			if(var_339_bool != 0) {
				@@@var_0_object:AddReply((int)532737, (int)35052, (int)34211);
			}
			@@@var_0_object:AddReply((int)531948, (int)-1, (int)33352);
			return 0;
		}
		var_362_bool = var_66_bool == (int)35052;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_4371(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533520);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533522, (int)34212, (int)35054);
			@@@var_0_object:AddReply((int)533521, (int)-1, (int)35053);
			return 0;
		}
		var_372_bool = var_66_bool == (int)34212;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_4371(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532738);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532739, (int)-1, (int)34213);
			@@@var_0_object:AddReply((int)532740, (int)-1, (int)34214);
			return 0;
		}
		var_382_bool = var_66_bool == (int)34209;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_4371(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532735);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532736, (int)-1, (int)34210);
			return 0;
		}
		var_389_bool = var_66_bool == (int)33350;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_4371(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531946);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531947, (int)-1, (int)33351);
			return 0;
		}
		var_396_bool = var_66_bool == (int)35033;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_4371(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)533503);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533504, (int)35035, (int)35034);
			return 0;
		}
		var_403_bool = var_66_bool == (int)35035;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_4371(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)533505);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533506, (int)35042, (int)35036);
			@@@var_0_object:AddReply((int)533517, (int)35049, (int)35048);
			return 0;
		}
		var_413_bool = var_66_bool == (int)35049;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_4371(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)533518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533519, (int)35042, (int)35050);
			return 0;
		}
		var_420_bool = var_66_bool == (int)35042;
		if(var_420_bool != 0) {
			var_421_string = "";
			func_4371(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)533512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533513, (int)35044, (int)35043);
			@@@var_0_object:AddReply((int)533516, (int)-1, (int)35047);
			return 0;
		}
		var_430_bool = var_66_bool == (int)35044;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_4371(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)533514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532730, (int)34205, (int)34204);
			return 0;
		}
		var_437_bool = var_66_bool == (int)34205;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_4371(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)532731);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532732, (int)-1, (int)34206);
			return 0;
		}
		var_3_string = true;
		var_443_bool = 0;
		func_7553(var_443_bool);
		if(var_443_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x112a";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_66_bool == (int)34236;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_4917(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532765);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532766, (int)-1, (int)34237);
			@@@var_0_object:AddReply((int)533666, (int)-1, (int)35198);
			return 0;
		}
		var_3_string = true;
		var_96_bool = 0;
		func_7553(var_96_bool);
		if(var_96_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x134c";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_67_cvector == (int)34852;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_7725();
		}
		var_77_bool = var_66_bool == (int)34851;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_5139(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)533347);
			@@@var_0_object:ClearReplies();
			var_96_bool = 0;
			var_96_bool = 0;
			var_97_bool = 0; var_98_object = Obj();
			var_98_object = var_1_object;
			func_8395(var_98_object);
			if(var_97_bool != 0) {
				var_105_bool = 0; var_106_object = Obj();
				var_106_object = var_1_object;
				func_8407(var_106_object);
				if(var_105_bool != 0) {
					var_96_bool = 1;
				}
			}
			if(var_96_bool != 0) {
				@@@var_0_object:AddReply((int)533348, (int)34853, (int)34852);
			}
			@@@var_0_object:AddReply((int)533353, (int)-1, (int)34857);
			@@@var_0_object:AddReply((int)536082, (int)-1, (int)37830);
			return 0;
		}
		var_121_bool = var_66_bool == (int)34853;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_5139(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)533349);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533350, (int)34855, (int)34854);
			@@@var_0_object:AddReply((int)536083, (int)37832, (int)37831);
			return 0;
		}
		var_131_bool = var_66_bool == (int)37832;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_5139(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)536084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536087, (int)37834, (int)37835);
			@@@var_0_object:AddReply((int)536088, (int)37834, (int)37837);
			return 0;
		}
		var_141_bool = var_66_bool == (int)34855;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_5139(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)533351);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533352, (int)37834, (int)34856);
			@@@var_0_object:AddReply((int)536085, (int)37834, (int)37833);
			return 0;
		}
		var_151_bool = var_66_bool == (int)37834;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_5139(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)536086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536089, (int)37842, (int)37839);
			@@@var_0_object:AddReply((int)536090, (int)37842, (int)37840);
			return 0;
		}
		var_161_bool = var_66_bool == (int)37842;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_5139(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)536091);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536092, (int)-1, (int)37844);
			@@@var_0_object:AddReply((int)536093, (int)37846, (int)37845);
			return 0;
		}
		var_171_bool = var_66_bool == (int)37846;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_5139(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)536094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536095, (int)-1, (int)37847);
			return 0;
		}
		var_3_string = true;
		var_177_bool = 0;
		func_7553(var_177_bool);
		if(var_177_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x142a";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_67_cvector == (int)37996;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_7748();
		}
		var_108_bool = var_67_cvector == (int)38040;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_7769();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_7760();
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_7731(var_140_object);
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_7631();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_7785(var_168_object);
		}
		var_174_bool = var_67_cvector == (int)35084;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_7748();
		}
		var_178_bool = var_67_cvector == (int)35087;
		if(var_178_bool != 0) {
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_7760();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_7769();
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_object;
			func_7731(var_184_object);
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_7785(var_186_object);
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_7631();
		}
		var_190_bool = var_67_cvector == (int)38050;
		if(var_190_bool != 0) {
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_object;
			func_7760();
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_7769();
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_7785(var_196_object);
		}
		var_198_bool = var_66_bool == (int)35073;
		if(var_198_bool != 0) {
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_8431(var_200_object);
			if(var_199_bool != 0) {
				var_205_object = Obj(); var_206_object = Obj();
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_7742();
				var_209_object = Obj(); var_210_object = Obj();
				var_209_object = var_1_object;
				var_210_object = var_0_object;
				func_7830();
				var_213_string = "";
				func_5576(var_67_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)533541);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)533542, (int)37982, (int)35074);
				@@@var_0_object:AddReply((int)536217, (int)37982, (int)37990);
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_8419(var_238_object);
				if(var_237_bool != 0) {
					@@@var_0_object:AddReply((int)536205, (int)37979, (int)37978);
				}
				return 0;
			}
			var_246_string = "";
			func_5576(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533549);
			@@@var_0_object:ClearReplies();
			var_248_bool = 0; var_249_object = Obj();
			var_249_object = var_1_object;
			func_8466(var_249_object);
			if(var_248_bool != 0) {
				@@@var_0_object:AddReply((int)533550, (int)35083, (int)35082);
			}
			var_257_bool = 0;
			var_257_bool = 0;
			var_258_bool = 0; var_259_object = Obj();
			var_259_object = var_1_object;
			func_8443(var_258_bool, var_259_object);
			if(var_258_bool != 0) {
				var_267_bool = 0; var_268_object = Obj();
				var_268_object = var_1_object;
				func_8454(var_268_object);
				if(var_267_bool != 0) {
					var_257_bool = 1;
				}
			}
			if(var_257_bool != 0) {
				@@@var_0_object:AddReply((int)533553, (int)35086, (int)35085);
			}
			@@@var_0_object:AddReply((int)533556, (int)-1, (int)35088);
			@@@var_0_object:AddReply((int)536204, (int)-1, (int)37977);
			return 0;
		}
		var_283_bool = var_66_bool == (int)35086;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_5576(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533555, (int)-1, (int)35087);
			@@@var_0_object:AddReply((int)536266, (int)-1, (int)38050);
			return 0;
		}
		var_293_bool = var_66_bool == (int)35083;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_5576(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533552, (int)-1, (int)35084);
			return 0;
		}
		var_300_bool = var_66_bool == (int)37979;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_5576(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536259, (int)38042, (int)38041);
			@@@var_0_object:AddReply((int)536207, (int)37981, (int)37980);
			return 0;
		}
		var_310_bool = var_66_bool == (int)37981;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_5576(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536263, (int)38042, (int)38045);
			@@@var_0_object:AddReply((int)536265, (int)37994, (int)38048);
			return 0;
		}
		var_320_bool = var_66_bool == (int)38042;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_5576(var_67_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536261, (int)-1, (int)38043);
			@@@var_0_object:AddReply((int)536262, (int)-1, (int)38044);
			@@@var_0_object:AddReply((int)536264, (int)-1, (int)38047);
			return 0;
		}
		var_333_bool = var_66_bool == (int)37982;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_5576(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536210, (int)37984, (int)37983);
			@@@var_0_object:AddReply((int)536218, (int)37994, (int)37992);
			return 0;
		}
		var_343_bool = var_66_bool == (int)37984;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_5576(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)536211);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536212, (int)37994, (int)37985);
			return 0;
		}
		var_350_bool = var_66_bool == (int)37994;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_5576(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)536220);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536221, (int)-1, (int)37996);
			var_356_bool = 0; var_357_object = Obj();
			var_357_object = var_1_object;
			func_8443(var_356_bool, var_357_object);
			if(var_356_bool != 0) {
				@@@var_0_object:AddReply((int)536255, (int)38039, (int)38037);
			}
			@@@var_0_object:AddReply((int)536256, (int)-1, (int)38038);
			return 0;
		}
		var_365_bool = var_66_bool == (int)38039;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_5576(var_67_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)536257);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536258, (int)-1, (int)38040);
			return 0;
		}
		var_3_string = true;
		var_371_bool = 0;
		func_7553(var_371_bool);
		if(var_371_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x15df";
	
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_67_cvector == (int)35352;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_7841();
		}
		var_77_bool = var_66_bool == (int)35339;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_6155(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533795);
			@@@var_0_object:ClearReplies();
			var_96_bool = 0; var_97_object = Obj();
			var_97_object = var_1_object;
			func_8490(var_97_object);
			if(var_96_bool != 0) {
				@@@var_0_object:AddReply((int)533807, (int)35341, (int)35352);
			}
			@@@var_0_object:AddReply((int)533796, (int)-1, (int)35340);
			return 0;
		}
		var_111_bool = var_66_bool == (int)35341;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_6155(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533798, (int)35343, (int)35342);
			@@@var_0_object:AddReply((int)533802, (int)35347, (int)35346);
			return 0;
		}
		var_121_bool = var_66_bool == (int)35347;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_6155(var_67_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)533803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533804, (int)-1, (int)35348);
			@@@var_0_object:AddReply((int)533805, (int)-1, (int)35349);
			return 0;
		}
		var_131_bool = var_66_bool == (int)35343;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_6155(var_67_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)533799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533800, (int)-1, (int)35344);
			@@@var_0_object:AddReply((int)533801, (int)-1, (int)35345);
			return 0;
		}
		var_3_string = true;
		var_140_bool = 0;
		func_7553(var_140_bool);
		if(var_140_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1822";
	
}


task_23_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_int, var_61_int, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_66_bool == (int)36971;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_6445(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_100_bool = var_66_bool == (int)36973;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_6445(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_110_bool = var_66_bool == (int)36975;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_6445(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_119_bool = 0;
		func_7553(var_119_bool);
		if(var_119_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1944";
	
}


task_25_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_int, var_66_int, var_67_cvector)
{
	if((int)1 != 0) {
		func_7332();
		var_71_bool = var_66_int == (int)42557;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_6699(var_67_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_96_bool = 0;
		func_7553(var_96_bool);
		if(var_96_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a42";
	
}


task_26_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_cvector, var_66_int)
{
	var_68_bool = var_66_int == (int)10;
	if(var_68_bool != 0) {
		func_6835();
		var_70_bool = 0;
		var_70_bool = 0;
		var_71_bool = 0;
		func_7056(var_71_bool);
		if(var_71_bool != 0) {
			var_74_bool = 0;
			func_6804(var_74_bool);
			if(var_74_bool != 0) {
				var_70_bool = 1;
			}
		}
		if(var_70_bool != 0) {
			var_91_bool = 0;
			func_6784(var_91_bool);
			if(var_91_bool != 0) {
				var_110_bool = 0; var_111_object = Obj();
				func_7339(Obj());
				var_112_object = var_111_object;
				func_7206(var_110_bool, var_111_object);
			}
		} else {
			func_6799(var_66_int);
			func_6826();
		}
	}
	return 0;
	
}


task_26_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_cvector)
{
	func_7017();
	func_6835();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_26_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_cvector)
{
	StopGroup0();
	func_6835();
	var_67_string = "";
	func_7286("Neutral");
	func_6826();
	return 0;
}


task_26_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_cvector, var_66_bool)
{
	var_67_bool = var_66_bool;
	if(var_67_bool != 0) {
		func_6826();
	} else {
		var_73_string = "";
		func_7286("Neutral");
	}
	return 0;
	
}


task_26_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_cvector, var_66_object)
{
	var_67_bool = 0; var_68_bool = 0;
	IsOverrideActive(var_68_bool);
	var_69_bool = var_68_bool == 0; //@nz
	if(var_69_bool != 0) {
		EventDisable(0);
		func_7017();
		var_70_bool = 0; var_71_object = Obj();
		var_66_object = var_71_object;
		func_7047(var_70_bool, var_71_object);
		EventEnable(0);
		var_84_object = Obj();
		var_66_object = var_84_object;
		func_9238(var_84_object);
		var_1452_string = "";
		func_7286("Neutral");
		func_6835();
		func_6826();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_cvector)
{
	var_66_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_6770(var_65_cvector);
	return 0;
}


func_0(var_0_object, var_87_int, var_88_object)
{
	var_90_object = Obj(); var_91_bool = 0; var_92_int = 0; var_93_bool = 0; var_94_object = Obj(); var_95_bool = 0; var_96_int = 0; var_97_bool = 0;
	var_0_object = var_88_object;
	var_98_bool = 0; var_99_object = Obj(); var_100_float = 0;
	var_88_object = var_99_object;
	func_7061(var_98_bool, var_99_object, (float)70.0);
	var_145_bool = var_98_bool == 0; //@nz
	if(var_145_bool != 0) {
		var_87_int = -2;
		return 8;
	}
	CreateDialog(var_94_object);
	var_146_int = 0;
	func_7547(var_146_int);
	@@var_94_object:SetNPCName(var_146_int);
	var_147_int = 0;
	func_7545(var_147_int);
	@@var_94_object:SetNPCDescription(var_147_int);
	var_148_string = "";
	func_7549(var_148_string);
	@@var_94_object:SetPhoto(var_148_string);
	var_149_string = "";
	func_7551(var_149_string);
	@@var_94_object:SetPhoto2(var_149_string);
	var_150_int = 0;
	func_9221(var_150_int);
	@@var_94_object:SetPlayerName(var_150_int);
	IsOverrideActive(var_95_bool);
	var_158_bool = var_95_bool;
	if(var_158_bool != 0) {
		var_87_int = -2;
		return 8;
	}
	DoDialog(var_94_object);
	var_159_bool = 0; var_160_object = Obj();
	func_7339(Obj());
	var_161_object = var_160_object;
	func_7148(var_159_bool, var_160_object);
	var_254_object = Obj(); var_255_object = Obj();
	var_88_object = var_254_object;
	var_94_object = var_255_object;
	TaskCall(1);
	func_81(var_256_object, var_257_object, var_258_string, var_259_bool, var_254_object, var_255_object);
	TaskReturn();
	@@var_94_object:IsDialogEnd(var_97_bool);
	
Label_63:
	var_307_bool = var_97_bool == 0; //@nz
	if(var_307_bool != 0) {
		sync();
		@@var_94_object:IsDialogEnd(var_97_bool);
		goto Label_63;
	}
	var_88_object = Obj();
	func_7130();
	StopDialog(var_94_object);
	@@var_94_object:GetReturnValue((int)-1);
	var_96_int = var_87_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8193()
{
	SetVariable("d2LaraVisit", (int)1);
	return 0;
}


func_1538(var_2_object, var_566_string)
{
	var_567_bool = 0;
	func_7553(var_567_bool);
	var_568_bool = var_567_bool == 0; //@nz
	if(var_568_bool != 0) {
		return 0;
	}
	var_569_bool = var_566_string == var_2_object;
	if(var_569_bool != 0) {
		return 0;
	}
	var_570_string = ""; var_571_bool = 0;
	var_566_string = var_570_string;
	var_573_bool = var_566_string == "";
	if(var_573_bool != 0) {
		var_571_bool = 0;
	} else {
		var_571_bool = 1;
	}
	func_7302(var_570_string, var_571_bool);
	var_2_object = var_566_string;
	return 0;
	
}


func_9221(var_150_int)
{
	var_151_int = 0; var_152_int = 0;
	GetVariable("branch", var_152_int);
	var_155_bool = var_152_int == (int)0;
	if(var_155_bool != 0) {
		var_150_int = 1;
		return 2;
	EMIT "GOTO 0x2414";
	}
	var_157_bool = var_152_int == (int)1;
	if(var_157_bool != 0) {
		var_150_int = 2;
		return 2;
	}
	var_150_int = 3;
	return 2;
}


func_8199()
{
	SetVariable("ood6Lara1", (int)1);
	return 0;
}


func_8714(var_934_bool)
{
	var_936_int = 0; var_937_string = "";
	func_7355(var_936_int, "d5q01");
	var_939_bool = var_936_int == (int)3;
	if(var_939_bool != 0) {
		var_934_bool = 1;
		return 0;
	}
	var_934_bool = 0;
	return 0;
}


func_7690()
{
	var_123_object = Obj(); var_124_object = Obj();
	func_9171(Obj());
	var_125_object = var_124_object;
	var_136_float = 0;
	func_7482(var_136_float);
	@@var_124_object:AddMark("d1q01LaraMarkMladVlad", "pt_map_mladvlad", (int)3, (int)508647, var_136_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6155(var_2_object, var_1304_string)
{
	var_1305_bool = 0;
	func_7553(var_1305_bool);
	var_1306_bool = var_1305_bool == 0; //@nz
	if(var_1306_bool != 0) {
		return 0;
	}
	var_1307_bool = var_1304_string == var_2_object;
	if(var_1307_bool != 0) {
		return 0;
	}
	var_1308_string = ""; var_1309_bool = 0;
	var_1304_string = var_1308_string;
	var_1311_bool = var_1304_string == "";
	if(var_1311_bool != 0) {
		var_1309_bool = 0;
	} else {
		var_1309_bool = 1;
	}
	func_7302(var_1308_string, var_1309_bool);
	var_2_object = var_1304_string;
	return 0;
	
}


func_8205(var_78_object)
{
	func_9039();
	Trace("lara blood is given");
	var_104_object = Obj(); var_105_string = ""; var_106_int = 0;
	var_78_object = var_104_object;
	func_7433(var_104_object, "d6q01_lara_blood", (int)1);
	return 0;
}


func_5139(var_2_object, var_1117_string)
{
	var_1118_bool = 0;
	func_7553(var_1118_bool);
	var_1119_bool = var_1118_bool == 0; //@nz
	if(var_1119_bool != 0) {
		return 0;
	}
	var_1120_bool = var_1117_string == var_2_object;
	if(var_1120_bool != 0) {
		return 0;
	}
	var_1121_string = ""; var_1122_bool = 0;
	var_1117_string = var_1121_string;
	var_1124_bool = var_1117_string == "";
	if(var_1124_bool != 0) {
		var_1122_bool = 0;
	} else {
		var_1122_bool = 1;
	}
	func_7302(var_1121_string, var_1122_bool);
	var_2_object = var_1117_string;
	return 0;
	
}


func_8726(var_922_bool)
{
	var_924_int = 0; var_925_string = "";
	func_7355(var_924_int, "d5q01");
	var_927_bool = var_924_int == (int)4;
	if(var_927_bool != 0) {
		var_922_bool = 1;
		return 0;
	}
	var_922_bool = 0;
	return 0;
}


func_9238(var_84_object)
{
	var_85_bool = GlobalVars[1];
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_87_int = 0; var_88_object = Obj();
		var_84_object = var_88_object;
		TaskCall(0);
		func_0(var_89_object, var_87_int, var_88_object);
		TaskReturn();
		var_316_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_317_bool = 0; var_318_int = 0;
	func_7502(var_317_bool, (int)2);
	if(var_317_bool != 0) {
		var_332_int = 0; var_333_object = Obj();
		var_84_object = var_333_object;
		TaskCall(14);
		func_4785(var_334_object, var_332_int, var_333_object);
		TaskReturn();
		return 0;
	}
	var_385_bool = 0; var_386_int = 0;
	func_7496(var_385_bool, (int)1);
	if(var_385_bool != 0) {
		var_388_int = 0; var_389_object = Obj();
		var_84_object = var_389_object;
		TaskCall(12);
		func_4150(var_390_object, var_388_int, var_389_object);
		TaskReturn();
		return 0;
	}
	var_512_bool = 0; var_513_int = 0;
	func_7496(var_512_bool, (int)2);
	if(var_512_bool != 0) {
		var_514_int = 0; var_515_object = Obj();
		var_84_object = var_515_object;
		TaskCall(4);
		func_1260(var_516_object, var_514_int, var_515_object);
		TaskReturn();
		return 0;
	}
	var_694_bool = 0; var_695_int = 0;
	func_7496(var_694_bool, (int)3);
	if(var_694_bool != 0) {
		var_696_int = 0; var_697_object = Obj();
		var_84_object = var_697_object;
		TaskCall(6);
		func_2341(var_698_object, var_696_int, var_697_object);
		TaskReturn();
		return 0;
	}
	var_758_bool = 0; var_759_int = 0;
	func_7496(var_758_bool, (int)4);
	if(var_758_bool != 0) {
		var_760_int = 0; var_761_object = Obj();
		var_84_object = var_761_object;
		TaskCall(8);
		func_2631(var_762_object, var_760_int, var_761_object);
		TaskReturn();
		return 0;
	}
	var_878_bool = 0; var_879_int = 0;
	func_7496(var_878_bool, (int)5);
	if(var_878_bool != 0) {
		var_880_int = 0; var_881_object = Obj();
		var_84_object = var_881_object;
		TaskCall(10);
		func_3636(var_882_object, var_880_int, var_881_object);
		TaskReturn();
		return 0;
	}
	var_956_bool = 0; var_957_int = 0;
	func_7496(var_956_bool, (int)6);
	if(var_956_bool != 0) {
		var_958_int = 0; var_959_object = Obj();
		var_84_object = var_959_object;
		TaskCall(2);
		func_410(var_960_object, var_958_int, var_959_object);
		TaskReturn();
		return 0;
	}
	var_1084_bool = 0; var_1085_int = 0;
	func_7496(var_1084_bool, (int)8);
	if(var_1084_bool != 0) {
		var_1086_int = 0; var_1087_object = Obj();
		var_84_object = var_1087_object;
		TaskCall(16);
		func_4981(var_1088_object, var_1086_int, var_1087_object);
		TaskReturn();
		return 0;
	}
	var_1158_bool = 0; var_1159_int = 0;
	func_7496(var_1158_bool, (int)9);
	if(var_1158_bool != 0) {
		var_1160_int = 0; var_1161_object = Obj();
		var_84_object = var_1161_object;
		TaskCall(18);
		func_5363(var_1162_object, var_1160_int, var_1161_object);
		TaskReturn();
		return 0;
	}
	var_1271_bool = 0; var_1272_int = 0;
	func_7496(var_1271_bool, (int)10);
	if(var_1271_bool != 0) {
		var_1273_int = 0; var_1274_object = Obj();
		var_84_object = var_1274_object;
		TaskCall(20);
		func_6011(var_1275_object, var_1273_int, var_1274_object);
		TaskReturn();
		return 0;
	}
	var_1335_bool = 0; var_1336_int = 0;
	func_7496(var_1335_bool, (int)12);
	if(var_1335_bool != 0) {
		var_1337_int = 0; var_1338_object = Obj();
		var_84_object = var_1338_object;
		TaskCall(22);
		func_6301(var_1339_object, var_1337_int, var_1338_object);
		TaskReturn();
		return 0;
	}
	var_1396_int = 0; var_1397_object = Obj();
	var_84_object = var_1397_object;
	TaskCall(24);
	func_6560(var_1398_object, var_1396_int, var_1397_object);
	TaskReturn();
	return 0;
}


func_7706()
{
	SetVariable("ood1Lara1", (int)1);
	return 0;
}


func_8219()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_7712()
{
	SetVariable("ood1Lara2", (int)1);
	return 0;
}


func_8225()
{
	SetVariable("ood6Lara2", (int)1);
	return 0;
}


func_8738(var_999_bool)
{
	var_1001_int = 0; var_1002_string = "";
	func_7355(var_1001_int, "d6q01");
	var_1004_bool = var_1001_int == (int)1;
	if(var_1004_bool != 0) {
		var_999_bool = 1;
		return 0;
	}
	var_999_bool = 0;
	return 0;
}


func_7718(var_198_object)
{
	var_200_bool = 0; var_201_object = Obj(); var_202_string = "";
	var_198_object = var_201_object;
	func_7453(var_200_bool, var_201_object, "powder");
	return 0;
}


func_8231()
{
	SetVariable("ood6Lara3", (int)1);
	return 0;
}


func_7206(var_170_bool, var_171_object)
{
	var_172_string = ""; var_173_int = 0; var_174_bool = 0; var_175_int = 0; var_176_string = ""; var_177_string = ""; var_178_int = 0; var_179_bool = 0; var_180_int = 0; var_181_string = "";
	var_177_string = "c";
	var_178_int = 0;
	
Label_7209:
	if((int)1 != 0) {
		var_184_int = var_178_int + (int)1;
		var_185_int = var_177_string + var_184_int;
		@@var_171_object:HasProperty(var_185_int, var_179_bool);
		var_186_bool = var_179_bool == 0; //@nz
		if(var_186_bool != 0) {
		} else {
			var_178_int = var_178_int + (int)1;
			goto Label_7209;
		}
	}
	var_187_bool = var_178_int == 0; //@nz
	if(var_187_bool != 0) {
		var_170_bool = 0;
		return 10;
	}
	var_180_int = 0;
	var_189_bool = var_178_int > (int)1;
	if(var_189_bool != 0) {
		irand(var_180_int, var_178_int);
	}
	var_191_int = var_180_int + (int)1;
	var_192_int = var_177_string + var_191_int;
	@@var_171_object:GetProperty(var_192_int, var_181_string);
	var_193_bool = 0; var_194_string = "";
	var_181_string = var_194_string;
	func_7317(var_193_bool, var_194_string);
	var_193_bool = var_170_bool;
	return 10;
	
}


func_6699(var_2_object, var_1427_string)
{
	var_1428_bool = 0;
	func_7553(var_1428_bool);
	var_1429_bool = var_1428_bool == 0; //@nz
	if(var_1429_bool != 0) {
		return 0;
	}
	var_1430_bool = var_1427_string == var_2_object;
	if(var_1430_bool != 0) {
		return 0;
	}
	var_1431_string = ""; var_1432_bool = 0;
	var_1427_string = var_1431_string;
	var_1434_bool = var_1427_string == "";
	if(var_1434_bool != 0) {
		var_1432_bool = 0;
	} else {
		var_1432_bool = 1;
	}
	func_7302(var_1431_string, var_1432_bool);
	var_2_object = var_1427_string;
	return 0;
	
}


func_8237()
{
	SetVariable("ood6Lara4", (int)1);
	return 0;
}


func_8750(var_1005_bool)
{
	var_1007_int = 0; var_1008_string = "";
	func_7355(var_1007_int, "ood6Lara1");
	var_1010_bool = var_1007_int == (int)0;
	if(var_1010_bool != 0) {
		var_1005_bool = 1;
		return 0;
	}
	var_1005_bool = 0;
	return 0;
}


func_7725()
{
	SetVariable("ood8Lara1", (int)1);
	return 0;
}


func_8243()
{
	SetVariable("d6q01LaraVolonteer", (int)1);
	func_9052();
	var_171_bool = 0; var_172_string = ""; var_173_string = "";
	func_7470(var_171_bool, "quest_d6_01", "completed");
	return 0;
}


func_7731(var_139_object)
{
	Trace("burah_serum is given");
	var_142_object = Obj(); var_143_string = ""; var_144_int = 0;
	var_139_object = var_142_object;
	func_7433(var_142_object, "burah_serum", (int)1);
	return 0;
}


func_3636(var_0_object, var_880_int, var_881_object)
{
	var_883_object = Obj(); var_884_bool = 0; var_885_int = 0; var_886_bool = 0; var_887_object = Obj(); var_888_bool = 0; var_889_int = 0; var_890_bool = 0;
	var_0_object = var_881_object;
	var_891_bool = 0; var_892_object = Obj(); var_893_float = 0;
	var_881_object = var_892_object;
	func_7061(var_891_bool, var_892_object, (float)70.0);
	var_894_bool = var_891_bool == 0; //@nz
	if(var_894_bool != 0) {
		var_880_int = -2;
		return 8;
	}
	CreateDialog(var_887_object);
	var_895_int = 0;
	func_7547(var_895_int);
	@@var_887_object:SetNPCName(var_895_int);
	var_896_int = 0;
	func_7545(var_896_int);
	@@var_887_object:SetNPCDescription(var_896_int);
	var_897_string = "";
	func_7549(var_897_string);
	@@var_887_object:SetPhoto(var_897_string);
	var_898_string = "";
	func_7551(var_898_string);
	@@var_887_object:SetPhoto2(var_898_string);
	var_899_int = 0;
	func_9221(var_899_int);
	@@var_887_object:SetPlayerName(var_899_int);
	IsOverrideActive(var_888_bool);
	var_900_bool = var_888_bool;
	if(var_900_bool != 0) {
		var_880_int = -2;
		return 8;
	}
	DoDialog(var_887_object);
	var_901_bool = 0; var_902_object = Obj();
	func_7339(Obj());
	var_903_object = var_902_object;
	func_7148(var_901_bool, var_902_object);
	var_904_object = Obj(); var_905_object = Obj();
	var_881_object = var_904_object;
	var_887_object = var_905_object;
	TaskCall(11);
	func_3717(var_906_object, var_907_object, var_908_string, var_909_bool, var_904_object, var_905_object);
	TaskReturn();
	@@var_887_object:IsDialogEnd(var_890_bool);
	
Label_3699:
	var_954_bool = var_890_bool == 0; //@nz
	if(var_954_bool != 0) {
		sync();
		@@var_887_object:IsDialogEnd(var_890_bool);
		goto Label_3699;
	}
	var_881_object = Obj();
	func_7130();
	StopDialog(var_887_object);
	@@var_887_object:GetReturnValue((int)-1);
	var_889_int = var_880_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4150(var_0_object, var_388_int, var_389_object)
{
	var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0; var_395_object = Obj(); var_396_bool = 0; var_397_int = 0; var_398_bool = 0;
	var_0_object = var_389_object;
	var_399_bool = 0; var_400_object = Obj(); var_401_float = 0;
	var_389_object = var_400_object;
	func_7061(var_399_bool, var_400_object, (float)70.0);
	var_402_bool = var_399_bool == 0; //@nz
	if(var_402_bool != 0) {
		var_388_int = -2;
		return 8;
	}
	CreateDialog(var_395_object);
	var_403_int = 0;
	func_7547(var_403_int);
	@@var_395_object:SetNPCName(var_403_int);
	var_404_int = 0;
	func_7545(var_404_int);
	@@var_395_object:SetNPCDescription(var_404_int);
	var_405_string = "";
	func_7549(var_405_string);
	@@var_395_object:SetPhoto(var_405_string);
	var_406_string = "";
	func_7551(var_406_string);
	@@var_395_object:SetPhoto2(var_406_string);
	var_407_int = 0;
	func_9221(var_407_int);
	@@var_395_object:SetPlayerName(var_407_int);
	IsOverrideActive(var_396_bool);
	var_408_bool = var_396_bool;
	if(var_408_bool != 0) {
		var_388_int = -2;
		return 8;
	}
	DoDialog(var_395_object);
	var_409_bool = 0; var_410_object = Obj();
	func_7339(Obj());
	var_411_object = var_410_object;
	func_7148(var_409_bool, var_410_object);
	var_412_object = Obj(); var_413_object = Obj();
	var_389_object = var_412_object;
	var_395_object = var_413_object;
	TaskCall(13);
	func_4231(var_414_object, var_415_object, var_416_string, var_417_bool, var_412_object, var_413_object);
	TaskReturn();
	@@var_395_object:IsDialogEnd(var_398_bool);
	
Label_4213:
	var_510_bool = var_398_bool == 0; //@nz
	if(var_510_bool != 0) {
		sync();
		@@var_395_object:IsDialogEnd(var_398_bool);
		goto Label_4213;
	}
	var_389_object = Obj();
	func_7130();
	StopDialog(var_395_object);
	@@var_395_object:GetReturnValue((int)-1);
	var_397_int = var_388_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8762(var_1017_bool)
{
	var_1019_int = 0; var_1020_string = "";
	func_7355(var_1019_int, "microscope_d6q01_lara_blood");
	var_1022_bool = var_1019_int != (int)0;
	if(var_1022_bool != 0) {
		var_1017_bool = 1;
		return 0;
	}
	var_1017_bool = 0;
	return 0;
}


func_7742()
{
	SetVariable("ood9Lara1", (int)1);
	return 0;
}


func_8257()
{
	SetVariable("KnowLara", (int)1);
	return 0;
}


func_7748()
{
	SetVariable("d9q03", (int)1);
	func_9078();
	func_9104();
	return 0;
}


func_8774(var_1023_bool)
{
	var_1025_int = 0; var_1026_string = "";
	func_7355(var_1025_int, "ood6Lara2");
	var_1028_bool = var_1025_int == (int)0;
	if(var_1028_bool != 0) {
		var_1023_bool = 1;
		return 0;
	}
	var_1023_bool = 0;
	return 0;
}


func_8263(var_272_object)
{
	var_273_object = Obj(); var_274_string = ""; var_275_float = 0;
	func_9171(Obj());
	var_276_object = var_273_object;
	func_9188(var_273_object, "pt_map_d2q03_shouse", (float)2);
	var_296_object = Obj();
	func_9171(var_296_object);
	@@var_272_object:ShowMap(var_296_object);
	return 0;
}


func_2631(var_0_object, var_760_int, var_761_object)
{
	var_763_object = Obj(); var_764_bool = 0; var_765_int = 0; var_766_bool = 0; var_767_object = Obj(); var_768_bool = 0; var_769_int = 0; var_770_bool = 0;
	var_0_object = var_761_object;
	var_771_bool = 0; var_772_object = Obj(); var_773_float = 0;
	var_761_object = var_772_object;
	func_7061(var_771_bool, var_772_object, (float)70.0);
	var_774_bool = var_771_bool == 0; //@nz
	if(var_774_bool != 0) {
		var_760_int = -2;
		return 8;
	}
	CreateDialog(var_767_object);
	var_775_int = 0;
	func_7547(var_775_int);
	@@var_767_object:SetNPCName(var_775_int);
	var_776_int = 0;
	func_7545(var_776_int);
	@@var_767_object:SetNPCDescription(var_776_int);
	var_777_string = "";
	func_7549(var_777_string);
	@@var_767_object:SetPhoto(var_777_string);
	var_778_string = "";
	func_7551(var_778_string);
	@@var_767_object:SetPhoto2(var_778_string);
	var_779_int = 0;
	func_9221(var_779_int);
	@@var_767_object:SetPlayerName(var_779_int);
	IsOverrideActive(var_768_bool);
	var_780_bool = var_768_bool;
	if(var_780_bool != 0) {
		var_760_int = -2;
		return 8;
	}
	DoDialog(var_767_object);
	var_781_bool = 0; var_782_object = Obj();
	func_7339(Obj());
	var_783_object = var_782_object;
	func_7148(var_781_bool, var_782_object);
	var_784_object = Obj(); var_785_object = Obj();
	var_761_object = var_784_object;
	var_767_object = var_785_object;
	TaskCall(9);
	func_2712(var_786_object, var_787_object, var_788_string, var_789_bool, var_784_object, var_785_object);
	TaskReturn();
	@@var_767_object:IsDialogEnd(var_770_bool);
	
Label_2694:
	var_876_bool = var_770_bool == 0; //@nz
	if(var_876_bool != 0) {
		sync();
		@@var_767_object:IsDialogEnd(var_770_bool);
		goto Label_2694;
	}
	var_761_object = Obj();
	func_7130();
	StopDialog(var_767_object);
	@@var_767_object:GetReturnValue((int)-1);
	var_769_int = var_760_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7243(var_201_bool, var_202_object)
{
	var_203_string = ""; var_204_int = 0; var_205_bool = 0; var_206_int = 0; var_207_string = ""; var_208_string = ""; var_209_int = 0; var_210_bool = 0; var_211_int = 0; var_212_string = "";
	var_214_int = 0;
	func_7487(var_214_int);
	var_220_int = "d" + var_214_int;
	var_208_string = var_220_int + "m";
	var_209_int = 0;
	
Label_7252:
	if((int)1 != 0) {
		var_224_int = var_209_int + (int)1;
		var_225_int = var_208_string + var_224_int;
		@@var_202_object:HasProperty(var_225_int, var_210_bool);
		var_226_bool = var_210_bool == 0; //@nz
		if(var_226_bool != 0) {
		} else {
			var_209_int = var_209_int + (int)1;
			goto Label_7252;
		}
	}
	var_227_bool = var_209_int == 0; //@nz
	if(var_227_bool != 0) {
		var_201_bool = 0;
		return 10;
	}
	var_211_int = 0;
	var_229_bool = var_209_int > (int)1;
	if(var_229_bool != 0) {
		irand(var_211_int, var_209_int);
	}
	var_231_int = var_211_int + (int)1;
	var_232_int = var_208_string + var_231_int;
	@@var_202_object:GetProperty(var_232_int, var_212_string);
	var_233_bool = 0; var_234_string = "";
	var_212_string = var_234_string;
	func_7317(var_233_bool, var_234_string);
	var_233_bool = var_201_bool;
	return 10;
	
}


func_7760()
{
	SetVariable("d9q03", (int)1000);
	func_9091();
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_254_object, var_255_object)
{
	var_0_object = var_255_object;
	var_1_object = var_254_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_261_object = Obj(); var_262_object = Obj();
		var_261_object = var_1_object;
		var_262_object = var_0_object;
		func_8257();
		var_265_string = "";
		func_144(var_255_object, "Neutral");
		@@@var_0_object:SetMessage((int)500441);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)508443, (int)35012, (int)9266);
		@@@var_0_object:AddReply((int)533485, (int)35013, (int)35011);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_289_bool = 0;
	func_7553(var_289_bool);
	if(var_289_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_290_string = var_3_string;
		if(var_290_string != 0) {
		} else {
			var_291_string = "";
			var_291_string = var_2_object;
			func_7286(var_291_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_304_string = var_3_string;
		if(var_304_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_8786(var_1047_bool)
{
	var_1049_int = 0; var_1050_string = "";
	func_7355(var_1049_int, "ood6Lara3");
	var_1052_bool = var_1049_int == (int)0;
	if(var_1052_bool != 0) {
		var_1047_bool = 1;
		return 0;
	}
	var_1047_bool = 0;
	return 0;
}


func_8279(var_268_object)
{
	Trace("morfin is given");
	var_271_object = Obj(); var_272_string = ""; var_273_int = 0;
	var_268_object = var_271_object;
	func_7433(var_271_object, "morfin", (int)1);
	return 0;
}


func_7769()
{
	var_111_int = 0; var_112_string = "";
	func_7355(var_111_int, "d9q04");
	var_116_bool = var_111_int == (int)1;
	if(var_116_bool != 0) {
		SetVariable("d9q04", (int)2);
		func_9117();
	}
	return 0;
}


func_8798(var_1062_bool)
{
	var_1064_int = 0; var_1065_string = "";
	func_7355(var_1064_int, "ood6Lara4");
	var_1067_bool = var_1064_int == (int)0;
	if(var_1067_bool != 0) {
		var_1062_bool = 1;
		return 0;
	}
	var_1062_bool = 0;
	return 0;
}


func_8290(var_274_object)
{
	Trace("etorfin is given");
	var_277_object = Obj(); var_278_string = ""; var_279_int = 0;
	var_274_object = var_277_object;
	func_7433(var_277_object, "etorfin", (int)1);
	return 0;
}


func_7785(var_167_object)
{
	var_169_int = 0; var_170_int = 0;
	@@var_167_object:RemoveItemByType(var_170_int, "Gun_danko", (int)1);
	return 2;
}


func_8810(var_1029_bool)
{
	var_1031_int = 0; var_1032_string = "";
	func_7355(var_1031_int, "d6q01");
	var_1034_bool = var_1031_int == (int)1000;
	if(var_1034_bool != 0) {
		var_1029_bool = 1;
		return 0;
	}
	var_1029_bool = 0;
	return 0;
}


func_8301(var_244_object)
{
	Trace("novocaine is given");
	var_247_object = Obj(); var_248_string = ""; var_249_int = 0;
	var_244_object = var_247_object;
	func_7433(var_247_object, "novocaine", (int)1);
	return 0;
}


func_7791(var_210_object)
{
	Trace("walnut2 is given");
	var_213_object = Obj(); var_214_string = ""; var_215_int = 0;
	var_210_object = var_213_object;
	func_7433(var_213_object, "walnut", (int)2);
	return 0;
}


func_6770(var_0_object)
{
	var_67_bool = 0;
	func_7056(var_67_bool);
	var_70_bool = var_67_bool == 0; //@nz
	if(var_70_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_6779:
	func_6946();
	goto Label_6779;
}
EMIT "Return(); Pop(0)";


func_7286(var_291_string)
{
	var_292_bool = 0; var_293_float = 0; var_294_float = 0; var_295_bool = 0; var_296_float = 0; var_297_float = 0;
	lshHasAnimation(var_295_bool, var_291_string);
	var_298_bool = var_295_bool;
	if(var_298_bool != 0) {
		lshGetAnimTimes(var_291_string, var_296_float, var_297_float);
		lshPlayAnimation(var_296_float, var_297_float, (bool)0);
	} else {
		var_301_int = "Can't find lsh animation : " + var_291_string;
		Trace(var_301_int);
	}
	return 6;
	
}


func_631(var_2_object, var_989_string)
{
	var_990_bool = 0;
	func_7553(var_990_bool);
	var_991_bool = var_990_bool == 0; //@nz
	if(var_991_bool != 0) {
		return 0;
	}
	var_992_bool = var_989_string == var_2_object;
	if(var_992_bool != 0) {
		return 0;
	}
	var_993_string = ""; var_994_bool = 0;
	var_989_string = var_993_string;
	var_996_bool = var_989_string == "";
	if(var_996_bool != 0) {
		var_994_bool = 0;
	} else {
		var_994_bool = 1;
	}
	func_7302(var_993_string, var_994_bool);
	var_2_object = var_989_string;
	return 0;
	
}


func_8312(var_479_bool)
{
	var_481_int = 0; var_482_string = "";
	func_7355(var_481_int, "d1q04");
	var_484_bool = var_481_int == (int)0;
	if(var_484_bool != 0) {
		var_479_bool = 1;
		return 0;
	}
	var_479_bool = 0;
	return 0;
}


func_8822(var_1036_bool)
{
	var_1038_int = 0; var_1039_string = "";
	func_7355(var_1038_int, "d6q01");
	var_1041_bool = var_1038_int == (int)-1;
	if(var_1041_bool != 0) {
		var_1036_bool = 1;
		return 0;
	}
	var_1036_bool = 0;
	return 0;
}


func_7802(var_216_object)
{
	Trace("peanut3 is given");
	var_219_object = Obj(); var_220_string = ""; var_221_int = 0;
	var_216_object = var_219_object;
	func_7433(var_219_object, "peanut", (int)3);
	return 0;
}


func_6784(var_91_bool)
{
	var_92_object = Obj(); var_93_object = Obj();
	FindActor(var_93_object, "player");
	var_95_bool = var_93_object == 0; //@nz
	if(var_95_bool != 0) {
		var_91_bool = 0;
		return 2;
	}
	var_96_bool = 0; var_97_object = Obj();
	var_93_object = var_97_object;
	func_7047(var_96_bool, var_97_object);
	var_96_bool = var_91_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8834(var_645_bool, var_646_object)
{
	var_647_int = 0; var_648_int = 0;
	@@var_646_object:GetItemCountOfType(var_648_int, "smoked_meat");
	var_650_bool = 0;
	var_650_bool = 0;
	var_652_bool = var_648_int < (int)3;
	if(var_652_bool != 0) {
		var_654_bool = var_648_int > (int)0;
		if(var_654_bool != 0) {
			var_650_bool = 1;
		}
	}
	if(var_650_bool != 0) {
		var_645_bool = 1;
		return 2;
	}
	@@var_646_object:GetItemCountOfType(var_648_int, "dried_fish");
	var_656_bool = 0;
	var_656_bool = 0;
	var_658_bool = var_648_int < (int)3;
	if(var_658_bool != 0) {
		var_660_bool = var_648_int > (int)0;
		if(var_660_bool != 0) {
			var_656_bool = 1;
		}
	}
	if(var_656_bool != 0) {
		var_645_bool = 1;
		return 2;
	}
	@@var_646_object:GetItemCountOfType(var_648_int, "bread");
	var_662_bool = 0;
	var_662_bool = 0;
	var_664_bool = var_648_int < (int)3;
	if(var_664_bool != 0) {
		var_666_bool = var_648_int > (int)0;
		if(var_666_bool != 0) {
			var_662_bool = 1;
		}
	}
	if(var_662_bool != 0) {
		var_645_bool = 1;
		return 2;
	}
	var_645_bool = 0;
	return 2;
}


func_8324(var_470_bool)
{
	var_472_int = 0; var_473_string = "";
	func_7355(var_472_int, "d1q04");
	var_475_bool = var_472_int == (int)1000;
	if(var_475_bool != 0) {
		var_470_bool = 1;
		return 0;
	}
	var_470_bool = 0;
	return 0;
}


func_7813(var_102_object)
{
	Trace("milk is given");
	var_105_object = Obj(); var_106_string = ""; var_107_int = 0;
	var_102_object = var_105_object;
	func_7433(var_105_object, "milk", (int)1);
	return 0;
}


func_7302(var_269_string, var_270_bool)
{
	var_273_bool = 0; var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_float = 0; var_278_float = 0;
	lshHasAnimation(var_276_bool, var_269_string);
	var_279_bool = var_276_bool;
	if(var_279_bool != 0) {
		lshGetAnimTimes(var_269_string, var_277_float, var_278_float);
		lshPlayAnimation(var_277_float, var_278_float, var_270_bool);
	} else {
		var_281_int = "Can't find lsh animation : " + var_269_string;
		Trace(var_281_int);
	}
	return 6;
	
}


func_3717(var_0_object, var_1_object, var_2_object, var_3_string, var_904_object, var_905_object)
{
	var_0_object = var_905_object;
	var_1_object = var_904_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_911_string = "";
		func_3798(var_905_object, "Tiredness");
		@@@var_0_object:SetMessage((int)511662);
		@@@var_0_object:ClearReplies();
		var_920_bool = 0;
		var_920_bool = 1;
		var_921_bool = 0;
		var_921_bool = 1;
		var_922_bool = 0; var_923_object = Obj();
		var_923_object = var_1_object;
		func_8726(var_923_object);
		if(var_922_bool != 1) {
			var_928_bool = 0; var_929_object = Obj();
			var_929_object = var_1_object;
			func_8702(var_929_object);
			if(var_928_bool != 1) {
				var_921_bool = 0;
			}
		}
		if(var_921_bool != 1) {
			var_934_bool = 0; var_935_object = Obj();
			var_935_object = var_1_object;
			func_8714(var_935_object);
			if(var_934_bool != 1) {
				var_920_bool = 0;
			}
		}
		if(var_920_bool != 0) {
			@@@var_0_object:AddReply((int)511663, (int)12863, (int)12862);
		}
		@@@var_0_object:AddReply((int)511960, (int)-1, (int)13174);
		goto Label_3768;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe89";
	}
Label_3768:
	var_946_bool = 0;
	func_7553(var_946_bool);
	if(var_946_bool != 0) {

	Label_3772:
		lshWaitForAnimEnd();
		var_947_string = var_3_string;
		if(var_947_string != 0) {
		} else {
			var_948_string = "";
			var_948_string = var_2_object;
			func_7286(var_948_string);
			goto Label_3772;
	}
		PlayAnimation("all", "idle");

	Label_3787:
		WaitForAnimEnd();
		var_951_string = var_3_string;
		if(var_951_string != 0) {
			goto Label_3797;
		}
		PlayAnimation("all", "idle");
		goto Label_3787;
	}
	goto Label_3797;
	
Label_3797:
	return 0;
	
}


func_4231(var_0_object, var_1_object, var_2_object, var_3_string, var_412_object, var_413_object)
{
	var_0_object = var_413_object;
	var_1_object = var_412_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_419_bool = 0; var_420_object = Obj();
		var_420_object = var_1_object;
		func_8372(var_420_object);
		if(var_419_bool != 0) {
			var_427_object = Obj(); var_428_object = Obj();
			var_427_object = var_1_object;
			var_428_object = var_0_object;
			func_7712();
			var_431_string = "";
			func_4371(var_413_object, "Sympathy");
			@@@var_0_object:SetMessage((int)532729);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533502, (int)35033, (int)35032);
			@@@var_0_object:AddReply((int)533511, (int)35033, (int)35041);
		} else {
				var_454_string = "";
				func_4371(var_413_object, "Neutral");
				@@@var_0_object:SetMessage((int)531944);
				@@@var_0_object:ClearReplies();
				var_456_bool = 0;
				var_456_bool = 0;
				var_457_bool = 0;
				var_457_bool = 0;
				var_458_bool = 0; var_459_object = Obj();
				var_459_object = var_1_object;
				func_8360(var_459_object);
				if(var_458_bool != 0) {
					var_464_bool = 0; var_465_object = Obj();
					var_465_object = var_1_object;
					func_8348(var_465_object);
					if(var_464_bool != 0) {
						var_457_bool = 1;
					}
				}
				if(var_457_bool != 0) {
					var_470_bool = 0; var_471_object = Obj();
					var_471_object = var_1_object;
					func_8324(var_471_object);
					if(var_470_bool != 0) {
						var_456_bool = 1;
					}
				}
				if(var_456_bool != 0) {
					@@@var_0_object:AddReply((int)531945, (int)33350, (int)33349);
				}
				var_479_bool = 0; var_480_object = Obj();
				var_480_object = var_1_object;
				func_8312(var_480_object);
				if(var_479_bool != 0) {
					@@@var_0_object:AddReply((int)532734, (int)34209, (int)34208);
				}
				var_488_bool = 0;
				var_488_bool = 0;
				var_489_bool = 0; var_490_object = Obj();
				var_490_object = var_1_object;
				func_8384(var_489_bool, var_490_object);
				if(var_489_bool != 0) {
					var_498_bool = 0; var_499_object = Obj();
					var_499_object = var_1_object;
					func_8336(var_499_object);
					if(var_498_bool != 0) {
						var_488_bool = 1;
					}
				}
				if(var_488_bool != 0) {
					@@@var_0_object:AddReply((int)532737, (int)35052, (int)34211);
				}
				@@@var_0_object:AddReply((int)531948, (int)-1, (int)33352);
				goto Label_4341;
		}
	}
Label_4341:
	var_446_bool = 0;
	func_7553(var_446_bool);
	if(var_446_bool != 0) {

	Label_4345:
		lshWaitForAnimEnd();
		var_447_string = var_3_string;
		if(var_447_string != 0) {
		} else {
			var_448_string = "";
			var_448_string = var_2_object;
			func_7286(var_448_string);
			goto Label_4345;
	}
		PlayAnimation("all", "idle");

	Label_4360:
		WaitForAnimEnd();
		var_451_string = var_3_string;
		if(var_451_string != 0) {
			goto Label_4370;
		}
		PlayAnimation("all", "idle");
		goto Label_4360;

	}
	goto Label_4370;
	
Label_4370:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x108b";


func_6799(var_0_object)
{
	var_143_float = GetByIndex(var_0_object, 0);
	var_144_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_143_float, var_144_float);
	return 0;
}


func_144(var_2_object, var_265_string)
{
	var_266_bool = 0;
	func_7553(var_266_bool);
	var_267_bool = var_266_bool == 0; //@nz
	if(var_267_bool != 0) {
		return 0;
	}
	var_268_bool = var_265_string == var_2_object;
	if(var_268_bool != 0) {
		return 0;
	}
	var_269_string = ""; var_270_bool = 0;
	var_265_string = var_269_string;
	var_272_bool = var_265_string == "";
	if(var_272_bool != 0) {
		var_270_bool = 0;
	} else {
		var_270_bool = 1;
	}
	func_7302(var_269_string, var_270_bool);
	var_2_object = var_265_string;
	return 0;
	
}


func_7824()
{
	SetVariable("ood3Lara1", (int)1);
	return 0;
}


func_8336(var_498_bool)
{
	var_500_int = 0; var_501_string = "";
	func_7355(var_500_int, "d1q04");
	var_503_bool = var_500_int == (int)1;
	if(var_503_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_498_bool = 0;
	return 0;
}


func_6804(var_74_bool)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_object = Obj(); var_78_bool = 0;
	FindActor(var_77_object, "player");
	var_80_bool = var_77_object == 0; //@nz
	if(var_80_bool != 0) {
		var_74_bool = 0;
		return 4;
	}
	var_81_float = 0; var_82_object = Obj();
	var_77_object = var_82_object;
	func_7022(var_81_float, var_82_object);
	var_90_bool = var_81_float > (float)90000.0;
	if(var_90_bool != 0) {
		var_74_bool = 0;
		return 4;
	}
	CanSee(var_78_bool, var_77_object);
	var_78_bool = var_74_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_7317(var_193_bool, var_194_string)
{
	var_195_bool = 0; var_196_bool = 0;
	var_197_bool = 0;
	func_7553(var_197_bool);
	if(var_197_bool != 0) {
		lshHasSpeech(var_196_bool, var_194_string);
		var_198_bool = var_196_bool;
		if(var_198_bool != 0) {
			lshPlaySpeech(var_194_string);
			var_193_bool = 1;
			return 2;
		}
	}
	var_193_bool = 0;
	return 2;
}


func_7830()
{
	SetVariable("d9LaraVisit", (int)1);
	return 0;
}


func_2712(var_0_object, var_1_object, var_2_object, var_3_string, var_784_object, var_785_object)
{
	var_0_object = var_785_object;
	var_1_object = var_784_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_791_string = "";
		func_2852(var_785_object, "Neutral");
		@@@var_0_object:SetMessage((int)510151);
		@@@var_0_object:ClearReplies();
		var_800_bool = 0;
		var_800_bool = 0;
		var_801_bool = 0; var_802_object = Obj();
		var_802_object = var_1_object;
		func_8630(var_802_object);
		if(var_801_bool != 0) {
			var_807_bool = 0; var_808_object = Obj();
			var_808_object = var_1_object;
			func_8618(var_808_object);
			if(var_807_bool != 0) {
				var_800_bool = 1;
			}
		}
		if(var_800_bool != 0) {
			@@@var_0_object:AddReply((int)510152, (int)11195, (int)11194);
		}
		var_816_bool = 0;
		var_816_bool = 0;
		var_817_bool = 0; var_818_object = Obj();
		var_818_object = var_1_object;
		func_8642(var_818_object);
		if(var_817_bool != 0) {
			var_823_bool = 0; var_824_object = Obj();
			var_824_object = var_1_object;
			func_8654(var_824_object);
			if(var_823_bool != 0) {
				var_816_bool = 1;
			}
		}
		if(var_816_bool != 0) {
			@@@var_0_object:AddReply((int)510995, (int)12163, (int)12162);
		}
		var_832_bool = 0;
		var_832_bool = 0;
		var_833_bool = 0; var_834_object = Obj();
		var_834_object = var_1_object;
		func_8678(var_834_object);
		if(var_833_bool != 0) {
			var_839_bool = 0; var_840_object = Obj();
			var_840_object = var_1_object;
			func_8666(var_840_object);
			if(var_839_bool != 0) {
				var_832_bool = 1;
			}
		}
		if(var_832_bool != 0) {
			@@@var_0_object:AddReply((int)511435, (int)12638, (int)12637);
		}
		var_848_bool = 0;
		var_848_bool = 0;
		var_849_bool = 0;
		var_849_bool = 0;
		var_850_bool = 0; var_851_object = Obj();
		var_851_object = var_1_object;
		func_8666(var_851_object);
		if(var_850_bool != 0) {
			var_852_bool = 0; var_853_object = Obj();
			var_853_object = var_1_object;
			func_8690(var_853_object);
			var_858_bool = var_852_bool == 0; //@nz
			if(var_858_bool != 0) {
				var_849_bool = 1;
			}
		}
		if(var_849_bool != 0) {
			var_859_bool = 0; var_860_object = Obj();
			var_860_object = var_1_object;
			func_8678(var_860_object);
			var_861_bool = var_859_bool == 0; //@nz
			if(var_861_bool != 0) {
				var_848_bool = 1;
			}
		}
		if(var_848_bool != 0) {
			@@@var_0_object:AddReply((int)511476, (int)12683, (int)12682);
		}
		@@@var_0_object:AddReply((int)511479, (int)-1, (int)12685);
		goto Label_2822;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa9c";
	}
Label_2822:
	var_868_bool = 0;
	func_7553(var_868_bool);
	if(var_868_bool != 0) {

	Label_2826:
		lshWaitForAnimEnd();
		var_869_string = var_3_string;
		if(var_869_string != 0) {
		} else {
			var_870_string = "";
			var_870_string = var_2_object;
			func_7286(var_870_string);
			goto Label_2826;
	}
		PlayAnimation("all", "idle");

	Label_2841:
		WaitForAnimEnd();
		var_873_string = var_3_string;
		if(var_873_string != 0) {
			goto Label_2851;
		}
		PlayAnimation("all", "idle");
		goto Label_2841;
	}
	goto Label_2851;
	
Label_2851:
	return 0;
	
}


func_7836()
{
	func_9065();
	return 0;
}


func_8348(var_464_bool)
{
	var_466_int = 0; var_467_string = "";
	func_7355(var_466_int, "d1q01");
	var_469_bool = var_466_int == (int)6;
	if(var_469_bool != 0) {
		var_464_bool = 1;
		return 0;
	}
	var_464_bool = 0;
	return 0;
}


func_6301(var_0_object, var_1337_int, var_1338_object)
{
	var_1340_object = Obj(); var_1341_bool = 0; var_1342_int = 0; var_1343_bool = 0; var_1344_object = Obj(); var_1345_bool = 0; var_1346_int = 0; var_1347_bool = 0;
	var_0_object = var_1338_object;
	var_1348_bool = 0; var_1349_object = Obj(); var_1350_float = 0;
	var_1338_object = var_1349_object;
	func_7061(var_1348_bool, var_1349_object, (float)70.0);
	var_1351_bool = var_1348_bool == 0; //@nz
	if(var_1351_bool != 0) {
		var_1337_int = -2;
		return 8;
	}
	CreateDialog(var_1344_object);
	var_1352_int = 0;
	func_7547(var_1352_int);
	@@var_1344_object:SetNPCName(var_1352_int);
	var_1353_int = 0;
	func_7545(var_1353_int);
	@@var_1344_object:SetNPCDescription(var_1353_int);
	var_1354_string = "";
	func_7549(var_1354_string);
	@@var_1344_object:SetPhoto(var_1354_string);
	var_1355_string = "";
	func_7551(var_1355_string);
	@@var_1344_object:SetPhoto2(var_1355_string);
	var_1356_int = 0;
	func_9221(var_1356_int);
	@@var_1344_object:SetPlayerName(var_1356_int);
	IsOverrideActive(var_1345_bool);
	var_1357_bool = var_1345_bool;
	if(var_1357_bool != 0) {
		var_1337_int = -2;
		return 8;
	}
	DoDialog(var_1344_object);
	var_1358_bool = 0; var_1359_object = Obj();
	func_7339(Obj());
	var_1360_object = var_1359_object;
	func_7148(var_1358_bool, var_1359_object);
	var_1361_object = Obj(); var_1362_object = Obj();
	var_1338_object = var_1361_object;
	var_1344_object = var_1362_object;
	TaskCall(23);
	func_6382(var_1363_object, var_1364_object, var_1365_string, var_1366_bool, var_1361_object, var_1362_object);
	TaskReturn();
	@@var_1344_object:IsDialogEnd(var_1347_bool);
	
Label_6364:
	var_1394_bool = var_1347_bool == 0; //@nz
	if(var_1394_bool != 0) {
		sync();
		@@var_1344_object:IsDialogEnd(var_1347_bool);
		goto Label_6364;
	}
	var_1338_object = Obj();
	func_7130();
	StopDialog(var_1344_object);
	@@var_1344_object:GetReturnValue((int)-1);
	var_1346_int = var_1337_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7841()
{
	SetVariable("ood10Lara1", (int)1);
	return 0;
}


func_7332()
{
	var_69_bool = 0;
	func_7553(var_69_bool);
	if(var_69_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_7847(var_222_object)
{
	Trace("lens is given");
	var_225_object = Obj(); var_226_string = ""; var_227_int = 0;
	var_222_object = var_225_object;
	func_7433(var_225_object, "lens", (int)1);
	return 0;
}


func_8360(var_458_bool)
{
	var_460_int = 0; var_461_string = "";
	func_7355(var_460_int, "ood1Lara1");
	var_463_bool = var_460_int == (int)0;
	if(var_463_bool != 0) {
		var_458_bool = 1;
		return 0;
	}
	var_458_bool = 0;
	return 0;
}


func_6826()
{
	var_1454_float = 0; var_1455_float = 0;
	rand(var_1455_float, (int)8, (int)16);
	SetTimer((int)10, var_1455_float);
	return 2;
}


func_7339(var_161_object)
{
	var_162_object = Obj(); var_163_object = Obj();
	self(var_163_object);
	var_163_object = var_161_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7345(var_125_cvector, var_126_cvector)
{
	var_128_float = 0; var_129_float = 0;
	var_130_int = var_126_cvector | var_126_cvector;
	var_129_float = sqrt(var_130_int);
	var_131_float = 9.999999974752427e-07;
	var_132_bool = var_129_float < var_131_float;
	if(var_132_bool != 0) {
		var_125_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_125_cvector = var_126_cvector / var_129_float;
	return 2;
}


func_7858()
{
	SetVariable("ood2Lara1", (int)1);
	return 0;
}


func_6835()
{
	KillTimer((int)10);
	return 0;
}


func_8372(var_419_bool)
{
	var_421_int = 0; var_422_string = "";
	func_7355(var_421_int, "ood1Lara2");
	var_426_bool = var_421_int == (int)0;
	if(var_426_bool != 0) {
		var_419_bool = 1;
		return 0;
	}
	var_419_bool = 0;
	return 0;
}


func_8882(var_607_bool, var_608_object)
{
	var_609_int = 0; var_610_int = 0;
	@@var_608_object:GetItemCountOfType(var_610_int, "smoked_meat");
	var_613_bool = var_610_int < (int)3;
	if(var_613_bool != 0) {
		var_607_bool = 0;
		return 2;
	}
	@@var_608_object:GetItemCountOfType(var_610_int, "dried_fish");
	var_616_bool = var_610_int < (int)3;
	if(var_616_bool != 0) {
		var_607_bool = 0;
		return 2;
	}
	@@var_608_object:GetItemCountOfType(var_610_int, "bread");
	var_619_bool = var_610_int < (int)3;
	if(var_619_bool != 0) {
		var_607_bool = 0;
		return 2;
	}
	var_607_bool = 1;
	return 2;
}


func_4785(var_0_object, var_332_int, var_333_object)
{
	var_335_object = Obj(); var_336_bool = 0; var_337_int = 0; var_338_bool = 0; var_339_object = Obj(); var_340_bool = 0; var_341_int = 0; var_342_bool = 0;
	var_0_object = var_333_object;
	var_343_bool = 0; var_344_object = Obj(); var_345_float = 0;
	var_333_object = var_344_object;
	func_7061(var_343_bool, var_344_object, (float)70.0);
	var_346_bool = var_343_bool == 0; //@nz
	if(var_346_bool != 0) {
		var_332_int = -2;
		return 8;
	}
	CreateDialog(var_339_object);
	var_347_int = 0;
	func_7547(var_347_int);
	@@var_339_object:SetNPCName(var_347_int);
	var_348_int = 0;
	func_7545(var_348_int);
	@@var_339_object:SetNPCDescription(var_348_int);
	var_349_string = "";
	func_7549(var_349_string);
	@@var_339_object:SetPhoto(var_349_string);
	var_350_string = "";
	func_7551(var_350_string);
	@@var_339_object:SetPhoto2(var_350_string);
	var_351_int = 0;
	func_9221(var_351_int);
	@@var_339_object:SetPlayerName(var_351_int);
	IsOverrideActive(var_340_bool);
	var_352_bool = var_340_bool;
	if(var_352_bool != 0) {
		var_332_int = -2;
		return 8;
	}
	DoDialog(var_339_object);
	var_353_object = Obj(); var_354_object = Obj();
	var_333_object = var_353_object;
	var_339_object = var_354_object;
	TaskCall(15);
	func_4859(var_355_object, var_356_object, var_357_string, var_358_bool, var_353_object, var_354_object);
	TaskReturn();
	@@var_339_object:IsDialogEnd(var_342_bool);
	
Label_4841:
	var_383_bool = var_342_bool == 0; //@nz
	if(var_383_bool != 0) {
		sync();
		@@var_339_object:IsDialogEnd(var_342_bool);
		goto Label_4841;
	}
	var_333_object = Obj();
	func_7130();
	StopDialog(var_339_object);
	@@var_339_object:GetReturnValue((int)-1);
	var_341_int = var_332_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7864()
{
	SetVariable("ood2Lara2", (int)1);
	return 0;
}


func_7355(var_421_int, var_422_string)
{
	var_423_int = 0; var_424_int = 0;
	GetVariable(var_422_string, var_424_int);
	var_424_int = var_421_int;
	return 2;
}


func_7870()
{
	SetVariable("ood2Lara3", (int)1);
	return 0;
}


func_8384(var_489_bool, var_490_object)
{
	var_491_bool = 0; var_492_object = Obj(); var_493_string = "";
	var_490_object = var_492_object;
	func_7446(var_491_bool, var_492_object, "powder");
	if(var_491_bool != 0) {
		var_489_bool = 1;
		return 0;
	}
	var_489_bool = 0;
	return 0;
}


func_7360(var_105_object, var_106_string)
{
	var_107_object = Obj(); var_108_object = Obj(); var_109_object = Obj(); var_110_object = Obj();
	GetMainOutdoorScene(var_109_object);
	var_112_int = var_106_string + ".bin";
	AddBlankActor(var_110_object, var_109_object, var_106_string, var_112_int);
	var_110_object = var_105_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7876()
{
	SetVariable("ood2Lara4", (int)1);
	return 0;
}


func_7882()
{
	var_74_object = Obj(); var_75_object = Obj();
	SetVariable("d2q03", (int)1);
	func_9171(Obj());
	var_78_object = var_75_object;
	var_89_float = 0;
	func_7482(var_89_float);
	@@var_75_object:AddMark("d2q03LaraGotoMoneyFoodSelf", "pt_map_lara", (int)0, (int)515286, var_89_float);
	var_96_float = 0;
	func_7482(var_96_float);
	@@var_75_object:AddMark("d2q03LaraGotoJulia", "pt_map_julia", (int)0, (int)515288, var_96_float);
	var_101_float = 0;
	func_7482(var_101_float);
	@@var_75_object:AddMark("d2q03LaraGotoMaria", "pt_map_maria", (int)0, (int)515289, var_101_float);
	var_106_float = 0;
	func_7482(var_106_float);
	@@var_75_object:AddMark("d2q03LaraGotoMladVlad", "pt_map_mladvlad", (int)0, (int)515287, var_106_float);
	func_8961();
	func_8974();
	var_138_object = Obj(); var_139_string = "";
	func_7360(var_138_object, "quest_d2_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_8395(var_1127_bool)
{
	var_1129_int = 0; var_1130_string = "";
	func_7355(var_1129_int, "d8q04");
	var_1132_bool = var_1129_int == (int)1000;
	if(var_1132_bool != 0) {
		var_1127_bool = 1;
		return 0;
	}
	var_1127_bool = 0;
	return 0;
}


func_7371(var_158_int, var_159_int)
{
	var_160_object = Obj(); var_161_object = Obj();
	CreateIntVector(var_161_object);
	@@var_161_object:add(var_158_int);
	@@var_161_object:add(var_159_int);
	SendWorldWndMessage((int)3, var_161_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8909()
{
	var_74_object = Obj(); var_75_object = Obj();
	CreateDiaryEntry(var_75_object, (int)43, (int)2, (int)512125);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_75_object = var_80_object;
	func_9143(var_79_bool, var_80_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3798(var_2_object, var_911_string)
{
	var_912_bool = 0;
	func_7553(var_912_bool);
	var_913_bool = var_912_bool == 0; //@nz
	if(var_913_bool != 0) {
		return 0;
	}
	var_914_bool = var_911_string == var_2_object;
	if(var_914_bool != 0) {
		return 0;
	}
	var_915_string = ""; var_916_bool = 0;
	var_911_string = var_915_string;
	var_918_bool = var_911_string == "";
	if(var_918_bool != 0) {
		var_916_bool = 0;
	} else {
		var_916_bool = 1;
	}
	func_7302(var_915_string, var_916_bool);
	var_2_object = var_911_string;
	return 0;
	
}


func_8407(var_1133_bool)
{
	var_1135_int = 0; var_1136_string = "";
	func_7355(var_1135_int, "ood8Lara1");
	var_1138_bool = var_1135_int == (int)0;
	if(var_1138_bool != 0) {
		var_1133_bool = 1;
		return 0;
	}
	var_1133_bool = 0;
	return 0;
}


func_7383(var_211_int, var_212_int)
{
	var_213_object = Obj(); var_214_object = Obj();
	CreateIntVector(var_214_object);
	@@var_214_object:add(var_211_int);
	@@var_214_object:add(var_212_int);
	SendWorldWndMessage((int)4, var_214_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8922()
{
	var_184_object = Obj(); var_185_object = Obj();
	CreateDiaryEntry(var_185_object, (int)47, (int)2, (int)512129);
	var_189_bool = 0; var_190_object = Obj(); var_191_int = 0;
	var_185_object = var_190_object;
	func_9143(var_189_bool, var_190_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8419(var_1220_bool)
{
	var_1222_int = 0; var_1223_string = "";
	func_7355(var_1222_int, "d9q02");
	var_1225_bool = var_1222_int == (int)1;
	if(var_1225_bool != 0) {
		var_1220_bool = 1;
		return 0;
	}
	var_1220_bool = 0;
	return 0;
}


func_7395(var_219_object, var_220_int)
{
	var_221_int = 0; var_222_int = 0;
	var_223_object = Obj(); var_224_string = ""; var_225_int = 0;
	var_219_object = var_223_object;
	var_220_int = var_225_int;
	func_7030(var_223_object, "money", var_225_int);
	var_230_bool = var_220_int > (int)0;
	if(var_230_bool != 0) {
		GetInvItemByName(var_222_int, "Money");
		var_232_int = 0; var_233_int = 0;
		var_222_int = var_232_int;
		var_220_int = var_233_int;
		func_7371(var_232_int, var_233_int);
	}
	return 2;
}


func_8935()
{
	var_256_object = Obj(); var_257_object = Obj();
	CreateDiaryEntry(var_257_object, (int)48, (int)2, (int)512130);
	var_261_bool = 0; var_262_object = Obj(); var_263_int = 0;
	var_257_object = var_262_object;
	func_9143(var_261_bool, var_262_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1260(var_0_object, var_514_int, var_515_object)
{
	var_517_object = Obj(); var_518_bool = 0; var_519_int = 0; var_520_bool = 0; var_521_object = Obj(); var_522_bool = 0; var_523_int = 0; var_524_bool = 0;
	var_0_object = var_515_object;
	var_525_bool = 0; var_526_object = Obj(); var_527_float = 0;
	var_515_object = var_526_object;
	func_7061(var_525_bool, var_526_object, (float)70.0);
	var_528_bool = var_525_bool == 0; //@nz
	if(var_528_bool != 0) {
		var_514_int = -2;
		return 8;
	}
	CreateDialog(var_521_object);
	var_529_int = 0;
	func_7547(var_529_int);
	@@var_521_object:SetNPCName(var_529_int);
	var_530_int = 0;
	func_7545(var_530_int);
	@@var_521_object:SetNPCDescription(var_530_int);
	var_531_string = "";
	func_7549(var_531_string);
	@@var_521_object:SetPhoto(var_531_string);
	var_532_string = "";
	func_7551(var_532_string);
	@@var_521_object:SetPhoto2(var_532_string);
	var_533_int = 0;
	func_9221(var_533_int);
	@@var_521_object:SetPlayerName(var_533_int);
	IsOverrideActive(var_522_bool);
	var_534_bool = var_522_bool;
	if(var_534_bool != 0) {
		var_514_int = -2;
		return 8;
	}
	DoDialog(var_521_object);
	var_535_bool = 0; var_536_object = Obj();
	func_7339(Obj());
	var_537_object = var_536_object;
	func_7148(var_535_bool, var_536_object);
	var_538_object = Obj(); var_539_object = Obj();
	var_515_object = var_538_object;
	var_521_object = var_539_object;
	TaskCall(5);
	func_1341(var_540_object, var_541_object, var_542_string, var_543_bool, var_538_object, var_539_object);
	TaskReturn();
	@@var_521_object:IsDialogEnd(var_524_bool);
	
Label_1323:
	var_692_bool = var_524_bool == 0; //@nz
	if(var_692_bool != 0) {
		sync();
		@@var_521_object:IsDialogEnd(var_524_bool);
		goto Label_1323;
	}
	var_515_object = Obj();
	func_7130();
	StopDialog(var_521_object);
	@@var_521_object:GetReturnValue((int)-1);
	var_523_int = var_514_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6382(var_0_object, var_1_object, var_2_object, var_3_string, var_1361_object, var_1362_object)
{
	var_0_object = var_1362_object;
	var_1_object = var_1361_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1368_string = "";
		func_6445(var_1362_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_6415;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x18f2";
	}
Label_6415:
	var_1386_bool = 0;
	func_7553(var_1386_bool);
	if(var_1386_bool != 0) {

	Label_6419:
		lshWaitForAnimEnd();
		var_1387_string = var_3_string;
		if(var_1387_string != 0) {
		} else {
			var_1388_string = "";
			var_1388_string = var_2_object;
			func_7286(var_1388_string);
			goto Label_6419;
	}
		PlayAnimation("all", "idle");

	Label_6434:
		WaitForAnimEnd();
		var_1391_string = var_3_string;
		if(var_1391_string != 0) {
			goto Label_6444;
		}
		PlayAnimation("all", "idle");
		goto Label_6434;
	}
	goto Label_6444;
	
Label_6444:
	return 0;
	
}


func_8431(var_1191_bool)
{
	var_1193_int = 0; var_1194_string = "";
	func_7355(var_1193_int, "ood9Lara1");
	var_1196_bool = var_1193_int == (int)0;
	if(var_1196_bool != 0) {
		var_1191_bool = 1;
		return 0;
	}
	var_1191_bool = 0;
	return 0;
}


func_5363(var_0_object, var_1160_int, var_1161_object)
{
	var_1163_object = Obj(); var_1164_bool = 0; var_1165_int = 0; var_1166_bool = 0; var_1167_object = Obj(); var_1168_bool = 0; var_1169_int = 0; var_1170_bool = 0;
	var_0_object = var_1161_object;
	var_1171_bool = 0; var_1172_object = Obj(); var_1173_float = 0;
	var_1161_object = var_1172_object;
	func_7061(var_1171_bool, var_1172_object, (float)70.0);
	var_1174_bool = var_1171_bool == 0; //@nz
	if(var_1174_bool != 0) {
		var_1160_int = -2;
		return 8;
	}
	CreateDialog(var_1167_object);
	var_1175_int = 0;
	func_7547(var_1175_int);
	@@var_1167_object:SetNPCName(var_1175_int);
	var_1176_int = 0;
	func_7545(var_1176_int);
	@@var_1167_object:SetNPCDescription(var_1176_int);
	var_1177_string = "";
	func_7549(var_1177_string);
	@@var_1167_object:SetPhoto(var_1177_string);
	var_1178_string = "";
	func_7551(var_1178_string);
	@@var_1167_object:SetPhoto2(var_1178_string);
	var_1179_int = 0;
	func_9221(var_1179_int);
	@@var_1167_object:SetPlayerName(var_1179_int);
	IsOverrideActive(var_1168_bool);
	var_1180_bool = var_1168_bool;
	if(var_1180_bool != 0) {
		var_1160_int = -2;
		return 8;
	}
	DoDialog(var_1167_object);
	var_1181_bool = 0; var_1182_object = Obj();
	func_7339(Obj());
	var_1183_object = var_1182_object;
	func_7148(var_1181_bool, var_1182_object);
	var_1184_object = Obj(); var_1185_object = Obj();
	var_1161_object = var_1184_object;
	var_1167_object = var_1185_object;
	TaskCall(19);
	func_5444(var_1186_object, var_1187_object, var_1188_string, var_1189_bool, var_1184_object, var_1185_object);
	TaskReturn();
	@@var_1167_object:IsDialogEnd(var_1170_bool);
	
Label_5426:
	var_1269_bool = var_1170_bool == 0; //@nz
	if(var_1269_bool != 0) {
		sync();
		@@var_1167_object:IsDialogEnd(var_1170_bool);
		goto Label_5426;
	}
	var_1161_object = Obj();
	func_7130();
	StopDialog(var_1167_object);
	@@var_1167_object:GetReturnValue((int)-1);
	var_1169_int = var_1160_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8948()
{
	var_97_object = Obj(); var_98_object = Obj();
	CreateDiaryEntry(var_98_object, (int)44, (int)2, (int)512126);
	var_102_bool = 0; var_103_object = Obj(); var_104_int = 0;
	var_98_object = var_103_object;
	func_9143(var_102_bool, var_103_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7414(var_147_object, var_148_object, var_149_int)
{
	var_150_int = 0; var_151_int = 0; var_152_bool = 0; var_153_int = 0; var_154_int = 0; var_155_bool = 0;
	@@var_148_object:GetItemID(var_153_int);
	GetInvItemProperty(var_154_int, var_153_int, "Category");
	@@var_147_object:AddItem(var_155_bool, var_148_object, var_154_int, var_149_int);
	var_157_bool = var_155_bool == 0; //@nz
	if(var_157_bool != 0) {
		@@var_147_object:DropItems(var_148_object, var_149_int);
	} else {
		var_158_int = 0; var_159_int = 0;
		var_153_int = var_158_int;
		var_149_int = var_159_int;
		func_7371(var_158_int, var_159_int);
	}
	return 6;
	
}


func_4859(var_0_object, var_1_object, var_2_object, var_3_string, var_353_object, var_354_object)
{
	var_0_object = var_354_object;
	var_1_object = var_353_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_360_string = "";
		func_4917(var_354_object, "Neutral");
		@@@var_0_object:SetMessage((int)532765);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)532766, (int)-1, (int)34237);
		@@@var_0_object:AddReply((int)533666, (int)-1, (int)35198);
		goto Label_4887;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12ff";
	}
Label_4887:
	var_375_bool = 0;
	func_7553(var_375_bool);
	if(var_375_bool != 0) {

	Label_4891:
		lshWaitForAnimEnd();
		var_376_string = var_3_string;
		if(var_376_string != 0) {
		} else {
			var_377_string = "";
			var_377_string = var_2_object;
			func_7286(var_377_string);
			goto Label_4891;
	}
		PlayAnimation("all", "idle");

	Label_4906:
		WaitForAnimEnd();
		var_380_string = var_3_string;
		if(var_380_string != 0) {
			goto Label_4916;
		}
		PlayAnimation("all", "idle");
		goto Label_4906;
	}
	goto Label_4916;
	
Label_4916:
	return 0;
	
}


func_8443(var_1249_bool, var_1250_object)
{
	var_1251_bool = 0; var_1252_object = Obj(); var_1253_string = "";
	var_1250_object = var_1252_object;
	func_7446(var_1251_bool, var_1252_object, "Gun_danko");
	if(var_1251_bool != 0) {
		var_1249_bool = 1;
		return 0;
	}
	var_1249_bool = 0;
	return 0;
}


func_8961()
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateDiaryEntry(var_108_object, (int)12, (int)2, (int)503096);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_108_object = var_113_object;
	func_9143(var_112_bool, var_113_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7939()
{
	var_253_object = Obj(); var_254_object = Obj();
	SetVariable("d2q03", (int)2);
	func_9171(Obj());
	var_257_object = var_254_object;
	var_262_float = 0;
	func_7482(var_262_float);
	@@var_254_object:AddMark("d2q03LaraGotoSklad", "pt_map_d2q03_shouse", (int)0, (int)515290, var_262_float);
	func_8987();
	return 2;
}
EMIT "Stack[-1] = 0";


func_8454(var_1254_bool)
{
	var_1256_int = 0; var_1257_string = "";
	func_7355(var_1256_int, "d9q03");
	var_1259_bool = var_1256_int == (int)1;
	if(var_1259_bool != 0) {
		var_1254_bool = 1;
		return 0;
	}
	var_1254_bool = 0;
	return 0;
}


func_7433(var_142_object, var_143_string, var_144_int)
{
	var_145_object = Obj(); var_146_object = Obj();
	CreateInvItem(var_146_object);
	@@var_146_object:SetItemName(var_143_string);
	var_147_object = Obj(); var_148_object = Obj(); var_149_int = 0;
	var_142_object = var_147_object;
	var_146_object = var_148_object;
	var_144_int = var_149_int;
	func_7414(var_147_object, var_148_object, var_149_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8974()
{
	var_130_object = Obj(); var_131_object = Obj();
	CreateDiaryEntry(var_131_object, (int)63, (int)2, (int)512145);
	var_135_bool = 0; var_136_object = Obj(); var_137_int = 0;
	var_131_object = var_136_object;
	func_9143(var_135_bool, var_136_object, (int)12);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8466(var_1239_bool)
{
	var_1241_int = 0; var_1242_string = "";
	func_7355(var_1241_int, "d9q03");
	var_1244_bool = var_1241_int == (int)0;
	if(var_1244_bool != 0) {
		var_1239_bool = 1;
		return 0;
	}
	var_1239_bool = 0;
	return 0;
}


func_4371(var_2_object, var_431_string)
{
	var_432_bool = 0;
	func_7553(var_432_bool);
	var_433_bool = var_432_bool == 0; //@nz
	if(var_433_bool != 0) {
		return 0;
	}
	var_434_bool = var_431_string == var_2_object;
	if(var_434_bool != 0) {
		return 0;
	}
	var_435_string = ""; var_436_bool = 0;
	var_431_string = var_435_string;
	var_438_bool = var_431_string == "";
	if(var_438_bool != 0) {
		var_436_bool = 0;
	} else {
		var_436_bool = 1;
	}
	func_7302(var_435_string, var_436_bool);
	var_2_object = var_431_string;
	return 0;
	
}


func_7446(var_491_bool, var_492_object, var_493_string)
{
	var_494_int = 0; var_495_bool = 0; var_496_int = 0; var_497_bool = 0;
	GetInvItemByName(var_496_int, var_493_string);
	@@var_492_object:HasItem(var_496_int, var_497_bool);
	var_497_bool = var_491_bool;
	return 4;
}


func_7962(var_158_object)
{
	var_160_int = 0; var_161_int = 0;
	func_9000();
	@@var_158_object:RemoveItemByType(var_161_int, "smoked_meat", (int)3);
	@@var_158_object:RemoveItemByType(var_161_int, "dried_fish", (int)3);
	@@var_158_object:RemoveItemByType(var_161_int, "bread", (int)3);
	var_176_bool = 0; var_177_string = ""; var_178_string = "";
	func_7470(var_176_bool, "quest_d2_03", "completed");
	return 2;
}


func_8987()
{
	var_263_object = Obj(); var_264_object = Obj();
	CreateDiaryEntry(var_264_object, (int)65, (int)2, (int)512147);
	var_268_bool = 0; var_269_object = Obj(); var_270_int = 0;
	var_264_object = var_269_object;
	func_9143(var_268_bool, var_269_object, (int)12);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7453(var_200_bool, var_201_object, var_202_string)
{
	var_203_int = 0; var_204_int = 0; var_205_bool = 0; var_206_int = 0; var_207_int = 0; var_208_bool = 0;
	GetInvItemByName(var_206_int, var_202_string);
	GetInvItemProperty(var_207_int, var_206_int, "Category");
	@@var_201_object:RemoveItemByType(var_208_bool, var_206_int, var_207_int);
	var_210_bool = var_208_bool;
	if(var_210_bool != 0) {
		var_211_int = 0; var_212_int = 0;
		var_206_int = var_211_int;
		func_7383(var_211_int, (int)1);
	}
	var_208_bool = var_200_bool;
	return 6;
}


func_8478(var_736_bool)
{
	var_738_int = 0; var_739_string = "";
	func_7355(var_738_int, "ood3Lara1");
	var_741_bool = var_738_int == (int)0;
	if(var_741_bool != 0) {
		var_736_bool = 1;
		return 0;
	}
	var_736_bool = 0;
	return 0;
}


func_6946()
{
	var_71_int = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_int = 0; var_76_bool = 0; var_77_int = 0; var_78_int = 0; var_79_bool = 0; var_80_int = 0; var_81_int = 0; var_82_bool = 0;
	WaitForAnimEnd();
	var_83_bool = 0;
	func_7056(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 12;
	}
	func_7528((int)0);
	var_85_int = var_77_int;
	var_78_int = 0;
	
Label_6960:
	var_98_bool = 0;
	var_98_bool = 0;
	var_100_bool = var_78_int < (int)5;
	if(var_100_bool != 0) {
		var_101_bool = 0;
		func_7056(var_101_bool);
		if(var_101_bool != 0) {
			var_98_bool = 1;
		}
	}
	if(var_98_bool != 0) {
		var_102_bool = var_77_int == 0; //@nz
		if(var_102_bool != 0) {
			Sleep((int)3, var_79_bool);
			var_104_bool = var_79_bool == 0; //@nz
			if(var_104_bool != 0) {
			} else {
		} else {
				irand(var_80_int, var_77_int);
				irand(var_81_int, (int)5);
				var_110_bool = var_81_int != (int)0;
				if(var_110_bool != 0) {
					var_80_int = 0;
				}
				var_112_string = ""; var_113_int = 0;
				var_80_int = var_113_int;
				func_7521(var_112_string, var_113_int);
				PlayAnimation("all", var_112_string);
				WaitForAnimEnd(var_82_bool);
				var_114_bool = var_82_bool == 0; //@nz
				if(var_114_bool == 0) goto Label_7001;
				goto Label_7012;
		}
		Label_7001:
			var_105_bool = 0;
			func_7015(var_105_bool);
			var_106_bool = var_105_bool == 0; //@nz
			if(var_106_bool != 0) {
				goto Label_7012;
			}
			ResetAAS();
			var_78_int = var_78_int + (int)1;
			goto Label_6960;

		}
	}
Label_7012:
	ResetAAS();
	return 12;
	
}


func_2852(var_2_object, var_791_string)
{
	var_792_bool = 0;
	func_7553(var_792_bool);
	var_793_bool = var_792_bool == 0; //@nz
	if(var_793_bool != 0) {
		return 0;
	}
	var_794_bool = var_791_string == var_2_object;
	if(var_794_bool != 0) {
		return 0;
	}
	var_795_string = ""; var_796_bool = 0;
	var_791_string = var_795_string;
	var_798_bool = var_791_string == "";
	if(var_798_bool != 0) {
		var_796_bool = 0;
	} else {
		var_796_bool = 1;
	}
	func_7302(var_795_string, var_796_bool);
	var_2_object = var_791_string;
	return 0;
	
}


func_2341(var_0_object, var_696_int, var_697_object)
{
	var_699_object = Obj(); var_700_bool = 0; var_701_int = 0; var_702_bool = 0; var_703_object = Obj(); var_704_bool = 0; var_705_int = 0; var_706_bool = 0;
	var_0_object = var_697_object;
	var_707_bool = 0; var_708_object = Obj(); var_709_float = 0;
	var_697_object = var_708_object;
	func_7061(var_707_bool, var_708_object, (float)70.0);
	var_710_bool = var_707_bool == 0; //@nz
	if(var_710_bool != 0) {
		var_696_int = -2;
		return 8;
	}
	CreateDialog(var_703_object);
	var_711_int = 0;
	func_7547(var_711_int);
	@@var_703_object:SetNPCName(var_711_int);
	var_712_int = 0;
	func_7545(var_712_int);
	@@var_703_object:SetNPCDescription(var_712_int);
	var_713_string = "";
	func_7549(var_713_string);
	@@var_703_object:SetPhoto(var_713_string);
	var_714_string = "";
	func_7551(var_714_string);
	@@var_703_object:SetPhoto2(var_714_string);
	var_715_int = 0;
	func_9221(var_715_int);
	@@var_703_object:SetPlayerName(var_715_int);
	IsOverrideActive(var_704_bool);
	var_716_bool = var_704_bool;
	if(var_716_bool != 0) {
		var_696_int = -2;
		return 8;
	}
	DoDialog(var_703_object);
	var_717_bool = 0; var_718_object = Obj();
	func_7339(Obj());
	var_719_object = var_718_object;
	func_7148(var_717_bool, var_718_object);
	var_720_object = Obj(); var_721_object = Obj();
	var_697_object = var_720_object;
	var_703_object = var_721_object;
	TaskCall(7);
	func_2422(var_722_object, var_723_object, var_724_string, var_725_bool, var_720_object, var_721_object);
	TaskReturn();
	@@var_703_object:IsDialogEnd(var_706_bool);
	
Label_2404:
	var_756_bool = var_706_bool == 0; //@nz
	if(var_756_bool != 0) {
		sync();
		@@var_703_object:IsDialogEnd(var_706_bool);
		goto Label_2404;
	}
	var_697_object = Obj();
	func_7130();
	StopDialog(var_703_object);
	@@var_703_object:GetReturnValue((int)-1);
	var_705_int = var_696_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9000()
{
	var_162_object = Obj(); var_163_object = Obj();
	CreateDiaryEntry(var_163_object, (int)66, (int)2, (int)512148);
	var_167_bool = 0; var_168_object = Obj(); var_169_int = 0;
	var_163_object = var_168_object;
	func_9143(var_167_bool, var_168_object, (int)12);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8490(var_1313_bool)
{
	var_1315_int = 0; var_1316_string = "";
	func_7355(var_1315_int, "ood10Lara1");
	var_1318_bool = var_1315_int == (int)0;
	if(var_1318_bool != 0) {
		var_1313_bool = 1;
		return 0;
	}
	var_1313_bool = 0;
	return 0;
}


func_6445(var_2_object, var_1368_string)
{
	var_1369_bool = 0;
	func_7553(var_1369_bool);
	var_1370_bool = var_1369_bool == 0; //@nz
	if(var_1370_bool != 0) {
		return 0;
	}
	var_1371_bool = var_1368_string == var_2_object;
	if(var_1371_bool != 0) {
		return 0;
	}
	var_1372_string = ""; var_1373_bool = 0;
	var_1368_string = var_1372_string;
	var_1375_bool = var_1368_string == "";
	if(var_1375_bool != 0) {
		var_1373_bool = 0;
	} else {
		var_1373_bool = 1;
	}
	func_7302(var_1372_string, var_1373_bool);
	var_2_object = var_1368_string;
	return 0;
	
}


func_7470(var_192_bool, var_193_string, var_194_string)
{
	var_195_object = Obj(); var_196_object = Obj();
	FindActor(var_196_object, var_193_string);
	var_197_bool = var_196_object == 0; //@ne
	if(var_197_bool != 0) {
		var_192_bool = 0;
		return 2;
	}
	Trigger(var_196_object, var_194_string);
	var_192_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7984()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_4917(var_2_object, var_360_string)
{
	var_361_bool = 0;
	func_7553(var_361_bool);
	var_362_bool = var_361_bool == 0; //@nz
	if(var_362_bool != 0) {
		return 0;
	}
	var_363_bool = var_360_string == var_2_object;
	if(var_363_bool != 0) {
		return 0;
	}
	var_364_string = ""; var_365_bool = 0;
	var_360_string = var_364_string;
	var_367_bool = var_360_string == "";
	if(var_367_bool != 0) {
		var_365_bool = 0;
	} else {
		var_365_bool = 1;
	}
	func_7302(var_364_string, var_365_bool);
	var_2_object = var_360_string;
	return 0;
	
}


func_8502(var_546_bool)
{
	var_548_int = 0; var_549_string = "";
	func_7355(var_548_int, "ood2Lara1");
	var_551_bool = var_548_int == (int)0;
	if(var_551_bool != 0) {
		var_546_bool = 1;
		return 0;
	}
	var_546_bool = 0;
	return 0;
}


func_7990()
{
	var_248_bool = 0; var_249_string = ""; var_250_string = "";
	func_7470(var_248_bool, "quest_d2_03", "birdmask");
	return 0;
}


func_9013()
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateDiaryEntry(var_102_object, (int)88, (int)1, (int)512170);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_102_object = var_107_object;
	func_9143(var_106_bool, var_107_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7482(var_136_float)
{
	var_137_float = 0; var_138_float = 0;
	GetGameTime(var_138_float);
	var_138_float = var_136_float;
	return 2;
}


func_1341(var_0_object, var_1_object, var_2_object, var_3_string, var_538_object, var_539_object)
{
	var_0_object = var_539_object;
	var_1_object = var_538_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_545_bool = 0;
		var_545_bool = 0;
		var_546_bool = 0; var_547_object = Obj();
		var_547_object = var_1_object;
		func_8502(var_547_object);
		if(var_546_bool != 0) {
			var_552_bool = 0; var_553_object = Obj();
			var_553_object = var_1_object;
			func_8550(var_553_object);
			if(var_552_bool != 0) {
				var_545_bool = 1;
			}
		}
		if(var_545_bool != 0) {
			var_558_object = Obj(); var_559_object = Obj();
			var_558_object = var_1_object;
			var_559_object = var_0_object;
			func_7858();
			var_562_object = Obj(); var_563_object = Obj();
			var_562_object = var_1_object;
			var_563_object = var_0_object;
			func_8193();
			var_566_string = "";
			func_1538(var_539_object, "Sympathy");
			@@@var_0_object:SetMessage((int)506893);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507378, (int)8140, (int)8139);
			@@@var_0_object:AddReply((int)507384, (int)8140, (int)8145);
		} else {
				var_589_string = "";
				func_1538(var_539_object, "Neutral");
				@@@var_0_object:SetMessage((int)507377);
				@@@var_0_object:ClearReplies();
				var_591_bool = 0;
				var_591_bool = 0;
				var_592_bool = 0;
				var_592_bool = 0;
				var_593_bool = 0; var_594_object = Obj();
				var_594_object = var_1_object;
				func_8514(var_594_object);
				if(var_593_bool != 0) {
					var_599_bool = 0; var_600_object = Obj();
					var_600_object = var_1_object;
					func_8594(var_600_object);
					if(var_599_bool != 0) {
						var_592_bool = 1;
					}
				}
				if(var_592_bool != 0) {
					var_605_bool = 0; var_606_object = Obj();
					var_606_object = var_1_object;
					func_8572(var_605_bool, var_606_object);
					if(var_605_bool != 0) {
						var_591_bool = 1;
					}
				}
				if(var_591_bool != 0) {
					@@@var_0_object:AddReply((int)506900, (int)7607, (int)7606);
				}
				var_623_bool = 0;
				var_623_bool = 0;
				var_624_bool = 0;
				var_624_bool = 0;
				var_625_bool = 0; var_626_object = Obj();
				var_626_object = var_1_object;
				func_8526(var_626_object);
				if(var_625_bool != 0) {
					var_631_bool = 0; var_632_object = Obj();
					var_632_object = var_1_object;
					func_8572(var_631_bool, var_632_object);
					if(var_631_bool != 0) {
						var_624_bool = 1;
					}
				}
				if(var_624_bool != 0) {
					var_633_bool = 0; var_634_object = Obj();
					var_634_object = var_1_object;
					func_8582(var_634_object);
					if(var_633_bool != 0) {
						var_623_bool = 1;
					}
				}
				if(var_623_bool != 0) {
					@@@var_0_object:AddReply((int)506902, (int)7609, (int)7608);
				}
				var_642_bool = 0;
				var_642_bool = 0;
				var_643_bool = 0; var_644_object = Obj();
				var_644_object = var_1_object;
				func_8562(var_643_bool, var_644_object);
				if(var_643_bool != 0) {
					var_667_bool = 0; var_668_object = Obj();
					var_668_object = var_1_object;
					func_8582(var_668_object);
					if(var_667_bool != 0) {
						var_642_bool = 1;
					}
				}
				if(var_642_bool != 0) {
					@@@var_0_object:AddReply((int)506905, (int)7612, (int)7611);
				}
				var_672_bool = 0; var_673_object = Obj();
				var_673_object = var_1_object;
				func_8550(var_673_object);
				if(var_672_bool != 0) {
					@@@var_0_object:AddReply((int)507745, (int)7601, (int)8545);
				}
				var_677_bool = 0; var_678_object = Obj();
				var_678_object = var_1_object;
				func_8538(var_678_object);
				if(var_677_bool != 0) {
					@@@var_0_object:AddReply((int)533897, (int)10389, (int)35455);
				}
				@@@var_0_object:AddReply((int)507744, (int)-1, (int)8544);
				@@@var_0_object:AddReply((int)533898, (int)-1, (int)35456);
				goto Label_1508;
		}
	}
Label_1508:
	var_581_bool = 0;
	func_7553(var_581_bool);
	if(var_581_bool != 0) {

	Label_1512:
		lshWaitForAnimEnd();
		var_582_string = var_3_string;
		if(var_582_string != 0) {
		} else {
			var_583_string = "";
			var_583_string = var_2_object;
			func_7286(var_583_string);
			goto Label_1512;
	}
		PlayAnimation("all", "idle");

	Label_1527:
		WaitForAnimEnd();
		var_586_string = var_3_string;
		if(var_586_string != 0) {
			goto Label_1537;
		}
		PlayAnimation("all", "idle");
		goto Label_1527;

	}
	goto Label_1537;
	
Label_1537:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x541";


func_7997(var_189_object)
{
	var_190_object = Obj(); var_191_string = ""; var_192_float = 0;
	func_9171(Obj());
	var_193_object = var_190_object;
	func_9188(var_190_object, "pt_map_ospina", (float)2);
	var_194_object = Obj();
	func_9171(var_194_object);
	@@var_189_object:ShowMap(var_194_object);
	return 0;
}


func_7487(var_214_int)
{
	var_215_float = 0; var_216_float = 0;
	GetGameTime(var_216_float);
	var_218_int = 0;
	var_218_int = var_216_float / (int)24;
	var_214_int = (int)1 + var_218_int;
	return 2;
}


func_8514(var_593_bool)
{
	var_595_int = 0; var_596_string = "";
	func_7355(var_595_int, "ood2Lara2");
	var_598_bool = var_595_int == (int)0;
	if(var_598_bool != 0) {
		var_593_bool = 1;
		return 0;
	}
	var_593_bool = 0;
	return 0;
}


func_9026()
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateDiaryEntry(var_77_object, (int)143, (int)1, (int)515343);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_77_object = var_82_object;
	func_9143(var_81_bool, var_82_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5444(var_0_object, var_1_object, var_2_object, var_3_string, var_1184_object, var_1185_object)
{
	var_0_object = var_1185_object;
	var_1_object = var_1184_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1191_bool = 0; var_1192_object = Obj();
		var_1192_object = var_1_object;
		func_8431(var_1192_object);
		if(var_1191_bool != 0) {
			var_1197_object = Obj(); var_1198_object = Obj();
			var_1197_object = var_1_object;
			var_1198_object = var_0_object;
			func_7742();
			var_1201_object = Obj(); var_1202_object = Obj();
			var_1201_object = var_1_object;
			var_1202_object = var_0_object;
			func_7830();
			var_1205_string = "";
			func_5576(var_1185_object, "Neutral");
			@@@var_0_object:SetMessage((int)533541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533542, (int)37982, (int)35074);
			@@@var_0_object:AddReply((int)536217, (int)37982, (int)37990);
			var_1220_bool = 0; var_1221_object = Obj();
			var_1221_object = var_1_object;
			func_8419(var_1221_object);
			if(var_1220_bool != 0) {
				@@@var_0_object:AddReply((int)536205, (int)37979, (int)37978);
			}
		} else {
				var_1237_string = "";
				func_5576(var_1185_object, "Neutral");
				@@@var_0_object:SetMessage((int)533549);
				@@@var_0_object:ClearReplies();
				var_1239_bool = 0; var_1240_object = Obj();
				var_1240_object = var_1_object;
				func_8466(var_1240_object);
				if(var_1239_bool != 0) {
					@@@var_0_object:AddReply((int)533550, (int)35083, (int)35082);
				}
				var_1248_bool = 0;
				var_1248_bool = 0;
				var_1249_bool = 0; var_1250_object = Obj();
				var_1250_object = var_1_object;
				func_8443(var_1249_bool, var_1250_object);
				if(var_1249_bool != 0) {
					var_1254_bool = 0; var_1255_object = Obj();
					var_1255_object = var_1_object;
					func_8454(var_1255_object);
					if(var_1254_bool != 0) {
						var_1248_bool = 1;
					}
				}
				if(var_1248_bool != 0) {
					@@@var_0_object:AddReply((int)533553, (int)35086, (int)35085);
				}
				@@@var_0_object:AddReply((int)533556, (int)-1, (int)35088);
				@@@var_0_object:AddReply((int)536204, (int)-1, (int)37977);
				goto Label_5546;
		}
	}
Label_5546:
	var_1229_bool = 0;
	func_7553(var_1229_bool);
	if(var_1229_bool != 0) {

	Label_5550:
		lshWaitForAnimEnd();
		var_1230_string = var_3_string;
		if(var_1230_string != 0) {
		} else {
			var_1231_string = "";
			var_1231_string = var_2_object;
			func_7286(var_1231_string);
			goto Label_5550;
	}
		PlayAnimation("all", "idle");

	Label_5565:
		WaitForAnimEnd();
		var_1234_string = var_3_string;
		if(var_1234_string != 0) {
			goto Label_5575;
		}
		PlayAnimation("all", "idle");
		goto Label_5565;

	}
	goto Label_5575;
	
Label_5575:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1548";


func_7496(var_385_bool, var_386_int)
{
	var_387_int = 0;
	func_7487(var_387_int);
	var_385_bool = var_387_int == var_386_int;
	return 0;
}


func_8013(var_125_object)
{
	var_126_object = Obj(); var_127_string = ""; var_128_float = 0;
	func_9171(Obj());
	var_129_object = var_126_object;
	func_9188(var_126_object, "pt_map_mladvlad", (float)2);
	var_149_object = Obj();
	func_9171(var_149_object);
	@@var_125_object:ShowMap(var_149_object);
	return 0;
}


func_8526(var_625_bool)
{
	var_627_int = 0; var_628_string = "";
	func_7355(var_627_int, "ood2Lara3");
	var_630_bool = var_627_int == (int)0;
	if(var_630_bool != 0) {
		var_625_bool = 1;
		return 0;
	}
	var_625_bool = 0;
	return 0;
}


func_9039()
{
	var_80_object = Obj(); var_81_object = Obj();
	CreateDiaryEntry(var_81_object, (int)160, (int)1, (int)515393);
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0;
	var_81_object = var_86_object;
	func_9143(var_85_bool, var_86_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7502(var_317_bool, var_318_int)
{
	var_319_float = 0; var_320_int = 0; var_321_int = 0; var_322_float = 0; var_323_int = 0; var_324_int = 0;
	GetGameTime(var_322_float);
	var_326_int = 0;
	var_326_int = var_322_float / (int)24;
	var_323_int = (int)1 + var_326_int;
	var_328_bool = var_323_int != var_318_int;
	if(var_328_bool != 0) {
		var_317_bool = 0;
		return 6;
	}
	var_329_int = 0;
	var_322_float = var_329_int;
	var_324_int = var_329_int % (int)24;
	var_317_bool = var_324_int < (int)7;
	return 6;
}


func_8538(var_677_bool)
{
	var_679_int = 0; var_680_string = "";
	func_7355(var_679_int, "ood2Lara4");
	var_682_bool = var_679_int == (int)0;
	if(var_682_bool != 0) {
		var_677_bool = 1;
		return 0;
	}
	var_677_bool = 0;
	return 0;
}


func_9052()
{
	var_163_object = Obj(); var_164_object = Obj();
	CreateDiaryEntry(var_164_object, (int)118, (int)1, (int)513741);
	var_168_bool = 0; var_169_object = Obj(); var_170_int = 0;
	var_164_object = var_169_object;
	func_9143(var_168_bool, var_169_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8029(var_78_object)
{
	Trace("bread is given");
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0;
	var_78_object = var_81_object;
	func_7433(var_81_object, "bread", (int)1);
	return 0;
}


func_7521(var_91_string, var_92_int)
{
	var_93_string = ""; var_94_string = "";
	var_95_int = var_92_int;
	if(var_95_int != 0) {
		"idle" = "idle" + var_92_int;
	}
	var_94_string = var_91_string;
	return 2;
}


func_8550(var_552_bool)
{
	var_554_int = 0; var_555_string = "";
	func_7355(var_554_int, "d2q03");
	var_557_bool = var_554_int == (int)0;
	if(var_557_bool != 0) {
		var_552_bool = 1;
		return 0;
	}
	var_552_bool = 0;
	return 0;
}


func_7015(var_105_bool)
{
	var_105_bool = 1;
	return 0;
}


func_8040()
{
	SetVariable("ood4Lara1", (int)1);
	return 0;
}


func_7017()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_7528(var_85_int)
{
	var_86_int = 0; var_87_bool = 0; var_88_int = 0; var_89_bool = 0;
	var_88_int = 0;
	
Label_7530:
	var_91_string = ""; var_92_int = 0;
	var_88_int = var_92_int;
	func_7521(var_91_string, var_92_int);
	HasAnimation(var_89_bool, "all", var_91_string);
	var_96_bool = var_89_bool == 0; //@nz
	if(var_96_bool != 0) {
	} else {
		var_88_int = var_88_int + (int)1;
		goto Label_7530;
	}
	var_88_int = var_85_int;
	return 4;
	
}


func_9065()
{
	var_145_object = Obj(); var_146_object = Obj();
	CreateDiaryEntry(var_146_object, (int)719, (int)1, (int)538783);
	var_150_bool = 0; var_151_object = Obj(); var_152_int = 0;
	var_146_object = var_151_object;
	func_9143(var_150_bool, var_151_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8046()
{
	var_78_object = Obj(); var_79_object = Obj();
	SetVariable("d4q01", (int)2);
	func_9171(Obj());
	var_82_object = var_79_object;
	var_93_float = 0;
	func_7482(var_93_float);
	@@var_79_object:AddMark("d4q01LaraGotoMladVlad", "pt_map_mladvlad", (int)1, (int)511483, var_93_float);
	var_100_float = 0;
	func_7482(var_100_float);
	@@var_79_object:AddMark("d4q01LaraGotoMladVladSelf", "pt_map_lara", (int)1, (int)515321, var_100_float);
	func_9013();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7022(var_81_float, var_82_object)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0);
	GetPosition(var_86_cvector);
	@@var_82_object:GetPosition(var_87_cvector);
	var_88_cvector = var_87_cvector - var_86_cvector;
	var_81_float = var_88_cvector | var_88_cvector;
	return 6;
}


func_8562(var_643_bool, var_644_object)
{
	var_645_bool = 0; var_646_object = Obj();
	var_644_object = var_646_object;
	func_8834(var_645_bool, var_646_object);
	if(var_645_bool != 0) {
		var_643_bool = 1;
		return 0;
	}
	var_643_bool = 0;
	return 0;
}


func_4981(var_0_object, var_1086_int, var_1087_object)
{
	var_1089_object = Obj(); var_1090_bool = 0; var_1091_int = 0; var_1092_bool = 0; var_1093_object = Obj(); var_1094_bool = 0; var_1095_int = 0; var_1096_bool = 0;
	var_0_object = var_1087_object;
	var_1097_bool = 0; var_1098_object = Obj(); var_1099_float = 0;
	var_1087_object = var_1098_object;
	func_7061(var_1097_bool, var_1098_object, (float)70.0);
	var_1100_bool = var_1097_bool == 0; //@nz
	if(var_1100_bool != 0) {
		var_1086_int = -2;
		return 8;
	}
	CreateDialog(var_1093_object);
	var_1101_int = 0;
	func_7547(var_1101_int);
	@@var_1093_object:SetNPCName(var_1101_int);
	var_1102_int = 0;
	func_7545(var_1102_int);
	@@var_1093_object:SetNPCDescription(var_1102_int);
	var_1103_string = "";
	func_7549(var_1103_string);
	@@var_1093_object:SetPhoto(var_1103_string);
	var_1104_string = "";
	func_7551(var_1104_string);
	@@var_1093_object:SetPhoto2(var_1104_string);
	var_1105_int = 0;
	func_9221(var_1105_int);
	@@var_1093_object:SetPlayerName(var_1105_int);
	IsOverrideActive(var_1094_bool);
	var_1106_bool = var_1094_bool;
	if(var_1106_bool != 0) {
		var_1086_int = -2;
		return 8;
	}
	DoDialog(var_1093_object);
	var_1107_bool = 0; var_1108_object = Obj();
	func_7339(Obj());
	var_1109_object = var_1108_object;
	func_7148(var_1107_bool, var_1108_object);
	var_1110_object = Obj(); var_1111_object = Obj();
	var_1087_object = var_1110_object;
	var_1093_object = var_1111_object;
	TaskCall(17);
	func_5062(var_1112_object, var_1113_object, var_1114_string, var_1115_bool, var_1110_object, var_1111_object);
	TaskReturn();
	@@var_1093_object:IsDialogEnd(var_1096_bool);
	
Label_5044:
	var_1156_bool = var_1096_bool == 0; //@nz
	if(var_1156_bool != 0) {
		sync();
		@@var_1093_object:IsDialogEnd(var_1096_bool);
		goto Label_5044;
	}
	var_1087_object = Obj();
	func_7130();
	StopDialog(var_1093_object);
	@@var_1093_object:GetReturnValue((int)-1);
	var_1095_int = var_1086_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2422(var_0_object, var_1_object, var_2_object, var_3_string, var_720_object, var_721_object)
{
	var_0_object = var_721_object;
	var_1_object = var_720_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_727_string = "";
		func_2485(var_721_object, "Neutral");
		@@@var_0_object:SetMessage((int)509915);
		@@@var_0_object:ClearReplies();
		var_736_bool = 0; var_737_object = Obj();
		var_737_object = var_1_object;
		func_8478(var_737_object);
		if(var_736_bool != 0) {
			@@@var_0_object:AddReply((int)509916, (int)10924, (int)10923);
		}
		@@@var_0_object:AddReply((int)509924, (int)-1, (int)10933);
		goto Label_2455;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x97a";
	}
Label_2455:
	var_748_bool = 0;
	func_7553(var_748_bool);
	if(var_748_bool != 0) {

	Label_2459:
		lshWaitForAnimEnd();
		var_749_string = var_3_string;
		if(var_749_string != 0) {
		} else {
			var_750_string = "";
			var_750_string = var_2_object;
			func_7286(var_750_string);
			goto Label_2459;
	}
		PlayAnimation("all", "idle");

	Label_2474:
		WaitForAnimEnd();
		var_753_string = var_3_string;
		if(var_753_string != 0) {
			goto Label_2484;
		}
		PlayAnimation("all", "idle");
		goto Label_2474;
	}
	goto Label_2484;
	
Label_2484:
	return 0;
	
}


func_7030(var_223_object, var_224_string, var_225_int)
{
	var_226_int = 0; var_227_int = 0;
	@@var_223_object:GetProperty(var_224_string, var_227_int);
	var_228_int = var_227_int + var_225_int;
	@@var_223_object:SetProperty(var_224_string, var_228_int);
	return 2;
}


func_9078()
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateDiaryEntry(var_77_object, (int)659, (int)2, (int)533577);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_77_object = var_82_object;
	func_9143(var_81_bool, var_82_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7545(var_147_int)
{
	var_147_int = 515541;
	return 0;
}


func_7547(var_146_int)
{
	var_146_int = 502866;
	return 0;
}


func_8572(var_605_bool, var_606_object)
{
	var_607_bool = 0; var_608_object = Obj();
	var_606_object = var_608_object;
	func_8882(var_607_bool, var_608_object);
	if(var_607_bool != 0) {
		var_605_bool = 1;
		return 0;
	}
	var_605_bool = 0;
	return 0;
}


func_7549(var_148_string)
{
	var_148_string = "ui/NPC_Lara.png";
	return 0;
}


func_7037(var_74_bool, var_75_cvector)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0;
	GetPosition(var_79_cvector);
	var_80_cvector = var_75_cvector - var_79_cvector;
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_83_float = GetByIndex(var_80_cvector, 2);
	Rotate(var_82_float, var_83_float, var_81_bool);
	var_81_bool = var_74_bool;
	return 6;
}


func_7551(var_149_string)
{
	var_149_string = "ui/NPC_Lara_b.png";
	return 0;
}


func_6011(var_0_object, var_1273_int, var_1274_object)
{
	var_1276_object = Obj(); var_1277_bool = 0; var_1278_int = 0; var_1279_bool = 0; var_1280_object = Obj(); var_1281_bool = 0; var_1282_int = 0; var_1283_bool = 0;
	var_0_object = var_1274_object;
	var_1284_bool = 0; var_1285_object = Obj(); var_1286_float = 0;
	var_1274_object = var_1285_object;
	func_7061(var_1284_bool, var_1285_object, (float)70.0);
	var_1287_bool = var_1284_bool == 0; //@nz
	if(var_1287_bool != 0) {
		var_1273_int = -2;
		return 8;
	}
	CreateDialog(var_1280_object);
	var_1288_int = 0;
	func_7547(var_1288_int);
	@@var_1280_object:SetNPCName(var_1288_int);
	var_1289_int = 0;
	func_7545(var_1289_int);
	@@var_1280_object:SetNPCDescription(var_1289_int);
	var_1290_string = "";
	func_7549(var_1290_string);
	@@var_1280_object:SetPhoto(var_1290_string);
	var_1291_string = "";
	func_7551(var_1291_string);
	@@var_1280_object:SetPhoto2(var_1291_string);
	var_1292_int = 0;
	func_9221(var_1292_int);
	@@var_1280_object:SetPlayerName(var_1292_int);
	IsOverrideActive(var_1281_bool);
	var_1293_bool = var_1281_bool;
	if(var_1293_bool != 0) {
		var_1273_int = -2;
		return 8;
	}
	DoDialog(var_1280_object);
	var_1294_bool = 0; var_1295_object = Obj();
	func_7339(Obj());
	var_1296_object = var_1295_object;
	func_7148(var_1294_bool, var_1295_object);
	var_1297_object = Obj(); var_1298_object = Obj();
	var_1274_object = var_1297_object;
	var_1280_object = var_1298_object;
	TaskCall(21);
	func_6092(var_1299_object, var_1300_object, var_1301_string, var_1302_bool, var_1297_object, var_1298_object);
	TaskReturn();
	@@var_1280_object:IsDialogEnd(var_1283_bool);
	
Label_6074:
	var_1333_bool = var_1283_bool == 0; //@nz
	if(var_1333_bool != 0) {
		sync();
		@@var_1280_object:IsDialogEnd(var_1283_bool);
		goto Label_6074;
	}
	var_1274_object = Obj();
	func_7130();
	StopDialog(var_1280_object);
	@@var_1280_object:GetReturnValue((int)-1);
	var_1282_int = var_1273_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7553(var_141_bool)
{
	var_141_bool = 1;
	return 0;
}


func_7555()
{
	func_8909();
	func_8948();
	var_105_object = Obj(); var_106_string = "";
	func_7360(var_105_object, "quest_d1_04");
	return 0;
}


func_9091()
{
	var_131_object = Obj(); var_132_object = Obj();
	CreateDiaryEntry(var_132_object, (int)661, (int)2, (int)533579);
	var_136_bool = 0; var_137_object = Obj(); var_138_int = 0;
	var_132_object = var_137_object;
	func_9143(var_136_bool, var_137_object, (int)659);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8582(var_633_bool)
{
	var_635_int = 0; var_636_string = "";
	func_7355(var_635_int, "d2q03");
	var_638_bool = var_635_int == (int)1;
	if(var_638_bool != 0) {
		var_633_bool = 1;
		return 0;
	}
	var_633_bool = 0;
	return 0;
}


func_7047(var_70_bool, var_71_object)
{
	var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	@@var_71_object:GetPosition(var_73_cvector);
	var_74_bool = 0; var_75_cvector = CVector(0,0,0);
	var_73_cvector = var_75_cvector;
	func_7037(var_74_bool, var_75_cvector);
	var_74_bool = var_70_bool;
	return 2;
}


func_8078()
{
	SetVariable("ood4Lara2", (int)1);
	return 0;
}


func_7567()
{
	var_173_object = Obj(); var_174_object = Obj(); var_175_object = Obj(); var_176_object = Obj();
	func_9171(Obj());
	var_177_object = var_175_object;
	@@var_175_object:FindMark(var_176_object, "k2q04AnnaGotoGatherer1");
	var_179_object = var_176_object;
	if(var_179_object != 0) {
		@@var_176_object:Remove();
	}
	@@var_175_object:FindMark(var_176_object, "k2q04MladVladGotoAnna");
	var_181_object = var_176_object;
	if(var_181_object != 0) {
		@@var_176_object:Remove();
	}
	@@var_175_object:FindMark(var_176_object, "k2q04AnnaGotoGatherer3");
	var_183_object = var_176_object;
	if(var_183_object != 0) {
		@@var_176_object:Remove();
	}
	func_8922();
	var_192_bool = 0; var_193_string = ""; var_194_string = "";
	func_7470(var_192_bool, "quest_d1_04", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7056(var_67_bool)
{
	var_68_bool = 0; var_69_bool = 0;
	IsLoaded(var_69_bool);
	var_69_bool = var_67_bool;
	return 2;
}


func_9104()
{
	var_99_object = Obj(); var_100_object = Obj();
	CreateDiaryEntry(var_100_object, (int)660, (int)2, (int)533578);
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0;
	var_100_object = var_105_object;
	func_9143(var_104_bool, var_105_object, (int)659);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8594(var_599_bool)
{
	var_601_int = 0; var_602_string = "";
	func_7355(var_601_int, "d2q03");
	var_604_bool = var_601_int == (int)3;
	if(var_604_bool != 0) {
		var_599_bool = 1;
		return 0;
	}
	var_599_bool = 0;
	return 0;
}


func_8084()
{
	var_166_object = Obj(); var_167_object = Obj();
	SetVariable("d4q01_subquest", (int)3);
	func_9171(Obj());
	var_170_object = var_167_object;
	var_175_float = 0;
	func_7482(var_175_float);
	@@var_167_object:AddMark("d4q01LaraGotoOspina", "pt_map_ospina", (int)0, (int)511506, var_175_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7061(var_98_bool, var_99_object, var_100_float)
{
	var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_bool = 0; var_109_bool = 0; var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_bool = 0; var_118_bool = 0;
	@@var_99_object:GetPosition(var_111_cvector);
	@@var_99_object:GetEyesHeight(var_110_float);
	var_119_float = GetByIndex(var_111_cvector, 1);
	var_119_float = var_119_float + var_110_float;
	SetByIndex(var_111_cvector, 1) = var_119_float;
	GetPosition(var_112_cvector);
	GetEyesHeight(var_110_float);
	var_120_float = GetByIndex(var_112_cvector, 1);
	var_120_float = var_120_float + var_110_float;
	SetByIndex(var_112_cvector, 1) = var_120_float;
	var_113_cvector = var_111_cvector - var_112_cvector;
	var_121_float = GetByIndex(var_113_cvector, 1);
	SetByIndex(var_113_cvector, 1) = (float)0;
	var_122_int = var_113_cvector | var_113_cvector;
	var_123_float = sqrt(var_122_int);
	var_113_cvector = var_113_cvector / var_123_float;
	var_114_cvector = -var_113_cvector;
	var_124_float = var_113_cvector * var_100_float;
	var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0);
	var_126_cvector = var_114_cvector ^ CVector(0.0, 1.0, 0.0);
	func_7345(var_125_cvector, var_126_cvector);
	var_134_float = var_125_cvector * (int)25;
	var_135_int = var_124_float + var_134_float;
	var_115_cvector = var_135_int - CVector(0.0, 10.0, 0.0);
	var_116_cvector = var_112_cvector + var_115_cvector;
	IsOverrideActive(var_117_bool);
	var_137_bool = var_117_bool;
	if(var_137_bool != 0) {
		var_98_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_116_cvector, var_114_cvector, (bool)1);
	var_139_float = GetByIndex(var_115_cvector, 0);
	var_140_float = GetByIndex(var_115_cvector, 2);
	Rotate(var_139_float, var_140_float);
	var_141_bool = 0;
	func_7553(var_141_bool);
	if(var_141_bool != 0) {
	} else {
		HasAnimationTrack(var_118_bool, "head");
		var_143_bool = var_118_bool;
		if(var_143_bool == 0) goto Label_7124;
		LookAsyncCamera("head");
	}
Label_7124:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_98_bool = 1;
	return 18;
	
}


func_410(var_0_object, var_958_int, var_959_object)
{
	var_961_object = Obj(); var_962_bool = 0; var_963_int = 0; var_964_bool = 0; var_965_object = Obj(); var_966_bool = 0; var_967_int = 0; var_968_bool = 0;
	var_0_object = var_959_object;
	var_969_bool = 0; var_970_object = Obj(); var_971_float = 0;
	var_959_object = var_970_object;
	func_7061(var_969_bool, var_970_object, (float)70.0);
	var_972_bool = var_969_bool == 0; //@nz
	if(var_972_bool != 0) {
		var_958_int = -2;
		return 8;
	}
	CreateDialog(var_965_object);
	var_973_int = 0;
	func_7547(var_973_int);
	@@var_965_object:SetNPCName(var_973_int);
	var_974_int = 0;
	func_7545(var_974_int);
	@@var_965_object:SetNPCDescription(var_974_int);
	var_975_string = "";
	func_7549(var_975_string);
	@@var_965_object:SetPhoto(var_975_string);
	var_976_string = "";
	func_7551(var_976_string);
	@@var_965_object:SetPhoto2(var_976_string);
	var_977_int = 0;
	func_9221(var_977_int);
	@@var_965_object:SetPlayerName(var_977_int);
	IsOverrideActive(var_966_bool);
	var_978_bool = var_966_bool;
	if(var_978_bool != 0) {
		var_958_int = -2;
		return 8;
	}
	DoDialog(var_965_object);
	var_979_bool = 0; var_980_object = Obj();
	func_7339(Obj());
	var_981_object = var_980_object;
	func_7148(var_979_bool, var_980_object);
	var_982_object = Obj(); var_983_object = Obj();
	var_959_object = var_982_object;
	var_965_object = var_983_object;
	TaskCall(3);
	func_491(var_984_object, var_985_object, var_986_string, var_987_bool, var_982_object, var_983_object);
	TaskReturn();
	@@var_965_object:IsDialogEnd(var_968_bool);
	
Label_473:
	var_1082_bool = var_968_bool == 0; //@nz
	if(var_1082_bool != 0) {
		sync();
		@@var_965_object:IsDialogEnd(var_968_bool);
		goto Label_473;
	}
	var_959_object = Obj();
	func_7130();
	StopDialog(var_965_object);
	@@var_965_object:GetReturnValue((int)-1);
	var_967_int = var_958_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9117()
{
	var_119_object = Obj(); var_120_object = Obj();
	CreateDiaryEntry(var_120_object, (int)664, (int)2, (int)533582);
	var_124_bool = 0; var_125_object = Obj(); var_126_int = 0;
	var_120_object = var_125_object;
	func_9143(var_124_bool, var_125_object, (int)662);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8606(var_1053_bool)
{
	var_1055_int = 0; var_1056_string = "";
	func_7355(var_1055_int, "d2q03");
	var_1058_bool = var_1055_int == (int)1000;
	if(var_1058_bool != 0) {
		var_1053_bool = 1;
		return 0;
	}
	var_1053_bool = 0;
	return 0;
}


func_6560(var_0_object, var_1396_int, var_1397_object)
{
	var_1399_object = Obj(); var_1400_bool = 0; var_1401_int = 0; var_1402_bool = 0; var_1403_object = Obj(); var_1404_bool = 0; var_1405_int = 0; var_1406_bool = 0;
	var_0_object = var_1397_object;
	var_1407_bool = 0; var_1408_object = Obj(); var_1409_float = 0;
	var_1397_object = var_1408_object;
	func_7061(var_1407_bool, var_1408_object, (float)70.0);
	var_1410_bool = var_1407_bool == 0; //@nz
	if(var_1410_bool != 0) {
		var_1396_int = -2;
		return 8;
	}
	CreateDialog(var_1403_object);
	var_1411_int = 0;
	func_7547(var_1411_int);
	@@var_1403_object:SetNPCName(var_1411_int);
	var_1412_int = 0;
	func_7545(var_1412_int);
	@@var_1403_object:SetNPCDescription(var_1412_int);
	var_1413_string = "";
	func_7549(var_1413_string);
	@@var_1403_object:SetPhoto(var_1413_string);
	var_1414_string = "";
	func_7551(var_1414_string);
	@@var_1403_object:SetPhoto2(var_1414_string);
	var_1415_int = 0;
	func_9221(var_1415_int);
	@@var_1403_object:SetPlayerName(var_1415_int);
	IsOverrideActive(var_1404_bool);
	var_1416_bool = var_1404_bool;
	if(var_1416_bool != 0) {
		var_1396_int = -2;
		return 8;
	}
	DoDialog(var_1403_object);
	var_1417_bool = 0; var_1418_object = Obj();
	func_7339(Obj());
	var_1419_object = var_1418_object;
	func_7148(var_1417_bool, var_1418_object);
	var_1420_object = Obj(); var_1421_object = Obj();
	var_1397_object = var_1420_object;
	var_1403_object = var_1421_object;
	TaskCall(25);
	func_6641(var_1422_object, var_1423_object, var_1424_string, var_1425_bool, var_1420_object, var_1421_object);
	TaskReturn();
	@@var_1403_object:IsDialogEnd(var_1406_bool);
	
Label_6623:
	var_1450_bool = var_1406_bool == 0; //@nz
	if(var_1450_bool != 0) {
		sync();
		@@var_1403_object:IsDialogEnd(var_1406_bool);
		goto Label_6623;
	}
	var_1397_object = Obj();
	func_7130();
	StopDialog(var_1403_object);
	@@var_1403_object:GetReturnValue((int)-1);
	var_1405_int = var_1396_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8104()
{
	SetVariable("ood4Lara3", (int)1);
	return 0;
}


func_8618(var_807_bool)
{
	var_809_int = 0; var_810_string = "";
	func_7355(var_809_int, "d4q01");
	var_812_bool = var_809_int == (int)1;
	if(var_812_bool != 0) {
		var_807_bool = 1;
		return 0;
	}
	var_807_bool = 0;
	return 0;
}


func_9130(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj();
	GetDiaryRoot(var_92_object);
	var_93_bool = var_92_object == 0; //@nz
	if(var_93_bool != 0) {
		Trace("Can't retrieve diary root");
		var_90_object = 0;
		return 2;
	}
	var_92_object = var_90_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8110()
{
	SetVariable("d4q02LaraGivesMedcine", (int)1);
	return 0;
}


func_8116(var_206_object)
{
	var_207_object = Obj(); var_208_object = Obj();
	var_209_bool = 0;
	var_209_bool = 0;
	var_210_bool = 0;
	var_210_bool = 0;
	var_211_int = 0; var_212_string = "";
	func_7355(var_211_int, "d4q02AnnaGivesMedcine");
	var_216_bool = var_211_int == (int)1;
	if(var_216_bool != 0) {
		var_217_int = 0; var_218_string = "";
		func_7355(var_217_int, "d4q02JuliaGivesMedcine");
		var_220_bool = var_217_int == (int)1;
		if(var_220_bool != 0) {
			var_210_bool = 1;
		}
	}
	if(var_210_bool != 0) {
		var_221_int = 0; var_222_string = "";
		func_7355(var_221_int, "d4q02LaraGivesMedcine");
		var_224_bool = var_221_int == (int)1;
		if(var_224_bool != 0) {
			var_209_bool = 1;
		}
	}
	if(var_209_bool != 0) {
		SetVariable("d4q02", (int)2);
		func_9171(Obj());
		var_227_object = var_208_object;
		var_232_float = 0;
		func_7482(var_232_float);
		@@var_208_object:AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", (int)0, (int)511842, var_232_float);
		var_233_bool = 0; var_234_string = ""; var_235_string = "";
		func_7470(var_233_bool, "quest_d4_02", "birdmask");
		var_239_object = Obj(); var_240_string = ""; var_241_float = 0;
		func_9171(Obj());
		var_242_object = var_239_object;
		func_9188(var_239_object, "pt_d4q02_birdmask", (float)2);
		var_243_object = Obj();
		func_9171(var_243_object);
		@@var_206_object:ShowMap(var_243_object);
		var_208_object = 0;
	}
	return 2;
}


func_2485(var_2_object, var_727_string)
{
	var_728_bool = 0;
	func_7553(var_728_bool);
	var_729_bool = var_728_bool == 0; //@nz
	if(var_729_bool != 0) {
		return 0;
	}
	var_730_bool = var_727_string == var_2_object;
	if(var_730_bool != 0) {
		return 0;
	}
	var_731_string = ""; var_732_bool = 0;
	var_727_string = var_731_string;
	var_734_bool = var_727_string == "";
	if(var_734_bool != 0) {
		var_732_bool = 0;
	} else {
		var_732_bool = 1;
	}
	func_7302(var_731_string, var_732_bool);
	var_2_object = var_727_string;
	return 0;
	
}


func_8630(var_801_bool)
{
	var_803_int = 0; var_804_string = "";
	func_7355(var_803_int, "ood4Lara1");
	var_806_bool = var_803_int == (int)0;
	if(var_806_bool != 0) {
		var_801_bool = 1;
		return 0;
	}
	var_801_bool = 0;
	return 0;
}


func_7604(var_216_object)
{
	Trace("money1000 is given");
	var_219_object = Obj(); var_220_int = 0;
	var_216_object = var_219_object;
	func_7395(var_219_object, (int)1000);
	return 0;
}


func_9143(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0;
	func_9130(Obj());
	var_90_object = var_87_object;
	@@var_87_object:Find(var_83_int, var_88_object);
	var_95_bool = var_88_object == 0; //@nz
	if(var_95_bool != 0) {
		var_97_int = "Can't find diary parent with id: " + var_83_int;
		Trace(var_97_int);
		var_81_bool = 0;
		return 6;
	}
	@@var_88_object:AddChild(var_82_object);
	SendWorldWndMessage((int)7);
	@@var_82_object:GetCategory(var_89_int);
	SetDiarySection(var_89_int);
	var_81_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_7614(var_186_object)
{
	Trace("funduk3 is given");
	var_189_object = Obj(); var_190_string = ""; var_191_int = 0;
	var_186_object = var_189_object;
	func_7433(var_189_object, "funduk", (int)3);
	return 0;
}


func_8642(var_817_bool)
{
	var_819_int = 0; var_820_string = "";
	func_7355(var_819_int, "ood4Lara2");
	var_822_bool = var_819_int == (int)0;
	if(var_822_bool != 0) {
		var_817_bool = 1;
		return 0;
	}
	var_817_bool = 0;
	return 0;
}


func_5062(var_0_object, var_1_object, var_2_object, var_3_string, var_1110_object, var_1111_object)
{
	var_0_object = var_1111_object;
	var_1_object = var_1110_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1117_string = "";
		func_5139(var_1111_object, "Fear");
		@@@var_0_object:SetMessage((int)533347);
		@@@var_0_object:ClearReplies();
		var_1126_bool = 0;
		var_1126_bool = 0;
		var_1127_bool = 0; var_1128_object = Obj();
		var_1128_object = var_1_object;
		func_8395(var_1128_object);
		if(var_1127_bool != 0) {
			var_1133_bool = 0; var_1134_object = Obj();
			var_1134_object = var_1_object;
			func_8407(var_1134_object);
			if(var_1133_bool != 0) {
				var_1126_bool = 1;
			}
		}
		if(var_1126_bool != 0) {
			@@@var_0_object:AddReply((int)533348, (int)34853, (int)34852);
		}
		@@@var_0_object:AddReply((int)533353, (int)-1, (int)34857);
		@@@var_0_object:AddReply((int)536082, (int)-1, (int)37830);
		goto Label_5109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13ca";
	}
Label_5109:
	var_1148_bool = 0;
	func_7553(var_1148_bool);
	if(var_1148_bool != 0) {

	Label_5113:
		lshWaitForAnimEnd();
		var_1149_string = var_3_string;
		if(var_1149_string != 0) {
		} else {
			var_1150_string = "";
			var_1150_string = var_2_object;
			func_7286(var_1150_string);
			goto Label_5113;
	}
		PlayAnimation("all", "idle");

	Label_5128:
		WaitForAnimEnd();
		var_1153_string = var_3_string;
		if(var_1153_string != 0) {
			goto Label_5138;
		}
		PlayAnimation("all", "idle");
		goto Label_5128;
	}
	goto Label_5138;
	
Label_5138:
	return 0;
	
}


func_5576(var_2_object, var_1205_string)
{
	var_1206_bool = 0;
	func_7553(var_1206_bool);
	var_1207_bool = var_1206_bool == 0; //@nz
	if(var_1207_bool != 0) {
		return 0;
	}
	var_1208_bool = var_1205_string == var_2_object;
	if(var_1208_bool != 0) {
		return 0;
	}
	var_1209_string = ""; var_1210_bool = 0;
	var_1205_string = var_1209_string;
	var_1212_bool = var_1205_string == "";
	if(var_1212_bool != 0) {
		var_1210_bool = 0;
	} else {
		var_1210_bool = 1;
	}
	func_7302(var_1209_string, var_1210_bool);
	var_2_object = var_1205_string;
	return 0;
	
}


func_7625()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_6092(var_0_object, var_1_object, var_2_object, var_3_string, var_1297_object, var_1298_object)
{
	var_0_object = var_1298_object;
	var_1_object = var_1297_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1304_string = "";
		func_6155(var_1298_object, "Neutral");
		@@@var_0_object:SetMessage((int)533795);
		@@@var_0_object:ClearReplies();
		var_1313_bool = 0; var_1314_object = Obj();
		var_1314_object = var_1_object;
		func_8490(var_1314_object);
		if(var_1313_bool != 0) {
			@@@var_0_object:AddReply((int)533807, (int)35341, (int)35352);
		}
		@@@var_0_object:AddReply((int)533796, (int)-1, (int)35340);
		goto Label_6125;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x17d0";
	}
Label_6125:
	var_1325_bool = 0;
	func_7553(var_1325_bool);
	if(var_1325_bool != 0) {

	Label_6129:
		lshWaitForAnimEnd();
		var_1326_string = var_3_string;
		if(var_1326_string != 0) {
		} else {
			var_1327_string = "";
			var_1327_string = var_2_object;
			func_7286(var_1327_string);
			goto Label_6129;
	}
		PlayAnimation("all", "idle");

	Label_6144:
		WaitForAnimEnd();
		var_1330_string = var_3_string;
		if(var_1330_string != 0) {
			goto Label_6154;
		}
		PlayAnimation("all", "idle");
		goto Label_6144;
	}
	goto Label_6154;
	
Label_6154:
	return 0;
	
}


func_8654(var_823_bool)
{
	var_825_int = 0; var_826_string = "";
	func_7355(var_825_int, "d4q01_subquest");
	var_828_bool = var_825_int == (int)2;
	if(var_828_bool != 0) {
		var_823_bool = 1;
		return 0;
	}
	var_823_bool = 0;
	return 0;
}


func_7631()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_9171(var_125_object)
{
	var_126_object = Obj(); var_127_object = Obj(); var_128_object = Obj(); var_129_object = Obj();
	GetMainOutdoorScene(var_128_object);
	var_130_bool = var_128_object == 0; //@ne
	if(var_130_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_129_object = 0;
		var_129_object = var_125_object;
		return 4;
	}
	@@var_128_object:GetMap(var_129_object);
	var_129_object = var_125_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7637()
{
	var_245_object = Obj(); var_246_object = Obj(); var_247_object = Obj(); var_248_object = Obj();
	func_9171(Obj());
	var_249_object = var_247_object;
	@@var_247_object:FindMark(var_248_object, "k2q04AnnaGotoGatherer1");
	var_251_object = var_248_object;
	if(var_251_object != 0) {
		@@var_248_object:Remove();
	}
	@@var_247_object:FindMark(var_248_object, "k2q04AnnaGotoGatherer3");
	var_253_object = var_248_object;
	if(var_253_object != 0) {
		@@var_248_object:Remove();
	}
	@@var_247_object:FindMark(var_248_object, "k2q04MladVladGotoAnna");
	var_255_object = var_248_object;
	if(var_255_object != 0) {
		@@var_248_object:Remove();
	}
	func_8935();
	var_264_bool = 0; var_265_string = ""; var_266_string = "";
	func_7470(var_264_bool, "quest_d1_04", "fail");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7130()
{
	var_309_bool = 0; var_310_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_312_bool = 0;
	func_7553(var_312_bool);
	if(var_312_bool != 0) {
	} else {
		HasAnimationTrack(var_310_bool, "head");
		var_314_bool = var_310_bool;
		if(var_314_bool == 0) goto Label_7147;
		UnlookAsync("head");
	}
Label_7147:
	return 2;
	
}


func_8666(var_839_bool)
{
	var_841_int = 0; var_842_string = "";
	func_7355(var_841_int, "d4q02");
	var_844_bool = var_841_int == (int)1;
	if(var_844_bool != 0) {
		var_839_bool = 1;
		return 0;
	}
	var_839_bool = 0;
	return 0;
}


func_9188(var_141_object, var_142_string, var_143_float)
{
	var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_object = Obj(); var_148_bool = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_object = Obj(); var_152_bool = 0;
	GetMainOutdoorScene(var_151_object);
	var_153_bool = var_151_object == 0; //@ne
	if(var_153_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_151_object:GetLocator(var_142_string, var_152_bool, var_149_cvector, var_150_cvector);
	var_155_bool = var_152_bool == 0; //@nz
	if(var_155_bool != 0) {
		var_157_int = "Warning: outdoor scene locator " + var_142_string;
		var_159_int = var_157_int + " doesnt exist";
		Trace(var_159_int);
	}
	@@var_151_object:GetMap(var_141_object);
	var_160_bool = var_141_object == 0; //@ne
	if(var_160_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_162_float = GetByIndex(var_149_cvector, 0);
	var_163_float = GetByIndex(var_149_cvector, 2);
	@@var_141_object:SetMapParams(var_162_float, var_163_float, var_143_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_8678(var_833_bool)
{
	var_835_int = 0; var_836_string = "";
	func_7355(var_835_int, "ood4Lara3");
	var_838_bool = var_835_int == (int)0;
	if(var_838_bool != 0) {
		var_833_bool = 1;
		return 0;
	}
	var_833_bool = 0;
	return 0;
}


func_491(var_0_object, var_1_object, var_2_object, var_3_string, var_982_object, var_983_object)
{
	var_0_object = var_983_object;
	var_1_object = var_982_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_989_string = "";
		func_631(var_983_object, "Tiredness");
		@@@var_0_object:SetMessage((int)503662);
		@@@var_0_object:ClearReplies();
		var_998_bool = 0;
		var_998_bool = 0;
		var_999_bool = 0; var_1000_object = Obj();
		var_1000_object = var_1_object;
		func_8738(var_1000_object);
		if(var_999_bool != 0) {
			var_1005_bool = 0; var_1006_object = Obj();
			var_1006_object = var_1_object;
			func_8750(var_1006_object);
			if(var_1005_bool != 0) {
				var_998_bool = 1;
			}
		}
		if(var_998_bool != 0) {
			@@@var_0_object:AddReply((int)512735, (int)11881, (int)13929);
		}
		var_1014_bool = 0;
		var_1014_bool = 0;
		var_1015_bool = 0;
		var_1015_bool = 0;
		var_1016_bool = 0;
		var_1016_bool = 0;
		var_1017_bool = 0; var_1018_object = Obj();
		var_1018_object = var_1_object;
		func_8762(var_1018_object);
		if(var_1017_bool != 0) {
			var_1023_bool = 0; var_1024_object = Obj();
			var_1024_object = var_1_object;
			func_8774(var_1024_object);
			if(var_1023_bool != 0) {
				var_1016_bool = 1;
			}
		}
		if(var_1016_bool != 0) {
			var_1029_bool = 0; var_1030_object = Obj();
			var_1030_object = var_1_object;
			func_8810(var_1030_object);
			var_1035_bool = var_1029_bool == 0; //@nz
			if(var_1035_bool != 0) {
				var_1015_bool = 1;
			}
		}
		if(var_1015_bool != 0) {
			var_1036_bool = 0; var_1037_object = Obj();
			var_1037_object = var_1_object;
			func_8822(var_1037_object);
			var_1042_bool = var_1036_bool == 0; //@nz
			if(var_1042_bool != 0) {
				var_1014_bool = 1;
			}
		}
		if(var_1014_bool != 0) {
			@@@var_0_object:AddReply((int)512736, (int)11904, (int)13930);
		}
		var_1046_bool = 0;
		var_1046_bool = 0;
		var_1047_bool = 0; var_1048_object = Obj();
		var_1048_object = var_1_object;
		func_8786(var_1048_object);
		if(var_1047_bool != 0) {
			var_1053_bool = 0; var_1054_object = Obj();
			var_1054_object = var_1_object;
			func_8606(var_1054_object);
			if(var_1053_bool != 0) {
				var_1046_bool = 1;
			}
		}
		if(var_1046_bool != 0) {
			@@@var_0_object:AddReply((int)503664, (int)3970, (int)3969);
		}
		var_1062_bool = 0; var_1063_object = Obj();
		var_1063_object = var_1_object;
		func_8798(var_1063_object);
		if(var_1062_bool != 0) {
			@@@var_0_object:AddReply((int)503663, (int)3972, (int)3968);
		}
		@@@var_0_object:AddReply((int)513019, (int)-1, (int)14225);
		goto Label_601;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1ef";
	}
Label_601:
	var_1074_bool = 0;
	func_7553(var_1074_bool);
	if(var_1074_bool != 0) {

	Label_605:
		lshWaitForAnimEnd();
		var_1075_string = var_3_string;
		if(var_1075_string != 0) {
		} else {
			var_1076_string = "";
			var_1076_string = var_2_object;
			func_7286(var_1076_string);
			goto Label_605;
	}
		PlayAnimation("all", "idle");

	Label_620:
		WaitForAnimEnd();
		var_1079_string = var_3_string;
		if(var_1079_string != 0) {
			goto Label_630;
		}
		PlayAnimation("all", "idle");
		goto Label_620;
	}
	goto Label_630;
	
Label_630:
	return 0;
	
}


func_7148(var_159_bool, var_160_object)
{
	var_164_int = 0; var_165_int = 0; var_166_int = 0; var_167_int = 0;
	GetVariable("voice_common", var_166_int);
	var_169_int = var_166_int;
	if(var_169_int != 0) {
		var_170_bool = 0; var_171_object = Obj();
		var_160_object = var_171_object;
		func_7206(var_170_bool, var_171_object);
		var_200_bool = var_170_bool == 0; //@nz
		if(var_200_bool != 0) {
			var_201_bool = 0; var_202_object = Obj();
			var_160_object = var_202_object;
			func_7243(var_201_bool, var_202_object);
			var_236_bool = var_201_bool == 0; //@nz
			if(var_236_bool != 0) {
				var_159_bool = 0;
				return 4;
			}
		}
		irand(var_167_int, (int)2);
		var_238_int = var_167_int;
		if(var_238_int != 0) {
			var_241_int = var_166_int + (int)1;
			var_243_int = var_241_int % (int)3;
			SetVariable("voice_common", var_243_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_246_bool = 0; var_247_object = Obj();
		var_160_object = var_247_object;
		func_7243(var_246_bool, var_247_object);
		var_248_bool = var_246_bool == 0; //@nz
		if(var_248_bool != 0) {
			var_249_bool = 0; var_250_object = Obj();
			var_160_object = var_250_object;
			func_7206(var_249_bool, var_250_object);
			var_251_bool = var_249_bool == 0; //@nz
			if(var_251_bool != 0) {
				var_159_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_7204;
	
Label_7204:
	var_159_bool = 1;
	return 4;
	
}


func_6641(var_0_object, var_1_object, var_2_object, var_3_string, var_1420_object, var_1421_object)
{
	var_0_object = var_1421_object;
	var_1_object = var_1420_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1427_string = "";
		func_6699(var_1421_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_6669;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19f5";
	}
Label_6669:
	var_1442_bool = 0;
	func_7553(var_1442_bool);
	if(var_1442_bool != 0) {

	Label_6673:
		lshWaitForAnimEnd();
		var_1443_string = var_3_string;
		if(var_1443_string != 0) {
		} else {
			var_1444_string = "";
			var_1444_string = var_2_object;
			func_7286(var_1444_string);
			goto Label_6673;
	}
		PlayAnimation("all", "idle");

	Label_6688:
		WaitForAnimEnd();
		var_1447_string = var_3_string;
		if(var_1447_string != 0) {
			goto Label_6698;
		}
		PlayAnimation("all", "idle");
		goto Label_6688;
	}
	goto Label_6698;
	
Label_6698:
	return 0;
	
}


func_8690(var_852_bool)
{
	var_854_int = 0; var_855_string = "";
	func_7355(var_854_int, "d4q02LaraGivesMedcine");
	var_857_bool = var_854_int == (int)1;
	if(var_857_bool != 0) {
		var_852_bool = 1;
		return 0;
	}
	var_852_bool = 0;
	return 0;
}


func_8184()
{
	SetVariable("d5q01", (int)5);
	func_9026();
	return 0;
}


func_7674(var_140_object)
{
	var_141_object = Obj(); var_142_string = ""; var_143_float = 0;
	func_9171(Obj());
	var_144_object = var_141_object;
	func_9188(var_141_object, "pt_map_station", (float)2);
	var_164_object = Obj();
	func_9171(var_164_object);
	@@var_140_object:ShowMap(var_164_object);
	return 0;
}


func_8702(var_928_bool)
{
	var_930_int = 0; var_931_string = "";
	func_7355(var_930_int, "d5q01");
	var_933_bool = var_930_int == (int)2;
	if(var_933_bool != 0) {
		var_928_bool = 1;
		return 0;
	}
	var_928_bool = 0;
	return 0;
}


