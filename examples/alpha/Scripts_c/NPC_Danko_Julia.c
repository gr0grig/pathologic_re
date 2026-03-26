// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Julia.png|W:ood1Julia1|W:ood1Julia2|W:ood1Julia3|W:money1000 is given|W:money|W:playsound|W:givemoney|W:giveitem|W:ood2Julia1|W:KnowBurahDead|W:ood1Julia4|W:ood1Julia5|W:ood1Julia6|W:ood1Julia7|W:ood1Julia8|W:ood1Julia9|W:d1q01KnowEpidemic|W:ood1Julia10|W:KnowJulia|W:KnowRubin|W:ood4Julia1|W:d4q02JuliaGivesMedcine|W:d4q02AnnaGivesMedcine|W:d4q02LaraGivesMedcine|W:d4q02|W:d4q02BirdmaskNearHome|W:pt_d4q02_birdmask|A:AddMark|W:quest_d4_02|A:ShowMap|W:ood4Julia2|W:KnowMistresses|W:ood6Julia1|W:ood6Julia2|W:julia blood is given|W:d6q01_julia_blood|W:d6q01JuliaVolonteer|W:d6q01AlexandrGotoJulia|A:FindMark|A:Remove|W:d6q01AlexandrGotoKaterina|W:d6q01AlexandrGotoLara|W:d6q01AlexangrGotoJulLaraSelf|W:d6q01BigVladGotoAnna|W:d6q01BigVladGotoAnnaOspinaSelf|W:d6q01BigVladGotoOspina|W:d6q01KaterinaGotoLaska|W:d6q01KaterinagotoLaskaSelf|W:d6q01KillerIsKlara|W:d6q01LaskaGotoAlbinos|W:d6q01ViktorGotoAlexandr|W:d6q01ViktorGotoAlxBigSelf|W:d6q01ViktorGotoBigVlad|W:quest_d6_01|W:completed|W:feromicin is given|W:feromicin|W:ood3Julia1|W:neomicin is given|W:neomicin|W:monomicin is given|W:monomicin|W:d1q01|W:d1q01FirstGeorgVisit|W:KnowDiamAce|W:d2q03|W:KnowViktor|W:d4q01|W:KnowMark|W:d6q01|W:d5q01|W:microscope_d6q01_julia_blood|W:KnowAnna|W:KnowEva|W:KnowLara|W:KnowMyth|W:KnowPredictions|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0x232 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6a1 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdd6 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1037 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1190 vars=int,int
// @PE: 0x23,0x29,0x70,0xb4,0xc4,0x1a0,0x222,0x232,0x539,0x691,0x6a1,0xd51,0xdc6,0xdd6,0xfcf,0x1027,0x1037,0x111a,0x1180,0x1190,0x1379,0x13e1,0x13f6,0x13fc,0x1402,0x1408,0x1413,0x1419,0x141f,0x1425,0x142b,0x1431,0x1437,0x143d,0x1443,0x1449,0x144f,0x1458,0x145e,0x1464,0x146a,0x1470,0x14ba,0x14c0,0x14c6,0x14cc,0x14d2,0x14e0,0x1574,0x1576,0x1581,0x1587,0x1592,0x159d,0x15a9,0x15b5,0x15c1,0x15cd,0x15d9,0x15e5,0x15f1,0x15fd,0x1609,0x1615,0x1621,0x162d,0x1639,0x1645,0x1651,0x165d,0x1669,0x1675,0x1681,0x168b,0x1697,0x16a3,0x16af,0x16bb,0x16c7,0x16d3,0x16df,0x16eb,0x16f7,0x1703,0x170f,0x171b,0x1720,0x172c,0x1738,0x1744,0x1750,0x175c,0x1768,0x1774,0x1780,0x183d

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
	func_6205(var_31_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_bool = var_32_object;
	func_4912(var_31_bool, var_32_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_5007();
		var_35_bool = var_30_string == (int)379;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5214();
			var_40_string = "";
			func_180(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)326, (int)383, (int)380);
			@@@var_0_object:AddReply((int)327, (int)383, (int)381);
			@@@var_0_object:AddReply((int)328, (int)393, (int)382);
			return 0;
		}
		var_66_bool = var_30_string == (int)393;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_180(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)338);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)339, (int)396, (int)394);
			return 0;
		}
		var_73_bool = var_30_string == (int)396;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_180(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)341);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)343, (int)-1, (int)398);
			@@@var_0_object:AddReply((int)344, (int)-1, (int)399);
			return 0;
		}
		var_83_bool = var_30_string == (int)383;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_180(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)329);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)330, (int)386, (int)385);
			@@@var_0_object:AddReply((int)334, (int)390, (int)389);
			return 0;
		}
		var_93_bool = var_30_string == (int)390;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_180(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)336, (int)-1, (int)391);
			@@@var_0_object:AddReply((int)337, (int)-1, (int)392);
			return 0;
		}
		var_103_bool = var_30_string == (int)386;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_180(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)331);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)333, (int)-1, (int)388);
			return 0;
		}
		var_3_string = true;
		var_109_bool = 0;
		func_5108(var_109_bool);
		if(var_109_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_5007();
		var_35_bool = var_31_bool == (int)3943;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5318();
		}
		var_41_bool = var_31_bool == (int)3953;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5318();
		}
		var_45_bool = var_31_bool == (int)13927;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_5324();
		}
		var_51_bool = var_31_bool == (int)11813;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5330(var_53_object);
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_5344();
		}
		var_101_bool = var_31_bool == (int)11839;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_5324();
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_5330(var_105_object);
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_5344();
		}
		var_109_bool = var_31_bool == (int)13928;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_5492();
		}
		var_113_bool = var_31_bool == (int)11853;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_5350();
		}
		var_191_bool = var_31_bool == (int)11854;
		if(var_191_bool != 0) {
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_5350();
		}
		var_195_bool = var_30_string == (int)3942;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3640);
			@@@var_0_object:ClearReplies();
			var_212_bool = 0;
			var_212_bool = 0;
			var_213_bool = 0; var_214_object = Obj();
			var_214_object = var_1_object;
			func_5867(var_214_object);
			if(var_213_bool != 0) {
				var_221_bool = 0; var_222_object = Obj();
				var_222_object = var_1_object;
				func_5879(var_222_object);
				if(var_221_bool != 0) {
					var_212_bool = 1;
				}
			}
			if(var_212_bool != 0) {
				@@@var_0_object:AddReply((int)3641, (int)3945, (int)3943);
			}
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_5855(var_232_object);
			if(var_231_bool != 0) {
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_5891(var_238_object);
				if(var_237_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)12733, (int)11803, (int)13927);
			}
			var_246_bool = 0;
			var_246_bool = 0;
			var_247_bool = 0;
			var_247_bool = 0;
			var_248_bool = 0;
			var_248_bool = 0;
			var_249_bool = 0; var_250_object = Obj();
			var_250_object = var_1_object;
			func_5903(var_250_object);
			if(var_249_bool != 0) {
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_object;
				func_5915(var_256_object);
				if(var_255_bool != 0) {
					var_248_bool = 1;
				}
			}
			if(var_248_bool != 0) {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_5920(var_258_object);
				var_263_bool = var_257_bool == 0; //@nz
				if(var_263_bool != 0) {
					var_247_bool = 1;
				}
			}
			if(var_247_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_5932(var_265_object);
				var_270_bool = var_264_bool == 0; //@nz
				if(var_270_bool != 0) {
					var_246_bool = 1;
				}
			}
			if(var_246_bool != 0) {
				@@@var_0_object:AddReply((int)12734, (int)11840, (int)13928);
			}
			@@@var_0_object:AddReply((int)3642, (int)-1, (int)3944);
			return 0;
		}
		var_278_bool = var_30_string == (int)11840;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10719);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10720, (int)11842, (int)11841);
			return 0;
		}
		var_285_bool = var_30_string == (int)11842;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10721);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10722, (int)11844, (int)11843);
			@@@var_0_object:AddReply((int)10733, (int)11844, (int)11855);
			@@@var_0_object:AddReply((int)10734, (int)11858, (int)11857);
			return 0;
		}
		var_298_bool = var_30_string == (int)11858;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10735);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10736, (int)11844, (int)11859);
			@@@var_0_object:AddReply((int)10737, (int)11844, (int)11861);
			return 0;
		}
		var_308_bool = var_30_string == (int)11844;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10724, (int)11846, (int)11845);
			@@@var_0_object:AddReply((int)10728, (int)11846, (int)11849);
			@@@var_0_object:AddReply((int)10729, (int)11852, (int)11851);
			return 0;
		}
		var_321_bool = var_30_string == (int)11852;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10730);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10731, (int)-1, (int)11853);
			@@@var_0_object:AddReply((int)10732, (int)-1, (int)11854);
			return 0;
		}
		var_331_bool = var_30_string == (int)11846;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10725);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10726, (int)-1, (int)11847);
			@@@var_0_object:AddReply((int)10727, (int)-1, (int)11848);
			return 0;
		}
		var_341_bool = var_30_string == (int)11803;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10689);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10690, (int)11805, (int)11804);
			@@@var_0_object:AddReply((int)10715, (int)11807, (int)11835);
			@@@var_0_object:AddReply((int)10716, (int)11838, (int)11837);
			return 0;
		}
		var_354_bool = var_30_string == (int)11838;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10717);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10718, (int)-1, (int)11839);
			return 0;
		}
		var_361_bool = var_30_string == (int)11805;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10691);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10692, (int)11807, (int)11806);
			@@@var_0_object:AddReply((int)10711, (int)11830, (int)11829);
			return 0;
		}
		var_371_bool = var_30_string == (int)11830;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10712);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10713, (int)11807, (int)11831);
			@@@var_0_object:AddReply((int)10714, (int)11807, (int)11833);
			return 0;
		}
		var_381_bool = var_30_string == (int)11807;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10693);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10694, (int)11809, (int)11808);
			@@@var_0_object:AddReply((int)10701, (int)11809, (int)11816);
			@@@var_0_object:AddReply((int)10702, (int)11818, (int)11817);
			return 0;
		}
		var_394_bool = var_30_string == (int)11818;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10704, (int)11820, (int)11819);
			@@@var_0_object:AddReply((int)10710, (int)11820, (int)11827);
			return 0;
		}
		var_404_bool = var_30_string == (int)11820;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10706, (int)11822, (int)11821);
			@@@var_0_object:AddReply((int)10709, (int)11809, (int)11825);
			return 0;
		}
		var_414_bool = var_30_string == (int)11822;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10708, (int)11809, (int)11823);
			return 0;
		}
		var_421_bool = var_30_string == (int)11809;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10695);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10696, (int)11811, (int)11810);
			@@@var_0_object:AddReply((int)10700, (int)11811, (int)11814);
			return 0;
		}
		var_431_bool = var_30_string == (int)11811;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10697);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10698, (int)-1, (int)11812);
			@@@var_0_object:AddReply((int)10699, (int)-1, (int)11813);
			return 0;
		}
		var_441_bool = var_30_string == (int)3945;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3644, (int)3948, (int)3946);
			@@@var_0_object:AddReply((int)3645, (int)3951, (int)3947);
			return 0;
		}
		var_451_bool = var_30_string == (int)3951;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3649, (int)3954, (int)3952);
			@@@var_0_object:AddReply((int)3650, (int)-1, (int)3953);
			return 0;
		}
		var_461_bool = var_30_string == (int)3954;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3654, (int)3958, (int)3957);
			return 0;
		}
		var_468_bool = var_30_string == (int)3958;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3655);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3656, (int)3948, (int)3959);
			return 0;
		}
		var_475_bool = var_30_string == (int)3948;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3647, (int)3955, (int)3950);
			@@@var_0_object:AddReply((int)3657, (int)3955, (int)3961);
			return 0;
		}
		var_485_bool = var_30_string == (int)3955;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3653, (int)3963, (int)3956);
			return 0;
		}
		var_492_bool = var_30_string == (int)3963;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_546(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3659, (int)-1, (int)3964);
			@@@var_0_object:AddReply((int)3660, (int)-1, (int)3965);
			return 0;
		}
		var_3_string = true;
		var_501_bool = 0;
		func_5108(var_501_bool);
		if(var_501_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x233";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_5007();
		var_35_bool = var_31_bool == (int)6875;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5110();
		}
		var_41_bool = var_31_bool == (int)6876;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5110();
		}
		var_45_bool = var_31_bool == (int)9490;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_5208();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_5199();
		}
		var_80_bool = var_31_bool == (int)9481;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_5208();
		}
		var_84_bool = var_31_bool == (int)9482;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_5208();
		}
		var_88_bool = var_31_bool == (int)8635;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_5116();
		}
		var_94_bool = var_31_bool == (int)8661;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_5122();
		}
		var_100_bool = var_31_bool == (int)8662;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_5122();
		}
		var_104_bool = var_31_bool == (int)8675;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_5163();
		}
		var_110_bool = var_31_bool == (int)8676;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_5163();
		}
		var_114_bool = var_31_bool == (int)8697;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_5169();
		}
		var_120_bool = var_31_bool == (int)8706;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_5175();
		}
		var_126_bool = var_31_bool == (int)8709;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_5175();
		}
		var_130_bool = var_31_bool == (int)8717;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_5181();
		}
		var_136_bool = var_31_bool == (int)8731;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_5187();
		}
		var_142_bool = var_31_bool == (int)8732;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_5187();
		}
		var_146_bool = var_31_bool == (int)8745;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_5193();
		}
		var_152_bool = var_30_string == (int)5922;
		if(var_152_bool != 0) {
			var_153_bool = 0;
			var_153_bool = 0;
			var_154_bool = 0;
			var_154_bool = 0;
			var_155_bool = 0;
			var_155_bool = 0;
			var_156_bool = 0;
			var_156_bool = 0;
			var_157_bool = 0; var_158_object = Obj();
			var_158_object = var_1_object;
			func_5533(var_158_object);
			if(var_157_bool != 0) {
				var_165_bool = 0; var_166_object = Obj();
				var_166_object = var_1_object;
				func_5581(var_166_object);
				var_171_bool = var_165_bool == 0; //@nz
				if(var_171_bool != 0) {
					var_156_bool = 1;
				}
			}
			if(var_156_bool != 0) {
				var_172_bool = 0; var_173_object = Obj();
				var_173_object = var_1_object;
				func_5569(var_173_object);
				var_178_bool = var_172_bool == 0; //@nz
				if(var_178_bool != 0) {
					var_155_bool = 1;
				}
			}
			if(var_155_bool != 0) {
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_object;
				func_5725(var_180_object);
				if(var_179_bool != 0) {
					var_154_bool = 1;
				}
			}
			if(var_154_bool != 0) {
				var_185_bool = 0; var_186_object = Obj();
				var_186_object = var_1_object;
				func_5737(var_186_object);
				var_191_bool = var_185_bool == 0; //@nz
				if(var_191_bool != 0) {
					var_153_bool = 1;
				}
			}
			if(var_153_bool != 0) {
				var_192_object = Obj(); var_193_object = Obj();
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_5220();
				var_196_string = "";
				func_1681(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5377);
				@@@var_0_object:ClearReplies();
				var_212_bool = 0; var_213_object = Obj();
				var_213_object = var_1_object;
				func_5749(var_213_object);
				var_218_bool = var_212_bool == 0; //@nz
				if(var_218_bool != 0) {
					@@@var_0_object:AddReply((int)5379, (int)5964, (int)5924);
				}
				var_222_bool = 0; var_223_object = Obj();
				var_223_object = var_1_object;
				func_5749(var_223_object);
				if(var_222_bool != 0) {
					@@@var_0_object:AddReply((int)5380, (int)6864, (int)5925);
				}
				return 0;
			}
			var_227_bool = 0;
			var_227_bool = 0;
			var_228_bool = 0;
			var_228_bool = 0;
			var_229_bool = 0;
			var_229_bool = 0;
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_5725(var_231_object);
			var_232_bool = var_230_bool == 0; //@nz
			if(var_232_bool != 0) {
				var_233_bool = 0; var_234_object = Obj();
				var_234_object = var_1_object;
				func_5737(var_234_object);
				if(var_233_bool != 0) {
					var_229_bool = 1;
				}
			}
			if(var_229_bool != 0) {
				var_235_bool = 0; var_236_object = Obj();
				var_236_object = var_1_object;
				func_5581(var_236_object);
				var_237_bool = var_235_bool == 0; //@nz
				if(var_237_bool != 0) {
					var_228_bool = 1;
				}
			}
			if(var_228_bool != 0) {
				var_238_bool = 0; var_239_object = Obj();
				var_239_object = var_1_object;
				func_5569(var_239_object);
				var_240_bool = var_238_bool == 0; //@nz
				if(var_240_bool != 0) {
					var_227_bool = 1;
				}
			}
			if(var_227_bool != 0) {
				var_241_string = "";
				func_1681(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)8650);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)8651, (int)9477, (int)9476);
				return 0;
			}
			var_246_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7779);
			@@@var_0_object:ClearReplies();
			var_248_bool = 0;
			var_248_bool = 0;
			var_249_bool = 0; var_250_object = Obj();
			var_250_object = var_1_object;
			func_5545(var_250_object);
			if(var_249_bool != 0) {
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_object;
				func_5593(var_256_object);
				if(var_255_bool != 0) {
					var_248_bool = 1;
				}
			}
			if(var_248_bool != 0) {
				@@@var_0_object:AddReply((int)7815, (int)8618, (int)8617);
			}
			var_264_bool = 0;
			var_264_bool = 0;
			var_265_bool = 0; var_266_object = Obj();
			var_266_object = var_1_object;
			func_5992(var_266_object);
			if(var_265_bool != 0) {
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_5557(var_272_object);
				if(var_271_bool != 0) {
					var_264_bool = 1;
				}
			}
			if(var_264_bool != 0) {
				@@@var_0_object:AddReply((int)7783, (int)8607, (int)8584);
			}
			var_280_bool = 0;
			var_280_bool = 0;
			var_281_bool = 0;
			var_281_bool = 0;
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_1_object;
			func_6004(var_283_object);
			if(var_282_bool != 0) {
				var_288_bool = 0; var_289_object = Obj();
				var_289_object = var_1_object;
				func_5761(var_288_bool, var_289_object);
				if(var_288_bool != 0) {
					var_281_bool = 1;
				}
			}
			if(var_281_bool != 0) {
				var_299_bool = 0; var_300_object = Obj();
				var_300_object = var_1_object;
				func_5641(var_300_object);
				if(var_299_bool != 0) {
					var_280_bool = 1;
				}
			}
			if(var_280_bool != 0) {
				@@@var_0_object:AddReply((int)7784, (int)8608, (int)8585);
			}
			var_308_bool = 0;
			var_308_bool = 0;
			var_309_bool = 0; var_310_object = Obj();
			var_310_object = var_1_object;
			func_5653(var_310_object);
			if(var_309_bool != 0) {
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_5956(var_316_object);
				if(var_315_bool != 0) {
					var_308_bool = 1;
				}
			}
			if(var_308_bool != 0) {
				@@@var_0_object:AddReply((int)7785, (int)8687, (int)8586);
			}
			var_324_bool = 0;
			var_324_bool = 0;
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_5968(var_326_object);
			if(var_325_bool != 0) {
				var_331_bool = 0; var_332_object = Obj();
				var_332_object = var_1_object;
				func_5665(var_332_object);
				if(var_331_bool != 0) {
					var_324_bool = 1;
				}
			}
			if(var_324_bool != 0) {
				@@@var_0_object:AddReply((int)7786, (int)8698, (int)8587);
			}
			var_340_bool = 0;
			var_340_bool = 0;
			var_341_bool = 0; var_342_object = Obj();
			var_342_object = var_1_object;
			func_5944(var_342_object);
			if(var_341_bool != 0) {
				var_347_bool = 0; var_348_object = Obj();
				var_348_object = var_1_object;
				func_5677(var_348_object);
				if(var_347_bool != 0) {
					var_340_bool = 1;
				}
			}
			if(var_340_bool != 0) {
				@@@var_0_object:AddReply((int)7788, (int)8710, (int)8589);
			}
			var_356_bool = 0;
			var_356_bool = 0;
			var_357_bool = 0; var_358_object = Obj();
			var_358_object = var_1_object;
			func_5843(var_358_object);
			if(var_357_bool != 0) {
				var_363_bool = 0; var_364_object = Obj();
				var_364_object = var_1_object;
				func_5689(var_364_object);
				if(var_363_bool != 0) {
					var_356_bool = 1;
				}
			}
			if(var_356_bool != 0) {
				@@@var_0_object:AddReply((int)7797, (int)8613, (int)8598);
			}
			var_372_bool = 0;
			var_372_bool = 0;
			var_373_bool = 0; var_374_object = Obj();
			var_374_object = var_1_object;
			func_5713(var_374_object);
			if(var_373_bool != 0) {
				var_379_bool = 0; var_380_object = Obj();
				var_380_object = var_1_object;
				func_5701(var_380_object);
				if(var_379_bool != 0) {
					var_372_bool = 1;
				}
			}
			if(var_372_bool != 0) {
				@@@var_0_object:AddReply((int)7914, (int)8734, (int)8733);
			}
			@@@var_0_object:AddReply((int)8703, (int)-1, (int)9540);
			return 0;
		}
		var_392_bool = var_30_string == (int)8734;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7916, (int)8737, (int)8735);
			@@@var_0_object:AddReply((int)7917, (int)8737, (int)8736);
			return 0;
		}
		var_402_bool = var_30_string == (int)8737;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7919, (int)8739, (int)8738);
			return 0;
		}
		var_409_bool = var_30_string == (int)8739;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7920);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7921, (int)8742, (int)8740);
			return 0;
		}
		var_416_bool = var_30_string == (int)8742;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7923, (int)8744, (int)8743);
			return 0;
		}
		var_423_bool = var_30_string == (int)8744;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7925, (int)-1, (int)8745);
			return 0;
		}
		var_430_bool = var_30_string == (int)8613;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7906, (int)8726, (int)8725);
			return 0;
		}
		var_437_bool = var_30_string == (int)8726;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7907);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7909, (int)8730, (int)8728);
			return 0;
		}
		var_444_bool = var_30_string == (int)8730;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7912, (int)-1, (int)8731);
			@@@var_0_object:AddReply((int)7913, (int)-1, (int)8732);
			return 0;
		}
		var_454_bool = var_30_string == (int)8710;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7893, (int)8712, (int)8711);
			return 0;
		}
		var_461_bool = var_30_string == (int)8712;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7894);
			@@@var_0_object:ClearReplies();
			var_464_bool = 0; var_465_object = Obj();
			var_465_object = var_1_object;
			func_5605(var_465_object);
			if(var_464_bool != 0) {
				@@@var_0_object:AddReply((int)7895, (int)8714, (int)8713);
			}
			var_473_bool = 0; var_474_object = Obj();
			var_474_object = var_1_object;
			func_5605(var_474_object);
			var_475_bool = var_473_bool == 0; //@nz
			if(var_475_bool != 0) {
				@@@var_0_object:AddReply((int)7897, (int)8716, (int)8715);
			}
			return 0;
		}
		var_480_bool = var_30_string == (int)8716;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7898);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7900, (int)8714, (int)8718);
			return 0;
		}
		var_487_bool = var_30_string == (int)8714;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7896);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7899, (int)-1, (int)8717);
			return 0;
		}
		var_494_bool = var_30_string == (int)8698;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7882, (int)8610, (int)8699);
			return 0;
		}
		var_501_bool = var_30_string == (int)8610;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7883, (int)8701, (int)8700);
			@@@var_0_object:AddReply((int)7885, (int)8703, (int)8702);
			return 0;
		}
		var_511_bool = var_30_string == (int)8703;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7887, (int)8701, (int)8704);
			return 0;
		}
		var_518_bool = var_30_string == (int)8701;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7888, (int)-1, (int)8706);
			@@@var_0_object:AddReply((int)7889, (int)8708, (int)8707);
			return 0;
		}
		var_528_bool = var_30_string == (int)8708;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7891, (int)-1, (int)8709);
			return 0;
		}
		var_535_bool = var_30_string == (int)8687;
		if(var_535_bool != 0) {
			var_536_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7873, (int)8609, (int)8688);
			@@@var_0_object:AddReply((int)7874, (int)8609, (int)8689);
			return 0;
		}
		var_545_bool = var_30_string == (int)8609;
		if(var_545_bool != 0) {
			var_546_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7875, (int)8692, (int)8691);
			@@@var_0_object:AddReply((int)7877, (int)8694, (int)8693);
			return 0;
		}
		var_555_bool = var_30_string == (int)8694;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7878);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7879, (int)8692, (int)8695);
			return 0;
		}
		var_562_bool = var_30_string == (int)8692;
		if(var_562_bool != 0) {
			var_563_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7880, (int)-1, (int)8697);
			return 0;
		}
		var_569_bool = var_30_string == (int)8608;
		if(var_569_bool != 0) {
			var_570_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7807);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7856, (int)8668, (int)8667);
			@@@var_0_object:AddReply((int)7866, (int)8668, (int)8677);
			return 0;
		}
		var_579_bool = var_30_string == (int)8668;
		if(var_579_bool != 0) {
			var_580_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7858, (int)8670, (int)8669);
			@@@var_0_object:AddReply((int)7867, (int)8670, (int)8679);
			return 0;
		}
		var_589_bool = var_30_string == (int)8670;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7859);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7860, (int)8672, (int)8671);
			var_595_bool = 0; var_596_object = Obj();
			var_596_object = var_1_object;
			func_5831(var_596_object);
			var_601_bool = var_595_bool == 0; //@nz
			if(var_601_bool != 0) {
				@@@var_0_object:AddReply((int)7868, (int)8682, (int)8681);
			}
			return 0;
		}
		var_606_bool = var_30_string == (int)8682;
		if(var_606_bool != 0) {
			var_607_object = Obj(); var_608_object = Obj();
			var_607_object = var_1_object;
			var_608_object = var_0_object;
			func_5312();
			var_611_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7870, (int)8672, (int)8683);
			return 0;
		}
		var_617_bool = var_30_string == (int)8672;
		if(var_617_bool != 0) {
			var_618_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7861);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7862, (int)8674, (int)8673);
			@@@var_0_object:AddReply((int)7871, (int)8674, (int)8685);
			return 0;
		}
		var_627_bool = var_30_string == (int)8674;
		if(var_627_bool != 0) {
			var_628_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7864, (int)-1, (int)8675);
			@@@var_0_object:AddReply((int)7865, (int)-1, (int)8676);
			return 0;
		}
		var_637_bool = var_30_string == (int)8607;
		if(var_637_bool != 0) {
			var_638_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7843, (int)8657, (int)8651);
			@@@var_0_object:AddReply((int)7855, (int)8652, (int)8665);
			return 0;
		}
		var_647_bool = var_30_string == (int)8657;
		if(var_647_bool != 0) {
			var_648_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7848);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7849, (int)8659, (int)8658);
			@@@var_0_object:AddReply((int)7854, (int)8659, (int)8663);
			return 0;
		}
		var_657_bool = var_30_string == (int)8659;
		if(var_657_bool != 0) {
			var_658_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7851, (int)8652, (int)8660);
			return 0;
		}
		var_664_bool = var_30_string == (int)8652;
		if(var_664_bool != 0) {
			var_665_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7844);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7852, (int)-1, (int)8661);
			@@@var_0_object:AddReply((int)7853, (int)-1, (int)8662);
			return 0;
		}
		var_674_bool = var_30_string == (int)8618;
		if(var_674_bool != 0) {
			var_675_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7817, (int)8620, (int)8619);
			@@@var_0_object:AddReply((int)7845, (int)8654, (int)8653);
			return 0;
		}
		var_684_bool = var_30_string == (int)8654;
		if(var_684_bool != 0) {
			var_685_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7846);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7847, (int)8620, (int)8655);
			return 0;
		}
		var_691_bool = var_30_string == (int)8620;
		if(var_691_bool != 0) {
			var_692_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7818);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7821, (int)8625, (int)8623);
			@@@var_0_object:AddReply((int)7819, (int)8622, (int)8621);
			return 0;
		}
		var_701_bool = var_30_string == (int)8622;
		if(var_701_bool != 0) {
			var_702_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7822, (int)8625, (int)8624);
			return 0;
		}
		var_708_bool = var_30_string == (int)8625;
		if(var_708_bool != 0) {
			var_709_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7824, (int)8627, (int)8626);
			@@@var_0_object:AddReply((int)7842, (int)8630, (int)8649);
			return 0;
		}
		var_718_bool = var_30_string == (int)8627;
		if(var_718_bool != 0) {
			var_719_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7826, (int)8630, (int)8628);
			@@@var_0_object:AddReply((int)7834, (int)8639, (int)8638);
			return 0;
		}
		var_728_bool = var_30_string == (int)8639;
		if(var_728_bool != 0) {
			var_729_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7836, (int)8641, (int)8640);
			@@@var_0_object:AddReply((int)7841, (int)8641, (int)8645);
			return 0;
		}
		var_738_bool = var_30_string == (int)8641;
		if(var_738_bool != 0) {
			var_739_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7837);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7839, (int)8630, (int)8643);
			@@@var_0_object:AddReply((int)7840, (int)8630, (int)8644);
			return 0;
		}
		var_748_bool = var_30_string == (int)8630;
		if(var_748_bool != 0) {
			var_749_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7827);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7828, (int)8632, (int)8631);
			@@@var_0_object:AddReply((int)7833, (int)8632, (int)8636);
			return 0;
		}
		var_758_bool = var_30_string == (int)8632;
		if(var_758_bool != 0) {
			var_759_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7830, (int)8634, (int)8633);
			return 0;
		}
		var_765_bool = var_30_string == (int)8634;
		if(var_765_bool != 0) {
			var_766_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7832, (int)-1, (int)8635);
			return 0;
		}
		var_772_bool = var_30_string == (int)9477;
		if(var_772_bool != 0) {
			var_773_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8653, (int)9479, (int)9478);
			return 0;
		}
		var_779_bool = var_30_string == (int)9479;
		if(var_779_bool != 0) {
			var_780_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8655, (int)9483, (int)9480);
			@@@var_0_object:AddReply((int)8656, (int)-1, (int)9481);
			@@@var_0_object:AddReply((int)8657, (int)-1, (int)9482);
			return 0;
		}
		var_792_bool = var_30_string == (int)9483;
		if(var_792_bool != 0) {
			var_793_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8659, (int)9485, (int)9484);
			return 0;
		}
		var_799_bool = var_30_string == (int)9485;
		if(var_799_bool != 0) {
			var_800_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8660);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8661, (int)9487, (int)9486);
			return 0;
		}
		var_806_bool = var_30_string == (int)9487;
		if(var_806_bool != 0) {
			var_807_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8663, (int)9489, (int)9488);
			return 0;
		}
		var_813_bool = var_30_string == (int)9489;
		if(var_813_bool != 0) {
			var_814_object = Obj(); var_815_object = Obj();
			var_814_object = var_1_object;
			var_815_object = var_0_object;
			func_5220();
			var_816_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8665, (int)-1, (int)9490);
			return 0;
		}
		var_822_bool = var_30_string == (int)5964;
		if(var_822_bool != 0) {
			var_823_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6207, (int)6862, (int)6861);
			@@@var_0_object:AddReply((int)5416, (int)5966, (int)5965);
			return 0;
		}
		var_832_bool = var_30_string == (int)6862;
		if(var_832_bool != 0) {
			var_833_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6209, (int)6864, (int)6863);
			return 0;
		}
		var_839_bool = var_30_string == (int)6864;
		if(var_839_bool != 0) {
			var_840_object = Obj(); var_841_object = Obj();
			var_840_object = var_1_object;
			var_841_object = var_0_object;
			func_5157();
			var_844_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6211, (int)6866, (int)6865);
			return 0;
		}
		var_850_bool = var_30_string == (int)6866;
		if(var_850_bool != 0) {
			var_851_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6214, (int)5966, (int)6868);
			return 0;
		}
		var_857_bool = var_30_string == (int)5966;
		if(var_857_bool != 0) {
			var_858_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5419, (int)5969, (int)5968);
			@@@var_0_object:AddReply((int)6215, (int)6867, (int)6870);
			@@@var_0_object:AddReply((int)5418, (int)6874, (int)5967);
			return 0;
		}
		var_870_bool = var_30_string == (int)6867;
		if(var_870_bool != 0) {
			var_871_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6216, (int)6874, (int)6872);
			return 0;
		}
		var_877_bool = var_30_string == (int)5969;
		if(var_877_bool != 0) {
			var_878_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5420);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5421, (int)6874, (int)5970);
			return 0;
		}
		var_884_bool = var_30_string == (int)6874;
		if(var_884_bool != 0) {
			var_885_string = "";
			func_1681(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6218, (int)-1, (int)6875);
			@@@var_0_object:AddReply((int)6219, (int)-1, (int)6876);
			return 0;
		}
		var_3_string = true;
		var_893_bool = 0;
		func_5108(var_893_bool);
		if(var_893_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6a2";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_5007();
		var_35_bool = var_31_bool == (int)8122;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5151();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_5139();
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_5128(var_45_object);
		}
		var_54_bool = var_31_bool == (int)8131;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_5151();
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_5128(var_58_object);
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_5139();
		}
		var_62_bool = var_30_string == (int)7620;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6914);
			@@@var_0_object:ClearReplies();
			var_79_bool = 0;
			var_79_bool = 0;
			var_80_bool = 0; var_81_object = Obj();
			var_81_object = var_1_object;
			func_5617(var_81_object);
			if(var_80_bool != 0) {
				var_88_bool = 0; var_89_object = Obj();
				var_89_object = var_1_object;
				func_5629(var_89_object);
				if(var_88_bool != 0) {
					var_79_bool = 1;
				}
			}
			if(var_79_bool != 0) {
				@@@var_0_object:AddReply((int)6915, (int)7622, (int)7621);
			}
			@@@var_0_object:AddReply((int)7747, (int)-1, (int)8548);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xdc6";
		EMIT "Pop(1)";
		EMIT "Push((int) 9294)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9295)";
		EMIT "Push((int) 10205)";
		EMIT "Push((int) 10204)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9306)";
		EMIT "Push((int) 10205)";
		EMIT "Push((int) 10216)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xdc6";
		EMIT "Pop(1)";
		EMIT "Push((int) 9307)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9308)";
		EMIT "Push((int) 10220)";
		EMIT "Push((int) 10219)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9316)";
		EMIT "Push((int) 10229)";
		EMIT "Push((int) 10228)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9319)";
		EMIT "Push((int) 10233)";
		EMIT "Push((int) 10232)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_101_bool = var_30_string == (int)10233;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9321, (int)10222, (int)10234);
			return 0;
		}
		var_108_bool = var_30_string == (int)10229;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9318, (int)10220, (int)10230);
			return 0;
		}
		var_115_bool = var_30_string == (int)10220;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9310, (int)10222, (int)10221);
			@@@var_0_object:AddReply((int)9313, (int)10225, (int)10224);
			return 0;
		}
		var_125_bool = var_30_string == (int)10225;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9315, (int)10222, (int)10226);
			return 0;
		}
		var_132_bool = var_30_string == (int)10222;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9312, (int)-1, (int)10223);
			return 0;
		}
		var_139_bool = var_30_string == (int)10205;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9297, (int)10207, (int)10206);
			@@@var_0_object:AddReply((int)9305, (int)10207, (int)10214);
			return 0;
		}
		var_149_bool = var_30_string == (int)10207;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9299, (int)10209, (int)10208);
			@@@var_0_object:AddReply((int)9303, (int)10213, (int)10212);
			return 0;
		}
		var_159_bool = var_30_string == (int)10213;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9304);
			@@@var_0_object:ClearReplies();
			return 0;
		}
		var_163_bool = var_30_string == (int)10209;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9301, (int)-1, (int)10210);
			@@@var_0_object:AddReply((int)9302, (int)-1, (int)10211);
			return 0;
		}
		var_173_bool = var_30_string == (int)7622;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6916);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6917, (int)8117, (int)7623);
			@@@var_0_object:AddReply((int)7365, (int)8124, (int)8123);
			return 0;
		}
		var_183_bool = var_30_string == (int)8124;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7367, (int)8121, (int)8125);
			@@@var_0_object:AddReply((int)7368, (int)8127, (int)8126);
			return 0;
		}
		var_193_bool = var_30_string == (int)8127;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7370, (int)8121, (int)8128);
			return 0;
		}
		var_200_bool = var_30_string == (int)8117;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7360, (int)8119, (int)8118);
			@@@var_0_object:AddReply((int)7372, (int)8121, (int)8132);
			return 0;
		}
		var_210_bool = var_30_string == (int)8119;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7361);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7362, (int)8121, (int)8120);
			return 0;
		}
		var_217_bool = var_30_string == (int)8121;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_3526(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7364, (int)-1, (int)8122);
			@@@var_0_object:AddReply((int)7371, (int)-1, (int)8131);
			return 0;
		}
		var_3_string = true;
		var_226_bool = 0;
		func_5108(var_226_bool);
		if(var_226_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdd7";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_5007();
		var_35_bool = var_30_string == (int)10865;
		if(var_35_bool != 0) {
			var_36_bool = 0; var_37_object = Obj();
			var_37_object = var_1_object;
			func_5980(var_37_object);
			if(var_36_bool != 0) {
				var_44_object = Obj(); var_45_object = Obj();
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_5505();
				var_48_string = "";
				func_4135(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9865);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9866, (int)10867, (int)10866);
				@@@var_0_object:AddReply((int)9877, (int)-1, (int)10880);
				@@@var_0_object:AddReply((int)9878, (int)10882, (int)10881);
				return 0;
			}
			var_73_string = "";
			func_4135(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15313, (int)-1, (int)16551);
			return 0;
		}
		var_79_bool = var_30_string == (int)10882;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_4135(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9879);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9880, (int)-1, (int)10883);
			return 0;
		}
		var_86_bool = var_30_string == (int)10867;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_4135(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9868, (int)10869, (int)10868);
			@@@var_0_object:AddReply((int)9876, (int)10869, (int)10878);
			return 0;
		}
		var_96_bool = var_30_string == (int)10869;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_4135(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9870, (int)10871, (int)10870);
			@@@var_0_object:AddReply((int)9874, (int)10871, (int)10874);
			@@@var_0_object:AddReply((int)9875, (int)10871, (int)10876);
			return 0;
		}
		var_109_bool = var_30_string == (int)10871;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_4135(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9872, (int)-1, (int)10872);
			@@@var_0_object:AddReply((int)9873, (int)-1, (int)10873);
			return 0;
		}
		var_3_string = true;
		var_118_bool = 0;
		func_5108(var_118_bool);
		if(var_118_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1038";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	if((int)1 != 0) {
		func_5007();
		var_35_bool = var_31_int == (int)12527;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5226();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_5232();
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_5238(var_45_object);
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_5494(var_111_object);
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_5511(var_130_object);
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_5522(var_136_object);
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_5145();
		}
		var_146_bool = var_31_int == (int)12674;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_5226();
		}
		var_150_bool = var_31_int == (int)12677;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_5232();
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_5238(var_154_object);
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_5145();
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_5494(var_158_object);
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_5522(var_160_object);
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_5511(var_162_object);
		}
		var_164_bool = var_31_int == (int)13071;
		if(var_164_bool != 0) {
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_5306();
		}
		var_170_bool = var_30_int == (int)12514;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11320);
			@@@var_0_object:ClearReplies();
			var_187_bool = 0; var_188_object = Obj();
			var_188_object = var_1_object;
			func_5783(var_188_object);
			if(var_187_bool != 0) {
				@@@var_0_object:AddReply((int)11321, (int)12516, (int)12515);
			}
			var_196_bool = 0;
			var_196_bool = 0;
			var_197_bool = 0; var_198_object = Obj();
			var_198_object = var_1_object;
			func_5771(var_198_object);
			if(var_197_bool != 0) {
				var_203_bool = 0; var_204_object = Obj();
				var_204_object = var_1_object;
				func_5795(var_204_object);
				var_209_bool = var_203_bool == 0; //@nz
				if(var_209_bool != 0) {
					var_196_bool = 1;
				}
			}
			if(var_196_bool != 0) {
				@@@var_0_object:AddReply((int)11469, (int)12676, (int)12675);
			}
			var_213_bool = 0;
			var_213_bool = 0;
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_5819(var_215_object);
			if(var_214_bool != 0) {
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_5807(var_221_object);
				if(var_220_bool != 0) {
					var_213_bool = 1;
				}
			}
			if(var_213_bool != 0) {
				@@@var_0_object:AddReply((int)11856, (int)13070, (int)13069);
			}
			@@@var_0_object:AddReply((int)11472, (int)-1, (int)12678);
			return 0;
		}
		var_233_bool = var_30_int == (int)13070;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11858, (int)-1, (int)13071);
			return 0;
		}
		var_240_bool = var_30_int == (int)12676;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11470);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11471, (int)-1, (int)12677);
			return 0;
		}
		var_247_bool = var_30_int == (int)12516;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11429, (int)12522, (int)12629);
			@@@var_0_object:AddReply((int)11323, (int)12518, (int)12517);
			return 0;
		}
		var_257_bool = var_30_int == (int)12518;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11324);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11455, (int)12522, (int)12659);
			return 0;
		}
		var_264_bool = var_30_int == (int)12522;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11328);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11329, (int)12524, (int)12523);
			@@@var_0_object:AddReply((int)11456, (int)12661, (int)12660);
			return 0;
		}
		var_274_bool = var_30_int == (int)12661;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11458, (int)12663, (int)12662);
			return 0;
		}
		var_281_bool = var_30_int == (int)12663;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11460, (int)12665, (int)12664);
			@@@var_0_object:AddReply((int)11462, (int)12667, (int)12666);
			return 0;
		}
		var_291_bool = var_30_int == (int)12667;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11463);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11465, (int)12524, (int)12669);
			return 0;
		}
		var_298_bool = var_30_int == (int)12665;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11461);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11466, (int)12524, (int)12670);
			return 0;
		}
		var_305_bool = var_30_int == (int)12524;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11331, (int)12526, (int)12525);
			return 0;
		}
		var_312_bool = var_30_int == (int)12526;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11333, (int)-1, (int)12527);
			@@@var_0_object:AddReply((int)11464, (int)12673, (int)12668);
			return 0;
		}
		var_322_bool = var_30_int == (int)12673;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_4480(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11467);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11468, (int)-1, (int)12674);
			return 0;
		}
		var_3_string = true;
		var_328_bool = 0;
		func_5108(var_328_bool);
		if(var_328_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1191";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_6201();
	var_31_bool = 0;
	func_4924(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_35_string = "";
	func_4989("Neutral");
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


func_5122()
{
	SetVariable("ood1Julia3", (int)1);
	return 0;
}


func_5891(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_5024(var_239_int, "ood6Julia2");
	var_242_bool = var_239_int == (int)0;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_5128(var_44_object)
{
	Trace("money1000 is given");
	var_47_object = Obj(); var_48_string = ""; var_49_int = 0;
	var_44_object = var_47_object;
	func_4905(var_47_object, "money", (int)1000);
	return 0;
}


func_6153()
{
	var_54_object = Obj(); var_55_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_55_object, (int)33, (int)1, (int)12115);
	var_60_bool = 0; var_61_object = Obj(); var_62_int = 0;
	var_55_object = var_61_object;
	func_6040(var_60_bool, var_61_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5641(var_299_bool)
{
	var_301_int = 0; var_302_string = "";
	func_5024(var_301_int, "ood1Julia4");
	var_304_bool = var_301_int == (int)0;
	if(var_304_bool != 0) {
		var_299_bool = 1;
		return 0;
	}
	var_299_bool = 0;
	return 0;
}


func_5903(var_249_bool)
{
	var_251_int = 0; var_252_string = "";
	func_5024(var_251_int, "microscope_d6q01_julia_blood");
	var_254_bool = var_251_int != (int)0;
	if(var_254_bool != 0) {
		var_249_bool = 1;
		return 0;
	}
	var_249_bool = 0;
	return 0;
}


func_3346(var_0_object, var_417_int, var_418_object)
{
	var_420_object = Obj(); var_421_bool = 0; var_422_int = 0; var_423_bool = 0; var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0;
	var_0_object = var_418_object;
	var_428_bool = 0; var_429_object = Obj();
	var_418_object = var_429_object;
	func_4929(var_428_bool, var_429_object);
	var_430_bool = var_428_bool == 0; //@nz
	if(var_430_bool != 0) {
		var_417_int = -2;
		return 8;
	}
	CreateDialog(var_424_object);
	var_431_int = 0;
	func_5104(var_431_int);
	@@var_424_object:SetNPCName(var_431_int);
	var_432_string = "";
	func_5106(var_432_string);
	@@var_424_object:SetPhoto(var_432_string);
	var_433_int = 0;
	func_6136(var_433_int);
	@@var_424_object:SetPlayerName(var_433_int);
	IsOverrideActive(var_425_bool);
	var_434_bool = var_425_bool;
	if(var_434_bool != 0) {
		var_417_int = -2;
		return 8;
	}
	DoDialog(var_424_object);
	var_435_object = Obj(); var_436_object = Obj();
	var_418_object = var_435_object;
	var_424_object = var_436_object;
	TaskCall(9);
	func_3409(var_437_object, var_438_object, var_439_string, var_440_bool, var_435_object, var_436_object);
	TaskReturn();
	@@var_424_object:IsDialogEnd(var_427_bool);
	
Label_3391:
	var_475_bool = var_427_bool == 0; //@nz
	if(var_475_bool != 0) {
		sync();
		@@var_424_object:IsDialogEnd(var_427_bool);
		goto Label_3391;
	}
	var_418_object = Obj();
	func_4985();
	StopDialog(var_424_object);
	@@var_424_object:GetReturnValue((int)-1);
	var_426_int = var_417_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5139()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_5653(var_309_bool)
{
	var_311_int = 0; var_312_string = "";
	func_5024(var_311_int, "ood1Julia5");
	var_314_bool = var_311_int == (int)0;
	if(var_314_bool != 0) {
		var_309_bool = 1;
		return 0;
	}
	var_309_bool = 0;
	return 0;
}


func_5145()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_6169()
{
	var_54_object = Obj(); var_55_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_55_object, (int)161, (int)1, (int)15394);
	var_60_bool = 0; var_61_object = Obj(); var_62_int = 0;
	var_55_object = var_61_object;
	func_6040(var_60_bool, var_61_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4378(var_0_object, var_1_object, var_2_object, var_3_object, var_564_object, var_565_object)
{
	var_0_object = var_565_object;
	var_1_object = var_564_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_571_string = "";
		func_4480(var_565_object, "Neutral");
		@@@var_0_object:SetMessage((int)11320);
		@@@var_0_object:ClearReplies();
		var_577_bool = 0; var_578_object = Obj();
		var_578_object = var_1_object;
		func_5783(var_578_object);
		if(var_577_bool != 0) {
			@@@var_0_object:AddReply((int)11321, (int)12516, (int)12515);
		}
		var_586_bool = 0;
		var_586_bool = 0;
		var_587_bool = 0; var_588_object = Obj();
		var_588_object = var_1_object;
		func_5771(var_588_object);
		if(var_587_bool != 0) {
			var_593_bool = 0; var_594_object = Obj();
			var_594_object = var_1_object;
			func_5795(var_594_object);
			var_599_bool = var_593_bool == 0; //@nz
			if(var_599_bool != 0) {
				var_586_bool = 1;
			}
		}
		if(var_586_bool != 0) {
			@@@var_0_object:AddReply((int)11469, (int)12676, (int)12675);
		}
		var_603_bool = 0;
		var_603_bool = 0;
		var_604_bool = 0; var_605_object = Obj();
		var_605_object = var_1_object;
		func_5819(var_605_object);
		if(var_604_bool != 0) {
			var_610_bool = 0; var_611_object = Obj();
			var_611_object = var_1_object;
			func_5807(var_611_object);
			if(var_610_bool != 0) {
				var_603_bool = 1;
			}
		}
		if(var_603_bool != 0) {
			@@@var_0_object:AddReply((int)11856, (int)13070, (int)13069);
		}
		@@@var_0_object:AddReply((int)11472, (int)-1, (int)12678);
		goto Label_4450;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x111e";
	}
Label_4450:
	var_622_bool = 0;
	func_5108(var_622_bool);
	if(var_622_bool != 0) {

	Label_4454:
		lshWaitForAnimEnd();
		var_623_object = var_3_object;
		if(var_623_object != 0) {
		} else {
			var_624_string = "";
			var_624_string = var_2_object;
			func_4989(var_624_string);
			goto Label_4454;
	}
		PlayAnimation("all", "idle");

	Label_4469:
		WaitForAnimEnd();
		var_627_object = var_3_object;
		if(var_627_object != 0) {
			goto Label_4479;
		}
		PlayAnimation("all", "idle");
		goto Label_4469;
	}
	goto Label_4479;
	
Label_4479:
	return 0;
	
}


func_5915(var_255_bool)
{
	var_255_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_5151()
{
	SetVariable("ood2Julia1", (int)1);
	return 0;
}


func_5920(var_257_bool)
{
	var_259_int = 0; var_260_string = "";
	func_5024(var_259_int, "d6q01");
	var_262_bool = var_259_int == (int)1000;
	if(var_262_bool != 0) {
		var_257_bool = 1;
		return 0;
	}
	var_257_bool = 0;
	return 0;
}


func_5665(var_331_bool)
{
	var_333_int = 0; var_334_string = "";
	func_5024(var_333_int, "ood1Julia6");
	var_336_bool = var_333_int == (int)0;
	if(var_336_bool != 0) {
		var_331_bool = 1;
		return 0;
	}
	var_331_bool = 0;
	return 0;
}


func_546(var_2_object, var_196_string)
{
	var_197_bool = 0;
	func_5108(var_197_bool);
	var_198_bool = var_197_bool == 0; //@nz
	if(var_198_bool != 0) {
		return 0;
	}
	var_199_bool = var_196_string == var_2_object;
	if(var_199_bool != 0) {
		return 0;
	}
	var_200_string = "";
	var_196_string = var_200_string;
	func_4989(var_200_string);
	var_2_object = var_196_string;
	return 0;
}


func_5157()
{
	SetVariable("KnowBurahDead", (int)1);
	return 0;
}


func_4135(var_2_object, var_48_string)
{
	var_49_bool = 0;
	func_5108(var_49_bool);
	var_50_bool = var_49_bool == 0; //@nz
	if(var_50_bool != 0) {
		return 0;
	}
	var_51_bool = var_48_string == var_2_object;
	if(var_51_bool != 0) {
		return 0;
	}
	var_52_string = "";
	var_48_string = var_52_string;
	func_4989(var_52_string);
	var_2_object = var_48_string;
	return 0;
}


func_6185()
{
	var_157_object = Obj(); var_158_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_158_object, (int)120, (int)1, (int)13743);
	var_163_bool = 0; var_164_object = Obj(); var_165_int = 0;
	var_158_object = var_164_object;
	func_6040(var_163_bool, var_164_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4905(var_47_object, var_48_string, var_49_int)
{
	var_50_int = 0; var_51_int = 0;
	@@var_47_object:GetProperty(var_48_string, var_51_int);
	var_52_int = var_51_int + var_49_int;
	@@var_47_object:SetProperty(var_48_string, var_52_int);
	return 2;
}


func_5163()
{
	SetVariable("ood1Julia4", (int)1);
	return 0;
}


func_5932(var_264_bool)
{
	var_266_int = 0; var_267_string = "";
	func_5024(var_266_int, "d6q01");
	var_269_bool = var_266_int == (int)-1;
	if(var_269_bool != 0) {
		var_264_bool = 1;
		return 0;
	}
	var_264_bool = 0;
	return 0;
}


func_5677(var_347_bool)
{
	var_349_int = 0; var_350_string = "";
	func_5024(var_349_int, "ood1Julia7");
	var_352_bool = var_349_int == (int)0;
	if(var_352_bool != 0) {
		var_347_bool = 1;
		return 0;
	}
	var_347_bool = 0;
	return 0;
}


func_4912(var_31_bool, var_32_object)
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


func_5169()
{
	SetVariable("ood1Julia5", (int)1);
	return 0;
}


func_49(var_0_object, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_0_object = var_35_object;
	var_45_bool = 0; var_46_object = Obj();
	var_35_object = var_46_object;
	func_4929(var_45_bool, var_46_object);
	var_85_bool = var_45_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	CreateDialog(var_41_object);
	var_86_int = 0;
	func_5104(var_86_int);
	@@var_41_object:SetNPCName(var_86_int);
	var_87_string = "";
	func_5106(var_87_string);
	@@var_41_object:SetPhoto(var_87_string);
	var_88_int = 0;
	func_6136(var_88_int);
	@@var_41_object:SetPlayerName(var_88_int);
	IsOverrideActive(var_42_bool);
	var_96_bool = var_42_bool;
	if(var_96_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	DoDialog(var_41_object);
	var_97_object = Obj(); var_98_object = Obj();
	var_35_object = var_97_object;
	var_41_object = var_98_object;
	TaskCall(3);
	func_112(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	@@var_41_object:IsDialogEnd(var_44_bool);
	
Label_94:
	var_141_bool = var_44_bool == 0; //@nz
	if(var_141_bool != 0) {
		sync();
		@@var_41_object:IsDialogEnd(var_44_bool);
		goto Label_94;
	}
	var_35_object = Obj();
	func_4985();
	StopDialog(var_41_object);
	@@var_41_object:GetReturnValue((int)-1);
	var_43_int = var_34_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5175()
{
	SetVariable("ood1Julia6", (int)1);
	return 0;
}


func_5944(var_341_bool)
{
	var_343_int = 0; var_344_string = "";
	func_5024(var_343_int, "KnowAnna");
	var_346_bool = var_343_int == (int)1;
	if(var_346_bool != 0) {
		var_341_bool = 1;
		return 0;
	}
	var_341_bool = 0;
	return 0;
}


func_6201()
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_5689(var_363_bool)
{
	var_365_int = 0; var_366_string = "";
	func_5024(var_365_int, "ood1Julia8");
	var_368_bool = var_365_int == (int)0;
	if(var_368_bool != 0) {
		var_363_bool = 1;
		return 0;
	}
	var_363_bool = 0;
	return 0;
}


func_1337(var_0_object, var_1_object, var_2_object, var_3_object, var_170_object, var_171_object)
{
	var_0_object = var_171_object;
	var_1_object = var_170_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_177_bool = 0;
		var_177_bool = 0;
		var_178_bool = 0;
		var_178_bool = 0;
		var_179_bool = 0;
		var_179_bool = 0;
		var_180_bool = 0;
		var_180_bool = 0;
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_5533(var_182_object);
		if(var_181_bool != 0) {
			var_189_bool = 0; var_190_object = Obj();
			var_190_object = var_1_object;
			func_5581(var_190_object);
			var_195_bool = var_189_bool == 0; //@nz
			if(var_195_bool != 0) {
				var_180_bool = 1;
			}
		}
		if(var_180_bool != 0) {
			var_196_bool = 0; var_197_object = Obj();
			var_197_object = var_1_object;
			func_5569(var_197_object);
			var_202_bool = var_196_bool == 0; //@nz
			if(var_202_bool != 0) {
				var_179_bool = 1;
			}
		}
		if(var_179_bool != 0) {
			var_203_bool = 0; var_204_object = Obj();
			var_204_object = var_1_object;
			func_5725(var_204_object);
			if(var_203_bool != 0) {
				var_178_bool = 1;
			}
		}
		if(var_178_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_210_object = var_1_object;
			func_5737(var_210_object);
			var_215_bool = var_209_bool == 0; //@nz
			if(var_215_bool != 0) {
				var_177_bool = 1;
			}
		}
		if(var_177_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_5220();
			var_220_string = "";
			func_1681(var_171_object, "Neutral");
			@@@var_0_object:SetMessage((int)5377);
			@@@var_0_object:ClearReplies();
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_5749(var_227_object);
			var_232_bool = var_226_bool == 0; //@nz
			if(var_232_bool != 0) {
				@@@var_0_object:AddReply((int)5379, (int)5964, (int)5924);
			}
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_5749(var_237_object);
			if(var_236_bool != 0) {
				@@@var_0_object:AddReply((int)5380, (int)6864, (int)5925);
			}
		} else {
				var_249_bool = 0;
				var_249_bool = 0;
				var_250_bool = 0;
				var_250_bool = 0;
				var_251_bool = 0;
				var_251_bool = 0;
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_5725(var_253_object);
				var_254_bool = var_252_bool == 0; //@nz
				if(var_254_bool != 0) {
					var_255_bool = 0; var_256_object = Obj();
					var_256_object = var_1_object;
					func_5737(var_256_object);
					if(var_255_bool != 0) {
						var_251_bool = 1;
					}
				}
				if(var_251_bool != 0) {
					var_257_bool = 0; var_258_object = Obj();
					var_258_object = var_1_object;
					func_5581(var_258_object);
					var_259_bool = var_257_bool == 0; //@nz
					if(var_259_bool != 0) {
						var_250_bool = 1;
					}
				}
				if(var_250_bool != 0) {
					var_260_bool = 0; var_261_object = Obj();
					var_261_object = var_1_object;
					func_5569(var_261_object);
					var_262_bool = var_260_bool == 0; //@nz
					if(var_262_bool != 0) {
						var_249_bool = 1;
					}
				}
				if(var_249_bool != 0) {
					var_263_string = "";
					func_1681(var_171_object, "Neutral");
					@@@var_0_object:SetMessage((int)8650);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)8651, (int)9477, (int)9476);
					goto Label_1651;
				}
				var_268_string = "";
				func_1681(var_171_object, "Neutral");
				@@@var_0_object:SetMessage((int)7779);
				@@@var_0_object:ClearReplies();
				var_270_bool = 0;
				var_270_bool = 0;
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_5545(var_272_object);
				if(var_271_bool != 0) {
					var_277_bool = 0; var_278_object = Obj();
					var_278_object = var_1_object;
					func_5593(var_278_object);
					if(var_277_bool != 0) {
						var_270_bool = 1;
					}
				}
				if(var_270_bool != 0) {
					@@@var_0_object:AddReply((int)7815, (int)8618, (int)8617);
				}
				var_286_bool = 0;
				var_286_bool = 0;
				var_287_bool = 0; var_288_object = Obj();
				var_288_object = var_1_object;
				func_5992(var_288_object);
				if(var_287_bool != 0) {
					var_293_bool = 0; var_294_object = Obj();
					var_294_object = var_1_object;
					func_5557(var_294_object);
					if(var_293_bool != 0) {
						var_286_bool = 1;
					}
				}
				if(var_286_bool != 0) {
					@@@var_0_object:AddReply((int)7783, (int)8607, (int)8584);
				}
				var_302_bool = 0;
				var_302_bool = 0;
				var_303_bool = 0;
				var_303_bool = 0;
				var_304_bool = 0; var_305_object = Obj();
				var_305_object = var_1_object;
				func_6004(var_305_object);
				if(var_304_bool != 0) {
					var_310_bool = 0; var_311_object = Obj();
					var_311_object = var_1_object;
					func_5761(var_310_bool, var_311_object);
					if(var_310_bool != 0) {
						var_303_bool = 1;
					}
				}
				if(var_303_bool != 0) {
					var_321_bool = 0; var_322_object = Obj();
					var_322_object = var_1_object;
					func_5641(var_322_object);
					if(var_321_bool != 0) {
						var_302_bool = 1;
					}
				}
				if(var_302_bool != 0) {
					@@@var_0_object:AddReply((int)7784, (int)8608, (int)8585);
				}
				var_330_bool = 0;
				var_330_bool = 0;
				var_331_bool = 0; var_332_object = Obj();
				var_332_object = var_1_object;
				func_5653(var_332_object);
				if(var_331_bool != 0) {
					var_337_bool = 0; var_338_object = Obj();
					var_338_object = var_1_object;
					func_5956(var_338_object);
					if(var_337_bool != 0) {
						var_330_bool = 1;
					}
				}
				if(var_330_bool != 0) {
					@@@var_0_object:AddReply((int)7785, (int)8687, (int)8586);
				}
				var_346_bool = 0;
				var_346_bool = 0;
				var_347_bool = 0; var_348_object = Obj();
				var_348_object = var_1_object;
				func_5968(var_348_object);
				if(var_347_bool != 0) {
					var_353_bool = 0; var_354_object = Obj();
					var_354_object = var_1_object;
					func_5665(var_354_object);
					if(var_353_bool != 0) {
						var_346_bool = 1;
					}
				}
				if(var_346_bool != 0) {
					@@@var_0_object:AddReply((int)7786, (int)8698, (int)8587);
				}
				var_362_bool = 0;
				var_362_bool = 0;
				var_363_bool = 0; var_364_object = Obj();
				var_364_object = var_1_object;
				func_5944(var_364_object);
				if(var_363_bool != 0) {
					var_369_bool = 0; var_370_object = Obj();
					var_370_object = var_1_object;
					func_5677(var_370_object);
					if(var_369_bool != 0) {
						var_362_bool = 1;
					}
				}
				if(var_362_bool != 0) {
					@@@var_0_object:AddReply((int)7788, (int)8710, (int)8589);
				}
				var_378_bool = 0;
				var_378_bool = 0;
				var_379_bool = 0; var_380_object = Obj();
				var_380_object = var_1_object;
				func_5843(var_380_object);
				if(var_379_bool != 0) {
					var_385_bool = 0; var_386_object = Obj();
					var_386_object = var_1_object;
					func_5689(var_386_object);
					if(var_385_bool != 0) {
						var_378_bool = 1;
					}
				}
				if(var_378_bool != 0) {
					@@@var_0_object:AddReply((int)7797, (int)8613, (int)8598);
				}
				var_394_bool = 0;
				var_394_bool = 0;
				var_395_bool = 0; var_396_object = Obj();
				var_396_object = var_1_object;
				func_5713(var_396_object);
				if(var_395_bool != 0) {
					var_401_bool = 0; var_402_object = Obj();
					var_402_object = var_1_object;
					func_5701(var_402_object);
					if(var_401_bool != 0) {
						var_394_bool = 1;
					}
				}
				if(var_394_bool != 0) {
					@@@var_0_object:AddReply((int)7914, (int)8734, (int)8733);
				}
				@@@var_0_object:AddReply((int)8703, (int)-1, (int)9540);
				goto Label_1651;
		}
	}
Label_1651:
	var_241_bool = 0;
	func_5108(var_241_bool);
	if(var_241_bool != 0) {

	Label_1655:
		lshWaitForAnimEnd();
		var_242_object = var_3_object;
		if(var_242_object != 0) {
		} else {
			var_243_string = "";
			var_243_string = var_2_object;
			func_4989(var_243_string);
			goto Label_1655;
	}
		PlayAnimation("all", "idle");

	Label_1670:
		WaitForAnimEnd();
		var_246_object = var_3_object;
		if(var_246_object != 0) {
			goto Label_1680;
		}
		PlayAnimation("all", "idle");
		goto Label_1670;

	}
	goto Label_1680;
	
Label_1680:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x53d";


func_4924(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_6205(var_31_object)
{
	var_32_bool = GlobalVars[1];
	var_33_bool = var_32_bool == 0; //@nz
	if(var_33_bool != 0) {
		var_34_int = 0; var_35_object = Obj();
		var_31_object = var_35_object;
		TaskCall(2);
		func_49(var_36_object, var_34_int, var_35_object);
		TaskReturn();
		var_143_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_144_bool = 0; var_145_int = 0;
	func_5089(var_144_bool, (int)1);
	if(var_144_bool != 0) {
		var_152_int = 0; var_153_object = Obj();
		var_31_object = var_153_object;
		TaskCall(6);
		func_1274(var_154_object, var_152_int, var_153_object);
		TaskReturn();
		return 0;
	}
	var_415_bool = 0; var_416_int = 0;
	func_5089(var_415_bool, (int)2);
	if(var_415_bool != 0) {
		var_417_int = 0; var_418_object = Obj();
		var_31_object = var_418_object;
		TaskCall(8);
		func_3346(var_419_object, var_417_int, var_418_object);
		TaskReturn();
		return 0;
	}
	var_477_bool = 0; var_478_int = 0;
	func_5089(var_477_bool, (int)3);
	if(var_477_bool != 0) {
		var_479_int = 0; var_480_object = Obj();
		var_31_object = var_480_object;
		TaskCall(10);
		func_3984(var_481_object, var_479_int, var_480_object);
		TaskReturn();
		return 0;
	}
	var_544_bool = 0; var_545_int = 0;
	func_5089(var_544_bool, (int)4);
	if(var_544_bool != 0) {
		var_546_int = 0; var_547_object = Obj();
		var_31_object = var_547_object;
		TaskCall(12);
		func_4315(var_548_object, var_546_int, var_547_object);
		TaskReturn();
		return 0;
	}
	var_632_bool = 0; var_633_int = 0;
	func_5089(var_632_bool, (int)6);
	if(var_632_bool != 0) {
		var_634_int = 0; var_635_object = Obj();
		var_31_object = var_635_object;
		TaskCall(4);
		func_353(var_636_object, var_634_int, var_635_object);
		TaskReturn();
		return 0;
	}
	func_5095((bool)0);
	return 0;
}


func_5181()
{
	SetVariable("ood1Julia7", (int)1);
	return 0;
}


func_4929(var_45_bool, var_46_object)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0;
	@@var_46_object:GetPosition(var_56_cvector);
	@@var_46_object:GetEyesHeight(var_55_float);
	var_63_float = GetByIndex(var_56_cvector, 1);
	var_63_float = var_63_float + var_55_float;
	SetByIndex(var_56_cvector, 1) = var_63_float;
	GetPosition(var_57_cvector);
	GetEyesHeight(var_55_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	var_64_float = var_64_float + var_55_float;
	SetByIndex(var_57_cvector, 1) = var_64_float;
	var_58_cvector = var_56_cvector - var_57_cvector;
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (float)0;
	var_66_int = var_58_cvector | var_58_cvector;
	var_67_float = sqrt(var_66_int);
	var_58_cvector = var_58_cvector / var_67_float;
	var_59_cvector = -var_58_cvector;
	var_69_float = var_58_cvector * (int)70;
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_71_cvector = var_59_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5014(var_70_cvector, var_71_cvector);
	var_79_float = var_70_cvector * (int)25;
	var_80_int = var_69_float + var_79_float;
	var_60_cvector = var_80_int - CVector(0.0, 10.0, 0.0);
	var_61_cvector = var_57_cvector + var_60_cvector;
	IsOverrideActive(var_62_bool);
	var_82_bool = var_62_bool;
	if(var_82_bool != 0) {
		var_45_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_61_cvector, var_59_cvector);
	var_83_float = GetByIndex(var_60_cvector, 0);
	var_84_float = GetByIndex(var_60_cvector, 2);
	Rotate(var_83_float, var_84_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_45_bool = 1;
	return 16;
}


func_5187()
{
	SetVariable("ood1Julia8", (int)1);
	return 0;
}


func_5956(var_315_bool)
{
	var_317_int = 0; var_318_string = "";
	func_5024(var_317_int, "KnowEva");
	var_320_bool = var_317_int == (int)1;
	if(var_320_bool != 0) {
		var_315_bool = 1;
		return 0;
	}
	var_315_bool = 0;
	return 0;
}


func_5701(var_379_bool)
{
	var_381_int = 0; var_382_string = "";
	func_5024(var_381_int, "ood1Julia9");
	var_384_bool = var_381_int == (int)0;
	if(var_384_bool != 0) {
		var_379_bool = 1;
		return 0;
	}
	var_379_bool = 0;
	return 0;
}


func_5193()
{
	SetVariable("ood1Julia9", (int)1);
	return 0;
}


func_5199()
{
	SetVariable("d1q01KnowEpidemic", (int)1);
	func_6153();
	return 0;
}


func_5968(var_325_bool)
{
	var_327_int = 0; var_328_string = "";
	func_5024(var_327_int, "KnowLara");
	var_330_bool = var_327_int == (int)1;
	if(var_330_bool != 0) {
		var_325_bool = 1;
		return 0;
	}
	var_325_bool = 0;
	return 0;
}


func_5713(var_373_bool)
{
	var_375_int = 0; var_376_string = "";
	func_5024(var_375_int, "KnowViktor");
	var_378_bool = var_375_int == (int)1;
	if(var_378_bool != 0) {
		var_373_bool = 1;
		return 0;
	}
	var_373_bool = 0;
	return 0;
}


func_3409(var_0_object, var_1_object, var_2_object, var_3_object, var_435_object, var_436_object)
{
	var_0_object = var_436_object;
	var_1_object = var_435_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_442_string = "";
		func_3526(var_436_object, "Neutral");
		@@@var_0_object:SetMessage((int)6914);
		@@@var_0_object:ClearReplies();
		var_448_bool = 0;
		var_448_bool = 0;
		var_449_bool = 0; var_450_object = Obj();
		var_450_object = var_1_object;
		func_5617(var_450_object);
		if(var_449_bool != 0) {
			var_455_bool = 0; var_456_object = Obj();
			var_456_object = var_1_object;
			func_5629(var_456_object);
			if(var_455_bool != 0) {
				var_448_bool = 1;
			}
		}
		if(var_448_bool != 0) {
			@@@var_0_object:AddReply((int)6915, (int)7622, (int)7621);
		}
		@@@var_0_object:AddReply((int)7747, (int)-1, (int)8548);
		goto Label_3496;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xdc6";
	EMIT "Pop(1)";
	EMIT "Push((int) 9294)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9295)";
	EMIT "Push((int) 10205)";
	EMIT "Push((int) 10204)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9306)";
	EMIT "Push((int) 10205)";
	EMIT "Push((int) 10216)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xda8";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xdc6";
	EMIT "Pop(1)";
	EMIT "Push((int) 9307)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9308)";
	EMIT "Push((int) 10220)";
	EMIT "Push((int) 10219)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9316)";
	EMIT "Push((int) 10229)";
	EMIT "Push((int) 10228)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9319)";
	EMIT "Push((int) 10233)";
	EMIT "Push((int) 10232)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xda8";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd55";
	}
Label_3496:
	var_467_bool = 0;
	func_5108(var_467_bool);
	if(var_467_bool != 0) {

	Label_3500:
		lshWaitForAnimEnd();
		var_468_object = var_3_object;
		if(var_468_object != 0) {
		} else {
			var_469_string = "";
			var_469_string = var_2_object;
			func_4989(var_469_string);
			goto Label_3500;
	}
		PlayAnimation("all", "idle");

	Label_3515:
		WaitForAnimEnd();
		var_472_object = var_3_object;
		if(var_472_object != 0) {
			goto Label_3525;
		}
		PlayAnimation("all", "idle");
		goto Label_3515;
	}
	goto Label_3525;
	
Label_3525:
	return 0;
	
}


func_5208()
{
	SetVariable("ood1Julia10", (int)1);
	return 0;
}


func_5980(var_36_bool)
{
	var_38_int = 0; var_39_string = "";
	func_5024(var_38_int, "ood3Julia1");
	var_43_bool = var_38_int == (int)0;
	if(var_43_bool != 0) {
		var_36_bool = 1;
		return 0;
	}
	var_36_bool = 0;
	return 0;
}


func_5725(var_179_bool)
{
	var_181_int = 0; var_182_string = "";
	func_5024(var_181_int, "d1q01KnowEpidemic");
	var_184_bool = var_181_int == (int)1;
	if(var_184_bool != 0) {
		var_179_bool = 1;
		return 0;
	}
	var_179_bool = 0;
	return 0;
}


func_5214()
{
	SetVariable("KnowJulia", (int)1);
	return 0;
}


func_353(var_0_object, var_634_int, var_635_object)
{
	var_637_object = Obj(); var_638_bool = 0; var_639_int = 0; var_640_bool = 0; var_641_object = Obj(); var_642_bool = 0; var_643_int = 0; var_644_bool = 0;
	var_0_object = var_635_object;
	var_645_bool = 0; var_646_object = Obj();
	var_635_object = var_646_object;
	func_4929(var_645_bool, var_646_object);
	var_647_bool = var_645_bool == 0; //@nz
	if(var_647_bool != 0) {
		var_634_int = -2;
		return 8;
	}
	CreateDialog(var_641_object);
	var_648_int = 0;
	func_5104(var_648_int);
	@@var_641_object:SetNPCName(var_648_int);
	var_649_string = "";
	func_5106(var_649_string);
	@@var_641_object:SetPhoto(var_649_string);
	var_650_int = 0;
	func_6136(var_650_int);
	@@var_641_object:SetPlayerName(var_650_int);
	IsOverrideActive(var_642_bool);
	var_651_bool = var_642_bool;
	if(var_651_bool != 0) {
		var_634_int = -2;
		return 8;
	}
	DoDialog(var_641_object);
	var_652_object = Obj(); var_653_object = Obj();
	var_635_object = var_652_object;
	var_641_object = var_653_object;
	TaskCall(5);
	func_416(var_654_object, var_655_object, var_656_string, var_657_bool, var_652_object, var_653_object);
	TaskReturn();
	@@var_641_object:IsDialogEnd(var_644_bool);
	
Label_398:
	var_736_bool = var_644_bool == 0; //@nz
	if(var_736_bool != 0) {
		sync();
		@@var_641_object:IsDialogEnd(var_644_bool);
		goto Label_398;
	}
	var_635_object = Obj();
	func_4985();
	StopDialog(var_641_object);
	@@var_641_object:GetReturnValue((int)-1);
	var_643_int = var_634_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5220()
{
	SetVariable("KnowRubin", (int)1);
	return 0;
}


func_5992(var_265_bool)
{
	var_267_int = 0; var_268_string = "";
	func_5024(var_267_int, "KnowMyth");
	var_270_bool = var_267_int == (int)1;
	if(var_270_bool != 0) {
		var_265_bool = 1;
		return 0;
	}
	var_265_bool = 0;
	return 0;
}


func_5737(var_185_bool)
{
	var_187_int = 0; var_188_string = "";
	func_5024(var_187_int, "ood1Julia10");
	var_190_bool = var_187_int == (int)0;
	if(var_190_bool != 0) {
		var_185_bool = 1;
		return 0;
	}
	var_185_bool = 0;
	return 0;
}


func_5226()
{
	SetVariable("ood4Julia1", (int)1);
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_97_object, var_98_object)
{
	var_0_object = var_98_object;
	var_1_object = var_97_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_104_object = Obj(); var_105_object = Obj();
		var_104_object = var_1_object;
		var_105_object = var_0_object;
		func_5214();
		var_108_string = "";
		func_180(var_98_object, "Neutral");
		@@@var_0_object:SetMessage((int)325);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)326, (int)383, (int)380);
		@@@var_0_object:AddReply((int)327, (int)383, (int)381);
		@@@var_0_object:AddReply((int)328, (int)393, (int)382);
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	var_133_bool = 0;
	func_5108(var_133_bool);
	if(var_133_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_134_object = var_3_object;
		if(var_134_object != 0) {
		} else {
			var_135_string = "";
			var_135_string = var_2_object;
			func_4989(var_135_string);
			goto Label_154;
	}
		PlayAnimation("all", "idle");

	Label_169:
		WaitForAnimEnd();
		var_138_object = var_3_object;
		if(var_138_object != 0) {
			goto Label_179;
		}
		PlayAnimation("all", "idle");
		goto Label_169;
	}
	goto Label_179;
	
Label_179:
	return 0;
	
}


func_5232()
{
	SetVariable("d4q02JuliaGivesMedcine", (int)1);
	return 0;
}


func_5492()
{
	return 0;
}


func_5749(var_212_bool)
{
	var_214_int = 0; var_215_string = "";
	func_5024(var_214_int, "KnowRubin");
	var_217_bool = var_214_int == (int)1;
	if(var_217_bool != 0) {
		var_212_bool = 1;
		return 0;
	}
	var_212_bool = 0;
	return 0;
}


func_5238(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	var_48_bool = 0;
	var_48_bool = 0;
	var_49_bool = 0;
	var_49_bool = 0;
	var_50_int = 0; var_51_string = "";
	func_5024(var_50_int, "d4q02AnnaGivesMedcine");
	var_55_bool = var_50_int == (int)1;
	if(var_55_bool != 0) {
		var_56_int = 0; var_57_string = "";
		func_5024(var_56_int, "d4q02JuliaGivesMedcine");
		var_59_bool = var_56_int == (int)1;
		if(var_59_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		var_60_int = 0; var_61_string = "";
		func_5024(var_60_int, "d4q02LaraGivesMedcine");
		var_63_bool = var_60_int == (int)1;
		if(var_63_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		SetVariable("d4q02", (int)2);
		func_6086(Obj());
		var_66_object = var_47_object;
		var_77_float = 0;
		func_5067(var_77_float);
		@@var_47_object:AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", (int)0, (int)11842, var_77_float);
		var_80_bool = 0; var_81_string = ""; var_82_string = "";
		func_5055(var_80_bool, "quest_d4_02", "birdmask");
		var_86_object = Obj(); var_87_string = ""; var_88_float = 0;
		func_6086(Obj());
		var_89_object = var_86_object;
		func_6103(var_86_object, "pt_d4q02_birdmask", (float)2);
		var_109_object = Obj();
		func_6086(var_109_object);
		@@var_45_object:ShowMap(var_109_object);
		var_47_object = 0;
	}
	return 2;
}


func_6004(var_282_bool)
{
	var_284_int = 0; var_285_string = "";
	func_5024(var_284_int, "KnowPredictions");
	var_287_bool = var_284_int == (int)1;
	if(var_287_bool != 0) {
		var_282_bool = 1;
		return 0;
	}
	var_282_bool = 0;
	return 0;
}


func_5494(var_110_object)
{
	Trace("feromicin is given");
	var_113_object = Obj(); var_114_string = ""; var_115_int = 0;
	var_110_object = var_113_object;
	func_5042(var_113_object, "feromicin", (int)1);
	return 0;
}


func_4985()
{
	CameraSwitchToNormal();
	return 0;
}


func_4989(var_35_string)
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


func_4480(var_2_object, var_171_string)
{
	var_172_bool = 0;
	func_5108(var_172_bool);
	var_173_bool = var_172_bool == 0; //@nz
	if(var_173_bool != 0) {
		return 0;
	}
	var_174_bool = var_171_string == var_2_object;
	if(var_174_bool != 0) {
		return 0;
	}
	var_175_string = "";
	var_171_string = var_175_string;
	func_4989(var_175_string);
	var_2_object = var_171_string;
	return 0;
}


func_5761(var_288_bool, var_289_object)
{
	var_290_bool = 0; var_291_object = Obj();
	var_289_object = var_291_object;
	func_6016(var_291_object);
	if(var_290_bool != 0) {
		var_288_bool = 1;
		return 0;
	}
	var_288_bool = 0;
	return 0;
}


func_5505()
{
	SetVariable("ood3Julia1", (int)1);
	return 0;
}


func_6016(var_290_bool)
{
	var_292_int = 0;
	func_5081(var_292_int);
	var_298_bool = var_292_int >= (int)18;
	if(var_298_bool != 0) {
		var_290_bool = 1;
		return 0;
	}
	var_290_bool = 0;
	return 0;
}


func_5511(var_129_object)
{
	Trace("neomicin is given");
	var_132_object = Obj(); var_133_string = ""; var_134_int = 0;
	var_129_object = var_132_object;
	func_5042(var_132_object, "neomicin", (int)1);
	return 0;
}


func_5771(var_197_bool)
{
	var_199_int = 0; var_200_string = "";
	func_5024(var_199_int, "d4q01");
	var_202_bool = var_199_int == (int)1;
	if(var_202_bool != 0) {
		var_197_bool = 1;
		return 0;
	}
	var_197_bool = 0;
	return 0;
}


func_6027(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj();
	GetDiaryRoot(var_71_object);
	var_72_bool = var_71_object == 0; //@nz
	if(var_72_bool != 0) {
		Trace("Can't retrieve diary root");
		var_69_object = 0;
		return 2;
	}
	var_71_object = var_69_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5007()
{
	var_33_bool = 0;
	func_5108(var_33_bool);
	if(var_33_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3984(var_0_object, var_479_int, var_480_object)
{
	var_482_object = Obj(); var_483_bool = 0; var_484_int = 0; var_485_bool = 0; var_486_object = Obj(); var_487_bool = 0; var_488_int = 0; var_489_bool = 0;
	var_0_object = var_480_object;
	var_490_bool = 0; var_491_object = Obj();
	var_480_object = var_491_object;
	func_4929(var_490_bool, var_491_object);
	var_492_bool = var_490_bool == 0; //@nz
	if(var_492_bool != 0) {
		var_479_int = -2;
		return 8;
	}
	CreateDialog(var_486_object);
	var_493_int = 0;
	func_5104(var_493_int);
	@@var_486_object:SetNPCName(var_493_int);
	var_494_string = "";
	func_5106(var_494_string);
	@@var_486_object:SetPhoto(var_494_string);
	var_495_int = 0;
	func_6136(var_495_int);
	@@var_486_object:SetPlayerName(var_495_int);
	IsOverrideActive(var_487_bool);
	var_496_bool = var_487_bool;
	if(var_496_bool != 0) {
		var_479_int = -2;
		return 8;
	}
	DoDialog(var_486_object);
	var_497_object = Obj(); var_498_object = Obj();
	var_480_object = var_497_object;
	var_486_object = var_498_object;
	TaskCall(11);
	func_4047(var_499_object, var_500_object, var_501_string, var_502_bool, var_497_object, var_498_object);
	TaskReturn();
	@@var_486_object:IsDialogEnd(var_489_bool);
	
Label_4029:
	var_542_bool = var_489_bool == 0; //@nz
	if(var_542_bool != 0) {
		sync();
		@@var_486_object:IsDialogEnd(var_489_bool);
		goto Label_4029;
	}
	var_480_object = Obj();
	func_4985();
	StopDialog(var_486_object);
	@@var_486_object:GetReturnValue((int)-1);
	var_488_int = var_479_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1681(var_2_object, var_196_string)
{
	var_197_bool = 0;
	func_5108(var_197_bool);
	var_198_bool = var_197_bool == 0; //@nz
	if(var_198_bool != 0) {
		return 0;
	}
	var_199_bool = var_196_string == var_2_object;
	if(var_199_bool != 0) {
		return 0;
	}
	var_200_string = "";
	var_196_string = var_200_string;
	func_4989(var_200_string);
	var_2_object = var_196_string;
	return 0;
}


func_5522(var_135_object)
{
	Trace("monomicin is given");
	var_138_object = Obj(); var_139_string = ""; var_140_int = 0;
	var_135_object = var_138_object;
	func_5042(var_138_object, "monomicin", (int)1);
	return 0;
}


func_5014(var_70_cvector, var_71_cvector)
{
	var_73_float = 0; var_74_float = 0;
	var_75_int = var_71_cvector | var_71_cvector;
	var_74_float = sqrt(var_75_int);
	var_76_float = 9.999999974752427e-07;
	var_77_bool = var_74_float < var_76_float;
	if(var_77_bool != 0) {
		var_70_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_70_cvector = var_71_cvector / var_74_float;
	return 2;
}


func_5783(var_187_bool)
{
	var_189_int = 0; var_190_string = "";
	func_5024(var_189_int, "ood4Julia1");
	var_192_bool = var_189_int == (int)0;
	if(var_192_bool != 0) {
		var_187_bool = 1;
		return 0;
	}
	var_187_bool = 0;
	return 0;
}


func_6040(var_60_bool, var_61_object, var_62_int)
{
	var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; var_66_object = Obj(); var_67_object = Obj(); var_68_int = 0;
	func_6027(Obj());
	var_69_object = var_66_object;
	@@var_66_object:Find(var_62_int, var_67_object);
	var_74_bool = var_67_object == 0; //@nz
	if(var_74_bool != 0) {
		var_76_int = "Can't find diary parent with id: " + var_62_int;
		Trace(var_76_int);
		var_60_bool = 0;
		return 6;
	}
	@@var_67_object:AddChild(var_61_object);
	SetVariable("player_diary", (int)1);
	@@var_61_object:GetCategory(var_68_int);
	SetDiarySection(var_68_int);
	var_60_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5533(var_157_bool)
{
	var_159_int = 0; var_160_string = "";
	func_5024(var_159_int, "ood1Julia1");
	var_164_bool = var_159_int == (int)0;
	if(var_164_bool != 0) {
		var_157_bool = 1;
		return 0;
	}
	var_157_bool = 0;
	return 0;
}


func_416(var_0_object, var_1_object, var_2_object, var_3_object, var_652_object, var_653_object)
{
	var_0_object = var_653_object;
	var_1_object = var_652_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_659_string = "";
		func_546(var_653_object, "Neutral");
		@@@var_0_object:SetMessage((int)3640);
		@@@var_0_object:ClearReplies();
		var_665_bool = 0;
		var_665_bool = 0;
		var_666_bool = 0; var_667_object = Obj();
		var_667_object = var_1_object;
		func_5867(var_667_object);
		if(var_666_bool != 0) {
			var_672_bool = 0; var_673_object = Obj();
			var_673_object = var_1_object;
			func_5879(var_673_object);
			if(var_672_bool != 0) {
				var_665_bool = 1;
			}
		}
		if(var_665_bool != 0) {
			@@@var_0_object:AddReply((int)3641, (int)3945, (int)3943);
		}
		var_681_bool = 0;
		var_681_bool = 0;
		var_682_bool = 0; var_683_object = Obj();
		var_683_object = var_1_object;
		func_5855(var_683_object);
		if(var_682_bool != 0) {
			var_688_bool = 0; var_689_object = Obj();
			var_689_object = var_1_object;
			func_5891(var_689_object);
			if(var_688_bool != 0) {
				var_681_bool = 1;
			}
		}
		if(var_681_bool != 0) {
			@@@var_0_object:AddReply((int)12733, (int)11803, (int)13927);
		}
		var_697_bool = 0;
		var_697_bool = 0;
		var_698_bool = 0;
		var_698_bool = 0;
		var_699_bool = 0;
		var_699_bool = 0;
		var_700_bool = 0; var_701_object = Obj();
		var_701_object = var_1_object;
		func_5903(var_701_object);
		if(var_700_bool != 0) {
			var_706_bool = 0; var_707_object = Obj();
			var_707_object = var_1_object;
			func_5915(var_707_object);
			if(var_706_bool != 0) {
				var_699_bool = 1;
			}
		}
		if(var_699_bool != 0) {
			var_708_bool = 0; var_709_object = Obj();
			var_709_object = var_1_object;
			func_5920(var_709_object);
			var_714_bool = var_708_bool == 0; //@nz
			if(var_714_bool != 0) {
				var_698_bool = 1;
			}
		}
		if(var_698_bool != 0) {
			var_715_bool = 0; var_716_object = Obj();
			var_716_object = var_1_object;
			func_5932(var_716_object);
			var_721_bool = var_715_bool == 0; //@nz
			if(var_721_bool != 0) {
				var_697_bool = 1;
			}
		}
		if(var_697_bool != 0) {
			@@@var_0_object:AddReply((int)12734, (int)11840, (int)13928);
		}
		@@@var_0_object:AddReply((int)3642, (int)-1, (int)3944);
		goto Label_516;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a4";
	}
Label_516:
	var_728_bool = 0;
	func_5108(var_728_bool);
	if(var_728_bool != 0) {

	Label_520:
		lshWaitForAnimEnd();
		var_729_object = var_3_object;
		if(var_729_object != 0) {
		} else {
			var_730_string = "";
			var_730_string = var_2_object;
			func_4989(var_730_string);
			goto Label_520;
	}
		PlayAnimation("all", "idle");

	Label_535:
		WaitForAnimEnd();
		var_733_object = var_3_object;
		if(var_733_object != 0) {
			goto Label_545;
		}
		PlayAnimation("all", "idle");
		goto Label_535;
	}
	goto Label_545;
	
Label_545:
	return 0;
	
}


func_5024(var_50_int, var_51_string)
{
	var_52_int = 0; var_53_int = 0;
	GetVariable(var_51_string, var_53_int);
	var_53_int = var_50_int;
	return 2;
}


func_5795(var_203_bool)
{
	var_205_int = 0; var_206_string = "";
	func_5024(var_205_int, "d4q02JuliaGivesMedcine");
	var_208_bool = var_205_int == (int)1;
	if(var_208_bool != 0) {
		var_203_bool = 1;
		return 0;
	}
	var_203_bool = 0;
	return 0;
}


func_5029(var_118_object, var_119_object, var_120_int)
{
	var_121_int = 0; var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_int = 0; var_126_bool = 0;
	@@var_119_object:GetItemID(var_124_int);
	GetInvItemProperty(var_125_int, var_124_int, "Category");
	@@var_118_object:AddItem(var_126_bool, var_119_object, var_125_int, var_120_int);
	var_128_bool = var_126_bool == 0; //@nz
	if(var_128_bool != 0) {
		@@var_118_object:DropItems(var_119_object, var_120_int);
	}
	return 6;
}


func_5545(var_249_bool)
{
	var_251_int = 0; var_252_string = "";
	func_5024(var_251_int, "ood1Julia2");
	var_254_bool = var_251_int == (int)0;
	if(var_254_bool != 0) {
		var_249_bool = 1;
		return 0;
	}
	var_249_bool = 0;
	return 0;
}


func_5807(var_220_bool)
{
	var_222_int = 0; var_223_string = "";
	func_5024(var_222_int, "d4q02");
	var_225_bool = var_222_int == (int)1000;
	if(var_225_bool != 0) {
		var_220_bool = 1;
		return 0;
	}
	var_220_bool = 0;
	return 0;
}


func_5042(var_113_object, var_114_string, var_115_int)
{
	var_116_object = Obj(); var_117_object = Obj();
	CreateInvItem(var_117_object);
	@@var_117_object:SetItemName(var_114_string);
	var_118_object = Obj(); var_119_object = Obj(); var_120_int = 0;
	var_113_object = var_118_object;
	var_117_object = var_119_object;
	var_115_int = var_120_int;
	func_5029(var_118_object, var_119_object, var_120_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_180(var_2_object, var_40_string)
{
	var_41_bool = 0;
	func_5108(var_41_bool);
	var_42_bool = var_41_bool == 0; //@nz
	if(var_42_bool != 0) {
		return 0;
	}
	var_43_bool = var_40_string == var_2_object;
	if(var_43_bool != 0) {
		return 0;
	}
	var_44_string = "";
	var_40_string = var_44_string;
	func_4989(var_44_string);
	var_2_object = var_40_string;
	return 0;
}


func_5557(var_271_bool)
{
	var_273_int = 0; var_274_string = "";
	func_5024(var_273_int, "ood1Julia3");
	var_276_bool = var_273_int == (int)0;
	if(var_276_bool != 0) {
		var_271_bool = 1;
		return 0;
	}
	var_271_bool = 0;
	return 0;
}


func_6069(var_166_bool, var_167_int)
{
	var_168_object = Obj(); var_169_object = Obj(); var_170_object = Obj(); var_171_object = Obj();
	func_6027(Obj());
	var_172_object = var_170_object;
	@@var_170_object:Find(var_167_int, var_171_object);
	var_173_bool = var_171_object == 0; //@nz
	if(var_173_bool != 0) {
		var_166_bool = 0;
		return 4;
	}
	@@var_171_object:Remove();
	var_166_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5306()
{
	SetVariable("ood4Julia2", (int)1);
	return 0;
}


func_5819(var_214_bool)
{
	var_216_int = 0; var_217_string = "";
	func_5024(var_216_int, "ood4Julia2");
	var_219_bool = var_216_int == (int)0;
	if(var_219_bool != 0) {
		var_214_bool = 1;
		return 0;
	}
	var_214_bool = 0;
	return 0;
}


func_5055(var_80_bool, var_81_string, var_82_string)
{
	var_83_object = Obj(); var_84_object = Obj();
	FindActor(var_84_object, var_81_string);
	var_85_bool = var_84_object == 0; //@ne
	if(var_85_bool != 0) {
		var_80_bool = 0;
		return 2;
	}
	Trigger(var_84_object, var_82_string);
	var_80_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5312()
{
	SetVariable("KnowMistresses", (int)1);
	return 0;
}


func_5569(var_172_bool)
{
	var_174_int = 0; var_175_string = "";
	func_5024(var_174_int, "d1q01");
	var_177_bool = var_174_int == (int)1000;
	if(var_177_bool != 0) {
		var_172_bool = 1;
		return 0;
	}
	var_172_bool = 0;
	return 0;
}


func_5318()
{
	SetVariable("ood6Julia1", (int)1);
	return 0;
}


func_5831(var_595_bool)
{
	var_597_int = 0; var_598_string = "";
	func_5024(var_597_int, "KnowMistresses");
	var_600_bool = var_597_int == (int)1;
	if(var_600_bool != 0) {
		var_595_bool = 1;
		return 0;
	}
	var_595_bool = 0;
	return 0;
}


func_3526(var_2_object, var_63_string)
{
	var_64_bool = 0;
	func_5108(var_64_bool);
	var_65_bool = var_64_bool == 0; //@nz
	if(var_65_bool != 0) {
		return 0;
	}
	var_66_bool = var_63_string == var_2_object;
	if(var_66_bool != 0) {
		return 0;
	}
	var_67_string = "";
	var_63_string = var_67_string;
	func_4989(var_67_string);
	var_2_object = var_63_string;
	return 0;
}


func_6086(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj();
	GetMainOutdoorScene(var_69_object);
	var_71_bool = var_69_object == 0; //@ne
	if(var_71_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_70_object = 0;
		var_70_object = var_66_object;
		return 4;
	}
	@@var_69_object:GetMap(var_70_object);
	var_70_object = var_66_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5067(var_77_float)
{
	var_78_float = 0; var_79_float = 0;
	GetGameTime(var_79_float);
	var_79_float = var_77_float;
	return 2;
}


func_5324()
{
	SetVariable("ood6Julia2", (int)1);
	return 0;
}


func_5581(var_165_bool)
{
	var_167_int = 0; var_168_string = "";
	func_5024(var_167_int, "d1q01");
	var_170_bool = var_167_int == (int)0;
	if(var_170_bool != 0) {
		var_165_bool = 1;
		return 0;
	}
	var_165_bool = 0;
	return 0;
}


func_4047(var_0_object, var_1_object, var_2_object, var_3_object, var_497_object, var_498_object)
{
	var_0_object = var_498_object;
	var_1_object = var_497_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_504_bool = 0; var_505_object = Obj();
		var_505_object = var_1_object;
		func_5980(var_505_object);
		if(var_504_bool != 0) {
			var_510_object = Obj(); var_511_object = Obj();
			var_510_object = var_1_object;
			var_511_object = var_0_object;
			func_5505();
			var_514_string = "";
			func_4135(var_498_object, "Neutral");
			@@@var_0_object:SetMessage((int)9865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9866, (int)10867, (int)10866);
			@@@var_0_object:AddReply((int)9877, (int)-1, (int)10880);
			@@@var_0_object:AddReply((int)9878, (int)10882, (int)10881);
		} else {
				var_537_string = "";
				func_4135(var_498_object, "Neutral");
				@@@var_0_object:SetMessage((int)10190);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15313, (int)-1, (int)16551);
				goto Label_4105;
		}
	}
Label_4105:
	var_529_bool = 0;
	func_5108(var_529_bool);
	if(var_529_bool != 0) {

	Label_4109:
		lshWaitForAnimEnd();
		var_530_object = var_3_object;
		if(var_530_object != 0) {
		} else {
			var_531_string = "";
			var_531_string = var_2_object;
			func_4989(var_531_string);
			goto Label_4109;
	}
		PlayAnimation("all", "idle");

	Label_4124:
		WaitForAnimEnd();
		var_534_object = var_3_object;
		if(var_534_object != 0) {
			goto Label_4134;
		}
		PlayAnimation("all", "idle");
		goto Label_4124;

	}
	goto Label_4134;
	
Label_4134:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xfd3";


func_5072(var_146_int)
{
	var_147_float = 0; var_148_float = 0;
	GetGameTime(var_148_float);
	var_150_int = 0;
	var_150_int = var_148_float / (int)24;
	var_146_int = (int)1 + var_150_int;
	return 2;
}


func_5330(var_52_object)
{
	func_6169();
	Trace("julia blood is given");
	var_80_object = Obj(); var_81_string = ""; var_82_int = 0;
	var_52_object = var_80_object;
	func_5042(var_80_object, "d6q01_julia_blood", (int)1);
	return 0;
}


func_5843(var_357_bool)
{
	var_359_int = 0; var_360_string = "";
	func_5024(var_359_int, "KnowMark");
	var_362_bool = var_359_int == (int)1;
	if(var_362_bool != 0) {
		var_357_bool = 1;
		return 0;
	}
	var_357_bool = 0;
	return 0;
}


func_6103(var_86_object, var_87_string, var_88_float)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_object = Obj(); var_93_bool = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_object = Obj(); var_97_bool = 0;
	GetMainOutdoorScene(var_96_object);
	var_98_bool = var_96_object == 0; //@ne
	if(var_98_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_96_object:GetLocator(var_87_string, var_97_bool, var_94_cvector, var_95_cvector);
	var_100_bool = var_97_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_102_int = "Warning: outdoor scene locator " + var_87_string;
		var_104_int = var_102_int + " doesnt exist";
		Trace(var_104_int);
	}
	@@var_96_object:GetMap(var_86_object);
	var_105_bool = var_86_object == 0; //@ne
	if(var_105_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_107_float = GetByIndex(var_94_cvector, 0);
	var_108_float = GetByIndex(var_94_cvector, 2);
	@@var_86_object:SetMapParams(var_107_float, var_108_float, var_88_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5593(var_255_bool)
{
	var_257_int = 0; var_258_string = "";
	func_5024(var_257_int, "d1q01FirstGeorgVisit");
	var_260_bool = var_257_int == (int)1;
	if(var_260_bool != 0) {
		var_255_bool = 1;
		return 0;
	}
	var_255_bool = 0;
	return 0;
}


func_5081(var_292_int)
{
	var_293_float = 0; var_294_float = 0;
	GetGameTime(var_294_float);
	var_295_int = 0;
	var_294_float = var_295_int;
	var_292_int = var_295_int % (int)24;
	return 2;
}


func_4315(var_0_object, var_546_int, var_547_object)
{
	var_549_object = Obj(); var_550_bool = 0; var_551_int = 0; var_552_bool = 0; var_553_object = Obj(); var_554_bool = 0; var_555_int = 0; var_556_bool = 0;
	var_0_object = var_547_object;
	var_557_bool = 0; var_558_object = Obj();
	var_547_object = var_558_object;
	func_4929(var_557_bool, var_558_object);
	var_559_bool = var_557_bool == 0; //@nz
	if(var_559_bool != 0) {
		var_546_int = -2;
		return 8;
	}
	CreateDialog(var_553_object);
	var_560_int = 0;
	func_5104(var_560_int);
	@@var_553_object:SetNPCName(var_560_int);
	var_561_string = "";
	func_5106(var_561_string);
	@@var_553_object:SetPhoto(var_561_string);
	var_562_int = 0;
	func_6136(var_562_int);
	@@var_553_object:SetPlayerName(var_562_int);
	IsOverrideActive(var_554_bool);
	var_563_bool = var_554_bool;
	if(var_563_bool != 0) {
		var_546_int = -2;
		return 8;
	}
	DoDialog(var_553_object);
	var_564_object = Obj(); var_565_object = Obj();
	var_547_object = var_564_object;
	var_553_object = var_565_object;
	TaskCall(13);
	func_4378(var_566_object, var_567_object, var_568_string, var_569_bool, var_564_object, var_565_object);
	TaskReturn();
	@@var_553_object:IsDialogEnd(var_556_bool);
	
Label_4360:
	var_630_bool = var_556_bool == 0; //@nz
	if(var_630_bool != 0) {
		sync();
		@@var_553_object:IsDialogEnd(var_556_bool);
		goto Label_4360;
	}
	var_547_object = Obj();
	func_4985();
	StopDialog(var_553_object);
	@@var_553_object:GetReturnValue((int)-1);
	var_555_int = var_546_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5855(var_231_bool)
{
	var_233_int = 0; var_234_string = "";
	func_5024(var_233_int, "d6q01");
	var_236_bool = var_233_int == (int)1;
	if(var_236_bool != 0) {
		var_231_bool = 1;
		return 0;
	}
	var_231_bool = 0;
	return 0;
}


func_5344()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5089(var_144_bool, var_145_int)
{
	var_146_int = 0;
	func_5072(var_146_int);
	var_144_bool = var_146_int == var_145_int;
	return 0;
}


func_5605(var_464_bool)
{
	var_466_int = 0; var_467_string = "";
	func_5024(var_466_int, "KnowDiamAce");
	var_469_bool = var_466_int == (int)1;
	if(var_469_bool != 0) {
		var_464_bool = 1;
		return 0;
	}
	var_464_bool = 0;
	return 0;
}


func_5350()
{
	var_116_object = Obj(); var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj();
	SetVariable("d6q01JuliaVolonteer", (int)1);
	func_6086(Obj());
	var_122_object = var_118_object;
	@@var_118_object:FindMark(var_119_object, "d6q01AlexandrGotoJulia");
	var_130_object = var_119_object;
	if(var_130_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01AlexandrGotoKaterina");
	var_132_object = var_119_object;
	if(var_132_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01AlexandrGotoLara");
	var_134_object = var_119_object;
	if(var_134_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01AlexangrGotoJulLaraSelf");
	var_136_object = var_119_object;
	if(var_136_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01BigVladGotoAnna");
	var_138_object = var_119_object;
	if(var_138_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01BigVladGotoAnnaOspinaSelf");
	var_140_object = var_119_object;
	if(var_140_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01BigVladGotoOspina");
	var_142_object = var_119_object;
	if(var_142_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01KaterinaGotoLaska");
	var_144_object = var_119_object;
	if(var_144_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01KaterinagotoLaskaSelf");
	var_146_object = var_119_object;
	if(var_146_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01KillerIsKlara");
	var_148_object = var_119_object;
	if(var_148_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01LaskaGotoAlbinos");
	var_150_object = var_119_object;
	if(var_150_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01ViktorGotoAlexandr");
	var_152_object = var_119_object;
	if(var_152_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01ViktorGotoAlxBigSelf");
	var_154_object = var_119_object;
	if(var_154_object != 0) {
		@@var_119_object:Remove();
	}
	@@var_118_object:FindMark(var_119_object, "d6q01ViktorGotoBigVlad");
	var_156_object = var_119_object;
	if(var_156_object != 0) {
		@@var_119_object:Remove();
	}
	func_6185();
	var_166_bool = 0; var_167_int = 0;
	func_6069(var_166_bool, (int)112);
	var_174_bool = 0; var_175_int = 0;
	func_6069(var_174_bool, (int)113);
	var_176_bool = 0; var_177_int = 0;
	func_6069(var_176_bool, (int)114);
	var_178_bool = 0; var_179_int = 0;
	func_6069(var_178_bool, (int)115);
	var_180_bool = 0; var_181_int = 0;
	func_6069(var_180_bool, (int)116);
	var_182_bool = 0; var_183_int = 0;
	func_6069(var_182_bool, (int)117);
	var_184_bool = 0; var_185_string = ""; var_186_string = "";
	func_5055(var_184_bool, "quest_d6_01", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5095(var_738_bool)
{
	var_739_bool = 0; var_740_bool = 0;
	var_741_string = "";
	func_4989("No");
	lshWaitForAnimEnd(var_740_bool);
	var_740_bool = var_738_bool;
	return 2;
}


func_5867(var_213_bool)
{
	var_215_int = 0; var_216_string = "";
	func_5024(var_215_int, "d5q01");
	var_220_bool = var_215_int == (int)1000;
	if(var_220_bool != 0) {
		var_213_bool = 1;
		return 0;
	}
	var_213_bool = 0;
	return 0;
}


func_5104(var_86_int)
{
	var_86_int = 2862;
	return 0;
}


func_5617(var_80_bool)
{
	var_82_int = 0; var_83_string = "";
	func_5024(var_82_int, "ood2Julia1");
	var_87_bool = var_82_int == (int)0;
	if(var_87_bool != 0) {
		var_80_bool = 1;
		return 0;
	}
	var_80_bool = 0;
	return 0;
}


func_5106(var_87_string)
{
	var_87_string = "ui/NPC_Julia.png";
	return 0;
}


func_5108(var_33_bool)
{
	var_33_bool = 1;
	return 0;
}


func_5110()
{
	SetVariable("ood1Julia1", (int)1);
	return 0;
}


func_5879(var_221_bool)
{
	var_223_int = 0; var_224_string = "";
	func_5024(var_223_int, "ood6Julia1");
	var_226_bool = var_223_int == (int)0;
	if(var_226_bool != 0) {
		var_221_bool = 1;
		return 0;
	}
	var_221_bool = 0;
	return 0;
}


func_6136(var_88_int)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable("player", var_90_int);
	var_93_bool = var_90_int == (int)0;
	if(var_93_bool != 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0x1807";
	}
	var_95_bool = var_90_int == (int)1;
	if(var_95_bool != 0) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
	return 2;
}


func_1274(var_0_object, var_152_int, var_153_object)
{
	var_155_object = Obj(); var_156_bool = 0; var_157_int = 0; var_158_bool = 0; var_159_object = Obj(); var_160_bool = 0; var_161_int = 0; var_162_bool = 0;
	var_0_object = var_153_object;
	var_163_bool = 0; var_164_object = Obj();
	var_153_object = var_164_object;
	func_4929(var_163_bool, var_164_object);
	var_165_bool = var_163_bool == 0; //@nz
	if(var_165_bool != 0) {
		var_152_int = -2;
		return 8;
	}
	CreateDialog(var_159_object);
	var_166_int = 0;
	func_5104(var_166_int);
	@@var_159_object:SetNPCName(var_166_int);
	var_167_string = "";
	func_5106(var_167_string);
	@@var_159_object:SetPhoto(var_167_string);
	var_168_int = 0;
	func_6136(var_168_int);
	@@var_159_object:SetPlayerName(var_168_int);
	IsOverrideActive(var_160_bool);
	var_169_bool = var_160_bool;
	if(var_169_bool != 0) {
		var_152_int = -2;
		return 8;
	}
	DoDialog(var_159_object);
	var_170_object = Obj(); var_171_object = Obj();
	var_153_object = var_170_object;
	var_159_object = var_171_object;
	TaskCall(7);
	func_1337(var_172_object, var_173_object, var_174_string, var_175_bool, var_170_object, var_171_object);
	TaskReturn();
	@@var_159_object:IsDialogEnd(var_162_bool);
	
Label_1319:
	var_413_bool = var_162_bool == 0; //@nz
	if(var_413_bool != 0) {
		sync();
		@@var_159_object:IsDialogEnd(var_162_bool);
		goto Label_1319;
	}
	var_153_object = Obj();
	func_4985();
	StopDialog(var_159_object);
	@@var_159_object:GetReturnValue((int)-1);
	var_161_int = var_152_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5116()
{
	SetVariable("ood1Julia2", (int)1);
	return 0;
}


func_5629(var_88_bool)
{
	var_90_int = 0; var_91_string = "";
	func_5024(var_90_int, "d2q03");
	var_93_bool = var_90_int == (int)1;
	if(var_93_bool != 0) {
		var_88_bool = 1;
		return 0;
	}
	var_88_bool = 0;
	return 0;
}


