// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Strange|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Neutral|W:Fear|W:Grin|W:Grimacing|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Ospina.png|W:ui/NPC_Ospina_b.png|W:oob5Ospina1|W:b5q01PlaceButchers|W:b5q01GathererWife|W:pt_gatherer3|A:AddMark|W:quest_b5_01|W:place_butchers|W:oob3Ospina1|W:b3q01|W:b3q01OspinaGotoButcher|W:pt_gmap_house5_24|W:quest_b3_01|W:place_butcher|A:ShowMap|W:oob2Ospina1|W:oob2Ospina2|W:oob2Ospina3|W:oob2Ospina4|W:b2TravnikMark|W:b2Travnik1|W:pt_map_gatherer1|W:b2Travnik2|W:pt_map_gatherer2|W:b2Travnik3|W:pt_map_gatherer3|W:b8q01|W:oob10Ospina1|W:b11q01KnowWhoKilled|W:oob11Ospina1|W:playsound|W:giveitem|W:b2q01|W:quest_b2_01|W:place_box|W:quest_b2_02|W:oob8Ospina1|W:b8q01_bone is given|W:b8q01_bone|W:b10q01|W:b11q01|W:b5q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:,2:bool:
// @RUN_OP: 0x1015
// @RUN_TASK: 18
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xaf vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2b5 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x46d vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7d6 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8c7 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb5b vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcd5 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xeed vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0xfeb vars=int,int
// @TASK_18: vars=cvector params=0
// @EVENT_7: op=0x1061 vars=int
// @EVENT_6: op=0x1087 vars=
// @EVENT_5: op=0x1096 vars=
// @EVENT_45: op=0x10a3 vars=bool
// @EVENT_0: op=0x10af vars=object
// @PE: 0x51,0x99,0xaf,0x256,0x29f,0x2b5,0x3e1,0x457,0x46d,0x786,0x7c0,0x7d6,0x868,0x8b1,0x8c7,0xaeb,0xb45,0xb5b,0xc5d,0xcbf,0xcd5,0xe98,0xed7,0xeed,0xf9b,0xfd5,0xfeb,0x1061,0x1087,0x10a3,0x12b4,0x12dc,0x1302,0x1324,0x1334,0x133a,0x1340,0x1346,0x1379,0x1382,0x1388,0x1391,0x1397,0x139c,0x13ac,0x13b2,0x13c1,0x13c7,0x13d2,0x13de,0x13ea,0x13f6,0x13fb,0x1407,0x1413,0x141f,0x142b,0x1437,0x1443,0x144f,0x145b,0x1467,0x1473,0x147f,0x152b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4679();
		var_51_bool = var_47_cvector == (int)19713;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_4828();
		}
		var_57_bool = var_47_cvector == (int)19715;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_4834();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_5015();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_5020(var_116_object);
		}
		var_142_bool = var_47_cvector == (int)19963;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_4834();
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_5015();
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_5020(var_148_object);
		}
		var_150_bool = var_46_bool == (int)19712;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_153(var_47_cvector, "Strange");
			@@@var_0_object:SetMessage((int)518620);
			@@@var_0_object:ClearReplies();
			var_169_bool = 0;
			var_169_bool = 0;
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_5151(var_171_object);
			if(var_170_bool != 0) {
				var_176_bool = 0; var_177_object = Obj();
				var_177_object = var_1_object;
				func_5163(var_177_object);
				if(var_176_bool != 0) {
					var_169_bool = 1;
				}
			}
			if(var_169_bool != 0) {
				@@@var_0_object:AddReply((int)518621, (int)19933, (int)19713);
			}
			@@@var_0_object:AddReply((int)518624, (int)-1, (int)19716);
			return 0;
		}
		var_189_bool = var_46_bool == (int)19933;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_153(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518828);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518829, (int)19935, (int)19934);
			return 0;
		}
		var_196_bool = var_46_bool == (int)19935;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_153(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)518830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518831, (int)19937, (int)19936);
			@@@var_0_object:AddReply((int)518845, (int)19951, (int)19950);
			return 0;
		}
		var_206_bool = var_46_bool == (int)19951;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_153(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518846);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518847, (int)19937, (int)19952);
			@@@var_0_object:AddReply((int)518848, (int)19940, (int)19953);
			return 0;
		}
		var_216_bool = var_46_bool == (int)19937;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_153(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518834, (int)19940, (int)19939);
			return 0;
		}
		var_223_bool = var_46_bool == (int)19940;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_153(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518837, (int)19948, (int)19942);
			@@@var_0_object:AddReply((int)518836, (int)19943, (int)19941);
			return 0;
		}
		var_233_bool = var_46_bool == (int)19943;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_153(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518838);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518841, (int)19954, (int)19946);
			@@@var_0_object:AddReply((int)518839, (int)19945, (int)19944);
			return 0;
		}
		var_243_bool = var_46_bool == (int)19945;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_153(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)518840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518842, (int)-1, (int)19947);
			return 0;
		}
		var_250_bool = var_46_bool == (int)19954;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_153(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)518849);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518850, (int)19956, (int)19955);
			@@@var_0_object:AddReply((int)518852, (int)19956, (int)19957);
			return 0;
		}
		var_260_bool = var_46_bool == (int)19956;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_153(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518853, (int)19714, (int)19959);
			return 0;
		}
		var_267_bool = var_46_bool == (int)19948;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_153(var_47_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)518843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518844, (int)19714, (int)19949);
			return 0;
		}
		var_274_bool = var_46_bool == (int)19714;
		if(var_274_bool != 0) {
			@@@var_0_object:SetMessage((int)518622);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518623, (int)-1, (int)19715);
			@@@var_0_object:AddReply((int)518854, (int)19962, (int)19961);
			return 0;
		}
		var_283_bool = var_46_bool == (int)19962;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_153(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518855);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518856, (int)-1, (int)19963);
			return 0;
		}
		var_3_string = true;
		var_289_bool = 0;
		func_4826(var_289_bool);
		if(var_289_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb0";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4679();
		var_51_bool = var_47_cvector == (int)20446;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_4872();
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_4900(var_102_object);
		}
		var_128_bool = var_47_cvector == (int)20443;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_4866();
		}
		var_134_bool = var_46_bool == (int)20425;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_671(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519273);
			@@@var_0_object:ClearReplies();
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_5187(var_154_object);
			if(var_153_bool != 0) {
				@@@var_0_object:AddReply((int)519274, (int)20428, (int)20426);
			}
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_5175(var_165_object);
			if(var_164_bool != 0) {
				@@@var_0_object:AddReply((int)519289, (int)20444, (int)20443);
			}
			@@@var_0_object:AddReply((int)519275, (int)-1, (int)20427);
			return 0;
		}
		var_177_bool = var_46_bool == (int)20444;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_671(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519290);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519291, (int)-1, (int)20445);
			return 0;
		}
		var_184_bool = var_46_bool == (int)20428;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_671(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519276);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519277, (int)20432, (int)20429);
			@@@var_0_object:AddReply((int)519278, (int)20431, (int)20430);
			return 0;
		}
		var_194_bool = var_46_bool == (int)20431;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_671(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519279);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519281, (int)20432, (int)20433);
			return 0;
		}
		var_201_bool = var_46_bool == (int)20432;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_671(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519280);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519282, (int)20436, (int)20435);
			@@@var_0_object:AddReply((int)527864, (int)20439, (int)29209);
			return 0;
		}
		var_211_bool = var_46_bool == (int)20436;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_671(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519283);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519284, (int)20441, (int)20437);
			@@@var_0_object:AddReply((int)519285, (int)20439, (int)20438);
			return 0;
		}
		var_221_bool = var_46_bool == (int)20439;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_671(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519287, (int)20441, (int)20440);
			return 0;
		}
		var_228_bool = var_46_bool == (int)20441;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_671(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519292, (int)-1, (int)20446);
			return 0;
		}
		var_3_string = true;
		var_234_bool = 0;
		func_4826(var_234_bool);
		if(var_234_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2b6";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4679();
		var_51_bool = var_47_cvector == (int)21486;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5042();
		}
		var_71_bool = var_47_cvector == (int)21480;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_5042();
		}
		var_75_bool = var_47_cvector == (int)21481;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_5042();
		}
		var_79_bool = var_47_cvector == (int)21496;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_4916();
		}
		var_85_bool = var_47_cvector == (int)21512;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_4922();
		}
		var_91_bool = var_47_cvector == (int)21518;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_4940();
		}
		var_129_bool = var_47_cvector == (int)21519;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_4928();
		}
		var_135_bool = var_47_cvector == (int)21522;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_4934();
		}
		var_141_bool = var_46_bool == (int)21471;
		if(var_141_bool != 0) {
			var_142_bool = 0; var_143_object = Obj();
			var_143_object = var_1_object;
			func_5199(var_143_object);
			if(var_142_bool != 0) {
				var_148_string = "";
				func_1111(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520279);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520280, (int)21473, (int)21472);
				@@@var_0_object:AddReply((int)520299, (int)21475, (int)21493);
				return 0;
			}
			var_172_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520300);
			@@@var_0_object:ClearReplies();
			var_174_bool = 0; var_175_object = Obj();
			var_175_object = var_1_object;
			func_5211(var_175_object);
			if(var_174_bool != 0) {
				@@@var_0_object:AddReply((int)520301, (int)21497, (int)21496);
			}
			var_183_bool = 0; var_184_object = Obj();
			var_184_object = var_1_object;
			func_5223(var_184_object);
			if(var_183_bool != 0) {
				@@@var_0_object:AddReply((int)520317, (int)21513, (int)21512);
			}
			var_192_bool = 0; var_193_object = Obj();
			var_193_object = var_1_object;
			func_5235(var_193_object);
			if(var_192_bool != 0) {
				@@@var_0_object:AddReply((int)520324, (int)21520, (int)21519);
			}
			var_201_bool = 0; var_202_object = Obj();
			var_202_object = var_1_object;
			func_5247(var_202_object);
			if(var_201_bool != 0) {
				@@@var_0_object:AddReply((int)520327, (int)21523, (int)21522);
			}
			@@@var_0_object:AddReply((int)520330, (int)-1, (int)21525);
			return 0;
		}
		var_214_bool = var_46_bool == (int)21523;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520328);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527820, (int)29160, (int)29159);
			return 0;
		}
		var_221_bool = var_46_bool == (int)29160;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527822, (int)29162, (int)29161);
			return 0;
		}
		var_228_bool = var_46_bool == (int)29162;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520329, (int)-1, (int)21524);
			return 0;
		}
		var_235_bool = var_46_bool == (int)21520;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527824, (int)29164, (int)29163);
			@@@var_0_object:AddReply((int)520326, (int)-1, (int)21521);
			return 0;
		}
		var_245_bool = var_46_bool == (int)29164;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527826, (int)-1, (int)29165);
			@@@var_0_object:AddReply((int)527827, (int)-1, (int)29166);
			return 0;
		}
		var_255_bool = var_46_bool == (int)21513;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520319, (int)21515, (int)21514);
			return 0;
		}
		var_262_bool = var_46_bool == (int)21515;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527818, (int)29158, (int)29157);
			return 0;
		}
		var_269_bool = var_46_bool == (int)29158;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527819);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520321, (int)21517, (int)21516);
			return 0;
		}
		var_276_bool = var_46_bool == (int)21517;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520323, (int)-1, (int)21518);
			return 0;
		}
		var_283_bool = var_46_bool == (int)21497;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520303, (int)21499, (int)21498);
			@@@var_0_object:AddReply((int)527811, (int)29150, (int)29149);
			return 0;
		}
		var_293_bool = var_46_bool == (int)29150;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527813, (int)29152, (int)29151);
			return 0;
		}
		var_300_bool = var_46_bool == (int)29152;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527814);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527815, (int)29154, (int)29153);
			return 0;
		}
		var_307_bool = var_46_bool == (int)29154;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527817, (int)21499, (int)29155);
			return 0;
		}
		var_314_bool = var_46_bool == (int)21499;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520304);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520305, (int)21501, (int)21500);
			@@@var_0_object:AddReply((int)520311, (int)21507, (int)21506);
			return 0;
		}
		var_324_bool = var_46_bool == (int)21507;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520312);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520313, (int)21509, (int)21508);
			return 0;
		}
		var_331_bool = var_46_bool == (int)21509;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520315, (int)-1, (int)21510);
			@@@var_0_object:AddReply((int)520316, (int)-1, (int)21511);
			return 0;
		}
		var_341_bool = var_46_bool == (int)21501;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520306);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520307, (int)-1, (int)21502);
			@@@var_0_object:AddReply((int)520308, (int)21504, (int)21503);
			return 0;
		}
		var_351_bool = var_46_bool == (int)21504;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520310, (int)-1, (int)21505);
			return 0;
		}
		var_358_bool = var_46_bool == (int)21473;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520282, (int)21475, (int)21474);
			@@@var_0_object:AddReply((int)520294, (int)21488, (int)21487);
			return 0;
		}
		var_368_bool = var_46_bool == (int)21488;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520295);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520296, (int)21490, (int)21489);
			@@@var_0_object:AddReply((int)527807, (int)21477, (int)29143);
			return 0;
		}
		var_378_bool = var_46_bool == (int)21490;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527805, (int)29142, (int)29141);
			return 0;
		}
		var_385_bool = var_46_bool == (int)29142;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520298, (int)21477, (int)21491);
			return 0;
		}
		var_392_bool = var_46_bool == (int)21475;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520283);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520290, (int)21483, (int)21482);
			@@@var_0_object:AddReply((int)520284, (int)21477, (int)21476);
			return 0;
		}
		var_402_bool = var_46_bool == (int)21477;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520286, (int)21479, (int)21478);
			@@@var_0_object:AddReply((int)527808, (int)29146, (int)29145);
			return 0;
		}
		var_412_bool = var_46_bool == (int)29146;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527810, (int)21479, (int)29147);
			return 0;
		}
		var_419_bool = var_46_bool == (int)21479;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520287);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520288, (int)-1, (int)21480);
			@@@var_0_object:AddReply((int)520289, (int)-1, (int)21481);
			return 0;
		}
		var_429_bool = var_46_bool == (int)21483;
		if(var_429_bool != 0) {
			var_430_string = "";
			func_1111(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520292, (int)21477, (int)21484);
			@@@var_0_object:AddReply((int)520293, (int)-1, (int)21486);
			return 0;
		}
		var_3_string = true;
		var_438_bool = 0;
		func_4826(var_438_bool);
		if(var_438_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x46e";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4679();
		var_51_bool = var_46_bool == (int)22017;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_1984(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520800);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520801, (int)29131, (int)22018);
			@@@var_0_object:AddReply((int)527799, (int)-1, (int)29132);
			return 0;
		}
		var_77_bool = var_46_bool == (int)29131;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_1984(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527798);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527800, (int)-1, (int)29133);
			@@@var_0_object:AddReply((int)527801, (int)-1, (int)29134);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_4826(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7d7";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4679();
		var_51_bool = var_47_cvector == (int)22612;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_4985();
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_5063(var_80_object);
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_5036();
		}
		var_108_bool = var_47_cvector == (int)24978;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_4985();
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_5063(var_112_object);
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_5036();
		}
		var_116_bool = var_47_cvector == (int)24931;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_5057();
		}
		var_122_bool = var_46_bool == (int)22609;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521431);
			@@@var_0_object:ClearReplies();
			var_141_bool = 0; var_142_object = Obj();
			var_142_object = var_1_object;
			func_5074(var_142_object);
			if(var_141_bool != 0) {
				@@@var_0_object:AddReply((int)521432, (int)22611, (int)22610);
			}
			var_152_bool = 0; var_153_object = Obj();
			var_153_object = var_1_object;
			func_5139(var_153_object);
			if(var_152_bool != 0) {
				@@@var_0_object:AddReply((int)523679, (int)24958, (int)24931);
			}
			@@@var_0_object:AddReply((int)521435, (int)-1, (int)22613);
			return 0;
		}
		var_165_bool = var_46_bool == (int)24958;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523704, (int)24960, (int)24959);
			@@@var_0_object:AddReply((int)523706, (int)-1, (int)24961);
			@@@var_0_object:AddReply((int)523707, (int)-1, (int)24962);
			return 0;
		}
		var_178_bool = var_46_bool == (int)24960;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523681, (int)24934, (int)24933);
			return 0;
		}
		var_185_bool = var_46_bool == (int)24934;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523683, (int)24936, (int)24935);
			@@@var_0_object:AddReply((int)523701, (int)24957, (int)24956);
			@@@var_0_object:AddReply((int)523708, (int)-1, (int)24963);
			return 0;
		}
		var_198_bool = var_46_bool == (int)24957;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523702);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523709, (int)24965, (int)24964);
			return 0;
		}
		var_205_bool = var_46_bool == (int)24965;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523710);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523712, (int)-1, (int)24967);
			@@@var_0_object:AddReply((int)523711, (int)-1, (int)24966);
			return 0;
		}
		var_215_bool = var_46_bool == (int)24936;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523685, (int)24968, (int)24937);
			return 0;
		}
		var_222_bool = var_46_bool == (int)24968;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523713);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523714, (int)-1, (int)24969);
			return 0;
		}
		var_229_bool = var_46_bool == (int)22611;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523686, (int)24939, (int)24938);
			@@@var_0_object:AddReply((int)523690, (int)24941, (int)24942);
			return 0;
		}
		var_239_bool = var_46_bool == (int)24939;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523687);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523688, (int)24941, (int)24940);
			@@@var_0_object:AddReply((int)523695, (int)24949, (int)24948);
			return 0;
		}
		var_249_bool = var_46_bool == (int)24949;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523697, (int)24941, (int)24950);
			@@@var_0_object:AddReply((int)523698, (int)24952, (int)24951);
			return 0;
		}
		var_259_bool = var_46_bool == (int)24952;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523699);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523700, (int)24941, (int)24953);
			return 0;
		}
		var_266_bool = var_46_bool == (int)24941;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523689);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523691, (int)24944, (int)24943);
			@@@var_0_object:AddReply((int)523715, (int)24971, (int)24970);
			return 0;
		}
		var_276_bool = var_46_bool == (int)24971;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523716);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523718, (int)24944, (int)24973);
			@@@var_0_object:AddReply((int)523719, (int)24944, (int)24974);
			return 0;
		}
		var_286_bool = var_46_bool == (int)24944;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523692);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523693, (int)24946, (int)24945);
			@@@var_0_object:AddReply((int)523717, (int)24977, (int)24972);
			return 0;
		}
		var_296_bool = var_46_bool == (int)24977;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523722, (int)24980, (int)24979);
			return 0;
		}
		var_303_bool = var_46_bool == (int)24980;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523724, (int)24946, (int)24981);
			return 0;
		}
		var_310_bool = var_46_bool == (int)24946;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_2225(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521434, (int)-1, (int)22612);
			@@@var_0_object:AddReply((int)523721, (int)-1, (int)24978);
			return 0;
		}
		var_3_string = true;
		var_319_bool = 0;
		func_4826(var_319_bool);
		if(var_319_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8c8";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4679();
		var_51_bool = var_47_cvector == (int)23120;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_4994();
		}
		var_57_bool = var_46_bool == (int)23119;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_2885(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521945);
			@@@var_0_object:ClearReplies();
			var_76_bool = 0;
			var_76_bool = 1;
			var_77_bool = 0;
			var_77_bool = 0;
			var_78_bool = 0; var_79_object = Obj();
			var_79_object = var_1_object;
			func_5098(var_79_object);
			if(var_78_bool != 0) {
				var_86_bool = 0; var_87_object = Obj();
				var_87_object = var_1_object;
				func_5110(var_87_object);
				if(var_86_bool != 0) {
					var_77_bool = 1;
				}
			}
			if(var_77_bool != 1) {
				var_88_bool = 0;
				var_88_bool = 0;
				var_89_bool = 0; var_90_object = Obj();
				var_90_object = var_1_object;
				func_5086(var_90_object);
				if(var_89_bool != 0) {
					var_95_bool = 0; var_96_object = Obj();
					var_96_object = var_1_object;
					func_5110(var_96_object);
					if(var_95_bool != 0) {
						var_88_bool = 1;
					}
				}
				if(var_88_bool != 1) {
					var_76_bool = 0;
				}
			}
			if(var_76_bool != 0) {
				@@@var_0_object:AddReply((int)521946, (int)23122, (int)23120);
			}
			@@@var_0_object:AddReply((int)521947, (int)-1, (int)23121);
			return 0;
		}
		var_104_bool = var_46_bool == (int)23122;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_2885(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521948);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521949, (int)23730, (int)23123);
			return 0;
		}
		var_111_bool = var_46_bool == (int)23730;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_2885(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522552, (int)23732, (int)23731);
			return 0;
		}
		var_118_bool = var_46_bool == (int)23732;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_2885(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522553);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522554, (int)23734, (int)23733);
			@@@var_0_object:AddReply((int)522556, (int)-1, (int)23735);
			return 0;
		}
		var_128_bool = var_46_bool == (int)23734;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_2885(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522555);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522557, (int)23737, (int)23736);
			return 0;
		}
		var_135_bool = var_46_bool == (int)23737;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_2885(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522558);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522559, (int)-1, (int)23738);
			return 0;
		}
		var_3_string = true;
		var_141_bool = 0;
		func_4826(var_141_bool);
		if(var_141_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb5c";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4679();
		var_51_bool = var_47_cvector == (int)23259;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5000();
		}
		var_80_bool = var_46_bool == (int)23258;
		if(var_80_bool != 0) {
			var_81_bool = 0; var_82_object = Obj();
			var_82_object = var_1_object;
			func_5127(var_82_object);
			if(var_81_bool != 0) {
				var_89_object = Obj(); var_90_object = Obj();
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_5009();
				var_93_string = "";
				func_3263(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)522089);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523647, (int)24892, (int)24891);
				@@@var_0_object:AddReply((int)523657, (int)24892, (int)24901);
				var_117_bool = 0; var_118_object = Obj();
				var_118_object = var_1_object;
				func_5115(var_118_object);
				if(var_117_bool != 0) {
					@@@var_0_object:AddReply((int)522091, (int)23261, (int)23260);
				}
				return 0;
			}
			var_126_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523598, (int)24834, (int)24833);
			@@@var_0_object:AddReply((int)522095, (int)-1, (int)23264);
			return 0;
		}
		var_135_bool = var_46_bool == (int)24834;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523655, (int)24900, (int)24899);
			return 0;
		}
		var_142_bool = var_46_bool == (int)24900;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534554, (int)-1, (int)36186);
			return 0;
		}
		var_149_bool = var_46_bool == (int)23261;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523645, (int)24889, (int)24888);
			@@@var_0_object:AddReply((int)523644, (int)24889, (int)24887);
			return 0;
		}
		var_159_bool = var_46_bool == (int)24889;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522093, (int)-1, (int)23262);
			return 0;
		}
		var_166_bool = var_46_bool == (int)24892;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523649, (int)24894, (int)24893);
			@@@var_0_object:AddReply((int)523658, (int)24908, (int)24903);
			return 0;
		}
		var_176_bool = var_46_bool == (int)24908;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523663);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523664, (int)24905, (int)24909);
			@@@var_0_object:AddReply((int)523665, (int)24912, (int)24910);
			return 0;
		}
		var_186_bool = var_46_bool == (int)24912;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523667);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523668, (int)24905, (int)24913);
			return 0;
		}
		var_193_bool = var_46_bool == (int)24894;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523659, (int)24905, (int)24904);
			@@@var_0_object:AddReply((int)523666, (int)24896, (int)24911);
			return 0;
		}
		var_203_bool = var_46_bool == (int)24905;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523660);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523661, (int)24896, (int)24906);
			@@@var_0_object:AddReply((int)523669, (int)24896, (int)24915);
			@@@var_0_object:AddReply((int)523651, (int)24918, (int)24895);
			return 0;
		}
		var_216_bool = var_46_bool == (int)24918;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523671, (int)24896, (int)24919);
			return 0;
		}
		var_223_bool = var_46_bool == (int)24896;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523653, (int)24898, (int)24897);
			@@@var_0_object:AddReply((int)523675, (int)24925, (int)24924);
			return 0;
		}
		var_233_bool = var_46_bool == (int)24925;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523677, (int)24898, (int)24926);
			return 0;
		}
		var_240_bool = var_46_bool == (int)24898;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_3263(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523654);
			@@@var_0_object:ClearReplies();
			var_243_bool = 0; var_244_object = Obj();
			var_244_object = var_1_object;
			func_5115(var_244_object);
			var_245_bool = var_243_bool == 0; //@nz
			if(var_245_bool != 0) {
				@@@var_0_object:AddReply((int)522090, (int)-1, (int)23259);
			}
			@@@var_0_object:AddReply((int)523678, (int)-1, (int)24928);
			return 0;
		}
		var_3_string = true;
		var_252_bool = 0;
		func_4826(var_252_bool);
		if(var_252_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcd6";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4679();
		var_51_bool = var_46_bool == (int)36971;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_3799(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_80_bool = var_46_bool == (int)36973;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_3799(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_90_bool = var_46_bool == (int)36975;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_3799(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_99_bool = 0;
		func_4826(var_99_bool);
		if(var_99_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xeee";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	if((int)1 != 0) {
		func_4679();
		var_51_bool = var_46_int == (int)42560;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_4053(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_4826(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfec";
	
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_48_bool = var_46_int == (int)10;
	if(var_48_bool != 0) {
		func_4189();
		var_50_bool = 0;
		var_50_bool = 0;
		var_51_bool = 0;
		func_4403(var_51_bool);
		if(var_51_bool != 0) {
			var_54_bool = 0;
			func_4158(var_54_bool);
			if(var_54_bool != 0) {
				var_50_bool = 1;
			}
		}
		if(var_50_bool != 0) {
			var_71_bool = 0;
			func_4138(var_71_bool);
			if(var_71_bool != 0) {
				var_90_bool = 0; var_91_object = Obj();
				func_4686(Obj());
				var_92_object = var_91_object;
				func_4553(var_90_bool, var_91_object);
			}
		} else {
			func_4153(var_46_int);
			func_4180();
		}
	}
	return 0;
	
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_4371();
	func_4189();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0();
	func_4189();
	var_47_string = "";
	func_4633("Neutral");
	func_4180();
	return 0;
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool;
	if(var_47_bool != 0) {
		func_4180();
	} else {
		var_53_string = "";
		func_4633("Neutral");
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
		func_4371();
		var_50_bool = 0; var_51_object = Obj();
		var_46_object = var_51_object;
		func_4394(var_50_bool, var_51_object);
		EventEnable(0);
		var_64_object = Obj();
		var_46_object = var_64_object;
		func_5419(var_64_object);
		var_901_string = "";
		func_4633("Neutral");
		func_4189();
		func_4180();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_4124(var_45_cvector);
	return 0;
}


func_0(var_0_object, var_476_int, var_477_object)
{
	var_479_object = Obj(); var_480_bool = 0; var_481_int = 0; var_482_bool = 0; var_483_object = Obj(); var_484_bool = 0; var_485_int = 0; var_486_bool = 0;
	var_0_object = var_477_object;
	var_487_bool = 0; var_488_object = Obj(); var_489_float = 0;
	var_477_object = var_488_object;
	func_4408(var_487_bool, var_488_object, (float)70.0);
	var_490_bool = var_487_bool == 0; //@nz
	if(var_490_bool != 0) {
		var_476_int = -2;
		return 8;
	}
	CreateDialog(var_483_object);
	var_491_int = 0;
	func_4820(var_491_int);
	@@var_483_object:SetNPCName(var_491_int);
	var_492_int = 0;
	func_4818(var_492_int);
	@@var_483_object:SetNPCDescription(var_492_int);
	var_493_string = "";
	func_4822(var_493_string);
	@@var_483_object:SetPhoto(var_493_string);
	var_494_string = "";
	func_4824(var_494_string);
	@@var_483_object:SetPhoto2(var_494_string);
	var_495_int = 0;
	func_5402(var_495_int);
	@@var_483_object:SetPlayerName(var_495_int);
	IsOverrideActive(var_484_bool);
	var_496_bool = var_484_bool;
	if(var_496_bool != 0) {
		var_476_int = -2;
		return 8;
	}
	DoDialog(var_483_object);
	var_497_bool = 0; var_498_object = Obj();
	func_4686(Obj());
	var_499_object = var_498_object;
	func_4495(var_497_bool, var_498_object);
	var_500_object = Obj(); var_501_object = Obj();
	var_477_object = var_500_object;
	var_483_object = var_501_object;
	TaskCall(1);
	func_81(var_502_object, var_503_object, var_504_string, var_505_bool, var_500_object, var_501_object);
	TaskReturn();
	@@var_483_object:IsDialogEnd(var_486_bool);
	
Label_63:
	var_543_bool = var_486_bool == 0; //@nz
	if(var_543_bool != 0) {
		sync();
		@@var_483_object:IsDialogEnd(var_486_bool);
		goto Label_63;
	}
	var_477_object = Obj();
	func_4477();
	StopDialog(var_483_object);
	@@var_483_object:GetReturnValue((int)-1);
	var_485_int = var_476_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4866()
{
	SetVariable("oob3Ospina1", (int)1);
	return 0;
}


func_517(var_0_object, var_403_int, var_404_object)
{
	var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_object = Obj(); var_411_bool = 0; var_412_int = 0; var_413_bool = 0;
	var_0_object = var_404_object;
	var_414_bool = 0; var_415_object = Obj(); var_416_float = 0;
	var_404_object = var_415_object;
	func_4408(var_414_bool, var_415_object, (float)70.0);
	var_417_bool = var_414_bool == 0; //@nz
	if(var_417_bool != 0) {
		var_403_int = -2;
		return 8;
	}
	CreateDialog(var_410_object);
	var_418_int = 0;
	func_4820(var_418_int);
	@@var_410_object:SetNPCName(var_418_int);
	var_419_int = 0;
	func_4818(var_419_int);
	@@var_410_object:SetNPCDescription(var_419_int);
	var_420_string = "";
	func_4822(var_420_string);
	@@var_410_object:SetPhoto(var_420_string);
	var_421_string = "";
	func_4824(var_421_string);
	@@var_410_object:SetPhoto2(var_421_string);
	var_422_int = 0;
	func_5402(var_422_int);
	@@var_410_object:SetPlayerName(var_422_int);
	IsOverrideActive(var_411_bool);
	var_423_bool = var_411_bool;
	if(var_423_bool != 0) {
		var_403_int = -2;
		return 8;
	}
	DoDialog(var_410_object);
	var_424_bool = 0; var_425_object = Obj();
	func_4686(Obj());
	var_426_object = var_425_object;
	func_4495(var_424_bool, var_425_object);
	var_427_object = Obj(); var_428_object = Obj();
	var_404_object = var_427_object;
	var_410_object = var_428_object;
	TaskCall(3);
	func_598(var_429_object, var_430_object, var_431_string, var_432_bool, var_427_object, var_428_object);
	TaskReturn();
	@@var_410_object:IsDialogEnd(var_413_bool);
	
Label_580:
	var_472_bool = var_413_bool == 0; //@nz
	if(var_472_bool != 0) {
		sync();
		@@var_410_object:IsDialogEnd(var_413_bool);
		goto Label_580;
	}
	var_404_object = Obj();
	func_4477();
	StopDialog(var_410_object);
	@@var_410_object:GetReturnValue((int)-1);
	var_412_int = var_403_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5127(var_728_bool)
{
	var_730_int = 0; var_731_string = "";
	func_4702(var_730_int, "oob11Ospina1");
	var_733_bool = var_730_int == (int)0;
	if(var_733_bool != 0) {
		var_728_bool = 1;
		return 0;
	}
	var_728_bool = 0;
	return 0;
}


func_4872()
{
	var_54_object = Obj(); var_55_object = Obj();
	SetVariable("b3q01", (int)2);
	func_5352(Obj());
	var_58_object = var_55_object;
	var_69_float = 0;
	func_4774(var_69_float);
	@@var_55_object:AddMark("b3q01OspinaGotoButcher", "pt_gmap_house5_24", (int)1, (int)519635, var_69_float);
	func_5272();
	var_95_bool = 0; var_96_string = ""; var_97_string = "";
	func_4762(var_95_bool, "quest_b3_01", "place_butcher");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3084(var_0_object, var_697_int, var_698_object)
{
	var_700_object = Obj(); var_701_bool = 0; var_702_int = 0; var_703_bool = 0; var_704_object = Obj(); var_705_bool = 0; var_706_int = 0; var_707_bool = 0;
	var_0_object = var_698_object;
	var_708_bool = 0; var_709_object = Obj(); var_710_float = 0;
	var_698_object = var_709_object;
	func_4408(var_708_bool, var_709_object, (float)70.0);
	var_711_bool = var_708_bool == 0; //@nz
	if(var_711_bool != 0) {
		var_697_int = -2;
		return 8;
	}
	CreateDialog(var_704_object);
	var_712_int = 0;
	func_4820(var_712_int);
	@@var_704_object:SetNPCName(var_712_int);
	var_713_int = 0;
	func_4818(var_713_int);
	@@var_704_object:SetNPCDescription(var_713_int);
	var_714_string = "";
	func_4822(var_714_string);
	@@var_704_object:SetPhoto(var_714_string);
	var_715_string = "";
	func_4824(var_715_string);
	@@var_704_object:SetPhoto2(var_715_string);
	var_716_int = 0;
	func_5402(var_716_int);
	@@var_704_object:SetPlayerName(var_716_int);
	IsOverrideActive(var_705_bool);
	var_717_bool = var_705_bool;
	if(var_717_bool != 0) {
		var_697_int = -2;
		return 8;
	}
	DoDialog(var_704_object);
	var_718_bool = 0; var_719_object = Obj();
	func_4686(Obj());
	var_720_object = var_719_object;
	func_4495(var_718_bool, var_719_object);
	var_721_object = Obj(); var_722_object = Obj();
	var_698_object = var_721_object;
	var_704_object = var_722_object;
	TaskCall(13);
	func_3165(var_723_object, var_724_object, var_725_string, var_726_bool, var_721_object, var_722_object);
	TaskReturn();
	@@var_704_object:IsDialogEnd(var_707_bool);
	
Label_3147:
	var_778_bool = var_707_bool == 0; //@nz
	if(var_778_bool != 0) {
		sync();
		@@var_704_object:IsDialogEnd(var_707_bool);
		goto Label_3147;
	}
	var_698_object = Obj();
	func_4477();
	StopDialog(var_704_object);
	@@var_704_object:GetReturnValue((int)-1);
	var_706_int = var_697_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4369(var_85_bool)
{
	var_85_bool = 1;
	return 0;
}


func_5139(var_596_bool)
{
	var_598_int = 0; var_599_string = "";
	func_4702(var_598_int, "oob8Ospina1");
	var_601_bool = var_598_int == (int)0;
	if(var_601_bool != 0) {
		var_596_bool = 1;
		return 0;
	}
	var_596_bool = 0;
	return 0;
}


func_4371()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2071(var_0_object, var_547_int, var_548_object)
{
	var_550_object = Obj(); var_551_bool = 0; var_552_int = 0; var_553_bool = 0; var_554_object = Obj(); var_555_bool = 0; var_556_int = 0; var_557_bool = 0;
	var_0_object = var_548_object;
	var_558_bool = 0; var_559_object = Obj(); var_560_float = 0;
	var_548_object = var_559_object;
	func_4408(var_558_bool, var_559_object, (float)70.0);
	var_561_bool = var_558_bool == 0; //@nz
	if(var_561_bool != 0) {
		var_547_int = -2;
		return 8;
	}
	CreateDialog(var_554_object);
	var_562_int = 0;
	func_4820(var_562_int);
	@@var_554_object:SetNPCName(var_562_int);
	var_563_int = 0;
	func_4818(var_563_int);
	@@var_554_object:SetNPCDescription(var_563_int);
	var_564_string = "";
	func_4822(var_564_string);
	@@var_554_object:SetPhoto(var_564_string);
	var_565_string = "";
	func_4824(var_565_string);
	@@var_554_object:SetPhoto2(var_565_string);
	var_566_int = 0;
	func_5402(var_566_int);
	@@var_554_object:SetPlayerName(var_566_int);
	IsOverrideActive(var_555_bool);
	var_567_bool = var_555_bool;
	if(var_567_bool != 0) {
		var_547_int = -2;
		return 8;
	}
	DoDialog(var_554_object);
	var_568_bool = 0; var_569_object = Obj();
	func_4686(Obj());
	var_570_object = var_569_object;
	func_4495(var_568_bool, var_569_object);
	var_571_object = Obj(); var_572_object = Obj();
	var_548_object = var_571_object;
	var_554_object = var_572_object;
	TaskCall(9);
	func_2152(var_573_object, var_574_object, var_575_string, var_576_bool, var_571_object, var_572_object);
	TaskReturn();
	@@var_554_object:IsDialogEnd(var_557_bool);
	
Label_2134:
	var_616_bool = var_557_bool == 0; //@nz
	if(var_616_bool != 0) {
		sync();
		@@var_554_object:IsDialogEnd(var_557_bool);
		goto Label_2134;
	}
	var_548_object = Obj();
	func_4477();
	StopDialog(var_554_object);
	@@var_554_object:GetReturnValue((int)-1);
	var_556_int = var_547_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4376(var_61_float, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_62_object:GetPosition(var_67_cvector);
	var_68_cvector = var_67_cvector - var_66_cvector;
	var_61_float = var_68_cvector | var_68_cvector;
	return 6;
}


func_4633(var_267_string)
{
	var_268_bool = 0; var_269_float = 0; var_270_float = 0; var_271_bool = 0; var_272_float = 0; var_273_float = 0;
	lshHasAnimation(var_271_bool, var_267_string);
	var_274_bool = var_271_bool;
	if(var_274_bool != 0) {
		lshGetAnimTimes(var_267_string, var_272_float, var_273_float);
		lshPlayAnimation(var_272_float, var_273_float, (bool)0);
	} else {
		var_277_int = "Can't find lsh animation : " + var_267_string;
		Trace(var_277_int);
	}
	return 6;
	
}


func_5402(var_130_int)
{
	var_131_int = 0; var_132_int = 0;
	GetVariable("branch", var_132_int);
	var_135_bool = var_132_int == (int)0;
	if(var_135_bool != 0) {
		var_130_int = 1;
		return 2;
	EMIT "GOTO 0x1529";
	}
	var_137_bool = var_132_int == (int)1;
	if(var_137_bool != 0) {
		var_130_int = 2;
		return 2;
	}
	var_130_int = 3;
	return 2;
}


func_4124(var_0_object)
{
	var_47_bool = 0;
	func_4403(var_47_bool);
	var_50_bool = var_47_bool == 0; //@nz
	if(var_50_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_4133:
	func_4300();
	goto Label_4133;
}
EMIT "Return(); Pop(0)";


func_5151(var_517_bool)
{
	var_519_int = 0; var_520_string = "";
	func_4702(var_519_int, "b5q01");
	var_522_bool = var_519_int == (int)1;
	if(var_522_bool != 0) {
		var_517_bool = 1;
		return 0;
	}
	var_517_bool = 0;
	return 0;
}


func_4384(var_54_bool, var_55_cvector)
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


func_4900(var_102_object)
{
	var_103_object = Obj(); var_104_string = ""; var_105_float = 0;
	func_5352(Obj());
	var_106_object = var_103_object;
	func_5369(var_103_object, "pt_gmap_house5_24", (float)2);
	var_126_object = Obj();
	func_5352(var_126_object);
	@@var_102_object:ShowMap(var_126_object);
	return 0;
}


func_4649(var_245_string, var_246_bool)
{
	var_249_bool = 0; var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_float = 0; var_254_float = 0;
	lshHasAnimation(var_252_bool, var_245_string);
	var_255_bool = var_252_bool;
	if(var_255_bool != 0) {
		lshGetAnimTimes(var_245_string, var_253_float, var_254_float);
		lshPlayAnimation(var_253_float, var_254_float, var_246_bool);
	} else {
		var_257_int = "Can't find lsh animation : " + var_245_string;
		Trace(var_257_int);
	}
	return 6;
	
}


func_4138(var_71_bool)
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
	func_4394(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5163(var_523_bool)
{
	var_525_int = 0; var_526_string = "";
	func_4702(var_525_int, "oob5Ospina1");
	var_528_bool = var_525_int == (int)0;
	if(var_528_bool != 0) {
		var_523_bool = 1;
		return 0;
	}
	var_523_bool = 0;
	return 0;
}


func_4394(var_50_bool, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	@@var_51_object:GetPosition(var_53_cvector);
	var_54_bool = 0; var_55_cvector = CVector(0,0,0);
	var_53_cvector = var_55_cvector;
	func_4384(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
	return 2;
}


func_5419(var_64_object)
{
	var_65_bool = GlobalVars[1];
	var_66_bool = var_65_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_67_int = 0; var_68_object = Obj();
		var_64_object = var_68_object;
		TaskCall(6);
		func_1845(var_69_object, var_67_int, var_68_object);
		TaskReturn();
		var_292_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_293_bool = 0; var_294_int = 0;
	func_4788(var_293_bool, (int)2);
	if(var_293_bool != 0) {
		var_296_int = 0; var_297_object = Obj();
		var_64_object = var_297_object;
		TaskCall(4);
		func_912(var_298_object, var_296_int, var_297_object);
		TaskReturn();
		return 0;
	}
	var_401_bool = 0; var_402_int = 0;
	func_4788(var_401_bool, (int)3);
	if(var_401_bool != 0) {
		var_403_int = 0; var_404_object = Obj();
		var_64_object = var_404_object;
		TaskCall(2);
		func_517(var_405_object, var_403_int, var_404_object);
		TaskReturn();
		return 0;
	}
	var_474_bool = 0; var_475_int = 0;
	func_4788(var_474_bool, (int)5);
	if(var_474_bool != 0) {
		var_476_int = 0; var_477_object = Obj();
		var_64_object = var_477_object;
		TaskCall(0);
		func_0(var_478_object, var_476_int, var_477_object);
		TaskReturn();
		return 0;
	}
	var_545_bool = 0; var_546_int = 0;
	func_4788(var_545_bool, (int)8);
	if(var_545_bool != 0) {
		var_547_int = 0; var_548_object = Obj();
		var_64_object = var_548_object;
		TaskCall(8);
		func_2071(var_549_object, var_547_int, var_548_object);
		TaskReturn();
		return 0;
	}
	var_618_bool = 0; var_619_int = 0;
	func_4788(var_618_bool, (int)10);
	if(var_618_bool != 0) {
		var_620_int = 0; var_621_object = Obj();
		var_64_object = var_621_object;
		TaskCall(10);
		func_2714(var_622_object, var_620_int, var_621_object);
		TaskReturn();
		return 0;
	}
	var_695_bool = 0; var_696_int = 0;
	func_4788(var_695_bool, (int)11);
	if(var_695_bool != 0) {
		var_697_int = 0; var_698_object = Obj();
		var_64_object = var_698_object;
		TaskCall(12);
		func_3084(var_699_object, var_697_int, var_698_object);
		TaskReturn();
		return 0;
	}
	var_780_bool = 0;
	var_780_bool = 0;
	var_781_bool = 0; var_782_int = 0;
	func_4788(var_781_bool, (int)12);
	if(var_781_bool != 0) {
		var_783_bool = GlobalVars[2];
		var_784_bool = var_783_bool == 0; //@nz
		if(var_784_bool != 0) {
			var_780_bool = 1;
		}
	}
	if(var_780_bool != 0) {
		var_785_int = 0; var_786_object = Obj();
		var_64_object = var_786_object;
		TaskCall(14);
		func_3655(var_787_object, var_785_int, var_786_object);
		TaskReturn();
		var_844_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
		return 0;
	}
	var_845_int = 0; var_846_object = Obj();
	var_64_object = var_846_object;
	TaskCall(16);
	func_3914(var_847_object, var_845_int, var_846_object);
	TaskReturn();
	return 0;
}


func_4403(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0;
	IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
	return 2;
}


func_4916()
{
	SetVariable("oob2Ospina1", (int)1);
	return 0;
}


func_1845(var_0_object, var_67_int, var_68_object)
{
	var_70_object = Obj(); var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_object = Obj(); var_75_bool = 0; var_76_int = 0; var_77_bool = 0;
	var_0_object = var_68_object;
	var_78_bool = 0; var_79_object = Obj(); var_80_float = 0;
	var_68_object = var_79_object;
	func_4408(var_78_bool, var_79_object, (float)70.0);
	var_125_bool = var_78_bool == 0; //@nz
	if(var_125_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	CreateDialog(var_74_object);
	var_126_int = 0;
	func_4820(var_126_int);
	@@var_74_object:SetNPCName(var_126_int);
	var_127_int = 0;
	func_4818(var_127_int);
	@@var_74_object:SetNPCDescription(var_127_int);
	var_128_string = "";
	func_4822(var_128_string);
	@@var_74_object:SetPhoto(var_128_string);
	var_129_string = "";
	func_4824(var_129_string);
	@@var_74_object:SetPhoto2(var_129_string);
	var_130_int = 0;
	func_5402(var_130_int);
	@@var_74_object:SetPlayerName(var_130_int);
	IsOverrideActive(var_75_bool);
	var_138_bool = var_75_bool;
	if(var_138_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	DoDialog(var_74_object);
	var_139_bool = 0; var_140_object = Obj();
	func_4686(Obj());
	var_141_object = var_140_object;
	func_4495(var_139_bool, var_140_object);
	var_234_object = Obj(); var_235_object = Obj();
	var_68_object = var_234_object;
	var_74_object = var_235_object;
	TaskCall(7);
	func_1926(var_236_object, var_237_object, var_238_string, var_239_bool, var_234_object, var_235_object);
	TaskReturn();
	@@var_74_object:IsDialogEnd(var_77_bool);
	
Label_1908:
	var_283_bool = var_77_bool == 0; //@nz
	if(var_283_bool != 0) {
		sync();
		@@var_74_object:IsDialogEnd(var_77_bool);
		goto Label_1908;
	}
	var_68_object = Obj();
	func_4477();
	StopDialog(var_74_object);
	@@var_74_object:GetReturnValue((int)-1);
	var_76_int = var_67_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5175(var_452_bool)
{
	var_454_int = 0; var_455_string = "";
	func_4702(var_454_int, "oob3Ospina1");
	var_457_bool = var_454_int == (int)0;
	if(var_457_bool != 0) {
		var_452_bool = 1;
		return 0;
	}
	var_452_bool = 0;
	return 0;
}


func_4664(var_173_bool, var_174_string)
{
	var_175_bool = 0; var_176_bool = 0;
	var_177_bool = 0;
	func_4826(var_177_bool);
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


func_4153(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_123_float, var_124_float);
	return 0;
}


func_4408(var_78_bool, var_79_object, var_80_float)
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
	func_4692(var_105_cvector, var_106_cvector);
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
	func_4826(var_121_bool);
	if(var_121_bool != 0) {
	} else {
		HasAnimationTrack(var_98_bool, "head");
		var_123_bool = var_98_bool;
		if(var_123_bool == 0) goto Label_4471;
		LookAsyncCamera("head");
	}
Label_4471:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_78_bool = 1;
	return 18;
	
}


func_4922()
{
	SetVariable("oob2Ospina2", (int)1);
	return 0;
}


func_4158(var_54_bool)
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
	func_4376(var_61_float, var_62_object);
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


func_4928()
{
	SetVariable("oob2Ospina3", (int)1);
	return 0;
}


func_5187(var_443_bool)
{
	var_445_int = 0; var_446_string = "";
	func_4702(var_445_int, "b3q01");
	var_448_bool = var_445_int == (int)1;
	if(var_448_bool != 0) {
		var_443_bool = 1;
		return 0;
	}
	var_443_bool = 0;
	return 0;
}


func_2885(var_2_object, var_651_string)
{
	var_652_bool = 0;
	func_4826(var_652_bool);
	var_653_bool = var_652_bool == 0; //@nz
	if(var_653_bool != 0) {
		return 0;
	}
	var_654_bool = var_651_string == var_2_object;
	if(var_654_bool != 0) {
		return 0;
	}
	var_655_string = ""; var_656_bool = 0;
	var_651_string = var_655_string;
	var_658_bool = var_651_string == "";
	if(var_658_bool != 0) {
		var_656_bool = 0;
	} else {
		var_656_bool = 1;
	}
	func_4649(var_655_string, var_656_bool);
	var_2_object = var_651_string;
	return 0;
	
}


func_4934()
{
	SetVariable("oob2Ospina4", (int)1);
	return 0;
}


func_4679()
{
	var_49_bool = 0;
	func_4826(var_49_bool);
	if(var_49_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3655(var_0_object, var_785_int, var_786_object)
{
	var_788_object = Obj(); var_789_bool = 0; var_790_int = 0; var_791_bool = 0; var_792_object = Obj(); var_793_bool = 0; var_794_int = 0; var_795_bool = 0;
	var_0_object = var_786_object;
	var_796_bool = 0; var_797_object = Obj(); var_798_float = 0;
	var_786_object = var_797_object;
	func_4408(var_796_bool, var_797_object, (float)70.0);
	var_799_bool = var_796_bool == 0; //@nz
	if(var_799_bool != 0) {
		var_785_int = -2;
		return 8;
	}
	CreateDialog(var_792_object);
	var_800_int = 0;
	func_4820(var_800_int);
	@@var_792_object:SetNPCName(var_800_int);
	var_801_int = 0;
	func_4818(var_801_int);
	@@var_792_object:SetNPCDescription(var_801_int);
	var_802_string = "";
	func_4822(var_802_string);
	@@var_792_object:SetPhoto(var_802_string);
	var_803_string = "";
	func_4824(var_803_string);
	@@var_792_object:SetPhoto2(var_803_string);
	var_804_int = 0;
	func_5402(var_804_int);
	@@var_792_object:SetPlayerName(var_804_int);
	IsOverrideActive(var_793_bool);
	var_805_bool = var_793_bool;
	if(var_805_bool != 0) {
		var_785_int = -2;
		return 8;
	}
	DoDialog(var_792_object);
	var_806_bool = 0; var_807_object = Obj();
	func_4686(Obj());
	var_808_object = var_807_object;
	func_4495(var_806_bool, var_807_object);
	var_809_object = Obj(); var_810_object = Obj();
	var_786_object = var_809_object;
	var_792_object = var_810_object;
	TaskCall(15);
	func_3736(var_811_object, var_812_object, var_813_string, var_814_bool, var_809_object, var_810_object);
	TaskReturn();
	@@var_792_object:IsDialogEnd(var_795_bool);
	
Label_3718:
	var_842_bool = var_795_bool == 0; //@nz
	if(var_842_bool != 0) {
		sync();
		@@var_792_object:IsDialogEnd(var_795_bool);
		goto Label_3718;
	}
	var_786_object = Obj();
	func_4477();
	StopDialog(var_792_object);
	@@var_792_object:GetReturnValue((int)-1);
	var_794_int = var_785_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3914(var_0_object, var_845_int, var_846_object)
{
	var_848_object = Obj(); var_849_bool = 0; var_850_int = 0; var_851_bool = 0; var_852_object = Obj(); var_853_bool = 0; var_854_int = 0; var_855_bool = 0;
	var_0_object = var_846_object;
	var_856_bool = 0; var_857_object = Obj(); var_858_float = 0;
	var_846_object = var_857_object;
	func_4408(var_856_bool, var_857_object, (float)70.0);
	var_859_bool = var_856_bool == 0; //@nz
	if(var_859_bool != 0) {
		var_845_int = -2;
		return 8;
	}
	CreateDialog(var_852_object);
	var_860_int = 0;
	func_4820(var_860_int);
	@@var_852_object:SetNPCName(var_860_int);
	var_861_int = 0;
	func_4818(var_861_int);
	@@var_852_object:SetNPCDescription(var_861_int);
	var_862_string = "";
	func_4822(var_862_string);
	@@var_852_object:SetPhoto(var_862_string);
	var_863_string = "";
	func_4824(var_863_string);
	@@var_852_object:SetPhoto2(var_863_string);
	var_864_int = 0;
	func_5402(var_864_int);
	@@var_852_object:SetPlayerName(var_864_int);
	IsOverrideActive(var_853_bool);
	var_865_bool = var_853_bool;
	if(var_865_bool != 0) {
		var_845_int = -2;
		return 8;
	}
	DoDialog(var_852_object);
	var_866_bool = 0; var_867_object = Obj();
	func_4686(Obj());
	var_868_object = var_867_object;
	func_4495(var_866_bool, var_867_object);
	var_869_object = Obj(); var_870_object = Obj();
	var_846_object = var_869_object;
	var_852_object = var_870_object;
	TaskCall(17);
	func_3995(var_871_object, var_872_object, var_873_string, var_874_bool, var_869_object, var_870_object);
	TaskReturn();
	@@var_852_object:IsDialogEnd(var_855_bool);
	
Label_3977:
	var_899_bool = var_855_bool == 0; //@nz
	if(var_899_bool != 0) {
		sync();
		@@var_852_object:IsDialogEnd(var_855_bool);
		goto Label_3977;
	}
	var_846_object = Obj();
	func_4477();
	StopDialog(var_852_object);
	@@var_852_object:GetReturnValue((int)-1);
	var_854_int = var_845_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4940()
{
	var_94_object = Obj(); var_95_object = Obj();
	var_96_int = 0; var_97_string = "";
	func_4702(var_96_int, "b2TravnikMark");
	var_101_bool = var_96_int == (int)0;
	if(var_101_bool != 0) {
		SetVariable("b2TravnikMark", (int)1);
		func_5352(Obj());
		var_104_object = var_95_object;
		var_115_float = 0;
		func_4774(var_115_float);
		@@var_95_object:AddMark("b2Travnik1", "pt_map_gatherer1", (int)3, (int)520463, var_115_float);
		var_122_float = 0;
		func_4774(var_122_float);
		@@var_95_object:AddMark("b2Travnik2", "pt_map_gatherer2", (int)3, (int)520464, var_122_float);
		var_127_float = 0;
		func_4774(var_127_float);
		@@var_95_object:AddMark("b2Travnik3", "pt_map_gatherer3", (int)3, (int)520465, var_127_float);
		var_95_object = 0;
	}
	return 2;
}


func_4686(var_141_object)
{
	var_142_object = Obj(); var_143_object = Obj();
	self(var_143_object);
	var_143_object = var_141_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5199(var_327_bool)
{
	var_329_int = 0; var_330_string = "";
	func_4702(var_329_int, "b2q01");
	var_334_bool = var_329_int == (int)2;
	if(var_334_bool != 0) {
		var_327_bool = 1;
		return 0;
	}
	var_327_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_500_object, var_501_object)
{
	var_0_object = var_501_object;
	var_1_object = var_500_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_507_string = "";
		func_153(var_501_object, "Strange");
		@@@var_0_object:SetMessage((int)518620);
		@@@var_0_object:ClearReplies();
		var_516_bool = 0;
		var_516_bool = 0;
		var_517_bool = 0; var_518_object = Obj();
		var_518_object = var_1_object;
		func_5151(var_518_object);
		if(var_517_bool != 0) {
			var_523_bool = 0; var_524_object = Obj();
			var_524_object = var_1_object;
			func_5163(var_524_object);
			if(var_523_bool != 0) {
				var_516_bool = 1;
			}
		}
		if(var_516_bool != 0) {
			@@@var_0_object:AddReply((int)518621, (int)19933, (int)19713);
		}
		@@@var_0_object:AddReply((int)518624, (int)-1, (int)19716);
		goto Label_123;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_123:
	var_535_bool = 0;
	func_4826(var_535_bool);
	if(var_535_bool != 0) {

	Label_127:
		lshWaitForAnimEnd();
		var_536_string = var_3_string;
		if(var_536_string != 0) {
		} else {
			var_537_string = "";
			var_537_string = var_2_object;
			func_4633(var_537_string);
			goto Label_127;
	}
		PlayAnimation("all", "idle");

	Label_142:
		WaitForAnimEnd();
		var_540_string = var_3_string;
		if(var_540_string != 0) {
			goto Label_152;
		}
		PlayAnimation("all", "idle");
		goto Label_142;
	}
	goto Label_152;
	
Label_152:
	return 0;
	
}


func_4180()
{
	var_903_float = 0; var_904_float = 0;
	rand(var_904_float, (int)8, (int)16);
	SetTimer((int)10, var_904_float);
	return 2;
}


func_4692(var_105_cvector, var_106_cvector)
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


func_598(var_0_object, var_1_object, var_2_object, var_3_string, var_427_object, var_428_object)
{
	var_0_object = var_428_object;
	var_1_object = var_427_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_434_string = "";
		func_671(var_428_object, "Neutral");
		@@@var_0_object:SetMessage((int)519273);
		@@@var_0_object:ClearReplies();
		var_443_bool = 0; var_444_object = Obj();
		var_444_object = var_1_object;
		func_5187(var_444_object);
		if(var_443_bool != 0) {
			@@@var_0_object:AddReply((int)519274, (int)20428, (int)20426);
		}
		var_452_bool = 0; var_453_object = Obj();
		var_453_object = var_1_object;
		func_5175(var_453_object);
		if(var_452_bool != 0) {
			@@@var_0_object:AddReply((int)519289, (int)20444, (int)20443);
		}
		@@@var_0_object:AddReply((int)519275, (int)-1, (int)20427);
		goto Label_641;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x25a";
	}
Label_641:
	var_464_bool = 0;
	func_4826(var_464_bool);
	if(var_464_bool != 0) {

	Label_645:
		lshWaitForAnimEnd();
		var_465_string = var_3_string;
		if(var_465_string != 0) {
		} else {
			var_466_string = "";
			var_466_string = var_2_object;
			func_4633(var_466_string);
			goto Label_645;
	}
		PlayAnimation("all", "idle");

	Label_660:
		WaitForAnimEnd();
		var_469_string = var_3_string;
		if(var_469_string != 0) {
			goto Label_670;
		}
		PlayAnimation("all", "idle");
		goto Label_660;
	}
	goto Label_670;
	
Label_670:
	return 0;
	
}


func_1111(var_2_object, var_335_string)
{
	var_336_bool = 0;
	func_4826(var_336_bool);
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
	func_4649(var_339_string, var_340_bool);
	var_2_object = var_335_string;
	return 0;
	
}


func_5211(var_360_bool)
{
	var_362_int = 0; var_363_string = "";
	func_4702(var_362_int, "oob2Ospina1");
	var_365_bool = var_362_int == (int)0;
	if(var_365_bool != 0) {
		var_360_bool = 1;
		return 0;
	}
	var_360_bool = 0;
	return 0;
}


func_3165(var_0_object, var_1_object, var_2_object, var_3_string, var_721_object, var_722_object)
{
	var_0_object = var_722_object;
	var_1_object = var_721_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_728_bool = 0; var_729_object = Obj();
		var_729_object = var_1_object;
		func_5127(var_729_object);
		if(var_728_bool != 0) {
			var_734_object = Obj(); var_735_object = Obj();
			var_734_object = var_1_object;
			var_735_object = var_0_object;
			func_5009();
			var_738_string = "";
			func_3263(var_722_object, "Neutral");
			@@@var_0_object:SetMessage((int)522089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523647, (int)24892, (int)24891);
			@@@var_0_object:AddReply((int)523657, (int)24892, (int)24901);
			var_753_bool = 0; var_754_object = Obj();
			var_754_object = var_1_object;
			func_5115(var_754_object);
			if(var_753_bool != 0) {
				@@@var_0_object:AddReply((int)522091, (int)23261, (int)23260);
			}
		} else {
				var_770_string = "";
				func_3263(var_722_object, "Neutral");
				@@@var_0_object:SetMessage((int)522094);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523598, (int)24834, (int)24833);
				@@@var_0_object:AddReply((int)522095, (int)-1, (int)23264);
				goto Label_3233;
		}
	}
Label_3233:
	var_762_bool = 0;
	func_4826(var_762_bool);
	if(var_762_bool != 0) {

	Label_3237:
		lshWaitForAnimEnd();
		var_763_string = var_3_string;
		if(var_763_string != 0) {
		} else {
			var_764_string = "";
			var_764_string = var_2_object;
			func_4633(var_764_string);
			goto Label_3237;
	}
		PlayAnimation("all", "idle");

	Label_3252:
		WaitForAnimEnd();
		var_767_string = var_3_string;
		if(var_767_string != 0) {
			goto Label_3262;
		}
		PlayAnimation("all", "idle");
		goto Label_3252;

	}
	goto Label_3262;
	
Label_3262:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc61";


func_4189()
{
	KillTimer((int)10);
	return 0;
}


func_4702(var_329_int, var_330_string)
{
	var_331_int = 0; var_332_int = 0;
	GetVariable(var_330_string, var_332_int);
	var_332_int = var_329_int;
	return 2;
}


func_4707(var_62_object, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj();
	GetMainOutdoorScene(var_66_object);
	var_69_int = var_63_string + ".bin";
	AddBlankActor(var_67_object, var_66_object, var_63_string, var_69_int);
	var_67_object = var_62_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5223(var_369_bool)
{
	var_371_int = 0; var_372_string = "";
	func_4702(var_371_int, "oob2Ospina2");
	var_374_bool = var_371_int == (int)0;
	if(var_374_bool != 0) {
		var_369_bool = 1;
		return 0;
	}
	var_369_bool = 0;
	return 0;
}


func_2152(var_0_object, var_1_object, var_2_object, var_3_string, var_571_object, var_572_object)
{
	var_0_object = var_572_object;
	var_1_object = var_571_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_578_string = "";
		func_2225(var_572_object, "Neutral");
		@@@var_0_object:SetMessage((int)521431);
		@@@var_0_object:ClearReplies();
		var_587_bool = 0; var_588_object = Obj();
		var_588_object = var_1_object;
		func_5074(var_588_object);
		if(var_587_bool != 0) {
			@@@var_0_object:AddReply((int)521432, (int)22611, (int)22610);
		}
		var_596_bool = 0; var_597_object = Obj();
		var_597_object = var_1_object;
		func_5139(var_597_object);
		if(var_596_bool != 0) {
			@@@var_0_object:AddReply((int)523679, (int)24958, (int)24931);
		}
		@@@var_0_object:AddReply((int)521435, (int)-1, (int)22613);
		goto Label_2195;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x86c";
	}
Label_2195:
	var_608_bool = 0;
	func_4826(var_608_bool);
	if(var_608_bool != 0) {

	Label_2199:
		lshWaitForAnimEnd();
		var_609_string = var_3_string;
		if(var_609_string != 0) {
		} else {
			var_610_string = "";
			var_610_string = var_2_object;
			func_4633(var_610_string);
			goto Label_2199;
	}
		PlayAnimation("all", "idle");

	Label_2214:
		WaitForAnimEnd();
		var_613_string = var_3_string;
		if(var_613_string != 0) {
			goto Label_2224;
		}
		PlayAnimation("all", "idle");
		goto Label_2214;
	}
	goto Label_2224;
	
Label_2224:
	return 0;
	
}


func_4718(var_98_int, var_99_int)
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateIntVector(var_101_object);
	@@var_101_object:add(var_98_int);
	@@var_101_object:add(var_99_int);
	SendWorldWndMessage((int)3, var_101_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5235(var_378_bool)
{
	var_380_int = 0; var_381_string = "";
	func_4702(var_380_int, "oob2Ospina3");
	var_383_bool = var_380_int == (int)0;
	if(var_383_bool != 0) {
		var_378_bool = 1;
		return 0;
	}
	var_378_bool = 0;
	return 0;
}


func_4985()
{
	SetVariable("b8q01", (int)6);
	func_5298();
	return 0;
}


func_4730(var_87_object, var_88_object, var_89_int)
{
	var_90_int = 0; var_91_int = 0; var_92_bool = 0; var_93_int = 0; var_94_int = 0; var_95_bool = 0;
	@@var_88_object:GetItemID(var_93_int);
	GetInvItemProperty(var_94_int, var_93_int, "Category");
	@@var_87_object:AddItem(var_95_bool, var_88_object, var_94_int, var_89_int);
	var_97_bool = var_95_bool == 0; //@nz
	if(var_97_bool != 0) {
		@@var_87_object:DropItems(var_88_object, var_89_int);
	} else {
		var_98_int = 0; var_99_int = 0;
		var_93_int = var_98_int;
		var_89_int = var_99_int;
		func_4718(var_98_int, var_99_int);
	}
	return 6;
	
}


func_4477()
{
	var_285_bool = 0; var_286_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_288_bool = 0;
	func_4826(var_288_bool);
	if(var_288_bool != 0) {
	} else {
		HasAnimationTrack(var_286_bool, "head");
		var_290_bool = var_286_bool;
		if(var_290_bool == 0) goto Label_4494;
		UnlookAsync("head");
	}
Label_4494:
	return 2;
	
}


func_5247(var_387_bool)
{
	var_389_int = 0; var_390_string = "";
	func_4702(var_389_int, "oob2Ospina4");
	var_392_bool = var_389_int == (int)0;
	if(var_392_bool != 0) {
		var_387_bool = 1;
		return 0;
	}
	var_387_bool = 0;
	return 0;
}


func_4994()
{
	SetVariable("oob10Ospina1", (int)1);
	return 0;
}


func_1926(var_0_object, var_1_object, var_2_object, var_3_string, var_234_object, var_235_object)
{
	var_0_object = var_235_object;
	var_1_object = var_234_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_241_string = "";
		func_1984(var_235_object, "Neutral");
		@@@var_0_object:SetMessage((int)520800);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520801, (int)29131, (int)22018);
		@@@var_0_object:AddReply((int)527799, (int)-1, (int)29132);
		goto Label_1954;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x78a";
	}
Label_1954:
	var_265_bool = 0;
	func_4826(var_265_bool);
	if(var_265_bool != 0) {

	Label_1958:
		lshWaitForAnimEnd();
		var_266_string = var_3_string;
		if(var_266_string != 0) {
		} else {
			var_267_string = "";
			var_267_string = var_2_object;
			func_4633(var_267_string);
			goto Label_1958;
	}
		PlayAnimation("all", "idle");

	Label_1973:
		WaitForAnimEnd();
		var_280_string = var_3_string;
		if(var_280_string != 0) {
			goto Label_1983;
		}
		PlayAnimation("all", "idle");
		goto Label_1973;
	}
	goto Label_1983;
	
Label_1983:
	return 0;
	
}


func_5000()
{
	SetVariable("b11q01KnowWhoKilled", (int)1);
	func_5259();
	return 0;
}


func_5259()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)315, (int)1, (int)522057);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_5324(var_61_bool, var_62_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4749(var_82_object, var_83_string, var_84_int)
{
	var_85_object = Obj(); var_86_object = Obj();
	CreateInvItem(var_86_object);
	@@var_86_object:SetItemName(var_83_string);
	var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0;
	var_82_object = var_87_object;
	var_86_object = var_88_object;
	var_84_int = var_89_int;
	func_4730(var_87_object, var_88_object, var_89_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4495(var_139_bool, var_140_object)
{
	var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_int = 0;
	GetVariable("voice_common", var_146_int);
	var_149_int = var_146_int;
	if(var_149_int != 0) {
		var_150_bool = 0; var_151_object = Obj();
		var_140_object = var_151_object;
		func_4553(var_150_bool, var_151_object);
		var_180_bool = var_150_bool == 0; //@nz
		if(var_180_bool != 0) {
			var_181_bool = 0; var_182_object = Obj();
			var_140_object = var_182_object;
			func_4590(var_181_bool, var_182_object);
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
		func_4590(var_226_bool, var_227_object);
		var_228_bool = var_226_bool == 0; //@nz
		if(var_228_bool != 0) {
			var_229_bool = 0; var_230_object = Obj();
			var_140_object = var_230_object;
			func_4553(var_229_bool, var_230_object);
			var_231_bool = var_229_bool == 0; //@nz
			if(var_231_bool != 0) {
				var_139_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4551;
	
Label_4551:
	var_139_bool = 1;
	return 4;
	
}


func_912(var_0_object, var_296_int, var_297_object)
{
	var_299_object = Obj(); var_300_bool = 0; var_301_int = 0; var_302_bool = 0; var_303_object = Obj(); var_304_bool = 0; var_305_int = 0; var_306_bool = 0;
	var_0_object = var_297_object;
	var_307_bool = 0; var_308_object = Obj(); var_309_float = 0;
	var_297_object = var_308_object;
	func_4408(var_307_bool, var_308_object, (float)70.0);
	var_310_bool = var_307_bool == 0; //@nz
	if(var_310_bool != 0) {
		var_296_int = -2;
		return 8;
	}
	CreateDialog(var_303_object);
	var_311_int = 0;
	func_4820(var_311_int);
	@@var_303_object:SetNPCName(var_311_int);
	var_312_int = 0;
	func_4818(var_312_int);
	@@var_303_object:SetNPCDescription(var_312_int);
	var_313_string = "";
	func_4822(var_313_string);
	@@var_303_object:SetPhoto(var_313_string);
	var_314_string = "";
	func_4824(var_314_string);
	@@var_303_object:SetPhoto2(var_314_string);
	var_315_int = 0;
	func_5402(var_315_int);
	@@var_303_object:SetPlayerName(var_315_int);
	IsOverrideActive(var_304_bool);
	var_316_bool = var_304_bool;
	if(var_316_bool != 0) {
		var_296_int = -2;
		return 8;
	}
	DoDialog(var_303_object);
	var_317_bool = 0; var_318_object = Obj();
	func_4686(Obj());
	var_319_object = var_318_object;
	func_4495(var_317_bool, var_318_object);
	var_320_object = Obj(); var_321_object = Obj();
	var_297_object = var_320_object;
	var_303_object = var_321_object;
	TaskCall(5);
	func_993(var_322_object, var_323_object, var_324_string, var_325_bool, var_320_object, var_321_object);
	TaskReturn();
	@@var_303_object:IsDialogEnd(var_306_bool);
	
Label_975:
	var_399_bool = var_306_bool == 0; //@nz
	if(var_399_bool != 0) {
		sync();
		@@var_303_object:IsDialogEnd(var_306_bool);
		goto Label_975;
	}
	var_297_object = Obj();
	func_4477();
	StopDialog(var_303_object);
	@@var_303_object:GetReturnValue((int)-1);
	var_305_int = var_296_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5009()
{
	SetVariable("oob11Ospina1", (int)1);
	return 0;
}


func_5015()
{
	func_5285();
	return 0;
}


func_3736(var_0_object, var_1_object, var_2_object, var_3_string, var_809_object, var_810_object)
{
	var_0_object = var_810_object;
	var_1_object = var_809_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_816_string = "";
		func_3799(var_810_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_3769;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe9c";
	}
Label_3769:
	var_834_bool = 0;
	func_4826(var_834_bool);
	if(var_834_bool != 0) {

	Label_3773:
		lshWaitForAnimEnd();
		var_835_string = var_3_string;
		if(var_835_string != 0) {
		} else {
			var_836_string = "";
			var_836_string = var_2_object;
			func_4633(var_836_string);
			goto Label_3773;
	}
		PlayAnimation("all", "idle");

	Label_3788:
		WaitForAnimEnd();
		var_839_string = var_3_string;
		if(var_839_string != 0) {
			goto Label_3798;
		}
		PlayAnimation("all", "idle");
		goto Label_3788;
	}
	goto Label_3798;
	
Label_3798:
	return 0;
	
}


func_153(var_2_object, var_507_string)
{
	var_508_bool = 0;
	func_4826(var_508_bool);
	var_509_bool = var_508_bool == 0; //@nz
	if(var_509_bool != 0) {
		return 0;
	}
	var_510_bool = var_507_string == var_2_object;
	if(var_510_bool != 0) {
		return 0;
	}
	var_511_string = ""; var_512_bool = 0;
	var_507_string = var_511_string;
	var_514_bool = var_507_string == "";
	if(var_514_bool != 0) {
		var_512_bool = 0;
	} else {
		var_512_bool = 1;
	}
	func_4649(var_511_string, var_512_bool);
	var_2_object = var_507_string;
	return 0;
	
}


func_4762(var_56_bool, var_57_string, var_58_string)
{
	var_59_object = Obj(); var_60_object = Obj();
	FindActor(var_60_object, var_57_string);
	var_61_bool = var_60_object == 0; //@ne
	if(var_61_bool != 0) {
		var_56_bool = 0;
		return 2;
	}
	Trigger(var_60_object, var_58_string);
	var_56_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5272()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)223, (int)1, (int)519636);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_5324(var_77_bool, var_78_object, (int)221);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2714(var_0_object, var_620_int, var_621_object)
{
	var_623_object = Obj(); var_624_bool = 0; var_625_int = 0; var_626_bool = 0; var_627_object = Obj(); var_628_bool = 0; var_629_int = 0; var_630_bool = 0;
	var_0_object = var_621_object;
	var_631_bool = 0; var_632_object = Obj(); var_633_float = 0;
	var_621_object = var_632_object;
	func_4408(var_631_bool, var_632_object, (float)70.0);
	var_634_bool = var_631_bool == 0; //@nz
	if(var_634_bool != 0) {
		var_620_int = -2;
		return 8;
	}
	CreateDialog(var_627_object);
	var_635_int = 0;
	func_4820(var_635_int);
	@@var_627_object:SetNPCName(var_635_int);
	var_636_int = 0;
	func_4818(var_636_int);
	@@var_627_object:SetNPCDescription(var_636_int);
	var_637_string = "";
	func_4822(var_637_string);
	@@var_627_object:SetPhoto(var_637_string);
	var_638_string = "";
	func_4824(var_638_string);
	@@var_627_object:SetPhoto2(var_638_string);
	var_639_int = 0;
	func_5402(var_639_int);
	@@var_627_object:SetPlayerName(var_639_int);
	IsOverrideActive(var_628_bool);
	var_640_bool = var_628_bool;
	if(var_640_bool != 0) {
		var_620_int = -2;
		return 8;
	}
	DoDialog(var_627_object);
	var_641_bool = 0; var_642_object = Obj();
	func_4686(Obj());
	var_643_object = var_642_object;
	func_4495(var_641_bool, var_642_object);
	var_644_object = Obj(); var_645_object = Obj();
	var_621_object = var_644_object;
	var_627_object = var_645_object;
	TaskCall(11);
	func_2795(var_646_object, var_647_object, var_648_string, var_649_bool, var_644_object, var_645_object);
	TaskReturn();
	@@var_627_object:IsDialogEnd(var_630_bool);
	
Label_2777:
	var_693_bool = var_630_bool == 0; //@nz
	if(var_693_bool != 0) {
		sync();
		@@var_627_object:IsDialogEnd(var_630_bool);
		goto Label_2777;
	}
	var_621_object = Obj();
	func_4477();
	StopDialog(var_627_object);
	@@var_627_object:GetReturnValue((int)-1);
	var_629_int = var_620_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3995(var_0_object, var_1_object, var_2_object, var_3_string, var_869_object, var_870_object)
{
	var_0_object = var_870_object;
	var_1_object = var_869_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_876_string = "";
		func_4053(var_870_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_4023;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf9f";
	}
Label_4023:
	var_891_bool = 0;
	func_4826(var_891_bool);
	if(var_891_bool != 0) {

	Label_4027:
		lshWaitForAnimEnd();
		var_892_string = var_3_string;
		if(var_892_string != 0) {
		} else {
			var_893_string = "";
			var_893_string = var_2_object;
			func_4633(var_893_string);
			goto Label_4027;
	}
		PlayAnimation("all", "idle");

	Label_4042:
		WaitForAnimEnd();
		var_896_string = var_3_string;
		if(var_896_string != 0) {
			goto Label_4052;
		}
		PlayAnimation("all", "idle");
		goto Label_4042;
	}
	goto Label_4052;
	
Label_4052:
	return 0;
	
}


func_5020(var_116_object)
{
	var_117_object = Obj(); var_118_string = ""; var_119_float = 0;
	func_5352(Obj());
	var_120_object = var_117_object;
	func_5369(var_117_object, "pt_gatherer3", (float)2);
	var_140_object = Obj();
	func_5352(var_140_object);
	@@var_116_object:ShowMap(var_140_object);
	return 0;
}


func_671(var_2_object, var_434_string)
{
	var_435_bool = 0;
	func_4826(var_435_bool);
	var_436_bool = var_435_bool == 0; //@nz
	if(var_436_bool != 0) {
		return 0;
	}
	var_437_bool = var_434_string == var_2_object;
	if(var_437_bool != 0) {
		return 0;
	}
	var_438_string = ""; var_439_bool = 0;
	var_434_string = var_438_string;
	var_441_bool = var_434_string == "";
	if(var_441_bool != 0) {
		var_439_bool = 0;
	} else {
		var_439_bool = 1;
	}
	func_4649(var_438_string, var_439_bool);
	var_2_object = var_434_string;
	return 0;
	
}


func_5285()
{
	var_92_object = Obj(); var_93_object = Obj();
	CreateDiaryEntry(var_93_object, (int)240, (int)1, (int)519745);
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0;
	var_93_object = var_98_object;
	func_5324(var_97_bool, var_98_object, (int)238);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4774(var_115_float)
{
	var_116_float = 0; var_117_float = 0;
	GetGameTime(var_117_float);
	var_117_float = var_115_float;
	return 2;
}


func_4779(var_194_int)
{
	var_195_float = 0; var_196_float = 0;
	GetGameTime(var_196_float);
	var_198_int = 0;
	var_198_int = var_196_float / (int)24;
	var_194_int = (int)1 + var_198_int;
	return 2;
}


func_5036()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2225(var_2_object, var_578_string)
{
	var_579_bool = 0;
	func_4826(var_579_bool);
	var_580_bool = var_579_bool == 0; //@nz
	if(var_580_bool != 0) {
		return 0;
	}
	var_581_bool = var_578_string == var_2_object;
	if(var_581_bool != 0) {
		return 0;
	}
	var_582_string = ""; var_583_bool = 0;
	var_578_string = var_582_string;
	var_585_bool = var_578_string == "";
	if(var_585_bool != 0) {
		var_583_bool = 0;
	} else {
		var_583_bool = 1;
	}
	func_4649(var_582_string, var_583_bool);
	var_2_object = var_578_string;
	return 0;
	
}


func_5298()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)290, (int)1, (int)521461);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_5324(var_61_bool, var_62_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5042()
{
	SetVariable("b2q01", (int)3);
	var_56_bool = 0; var_57_string = ""; var_58_string = "";
	func_4762(var_56_bool, "quest_b2_01", "place_box");
	var_62_object = Obj(); var_63_string = "";
	func_4707(var_62_object, "quest_b2_02");
	return 0;
}


func_4788(var_293_bool, var_294_int)
{
	var_295_int = 0;
	func_4779(var_295_int);
	var_293_bool = var_295_int == var_294_int;
	return 0;
}


func_4794(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = "";
	var_75_int = var_72_int;
	if(var_75_int != 0) {
		"idle" = "idle" + var_72_int;
	}
	var_74_string = var_71_string;
	return 2;
}


func_3263(var_2_object, var_738_string)
{
	var_739_bool = 0;
	func_4826(var_739_bool);
	var_740_bool = var_739_bool == 0; //@nz
	if(var_740_bool != 0) {
		return 0;
	}
	var_741_bool = var_738_string == var_2_object;
	if(var_741_bool != 0) {
		return 0;
	}
	var_742_string = ""; var_743_bool = 0;
	var_738_string = var_742_string;
	var_745_bool = var_738_string == "";
	if(var_745_bool != 0) {
		var_743_bool = 0;
	} else {
		var_743_bool = 1;
	}
	func_4649(var_742_string, var_743_bool);
	var_2_object = var_738_string;
	return 0;
	
}


func_5311(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj();
	GetDiaryRoot(var_72_object);
	var_73_bool = var_72_object == 0; //@nz
	if(var_73_bool != 0) {
		Trace("Can't retrieve diary root");
		var_70_object = 0;
		return 2;
	}
	var_72_object = var_70_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4801(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_68_int = 0;
	
Label_4803:
	var_71_string = ""; var_72_int = 0;
	var_68_int = var_72_int;
	func_4794(var_71_string, var_72_int);
	HasAnimation(var_69_bool, "all", var_71_string);
	var_76_bool = var_69_bool == 0; //@nz
	if(var_76_bool != 0) {
	} else {
		var_68_int = var_68_int + (int)1;
		goto Label_4803;
	}
	var_68_int = var_65_int;
	return 4;
	
}


func_1984(var_2_object, var_241_string)
{
	var_242_bool = 0;
	func_4826(var_242_bool);
	var_243_bool = var_242_bool == 0; //@nz
	if(var_243_bool != 0) {
		return 0;
	}
	var_244_bool = var_241_string == var_2_object;
	if(var_244_bool != 0) {
		return 0;
	}
	var_245_string = ""; var_246_bool = 0;
	var_241_string = var_245_string;
	var_248_bool = var_241_string == "";
	if(var_248_bool != 0) {
		var_246_bool = 0;
	} else {
		var_246_bool = 1;
	}
	func_4649(var_245_string, var_246_bool);
	var_2_object = var_241_string;
	return 0;
	
}


func_5057()
{
	SetVariable("oob8Ospina1", (int)1);
	return 0;
}


func_5063(var_79_object)
{
	Trace("b8q01_bone is given");
	var_82_object = Obj(); var_83_string = ""; var_84_int = 0;
	var_79_object = var_82_object;
	func_4749(var_82_object, "b8q01_bone", (int)1);
	return 0;
}


func_4553(var_150_bool, var_151_object)
{
	var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = ""; var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = "";
	var_157_string = "c";
	var_158_int = 0;
	
Label_4556:
	if((int)1 != 0) {
		var_164_int = var_158_int + (int)1;
		var_165_int = var_157_string + var_164_int;
		@@var_151_object:HasProperty(var_165_int, var_159_bool);
		var_166_bool = var_159_bool == 0; //@nz
		if(var_166_bool != 0) {
		} else {
			var_158_int = var_158_int + (int)1;
			goto Label_4556;
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
	func_4664(var_173_bool, var_174_string);
	var_173_bool = var_150_bool;
	return 10;
	
}


func_4300()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0;
	WaitForAnimEnd();
	var_63_bool = 0;
	func_4403(var_63_bool);
	var_64_bool = var_63_bool == 0; //@nz
	if(var_64_bool != 0) {
		return 12;
	}
	func_4801((int)0);
	var_65_int = var_57_int;
	var_58_int = 0;
	
Label_4314:
	var_78_bool = 0;
	var_78_bool = 0;
	var_80_bool = var_58_int < (int)5;
	if(var_80_bool != 0) {
		var_81_bool = 0;
		func_4403(var_81_bool);
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
				func_4794(var_92_string, var_93_int);
				PlayAnimation("all", var_92_string);
				WaitForAnimEnd(var_62_bool);
				var_94_bool = var_62_bool == 0; //@nz
				if(var_94_bool == 0) goto Label_4355;
				goto Label_4366;
		}
		Label_4355:
			var_85_bool = 0;
			func_4369(var_85_bool);
			var_86_bool = var_85_bool == 0; //@nz
			if(var_86_bool != 0) {
				goto Label_4366;
			}
			ResetAAS();
			var_58_int = var_58_int + (int)1;
			goto Label_4314;

		}
	}
Label_4366:
	ResetAAS();
	return 12;
	
}


func_5324(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0;
	func_5311(Obj());
	var_70_object = var_67_object;
	@@var_67_object:Find(var_63_int, var_68_object);
	var_75_bool = var_68_object == 0; //@nz
	if(var_75_bool != 0) {
		var_77_int = "Can't find diary parent with id: " + var_63_int;
		Trace(var_77_int);
		var_61_bool = 0;
		return 6;
	}
	@@var_68_object:AddChild(var_62_object);
	SendWorldWndMessage((int)7);
	@@var_62_object:GetCategory(var_69_int);
	SetDiarySection(var_69_int);
	var_61_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4818(var_127_int)
{
	var_127_int = 515549;
	return 0;
}


func_5074(var_587_bool)
{
	var_589_int = 0; var_590_string = "";
	func_4702(var_589_int, "b8q01");
	var_592_bool = var_589_int == (int)5;
	if(var_592_bool != 0) {
		var_587_bool = 1;
		return 0;
	}
	var_587_bool = 0;
	return 0;
}


func_4820(var_126_int)
{
	var_126_int = 502874;
	return 0;
}


func_4053(var_2_object, var_876_string)
{
	var_877_bool = 0;
	func_4826(var_877_bool);
	var_878_bool = var_877_bool == 0; //@nz
	if(var_878_bool != 0) {
		return 0;
	}
	var_879_bool = var_876_string == var_2_object;
	if(var_879_bool != 0) {
		return 0;
	}
	var_880_string = ""; var_881_bool = 0;
	var_876_string = var_880_string;
	var_883_bool = var_876_string == "";
	if(var_883_bool != 0) {
		var_881_bool = 0;
	} else {
		var_881_bool = 1;
	}
	func_4649(var_880_string, var_881_bool);
	var_2_object = var_876_string;
	return 0;
	
}


func_4822(var_128_string)
{
	var_128_string = "ui/NPC_Ospina.png";
	return 0;
}


func_3799(var_2_object, var_816_string)
{
	var_817_bool = 0;
	func_4826(var_817_bool);
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
	func_4649(var_820_string, var_821_bool);
	var_2_object = var_816_string;
	return 0;
	
}


func_4824(var_129_string)
{
	var_129_string = "ui/NPC_Ospina_b.png";
	return 0;
}


func_4826(var_121_bool)
{
	var_121_bool = 1;
	return 0;
}


func_4828()
{
	SetVariable("oob5Ospina1", (int)1);
	return 0;
}


func_5086(var_671_bool)
{
	var_673_int = 0; var_674_string = "";
	func_4702(var_673_int, "b10q01");
	var_676_bool = var_673_int == (int)4;
	if(var_676_bool != 0) {
		var_671_bool = 1;
		return 0;
	}
	var_671_bool = 0;
	return 0;
}


func_993(var_0_object, var_1_object, var_2_object, var_3_string, var_320_object, var_321_object)
{
	var_0_object = var_321_object;
	var_1_object = var_320_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_327_bool = 0; var_328_object = Obj();
		var_328_object = var_1_object;
		func_5199(var_328_object);
		if(var_327_bool != 0) {
			var_335_string = "";
			func_1111(var_321_object, "Neutral");
			@@@var_0_object:SetMessage((int)520279);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520280, (int)21473, (int)21472);
			@@@var_0_object:AddReply((int)520299, (int)21475, (int)21493);
		} else {
				var_358_string = "";
				func_1111(var_321_object, "Neutral");
				@@@var_0_object:SetMessage((int)520300);
				@@@var_0_object:ClearReplies();
				var_360_bool = 0; var_361_object = Obj();
				var_361_object = var_1_object;
				func_5211(var_361_object);
				if(var_360_bool != 0) {
					@@@var_0_object:AddReply((int)520301, (int)21497, (int)21496);
				}
				var_369_bool = 0; var_370_object = Obj();
				var_370_object = var_1_object;
				func_5223(var_370_object);
				if(var_369_bool != 0) {
					@@@var_0_object:AddReply((int)520317, (int)21513, (int)21512);
				}
				var_378_bool = 0; var_379_object = Obj();
				var_379_object = var_1_object;
				func_5235(var_379_object);
				if(var_378_bool != 0) {
					@@@var_0_object:AddReply((int)520324, (int)21520, (int)21519);
				}
				var_387_bool = 0; var_388_object = Obj();
				var_388_object = var_1_object;
				func_5247(var_388_object);
				if(var_387_bool != 0) {
					@@@var_0_object:AddReply((int)520327, (int)21523, (int)21522);
				}
				@@@var_0_object:AddReply((int)520330, (int)-1, (int)21525);
				goto Label_1081;
		}
	}
Label_1081:
	var_350_bool = 0;
	func_4826(var_350_bool);
	if(var_350_bool != 0) {

	Label_1085:
		lshWaitForAnimEnd();
		var_351_string = var_3_string;
		if(var_351_string != 0) {
		} else {
			var_352_string = "";
			var_352_string = var_2_object;
			func_4633(var_352_string);
			goto Label_1085;
	}
		PlayAnimation("all", "idle");

	Label_1100:
		WaitForAnimEnd();
		var_355_string = var_3_string;
		if(var_355_string != 0) {
			goto Label_1110;
		}
		PlayAnimation("all", "idle");
		goto Label_1100;

	}
	goto Label_1110;
	
Label_1110:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3e5";


func_4834()
{
	var_60_object = Obj(); var_61_object = Obj();
	var_62_int = 0; var_63_string = "";
	func_4702(var_62_int, "b5q01PlaceButchers");
	var_67_bool = var_62_int == (int)0;
	if(var_67_bool != 0) {
		SetVariable("b5q01PlaceButchers", (int)1);
		func_5352(Obj());
		var_70_object = var_61_object;
		var_81_float = 0;
		func_4774(var_81_float);
		@@var_61_object:AddMark("b5q01GathererWife", "pt_gatherer3", (int)1, (int)530181, var_81_float);
		var_84_bool = 0; var_85_string = ""; var_86_string = "";
		func_4762(var_84_bool, "quest_b5_01", "place_butchers");
		var_61_object = 0;
	}
	return 2;
}


func_5352(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj();
	GetMainOutdoorScene(var_107_object);
	var_109_bool = var_107_object == 0; //@ne
	if(var_109_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_108_object = 0;
		var_108_object = var_104_object;
		return 4;
	}
	@@var_107_object:GetMap(var_108_object);
	var_108_object = var_104_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5098(var_662_bool)
{
	var_664_int = 0; var_665_string = "";
	func_4702(var_664_int, "b10q01");
	var_667_bool = var_664_int == (int)1000;
	if(var_667_bool != 0) {
		var_662_bool = 1;
		return 0;
	}
	var_662_bool = 0;
	return 0;
}


func_2795(var_0_object, var_1_object, var_2_object, var_3_string, var_644_object, var_645_object)
{
	var_0_object = var_645_object;
	var_1_object = var_644_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_651_string = "";
		func_2885(var_645_object, "Neutral");
		@@@var_0_object:SetMessage((int)521945);
		@@@var_0_object:ClearReplies();
		var_660_bool = 0;
		var_660_bool = 1;
		var_661_bool = 0;
		var_661_bool = 0;
		var_662_bool = 0; var_663_object = Obj();
		var_663_object = var_1_object;
		func_5098(var_663_object);
		if(var_662_bool != 0) {
			var_668_bool = 0; var_669_object = Obj();
			var_669_object = var_1_object;
			func_5110(var_669_object);
			if(var_668_bool != 0) {
				var_661_bool = 1;
			}
		}
		if(var_661_bool != 1) {
			var_670_bool = 0;
			var_670_bool = 0;
			var_671_bool = 0; var_672_object = Obj();
			var_672_object = var_1_object;
			func_5086(var_672_object);
			if(var_671_bool != 0) {
				var_677_bool = 0; var_678_object = Obj();
				var_678_object = var_1_object;
				func_5110(var_678_object);
				if(var_677_bool != 0) {
					var_670_bool = 1;
				}
			}
			if(var_670_bool != 1) {
				var_660_bool = 0;
			}
		}
		if(var_660_bool != 0) {
			@@@var_0_object:AddReply((int)521946, (int)23122, (int)23120);
		}
		@@@var_0_object:AddReply((int)521947, (int)-1, (int)23121);
		goto Label_2855;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xaef";
	}
Label_2855:
	var_685_bool = 0;
	func_4826(var_685_bool);
	if(var_685_bool != 0) {

	Label_2859:
		lshWaitForAnimEnd();
		var_686_string = var_3_string;
		if(var_686_string != 0) {
		} else {
			var_687_string = "";
			var_687_string = var_2_object;
			func_4633(var_687_string);
			goto Label_2859;
	}
		PlayAnimation("all", "idle");

	Label_2874:
		WaitForAnimEnd();
		var_690_string = var_3_string;
		if(var_690_string != 0) {
			goto Label_2884;
		}
		PlayAnimation("all", "idle");
		goto Label_2874;
	}
	goto Label_2884;
	
Label_2884:
	return 0;
	
}


func_4590(var_181_bool, var_182_object)
{
	var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = ""; var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = "";
	var_194_int = 0;
	func_4779(var_194_int);
	var_200_int = "d" + var_194_int;
	var_188_string = var_200_int + "m";
	var_189_int = 0;
	
Label_4599:
	if((int)1 != 0) {
		var_204_int = var_189_int + (int)1;
		var_205_int = var_188_string + var_204_int;
		@@var_182_object:HasProperty(var_205_int, var_190_bool);
		var_206_bool = var_190_bool == 0; //@nz
		if(var_206_bool != 0) {
		} else {
			var_189_int = var_189_int + (int)1;
			goto Label_4599;
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
	func_4664(var_213_bool, var_214_string);
	var_213_bool = var_181_bool;
	return 10;
	
}


func_5110(var_668_bool)
{
	var_668_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_5369(var_103_object, var_104_string, var_105_float)
{
	var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_object = Obj(); var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0;
	GetMainOutdoorScene(var_113_object);
	var_115_bool = var_113_object == 0; //@ne
	if(var_115_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_113_object:GetLocator(var_104_string, var_114_bool, var_111_cvector, var_112_cvector);
	var_117_bool = var_114_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_119_int = "Warning: outdoor scene locator " + var_104_string;
		var_121_int = var_119_int + " doesnt exist";
		Trace(var_121_int);
	}
	@@var_113_object:GetMap(var_103_object);
	var_122_bool = var_103_object == 0; //@ne
	if(var_122_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_124_float = GetByIndex(var_111_cvector, 0);
	var_125_float = GetByIndex(var_111_cvector, 2);
	@@var_103_object:SetMapParams(var_124_float, var_125_float, var_105_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5115(var_753_bool)
{
	var_755_int = 0; var_756_string = "";
	func_4702(var_755_int, "b11q01");
	var_758_bool = var_755_int == (int)1000;
	if(var_758_bool != 0) {
		var_753_bool = 1;
		return 0;
	}
	var_753_bool = 0;
	return 0;
}


