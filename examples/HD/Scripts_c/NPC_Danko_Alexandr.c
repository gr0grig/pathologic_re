// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActorFromXml/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Gratitude|W:Strict|W:Grief|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:.xml|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Alexandr.png|W:ui/NPC_Alexandr_b.png|W:pt_map_katerina|A:ShowMap|W:playsound|W:givemoney|W:giveitem|W:ood1Alexandr1|W:d4AlexandrVisit|W:pt_d4q03_volnica|W:ood1Alexandr2|W:ood2Alexandr1|W:ood2Alexandr2|W:ood2Alexandr3|W:ood2Alexandr5|W:Revolver is given|W:Revolver|W:durability|W:d2q01|W:d2q01AlexandrGotoAnna|W:pt_map_anna|A:AddMark|W:quest_d2_01|W:completed|W:d2q01AlexandrGotoBigVlad|W:pt_map_bigvlad|W:d2q01AlexandrGotoGeorg|W:pt_map_georg|W:money 5000 is given|W:pt_map_julia|W:mapmark|W:pt_map_ospina|W:ood3Alexandr1|W:ood3Alexandr2|W:ood3Alexandr3|W:ood3Alexandr4|W:d3q01|W:d3q01AlexandrGotoOspina|W:d2q01_key|A:RemoveItemByType|W:ood4Alexandr1|W:d4q03AlexandrGotoGrif|W:pt_map_grif|W:quest_d4_03|W:ood4Alexandr2|W:d4q03|W:d4q03AlexandrAboutVolnica|A:FindMark|A:Remove|W:d4q03AlexandrGotoGrifSelf|W:d4q03GrifGotoAlexandr|W:d4q03GrifGotoAlexandrSelf|W:pt_map_warehouse_gangster|W:revolver ammo6 is given|W:revolver_ammo|W:ood4Alexandr3|W:d5q01|W:d5q01AlexandrGotoKaterina|W:ood3Alexandr5|W:d1q01|W:d1q01AlexandrGotoJulia|W:ood5Alexandr1|W:ood5Alexandr2|W:ood6Alexandr1|W:ood6Alexandr2|W:ood6Alexandr3|W:ood6Alexandr4|W:d6q01AlexandrGotoKaterina|W:ood7Alexandr1|W:KnowAlexandr|W:d6q01AlexandrGotoJulia|W:d6q01AlexandrGotoLara|W:pt_map_lara|W:d6q01AlexangrGotoJulLaraSelf|W:pt_map_alexandr|W:d2TalkToAlexandr|W:d7q02AlexandrGotoPetr|W:pt_map_petr|W:cutscene_burn_d1|W:d2q01BigVladVisit|W:d2q03|W:d4q03_alldead|W:d6q02|W:d5q03|W:d6q01|W:d6q01KnowKillerIsKlara|W:d7q02|W:microscope_d6q01_lara_blood|W:microscope_d6q01_julia_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x1c4a
// @RUN_TASK: 22
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x213 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6da vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb7e vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf0d vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x11ec vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x14a8 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x16bb vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a52 vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1b22 vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1c20 vars=int,int
// @TASK_22: vars=cvector params=0
// @EVENT_7: op=0x1c96 vars=int
// @EVENT_6: op=0x1cbc vars=
// @EVENT_5: op=0x1ccb vars=
// @EVENT_45: op=0x1cd8 vars=bool
// @EVENT_0: op=0x1ce4 vars=object
// @PE: 0x51,0x8b,0xa1,0x14f,0x1fd,0x213,0x5dc,0x6c4,0x6da,0xad6,0xb68,0xb7e,0xe74,0xef7,0xf0d,0x1171,0x11d6,0x11ec,0x144a,0x1492,0x14a8,0x1628,0x16a5,0x16bb,0x1a02,0x1a3c,0x1a52,0x1acd,0x1b0c,0x1b22,0x1bd0,0x1c0a,0x1c20,0x1c96,0x1cbc,0x1cd8,0x1ebc,0x1f16,0x1f5d,0x1f98,0x1fa8,0x1fae,0x1fb4,0x1fba,0x1fc0,0x1fd0,0x1fd5,0x1fdb,0x1fe1,0x1fe7,0x1fed,0x2022,0x204c,0x2056,0x2066,0x2076,0x207c,0x208c,0x2092,0x2098,0x209e,0x20bb,0x20d1,0x20f1,0x2101,0x2151,0x2161,0x216c,0x2186,0x21a3,0x21a9,0x21af,0x21b6,0x21bc,0x21c2,0x21c8,0x21de,0x21e4,0x220f,0x2228,0x2234,0x2240,0x224c,0x2258,0x2264,0x2270,0x227c,0x2288,0x2294,0x22a0,0x22a5,0x22b1,0x22bd,0x22c9,0x22d5,0x22e1,0x22ed,0x22f9,0x2305,0x2311,0x231d,0x2329,0x2335,0x2341,0x234d,0x2359,0x2365,0x2371,0x237d,0x2389,0x2395,0x23a1,0x23ad,0x23b9,0x23c5,0x23d1,0x23dd,0x23e9,0x23f5,0x2401,0x240d,0x2419,0x2425,0x2546

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_56_bool == (int)336;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8676();
			var_66_string = "";
			func_139(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500287);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532871, (int)34360, (int)34359);
			return 0;
		}
		var_88_bool = var_56_bool == (int)34360;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_139(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500288, (int)340, (int)337);
			@@@var_0_object:AddReply((int)500290, (int)340, (int)339);
			@@@var_0_object:AddReply((int)500289, (int)-1, (int)338);
			return 0;
		}
		var_101_bool = var_56_bool == (int)340;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_139(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500292, (int)-1, (int)341);
			@@@var_0_object:AddReply((int)500293, (int)-1, (int)342);
			return 0;
		}
		var_3_string = true;
		var_110_bool = 0;
		func_8086(var_110_bool);
		if(var_110_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_57_cvector == (int)13846;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8682();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_8310();
		}
		var_118_bool = var_57_cvector == (int)13851;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_8682();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_8310();
		}
		var_124_bool = var_57_cvector == (int)13891;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_8682();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_8310();
		}
		var_130_bool = var_57_cvector == (int)13904;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_8682();
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_8310();
		}
		var_136_bool = var_57_cvector == (int)13905;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_8682();
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_8310();
		}
		var_142_bool = var_57_cvector == (int)13829;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_8636();
		}
		var_148_bool = var_57_cvector == (int)13840;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_8642();
		}
		var_154_bool = var_57_cvector == (int)13195;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_8648();
		}
		var_160_bool = var_57_cvector == (int)11744;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_8654();
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_8088(var_172_object);
		}
		var_198_bool = var_57_cvector == (int)11745;
		if(var_198_bool != 0) {
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_object;
			func_8654();
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_8088(var_202_object);
		}
		var_204_bool = var_57_cvector == (int)11756;
		if(var_204_bool != 0) {
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_8654();
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_8088(var_208_object);
		}
		var_210_bool = var_57_cvector == (int)11759;
		if(var_210_bool != 0) {
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_8654();
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_8088(var_214_object);
		}
		var_216_bool = var_57_cvector == (int)11760;
		if(var_216_bool != 0) {
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_object;
			func_8654();
			var_219_object = Obj(); var_220_object = Obj();
			var_219_object = var_1_object;
			var_220_object = var_0_object;
			func_8088(var_220_object);
		}
		var_222_bool = var_56_bool == (int)13830;
		if(var_222_bool != 0) {
			var_223_bool = 0;
			var_223_bool = 0;
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_9145(var_225_object);
			if(var_224_bool != 0) {
				var_232_bool = 0; var_233_object = Obj();
				var_233_object = var_1_object;
				func_9157(var_233_object);
				if(var_232_bool != 0) {
					var_223_bool = 1;
				}
			}
			if(var_223_bool != 0) {
				var_238_object = Obj(); var_239_object = Obj();
				var_238_object = var_1_object;
				var_239_object = var_0_object;
				func_8630();
				var_242_string = "";
				func_509(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)512650);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)510633, (int)13839, (int)11732);
				@@@var_0_object:AddReply((int)510665, (int)11772, (int)11771);
				return 0;
			}
			var_266_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511979);
			@@@var_0_object:ClearReplies();
			var_268_bool = 0;
			var_268_bool = 0;
			var_269_bool = 0;
			var_269_bool = 0;
			var_270_bool = 0; var_271_object = Obj();
			var_271_object = var_1_object;
			func_9169(var_271_object);
			if(var_270_bool != 0) {
				var_276_bool = 0; var_277_object = Obj();
				var_277_object = var_1_object;
				func_9085(var_277_object);
				if(var_276_bool != 0) {
					var_269_bool = 1;
				}
			}
			if(var_269_bool != 0) {
				var_282_bool = 0; var_283_object = Obj();
				var_283_object = var_1_object;
				func_9241(var_283_object);
				var_288_bool = var_282_bool == 0; //@nz
				if(var_288_bool != 0) {
					var_268_bool = 1;
				}
			}
			if(var_268_bool != 0) {
				@@@var_0_object:AddReply((int)512649, (int)13832, (int)13829);
			}
			var_292_bool = 0;
			var_292_bool = 0;
			var_293_bool = 0;
			var_293_bool = 0;
			var_294_bool = 0; var_295_object = Obj();
			var_295_object = var_1_object;
			func_9181(var_295_object);
			if(var_294_bool != 0) {
				var_300_bool = 0; var_301_object = Obj();
				var_301_object = var_1_object;
				func_9085(var_301_object);
				if(var_300_bool != 0) {
					var_293_bool = 1;
				}
			}
			if(var_293_bool != 0) {
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_9253(var_303_object);
				var_308_bool = var_302_bool == 0; //@nz
				if(var_308_bool != 0) {
					var_292_bool = 1;
				}
			}
			if(var_292_bool != 0) {
				@@@var_0_object:AddReply((int)512660, (int)13832, (int)13840);
			}
			var_312_bool = 0;
			var_312_bool = 0;
			var_313_bool = 0; var_314_object = Obj();
			var_314_object = var_1_object;
			func_9193(var_314_object);
			if(var_313_bool != 0) {
				var_319_bool = 0; var_320_object = Obj();
				var_320_object = var_1_object;
				func_9205(var_320_object);
				if(var_319_bool != 0) {
					var_312_bool = 1;
				}
			}
			if(var_312_bool != 0) {
				@@@var_0_object:AddReply((int)511980, (int)13196, (int)13195);
			}
			@@@var_0_object:AddReply((int)513018, (int)-1, (int)14224);
			@@@var_0_object:AddReply((int)542996, (int)-1, (int)45444);
			return 0;
		}
		var_335_bool = var_56_bool == (int)13196;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511982, (int)13198, (int)13197);
			@@@var_0_object:AddReply((int)512658, (int)11733, (int)13838);
			return 0;
		}
		var_345_bool = var_56_bool == (int)11733;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510635, (int)11735, (int)11734);
			@@@var_0_object:AddReply((int)510660, (int)11766, (int)11763);
			@@@var_0_object:AddReply((int)510661, (int)11766, (int)11765);
			return 0;
		}
		var_358_bool = var_56_bool == (int)11766;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_509(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)510662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510663, (int)11735, (int)11767);
			@@@var_0_object:AddReply((int)510664, (int)11735, (int)11769);
			return 0;
		}
		var_368_bool = var_56_bool == (int)11735;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510637, (int)11737, (int)11736);
			@@@var_0_object:AddReply((int)510647, (int)11749, (int)11748);
			return 0;
		}
		var_378_bool = var_56_bool == (int)11749;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510649, (int)11737, (int)11750);
			@@@var_0_object:AddReply((int)510650, (int)11753, (int)11752);
			return 0;
		}
		var_388_bool = var_56_bool == (int)11753;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510652, (int)11755, (int)11754);
			@@@var_0_object:AddReply((int)510659, (int)11755, (int)11761);
			return 0;
		}
		var_398_bool = var_56_bool == (int)11755;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510654, (int)-1, (int)11756);
			@@@var_0_object:AddReply((int)510655, (int)11758, (int)11757);
			return 0;
		}
		var_408_bool = var_56_bool == (int)11758;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510657, (int)-1, (int)11759);
			@@@var_0_object:AddReply((int)510658, (int)-1, (int)11760);
			return 0;
		}
		var_418_bool = var_56_bool == (int)11737;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_509(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)510638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510642, (int)11743, (int)11742);
			@@@var_0_object:AddReply((int)510639, (int)11739, (int)11738);
			@@@var_0_object:AddReply((int)510646, (int)11739, (int)11746);
			return 0;
		}
		var_431_bool = var_56_bool == (int)11739;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510640);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510641, (int)11755, (int)11740);
			return 0;
		}
		var_438_bool = var_56_bool == (int)11743;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510644, (int)-1, (int)11744);
			@@@var_0_object:AddReply((int)510645, (int)-1, (int)11745);
			return 0;
		}
		var_448_bool = var_56_bool == (int)13198;
		if(var_448_bool != 0) {
			var_449_string = "";
			func_509(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)511983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511984, (int)13200, (int)13199);
			return 0;
		}
		var_455_bool = var_56_bool == (int)13200;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511986, (int)11735, (int)13201);
			return 0;
		}
		var_462_bool = var_56_bool == (int)13832;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512653, (int)13834, (int)13833);
			return 0;
		}
		var_469_bool = var_56_bool == (int)13834;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512655, (int)-1, (int)13835);
			return 0;
		}
		var_476_bool = var_56_bool == (int)11772;
		if(var_476_bool != 0) {
			var_477_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510666);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510668, (int)11776, (int)11775);
			return 0;
		}
		var_483_bool = var_56_bool == (int)11776;
		if(var_483_bool != 0) {
			var_484_string = "";
			func_509(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)510669);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510670, (int)13839, (int)11777);
			return 0;
		}
		var_490_bool = var_56_bool == (int)13839;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_509(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)512659);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512648, (int)13831, (int)13828);
			return 0;
		}
		var_497_bool = var_56_bool == (int)13831;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512656, (int)13837, (int)13836);
			@@@var_0_object:AddReply((int)512695, (int)13887, (int)13886);
			@@@var_0_object:AddReply((int)512701, (int)13897, (int)13892);
			return 0;
		}
		var_510_bool = var_56_bool == (int)13897;
		if(var_510_bool != 0) {
			var_511_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512706);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512707, (int)13899, (int)13898);
			return 0;
		}
		var_517_bool = var_56_bool == (int)13899;
		if(var_517_bool != 0) {
			var_518_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512708);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512709, (int)13901, (int)13900);
			@@@var_0_object:AddReply((int)512715, (int)13901, (int)13906);
			return 0;
		}
		var_527_bool = var_56_bool == (int)13901;
		if(var_527_bool != 0) {
			var_528_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512710);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512711, (int)13903, (int)13902);
			@@@var_0_object:AddReply((int)512714, (int)-1, (int)13905);
			return 0;
		}
		var_537_bool = var_56_bool == (int)13903;
		if(var_537_bool != 0) {
			var_538_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512712);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512713, (int)-1, (int)13904);
			return 0;
		}
		var_544_bool = var_56_bool == (int)13887;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512700, (int)-1, (int)13891);
			return 0;
		}
		var_551_bool = var_56_bool == (int)13837;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512657);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512661, (int)13843, (int)13842);
			@@@var_0_object:AddReply((int)512667, (int)13843, (int)13849);
			return 0;
		}
		var_561_bool = var_56_bool == (int)13843;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_509(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)512662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512663, (int)13845, (int)13844);
			return 0;
		}
		var_568_bool = var_56_bool == (int)13845;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_509(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512665, (int)-1, (int)13846);
			@@@var_0_object:AddReply((int)512668, (int)-1, (int)13851);
			return 0;
		}
		var_3_string = true;
		var_577_bool = 0;
		func_8086(var_577_bool);
		if(var_577_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x214";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_57_cvector == (int)7775;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8155();
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_8200();
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_8278(var_118_object);
		}
		var_144_bool = var_57_cvector == (int)7779;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_8155();
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_8200();
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_8278(var_150_object);
		}
		var_152_bool = var_57_cvector == (int)7780;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_8155();
		}
		var_156_bool = var_57_cvector == (int)7783;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_8155();
		}
		var_160_bool = var_57_cvector == (int)7790;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_8226();
			var_177_object = Obj(); var_178_object = Obj();
			var_177_object = var_1_object;
			var_178_object = var_0_object;
			func_8110();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_8179(var_182_object);
		}
		var_206_bool = var_57_cvector == (int)7791;
		if(var_206_bool != 0) {
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_8226();
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_8110();
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_8179(var_212_object);
		}
		var_214_bool = var_57_cvector == (int)7436;
		if(var_214_bool != 0) {
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_8226();
		}
		var_218_bool = var_57_cvector == (int)7284;
		if(var_218_bool != 0) {
			var_219_object = Obj(); var_220_object = Obj();
			var_219_object = var_1_object;
			var_220_object = var_0_object;
			func_8395(var_220_object);
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_8167();
		}
		var_230_bool = var_57_cvector == (int)7795;
		if(var_230_bool != 0) {
			var_231_object = Obj(); var_232_object = Obj();
			var_231_object = var_1_object;
			var_232_object = var_0_object;
			func_8236();
			var_256_object = Obj(); var_257_object = Obj();
			var_256_object = var_1_object;
			var_257_object = var_0_object;
			func_8379(var_257_object);
		}
		var_264_bool = var_57_cvector == (int)7798;
		if(var_264_bool != 0) {
			var_265_object = Obj(); var_266_object = Obj();
			var_265_object = var_1_object;
			var_266_object = var_0_object;
			func_8236();
			var_267_object = Obj(); var_268_object = Obj();
			var_267_object = var_1_object;
			var_268_object = var_0_object;
			func_8379(var_268_object);
		}
		var_270_bool = var_57_cvector == (int)7799;
		if(var_270_bool != 0) {
			var_271_object = Obj(); var_272_object = Obj();
			var_271_object = var_1_object;
			var_272_object = var_0_object;
			func_8236();
			var_273_object = Obj(); var_274_object = Obj();
			var_273_object = var_1_object;
			var_274_object = var_0_object;
			func_8379(var_274_object);
		}
		var_276_bool = var_57_cvector == (int)7794;
		if(var_276_bool != 0) {
			var_277_object = Obj(); var_278_object = Obj();
			var_277_object = var_1_object;
			var_278_object = var_0_object;
			func_8167();
		}
		var_280_bool = var_57_cvector == (int)7801;
		if(var_280_bool != 0) {
			var_281_object = Obj(); var_282_object = Obj();
			var_281_object = var_1_object;
			var_282_object = var_0_object;
			func_8200();
			var_283_object = Obj(); var_284_object = Obj();
			var_283_object = var_1_object;
			var_284_object = var_0_object;
			func_8278(var_284_object);
		}
		var_286_bool = var_57_cvector == (int)7410;
		if(var_286_bool != 0) {
			var_287_object = Obj(); var_288_object = Obj();
			var_287_object = var_1_object;
			var_288_object = var_0_object;
			func_8173();
		}
		var_292_bool = var_57_cvector == (int)7411;
		if(var_292_bool != 0) {
			var_293_object = Obj(); var_294_object = Obj();
			var_293_object = var_1_object;
			var_294_object = var_0_object;
			func_8173();
		}
		var_296_bool = var_57_cvector == (int)7414;
		if(var_296_bool != 0) {
			var_297_object = Obj(); var_298_object = Obj();
			var_297_object = var_1_object;
			var_298_object = var_0_object;
			func_8173();
		}
		var_300_bool = var_57_cvector == (int)7416;
		if(var_300_bool != 0) {
			var_301_object = Obj(); var_302_object = Obj();
			var_301_object = var_1_object;
			var_302_object = var_0_object;
			func_8173();
		}
		var_304_bool = var_56_bool == (int)7279;
		if(var_304_bool != 0) {
			var_305_bool = 0; var_306_object = Obj();
			var_306_object = var_1_object;
			func_8792(var_306_object);
			if(var_305_bool != 0) {
				var_313_object = Obj(); var_314_object = Obj();
				var_313_object = var_1_object;
				var_314_object = var_0_object;
				func_8719();
				var_317_string = "";
				func_1732(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)506610);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506611, (int)7748, (int)7280);
				@@@var_0_object:AddReply((int)507066, (int)7748, (int)7784);
				return 0;
			}
			var_341_bool = 0;
			var_341_bool = 0;
			var_342_bool = 0;
			var_342_bool = 0;
			var_343_bool = 0; var_344_object = Obj();
			var_344_object = var_1_object;
			func_8804(var_344_object);
			if(var_343_bool != 0) {
				var_349_bool = 0; var_350_object = Obj();
				var_350_object = var_1_object;
				func_8864(var_350_object);
				if(var_349_bool != 0) {
					var_342_bool = 1;
				}
			}
			if(var_342_bool != 0) {
				var_351_bool = 0; var_352_object = Obj();
				var_352_object = var_1_object;
				func_8869(var_352_object);
				if(var_351_bool != 0) {
					var_341_bool = 1;
				}
			}
			if(var_341_bool != 0) {
				var_357_object = Obj(); var_358_object = Obj();
				var_357_object = var_1_object;
				var_358_object = var_0_object;
				func_8161();
				var_361_string = "";
				func_1732(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)506731);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506732, (int)7420, (int)7419);
				@@@var_0_object:AddReply((int)506742, (int)7420, (int)7430);
				@@@var_0_object:AddReply((int)506743, (int)7433, (int)7432);
				return 0;
			}
			var_372_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506614);
			@@@var_0_object:ClearReplies();
			var_374_bool = 0;
			var_374_bool = 0;
			var_375_bool = 0; var_376_object = Obj();
			var_376_object = var_1_object;
			func_8816(var_376_object);
			if(var_375_bool != 0) {
				var_381_bool = 0; var_382_object = Obj();
				var_382_object = var_1_object;
				func_8852(var_382_object);
				if(var_381_bool != 0) {
					var_374_bool = 1;
				}
			}
			if(var_374_bool != 0) {
				@@@var_0_object:AddReply((int)506615, (int)7282, (int)7284);
			}
			var_390_bool = 0;
			var_390_bool = 1;
			var_391_bool = 0;
			var_391_bool = 0;
			var_392_bool = 0;
			var_392_bool = 0;
			var_393_bool = 0; var_394_object = Obj();
			var_394_object = var_1_object;
			func_8893(var_394_object);
			if(var_393_bool != 0) {
				var_399_bool = 0; var_400_object = Obj();
				var_400_object = var_1_object;
				func_8816(var_400_object);
				if(var_399_bool != 0) {
					var_392_bool = 1;
				}
			}
			if(var_392_bool != 0) {
				var_401_bool = 0; var_402_object = Obj();
				var_402_object = var_1_object;
				func_8852(var_402_object);
				var_403_bool = var_401_bool == 0; //@nz
				if(var_403_bool != 0) {
					var_391_bool = 1;
				}
			}
			if(var_391_bool != 1) {
				var_404_bool = 0;
				var_404_bool = 0;
				var_405_bool = 0;
				var_405_bool = 0;
				var_406_bool = 0; var_407_object = Obj();
				var_407_object = var_1_object;
				func_8881(var_407_object);
				if(var_406_bool != 0) {
					var_412_bool = 0; var_413_object = Obj();
					var_413_object = var_1_object;
					func_8816(var_413_object);
					if(var_412_bool != 0) {
						var_405_bool = 1;
					}
				}
				if(var_405_bool != 0) {
					var_414_bool = 0; var_415_object = Obj();
					var_415_object = var_1_object;
					func_8852(var_415_object);
					var_416_bool = var_414_bool == 0; //@nz
					if(var_416_bool != 0) {
						var_404_bool = 1;
					}
				}
				if(var_404_bool != 1) {
					var_390_bool = 0;
				}
			}
			if(var_390_bool != 0) {
				@@@var_0_object:AddReply((int)507071, (int)7282, (int)7794);
			}
			var_420_bool = 0; var_421_object = Obj();
			var_421_object = var_1_object;
			func_8840(var_421_object);
			if(var_420_bool != 0) {
				@@@var_0_object:AddReply((int)506618, (int)7800, (int)7287);
			}
			var_429_bool = 0; var_430_object = Obj();
			var_430_object = var_1_object;
			func_8828(var_430_object);
			if(var_429_bool != 0) {
				@@@var_0_object:AddReply((int)506730, (int)7405, (int)7417);
			}
			@@@var_0_object:AddReply((int)507532, (int)-1, (int)8314);
			return 0;
		}
		var_442_bool = var_56_bool == (int)7405;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506719, (int)7407, (int)7406);
			@@@var_0_object:AddReply((int)506729, (int)-1, (int)7416);
			return 0;
		}
		var_452_bool = var_56_bool == (int)7407;
		if(var_452_bool != 0) {
			var_453_string = "";
			func_1732(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)506720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506721, (int)7409, (int)7408);
			@@@var_0_object:AddReply((int)506725, (int)7413, (int)7412);
			return 0;
		}
		var_462_bool = var_56_bool == (int)7413;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506727, (int)-1, (int)7414);
			return 0;
		}
		var_469_bool = var_56_bool == (int)7409;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506723, (int)-1, (int)7410);
			@@@var_0_object:AddReply((int)506724, (int)-1, (int)7411);
			return 0;
		}
		var_479_bool = var_56_bool == (int)7800;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507078, (int)-1, (int)7801);
			return 0;
		}
		var_486_bool = var_56_bool == (int)7282;
		if(var_486_bool != 0) {
			var_487_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507072, (int)-1, (int)7795);
			@@@var_0_object:AddReply((int)507073, (int)7797, (int)7796);
			return 0;
		}
		var_496_bool = var_56_bool == (int)7797;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507075, (int)-1, (int)7798);
			@@@var_0_object:AddReply((int)507076, (int)-1, (int)7799);
			return 0;
		}
		var_506_bool = var_56_bool == (int)7433;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_1732(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)506744);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506745, (int)7420, (int)7434);
			@@@var_0_object:AddReply((int)506746, (int)-1, (int)7436);
			return 0;
		}
		var_516_bool = var_56_bool == (int)7420;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506733);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506734, (int)7422, (int)7421);
			@@@var_0_object:AddReply((int)506741, (int)7422, (int)7428);
			return 0;
		}
		var_526_bool = var_56_bool == (int)7422;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_1732(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)506735);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506737, (int)7425, (int)7424);
			@@@var_0_object:AddReply((int)506736, (int)7789, (int)7423);
			return 0;
		}
		var_536_bool = var_56_bool == (int)7425;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506738);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506739, (int)7789, (int)7426);
			@@@var_0_object:AddReply((int)506740, (int)7789, (int)7427);
			return 0;
		}
		var_546_bool = var_56_bool == (int)7789;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507069, (int)-1, (int)7790);
			@@@var_0_object:AddReply((int)507070, (int)-1, (int)7791);
			return 0;
		}
		var_556_bool = var_56_bool == (int)7748;
		if(var_556_bool != 0) {
			var_557_string = "";
			func_1732(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)507034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507035, (int)7750, (int)7749);
			@@@var_0_object:AddReply((int)507051, (int)7766, (int)7765);
			return 0;
		}
		var_566_bool = var_56_bool == (int)7766;
		if(var_566_bool != 0) {
			var_567_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507053, (int)7750, (int)7767);
			return 0;
		}
		var_573_bool = var_56_bool == (int)7750;
		if(var_573_bool != 0) {
			var_574_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507037, (int)7752, (int)7751);
			return 0;
		}
		var_580_bool = var_56_bool == (int)7752;
		if(var_580_bool != 0) {
			var_581_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507039, (int)7754, (int)7753);
			@@@var_0_object:AddReply((int)507048, (int)7763, (int)7762);
			return 0;
		}
		var_590_bool = var_56_bool == (int)7763;
		if(var_590_bool != 0) {
			var_591_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507054, (int)7759, (int)7770);
			return 0;
		}
		var_597_bool = var_56_bool == (int)7754;
		if(var_597_bool != 0) {
			var_598_string = "";
			func_1732(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)507040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507043, (int)7759, (int)7757);
			@@@var_0_object:AddReply((int)507041, (int)7756, (int)7755);
			return 0;
		}
		var_607_bool = var_56_bool == (int)7756;
		if(var_607_bool != 0) {
			var_608_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507042);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507044, (int)7759, (int)7758);
			return 0;
		}
		var_614_bool = var_56_bool == (int)7759;
		if(var_614_bool != 0) {
			var_615_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507046, (int)7761, (int)7760);
			@@@var_0_object:AddReply((int)507067, (int)7761, (int)7787);
			@@@var_0_object:AddReply((int)507055, (int)7773, (int)7772);
			return 0;
		}
		var_627_bool = var_56_bool == (int)7773;
		if(var_627_bool != 0) {
			var_628_string = "";
			func_1732(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)507056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507057, (int)7761, (int)7774);
			return 0;
		}
		var_634_bool = var_56_bool == (int)7761;
		if(var_634_bool != 0) {
			var_635_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507058, (int)-1, (int)7775);
			@@@var_0_object:AddReply((int)507059, (int)7778, (int)7777);
			return 0;
		}
		var_644_bool = var_56_bool == (int)7778;
		if(var_644_bool != 0) {
			var_645_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507060);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507061, (int)-1, (int)7779);
			@@@var_0_object:AddReply((int)507062, (int)-1, (int)7780);
			@@@var_0_object:AddReply((int)507063, (int)7782, (int)7781);
			return 0;
		}
		var_657_bool = var_56_bool == (int)7782;
		if(var_657_bool != 0) {
			var_658_string = "";
			func_1732(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507065, (int)-1, (int)7783);
			return 0;
		}
		var_3_string = true;
		var_663_bool = 0;
		func_8086(var_663_bool);
		if(var_663_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6db";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_57_cvector == (int)9978;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8144();
		}
		var_88_bool = var_57_cvector == (int)9979;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_8144();
		}
		var_92_bool = var_57_cvector == (int)9975;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_8144();
		}
		var_96_bool = var_57_cvector == (int)9692;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_8338();
		}
		var_102_bool = var_57_cvector == (int)9724;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_8338();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_8356();
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_8344();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_8316(var_138_object);
		}
		var_164_bool = var_57_cvector == (int)9711;
		if(var_164_bool != 0) {
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_8332();
		}
		var_170_bool = var_57_cvector == (int)9712;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_8344();
		}
		var_174_bool = var_57_cvector == (int)13193;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_8582();
		}
		var_180_bool = var_56_bool == (int)9964;
		if(var_180_bool != 0) {
			var_181_bool = 0;
			var_181_bool = 0;
			var_182_bool = 0; var_183_object = Obj();
			var_183_object = var_1_object;
			func_8953(var_183_object);
			if(var_182_bool != 0) {
				var_190_bool = 0; var_191_object = Obj();
				var_191_object = var_1_object;
				func_8941(var_191_object);
				if(var_190_bool != 0) {
					var_181_bool = 1;
				}
			}
			if(var_181_bool != 0) {
				var_196_object = Obj(); var_197_object = Obj();
				var_196_object = var_1_object;
				var_197_object = var_0_object;
				func_8350();
				var_200_string = "";
				func_2920(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)509086);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)509087, (int)9969, (int)9965);
				@@@var_0_object:AddReply((int)509088, (int)9967, (int)9966);
				return 0;
			}
			var_224_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508854);
			@@@var_0_object:ClearReplies();
			var_226_bool = 0;
			var_226_bool = 0;
			var_227_bool = 0; var_228_object = Obj();
			var_228_object = var_1_object;
			func_8917(var_228_object);
			if(var_227_bool != 0) {
				var_233_bool = 0; var_234_object = Obj();
				var_234_object = var_1_object;
				func_8965(var_234_object);
				if(var_233_bool != 0) {
					var_226_bool = 1;
				}
			}
			if(var_226_bool != 0) {
				@@@var_0_object:AddReply((int)508840, (int)9693, (int)9692);
			}
			var_242_bool = 0; var_243_object = Obj();
			var_243_object = var_1_object;
			func_8905(var_243_object);
			if(var_242_bool != 0) {
				@@@var_0_object:AddReply((int)508855, (int)9687, (int)9711);
			}
			var_251_bool = 0; var_252_object = Obj();
			var_252_object = var_1_object;
			func_8929(var_252_object);
			if(var_251_bool != 0) {
				@@@var_0_object:AddReply((int)508856, (int)9691, (int)9712);
			}
			var_260_bool = 0; var_261_object = Obj();
			var_261_object = var_1_object;
			func_9061(var_261_object);
			if(var_260_bool != 0) {
				@@@var_0_object:AddReply((int)511978, (int)13175, (int)13193);
			}
			@@@var_0_object:AddReply((int)511133, (int)-1, (int)12322);
			@@@var_0_object:AddReply((int)534068, (int)-1, (int)35658);
			return 0;
		}
		var_276_bool = var_56_bool == (int)13175;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511965, (int)35751, (int)13176);
			@@@var_0_object:AddReply((int)511977, (int)13177, (int)13191);
			@@@var_0_object:AddReply((int)511976, (int)13177, (int)13189);
			return 0;
		}
		var_289_bool = var_56_bool == (int)35751;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_2920(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)534171);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534172, (int)13177, (int)35752);
			@@@var_0_object:AddReply((int)534173, (int)13177, (int)35753);
			return 0;
		}
		var_299_bool = var_56_bool == (int)13177;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511967, (int)13179, (int)13178);
			@@@var_0_object:AddReply((int)511975, (int)13179, (int)13187);
			return 0;
		}
		var_309_bool = var_56_bool == (int)13179;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511969, (int)13181, (int)13180);
			@@@var_0_object:AddReply((int)511974, (int)13181, (int)13185);
			return 0;
		}
		var_319_bool = var_56_bool == (int)13181;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511971, (int)-1, (int)13182);
			@@@var_0_object:AddReply((int)511972, (int)-1, (int)13183);
			@@@var_0_object:AddReply((int)511973, (int)-1, (int)13184);
			return 0;
		}
		var_332_bool = var_56_bool == (int)9691;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508839);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508857, (int)9714, (int)9713);
			return 0;
		}
		var_339_bool = var_56_bool == (int)9714;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508859, (int)-1, (int)9715);
			return 0;
		}
		var_346_bool = var_56_bool == (int)9687;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508836, (int)9689, (int)9688);
			@@@var_0_object:AddReply((int)508852, (int)9689, (int)9706);
			@@@var_0_object:AddReply((int)508853, (int)9689, (int)9708);
			return 0;
		}
		var_359_bool = var_56_bool == (int)9689;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508837);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508849, (int)9703, (int)9702);
			return 0;
		}
		var_366_bool = var_56_bool == (int)9703;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_2920(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)508850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508851, (int)-1, (int)9704);
			return 0;
		}
		var_373_bool = var_56_bool == (int)9693;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508841);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508842, (int)9695, (int)9694);
			@@@var_0_object:AddReply((int)508846, (int)9699, (int)9698);
			@@@var_0_object:AddReply((int)508861, (int)9719, (int)9718);
			return 0;
		}
		var_386_bool = var_56_bool == (int)9719;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_2920(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)508862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508863, (int)9716, (int)9720);
			@@@var_0_object:AddReply((int)508867, (int)9695, (int)9725);
			return 0;
		}
		var_396_bool = var_56_bool == (int)9699;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508847);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508848, (int)9695, (int)9700);
			return 0;
		}
		var_403_bool = var_56_bool == (int)9695;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_2920(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)508843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508844, (int)9716, (int)9696);
			@@@var_0_object:AddReply((int)508845, (int)9716, (int)9697);
			return 0;
		}
		var_413_bool = var_56_bool == (int)9716;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508864, (int)9723, (int)9722);
			@@@var_0_object:AddReply((int)534069, (int)9723, (int)35659);
			return 0;
		}
		var_423_bool = var_56_bool == (int)9723;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508866, (int)-1, (int)9724);
			return 0;
		}
		var_430_bool = var_56_bool == (int)9967;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509090, (int)9969, (int)9968);
			return 0;
		}
		var_437_bool = var_56_bool == (int)9969;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509091);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509092, (int)9971, (int)9970);
			@@@var_0_object:AddReply((int)534066, (int)9974, (int)35654);
			return 0;
		}
		var_447_bool = var_56_bool == (int)9971;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509094, (int)9974, (int)9973);
			@@@var_0_object:AddReply((int)534067, (int)9977, (int)35656);
			return 0;
		}
		var_457_bool = var_56_bool == (int)9974;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509095);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509097, (int)9977, (int)9976);
			@@@var_0_object:AddReply((int)509096, (int)-1, (int)9975);
			return 0;
		}
		var_467_bool = var_56_bool == (int)9977;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_2920(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509099, (int)-1, (int)9978);
			@@@var_0_object:AddReply((int)509100, (int)-1, (int)9979);
			return 0;
		}
		var_3_string = true;
		var_476_bool = 0;
		func_8086(var_476_bool);
		if(var_476_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb7f";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_57_cvector == (int)12370;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8401();
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_8407();
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_8545(var_124_object);
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_8433(var_148_object);
		}
		var_174_bool = var_57_cvector == (int)12371;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_8401();
		}
		var_178_bool = var_57_cvector == (int)12695;
		if(var_178_bool != 0) {
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_8407();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_8545(var_182_object);
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_object;
			func_8110();
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_8433(var_188_object);
		}
		var_190_bool = var_57_cvector == (int)12376;
		if(var_190_bool != 0) {
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_object;
			func_8449();
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_8455();
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_8128(var_216_object);
		}
		var_223_bool = var_57_cvector == (int)12377;
		if(var_223_bool != 0) {
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_8449();
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_8455();
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_object;
			func_8529(var_229_object);
		}
		var_236_bool = var_57_cvector == (int)12696;
		if(var_236_bool != 0) {
			var_237_object = Obj(); var_238_object = Obj();
			var_237_object = var_1_object;
			var_238_object = var_0_object;
			func_8556();
		}
		var_242_bool = var_57_cvector == (int)12702;
		if(var_242_bool != 0) {
			var_243_object = Obj(); var_244_object = Obj();
			var_243_object = var_1_object;
			var_244_object = var_0_object;
			func_8268(var_244_object);
			var_261_object = Obj(); var_262_object = Obj();
			var_261_object = var_1_object;
			var_262_object = var_0_object;
			func_8104();
			var_265_object = Obj(); var_266_object = Obj();
			var_265_object = var_1_object;
			var_266_object = var_0_object;
			func_8478();
		}
		var_297_bool = var_57_cvector == (int)12703;
		if(var_297_bool != 0) {
			var_298_object = Obj(); var_299_object = Obj();
			var_298_object = var_1_object;
			var_299_object = var_0_object;
			func_8478();
			var_300_object = Obj(); var_301_object = Obj();
			var_300_object = var_1_object;
			var_301_object = var_0_object;
			func_8623(var_301_object);
		}
		var_341_bool = var_56_bool == (int)12359;
		if(var_341_bool != 0) {
			var_342_bool = 0; var_343_object = Obj();
			var_343_object = var_1_object;
			func_8977(var_343_object);
			if(var_342_bool != 0) {
				var_350_object = Obj(); var_351_object = Obj();
				var_350_object = var_1_object;
				var_351_object = var_0_object;
				func_8122();
				var_354_string = "";
				func_3831(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)511175);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511176, (int)12361, (int)12360);
				@@@var_0_object:AddReply((int)511178, (int)12366, (int)12362);
				return 0;
			}
			var_378_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511164);
			@@@var_0_object:ClearReplies();
			var_380_bool = 0; var_381_object = Obj();
			var_381_object = var_1_object;
			func_8989(var_381_object);
			if(var_380_bool != 0) {
				@@@var_0_object:AddReply((int)511489, (int)12692, (int)12691);
			}
			var_389_bool = 0;
			var_389_bool = 0;
			var_390_bool = 0; var_391_object = Obj();
			var_391_object = var_1_object;
			func_9001(var_391_object);
			if(var_390_bool != 0) {
				var_396_bool = 0; var_397_object = Obj();
				var_397_object = var_1_object;
				func_9013(var_397_object);
				if(var_396_bool != 0) {
					var_389_bool = 1;
				}
			}
			if(var_389_bool != 0) {
				@@@var_0_object:AddReply((int)511187, (int)12373, (int)12372);
			}
			var_405_bool = 0;
			var_405_bool = 0;
			var_406_bool = 0; var_407_object = Obj();
			var_407_object = var_1_object;
			func_9025(var_407_object);
			if(var_406_bool != 0) {
				var_412_bool = 0; var_413_object = Obj();
				var_413_object = var_1_object;
				func_9037(var_413_object);
				if(var_412_bool != 0) {
					var_405_bool = 1;
				}
			}
			if(var_405_bool != 0) {
				@@@var_0_object:AddReply((int)511495, (int)12697, (int)12696);
			}
			@@@var_0_object:AddReply((int)511174, (int)-1, (int)12358);
			return 0;
		}
		var_425_bool = var_56_bool == (int)12697;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511497, (int)12699, (int)12698);
			return 0;
		}
		var_432_bool = var_56_bool == (int)12699;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511499, (int)12701, (int)12700);
			return 0;
		}
		var_439_bool = var_56_bool == (int)12701;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_3831(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)511500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511501, (int)-1, (int)12702);
			@@@var_0_object:AddReply((int)511502, (int)-1, (int)12703);
			return 0;
		}
		var_449_bool = var_56_bool == (int)12373;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511189, (int)12375, (int)12374);
			return 0;
		}
		var_456_bool = var_56_bool == (int)12375;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511191, (int)-1, (int)12376);
			@@@var_0_object:AddReply((int)511192, (int)-1, (int)12377);
			return 0;
		}
		var_466_bool = var_56_bool == (int)12692;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511491, (int)12694, (int)12693);
			return 0;
		}
		var_473_bool = var_56_bool == (int)12694;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511493, (int)-1, (int)12695);
			return 0;
		}
		var_480_bool = var_56_bool == (int)12361;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_3831(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)511177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511180, (int)12363, (int)12364);
			@@@var_0_object:AddReply((int)511193, (int)12379, (int)12378);
			return 0;
		}
		var_490_bool = var_56_bool == (int)12379;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511195, (int)12363, (int)12380);
			@@@var_0_object:AddReply((int)511198, (int)12385, (int)12384);
			return 0;
		}
		var_500_bool = var_56_bool == (int)12385;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511200, (int)12366, (int)12386);
			@@@var_0_object:AddReply((int)511201, (int)12363, (int)12388);
			return 0;
		}
		var_510_bool = var_56_bool == (int)12363;
		if(var_510_bool != 0) {
			var_511_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511181, (int)12366, (int)12365);
			@@@var_0_object:AddReply((int)511196, (int)12383, (int)12382);
			return 0;
		}
		var_520_bool = var_56_bool == (int)12383;
		if(var_520_bool != 0) {
			var_521_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511197);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538806, (int)40725, (int)40724);
			return 0;
		}
		var_527_bool = var_56_bool == (int)40725;
		if(var_527_bool != 0) {
			var_528_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538807);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511486, (int)12366, (int)12688);
			return 0;
		}
		var_534_bool = var_56_bool == (int)12366;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_3831(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511185, (int)-1, (int)12370);
			@@@var_0_object:AddReply((int)511186, (int)-1, (int)12371);
			return 0;
		}
		var_3_string = true;
		var_543_bool = 0;
		func_8086(var_543_bool);
		if(var_543_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf0e";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_57_cvector == (int)12808;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8562();
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_8310();
		}
		var_87_bool = var_57_cvector == (int)12802;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_8562();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_8310();
		}
		var_93_bool = var_57_cvector == (int)12820;
		if(var_93_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_8611();
		}
		var_99_bool = var_57_cvector == (int)12819;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_8611();
		}
		var_103_bool = var_57_cvector == (int)12821;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_8611();
		}
		var_107_bool = var_57_cvector == (int)12832;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_8617();
		}
		var_113_bool = var_57_cvector == (int)12833;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_8617();
		}
		var_117_bool = var_56_bool == (int)12786;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511591);
			@@@var_0_object:ClearReplies();
			var_136_bool = 0; var_137_object = Obj();
			var_137_object = var_1_object;
			func_9049(var_137_object);
			if(var_136_bool != 0) {
				@@@var_0_object:AddReply((int)511592, (int)12788, (int)12787);
			}
			var_147_bool = 0;
			var_147_bool = 0;
			var_148_bool = 0; var_149_object = Obj();
			var_149_object = var_1_object;
			func_9097(var_149_object);
			if(var_148_bool != 0) {
				var_154_bool = 0; var_155_object = Obj();
				var_155_object = var_1_object;
				func_9121(var_155_object);
				if(var_154_bool != 0) {
					var_147_bool = 1;
				}
			}
			if(var_147_bool != 0) {
				@@@var_0_object:AddReply((int)511611, (int)12810, (int)12809);
			}
			var_163_bool = 0;
			var_163_bool = 0;
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_9109(var_165_object);
			if(var_164_bool != 0) {
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_9133(var_171_object);
				if(var_170_bool != 0) {
					var_163_bool = 1;
				}
			}
			if(var_163_bool != 0) {
				@@@var_0_object:AddReply((int)511624, (int)12823, (int)12822);
			}
			@@@var_0_object:AddReply((int)511635, (int)-1, (int)12834);
			return 0;
		}
		var_183_bool = var_56_bool == (int)12823;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_4566(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)511625);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511626, (int)12825, (int)12824);
			@@@var_0_object:AddReply((int)511628, (int)12827, (int)12826);
			return 0;
		}
		var_193_bool = var_56_bool == (int)12827;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511631, (int)12830, (int)12829);
			return 0;
		}
		var_200_bool = var_56_bool == (int)12825;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511627);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511630, (int)12830, (int)12828);
			return 0;
		}
		var_207_bool = var_56_bool == (int)12830;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511633, (int)-1, (int)12832);
			@@@var_0_object:AddReply((int)511634, (int)-1, (int)12833);
			return 0;
		}
		var_217_bool = var_56_bool == (int)12810;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511612);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511613, (int)12812, (int)12811);
			@@@var_0_object:AddReply((int)511623, (int)-1, (int)12821);
			return 0;
		}
		var_227_bool = var_56_bool == (int)12812;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511614);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515657, (int)16695, (int)16694);
			@@@var_0_object:AddReply((int)515659, (int)16695, (int)16696);
			return 0;
		}
		var_237_bool = var_56_bool == (int)16695;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511615, (int)12814, (int)12813);
			@@@var_0_object:AddReply((int)515660, (int)12816, (int)16698);
			return 0;
		}
		var_247_bool = var_56_bool == (int)12814;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511616);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511617, (int)12816, (int)12815);
			@@@var_0_object:AddReply((int)515661, (int)16701, (int)16700);
			return 0;
		}
		var_257_bool = var_56_bool == (int)16701;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511621, (int)-1, (int)12819);
			return 0;
		}
		var_264_bool = var_56_bool == (int)12816;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511618);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511619, (int)12818, (int)12817);
			return 0;
		}
		var_271_bool = var_56_bool == (int)12818;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511620);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511622, (int)-1, (int)12820);
			return 0;
		}
		var_278_bool = var_56_bool == (int)12788;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511593);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511594, (int)12790, (int)12789);
			@@@var_0_object:AddReply((int)511599, (int)12795, (int)12794);
			return 0;
		}
		var_288_bool = var_56_bool == (int)12795;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511600);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511601, (int)12790, (int)12796);
			return 0;
		}
		var_295_bool = var_56_bool == (int)12790;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_4566(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)511595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511596, (int)12792, (int)12791);
			@@@var_0_object:AddReply((int)511602, (int)12799, (int)12798);
			return 0;
		}
		var_305_bool = var_56_bool == (int)12799;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511603);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511604, (int)12792, (int)12800);
			@@@var_0_object:AddReply((int)515656, (int)12805, (int)16692);
			return 0;
		}
		var_315_bool = var_56_bool == (int)12792;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511597);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511598, (int)12803, (int)12793);
			@@@var_0_object:AddReply((int)511605, (int)-1, (int)12802);
			return 0;
		}
		var_325_bool = var_56_bool == (int)12803;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511607, (int)12805, (int)12804);
			return 0;
		}
		var_332_bool = var_56_bool == (int)12805;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_4566(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511610, (int)-1, (int)12808);
			return 0;
		}
		var_3_string = true;
		var_338_bool = 0;
		func_8086(var_338_bool);
		if(var_338_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x11ed";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_57_cvector == (int)14572;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8670();
		}
		var_67_bool = var_57_cvector == (int)14578;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_8725();
		}
		var_110_bool = var_57_cvector == (int)14583;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_8725();
		}
		var_114_bool = var_57_cvector == (int)36864;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_8725();
		}
		var_118_bool = var_56_bool == (int)13358;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_5266(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512203);
			@@@var_0_object:ClearReplies();
			var_137_bool = 0;
			var_137_bool = 0;
			var_138_bool = 0; var_139_object = Obj();
			var_139_object = var_1_object;
			func_9217(var_139_object);
			if(var_138_bool != 0) {
				var_146_bool = 0; var_147_object = Obj();
				var_147_object = var_1_object;
				func_9229(var_147_object);
				if(var_146_bool != 0) {
					var_137_bool = 1;
				}
			}
			if(var_137_bool != 0) {
				@@@var_0_object:AddReply((int)513340, (int)14573, (int)14572);
			}
			@@@var_0_object:AddReply((int)512204, (int)-1, (int)13359);
			return 0;
		}
		var_159_bool = var_56_bool == (int)14573;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_5266(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513341);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513342, (int)14575, (int)14574);
			@@@var_0_object:AddReply((int)535178, (int)36846, (int)36845);
			return 0;
		}
		var_169_bool = var_56_bool == (int)36846;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_5266(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535180, (int)36848, (int)36847);
			@@@var_0_object:AddReply((int)535182, (int)36850, (int)36849);
			return 0;
		}
		var_179_bool = var_56_bool == (int)36850;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_5266(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)535183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535184, (int)36848, (int)36851);
			return 0;
		}
		var_186_bool = var_56_bool == (int)36848;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_5266(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535181);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535186, (int)36855, (int)36854);
			@@@var_0_object:AddReply((int)535185, (int)-1, (int)36853);
			return 0;
		}
		var_196_bool = var_56_bool == (int)36855;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_5266(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535188, (int)14575, (int)36856);
			return 0;
		}
		var_203_bool = var_56_bool == (int)14575;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_5266(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)513343);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513344, (int)14577, (int)14576);
			@@@var_0_object:AddReply((int)535189, (int)36860, (int)36858);
			return 0;
		}
		var_213_bool = var_56_bool == (int)36860;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_5266(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535191, (int)14580, (int)36861);
			@@@var_0_object:AddReply((int)535192, (int)-1, (int)36862);
			return 0;
		}
		var_223_bool = var_56_bool == (int)14577;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_5266(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)513345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513346, (int)-1, (int)14578);
			@@@var_0_object:AddReply((int)513347, (int)14580, (int)14579);
			return 0;
		}
		var_233_bool = var_56_bool == (int)14580;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_5266(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)513348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513349, (int)14582, (int)14581);
			@@@var_0_object:AddReply((int)535193, (int)-1, (int)36864);
			return 0;
		}
		var_243_bool = var_56_bool == (int)14582;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_5266(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513351, (int)-1, (int)14583);
			return 0;
		}
		var_3_string = true;
		var_249_bool = 0;
		func_8086(var_249_bool);
		if(var_249_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x14a9";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_57_cvector == (int)33071;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8588();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_8294(var_106_object);
		}
		var_132_bool = var_57_cvector == (int)34431;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_8588();
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_8294(var_136_object);
		}
		var_138_bool = var_57_cvector == (int)33073;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_8116();
		}
		var_144_bool = var_57_cvector == (int)34410;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_8149();
		}
		var_150_bool = var_56_bool == (int)33068;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531684);
			@@@var_0_object:ClearReplies();
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_9073(var_170_object);
			if(var_169_bool != 0) {
				@@@var_0_object:AddReply((int)531685, (int)34364, (int)33069);
			}
			var_180_bool = 0;
			var_180_bool = 0;
			var_181_bool = 0; var_182_object = Obj();
			var_182_object = var_1_object;
			func_8756(var_182_object);
			var_187_bool = var_181_bool == 0; //@nz
			if(var_187_bool != 0) {
				var_188_bool = 0; var_189_object = Obj();
				var_189_object = var_1_object;
				func_8768(var_189_object);
				if(var_188_bool != 0) {
					var_180_bool = 1;
				}
			}
			if(var_180_bool != 0) {
				@@@var_0_object:AddReply((int)531689, (int)34386, (int)33073);
			}
			var_197_bool = 0;
			var_197_bool = 1;
			var_198_bool = 0;
			var_198_bool = 0;
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_8780(var_200_object);
			if(var_199_bool != 0) {
				var_205_bool = 0; var_206_object = Obj();
				var_206_object = var_1_object;
				func_9073(var_206_object);
				if(var_205_bool != 0) {
					var_198_bool = 1;
				}
			}
			if(var_198_bool != 1) {
				var_207_bool = 0;
				var_207_bool = 0;
				var_208_bool = 0; var_209_object = Obj();
				var_209_object = var_1_object;
				func_8744(var_209_object);
				if(var_208_bool != 0) {
					var_214_bool = 0; var_215_object = Obj();
					var_215_object = var_1_object;
					func_8780(var_215_object);
					if(var_214_bool != 0) {
						var_207_bool = 1;
					}
				}
				if(var_207_bool != 1) {
					var_197_bool = 0;
				}
			}
			if(var_197_bool != 0) {
				@@@var_0_object:AddReply((int)532923, (int)34411, (int)34410);
			}
			@@@var_0_object:AddReply((int)531688, (int)-1, (int)33072);
			@@@var_0_object:AddReply((int)532874, (int)-1, (int)34363);
			return 0;
		}
		var_226_bool = var_56_bool == (int)34411;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532925, (int)34415, (int)34412);
			return 0;
		}
		var_233_bool = var_56_bool == (int)34415;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532929, (int)34417, (int)34416);
			@@@var_0_object:AddReply((int)533147, (int)34665, (int)34664);
			return 0;
		}
		var_243_bool = var_56_bool == (int)34665;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533148);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533149, (int)34668, (int)34666);
			@@@var_0_object:AddReply((int)533150, (int)34999, (int)34667);
			return 0;
		}
		var_253_bool = var_56_bool == (int)34668;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533151);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533152, (int)34999, (int)34669);
			@@@var_0_object:AddReply((int)533153, (int)34999, (int)34670);
			return 0;
		}
		var_263_bool = var_56_bool == (int)34417;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_5797(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)532930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533475, (int)34999, (int)34998);
			@@@var_0_object:AddReply((int)532931, (int)34419, (int)34418);
			return 0;
		}
		var_273_bool = var_56_bool == (int)34419;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532933, (int)-1, (int)34420);
			@@@var_0_object:AddReply((int)533146, (int)-1, (int)34663);
			return 0;
		}
		var_283_bool = var_56_bool == (int)34999;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533478, (int)35005, (int)35004);
			@@@var_0_object:AddReply((int)533477, (int)-1, (int)35000);
			return 0;
		}
		var_293_bool = var_56_bool == (int)35005;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533479);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533480, (int)35007, (int)35006);
			return 0;
		}
		var_300_bool = var_56_bool == (int)35007;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533481);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533482, (int)-1, (int)35008);
			@@@var_0_object:AddReply((int)533483, (int)-1, (int)35009);
			return 0;
		}
		var_310_bool = var_56_bool == (int)34386;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532903, (int)33074, (int)34387);
			@@@var_0_object:AddReply((int)532904, (int)34389, (int)34388);
			return 0;
		}
		var_320_bool = var_56_bool == (int)34389;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532906, (int)-1, (int)34390);
			@@@var_0_object:AddReply((int)532907, (int)34392, (int)34391);
			return 0;
		}
		var_330_bool = var_56_bool == (int)33074;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531691, (int)34392, (int)33075);
			return 0;
		}
		var_337_bool = var_56_bool == (int)34392;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532909, (int)34395, (int)34394);
			@@@var_0_object:AddReply((int)532911, (int)34397, (int)34396);
			return 0;
		}
		var_347_bool = var_56_bool == (int)34397;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532913, (int)34399, (int)34398);
			return 0;
		}
		var_354_bool = var_56_bool == (int)34399;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532915, (int)34395, (int)34400);
			@@@var_0_object:AddReply((int)532916, (int)-1, (int)34402);
			return 0;
		}
		var_364_bool = var_56_bool == (int)34395;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532917, (int)-1, (int)34403);
			@@@var_0_object:AddReply((int)532918, (int)-1, (int)34404);
			return 0;
		}
		var_374_bool = var_56_bool == (int)34364;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_5797(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)532875);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532876, (int)34366, (int)34365);
			@@@var_0_object:AddReply((int)532919, (int)34406, (int)34405);
			return 0;
		}
		var_384_bool = var_56_bool == (int)34406;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532920);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532921, (int)34366, (int)34407);
			@@@var_0_object:AddReply((int)532922, (int)-1, (int)34409);
			return 0;
		}
		var_394_bool = var_56_bool == (int)34366;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532878, (int)34368, (int)34367);
			@@@var_0_object:AddReply((int)532934, (int)34424, (int)34421);
			return 0;
		}
		var_404_bool = var_56_bool == (int)34424;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532936);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532937, (int)34426, (int)34425);
			return 0;
		}
		var_411_bool = var_56_bool == (int)34426;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532939, (int)34368, (int)34427);
			return 0;
		}
		var_418_bool = var_56_bool == (int)34368;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532879);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532880, (int)34370, (int)34369);
			@@@var_0_object:AddReply((int)532935, (int)34370, (int)34422);
			return 0;
		}
		var_428_bool = var_56_bool == (int)34370;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_5797(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)532881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532882, (int)34373, (int)34371);
			@@@var_0_object:AddReply((int)532883, (int)33070, (int)34372);
			return 0;
		}
		var_438_bool = var_56_bool == (int)34373;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532885, (int)33070, (int)34374);
			@@@var_0_object:AddReply((int)532886, (int)34377, (int)34375);
			return 0;
		}
		var_448_bool = var_56_bool == (int)34377;
		if(var_448_bool != 0) {
			var_449_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532888, (int)34380, (int)34378);
			@@@var_0_object:AddReply((int)532889, (int)-1, (int)34379);
			return 0;
		}
		var_458_bool = var_56_bool == (int)34380;
		if(var_458_bool != 0) {
			var_459_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532891, (int)33070, (int)34381);
			@@@var_0_object:AddReply((int)532892, (int)-1, (int)34382);
			return 0;
		}
		var_468_bool = var_56_bool == (int)33070;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_5797(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531686);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532940, (int)34430, (int)34429);
			@@@var_0_object:AddReply((int)532942, (int)-1, (int)34431);
			return 0;
		}
		var_478_bool = var_56_bool == (int)34430;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_5797(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)532941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531687, (int)-1, (int)33071);
			@@@var_0_object:AddReply((int)532943, (int)-1, (int)34432);
			return 0;
		}
		var_3_string = true;
		var_487_bool = 0;
		func_8086(var_487_bool);
		if(var_487_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x16bc";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_56_bool == (int)34230;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_6716(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532760, (int)-1, (int)34231);
			@@@var_0_object:AddReply((int)533664, (int)-1, (int)35196);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_8086(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a53";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_56_bool == (int)36971;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_6924(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_90_bool = var_56_bool == (int)36973;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_6924(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_100_bool = var_56_bool == (int)36975;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_6924(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_109_bool = 0;
		func_8086(var_109_bool);
		if(var_109_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1b23";
	
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	if((int)1 != 0) {
		func_7845();
		var_61_bool = var_56_int == (int)42551;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_7178(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_8086(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1c21";
	
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_58_bool = var_56_int == (int)10;
	if(var_58_bool != 0) {
		func_7314();
		var_60_bool = 0;
		var_60_bool = 0;
		var_61_bool = 0;
		func_7569(var_61_bool);
		if(var_61_bool != 0) {
			var_64_bool = 0;
			func_7283(var_64_bool);
			if(var_64_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool != 0) {
			var_81_bool = 0;
			func_7263(var_81_bool);
			if(var_81_bool != 0) {
				var_100_bool = 0; var_101_object = Obj();
				func_7852(Obj());
				var_102_object = var_101_object;
				func_7719(var_100_bool, var_101_object);
			}
		} else {
			func_7278(var_56_int);
			func_7305();
		}
	}
	return 0;
	
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_7496();
	func_7314();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0();
	func_7314();
	var_57_string = "";
	func_7799("Neutral");
	func_7305();
	return 0;
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool;
	if(var_57_bool != 0) {
		func_7305();
	} else {
		var_63_string = "";
		func_7799("Neutral");
	}
	return 0;
	
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0;
	IsOverrideActive(var_58_bool);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		EventDisable(0);
		func_7496();
		var_60_bool = 0; var_61_object = Obj();
		var_56_object = var_61_object;
		func_7560(var_60_bool, var_61_object);
		EventEnable(0);
		var_74_object = Obj();
		var_56_object = var_74_object;
		func_9542(var_74_object);
		var_1316_string = "";
		func_7799("Neutral");
		func_7314();
		func_7305();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_7249(var_55_cvector);
	return 0;
}


func_0(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0;
	var_0_object = var_78_object;
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0;
	var_78_object = var_89_object;
	func_7574(var_88_bool, var_89_object, (float)70.0);
	var_135_bool = var_88_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	CreateDialog(var_84_object);
	var_136_int = 0;
	func_8080(var_136_int);
	@@var_84_object:SetNPCName(var_136_int);
	var_137_int = 0;
	func_8078(var_137_int);
	@@var_84_object:SetNPCDescription(var_137_int);
	var_138_string = "";
	func_8082(var_138_string);
	@@var_84_object:SetPhoto(var_138_string);
	var_139_string = "";
	func_8084(var_139_string);
	@@var_84_object:SetPhoto2(var_139_string);
	var_140_int = 0;
	func_9525(var_140_int);
	@@var_84_object:SetPlayerName(var_140_int);
	IsOverrideActive(var_85_bool);
	var_148_bool = var_85_bool;
	if(var_148_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	DoDialog(var_84_object);
	var_149_bool = 0; var_150_object = Obj();
	func_7852(Obj());
	var_151_object = var_150_object;
	func_7661(var_149_bool, var_150_object);
	var_244_object = Obj(); var_245_object = Obj();
	var_78_object = var_244_object;
	var_84_object = var_245_object;
	TaskCall(1);
	func_81(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object);
	TaskReturn();
	@@var_84_object:IsDialogEnd(var_87_bool);
	
Label_63:
	var_294_bool = var_87_bool == 0; //@nz
	if(var_294_bool != 0) {
		sync();
		@@var_84_object:IsDialogEnd(var_87_bool);
		goto Label_63;
	}
	var_78_object = Obj();
	func_7643();
	StopDialog(var_84_object);
	@@var_84_object:GetReturnValue((int)-1);
	var_86_int = var_77_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9217(var_1171_bool)
{
	var_1173_int = 0; var_1174_string = "";
	func_7879(var_1173_int, "d7q02");
	var_1176_bool = var_1173_int == (int)1;
	if(var_1176_bool != 0) {
		var_1171_bool = 1;
		return 0;
	}
	var_1171_bool = 0;
	return 0;
}


func_6658(var_0_object, var_1_object, var_2_object, var_3_string, var_340_object, var_341_object)
{
	var_0_object = var_341_object;
	var_1_object = var_340_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_347_string = "";
		func_6716(var_341_object, "Neutral");
		@@@var_0_object:SetMessage((int)532759);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)532760, (int)-1, (int)34231);
		@@@var_0_object:AddReply((int)533664, (int)-1, (int)35196);
		goto Label_6686;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a06";
	}
Label_6686:
	var_362_bool = 0;
	func_8086(var_362_bool);
	if(var_362_bool != 0) {

	Label_6690:
		lshWaitForAnimEnd();
		var_363_string = var_3_string;
		if(var_363_string != 0) {
		} else {
			var_364_string = "";
			var_364_string = var_2_object;
			func_7799(var_364_string);
			goto Label_6690;
	}
		PlayAnimation("all", "idle");

	Label_6705:
		WaitForAnimEnd();
		var_367_string = var_3_string;
		if(var_367_string != 0) {
			goto Label_6715;
		}
		PlayAnimation("all", "idle");
		goto Label_6705;
	}
	goto Label_6715;
	
Label_6715:
	return 0;
	
}


func_8200()
{
	var_68_object = Obj(); var_69_object = Obj();
	SetVariable("d2q01", (int)1);
	func_9475(Obj());
	var_72_object = var_69_object;
	var_83_float = 0;
	func_8015(var_83_float);
	@@var_69_object:AddMark("d2q01AlexandrGotoAnna", "pt_map_anna", (int)1, (int)511387, var_83_float);
	func_9278();
	func_9291();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7178(var_2_object, var_1291_string)
{
	var_1292_bool = 0;
	func_8086(var_1292_bool);
	var_1293_bool = var_1292_bool == 0; //@nz
	if(var_1293_bool != 0) {
		return 0;
	}
	var_1294_bool = var_1291_string == var_2_object;
	if(var_1294_bool != 0) {
		return 0;
	}
	var_1295_string = ""; var_1296_bool = 0;
	var_1291_string = var_1295_string;
	var_1298_bool = var_1291_string == "";
	if(var_1298_bool != 0) {
		var_1296_bool = 0;
	} else {
		var_1296_bool = 1;
	}
	func_7815(var_1295_string, var_1296_bool);
	var_2_object = var_1291_string;
	return 0;
	
}


func_9229(var_1177_bool)
{
	var_1179_int = 0; var_1180_string = "";
	func_7879(var_1179_int, "ood7Alexandr1");
	var_1182_bool = var_1179_int == (int)0;
	if(var_1182_bool != 0) {
		var_1177_bool = 1;
		return 0;
	}
	var_1177_bool = 0;
	return 0;
}


func_8719()
{
	SetVariable("d2TalkToAlexandr", (int)1);
	return 0;
}


func_8725()
{
	var_70_object = Obj(); var_71_object = Obj();
	func_9475(Obj());
	var_72_object = var_71_object;
	var_83_float = 0;
	func_8015(var_83_float);
	@@var_71_object:AddMark("d7q02AlexandrGotoPetr", "pt_map_petr", (int)0, (int)515429, var_83_float);
	func_9421();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9241(var_1074_bool)
{
	var_1076_int = 0; var_1077_string = "";
	func_7879(var_1076_int, "microscope_d6q01_lara_blood");
	var_1079_bool = var_1076_int != (int)0;
	if(var_1079_bool != 0) {
		var_1074_bool = 1;
		return 0;
	}
	var_1074_bool = 0;
	return 0;
}


func_8226()
{
	func_9317();
	var_171_bool = 0; var_172_string = ""; var_173_string = "";
	func_8003(var_171_bool, "quest_d2_01", "completed");
	return 0;
}


func_3619(var_0_object, var_777_int, var_778_object)
{
	var_780_object = Obj(); var_781_bool = 0; var_782_int = 0; var_783_bool = 0; var_784_object = Obj(); var_785_bool = 0; var_786_int = 0; var_787_bool = 0;
	var_0_object = var_778_object;
	var_788_bool = 0; var_789_object = Obj(); var_790_float = 0;
	var_778_object = var_789_object;
	func_7574(var_788_bool, var_789_object, (float)70.0);
	var_791_bool = var_788_bool == 0; //@nz
	if(var_791_bool != 0) {
		var_777_int = -2;
		return 8;
	}
	CreateDialog(var_784_object);
	var_792_int = 0;
	func_8080(var_792_int);
	@@var_784_object:SetNPCName(var_792_int);
	var_793_int = 0;
	func_8078(var_793_int);
	@@var_784_object:SetNPCDescription(var_793_int);
	var_794_string = "";
	func_8082(var_794_string);
	@@var_784_object:SetPhoto(var_794_string);
	var_795_string = "";
	func_8084(var_795_string);
	@@var_784_object:SetPhoto2(var_795_string);
	var_796_int = 0;
	func_9525(var_796_int);
	@@var_784_object:SetPlayerName(var_796_int);
	IsOverrideActive(var_785_bool);
	var_797_bool = var_785_bool;
	if(var_797_bool != 0) {
		var_777_int = -2;
		return 8;
	}
	DoDialog(var_784_object);
	var_798_bool = 0; var_799_object = Obj();
	func_7852(Obj());
	var_800_object = var_799_object;
	func_7661(var_798_bool, var_799_object);
	var_801_object = Obj(); var_802_object = Obj();
	var_778_object = var_801_object;
	var_784_object = var_802_object;
	TaskCall(9);
	func_3700(var_803_object, var_804_object, var_805_string, var_806_bool, var_801_object, var_802_object);
	TaskReturn();
	@@var_784_object:IsDialogEnd(var_787_bool);
	
Label_3682:
	var_887_bool = var_787_bool == 0; //@nz
	if(var_887_bool != 0) {
		sync();
		@@var_784_object:IsDialogEnd(var_787_bool);
		goto Label_3682;
	}
	var_778_object = Obj();
	func_7643();
	StopDialog(var_784_object);
	@@var_784_object:GetReturnValue((int)-1);
	var_786_int = var_777_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9253(var_1094_bool)
{
	var_1096_int = 0; var_1097_string = "";
	func_7879(var_1096_int, "microscope_d6q01_julia_blood");
	var_1099_bool = var_1096_int != (int)0;
	if(var_1099_bool != 0) {
		var_1094_bool = 1;
		return 0;
	}
	var_1094_bool = 0;
	return 0;
}


func_7719(var_160_bool, var_161_object)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = "";
	var_167_string = "c";
	var_168_int = 0;
	
Label_7722:
	if((int)1 != 0) {
		var_174_int = var_168_int + (int)1;
		var_175_int = var_167_string + var_174_int;
		@@var_161_object:HasProperty(var_175_int, var_169_bool);
		var_176_bool = var_169_bool == 0; //@nz
		if(var_176_bool != 0) {
		} else {
			var_168_int = var_168_int + (int)1;
			goto Label_7722;
		}
	}
	var_177_bool = var_168_int == 0; //@nz
	if(var_177_bool != 0) {
		var_160_bool = 0;
		return 10;
	}
	var_170_int = 0;
	var_179_bool = var_168_int > (int)1;
	if(var_179_bool != 0) {
		irand(var_170_int, var_168_int);
	}
	var_181_int = var_170_int + (int)1;
	var_182_int = var_167_string + var_181_int;
	@@var_161_object:GetProperty(var_182_int, var_171_string);
	var_183_bool = 0; var_184_string = "";
	var_171_string = var_184_string;
	func_7830(var_183_bool, var_184_string);
	var_183_bool = var_160_bool;
	return 10;
	
}


func_5672(var_0_object, var_1_object, var_2_object, var_3_string, var_399_object, var_400_object)
{
	var_0_object = var_400_object;
	var_1_object = var_399_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_406_string = "";
		func_5797(var_400_object, "Neutral");
		@@@var_0_object:SetMessage((int)531684);
		@@@var_0_object:ClearReplies();
		var_415_bool = 0; var_416_object = Obj();
		var_416_object = var_1_object;
		func_9073(var_416_object);
		if(var_415_bool != 0) {
			@@@var_0_object:AddReply((int)531685, (int)34364, (int)33069);
		}
		var_426_bool = 0;
		var_426_bool = 0;
		var_427_bool = 0; var_428_object = Obj();
		var_428_object = var_1_object;
		func_8756(var_428_object);
		var_433_bool = var_427_bool == 0; //@nz
		if(var_433_bool != 0) {
			var_434_bool = 0; var_435_object = Obj();
			var_435_object = var_1_object;
			func_8768(var_435_object);
			if(var_434_bool != 0) {
				var_426_bool = 1;
			}
		}
		if(var_426_bool != 0) {
			@@@var_0_object:AddReply((int)531689, (int)34386, (int)33073);
		}
		var_443_bool = 0;
		var_443_bool = 1;
		var_444_bool = 0;
		var_444_bool = 0;
		var_445_bool = 0; var_446_object = Obj();
		var_446_object = var_1_object;
		func_8780(var_446_object);
		if(var_445_bool != 0) {
			var_451_bool = 0; var_452_object = Obj();
			var_452_object = var_1_object;
			func_9073(var_452_object);
			if(var_451_bool != 0) {
				var_444_bool = 1;
			}
		}
		if(var_444_bool != 1) {
			var_453_bool = 0;
			var_453_bool = 0;
			var_454_bool = 0; var_455_object = Obj();
			var_455_object = var_1_object;
			func_8744(var_455_object);
			if(var_454_bool != 0) {
				var_460_bool = 0; var_461_object = Obj();
				var_461_object = var_1_object;
				func_8780(var_461_object);
				if(var_460_bool != 0) {
					var_453_bool = 1;
				}
			}
			if(var_453_bool != 1) {
				var_443_bool = 0;
			}
		}
		if(var_443_bool != 0) {
			@@@var_0_object:AddReply((int)532923, (int)34411, (int)34410);
		}
		@@@var_0_object:AddReply((int)531688, (int)-1, (int)33072);
		@@@var_0_object:AddReply((int)532874, (int)-1, (int)34363);
		goto Label_5767;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x162c";
	}
Label_5767:
	var_471_bool = 0;
	func_8086(var_471_bool);
	if(var_471_bool != 0) {

	Label_5771:
		lshWaitForAnimEnd();
		var_472_string = var_3_string;
		if(var_472_string != 0) {
		} else {
			var_473_string = "";
			var_473_string = var_2_object;
			func_7799(var_473_string);
			goto Label_5771;
	}
		PlayAnimation("all", "idle");

	Label_5786:
		WaitForAnimEnd();
		var_476_string = var_3_string;
		if(var_476_string != 0) {
			goto Label_5796;
		}
		PlayAnimation("all", "idle");
		goto Label_5786;
	}
	goto Label_5796;
	
Label_5796:
	return 0;
	
}


func_8744(var_454_bool)
{
	var_456_int = 0; var_457_string = "";
	func_7879(var_456_int, "d1q01");
	var_459_bool = var_456_int == (int)4;
	if(var_459_bool != 0) {
		var_454_bool = 1;
		return 0;
	}
	var_454_bool = 0;
	return 0;
}


func_8236()
{
	var_233_object = Obj(); var_234_object = Obj();
	SetVariable("d2q01", (int)6);
	func_9475(Obj());
	var_237_object = var_234_object;
	var_242_float = 0;
	func_8015(var_242_float);
	@@var_234_object:AddMark("d2q01AlexandrGotoBigVlad", "pt_map_bigvlad", (int)1, (int)511390, var_242_float);
	var_247_float = 0;
	func_8015(var_247_float);
	@@var_234_object:AddMark("d2q01AlexandrGotoGeorg", "pt_map_georg", (int)1, (int)511391, var_247_float);
	func_9304();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9265()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)34, (int)1, (int)512116);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_9447(var_87_bool, var_88_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8756(var_427_bool)
{
	var_429_int = 0; var_430_string = "";
	func_7879(var_429_int, "cutscene_burn_d1");
	var_432_bool = var_429_int != (int)0;
	if(var_432_bool != 0) {
		var_427_bool = 1;
		return 0;
	}
	var_427_bool = 0;
	return 0;
}


func_6716(var_2_object, var_347_string)
{
	var_348_bool = 0;
	func_8086(var_348_bool);
	var_349_bool = var_348_bool == 0; //@nz
	if(var_349_bool != 0) {
		return 0;
	}
	var_350_bool = var_347_string == var_2_object;
	if(var_350_bool != 0) {
		return 0;
	}
	var_351_string = ""; var_352_bool = 0;
	var_347_string = var_351_string;
	var_354_bool = var_347_string == "";
	if(var_354_bool != 0) {
		var_352_bool = 0;
	} else {
		var_352_bool = 1;
	}
	func_7815(var_351_string, var_352_bool);
	var_2_object = var_347_string;
	return 0;
	
}


func_9278()
{
	var_86_object = Obj(); var_87_object = Obj();
	CreateDiaryEntry(var_87_object, (int)10, (int)1, (int)503081);
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0;
	var_87_object = var_92_object;
	func_9447(var_91_bool, var_92_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8768(var_434_bool)
{
	var_436_int = 0; var_437_string = "";
	func_7879(var_436_int, "ood1Alexandr1");
	var_439_bool = var_436_int == (int)0;
	if(var_439_bool != 0) {
		var_434_bool = 1;
		return 0;
	}
	var_434_bool = 0;
	return 0;
}


func_5194(var_0_object, var_1_object, var_2_object, var_3_string, var_1154_object, var_1155_object)
{
	var_0_object = var_1155_object;
	var_1_object = var_1154_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1161_string = "";
		func_5266(var_1155_object, "Neutral");
		@@@var_0_object:SetMessage((int)512203);
		@@@var_0_object:ClearReplies();
		var_1170_bool = 0;
		var_1170_bool = 0;
		var_1171_bool = 0; var_1172_object = Obj();
		var_1172_object = var_1_object;
		func_9217(var_1172_object);
		if(var_1171_bool != 0) {
			var_1177_bool = 0; var_1178_object = Obj();
			var_1178_object = var_1_object;
			func_9229(var_1178_object);
			if(var_1177_bool != 0) {
				var_1170_bool = 1;
			}
		}
		if(var_1170_bool != 0) {
			@@@var_0_object:AddReply((int)513340, (int)14573, (int)14572);
		}
		@@@var_0_object:AddReply((int)512204, (int)-1, (int)13359);
		goto Label_5236;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x144e";
	}
Label_5236:
	var_1189_bool = 0;
	func_8086(var_1189_bool);
	if(var_1189_bool != 0) {

	Label_5240:
		lshWaitForAnimEnd();
		var_1190_string = var_3_string;
		if(var_1190_string != 0) {
		} else {
			var_1191_string = "";
			var_1191_string = var_2_object;
			func_7799(var_1191_string);
			goto Label_5240;
	}
		PlayAnimation("all", "idle");

	Label_5255:
		WaitForAnimEnd();
		var_1194_string = var_3_string;
		if(var_1194_string != 0) {
			goto Label_5265;
		}
		PlayAnimation("all", "idle");
		goto Label_5255;
	}
	goto Label_5265;
	
Label_5265:
	return 0;
	
}


func_9291()
{
	var_109_object = Obj(); var_110_object = Obj();
	CreateDiaryEntry(var_110_object, (int)50, (int)1, (int)512132);
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0;
	var_110_object = var_115_object;
	func_9447(var_114_bool, var_115_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8268(var_243_object)
{
	Trace("money 5000 is given");
	var_246_object = Obj(); var_247_int = 0;
	var_243_object = var_246_object;
	func_7907(var_246_object, (int)5000);
	return 0;
}


func_8780(var_445_bool)
{
	var_447_int = 0; var_448_string = "";
	func_7879(var_447_int, "ood1Alexandr2");
	var_450_bool = var_447_int == (int)0;
	if(var_450_bool != 0) {
		var_445_bool = 1;
		return 0;
	}
	var_445_bool = 0;
	return 0;
}


func_7756(var_191_bool, var_192_object)
{
	var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; var_198_string = ""; var_199_int = 0; var_200_bool = 0; var_201_int = 0; var_202_string = "";
	var_204_int = 0;
	func_8020(var_204_int);
	var_210_int = "d" + var_204_int;
	var_198_string = var_210_int + "m";
	var_199_int = 0;
	
Label_7765:
	if((int)1 != 0) {
		var_214_int = var_199_int + (int)1;
		var_215_int = var_198_string + var_214_int;
		@@var_192_object:HasProperty(var_215_int, var_200_bool);
		var_216_bool = var_200_bool == 0; //@nz
		if(var_216_bool != 0) {
		} else {
			var_199_int = var_199_int + (int)1;
			goto Label_7765;
		}
	}
	var_217_bool = var_199_int == 0; //@nz
	if(var_217_bool != 0) {
		var_191_bool = 0;
		return 10;
	}
	var_201_int = 0;
	var_219_bool = var_199_int > (int)1;
	if(var_219_bool != 0) {
		irand(var_201_int, var_199_int);
	}
	var_221_int = var_201_int + (int)1;
	var_222_int = var_198_string + var_221_int;
	@@var_192_object:GetProperty(var_222_int, var_202_string);
	var_223_bool = 0; var_224_string = "";
	var_202_string = var_224_string;
	func_7830(var_223_bool, var_224_string);
	var_223_bool = var_191_bool;
	return 10;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_244_object, var_245_object)
{
	var_0_object = var_245_object;
	var_1_object = var_244_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_251_object = Obj(); var_252_object = Obj();
		var_251_object = var_1_object;
		var_252_object = var_0_object;
		func_8676();
		var_255_string = "";
		func_139(var_245_object, "Neutral");
		@@@var_0_object:SetMessage((int)500287);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)532871, (int)34360, (int)34359);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_276_bool = 0;
	func_8086(var_276_bool);
	if(var_276_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_277_string = var_3_string;
		if(var_277_string != 0) {
		} else {
			var_278_string = "";
			var_278_string = var_2_object;
			func_7799(var_278_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_291_string = var_3_string;
		if(var_291_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_7249(var_0_object)
{
	var_57_bool = 0;
	func_7569(var_57_bool);
	var_60_bool = var_57_bool == 0; //@nz
	if(var_60_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_7258:
	func_7425();
	goto Label_7258;
}
EMIT "Return(); Pop(0)";


func_8278(var_118_object)
{
	var_119_object = Obj(); var_120_string = ""; var_121_float = 0;
	func_9475(Obj());
	var_122_object = var_119_object;
	func_9492(var_119_object, "pt_map_anna", (float)2);
	var_142_object = Obj();
	func_9475(var_142_object);
	@@var_118_object:ShowMap(var_142_object);
	return 0;
}


func_8792(var_514_bool)
{
	var_516_int = 0; var_517_string = "";
	func_7879(var_516_int, "ood2Alexandr1");
	var_519_bool = var_516_int == (int)0;
	if(var_519_bool != 0) {
		var_514_bool = 1;
		return 0;
	}
	var_514_bool = 0;
	return 0;
}


func_9304()
{
	var_248_object = Obj(); var_249_object = Obj();
	CreateDiaryEntry(var_249_object, (int)55, (int)1, (int)512137);
	var_253_bool = 0; var_254_object = Obj(); var_255_int = 0;
	var_249_object = var_254_object;
	func_9447(var_253_bool, var_254_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7263(var_81_bool)
{
	var_82_object = Obj(); var_83_object = Obj();
	FindActor(var_83_object, "player");
	var_85_bool = var_83_object == 0; //@nz
	if(var_85_bool != 0) {
		var_81_bool = 0;
		return 2;
	}
	var_86_bool = 0; var_87_object = Obj();
	var_83_object = var_87_object;
	func_7560(var_86_bool, var_87_object);
	var_86_bool = var_81_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8804(var_549_bool)
{
	var_551_int = 0; var_552_string = "";
	func_7879(var_551_int, "ood2Alexandr2");
	var_554_bool = var_551_int == (int)0;
	if(var_554_bool != 0) {
		var_549_bool = 1;
		return 0;
	}
	var_549_bool = 0;
	return 0;
}


func_9317()
{
	var_163_object = Obj(); var_164_object = Obj();
	CreateDiaryEntry(var_164_object, (int)56, (int)1, (int)512138);
	var_168_bool = 0; var_169_object = Obj(); var_170_int = 0;
	var_164_object = var_169_object;
	func_9447(var_168_bool, var_169_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8294(var_106_object)
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0;
	func_9475(Obj());
	var_110_object = var_107_object;
	func_9492(var_107_object, "pt_map_julia", (float)2);
	var_130_object = Obj();
	func_9475(var_130_object);
	@@var_106_object:ShowMap(var_130_object);
	return 0;
}


func_7278(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0);
	var_134_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_133_float, var_134_float);
	return 0;
}


func_8816(var_581_bool)
{
	var_583_int = 0; var_584_string = "";
	func_7879(var_583_int, "ood2Alexandr3");
	var_586_bool = var_583_int == (int)0;
	if(var_586_bool != 0) {
		var_581_bool = 1;
		return 0;
	}
	var_581_bool = 0;
	return 0;
}


func_9330()
{
	var_64_object = Obj(); var_65_object = Obj();
	CreateDiaryEntry(var_65_object, (int)73, (int)1, (int)512155);
	var_69_bool = 0; var_70_object = Obj(); var_71_int = 0;
	var_65_object = var_70_object;
	func_9447(var_69_bool, var_70_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7283(var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0;
	FindActor(var_67_object, "player");
	var_70_bool = var_67_object == 0; //@nz
	if(var_70_bool != 0) {
		var_64_bool = 0;
		return 4;
	}
	var_71_float = 0; var_72_object = Obj();
	var_67_object = var_72_object;
	func_7501(var_71_float, var_72_object);
	var_80_bool = var_71_float > (float)90000.0;
	if(var_80_bool != 0) {
		var_64_bool = 0;
		return 4;
	}
	CanSee(var_68_bool, var_67_object);
	var_68_bool = var_64_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_3700(var_0_object, var_1_object, var_2_object, var_3_string, var_801_object, var_802_object)
{
	var_0_object = var_802_object;
	var_1_object = var_801_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_808_bool = 0; var_809_object = Obj();
		var_809_object = var_1_object;
		func_8977(var_809_object);
		if(var_808_bool != 0) {
			var_814_object = Obj(); var_815_object = Obj();
			var_814_object = var_1_object;
			var_815_object = var_0_object;
			func_8122();
			var_818_string = "";
			func_3831(var_802_object, "Neutral");
			@@@var_0_object:SetMessage((int)511175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511176, (int)12361, (int)12360);
			@@@var_0_object:AddReply((int)511178, (int)12366, (int)12362);
		} else {
				var_841_string = "";
				func_3831(var_802_object, "Neutral");
				@@@var_0_object:SetMessage((int)511164);
				@@@var_0_object:ClearReplies();
				var_843_bool = 0; var_844_object = Obj();
				var_844_object = var_1_object;
				func_8989(var_844_object);
				if(var_843_bool != 0) {
					@@@var_0_object:AddReply((int)511489, (int)12692, (int)12691);
				}
				var_852_bool = 0;
				var_852_bool = 0;
				var_853_bool = 0; var_854_object = Obj();
				var_854_object = var_1_object;
				func_9001(var_854_object);
				if(var_853_bool != 0) {
					var_859_bool = 0; var_860_object = Obj();
					var_860_object = var_1_object;
					func_9013(var_860_object);
					if(var_859_bool != 0) {
						var_852_bool = 1;
					}
				}
				if(var_852_bool != 0) {
					@@@var_0_object:AddReply((int)511187, (int)12373, (int)12372);
				}
				var_868_bool = 0;
				var_868_bool = 0;
				var_869_bool = 0; var_870_object = Obj();
				var_870_object = var_1_object;
				func_9025(var_870_object);
				if(var_869_bool != 0) {
					var_875_bool = 0; var_876_object = Obj();
					var_876_object = var_1_object;
					func_9037(var_876_object);
					if(var_875_bool != 0) {
						var_868_bool = 1;
					}
				}
				if(var_868_bool != 0) {
					@@@var_0_object:AddReply((int)511495, (int)12697, (int)12696);
				}
				@@@var_0_object:AddReply((int)511174, (int)-1, (int)12358);
				goto Label_3801;
		}
	}
Label_3801:
	var_833_bool = 0;
	func_8086(var_833_bool);
	if(var_833_bool != 0) {

	Label_3805:
		lshWaitForAnimEnd();
		var_834_string = var_3_string;
		if(var_834_string != 0) {
		} else {
			var_835_string = "";
			var_835_string = var_2_object;
			func_7799(var_835_string);
			goto Label_3805;
	}
		PlayAnimation("all", "idle");

	Label_3820:
		WaitForAnimEnd();
		var_838_string = var_3_string;
		if(var_838_string != 0) {
			goto Label_3830;
		}
		PlayAnimation("all", "idle");
		goto Label_3820;

	}
	goto Label_3830;
	
Label_3830:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe78";


func_8310()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_7799(var_278_string)
{
	var_279_bool = 0; var_280_float = 0; var_281_float = 0; var_282_bool = 0; var_283_float = 0; var_284_float = 0;
	lshHasAnimation(var_282_bool, var_278_string);
	var_285_bool = var_282_bool;
	if(var_285_bool != 0) {
		lshGetAnimTimes(var_278_string, var_283_float, var_284_float);
		lshPlayAnimation(var_283_float, var_284_float, (bool)0);
	} else {
		var_288_int = "Can't find lsh animation : " + var_278_string;
		Trace(var_288_int);
	}
	return 6;
	
}


func_8828(var_635_bool)
{
	var_637_int = 0; var_638_string = "";
	func_7879(var_637_int, "ood2Alexandr5");
	var_640_bool = var_637_int == (int)0;
	if(var_640_bool != 0) {
		var_635_bool = 1;
		return 0;
	}
	var_635_bool = 0;
	return 0;
}


func_6780(var_0_object, var_1201_int, var_1202_object)
{
	var_1204_object = Obj(); var_1205_bool = 0; var_1206_int = 0; var_1207_bool = 0; var_1208_object = Obj(); var_1209_bool = 0; var_1210_int = 0; var_1211_bool = 0;
	var_0_object = var_1202_object;
	var_1212_bool = 0; var_1213_object = Obj(); var_1214_float = 0;
	var_1202_object = var_1213_object;
	func_7574(var_1212_bool, var_1213_object, (float)70.0);
	var_1215_bool = var_1212_bool == 0; //@nz
	if(var_1215_bool != 0) {
		var_1201_int = -2;
		return 8;
	}
	CreateDialog(var_1208_object);
	var_1216_int = 0;
	func_8080(var_1216_int);
	@@var_1208_object:SetNPCName(var_1216_int);
	var_1217_int = 0;
	func_8078(var_1217_int);
	@@var_1208_object:SetNPCDescription(var_1217_int);
	var_1218_string = "";
	func_8082(var_1218_string);
	@@var_1208_object:SetPhoto(var_1218_string);
	var_1219_string = "";
	func_8084(var_1219_string);
	@@var_1208_object:SetPhoto2(var_1219_string);
	var_1220_int = 0;
	func_9525(var_1220_int);
	@@var_1208_object:SetPlayerName(var_1220_int);
	IsOverrideActive(var_1209_bool);
	var_1221_bool = var_1209_bool;
	if(var_1221_bool != 0) {
		var_1201_int = -2;
		return 8;
	}
	DoDialog(var_1208_object);
	var_1222_bool = 0; var_1223_object = Obj();
	func_7852(Obj());
	var_1224_object = var_1223_object;
	func_7661(var_1222_bool, var_1223_object);
	var_1225_object = Obj(); var_1226_object = Obj();
	var_1202_object = var_1225_object;
	var_1208_object = var_1226_object;
	TaskCall(19);
	func_6861(var_1227_object, var_1228_object, var_1229_string, var_1230_bool, var_1225_object, var_1226_object);
	TaskReturn();
	@@var_1208_object:IsDialogEnd(var_1211_bool);
	
Label_6843:
	var_1258_bool = var_1211_bool == 0; //@nz
	if(var_1258_bool != 0) {
		sync();
		@@var_1208_object:IsDialogEnd(var_1211_bool);
		goto Label_6843;
	}
	var_1202_object = Obj();
	func_7643();
	StopDialog(var_1208_object);
	@@var_1208_object:GetReturnValue((int)-1);
	var_1210_int = var_1201_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8316(var_138_object)
{
	var_139_object = Obj(); var_140_string = ""; var_141_float = 0;
	func_9475(Obj());
	var_142_object = var_139_object;
	func_9492(var_139_object, "pt_map_ospina", (float)2);
	var_162_object = Obj();
	func_9475(var_162_object);
	@@var_138_object:ShowMap(var_162_object);
	return 0;
}


func_9343()
{
	var_125_object = Obj(); var_126_object = Obj();
	CreateDiaryEntry(var_126_object, (int)69, (int)1, (int)512151);
	var_130_bool = 0; var_131_object = Obj(); var_132_int = 0;
	var_126_object = var_131_object;
	func_9447(var_130_bool, var_131_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2693(var_0_object, var_651_int, var_652_object)
{
	var_654_object = Obj(); var_655_bool = 0; var_656_int = 0; var_657_bool = 0; var_658_object = Obj(); var_659_bool = 0; var_660_int = 0; var_661_bool = 0;
	var_0_object = var_652_object;
	var_662_bool = 0; var_663_object = Obj(); var_664_float = 0;
	var_652_object = var_663_object;
	func_7574(var_662_bool, var_663_object, (float)70.0);
	var_665_bool = var_662_bool == 0; //@nz
	if(var_665_bool != 0) {
		var_651_int = -2;
		return 8;
	}
	CreateDialog(var_658_object);
	var_666_int = 0;
	func_8080(var_666_int);
	@@var_658_object:SetNPCName(var_666_int);
	var_667_int = 0;
	func_8078(var_667_int);
	@@var_658_object:SetNPCDescription(var_667_int);
	var_668_string = "";
	func_8082(var_668_string);
	@@var_658_object:SetPhoto(var_668_string);
	var_669_string = "";
	func_8084(var_669_string);
	@@var_658_object:SetPhoto2(var_669_string);
	var_670_int = 0;
	func_9525(var_670_int);
	@@var_658_object:SetPlayerName(var_670_int);
	IsOverrideActive(var_659_bool);
	var_671_bool = var_659_bool;
	if(var_671_bool != 0) {
		var_651_int = -2;
		return 8;
	}
	DoDialog(var_658_object);
	var_672_bool = 0; var_673_object = Obj();
	func_7852(Obj());
	var_674_object = var_673_object;
	func_7661(var_672_bool, var_673_object);
	var_675_object = Obj(); var_676_object = Obj();
	var_652_object = var_675_object;
	var_658_object = var_676_object;
	TaskCall(7);
	func_2774(var_677_object, var_678_object, var_679_string, var_680_bool, var_675_object, var_676_object);
	TaskReturn();
	@@var_658_object:IsDialogEnd(var_661_bool);
	
Label_2756:
	var_773_bool = var_661_bool == 0; //@nz
	if(var_773_bool != 0) {
		sync();
		@@var_658_object:IsDialogEnd(var_661_bool);
		goto Label_2756;
	}
	var_652_object = Obj();
	func_7643();
	StopDialog(var_658_object);
	@@var_658_object:GetReturnValue((int)-1);
	var_660_int = var_651_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7815(var_259_string, var_260_bool)
{
	var_263_bool = 0; var_264_float = 0; var_265_float = 0; var_266_bool = 0; var_267_float = 0; var_268_float = 0;
	lshHasAnimation(var_266_bool, var_259_string);
	var_269_bool = var_266_bool;
	if(var_269_bool != 0) {
		lshGetAnimTimes(var_259_string, var_267_float, var_268_float);
		lshPlayAnimation(var_267_float, var_268_float, var_260_bool);
	} else {
		var_271_int = "Can't find lsh animation : " + var_259_string;
		Trace(var_271_int);
	}
	return 6;
	
}


func_8840(var_626_bool)
{
	var_628_int = 0; var_629_string = "";
	func_7879(var_628_int, "d2q01");
	var_631_bool = var_628_int == (int)0;
	if(var_631_bool != 0) {
		var_626_bool = 1;
		return 0;
	}
	var_626_bool = 0;
	return 0;
}


func_7305()
{
	var_1318_float = 0; var_1319_float = 0;
	rand(var_1319_float, (int)8, (int)16);
	SetTimer((int)10, var_1319_float);
	return 2;
}


func_139(var_2_object, var_255_string)
{
	var_256_bool = 0;
	func_8086(var_256_bool);
	var_257_bool = var_256_bool == 0; //@nz
	if(var_257_bool != 0) {
		return 0;
	}
	var_258_bool = var_255_string == var_2_object;
	if(var_258_bool != 0) {
		return 0;
	}
	var_259_string = ""; var_260_bool = 0;
	var_255_string = var_259_string;
	var_262_bool = var_255_string == "";
	if(var_262_bool != 0) {
		var_260_bool = 0;
	} else {
		var_260_bool = 1;
	}
	func_7815(var_259_string, var_260_bool);
	var_2_object = var_255_string;
	return 0;
	
}


func_8332()
{
	SetVariable("ood3Alexandr1", (int)1);
	return 0;
}


func_9356()
{
	var_84_object = Obj(); var_85_object = Obj();
	CreateDiaryEntry(var_85_object, (int)22, (int)2, (int)503362);
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0;
	var_85_object = var_90_object;
	func_9447(var_89_bool, var_90_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8338()
{
	SetVariable("ood3Alexandr2", (int)1);
	return 0;
}


func_5266(var_2_object, var_1161_string)
{
	var_1162_bool = 0;
	func_8086(var_1162_bool);
	var_1163_bool = var_1162_bool == 0; //@nz
	if(var_1163_bool != 0) {
		return 0;
	}
	var_1164_bool = var_1161_string == var_2_object;
	if(var_1164_bool != 0) {
		return 0;
	}
	var_1165_string = ""; var_1166_bool = 0;
	var_1161_string = var_1165_string;
	var_1168_bool = var_1161_string == "";
	if(var_1168_bool != 0) {
		var_1166_bool = 0;
	} else {
		var_1166_bool = 1;
	}
	func_7815(var_1165_string, var_1166_bool);
	var_2_object = var_1161_string;
	return 0;
	
}


func_8852(var_587_bool)
{
	var_589_int = 0; var_590_string = "";
	func_7879(var_589_int, "d2q01");
	var_592_bool = var_589_int == (int)5;
	if(var_592_bool != 0) {
		var_587_bool = 1;
		return 0;
	}
	var_587_bool = 0;
	return 0;
}


func_7314()
{
	KillTimer((int)10);
	return 0;
}


func_7830(var_183_bool, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0;
	var_187_bool = 0;
	func_8086(var_187_bool);
	if(var_187_bool != 0) {
		lshHasSpeech(var_186_bool, var_184_string);
		var_188_bool = var_186_bool;
		if(var_188_bool != 0) {
			lshPlaySpeech(var_184_string);
			var_183_bool = 1;
			return 2;
		}
	}
	var_183_bool = 0;
	return 2;
}


func_8344()
{
	SetVariable("ood3Alexandr3", (int)1);
	return 0;
}


func_9369()
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateDiaryEntry(var_108_object, (int)96, (int)2, (int)512178);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_108_object = var_113_object;
	func_9447(var_112_bool, var_113_object, (int)22);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8350()
{
	SetVariable("ood3Alexandr4", (int)1);
	return 0;
}


func_8864(var_555_bool)
{
	var_555_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_8356()
{
	var_107_object = Obj(); var_108_object = Obj();
	SetVariable("d3q01", (int)2);
	func_9475(Obj());
	var_111_object = var_108_object;
	var_122_float = 0;
	func_8015(var_122_float);
	@@var_108_object:AddMark("d3q01AlexandrGotoOspina", "pt_map_ospina", (int)1, (int)511148, var_122_float);
	func_9343();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7845()
{
	var_59_bool = 0;
	func_8086(var_59_bool);
	if(var_59_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_8869(var_557_bool)
{
	var_559_int = 0; var_560_string = "";
	func_7879(var_559_int, "d2q01BigVladVisit");
	var_562_bool = var_559_int == (int)1;
	if(var_562_bool != 0) {
		var_557_bool = 1;
		return 0;
	}
	var_557_bool = 0;
	return 0;
}


func_5797(var_2_object, var_406_string)
{
	var_407_bool = 0;
	func_8086(var_407_bool);
	var_408_bool = var_407_bool == 0; //@nz
	if(var_408_bool != 0) {
		return 0;
	}
	var_409_bool = var_406_string == var_2_object;
	if(var_409_bool != 0) {
		return 0;
	}
	var_410_string = ""; var_411_bool = 0;
	var_406_string = var_410_string;
	var_413_bool = var_406_string == "";
	if(var_413_bool != 0) {
		var_411_bool = 0;
	} else {
		var_411_bool = 1;
	}
	func_7815(var_410_string, var_411_bool);
	var_2_object = var_406_string;
	return 0;
	
}


func_9382()
{
	var_207_object = Obj(); var_208_object = Obj();
	CreateDiaryEntry(var_208_object, (int)98, (int)2, (int)512180);
	var_212_bool = 0; var_213_object = Obj(); var_214_int = 0;
	var_208_object = var_213_object;
	func_9447(var_212_bool, var_213_object, (int)22);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7852(var_151_object)
{
	var_152_object = Obj(); var_153_object = Obj();
	self(var_153_object);
	var_153_object = var_151_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8881(var_612_bool)
{
	var_614_int = 0; var_615_string = "";
	func_7879(var_614_int, "d2q03");
	var_617_bool = var_614_int == (int)3;
	if(var_617_bool != 0) {
		var_612_bool = 1;
		return 0;
	}
	var_612_bool = 0;
	return 0;
}


func_7858(var_115_cvector, var_116_cvector)
{
	var_118_float = 0; var_119_float = 0;
	var_120_int = var_116_cvector | var_116_cvector;
	var_119_float = sqrt(var_120_int);
	var_121_float = 9.999999974752427e-07;
	var_122_bool = var_119_float < var_121_float;
	if(var_122_bool != 0) {
		var_115_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_115_cvector = var_116_cvector / var_119_float;
	return 2;
}


func_9395()
{
	var_282_object = Obj(); var_283_object = Obj();
	CreateDiaryEntry(var_283_object, (int)100, (int)2, (int)512182);
	var_287_bool = 0; var_288_object = Obj(); var_289_int = 0;
	var_283_object = var_288_object;
	func_9447(var_287_bool, var_288_object, (int)22);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8379(var_257_object)
{
	var_258_object = Obj(); var_259_string = ""; var_260_float = 0;
	func_9475(Obj());
	var_261_object = var_258_object;
	func_9492(var_258_object, "pt_map_bigvlad", (float)2);
	var_262_object = Obj();
	func_9475(var_262_object);
	@@var_257_object:ShowMap(var_262_object);
	return 0;
}


func_7868(var_331_float, var_332_float, var_333_float, var_334_float)
{
	var_335_bool = var_332_float < var_333_float;
	if(var_335_bool != 0) {
		var_333_float = var_331_float;
		return 0;
	}
	var_336_bool = var_332_float > var_334_float;
	if(var_336_bool != 0) {
		var_334_float = var_331_float;
		return 0;
	}
	var_332_float = var_331_float;
	return 0;
}


func_8893(var_599_bool)
{
	var_601_int = 0; var_602_string = "";
	func_7879(var_601_int, "d2q03");
	var_604_bool = var_601_int == (int)1000;
	if(var_604_bool != 0) {
		var_599_bool = 1;
		return 0;
	}
	var_599_bool = 0;
	return 0;
}


func_9408()
{
	var_90_object = Obj(); var_91_object = Obj();
	CreateDiaryEntry(var_91_object, (int)114, (int)1, (int)513737);
	var_95_bool = 0; var_96_object = Obj(); var_97_int = 0;
	var_91_object = var_96_object;
	func_9447(var_95_bool, var_96_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1732(var_2_object, var_524_string)
{
	var_525_bool = 0;
	func_8086(var_525_bool);
	var_526_bool = var_525_bool == 0; //@nz
	if(var_526_bool != 0) {
		return 0;
	}
	var_527_bool = var_524_string == var_2_object;
	if(var_527_bool != 0) {
		return 0;
	}
	var_528_string = ""; var_529_bool = 0;
	var_524_string = var_528_string;
	var_531_bool = var_524_string == "";
	if(var_531_bool != 0) {
		var_529_bool = 0;
	} else {
		var_529_bool = 1;
	}
	func_7815(var_528_string, var_529_bool);
	var_2_object = var_524_string;
	return 0;
	
}


func_7879(var_417_int, var_418_string)
{
	var_419_int = 0; var_420_int = 0;
	GetVariable(var_418_string, var_420_int);
	var_420_int = var_417_int;
	return 2;
}


func_8905(var_740_bool)
{
	var_742_int = 0; var_743_string = "";
	func_7879(var_742_int, "ood3Alexandr1");
	var_745_bool = var_742_int == (int)0;
	if(var_745_bool != 0) {
		var_740_bool = 1;
		return 0;
	}
	var_740_bool = 0;
	return 0;
}


func_8395(var_219_object)
{
	var_221_int = 0; var_222_int = 0;
	@@var_219_object:RemoveItemByType(var_222_int, "d2q01_key", (int)1);
	return 2;
}


func_7884(var_115_object, var_116_string)
{
	var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj(); var_120_object = Obj();
	GetMainOutdoorScene(var_119_object);
	var_122_int = var_116_string + ".xml";
	AddBlankActorFromXml(var_120_object, var_119_object, var_116_string, var_122_int);
	var_120_object = var_115_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6861(var_0_object, var_1_object, var_2_object, var_3_string, var_1225_object, var_1226_object)
{
	var_0_object = var_1226_object;
	var_1_object = var_1225_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1232_string = "";
		func_6924(var_1226_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_6894;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1ad1";
	}
Label_6894:
	var_1250_bool = 0;
	func_8086(var_1250_bool);
	if(var_1250_bool != 0) {

	Label_6898:
		lshWaitForAnimEnd();
		var_1251_string = var_3_string;
		if(var_1251_string != 0) {
		} else {
			var_1252_string = "";
			var_1252_string = var_2_object;
			func_7799(var_1252_string);
			goto Label_6898;
	}
		PlayAnimation("all", "idle");

	Label_6913:
		WaitForAnimEnd();
		var_1255_string = var_3_string;
		if(var_1255_string != 0) {
			goto Label_6923;
		}
		PlayAnimation("all", "idle");
		goto Label_6913;
	}
	goto Label_6923;
	
Label_6923:
	return 0;
	
}


func_9421()
{
	var_86_object = Obj(); var_87_object = Obj();
	CreateDiaryEntry(var_87_object, (int)172, (int)2, (int)515424);
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0;
	var_87_object = var_92_object;
	func_9447(var_91_bool, var_92_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8401()
{
	SetVariable("ood4Alexandr1", (int)1);
	return 0;
}


func_8917(var_725_bool)
{
	var_727_int = 0; var_728_string = "";
	func_7879(var_727_int, "ood3Alexandr2");
	var_730_bool = var_727_int == (int)0;
	if(var_730_bool != 0) {
		var_725_bool = 1;
		return 0;
	}
	var_725_bool = 0;
	return 0;
}


func_2774(var_0_object, var_1_object, var_2_object, var_3_string, var_675_object, var_676_object)
{
	var_0_object = var_676_object;
	var_1_object = var_675_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_682_bool = 0;
		var_682_bool = 0;
		var_683_bool = 0; var_684_object = Obj();
		var_684_object = var_1_object;
		func_8953(var_684_object);
		if(var_683_bool != 0) {
			var_689_bool = 0; var_690_object = Obj();
			var_690_object = var_1_object;
			func_8941(var_690_object);
			if(var_689_bool != 0) {
				var_682_bool = 1;
			}
		}
		if(var_682_bool != 0) {
			var_695_object = Obj(); var_696_object = Obj();
			var_695_object = var_1_object;
			var_696_object = var_0_object;
			func_8350();
			var_699_string = "";
			func_2920(var_676_object, "Neutral");
			@@@var_0_object:SetMessage((int)509086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509087, (int)9969, (int)9965);
			@@@var_0_object:AddReply((int)509088, (int)9967, (int)9966);
		} else {
				var_722_string = "";
				func_2920(var_676_object, "Neutral");
				@@@var_0_object:SetMessage((int)508854);
				@@@var_0_object:ClearReplies();
				var_724_bool = 0;
				var_724_bool = 0;
				var_725_bool = 0; var_726_object = Obj();
				var_726_object = var_1_object;
				func_8917(var_726_object);
				if(var_725_bool != 0) {
					var_731_bool = 0; var_732_object = Obj();
					var_732_object = var_1_object;
					func_8965(var_732_object);
					if(var_731_bool != 0) {
						var_724_bool = 1;
					}
				}
				if(var_724_bool != 0) {
					@@@var_0_object:AddReply((int)508840, (int)9693, (int)9692);
				}
				var_740_bool = 0; var_741_object = Obj();
				var_741_object = var_1_object;
				func_8905(var_741_object);
				if(var_740_bool != 0) {
					@@@var_0_object:AddReply((int)508855, (int)9687, (int)9711);
				}
				var_749_bool = 0; var_750_object = Obj();
				var_750_object = var_1_object;
				func_8929(var_750_object);
				if(var_749_bool != 0) {
					@@@var_0_object:AddReply((int)508856, (int)9691, (int)9712);
				}
				var_758_bool = 0; var_759_object = Obj();
				var_759_object = var_1_object;
				func_9061(var_759_object);
				if(var_758_bool != 0) {
					@@@var_0_object:AddReply((int)511978, (int)13175, (int)13193);
				}
				@@@var_0_object:AddReply((int)511133, (int)-1, (int)12322);
				@@@var_0_object:AddReply((int)534068, (int)-1, (int)35658);
				goto Label_2890;
		}
	}
Label_2890:
	var_714_bool = 0;
	func_8086(var_714_bool);
	if(var_714_bool != 0) {

	Label_2894:
		lshWaitForAnimEnd();
		var_715_string = var_3_string;
		if(var_715_string != 0) {
		} else {
			var_716_string = "";
			var_716_string = var_2_object;
			func_7799(var_716_string);
			goto Label_2894;
	}
		PlayAnimation("all", "idle");

	Label_2909:
		WaitForAnimEnd();
		var_719_string = var_3_string;
		if(var_719_string != 0) {
			goto Label_2919;
		}
		PlayAnimation("all", "idle");
		goto Label_2909;

	}
	goto Label_2919;
	
Label_2919:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xada";


func_8407()
{
	var_68_object = Obj(); var_69_object = Obj();
	func_9475(Obj());
	var_70_object = var_69_object;
	var_81_float = 0;
	func_8015(var_81_float);
	@@var_69_object:AddMark("d4q03AlexandrGotoGrif", "pt_map_grif", (int)0, (int)511487, var_81_float);
	func_9356();
	func_9369();
	var_115_object = Obj(); var_116_string = "";
	func_7884(var_115_object, "quest_d4_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_7895(var_142_int, var_143_int)
{
	var_144_object = Obj(); var_145_object = Obj();
	CreateIntVector(var_145_object);
	@@var_145_object:add(var_142_int);
	@@var_145_object:add(var_143_int);
	SendWorldWndMessage((int)3, var_145_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9434(var_96_object)
{
	var_97_object = Obj(); var_98_object = Obj();
	GetDiaryRoot(var_98_object);
	var_99_bool = var_98_object == 0; //@nz
	if(var_99_bool != 0) {
		Trace("Can't retrieve diary root");
		var_96_object = 0;
		return 2;
	}
	var_98_object = var_96_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8929(var_749_bool)
{
	var_751_int = 0; var_752_string = "";
	func_7879(var_751_int, "ood3Alexandr3");
	var_754_bool = var_751_int == (int)0;
	if(var_754_bool != 0) {
		var_749_bool = 1;
		return 0;
	}
	var_749_bool = 0;
	return 0;
}


func_7907(var_246_object, var_247_int)
{
	var_248_int = 0; var_249_int = 0;
	var_250_object = Obj(); var_251_string = ""; var_252_int = 0;
	var_246_object = var_250_object;
	var_247_int = var_252_int;
	func_7543(var_250_object, "money", var_252_int);
	var_257_bool = var_247_int > (int)0;
	if(var_257_bool != 0) {
		GetInvItemByName(var_249_int, "Money");
		var_259_int = 0; var_260_int = 0;
		var_249_int = var_259_int;
		var_247_int = var_260_int;
		func_7895(var_259_int, var_260_int);
	}
	return 2;
}


func_9447(var_87_bool, var_88_object, var_89_int)
{
	var_90_object = Obj(); var_91_object = Obj(); var_92_int = 0; var_93_object = Obj(); var_94_object = Obj(); var_95_int = 0;
	func_9434(Obj());
	var_96_object = var_93_object;
	@@var_93_object:Find(var_89_int, var_94_object);
	var_101_bool = var_94_object == 0; //@nz
	if(var_101_bool != 0) {
		var_103_int = "Can't find diary parent with id: " + var_89_int;
		Trace(var_103_int);
		var_87_bool = 0;
		return 6;
	}
	@@var_94_object:AddChild(var_88_object);
	SendWorldWndMessage((int)7);
	@@var_88_object:GetCategory(var_95_int);
	SetDiarySection(var_95_int);
	var_87_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_8941(var_689_bool)
{
	var_691_int = 0; var_692_string = "";
	func_7879(var_691_int, "ood3Alexandr4");
	var_694_bool = var_691_int == (int)0;
	if(var_694_bool != 0) {
		var_689_bool = 1;
		return 0;
	}
	var_689_bool = 0;
	return 0;
}


func_8433(var_148_object)
{
	var_149_object = Obj(); var_150_string = ""; var_151_float = 0;
	func_9475(Obj());
	var_152_object = var_149_object;
	func_9492(var_149_object, "pt_map_grif", (float)2);
	var_172_object = Obj();
	func_9475(var_172_object);
	@@var_148_object:ShowMap(var_172_object);
	return 0;
}


func_7926(var_131_object, var_132_object, var_133_int)
{
	var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_int = 0; var_139_bool = 0;
	@@var_132_object:GetItemID(var_137_int);
	GetInvItemProperty(var_138_int, var_137_int, "Category");
	@@var_131_object:AddItem(var_139_bool, var_132_object, var_138_int, var_133_int);
	var_141_bool = var_139_bool == 0; //@nz
	if(var_141_bool != 0) {
		@@var_131_object:DropItems(var_132_object, var_133_int);
	} else {
		var_142_int = 0; var_143_int = 0;
		var_137_int = var_142_int;
		var_133_int = var_143_int;
		func_7895(var_142_int, var_143_int);
	}
	return 6;
	
}


func_3831(var_2_object, var_818_string)
{
	var_819_bool = 0;
	func_8086(var_819_bool);
	var_820_bool = var_819_bool == 0; //@nz
	if(var_820_bool != 0) {
		return 0;
	}
	var_821_bool = var_818_string == var_2_object;
	if(var_821_bool != 0) {
		return 0;
	}
	var_822_string = ""; var_823_bool = 0;
	var_818_string = var_822_string;
	var_825_bool = var_818_string == "";
	if(var_825_bool != 0) {
		var_823_bool = 0;
	} else {
		var_823_bool = 1;
	}
	func_7815(var_822_string, var_823_bool);
	var_2_object = var_818_string;
	return 0;
	
}


func_8953(var_683_bool)
{
	var_685_int = 0; var_686_string = "";
	func_7879(var_685_int, "d3q01");
	var_688_bool = var_685_int == (int)8;
	if(var_688_bool != 0) {
		var_683_bool = 1;
		return 0;
	}
	var_683_bool = 0;
	return 0;
}


func_254(var_0_object, var_987_int, var_988_object)
{
	var_990_object = Obj(); var_991_bool = 0; var_992_int = 0; var_993_bool = 0; var_994_object = Obj(); var_995_bool = 0; var_996_int = 0; var_997_bool = 0;
	var_0_object = var_988_object;
	var_998_bool = 0; var_999_object = Obj(); var_1000_float = 0;
	var_988_object = var_999_object;
	func_7574(var_998_bool, var_999_object, (float)70.0);
	var_1001_bool = var_998_bool == 0; //@nz
	if(var_1001_bool != 0) {
		var_987_int = -2;
		return 8;
	}
	CreateDialog(var_994_object);
	var_1002_int = 0;
	func_8080(var_1002_int);
	@@var_994_object:SetNPCName(var_1002_int);
	var_1003_int = 0;
	func_8078(var_1003_int);
	@@var_994_object:SetNPCDescription(var_1003_int);
	var_1004_string = "";
	func_8082(var_1004_string);
	@@var_994_object:SetPhoto(var_1004_string);
	var_1005_string = "";
	func_8084(var_1005_string);
	@@var_994_object:SetPhoto2(var_1005_string);
	var_1006_int = 0;
	func_9525(var_1006_int);
	@@var_994_object:SetPlayerName(var_1006_int);
	IsOverrideActive(var_995_bool);
	var_1007_bool = var_995_bool;
	if(var_1007_bool != 0) {
		var_987_int = -2;
		return 8;
	}
	DoDialog(var_994_object);
	var_1008_bool = 0; var_1009_object = Obj();
	func_7852(Obj());
	var_1010_object = var_1009_object;
	func_7661(var_1008_bool, var_1009_object);
	var_1011_object = Obj(); var_1012_object = Obj();
	var_988_object = var_1011_object;
	var_994_object = var_1012_object;
	TaskCall(3);
	func_335(var_1013_object, var_1014_object, var_1015_string, var_1016_bool, var_1011_object, var_1012_object);
	TaskReturn();
	@@var_994_object:IsDialogEnd(var_997_bool);
	
Label_317:
	var_1126_bool = var_997_bool == 0; //@nz
	if(var_1126_bool != 0) {
		sync();
		@@var_994_object:IsDialogEnd(var_997_bool);
		goto Label_317;
	}
	var_988_object = Obj();
	func_7643();
	StopDialog(var_994_object);
	@@var_994_object:GetReturnValue((int)-1);
	var_996_int = var_987_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8449()
{
	SetVariable("ood4Alexandr2", (int)1);
	return 0;
}


func_7425()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0;
	WaitForAnimEnd();
	var_73_bool = 0;
	func_7569(var_73_bool);
	var_74_bool = var_73_bool == 0; //@nz
	if(var_74_bool != 0) {
		return 12;
	}
	func_8061((int)0);
	var_75_int = var_67_int;
	var_68_int = 0;
	
Label_7439:
	var_88_bool = 0;
	var_88_bool = 0;
	var_90_bool = var_68_int < (int)5;
	if(var_90_bool != 0) {
		var_91_bool = 0;
		func_7569(var_91_bool);
		if(var_91_bool != 0) {
			var_88_bool = 1;
		}
	}
	if(var_88_bool != 0) {
		var_92_bool = var_67_int == 0; //@nz
		if(var_92_bool != 0) {
			Sleep((int)3, var_69_bool);
			var_94_bool = var_69_bool == 0; //@nz
			if(var_94_bool != 0) {
			} else {
		} else {
				irand(var_70_int, var_67_int);
				irand(var_71_int, (int)5);
				var_100_bool = var_71_int != (int)0;
				if(var_100_bool != 0) {
					var_70_int = 0;
				}
				var_102_string = ""; var_103_int = 0;
				var_70_int = var_103_int;
				func_8054(var_102_string, var_103_int);
				PlayAnimation("all", var_102_string);
				WaitForAnimEnd(var_72_bool);
				var_104_bool = var_72_bool == 0; //@nz
				if(var_104_bool == 0) goto Label_7480;
				goto Label_7491;
		}
		Label_7480:
			var_95_bool = 0;
			func_7494(var_95_bool);
			var_96_bool = var_95_bool == 0; //@nz
			if(var_96_bool != 0) {
				goto Label_7491;
			}
			ResetAAS();
			var_68_int = var_68_int + (int)1;
			goto Label_7439;

		}
	}
Label_7491:
	ResetAAS();
	return 12;
	
}


func_9475(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); var_72_object = Obj();
	GetMainOutdoorScene(var_71_object);
	var_73_bool = var_71_object == 0; //@ne
	if(var_73_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_72_object = 0;
		var_72_object = var_68_object;
		return 4;
	}
	@@var_71_object:GetMap(var_72_object);
	var_72_object = var_68_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8965(var_731_bool)
{
	var_733_int = 0; var_734_string = "";
	func_7879(var_733_int, "d3q01");
	var_736_bool = var_733_int == (int)1;
	if(var_736_bool != 0) {
		var_731_bool = 1;
		return 0;
	}
	var_731_bool = 0;
	return 0;
}


func_8455()
{
	var_197_object = Obj(); var_198_object = Obj();
	SetVariable("d4q03", (int)3);
	func_9475(Obj());
	var_201_object = var_198_object;
	var_206_float = 0;
	func_8015(var_206_float);
	@@var_198_object:AddMark("d4q03AlexandrAboutVolnica", "pt_d4q03_volnica", (int)0, (int)511494, var_206_float);
	func_9382();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7945(var_126_object, var_127_string, var_128_int)
{
	var_129_object = Obj(); var_130_object = Obj();
	CreateInvItem(var_130_object);
	@@var_130_object:SetItemName(var_127_string);
	var_131_object = Obj(); var_132_object = Obj(); var_133_int = 0;
	var_126_object = var_131_object;
	var_130_object = var_132_object;
	var_128_int = var_133_int;
	func_7926(var_131_object, var_132_object, var_133_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6924(var_2_object, var_1232_string)
{
	var_1233_bool = 0;
	func_8086(var_1233_bool);
	var_1234_bool = var_1233_bool == 0; //@nz
	if(var_1234_bool != 0) {
		return 0;
	}
	var_1235_bool = var_1232_string == var_2_object;
	if(var_1235_bool != 0) {
		return 0;
	}
	var_1236_string = ""; var_1237_bool = 0;
	var_1232_string = var_1236_string;
	var_1239_bool = var_1232_string == "";
	if(var_1239_bool != 0) {
		var_1237_bool = 0;
	} else {
		var_1237_bool = 1;
	}
	func_7815(var_1236_string, var_1237_bool);
	var_2_object = var_1232_string;
	return 0;
	
}


func_8977(var_808_bool)
{
	var_810_int = 0; var_811_string = "";
	func_7879(var_810_int, "ood4Alexandr1");
	var_813_bool = var_810_int == (int)0;
	if(var_813_bool != 0) {
		var_808_bool = 1;
		return 0;
	}
	var_808_bool = 0;
	return 0;
}


func_9492(var_107_object, var_108_string, var_109_float)
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


func_7958(var_302_bool, var_303_object, var_304_float)
{
	var_305_bool = var_303_object == 0; //@nz
	if(var_305_bool != 0) {
		var_302_bool = 0;
		return 0;
	}
	var_307_bool = var_304_float > (int)0;
	if(var_307_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_338_bool = var_304_float < (int)0;
		if(var_338_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_7979;
		}
		var_302_bool = 0;
		return 0;
	}
Label_7979:
	var_309_float = 0;
	var_304_float = var_309_float;
	func_7993(var_309_float);
	var_313_bool = 0; var_314_object = Obj(); var_315_string = ""; var_316_float = 0; var_317_float = 0; var_318_float = 0;
	var_303_object = var_314_object;
	var_304_float = var_316_float;
	func_7521(var_313_bool, var_314_object, "reputation", var_316_float, (float)0, (float)1);
	var_302_bool = 1;
	return 0;
	
}


func_8989(var_843_bool)
{
	var_845_int = 0; var_846_string = "";
	func_7879(var_845_int, "d4q03");
	var_848_bool = var_845_int == (int)0;
	if(var_848_bool != 0) {
		var_843_bool = 1;
		return 0;
	}
	var_843_bool = 0;
	return 0;
}


func_8478()
{
	var_267_object = Obj(); var_268_object = Obj(); var_269_object = Obj(); var_270_object = Obj();
	func_9475(Obj());
	var_271_object = var_269_object;
	@@var_269_object:FindMark(var_270_object, "d4q03AlexandrAboutVolnica");
	var_273_object = var_270_object;
	if(var_273_object != 0) {
		@@var_270_object:Remove();
	}
	@@var_269_object:FindMark(var_270_object, "d4q03AlexandrGotoGrif");
	var_275_object = var_270_object;
	if(var_275_object != 0) {
		@@var_270_object:Remove();
	}
	@@var_269_object:FindMark(var_270_object, "d4q03AlexandrGotoGrifSelf");
	var_277_object = var_270_object;
	if(var_277_object != 0) {
		@@var_270_object:Remove();
	}
	@@var_269_object:FindMark(var_270_object, "d4q03GrifGotoAlexandr");
	var_279_object = var_270_object;
	if(var_279_object != 0) {
		@@var_270_object:Remove();
	}
	@@var_269_object:FindMark(var_270_object, "d4q03GrifGotoAlexandrSelf");
	var_281_object = var_270_object;
	if(var_281_object != 0) {
		@@var_270_object:Remove();
	}
	func_9395();
	var_290_bool = 0; var_291_string = ""; var_292_string = "";
	func_8003(var_290_bool, "quest_d4_03", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4384(var_0_object, var_891_int, var_892_object)
{
	var_894_object = Obj(); var_895_bool = 0; var_896_int = 0; var_897_bool = 0; var_898_object = Obj(); var_899_bool = 0; var_900_int = 0; var_901_bool = 0;
	var_0_object = var_892_object;
	var_902_bool = 0; var_903_object = Obj(); var_904_float = 0;
	var_892_object = var_903_object;
	func_7574(var_902_bool, var_903_object, (float)70.0);
	var_905_bool = var_902_bool == 0; //@nz
	if(var_905_bool != 0) {
		var_891_int = -2;
		return 8;
	}
	CreateDialog(var_898_object);
	var_906_int = 0;
	func_8080(var_906_int);
	@@var_898_object:SetNPCName(var_906_int);
	var_907_int = 0;
	func_8078(var_907_int);
	@@var_898_object:SetNPCDescription(var_907_int);
	var_908_string = "";
	func_8082(var_908_string);
	@@var_898_object:SetPhoto(var_908_string);
	var_909_string = "";
	func_8084(var_909_string);
	@@var_898_object:SetPhoto2(var_909_string);
	var_910_int = 0;
	func_9525(var_910_int);
	@@var_898_object:SetPlayerName(var_910_int);
	IsOverrideActive(var_899_bool);
	var_911_bool = var_899_bool;
	if(var_911_bool != 0) {
		var_891_int = -2;
		return 8;
	}
	DoDialog(var_898_object);
	var_912_bool = 0; var_913_object = Obj();
	func_7852(Obj());
	var_914_object = var_913_object;
	func_7661(var_912_bool, var_913_object);
	var_915_object = Obj(); var_916_object = Obj();
	var_892_object = var_915_object;
	var_898_object = var_916_object;
	TaskCall(11);
	func_4465(var_917_object, var_918_object, var_919_string, var_920_bool, var_915_object, var_916_object);
	TaskReturn();
	@@var_898_object:IsDialogEnd(var_901_bool);
	
Label_4447:
	var_983_bool = var_901_bool == 0; //@nz
	if(var_983_bool != 0) {
		sync();
		@@var_898_object:IsDialogEnd(var_901_bool);
		goto Label_4447;
	}
	var_892_object = Obj();
	func_7643();
	StopDialog(var_898_object);
	@@var_898_object:GetReturnValue((int)-1);
	var_900_int = var_891_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9001(var_853_bool)
{
	var_855_int = 0; var_856_string = "";
	func_7879(var_855_int, "ood4Alexandr2");
	var_858_bool = var_855_int == (int)0;
	if(var_858_bool != 0) {
		var_853_bool = 1;
		return 0;
	}
	var_853_bool = 0;
	return 0;
}


func_9525(var_140_int)
{
	var_141_int = 0; var_142_int = 0;
	GetVariable("branch", var_142_int);
	var_145_bool = var_142_int == (int)0;
	if(var_145_bool != 0) {
		var_140_int = 1;
		return 2;
	EMIT "GOTO 0x2544";
	}
	var_147_bool = var_142_int == (int)1;
	if(var_147_bool != 0) {
		var_140_int = 2;
		return 2;
	}
	var_140_int = 3;
	return 2;
}


func_9013(var_859_bool)
{
	var_861_int = 0; var_862_string = "";
	func_7879(var_861_int, "d4q03");
	var_864_bool = var_861_int == (int)2;
	if(var_864_bool != 0) {
		var_859_bool = 1;
		return 0;
	}
	var_859_bool = 0;
	return 0;
}


func_7993(var_309_float)
{
	var_310_object = Obj(); var_311_object = Obj();
	CreateFloatVector(var_311_object);
	@@var_311_object:add(var_309_float);
	SendWorldWndMessage((int)16, var_311_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9025(var_869_bool)
{
	var_871_int = 0; var_872_string = "";
	func_7879(var_871_int, "d4q03_alldead");
	var_874_bool = var_871_int == (int)1;
	if(var_874_bool != 0) {
		var_869_bool = 1;
		return 0;
	}
	var_869_bool = 0;
	return 0;
}


func_8003(var_290_bool, var_291_string, var_292_string)
{
	var_293_object = Obj(); var_294_object = Obj();
	FindActor(var_294_object, var_291_string);
	var_295_bool = var_294_object == 0; //@ne
	if(var_295_bool != 0) {
		var_290_bool = 0;
		return 2;
	}
	Trigger(var_294_object, var_292_string);
	var_290_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_9542(var_74_object)
{
	var_75_bool = GlobalVars[1];
	var_76_bool = var_75_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_77_int = 0; var_78_object = Obj();
		var_74_object = var_78_object;
		TaskCall(0);
		func_0(var_79_object, var_77_int, var_78_object);
		TaskReturn();
		var_303_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_304_bool = 0; var_305_int = 0;
	func_8035(var_304_bool, (int)2);
	if(var_304_bool != 0) {
		var_319_int = 0; var_320_object = Obj();
		var_74_object = var_320_object;
		TaskCall(16);
		func_6584(var_321_object, var_319_int, var_320_object);
		TaskReturn();
		return 0;
	}
	var_372_bool = 0; var_373_int = 0;
	func_8029(var_372_bool, (int)1);
	if(var_372_bool != 0) {
		var_375_int = 0; var_376_object = Obj();
		var_74_object = var_376_object;
		TaskCall(14);
		func_5591(var_377_object, var_375_int, var_376_object);
		TaskReturn();
		return 0;
	}
	var_481_bool = 0; var_482_int = 0;
	func_8029(var_481_bool, (int)2);
	if(var_481_bool != 0) {
		var_483_int = 0; var_484_object = Obj();
		var_74_object = var_484_object;
		TaskCall(4);
		func_1419(var_485_object, var_483_int, var_484_object);
		TaskReturn();
		return 0;
	}
	var_649_bool = 0; var_650_int = 0;
	func_8029(var_649_bool, (int)3);
	if(var_649_bool != 0) {
		var_651_int = 0; var_652_object = Obj();
		var_74_object = var_652_object;
		TaskCall(6);
		func_2693(var_653_object, var_651_int, var_652_object);
		TaskReturn();
		return 0;
	}
	var_775_bool = 0; var_776_int = 0;
	func_8029(var_775_bool, (int)4);
	if(var_775_bool != 0) {
		var_777_int = 0; var_778_object = Obj();
		var_74_object = var_778_object;
		TaskCall(8);
		func_3619(var_779_object, var_777_int, var_778_object);
		TaskReturn();
		return 0;
	}
	var_889_bool = 0; var_890_int = 0;
	func_8029(var_889_bool, (int)5);
	if(var_889_bool != 0) {
		var_891_int = 0; var_892_object = Obj();
		var_74_object = var_892_object;
		TaskCall(10);
		func_4384(var_893_object, var_891_int, var_892_object);
		TaskReturn();
		return 0;
	}
	var_985_bool = 0; var_986_int = 0;
	func_8029(var_985_bool, (int)6);
	if(var_985_bool != 0) {
		var_987_int = 0; var_988_object = Obj();
		var_74_object = var_988_object;
		TaskCall(2);
		func_254(var_989_object, var_987_int, var_988_object);
		TaskReturn();
		return 0;
	}
	var_1128_bool = 0; var_1129_int = 0;
	func_8029(var_1128_bool, (int)7);
	if(var_1128_bool != 0) {
		var_1130_int = 0; var_1131_object = Obj();
		var_74_object = var_1131_object;
		TaskCall(12);
		func_5113(var_1132_object, var_1130_int, var_1131_object);
		TaskReturn();
		return 0;
	}
	var_1199_bool = 0; var_1200_int = 0;
	func_8029(var_1199_bool, (int)12);
	if(var_1199_bool != 0) {
		var_1201_int = 0; var_1202_object = Obj();
		var_74_object = var_1202_object;
		TaskCall(18);
		func_6780(var_1203_object, var_1201_int, var_1202_object);
		TaskReturn();
		return 0;
	}
	var_1260_int = 0; var_1261_object = Obj();
	var_74_object = var_1261_object;
	TaskCall(20);
	func_7039(var_1262_object, var_1260_int, var_1261_object);
	TaskReturn();
	return 0;
}


func_7494(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_7496()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_9037(var_875_bool)
{
	var_877_int = 0; var_878_string = "";
	func_7879(var_877_int, "ood4Alexandr3");
	var_880_bool = var_877_int == (int)0;
	if(var_880_bool != 0) {
		var_875_bool = 1;
		return 0;
	}
	var_875_bool = 0;
	return 0;
}


func_7501(var_71_float, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetPosition(var_76_cvector);
	@@var_72_object:GetPosition(var_77_cvector);
	var_78_cvector = var_77_cvector - var_76_cvector;
	var_71_float = var_78_cvector | var_78_cvector;
	return 6;
}


func_335(var_0_object, var_1_object, var_2_object, var_3_string, var_1011_object, var_1012_object)
{
	var_0_object = var_1012_object;
	var_1_object = var_1011_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1018_bool = 0;
		var_1018_bool = 0;
		var_1019_bool = 0; var_1020_object = Obj();
		var_1020_object = var_1_object;
		func_9145(var_1020_object);
		if(var_1019_bool != 0) {
			var_1025_bool = 0; var_1026_object = Obj();
			var_1026_object = var_1_object;
			func_9157(var_1026_object);
			if(var_1025_bool != 0) {
				var_1018_bool = 1;
			}
		}
		if(var_1018_bool != 0) {
			var_1031_object = Obj(); var_1032_object = Obj();
			var_1031_object = var_1_object;
			var_1032_object = var_0_object;
			func_8630();
			var_1035_string = "";
			func_509(var_1012_object, "Neutral");
			@@@var_0_object:SetMessage((int)512650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510633, (int)13839, (int)11732);
			@@@var_0_object:AddReply((int)510665, (int)11772, (int)11771);
		} else {
				var_1058_string = "";
				func_509(var_1012_object, "Neutral");
				@@@var_0_object:SetMessage((int)511979);
				@@@var_0_object:ClearReplies();
				var_1060_bool = 0;
				var_1060_bool = 0;
				var_1061_bool = 0;
				var_1061_bool = 0;
				var_1062_bool = 0; var_1063_object = Obj();
				var_1063_object = var_1_object;
				func_9169(var_1063_object);
				if(var_1062_bool != 0) {
					var_1068_bool = 0; var_1069_object = Obj();
					var_1069_object = var_1_object;
					func_9085(var_1069_object);
					if(var_1068_bool != 0) {
						var_1061_bool = 1;
					}
				}
				if(var_1061_bool != 0) {
					var_1074_bool = 0; var_1075_object = Obj();
					var_1075_object = var_1_object;
					func_9241(var_1075_object);
					var_1080_bool = var_1074_bool == 0; //@nz
					if(var_1080_bool != 0) {
						var_1060_bool = 1;
					}
				}
				if(var_1060_bool != 0) {
					@@@var_0_object:AddReply((int)512649, (int)13832, (int)13829);
				}
				var_1084_bool = 0;
				var_1084_bool = 0;
				var_1085_bool = 0;
				var_1085_bool = 0;
				var_1086_bool = 0; var_1087_object = Obj();
				var_1087_object = var_1_object;
				func_9181(var_1087_object);
				if(var_1086_bool != 0) {
					var_1092_bool = 0; var_1093_object = Obj();
					var_1093_object = var_1_object;
					func_9085(var_1093_object);
					if(var_1092_bool != 0) {
						var_1085_bool = 1;
					}
				}
				if(var_1085_bool != 0) {
					var_1094_bool = 0; var_1095_object = Obj();
					var_1095_object = var_1_object;
					func_9253(var_1095_object);
					var_1100_bool = var_1094_bool == 0; //@nz
					if(var_1100_bool != 0) {
						var_1084_bool = 1;
					}
				}
				if(var_1084_bool != 0) {
					@@@var_0_object:AddReply((int)512660, (int)13832, (int)13840);
				}
				var_1104_bool = 0;
				var_1104_bool = 0;
				var_1105_bool = 0; var_1106_object = Obj();
				var_1106_object = var_1_object;
				func_9193(var_1106_object);
				if(var_1105_bool != 0) {
					var_1111_bool = 0; var_1112_object = Obj();
					var_1112_object = var_1_object;
					func_9205(var_1112_object);
					if(var_1111_bool != 0) {
						var_1104_bool = 1;
					}
				}
				if(var_1104_bool != 0) {
					@@@var_0_object:AddReply((int)511980, (int)13196, (int)13195);
				}
				@@@var_0_object:AddReply((int)513018, (int)-1, (int)14224);
				@@@var_0_object:AddReply((int)542996, (int)-1, (int)45444);
				goto Label_479;
		}
	}
Label_479:
	var_1050_bool = 0;
	func_8086(var_1050_bool);
	if(var_1050_bool != 0) {

	Label_483:
		lshWaitForAnimEnd();
		var_1051_string = var_3_string;
		if(var_1051_string != 0) {
		} else {
			var_1052_string = "";
			var_1052_string = var_2_object;
			func_7799(var_1052_string);
			goto Label_483;
	}
		PlayAnimation("all", "idle");

	Label_498:
		WaitForAnimEnd();
		var_1055_string = var_3_string;
		if(var_1055_string != 0) {
			goto Label_508;
		}
		PlayAnimation("all", "idle");
		goto Label_498;

	}
	goto Label_508;
	
Label_508:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x153";


func_8015(var_79_float)
{
	var_80_float = 0; var_81_float = 0;
	GetGameTime(var_81_float);
	var_81_float = var_79_float;
	return 2;
}


func_8529(var_229_object)
{
	var_230_object = Obj(); var_231_string = ""; var_232_float = 0;
	func_9475(Obj());
	var_233_object = var_230_object;
	func_9492(var_230_object, "pt_map_warehouse_gangster", (float)2);
	var_234_object = Obj();
	func_9475(var_234_object);
	@@var_229_object:ShowMap(var_234_object);
	return 0;
}


func_8020(var_204_int)
{
	var_205_float = 0; var_206_float = 0;
	GetGameTime(var_206_float);
	var_208_int = 0;
	var_208_int = var_206_float / (int)24;
	var_204_int = (int)1 + var_208_int;
	return 2;
}


func_7509(var_321_bool, var_322_object, var_323_string)
{
	var_324_bool = 0; var_325_bool = 0;
	var_328_bool = IsFuncExist(var_322_object, "HasProperty", (int)2);
	var_329_bool = var_328_bool == 0; //@nz
	if(var_329_bool != 0) {
		var_321_bool = 0;
		return 2;
	}
	@@var_322_object:HasProperty(var_323_string, var_325_bool);
	var_325_bool = var_321_bool;
	return 2;
}


func_9049(var_931_bool)
{
	var_933_int = 0; var_934_string = "";
	func_7879(var_933_int, "d5q01");
	var_936_bool = var_933_int == (int)2;
	if(var_936_bool != 0) {
		var_931_bool = 1;
		return 0;
	}
	var_931_bool = 0;
	return 0;
}


func_8029(var_372_bool, var_373_int)
{
	var_374_int = 0;
	func_8020(var_374_int);
	var_372_bool = var_374_int == var_373_int;
	return 0;
}


func_8545(var_123_object)
{
	Trace("revolver ammo6 is given");
	var_126_object = Obj(); var_127_string = ""; var_128_int = 0;
	var_123_object = var_126_object;
	func_7945(var_126_object, "revolver_ammo", (int)6);
	return 0;
}


func_7521(var_313_bool, var_314_object, var_315_string, var_316_float, var_317_float, var_318_float)
{
	var_319_float = 0; var_320_float = 0;
	var_321_bool = 0; var_322_object = Obj(); var_323_string = "";
	var_314_object = var_322_object;
	var_315_string = var_323_string;
	func_7509(var_321_bool, var_322_object, var_323_string);
	var_330_bool = var_321_bool == 0; //@nz
	if(var_330_bool != 0) {
		var_313_bool = 0;
		return 2;
	}
	@@var_314_object:GetProperty(var_315_string, var_320_float);
	var_331_float = 0; var_332_float = 0; var_333_float = 0; var_334_float = 0;
	var_332_float = var_320_float + var_316_float;
	var_317_float = var_333_float;
	var_318_float = var_334_float;
	func_7868(var_331_float, var_332_float, var_333_float, var_334_float);
	@@var_314_object:SetProperty(var_315_string, var_331_float);
	var_313_bool = 1;
	return 2;
}


func_8035(var_304_bool, var_305_int)
{
	var_306_float = 0; var_307_int = 0; var_308_int = 0; var_309_float = 0; var_310_int = 0; var_311_int = 0;
	GetGameTime(var_309_float);
	var_313_int = 0;
	var_313_int = var_309_float / (int)24;
	var_310_int = (int)1 + var_313_int;
	var_315_bool = var_310_int != var_305_int;
	if(var_315_bool != 0) {
		var_304_bool = 0;
		return 6;
	}
	var_316_int = 0;
	var_309_float = var_316_int;
	var_311_int = var_316_int % (int)24;
	var_304_bool = var_311_int < (int)7;
	return 6;
}


func_9061(var_758_bool)
{
	var_760_int = 0; var_761_string = "";
	func_7879(var_760_int, "ood3Alexandr5");
	var_763_bool = var_760_int == (int)0;
	if(var_763_bool != 0) {
		var_758_bool = 1;
		return 0;
	}
	var_758_bool = 0;
	return 0;
}


func_2920(var_2_object, var_699_string)
{
	var_700_bool = 0;
	func_8086(var_700_bool);
	var_701_bool = var_700_bool == 0; //@nz
	if(var_701_bool != 0) {
		return 0;
	}
	var_702_bool = var_699_string == var_2_object;
	if(var_702_bool != 0) {
		return 0;
	}
	var_703_string = ""; var_704_bool = 0;
	var_699_string = var_703_string;
	var_706_bool = var_699_string == "";
	if(var_706_bool != 0) {
		var_704_bool = 0;
	} else {
		var_704_bool = 1;
	}
	func_7815(var_703_string, var_704_bool);
	var_2_object = var_699_string;
	return 0;
	
}


func_8556()
{
	SetVariable("ood4Alexandr3", (int)1);
	return 0;
}


func_4465(var_0_object, var_1_object, var_2_object, var_3_string, var_915_object, var_916_object)
{
	var_0_object = var_916_object;
	var_1_object = var_915_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_922_string = "";
		func_4566(var_916_object, "Neutral");
		@@@var_0_object:SetMessage((int)511591);
		@@@var_0_object:ClearReplies();
		var_931_bool = 0; var_932_object = Obj();
		var_932_object = var_1_object;
		func_9049(var_932_object);
		if(var_931_bool != 0) {
			@@@var_0_object:AddReply((int)511592, (int)12788, (int)12787);
		}
		var_940_bool = 0;
		var_940_bool = 0;
		var_941_bool = 0; var_942_object = Obj();
		var_942_object = var_1_object;
		func_9097(var_942_object);
		if(var_941_bool != 0) {
			var_947_bool = 0; var_948_object = Obj();
			var_948_object = var_1_object;
			func_9121(var_948_object);
			if(var_947_bool != 0) {
				var_940_bool = 1;
			}
		}
		if(var_940_bool != 0) {
			@@@var_0_object:AddReply((int)511611, (int)12810, (int)12809);
		}
		var_956_bool = 0;
		var_956_bool = 0;
		var_957_bool = 0; var_958_object = Obj();
		var_958_object = var_1_object;
		func_9109(var_958_object);
		if(var_957_bool != 0) {
			var_963_bool = 0; var_964_object = Obj();
			var_964_object = var_1_object;
			func_9133(var_964_object);
			if(var_963_bool != 0) {
				var_956_bool = 1;
			}
		}
		if(var_956_bool != 0) {
			@@@var_0_object:AddReply((int)511624, (int)12823, (int)12822);
		}
		@@@var_0_object:AddReply((int)511635, (int)-1, (int)12834);
		goto Label_4536;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1175";
	}
Label_4536:
	var_975_bool = 0;
	func_8086(var_975_bool);
	if(var_975_bool != 0) {

	Label_4540:
		lshWaitForAnimEnd();
		var_976_string = var_3_string;
		if(var_976_string != 0) {
		} else {
			var_977_string = "";
			var_977_string = var_2_object;
			func_7799(var_977_string);
			goto Label_4540;
	}
		PlayAnimation("all", "idle");

	Label_4555:
		WaitForAnimEnd();
		var_980_string = var_3_string;
		if(var_980_string != 0) {
			goto Label_4565;
		}
		PlayAnimation("all", "idle");
		goto Label_4555;
	}
	goto Label_4565;
	
Label_4565:
	return 0;
	
}


func_8562()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("d5q01", (int)3);
	func_9475(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_8015(var_79_float);
	@@var_65_object:AddMark("d5q01AlexandrGotoKaterina", "pt_map_katerina", (int)1, (int)511958, var_79_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9073(var_415_bool)
{
	var_417_int = 0; var_418_string = "";
	func_7879(var_417_int, "d1q01");
	var_422_bool = var_417_int == (int)3;
	if(var_422_bool != 0) {
		var_415_bool = 1;
		return 0;
	}
	var_415_bool = 0;
	return 0;
}


func_8054(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = "";
	var_85_int = var_82_int;
	if(var_85_int != 0) {
		"idle" = "idle" + var_82_int;
	}
	var_84_string = var_81_string;
	return 2;
}


func_7543(var_250_object, var_251_string, var_252_int)
{
	var_253_int = 0; var_254_int = 0;
	@@var_250_object:GetProperty(var_251_string, var_254_int);
	var_255_int = var_254_int + var_252_int;
	@@var_250_object:SetProperty(var_251_string, var_255_int);
	return 2;
}


func_9085(var_1068_bool)
{
	var_1070_int = 0; var_1071_string = "";
	func_7879(var_1070_int, "d6q02");
	var_1073_bool = var_1070_int == (int)1;
	if(var_1073_bool != 0) {
		var_1068_bool = 1;
		return 0;
	}
	var_1068_bool = 0;
	return 0;
}


func_8061(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0;
	var_78_int = 0;
	
Label_8063:
	var_81_string = ""; var_82_int = 0;
	var_78_int = var_82_int;
	func_8054(var_81_string, var_82_int);
	HasAnimation(var_79_bool, "all", var_81_string);
	var_86_bool = var_79_bool == 0; //@nz
	if(var_86_bool != 0) {
	} else {
		var_78_int = var_78_int + (int)1;
		goto Label_8063;
	}
	var_78_int = var_75_int;
	return 4;
	
}


func_7550(var_64_bool, var_65_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0;
	GetPosition(var_69_cvector);
	var_70_cvector = var_65_cvector - var_69_cvector;
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_72_float, var_73_float, var_71_bool);
	var_71_bool = var_64_bool;
	return 6;
}


func_7039(var_0_object, var_1260_int, var_1261_object)
{
	var_1263_object = Obj(); var_1264_bool = 0; var_1265_int = 0; var_1266_bool = 0; var_1267_object = Obj(); var_1268_bool = 0; var_1269_int = 0; var_1270_bool = 0;
	var_0_object = var_1261_object;
	var_1271_bool = 0; var_1272_object = Obj(); var_1273_float = 0;
	var_1261_object = var_1272_object;
	func_7574(var_1271_bool, var_1272_object, (float)70.0);
	var_1274_bool = var_1271_bool == 0; //@nz
	if(var_1274_bool != 0) {
		var_1260_int = -2;
		return 8;
	}
	CreateDialog(var_1267_object);
	var_1275_int = 0;
	func_8080(var_1275_int);
	@@var_1267_object:SetNPCName(var_1275_int);
	var_1276_int = 0;
	func_8078(var_1276_int);
	@@var_1267_object:SetNPCDescription(var_1276_int);
	var_1277_string = "";
	func_8082(var_1277_string);
	@@var_1267_object:SetPhoto(var_1277_string);
	var_1278_string = "";
	func_8084(var_1278_string);
	@@var_1267_object:SetPhoto2(var_1278_string);
	var_1279_int = 0;
	func_9525(var_1279_int);
	@@var_1267_object:SetPlayerName(var_1279_int);
	IsOverrideActive(var_1268_bool);
	var_1280_bool = var_1268_bool;
	if(var_1280_bool != 0) {
		var_1260_int = -2;
		return 8;
	}
	DoDialog(var_1267_object);
	var_1281_bool = 0; var_1282_object = Obj();
	func_7852(Obj());
	var_1283_object = var_1282_object;
	func_7661(var_1281_bool, var_1282_object);
	var_1284_object = Obj(); var_1285_object = Obj();
	var_1261_object = var_1284_object;
	var_1267_object = var_1285_object;
	TaskCall(21);
	func_7120(var_1286_object, var_1287_object, var_1288_string, var_1289_bool, var_1284_object, var_1285_object);
	TaskReturn();
	@@var_1267_object:IsDialogEnd(var_1270_bool);
	
Label_7102:
	var_1314_bool = var_1270_bool == 0; //@nz
	if(var_1314_bool != 0) {
		sync();
		@@var_1267_object:IsDialogEnd(var_1270_bool);
		goto Label_7102;
	}
	var_1261_object = Obj();
	func_7643();
	StopDialog(var_1267_object);
	@@var_1267_object:GetReturnValue((int)-1);
	var_1269_int = var_1260_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8582()
{
	SetVariable("ood3Alexandr5", (int)1);
	return 0;
}


func_7560(var_60_bool, var_61_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	@@var_61_object:GetPosition(var_63_cvector);
	var_64_bool = 0; var_65_cvector = CVector(0,0,0);
	var_63_cvector = var_65_cvector;
	func_7550(var_64_bool, var_65_cvector);
	var_64_bool = var_60_bool;
	return 2;
}


func_9097(var_941_bool)
{
	var_943_int = 0; var_944_string = "";
	func_7879(var_943_int, "ood5Alexandr1");
	var_946_bool = var_943_int == (int)0;
	if(var_946_bool != 0) {
		var_941_bool = 1;
		return 0;
	}
	var_941_bool = 0;
	return 0;
}


func_1419(var_0_object, var_483_int, var_484_object)
{
	var_486_object = Obj(); var_487_bool = 0; var_488_int = 0; var_489_bool = 0; var_490_object = Obj(); var_491_bool = 0; var_492_int = 0; var_493_bool = 0;
	var_0_object = var_484_object;
	var_494_bool = 0; var_495_object = Obj(); var_496_float = 0;
	var_484_object = var_495_object;
	func_7574(var_494_bool, var_495_object, (float)70.0);
	var_497_bool = var_494_bool == 0; //@nz
	if(var_497_bool != 0) {
		var_483_int = -2;
		return 8;
	}
	CreateDialog(var_490_object);
	var_498_int = 0;
	func_8080(var_498_int);
	@@var_490_object:SetNPCName(var_498_int);
	var_499_int = 0;
	func_8078(var_499_int);
	@@var_490_object:SetNPCDescription(var_499_int);
	var_500_string = "";
	func_8082(var_500_string);
	@@var_490_object:SetPhoto(var_500_string);
	var_501_string = "";
	func_8084(var_501_string);
	@@var_490_object:SetPhoto2(var_501_string);
	var_502_int = 0;
	func_9525(var_502_int);
	@@var_490_object:SetPlayerName(var_502_int);
	IsOverrideActive(var_491_bool);
	var_503_bool = var_491_bool;
	if(var_503_bool != 0) {
		var_483_int = -2;
		return 8;
	}
	DoDialog(var_490_object);
	var_504_bool = 0; var_505_object = Obj();
	func_7852(Obj());
	var_506_object = var_505_object;
	func_7661(var_504_bool, var_505_object);
	var_507_object = Obj(); var_508_object = Obj();
	var_484_object = var_507_object;
	var_490_object = var_508_object;
	TaskCall(5);
	func_1500(var_509_object, var_510_object, var_511_string, var_512_bool, var_507_object, var_508_object);
	TaskReturn();
	@@var_490_object:IsDialogEnd(var_493_bool);
	
Label_1482:
	var_647_bool = var_493_bool == 0; //@nz
	if(var_647_bool != 0) {
		sync();
		@@var_490_object:IsDialogEnd(var_493_bool);
		goto Label_1482;
	}
	var_484_object = Obj();
	func_7643();
	StopDialog(var_490_object);
	@@var_490_object:GetReturnValue((int)-1);
	var_492_int = var_483_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8588()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("d1q01", (int)4);
	func_9475(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_8015(var_79_float);
	@@var_65_object:AddMark("d1q01AlexandrGotoJulia", "pt_map_julia", (int)1, (int)508636, var_79_float);
	func_9265();
	return 2;
}
EMIT "Stack[-1] = 0";


func_8078(var_137_int)
{
	var_137_int = 515528;
	return 0;
}


func_8080(var_136_int)
{
	var_136_int = 502854;
	return 0;
}


func_7569(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0;
	IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
	return 2;
}


func_8082(var_138_string)
{
	var_138_string = "ui/NPC_Alexandr.png";
	return 0;
}


func_8084(var_139_string)
{
	var_139_string = "ui/NPC_Alexandr_b.png";
	return 0;
}


func_9109(var_957_bool)
{
	var_959_int = 0; var_960_string = "";
	func_7879(var_959_int, "ood5Alexandr2");
	var_962_bool = var_959_int == (int)0;
	if(var_962_bool != 0) {
		var_957_bool = 1;
		return 0;
	}
	var_957_bool = 0;
	return 0;
}


func_7574(var_88_bool, var_89_object, var_90_float)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0;
	@@var_89_object:GetPosition(var_101_cvector);
	@@var_89_object:GetEyesHeight(var_100_float);
	var_109_float = GetByIndex(var_101_cvector, 1);
	var_109_float = var_109_float + var_100_float;
	SetByIndex(var_101_cvector, 1) = var_109_float;
	GetPosition(var_102_cvector);
	GetEyesHeight(var_100_float);
	var_110_float = GetByIndex(var_102_cvector, 1);
	var_110_float = var_110_float + var_100_float;
	SetByIndex(var_102_cvector, 1) = var_110_float;
	var_103_cvector = var_101_cvector - var_102_cvector;
	var_111_float = GetByIndex(var_103_cvector, 1);
	SetByIndex(var_103_cvector, 1) = (float)0;
	var_112_int = var_103_cvector | var_103_cvector;
	var_113_float = sqrt(var_112_int);
	var_103_cvector = var_103_cvector / var_113_float;
	var_104_cvector = -var_103_cvector;
	var_114_float = var_103_cvector * var_90_float;
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0);
	var_116_cvector = var_104_cvector ^ CVector(0.0, 1.0, 0.0);
	func_7858(var_115_cvector, var_116_cvector);
	var_124_float = var_115_cvector * (int)25;
	var_125_int = var_114_float + var_124_float;
	var_105_cvector = var_125_int - CVector(0.0, 10.0, 0.0);
	var_106_cvector = var_102_cvector + var_105_cvector;
	IsOverrideActive(var_107_bool);
	var_127_bool = var_107_bool;
	if(var_127_bool != 0) {
		var_88_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_106_cvector, var_104_cvector, (bool)1);
	var_129_float = GetByIndex(var_105_cvector, 0);
	var_130_float = GetByIndex(var_105_cvector, 2);
	Rotate(var_129_float, var_130_float);
	var_131_bool = 0;
	func_8086(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		HasAnimationTrack(var_108_bool, "head");
		var_133_bool = var_108_bool;
		if(var_133_bool == 0) goto Label_7637;
		LookAsyncCamera("head");
	}
Label_7637:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_88_bool = 1;
	return 18;
	
}


func_8086(var_131_bool)
{
	var_131_bool = 1;
	return 0;
}


func_8088(var_172_object)
{
	var_173_object = Obj(); var_174_string = ""; var_175_float = 0;
	func_9475(Obj());
	var_176_object = var_173_object;
	func_9492(var_173_object, "pt_map_katerina", (float)2);
	var_196_object = Obj();
	func_9475(var_196_object);
	@@var_172_object:ShowMap(var_196_object);
	return 0;
}


func_9121(var_947_bool)
{
	var_949_int = 0; var_950_string = "";
	func_7879(var_949_int, "d5q03");
	var_952_bool = var_949_int == (int)1;
	if(var_952_bool != 0) {
		var_947_bool = 1;
		return 0;
	}
	var_947_bool = 0;
	return 0;
}


func_8611()
{
	SetVariable("ood5Alexandr1", (int)1);
	return 0;
}


func_8104()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_8617()
{
	SetVariable("ood5Alexandr2", (int)1);
	return 0;
}


func_9133(var_963_bool)
{
	var_965_int = 0; var_966_string = "";
	func_7879(var_965_int, "d5q03");
	var_968_bool = var_965_int == (int)2;
	if(var_968_bool != 0) {
		var_963_bool = 1;
		return 0;
	}
	var_963_bool = 0;
	return 0;
}


func_8110()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_8623(var_300_object)
{
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0;
	var_300_object = var_303_object;
	func_7958(var_302_bool, var_303_object, (float)0.10000000149011612);
	return 0;
}


func_8116()
{
	SetVariable("ood1Alexandr1", (int)1);
	return 0;
}


func_8630()
{
	SetVariable("ood6Alexandr1", (int)1);
	return 0;
}


func_6584(var_0_object, var_319_int, var_320_object)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_int = 0; var_325_bool = 0; var_326_object = Obj(); var_327_bool = 0; var_328_int = 0; var_329_bool = 0;
	var_0_object = var_320_object;
	var_330_bool = 0; var_331_object = Obj(); var_332_float = 0;
	var_320_object = var_331_object;
	func_7574(var_330_bool, var_331_object, (float)70.0);
	var_333_bool = var_330_bool == 0; //@nz
	if(var_333_bool != 0) {
		var_319_int = -2;
		return 8;
	}
	CreateDialog(var_326_object);
	var_334_int = 0;
	func_8080(var_334_int);
	@@var_326_object:SetNPCName(var_334_int);
	var_335_int = 0;
	func_8078(var_335_int);
	@@var_326_object:SetNPCDescription(var_335_int);
	var_336_string = "";
	func_8082(var_336_string);
	@@var_326_object:SetPhoto(var_336_string);
	var_337_string = "";
	func_8084(var_337_string);
	@@var_326_object:SetPhoto2(var_337_string);
	var_338_int = 0;
	func_9525(var_338_int);
	@@var_326_object:SetPlayerName(var_338_int);
	IsOverrideActive(var_327_bool);
	var_339_bool = var_327_bool;
	if(var_339_bool != 0) {
		var_319_int = -2;
		return 8;
	}
	DoDialog(var_326_object);
	var_340_object = Obj(); var_341_object = Obj();
	var_320_object = var_340_object;
	var_326_object = var_341_object;
	TaskCall(17);
	func_6658(var_342_object, var_343_object, var_344_string, var_345_bool, var_340_object, var_341_object);
	TaskReturn();
	@@var_326_object:IsDialogEnd(var_329_bool);
	
Label_6640:
	var_370_bool = var_329_bool == 0; //@nz
	if(var_370_bool != 0) {
		sync();
		@@var_326_object:IsDialogEnd(var_329_bool);
		goto Label_6640;
	}
	var_320_object = Obj();
	func_7643();
	StopDialog(var_326_object);
	@@var_326_object:GetReturnValue((int)-1);
	var_328_int = var_319_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9145(var_1019_bool)
{
	var_1021_int = 0; var_1022_string = "";
	func_7879(var_1021_int, "d6q01");
	var_1024_bool = var_1021_int == (int)1;
	if(var_1024_bool != 0) {
		var_1019_bool = 1;
		return 0;
	}
	var_1019_bool = 0;
	return 0;
}


func_8122()
{
	SetVariable("d4AlexandrVisit", (int)1);
	return 0;
}


func_8636()
{
	SetVariable("ood6Alexandr2", (int)1);
	return 0;
}


func_8128(var_216_object)
{
	var_217_object = Obj(); var_218_string = ""; var_219_float = 0;
	func_9475(Obj());
	var_220_object = var_217_object;
	func_9492(var_217_object, "pt_d4q03_volnica", (float)2);
	var_221_object = Obj();
	func_9475(var_221_object);
	@@var_216_object:ShowMap(var_221_object);
	return 0;
}


func_8642()
{
	SetVariable("ood6Alexandr3", (int)1);
	return 0;
}


func_9157(var_1025_bool)
{
	var_1027_int = 0; var_1028_string = "";
	func_7879(var_1027_int, "ood6Alexandr1");
	var_1030_bool = var_1027_int == (int)0;
	if(var_1030_bool != 0) {
		var_1025_bool = 1;
		return 0;
	}
	var_1025_bool = 0;
	return 0;
}


func_8648()
{
	SetVariable("ood6Alexandr4", (int)1);
	return 0;
}


func_8654()
{
	var_163_object = Obj(); var_164_object = Obj();
	func_9475(Obj());
	var_165_object = var_164_object;
	var_170_float = 0;
	func_8015(var_170_float);
	@@var_164_object:AddMark("d6q01AlexandrGotoKaterina", "pt_map_katerina", (int)1, (int)515397, var_170_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8144()
{
	func_9330();
	return 0;
}


func_9169(var_1062_bool)
{
	var_1064_int = 0; var_1065_string = "";
	func_7879(var_1064_int, "ood6Alexandr2");
	var_1067_bool = var_1064_int == (int)0;
	if(var_1067_bool != 0) {
		var_1062_bool = 1;
		return 0;
	}
	var_1062_bool = 0;
	return 0;
}


func_7120(var_0_object, var_1_object, var_2_object, var_3_string, var_1284_object, var_1285_object)
{
	var_0_object = var_1285_object;
	var_1_object = var_1284_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1291_string = "";
		func_7178(var_1285_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_7148;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1bd4";
	}
Label_7148:
	var_1306_bool = 0;
	func_8086(var_1306_bool);
	if(var_1306_bool != 0) {

	Label_7152:
		lshWaitForAnimEnd();
		var_1307_string = var_3_string;
		if(var_1307_string != 0) {
		} else {
			var_1308_string = "";
			var_1308_string = var_2_object;
			func_7799(var_1308_string);
			goto Label_7152;
	}
		PlayAnimation("all", "idle");

	Label_7167:
		WaitForAnimEnd();
		var_1311_string = var_3_string;
		if(var_1311_string != 0) {
			goto Label_7177;
		}
		PlayAnimation("all", "idle");
		goto Label_7167;
	}
	goto Label_7177;
	
Label_7177:
	return 0;
	
}


func_8149()
{
	SetVariable("ood1Alexandr2", (int)1);
	return 0;
}


func_4566(var_2_object, var_922_string)
{
	var_923_bool = 0;
	func_8086(var_923_bool);
	var_924_bool = var_923_bool == 0; //@nz
	if(var_924_bool != 0) {
		return 0;
	}
	var_925_bool = var_922_string == var_2_object;
	if(var_925_bool != 0) {
		return 0;
	}
	var_926_string = ""; var_927_bool = 0;
	var_922_string = var_926_string;
	var_929_bool = var_922_string == "";
	if(var_929_bool != 0) {
		var_927_bool = 0;
	} else {
		var_927_bool = 1;
	}
	func_7815(var_926_string, var_927_bool);
	var_2_object = var_922_string;
	return 0;
	
}


func_5591(var_0_object, var_375_int, var_376_object)
{
	var_378_object = Obj(); var_379_bool = 0; var_380_int = 0; var_381_bool = 0; var_382_object = Obj(); var_383_bool = 0; var_384_int = 0; var_385_bool = 0;
	var_0_object = var_376_object;
	var_386_bool = 0; var_387_object = Obj(); var_388_float = 0;
	var_376_object = var_387_object;
	func_7574(var_386_bool, var_387_object, (float)70.0);
	var_389_bool = var_386_bool == 0; //@nz
	if(var_389_bool != 0) {
		var_375_int = -2;
		return 8;
	}
	CreateDialog(var_382_object);
	var_390_int = 0;
	func_8080(var_390_int);
	@@var_382_object:SetNPCName(var_390_int);
	var_391_int = 0;
	func_8078(var_391_int);
	@@var_382_object:SetNPCDescription(var_391_int);
	var_392_string = "";
	func_8082(var_392_string);
	@@var_382_object:SetPhoto(var_392_string);
	var_393_string = "";
	func_8084(var_393_string);
	@@var_382_object:SetPhoto2(var_393_string);
	var_394_int = 0;
	func_9525(var_394_int);
	@@var_382_object:SetPlayerName(var_394_int);
	IsOverrideActive(var_383_bool);
	var_395_bool = var_383_bool;
	if(var_395_bool != 0) {
		var_375_int = -2;
		return 8;
	}
	DoDialog(var_382_object);
	var_396_bool = 0; var_397_object = Obj();
	func_7852(Obj());
	var_398_object = var_397_object;
	func_7661(var_396_bool, var_397_object);
	var_399_object = Obj(); var_400_object = Obj();
	var_376_object = var_399_object;
	var_382_object = var_400_object;
	TaskCall(15);
	func_5672(var_401_object, var_402_object, var_403_string, var_404_bool, var_399_object, var_400_object);
	TaskReturn();
	@@var_382_object:IsDialogEnd(var_385_bool);
	
Label_5654:
	var_479_bool = var_385_bool == 0; //@nz
	if(var_479_bool != 0) {
		sync();
		@@var_382_object:IsDialogEnd(var_385_bool);
		goto Label_5654;
	}
	var_376_object = Obj();
	func_7643();
	StopDialog(var_382_object);
	@@var_382_object:GetReturnValue((int)-1);
	var_384_int = var_375_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7643()
{
	var_296_bool = 0; var_297_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_299_bool = 0;
	func_8086(var_299_bool);
	if(var_299_bool != 0) {
	} else {
		HasAnimationTrack(var_297_bool, "head");
		var_301_bool = var_297_bool;
		if(var_301_bool == 0) goto Label_7660;
		UnlookAsync("head");
	}
Label_7660:
	return 2;
	
}


func_1500(var_0_object, var_1_object, var_2_object, var_3_string, var_507_object, var_508_object)
{
	var_0_object = var_508_object;
	var_1_object = var_507_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_514_bool = 0; var_515_object = Obj();
		var_515_object = var_1_object;
		func_8792(var_515_object);
		if(var_514_bool != 0) {
			var_520_object = Obj(); var_521_object = Obj();
			var_520_object = var_1_object;
			var_521_object = var_0_object;
			func_8719();
			var_524_string = "";
			func_1732(var_508_object, "Neutral");
			@@@var_0_object:SetMessage((int)506610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506611, (int)7748, (int)7280);
			@@@var_0_object:AddReply((int)507066, (int)7748, (int)7784);
		} else {
				var_547_bool = 0;
				var_547_bool = 0;
				var_548_bool = 0;
				var_548_bool = 0;
				var_549_bool = 0; var_550_object = Obj();
				var_550_object = var_1_object;
				func_8804(var_550_object);
				if(var_549_bool != 0) {
					var_555_bool = 0; var_556_object = Obj();
					var_556_object = var_1_object;
					func_8864(var_556_object);
					if(var_555_bool != 0) {
						var_548_bool = 1;
					}
				}
				if(var_548_bool != 0) {
					var_557_bool = 0; var_558_object = Obj();
					var_558_object = var_1_object;
					func_8869(var_558_object);
					if(var_557_bool != 0) {
						var_547_bool = 1;
					}
				}
				if(var_547_bool != 0) {
					var_563_object = Obj(); var_564_object = Obj();
					var_563_object = var_1_object;
					var_564_object = var_0_object;
					func_8161();
					var_567_string = "";
					func_1732(var_508_object, "Neutral");
					@@@var_0_object:SetMessage((int)506731);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)506732, (int)7420, (int)7419);
					@@@var_0_object:AddReply((int)506742, (int)7420, (int)7430);
					@@@var_0_object:AddReply((int)506743, (int)7433, (int)7432);
					goto Label_1702;
				}
				var_578_string = "";
				func_1732(var_508_object, "Neutral");
				@@@var_0_object:SetMessage((int)506614);
				@@@var_0_object:ClearReplies();
				var_580_bool = 0;
				var_580_bool = 0;
				var_581_bool = 0; var_582_object = Obj();
				var_582_object = var_1_object;
				func_8816(var_582_object);
				if(var_581_bool != 0) {
					var_587_bool = 0; var_588_object = Obj();
					var_588_object = var_1_object;
					func_8852(var_588_object);
					if(var_587_bool != 0) {
						var_580_bool = 1;
					}
				}
				if(var_580_bool != 0) {
					@@@var_0_object:AddReply((int)506615, (int)7282, (int)7284);
				}
				var_596_bool = 0;
				var_596_bool = 1;
				var_597_bool = 0;
				var_597_bool = 0;
				var_598_bool = 0;
				var_598_bool = 0;
				var_599_bool = 0; var_600_object = Obj();
				var_600_object = var_1_object;
				func_8893(var_600_object);
				if(var_599_bool != 0) {
					var_605_bool = 0; var_606_object = Obj();
					var_606_object = var_1_object;
					func_8816(var_606_object);
					if(var_605_bool != 0) {
						var_598_bool = 1;
					}
				}
				if(var_598_bool != 0) {
					var_607_bool = 0; var_608_object = Obj();
					var_608_object = var_1_object;
					func_8852(var_608_object);
					var_609_bool = var_607_bool == 0; //@nz
					if(var_609_bool != 0) {
						var_597_bool = 1;
					}
				}
				if(var_597_bool != 1) {
					var_610_bool = 0;
					var_610_bool = 0;
					var_611_bool = 0;
					var_611_bool = 0;
					var_612_bool = 0; var_613_object = Obj();
					var_613_object = var_1_object;
					func_8881(var_613_object);
					if(var_612_bool != 0) {
						var_618_bool = 0; var_619_object = Obj();
						var_619_object = var_1_object;
						func_8816(var_619_object);
						if(var_618_bool != 0) {
							var_611_bool = 1;
						}
					}
					if(var_611_bool != 0) {
						var_620_bool = 0; var_621_object = Obj();
						var_621_object = var_1_object;
						func_8852(var_621_object);
						var_622_bool = var_620_bool == 0; //@nz
						if(var_622_bool != 0) {
							var_610_bool = 1;
						}
					}
					if(var_610_bool != 1) {
						var_596_bool = 0;
					}
				}
				if(var_596_bool != 0) {
					@@@var_0_object:AddReply((int)507071, (int)7282, (int)7794);
				}
				var_626_bool = 0; var_627_object = Obj();
				var_627_object = var_1_object;
				func_8840(var_627_object);
				if(var_626_bool != 0) {
					@@@var_0_object:AddReply((int)506618, (int)7800, (int)7287);
				}
				var_635_bool = 0; var_636_object = Obj();
				var_636_object = var_1_object;
				func_8828(var_636_object);
				if(var_635_bool != 0) {
					@@@var_0_object:AddReply((int)506730, (int)7405, (int)7417);
				}
				@@@var_0_object:AddReply((int)507532, (int)-1, (int)8314);
				goto Label_1702;
		}
	}
Label_1702:
	var_539_bool = 0;
	func_8086(var_539_bool);
	if(var_539_bool != 0) {

	Label_1706:
		lshWaitForAnimEnd();
		var_540_string = var_3_string;
		if(var_540_string != 0) {
		} else {
			var_541_string = "";
			var_541_string = var_2_object;
			func_7799(var_541_string);
			goto Label_1706;
	}
		PlayAnimation("all", "idle");

	Label_1721:
		WaitForAnimEnd();
		var_544_string = var_3_string;
		if(var_544_string != 0) {
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
EMIT "GOTO 0x5e0";


func_9181(var_1086_bool)
{
	var_1088_int = 0; var_1089_string = "";
	func_7879(var_1088_int, "ood6Alexandr3");
	var_1091_bool = var_1088_int == (int)0;
	if(var_1091_bool != 0) {
		var_1086_bool = 1;
		return 0;
	}
	var_1086_bool = 0;
	return 0;
}


func_8155()
{
	SetVariable("ood2Alexandr1", (int)1);
	return 0;
}


func_8670()
{
	SetVariable("ood7Alexandr1", (int)1);
	return 0;
}


func_8161()
{
	SetVariable("ood2Alexandr2", (int)1);
	return 0;
}


func_8676()
{
	SetVariable("KnowAlexandr", (int)1);
	return 0;
}


func_8167()
{
	SetVariable("ood2Alexandr3", (int)1);
	return 0;
}


func_9193(var_1105_bool)
{
	var_1107_int = 0; var_1108_string = "";
	func_7879(var_1107_int, "d6q01KnowKillerIsKlara");
	var_1110_bool = var_1107_int == (int)1;
	if(var_1110_bool != 0) {
		var_1105_bool = 1;
		return 0;
	}
	var_1105_bool = 0;
	return 0;
}


func_8682()
{
	var_64_object = Obj(); var_65_object = Obj();
	func_9475(Obj());
	var_66_object = var_65_object;
	var_77_float = 0;
	func_8015(var_77_float);
	@@var_65_object:AddMark("d6q01AlexandrGotoJulia", "pt_map_julia", (int)1, (int)515387, var_77_float);
	var_84_float = 0;
	func_8015(var_84_float);
	@@var_65_object:AddMark("d6q01AlexandrGotoLara", "pt_map_lara", (int)1, (int)515386, var_84_float);
	var_89_float = 0;
	func_8015(var_89_float);
	@@var_65_object:AddMark("d6q01AlexangrGotoJulLaraSelf", "pt_map_alexandr", (int)1, (int)515388, var_89_float);
	func_9408();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7661(var_149_bool, var_150_object)
{
	var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0;
	GetVariable("voice_common", var_156_int);
	var_159_int = var_156_int;
	if(var_159_int != 0) {
		var_160_bool = 0; var_161_object = Obj();
		var_150_object = var_161_object;
		func_7719(var_160_bool, var_161_object);
		var_190_bool = var_160_bool == 0; //@nz
		if(var_190_bool != 0) {
			var_191_bool = 0; var_192_object = Obj();
			var_150_object = var_192_object;
			func_7756(var_191_bool, var_192_object);
			var_226_bool = var_191_bool == 0; //@nz
			if(var_226_bool != 0) {
				var_149_bool = 0;
				return 4;
			}
		}
		irand(var_157_int, (int)2);
		var_228_int = var_157_int;
		if(var_228_int != 0) {
			var_231_int = var_156_int + (int)1;
			var_233_int = var_231_int % (int)3;
			SetVariable("voice_common", var_233_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_236_bool = 0; var_237_object = Obj();
		var_150_object = var_237_object;
		func_7756(var_236_bool, var_237_object);
		var_238_bool = var_236_bool == 0; //@nz
		if(var_238_bool != 0) {
			var_239_bool = 0; var_240_object = Obj();
			var_150_object = var_240_object;
			func_7719(var_239_bool, var_240_object);
			var_241_bool = var_239_bool == 0; //@nz
			if(var_241_bool != 0) {
				var_149_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_7717;
	
Label_7717:
	var_149_bool = 1;
	return 4;
	
}


func_8173()
{
	SetVariable("ood2Alexandr5", (int)1);
	return 0;
}


func_8179(var_181_object)
{
	var_183_object = Obj(); var_184_object = Obj();
	Trace("Revolver is given");
	CreateInvItem(var_184_object);
	@@var_184_object:SetItemName("Revolver");
	@@var_184_object:SetProperty("durability", (int)30);
	var_189_object = Obj(); var_190_object = Obj(); var_191_int = 0;
	var_181_object = var_189_object;
	var_184_object = var_190_object;
	func_7926(var_189_object, var_190_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9205(var_1111_bool)
{
	var_1113_int = 0; var_1114_string = "";
	func_7879(var_1113_int, "ood6Alexandr4");
	var_1116_bool = var_1113_int == (int)0;
	if(var_1116_bool != 0) {
		var_1111_bool = 1;
		return 0;
	}
	var_1111_bool = 0;
	return 0;
}


func_5113(var_0_object, var_1130_int, var_1131_object)
{
	var_1133_object = Obj(); var_1134_bool = 0; var_1135_int = 0; var_1136_bool = 0; var_1137_object = Obj(); var_1138_bool = 0; var_1139_int = 0; var_1140_bool = 0;
	var_0_object = var_1131_object;
	var_1141_bool = 0; var_1142_object = Obj(); var_1143_float = 0;
	var_1131_object = var_1142_object;
	func_7574(var_1141_bool, var_1142_object, (float)70.0);
	var_1144_bool = var_1141_bool == 0; //@nz
	if(var_1144_bool != 0) {
		var_1130_int = -2;
		return 8;
	}
	CreateDialog(var_1137_object);
	var_1145_int = 0;
	func_8080(var_1145_int);
	@@var_1137_object:SetNPCName(var_1145_int);
	var_1146_int = 0;
	func_8078(var_1146_int);
	@@var_1137_object:SetNPCDescription(var_1146_int);
	var_1147_string = "";
	func_8082(var_1147_string);
	@@var_1137_object:SetPhoto(var_1147_string);
	var_1148_string = "";
	func_8084(var_1148_string);
	@@var_1137_object:SetPhoto2(var_1148_string);
	var_1149_int = 0;
	func_9525(var_1149_int);
	@@var_1137_object:SetPlayerName(var_1149_int);
	IsOverrideActive(var_1138_bool);
	var_1150_bool = var_1138_bool;
	if(var_1150_bool != 0) {
		var_1130_int = -2;
		return 8;
	}
	DoDialog(var_1137_object);
	var_1151_bool = 0; var_1152_object = Obj();
	func_7852(Obj());
	var_1153_object = var_1152_object;
	func_7661(var_1151_bool, var_1152_object);
	var_1154_object = Obj(); var_1155_object = Obj();
	var_1131_object = var_1154_object;
	var_1137_object = var_1155_object;
	TaskCall(13);
	func_5194(var_1156_object, var_1157_object, var_1158_string, var_1159_bool, var_1154_object, var_1155_object);
	TaskReturn();
	@@var_1137_object:IsDialogEnd(var_1140_bool);
	
Label_5176:
	var_1197_bool = var_1140_bool == 0; //@nz
	if(var_1197_bool != 0) {
		sync();
		@@var_1137_object:IsDialogEnd(var_1140_bool);
		goto Label_5176;
	}
	var_1131_object = Obj();
	func_7643();
	StopDialog(var_1137_object);
	@@var_1137_object:GetReturnValue((int)-1);
	var_1139_int = var_1130_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_509(var_2_object, var_1035_string)
{
	var_1036_bool = 0;
	func_8086(var_1036_bool);
	var_1037_bool = var_1036_bool == 0; //@nz
	if(var_1037_bool != 0) {
		return 0;
	}
	var_1038_bool = var_1035_string == var_2_object;
	if(var_1038_bool != 0) {
		return 0;
	}
	var_1039_string = ""; var_1040_bool = 0;
	var_1035_string = var_1039_string;
	var_1042_bool = var_1035_string == "";
	if(var_1042_bool != 0) {
		var_1040_bool = 0;
	} else {
		var_1040_bool = 1;
	}
	func_7815(var_1039_string, var_1040_bool);
	var_2_object = var_1035_string;
	return 0;
	
}


