// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Grief|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Lara.png|W:ood1Lara1|W:ood1Lara2|W:ood1Lara3|W:playsound|W:giveitem|W:ood2Lara1|W:ood2Lara2|W:ood2Lara3|W:d2q03|W:d2q03LaraGotoMoneyFoodSelf|W:pt_map_lara|A:AddMark|W:d2q03LaraGotoJulia|W:pt_map_julia|W:d2q03LaraGotoMaria|W:pt_map_maria|W:d2q03LaraGotoMladVlad|W:pt_map_mladvlad|W:quest_d2_03|W:d2q03LaraGotoSklad|W:pt_map_d2q03_shouse|W:d2q03LaraGotoSkladSelf|W:d2q03BirdmaskGotoLara|A:FindMark|A:Remove|W:d2q03BirdmaskGotoLaraSelf|W:smoked_meat|A:RemoveItemByType|W:dried_fish|W:bread|W:completed|W:birdmask|W:d1q01KnowEpidemic|W:pt_map_ospina|A:ShowMap|W:ood4Lara1|W:d4q01|W:d4q01LaraGotoMladVlad|W:d4q01LaraGotoMladVladSelf|W:ood4Lara2|W:d4q01_subquest|W:d4q01LaraGotoOspina|W:d4q01LaraGotoOspinaSelf|W:ood4Lara3|W:d4q02LaraGivesMedcine|W:d4q02AnnaGivesMedcine|W:d4q02JuliaGivesMedcine|W:d4q02|W:d4q02BirdmaskNearHome|W:pt_d4q02_birdmask|W:quest_d4_02|W:ood4Lara4|W:d5q01|W:quest_d5_01|W:factory|W:ood6Lara1|W:lara blood is given|W:d6q01_lara_blood|W:ood6Lara2|W:ood6Lara3|W:ood6Lara4|W:d6q01LaraVolonteer|W:d6q01AlexandrGotoJulia|W:d6q01AlexandrGotoKaterina|W:d6q01AlexandrGotoLara|W:d6q01AlexangrGotoJulLaraSelf|W:d6q01BigVladGotoAnna|W:d6q01BigVladGotoAnnaOspinaSelf|W:d6q01BigVladGotoOspina|W:d6q01KaterinaGotoLaska|W:d6q01KaterinagotoLaskaSelf|W:d6q01KillerIsKlara|W:d6q01LaskaGotoAlbinos|W:d6q01ViktorGotoAlexandr|W:d6q01ViktorGotoAlxBigSelf|W:d6q01ViktorGotoBigVlad|W:quest_d6_01|W:KnowLara|W:KnowMaria|W:ood1Lara4|W:ood1Lara5|W:ood1Lara6|W:ood1Lara7|W:ood1Lara8|W:ood1Lara9|W:morfin is given|W:morfin|W:etorfin is given|W:etorfin|W:novocaine is given|W:novocaine|W:KnowPredictions|W:KnowWarehouses|W:d1q01|W:KnowMark|W:d6q01|W:microscope_d6q01_lara_blood|W:KnowAlexandr|W:KnowJulia|W:KnowKaterina|W:KnowMladVlad|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0xba vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x237 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x641 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xacf vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe67 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1212 vars=int,int
// @PE: 0x23,0x29,0x70,0xaa,0xba,0x19b,0x227,0x237,0x4f3,0x631,0x641,0x9f4,0xabf,0xacf,0xdc2,0xe57,0xe67,0x11c3,0x1202,0x1212,0x1367,0x13da,0x13ef,0x13f5,0x13fb,0x1401,0x1407,0x140d,0x1413,0x14c6,0x14cc,0x14d3,0x14dc,0x14ec,0x14fc,0x1522,0x1545,0x154b,0x1595,0x159b,0x15a9,0x15af,0x15bd,0x15c3,0x15c9,0x15cf,0x1663,0x1669,0x166f,0x1675,0x167b,0x1681,0x1687,0x168d,0x1693,0x16a3,0x16ae,0x16b9,0x16c4,0x16ca,0x16d6,0x16e2,0x16ee,0x16fa,0x1706,0x1712,0x171e,0x172a,0x1736,0x1742,0x1747,0x1751,0x175d,0x1769,0x1775,0x1781,0x178b,0x1797,0x17a3,0x17af,0x17bb,0x17c5,0x17d1,0x17dd,0x17e9,0x17f5,0x1801,0x180d,0x1819,0x1825,0x1831,0x183d,0x1849,0x1855,0x1861,0x186d,0x1879,0x1885,0x1891,0x189d,0x18a9,0x18b5,0x18c1,0x18cd,0x18d9,0x18e5,0x18f1,0x1918,0x1923,0x1a4a

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
	func_6730(var_31_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_bool = var_32_object;
	func_4894(var_31_bool, var_32_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4989();
		var_35_bool = var_30_string == (int)510;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5731();
			var_40_string = "";
			func_170(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)441);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8443, (int)9267, (int)9266);
			return 0;
		}
		var_60_bool = var_30_string == (int)9267;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_170(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)443, (int)519, (int)512);
			@@@var_0_object:AddReply((int)442, (int)513, (int)511);
			return 0;
		}
		var_70_bool = var_30_string == (int)513;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_170(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)445, (int)516, (int)514);
			@@@var_0_object:AddReply((int)446, (int)-1, (int)515);
			return 0;
		}
		var_80_bool = var_30_string == (int)516;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_170(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)449, (int)-1, (int)518);
			@@@var_0_object:AddReply((int)448, (int)-1, (int)517);
			return 0;
		}
		var_90_bool = var_30_string == (int)519;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_170(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)450);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)451, (int)522, (int)520);
			@@@var_0_object:AddReply((int)452, (int)-1, (int)521);
			return 0;
		}
		var_100_bool = var_30_string == (int)522;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_5828();
			var_105_string = "";
			func_170(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)454, (int)-1, (int)523);
			@@@var_0_object:AddReply((int)455, (int)-1, (int)524);
			return 0;
		}
		var_3_string = true;
		var_113_bool = 0;
		func_5101(var_113_bool);
		if(var_113_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4989();
		var_35_bool = var_31_bool == (int)13929;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5545();
		}
		var_41_bool = var_31_bool == (int)11890;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5551(var_43_object);
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_5565();
		}
		var_91_bool = var_31_bool == (int)11891;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_5551(var_93_object);
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_5565();
		}
		var_97_bool = var_31_bool == (int)13930;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_5571();
		}
		var_103_bool = var_31_bool == (int)11915;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_5589();
		}
		var_181_bool = var_31_bool == (int)3969;
		if(var_181_bool != 0) {
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_5577();
		}
		var_187_bool = var_31_bool == (int)3968;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_5583();
		}
		var_193_bool = var_30_string == (int)3967;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3662);
			@@@var_0_object:ClearReplies();
			var_210_bool = 0;
			var_210_bool = 0;
			var_211_bool = 0; var_212_object = Obj();
			var_212_object = var_1_object;
			func_6169(var_212_object);
			if(var_211_bool != 0) {
				var_219_bool = 0; var_220_object = Obj();
				var_220_object = var_1_object;
				func_6181(var_220_object);
				if(var_219_bool != 0) {
					var_210_bool = 1;
				}
			}
			if(var_210_bool != 0) {
				@@@var_0_object:AddReply((int)12735, (int)11881, (int)13929);
			}
			var_228_bool = 0;
			var_228_bool = 0;
			var_229_bool = 0;
			var_229_bool = 0;
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_6193(var_232_object);
			if(var_231_bool != 0) {
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_6205(var_238_object);
				if(var_237_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_6253(var_244_object);
				var_249_bool = var_243_bool == 0; //@nz
				if(var_249_bool != 0) {
					var_229_bool = 1;
				}
			}
			if(var_229_bool != 0) {
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_object;
				func_6265(var_251_object);
				var_256_bool = var_250_bool == 0; //@nz
				if(var_256_bool != 0) {
					var_228_bool = 1;
				}
			}
			if(var_228_bool != 0) {
				@@@var_0_object:AddReply((int)12736, (int)11904, (int)13930);
			}
			var_260_bool = 0;
			var_260_bool = 0;
			var_261_bool = 0; var_262_object = Obj();
			var_262_object = var_1_object;
			func_6217(var_262_object);
			if(var_261_bool != 0) {
				var_267_bool = 0; var_268_object = Obj();
				var_268_object = var_1_object;
				func_5993(var_268_object);
				if(var_267_bool != 0) {
					var_260_bool = 1;
				}
			}
			if(var_260_bool != 0) {
				@@@var_0_object:AddReply((int)3664, (int)3970, (int)3969);
			}
			var_276_bool = 0; var_277_object = Obj();
			var_277_object = var_1_object;
			func_6241(var_277_object);
			if(var_276_bool != 0) {
				@@@var_0_object:AddReply((int)3663, (int)3972, (int)3968);
			}
			@@@var_0_object:AddReply((int)13019, (int)-1, (int)14225);
			return 0;
		}
		var_289_bool = var_30_string == (int)3972;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3667);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3668, (int)3975, (int)3973);
			@@@var_0_object:AddReply((int)3669, (int)3975, (int)3974);
			@@@var_0_object:AddReply((int)3672, (int)3991, (int)3978);
			return 0;
		}
		var_302_bool = var_30_string == (int)3991;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3683);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3684, (int)3972, (int)3992);
			return 0;
		}
		var_309_bool = var_30_string == (int)3975;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3671, (int)3981, (int)3976);
			@@@var_0_object:AddReply((int)3673, (int)-1, (int)3980);
			return 0;
		}
		var_319_bool = var_30_string == (int)3981;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3675, (int)3984, (int)3982);
			@@@var_0_object:AddReply((int)3676, (int)3984, (int)3983);
			return 0;
		}
		var_329_bool = var_30_string == (int)3984;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3677);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3678, (int)3988, (int)3986);
			@@@var_0_object:AddReply((int)3679, (int)3988, (int)3987);
			return 0;
		}
		var_339_bool = var_30_string == (int)3988;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3680);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3681, (int)-1, (int)3989);
			@@@var_0_object:AddReply((int)3682, (int)-1, (int)3990);
			@@@var_0_object:AddReply((int)3685, (int)-1, (int)3995);
			return 0;
		}
		var_352_bool = var_30_string == (int)3970;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3665);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3666, (int)-1, (int)3971);
			return 0;
		}
		var_359_bool = var_30_string == (int)11904;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10774, (int)11906, (int)11905);
			@@@var_0_object:AddReply((int)10789, (int)11906, (int)11923);
			@@@var_0_object:AddReply((int)10790, (int)11906, (int)11925);
			return 0;
		}
		var_372_bool = var_30_string == (int)11906;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10776, (int)11908, (int)11907);
			@@@var_0_object:AddReply((int)10788, (int)11908, (int)11921);
			return 0;
		}
		var_382_bool = var_30_string == (int)11908;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10777);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10778, (int)11910, (int)11909);
			@@@var_0_object:AddReply((int)10787, (int)11910, (int)11920);
			return 0;
		}
		var_392_bool = var_30_string == (int)11910;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10779);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10780, (int)11912, (int)11911);
			@@@var_0_object:AddReply((int)10785, (int)11912, (int)11916);
			@@@var_0_object:AddReply((int)10786, (int)11912, (int)11918);
			return 0;
		}
		var_405_bool = var_30_string == (int)11912;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10782, (int)-1, (int)11913);
			@@@var_0_object:AddReply((int)10783, (int)-1, (int)11914);
			@@@var_0_object:AddReply((int)10784, (int)-1, (int)11915);
			return 0;
		}
		var_418_bool = var_30_string == (int)11881;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10754, (int)11883, (int)11882);
			@@@var_0_object:AddReply((int)10767, (int)11897, (int)11896);
			@@@var_0_object:AddReply((int)10769, (int)11899, (int)11898);
			return 0;
		}
		var_431_bool = var_30_string == (int)11899;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10770);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10771, (int)11885, (int)11900);
			@@@var_0_object:AddReply((int)10772, (int)11897, (int)11902);
			return 0;
		}
		var_441_bool = var_30_string == (int)11897;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10768);
			@@@var_0_object:ClearReplies();
			return 0;
		}
		var_445_bool = var_30_string == (int)11883;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10755);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10756, (int)11885, (int)11884);
			@@@var_0_object:AddReply((int)10766, (int)-1, (int)11895);
			return 0;
		}
		var_455_bool = var_30_string == (int)11885;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10758, (int)11887, (int)11886);
			@@@var_0_object:AddReply((int)10765, (int)-1, (int)11894);
			return 0;
		}
		var_465_bool = var_30_string == (int)11887;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_551(var_31_bool, "Grief");
			@@@var_0_object:SetMessage((int)10759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10760, (int)11889, (int)11888);
			@@@var_0_object:AddReply((int)10764, (int)11889, (int)11892);
			return 0;
		}
		var_475_bool = var_30_string == (int)11889;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_551(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10762, (int)-1, (int)11890);
			@@@var_0_object:AddReply((int)10763, (int)-1, (int)11891);
			return 0;
		}
		var_3_string = true;
		var_484_bool = 0;
		func_5101(var_484_bool);
		if(var_484_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x238";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4989();
		var_35_bool = var_31_bool == (int)6898;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5103();
		}
		var_41_bool = var_31_bool == (int)6899;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5103();
		}
		var_45_bool = var_31_bool == (int)9508;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_5331();
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_5109();
		}
		var_80_bool = var_31_bool == (int)8859;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_5115();
		}
		var_86_bool = var_31_bool == (int)8862;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_5743();
		}
		var_92_bool = var_31_bool == (int)8865;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_5749();
		}
		var_98_bool = var_31_bool == (int)8869;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_5755();
		}
		var_104_bool = var_31_bool == (int)8870;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_5761();
		}
		var_110_bool = var_31_bool == (int)8874;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_5767();
		}
		var_116_bool = var_31_bool == (int)8875;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_5773();
		}
		var_122_bool = var_30_string == (int)5972;
		if(var_122_bool != 0) {
			var_123_bool = 0;
			var_123_bool = 0;
			var_124_bool = 0;
			var_124_bool = 0;
			var_125_bool = 0;
			var_125_bool = 0;
			var_126_bool = 0;
			var_126_bool = 0;
			var_127_bool = 0; var_128_object = Obj();
			var_128_object = var_1_object;
			func_5846(var_128_object);
			if(var_127_bool != 0) {
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_5894(var_136_object);
				var_141_bool = var_135_bool == 0; //@nz
				if(var_141_bool != 0) {
					var_126_bool = 1;
				}
			}
			if(var_126_bool != 0) {
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_5882(var_143_object);
				var_148_bool = var_142_bool == 0; //@nz
				if(var_148_bool != 0) {
					var_125_bool = 1;
				}
			}
			if(var_125_bool != 0) {
				var_149_bool = 0; var_150_object = Obj();
				var_150_object = var_1_object;
				func_6005(var_150_object);
				if(var_149_bool != 0) {
					var_124_bool = 1;
				}
			}
			if(var_124_bool != 0) {
				var_155_bool = 0; var_156_object = Obj();
				var_156_object = var_1_object;
				func_5858(var_156_object);
				var_161_bool = var_155_bool == 0; //@nz
				if(var_161_bool != 0) {
					var_123_bool = 1;
				}
			}
			if(var_123_bool != 0) {
				var_162_string = "";
				func_1585(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5423);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5447, (int)6886, (int)6001);
				@@@var_0_object:AddReply((int)6231, (int)6893, (int)6892);
				return 0;
			}
			var_184_bool = 0;
			var_184_bool = 0;
			var_185_bool = 0;
			var_185_bool = 0;
			var_186_bool = 0;
			var_186_bool = 0;
			var_187_bool = 0; var_188_object = Obj();
			var_188_object = var_1_object;
			func_5858(var_188_object);
			if(var_187_bool != 0) {
				var_189_bool = 0; var_190_object = Obj();
				var_190_object = var_1_object;
				func_5894(var_190_object);
				var_191_bool = var_189_bool == 0; //@nz
				if(var_191_bool != 0) {
					var_186_bool = 1;
				}
			}
			if(var_186_bool != 0) {
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_5882(var_193_object);
				var_194_bool = var_192_bool == 0; //@nz
				if(var_194_bool != 0) {
					var_185_bool = 1;
				}
			}
			if(var_185_bool != 0) {
				var_195_bool = 0; var_196_object = Obj();
				var_196_object = var_1_object;
				func_6005(var_196_object);
				var_197_bool = var_195_bool == 0; //@nz
				if(var_197_bool != 0) {
					var_184_bool = 1;
				}
			}
			if(var_184_bool != 0) {
				var_198_string = "";
				func_1585(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)8666);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)8667, (int)9493, (int)9492);
				return 0;
			}
			var_203_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8034);
			@@@var_0_object:ClearReplies();
			var_205_bool = 0;
			var_205_bool = 1;
			var_206_bool = 0;
			var_206_bool = 0;
			var_207_bool = 0; var_208_object = Obj();
			var_208_object = var_1_object;
			func_6017(var_207_bool, var_208_object);
			if(var_207_bool != 0) {
				var_218_bool = 0; var_219_object = Obj();
				var_219_object = var_1_object;
				func_5870(var_219_object);
				if(var_218_bool != 0) {
					var_206_bool = 1;
				}
			}
			if(var_206_bool != 1) {
				var_224_bool = 0;
				var_224_bool = 0;
				var_225_bool = 0; var_226_object = Obj();
				var_226_object = var_1_object;
				func_6075(var_225_bool, var_226_object);
				if(var_225_bool != 0) {
					var_236_bool = 0; var_237_object = Obj();
					var_237_object = var_1_object;
					func_5870(var_237_object);
					if(var_236_bool != 0) {
						var_224_bool = 1;
					}
				}
				if(var_224_bool != 1) {
					var_205_bool = 0;
				}
			}
			if(var_205_bool != 0) {
				@@@var_0_object:AddReply((int)8036, (int)5976, (int)8859);
			}
			var_241_bool = 0;
			var_241_bool = 0;
			var_242_bool = 0; var_243_object = Obj();
			var_243_object = var_1_object;
			func_6385(var_243_object);
			if(var_242_bool != 0) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_6301(var_249_object);
				if(var_248_bool != 0) {
					var_241_bool = 1;
				}
			}
			if(var_241_bool != 0) {
				@@@var_0_object:AddReply((int)8039, (int)5991, (int)8862);
			}
			var_257_bool = 0;
			var_257_bool = 0;
			var_258_bool = 0; var_259_object = Obj();
			var_259_object = var_1_object;
			func_6277(var_259_object);
			if(var_258_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_6313(var_265_object);
				if(var_264_bool != 0) {
					var_257_bool = 1;
				}
			}
			if(var_257_bool != 0) {
				@@@var_0_object:AddReply((int)8042, (int)8884, (int)8865);
			}
			var_273_bool = 0;
			var_273_bool = 0;
			var_274_bool = 0; var_275_object = Obj();
			var_275_object = var_1_object;
			func_6289(var_275_object);
			if(var_274_bool != 0) {
				var_280_bool = 0; var_281_object = Obj();
				var_281_object = var_1_object;
				func_6325(var_281_object);
				if(var_280_bool != 0) {
					var_273_bool = 1;
				}
			}
			if(var_273_bool != 0) {
				@@@var_0_object:AddReply((int)8046, (int)8885, (int)8869);
			}
			var_289_bool = 0;
			var_289_bool = 0;
			var_290_bool = 0; var_291_object = Obj();
			var_291_object = var_1_object;
			func_6229(var_291_object);
			if(var_290_bool != 0) {
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_6337(var_297_object);
				if(var_296_bool != 0) {
					var_289_bool = 1;
				}
			}
			if(var_289_bool != 0) {
				@@@var_0_object:AddReply((int)8047, (int)8886, (int)8870);
			}
			var_305_bool = 0;
			var_305_bool = 0;
			var_306_bool = 0; var_307_object = Obj();
			var_307_object = var_1_object;
			func_6373(var_307_object);
			if(var_306_bool != 0) {
				var_312_bool = 0; var_313_object = Obj();
				var_313_object = var_1_object;
				func_6349(var_313_object);
				if(var_312_bool != 0) {
					var_305_bool = 1;
				}
			}
			if(var_305_bool != 0) {
				@@@var_0_object:AddReply((int)8051, (int)8887, (int)8874);
			}
			var_321_bool = 0;
			var_321_bool = 0;
			var_322_bool = 0; var_323_object = Obj();
			var_323_object = var_1_object;
			func_6157(var_323_object);
			if(var_322_bool != 0) {
				var_328_bool = 0; var_329_object = Obj();
				var_329_object = var_1_object;
				func_6361(var_329_object);
				if(var_328_bool != 0) {
					var_321_bool = 1;
				}
			}
			if(var_321_bool != 0) {
				@@@var_0_object:AddReply((int)8052, (int)8888, (int)8875);
			}
			@@@var_0_object:AddReply((int)8709, (int)-1, (int)9546);
			return 0;
		}
		var_341_bool = var_30_string == (int)8888;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8708, (int)-1, (int)9545);
			return 0;
		}
		var_348_bool = var_30_string == (int)8887;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8707, (int)-1, (int)9544);
			return 0;
		}
		var_355_bool = var_30_string == (int)8886;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8706, (int)-1, (int)9543);
			return 0;
		}
		var_362_bool = var_30_string == (int)8885;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8062);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8705, (int)-1, (int)9542);
			return 0;
		}
		var_369_bool = var_30_string == (int)8884;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8704, (int)-1, (int)9541);
			return 0;
		}
		var_376_bool = var_30_string == (int)5991;
		if(var_376_bool != 0) {
			var_377_object = Obj(); var_378_object = Obj();
			var_377_object = var_1_object;
			var_378_object = var_0_object;
			func_5737();
			var_381_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5438);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5439, (int)5993, (int)5992);
			@@@var_0_object:AddReply((int)5446, (int)-1, (int)6000);
			return 0;
		}
		var_390_bool = var_30_string == (int)5993;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5441, (int)5995, (int)5994);
			@@@var_0_object:AddReply((int)5445, (int)5995, (int)5998);
			return 0;
		}
		var_400_bool = var_30_string == (int)5995;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5443, (int)-1, (int)5996);
			@@@var_0_object:AddReply((int)5444, (int)-1, (int)5997);
			return 0;
		}
		var_410_bool = var_30_string == (int)5976;
		if(var_410_bool != 0) {
			var_411_bool = 0; var_412_object = Obj();
			var_412_object = var_1_object;
			func_5870(var_412_object);
			if(var_411_bool != 0) {
				var_413_string = "";
				func_1585(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5427);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5428, (int)5978, (int)5977);
				@@@var_0_object:AddReply((int)5436, (int)5978, (int)5987);
				@@@var_0_object:AddReply((int)5437, (int)5978, (int)5989);
				return 0;
			}
		}
		var_425_bool = var_30_string == (int)5978;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5430, (int)5980, (int)5979);
			@@@var_0_object:AddReply((int)5434, (int)5980, (int)5983);
			@@@var_0_object:AddReply((int)5435, (int)5980, (int)5985);
			return 0;
		}
		var_438_bool = var_30_string == (int)5980;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5432, (int)-1, (int)5981);
			@@@var_0_object:AddReply((int)5433, (int)-1, (int)5982);
			return 0;
		}
		var_448_bool = var_30_string == (int)9493;
		if(var_448_bool != 0) {
			var_449_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8669, (int)9495, (int)9494);
			return 0;
		}
		var_455_bool = var_30_string == (int)9495;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8671, (int)9497, (int)9496);
			return 0;
		}
		var_462_bool = var_30_string == (int)9497;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8673, (int)9499, (int)9498);
			return 0;
		}
		var_469_bool = var_30_string == (int)9499;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8675, (int)9501, (int)9500);
			return 0;
		}
		var_476_bool = var_30_string == (int)9501;
		if(var_476_bool != 0) {
			var_477_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8677, (int)9503, (int)9502);
			return 0;
		}
		var_483_bool = var_30_string == (int)9503;
		if(var_483_bool != 0) {
			var_484_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8679, (int)9505, (int)9504);
			return 0;
		}
		var_490_bool = var_30_string == (int)9505;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8680);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8681, (int)9507, (int)9506);
			return 0;
		}
		var_497_bool = var_30_string == (int)9507;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8683, (int)-1, (int)9508);
			return 0;
		}
		var_504_bool = var_30_string == (int)6893;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6232);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6233, (int)6895, (int)6894);
			return 0;
		}
		var_511_bool = var_30_string == (int)6895;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6234);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6235, (int)6888, (int)6896);
			return 0;
		}
		var_518_bool = var_30_string == (int)6886;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6226, (int)6888, (int)6887);
			return 0;
		}
		var_525_bool = var_30_string == (int)6888;
		if(var_525_bool != 0) {
			var_526_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6229, (int)6891, (int)6890);
			var_531_bool = 0; var_532_object = Obj();
			var_532_object = var_1_object;
			func_5834(var_532_object);
			if(var_531_bool != 0) {
				@@@var_0_object:AddReply((int)6228, (int)6891, (int)6889);
			}
			return 0;
		}
		var_541_bool = var_30_string == (int)6891;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_1585(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6230);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6236, (int)-1, (int)6898);
			@@@var_0_object:AddReply((int)6237, (int)-1, (int)6899);
			return 0;
		}
		var_3_string = true;
		var_550_bool = 0;
		func_5101(var_550_bool);
		if(var_550_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x642";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4989();
		var_35_bool = var_31_bool == (int)7604;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5127();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_5145();
		}
		var_118_bool = var_31_bool == (int)8158;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_5127();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_5145();
		}
		var_124_bool = var_31_bool == (int)8155;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_5133();
		}
		var_130_bool = var_31_bool == (int)8161;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_5133();
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_5234(var_134_object);
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_5318();
		}
		var_184_bool = var_31_bool == (int)8165;
		if(var_184_bool != 0) {
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_5139();
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_5324();
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_5202();
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_5779(var_221_object);
		}
		var_247_bool = var_30_string == (int)7599;
		if(var_247_bool != 0) {
			var_248_bool = 0;
			var_248_bool = 0;
			var_249_bool = 0; var_250_object = Obj();
			var_250_object = var_1_object;
			func_5906(var_250_object);
			if(var_249_bool != 0) {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_5942(var_258_object);
				if(var_257_bool != 0) {
					var_248_bool = 1;
				}
			}
			if(var_248_bool != 0) {
				var_263_string = "";
				func_2751(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6893);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)7378, (int)8140, (int)8139);
				@@@var_0_object:AddReply((int)7384, (int)8140, (int)8145);
				return 0;
			}
			var_285_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7377);
			@@@var_0_object:ClearReplies();
			var_287_bool = 0;
			var_287_bool = 0;
			var_288_bool = 0;
			var_288_bool = 0;
			var_289_bool = 0; var_290_object = Obj();
			var_290_object = var_1_object;
			func_5918(var_290_object);
			if(var_289_bool != 0) {
				var_295_bool = 0; var_296_object = Obj();
				var_296_object = var_1_object;
				func_5981(var_296_object);
				if(var_295_bool != 0) {
					var_288_bool = 1;
				}
			}
			if(var_288_bool != 0) {
				var_301_bool = 0; var_302_object = Obj();
				var_302_object = var_1_object;
				func_5959(var_301_bool, var_302_object);
				if(var_301_bool != 0) {
					var_287_bool = 1;
				}
			}
			if(var_287_bool != 0) {
				@@@var_0_object:AddReply((int)6900, (int)7607, (int)7606);
			}
			var_319_bool = 0;
			var_319_bool = 0;
			var_320_bool = 0; var_321_object = Obj();
			var_321_object = var_1_object;
			func_5930(var_321_object);
			if(var_320_bool != 0) {
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_5959(var_326_bool, var_327_object);
				if(var_326_bool != 0) {
					var_319_bool = 1;
				}
			}
			if(var_319_bool != 0) {
				@@@var_0_object:AddReply((int)6902, (int)7609, (int)7608);
			}
			var_331_bool = 0;
			var_331_bool = 0;
			var_332_bool = 0; var_333_object = Obj();
			var_333_object = var_1_object;
			func_5954(var_333_object);
			if(var_332_bool != 0) {
				var_334_bool = 0; var_335_object = Obj();
				var_335_object = var_1_object;
				func_5969(var_335_object);
				if(var_334_bool != 0) {
					var_331_bool = 1;
				}
			}
			if(var_331_bool != 0) {
				@@@var_0_object:AddReply((int)6905, (int)7612, (int)7611);
			}
			var_343_bool = 0; var_344_object = Obj();
			var_344_object = var_1_object;
			func_5942(var_344_object);
			if(var_343_bool != 0) {
				@@@var_0_object:AddReply((int)7745, (int)7601, (int)8545);
			}
			@@@var_0_object:AddReply((int)7744, (int)-1, (int)8544);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xabf";
		EMIT "Pop(1)";
		EMIT "Push((int) 9342)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9343)";
		EMIT "Push((int) 10264)";
		EMIT "Push((int) 10263)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9350)";
		EMIT "Push((int) 10264)";
		EMIT "Push((int) 10271)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xabf";
		EMIT "Pop(1)";
		EMIT "Push((int) 9451)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9452)";
		EMIT "Push((int) 10391)";
		EMIT "Push((int) 10390)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9471)";
		EMIT "Push((int) 10391)";
		EMIT "Push((int) 10412)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_352_bool = var_30_string == (int)10391;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9454, (int)10393, (int)10392);
			@@@var_0_object:AddReply((int)9467, (int)10408, (int)10407);
			@@@var_0_object:AddReply((int)9470, (int)-1, (int)10411);
			return 0;
		}
		var_365_bool = var_30_string == (int)10408;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9468);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9469, (int)10393, (int)10409);
			return 0;
		}
		var_372_bool = var_30_string == (int)10393;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9456, (int)10395, (int)10394);
			@@@var_0_object:AddReply((int)9463, (int)10403, (int)10402);
			@@@var_0_object:AddReply((int)9466, (int)-1, (int)10406);
			return 0;
		}
		var_385_bool = var_30_string == (int)10403;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9465, (int)10395, (int)10404);
			return 0;
		}
		var_392_bool = var_30_string == (int)10395;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9458, (int)10397, (int)10396);
			@@@var_0_object:AddReply((int)9462, (int)10397, (int)10400);
			return 0;
		}
		var_402_bool = var_30_string == (int)10397;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9460, (int)-1, (int)10398);
			@@@var_0_object:AddReply((int)9461, (int)-1, (int)10399);
			return 0;
		}
		var_412_bool = var_30_string == (int)10264;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9344);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9345, (int)10266, (int)10265);
			@@@var_0_object:AddReply((int)9349, (int)10266, (int)10269);
			return 0;
		}
		var_422_bool = var_30_string == (int)10266;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9346);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9347, (int)-1, (int)10267);
			@@@var_0_object:AddReply((int)9348, (int)-1, (int)10268);
			return 0;
		}
		var_432_bool = var_30_string == (int)7612;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6907, (int)-1, (int)7613);
			return 0;
		}
		var_439_bool = var_30_string == (int)7609;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6903);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7397, (int)8163, (int)8162);
			@@@var_0_object:AddReply((int)6908, (int)8163, (int)7614);
			return 0;
		}
		var_449_bool = var_30_string == (int)8163;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7398);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7399, (int)-1, (int)8165);
			return 0;
		}
		var_456_bool = var_30_string == (int)7607;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7396, (int)-1, (int)8161);
			return 0;
		}
		var_463_bool = var_30_string == (int)8140;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7380, (int)8142, (int)8141);
			@@@var_0_object:AddReply((int)7385, (int)8142, (int)8147);
			return 0;
		}
		var_473_bool = var_30_string == (int)8142;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7382, (int)8144, (int)8143);
			@@@var_0_object:AddReply((int)7386, (int)8150, (int)8149);
			return 0;
		}
		var_483_bool = var_30_string == (int)8150;
		if(var_483_bool != 0) {
			var_484_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7388, (int)8144, (int)8151);
			return 0;
		}
		var_490_bool = var_30_string == (int)8144;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6894, (int)8153, (int)7600);
			return 0;
		}
		var_497_bool = var_30_string == (int)8153;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7390, (int)7601, (int)8154);
			@@@var_0_object:AddReply((int)7391, (int)-1, (int)8155);
			return 0;
		}
		var_507_bool = var_30_string == (int)7601;
		if(var_507_bool != 0) {
			var_508_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6896, (int)7603, (int)7602);
			@@@var_0_object:AddReply((int)7392, (int)8157, (int)8156);
			return 0;
		}
		var_517_bool = var_30_string == (int)8157;
		if(var_517_bool != 0) {
			var_518_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7395, (int)7603, (int)8159);
			return 0;
		}
		var_524_bool = var_30_string == (int)7603;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_2751(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6898, (int)-1, (int)7604);
			@@@var_0_object:AddReply((int)7394, (int)-1, (int)8158);
			return 0;
		}
		var_3_string = true;
		var_533_bool = 0;
		func_5101(var_533_bool);
		if(var_533_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xad0";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4989();
		var_35_bool = var_31_bool == (int)12160;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5372();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_5378();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_5356(var_91_object);
		}
		var_117_bool = var_31_bool == (int)12161;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_5372();
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_5378();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_5356(var_123_object);
		}
		var_125_bool = var_31_bool == (int)12181;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5410();
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_5416();
		}
		var_148_bool = var_31_bool == (int)12182;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_5410();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_5416();
		}
		var_154_bool = var_31_bool == (int)12183;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_5410();
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_5416();
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_5340(var_160_object);
		}
		var_167_bool = var_31_bool == (int)12649;
		if(var_167_bool != 0) {
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_5445();
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_5451();
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_5457(var_177_object);
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_5817(var_216_object);
			var_234_object = Obj(); var_235_object = Obj();
			var_234_object = var_1_object;
			var_235_object = var_0_object;
			func_5795(var_235_object);
			var_240_object = Obj(); var_241_object = Obj();
			var_240_object = var_1_object;
			var_241_object = var_0_object;
			func_5806(var_241_object);
			var_246_object = Obj(); var_247_object = Obj();
			var_246_object = var_1_object;
			var_247_object = var_0_object;
			func_5121();
		}
		var_251_bool = var_31_bool == (int)12650;
		if(var_251_bool != 0) {
			var_252_object = Obj(); var_253_object = Obj();
			var_252_object = var_1_object;
			var_253_object = var_0_object;
			func_5445();
		}
		var_255_bool = var_31_bool == (int)12684;
		if(var_255_bool != 0) {
			var_256_object = Obj(); var_257_object = Obj();
			var_256_object = var_1_object;
			var_257_object = var_0_object;
			func_5451();
			var_258_object = Obj(); var_259_object = Obj();
			var_258_object = var_1_object;
			var_259_object = var_0_object;
			func_5457(var_259_object);
			var_260_object = Obj(); var_261_object = Obj();
			var_260_object = var_1_object;
			var_261_object = var_0_object;
			func_5795(var_261_object);
			var_262_object = Obj(); var_263_object = Obj();
			var_262_object = var_1_object;
			var_263_object = var_0_object;
			func_5817(var_263_object);
			var_264_object = Obj(); var_265_object = Obj();
			var_264_object = var_1_object;
			var_265_object = var_0_object;
			func_5806(var_265_object);
			var_266_object = Obj(); var_267_object = Obj();
			var_266_object = var_1_object;
			var_267_object = var_0_object;
			func_5121();
		}
		var_269_bool = var_31_bool == (int)13074;
		if(var_269_bool != 0) {
			var_270_object = Obj(); var_271_object = Obj();
			var_270_object = var_1_object;
			var_271_object = var_0_object;
			func_5525();
		}
		var_275_bool = var_30_string == (int)11193;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10151);
			@@@var_0_object:ClearReplies();
			var_292_bool = 0;
			var_292_bool = 0;
			var_293_bool = 0; var_294_object = Obj();
			var_294_object = var_1_object;
			func_6039(var_294_object);
			if(var_293_bool != 0) {
				var_299_bool = 0; var_300_object = Obj();
				var_300_object = var_1_object;
				func_6027(var_300_object);
				if(var_299_bool != 0) {
					var_292_bool = 1;
				}
			}
			if(var_292_bool != 0) {
				@@@var_0_object:AddReply((int)10152, (int)11195, (int)11194);
			}
			var_308_bool = 0;
			var_308_bool = 0;
			var_309_bool = 0; var_310_object = Obj();
			var_310_object = var_1_object;
			func_6051(var_310_object);
			if(var_309_bool != 0) {
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_6063(var_316_object);
				if(var_315_bool != 0) {
					var_308_bool = 1;
				}
			}
			if(var_308_bool != 0) {
				@@@var_0_object:AddReply((int)10995, (int)12163, (int)12162);
			}
			var_324_bool = 0;
			var_324_bool = 0;
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_6097(var_326_object);
			if(var_325_bool != 0) {
				var_331_bool = 0; var_332_object = Obj();
				var_332_object = var_1_object;
				func_6085(var_332_object);
				if(var_331_bool != 0) {
					var_324_bool = 1;
				}
			}
			if(var_324_bool != 0) {
				@@@var_0_object:AddReply((int)11435, (int)12638, (int)12637);
			}
			var_340_bool = 0;
			var_340_bool = 0;
			var_341_bool = 0; var_342_object = Obj();
			var_342_object = var_1_object;
			func_6085(var_342_object);
			if(var_341_bool != 0) {
				var_343_bool = 0; var_344_object = Obj();
				var_344_object = var_1_object;
				func_6109(var_344_object);
				var_349_bool = var_343_bool == 0; //@nz
				if(var_349_bool != 0) {
					var_340_bool = 1;
				}
			}
			if(var_340_bool != 0) {
				@@@var_0_object:AddReply((int)11476, (int)12683, (int)12682);
			}
			var_353_bool = 0;
			var_353_bool = 0;
			var_354_bool = 0; var_355_object = Obj();
			var_355_object = var_1_object;
			func_6133(var_355_object);
			if(var_354_bool != 0) {
				var_360_bool = 0; var_361_object = Obj();
				var_361_object = var_1_object;
				func_6121(var_361_object);
				if(var_360_bool != 0) {
					var_353_bool = 1;
				}
			}
			if(var_353_bool != 0) {
				@@@var_0_object:AddReply((int)11859, (int)13073, (int)13072);
			}
			@@@var_0_object:AddReply((int)11479, (int)-1, (int)12685);
			return 0;
		}
		var_373_bool = var_30_string == (int)13073;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11861, (int)-1, (int)13074);
			return 0;
		}
		var_380_bool = var_30_string == (int)12683;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11478, (int)-1, (int)12684);
			return 0;
		}
		var_387_bool = var_30_string == (int)12638;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11437, (int)12640, (int)12639);
			@@@var_0_object:AddReply((int)11450, (int)12654, (int)12653);
			return 0;
		}
		var_397_bool = var_30_string == (int)12654;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11451);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11452, (int)12656, (int)12655);
			return 0;
		}
		var_404_bool = var_30_string == (int)12656;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11454, (int)12640, (int)12657);
			return 0;
		}
		var_411_bool = var_30_string == (int)12640;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11438);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11439, (int)12642, (int)12641);
			return 0;
		}
		var_418_bool = var_30_string == (int)12642;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11441, (int)12644, (int)12643);
			@@@var_0_object:AddReply((int)11449, (int)12644, (int)12651);
			return 0;
		}
		var_428_bool = var_30_string == (int)12644;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11443, (int)12646, (int)12645);
			return 0;
		}
		var_435_bool = var_30_string == (int)12646;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11445, (int)12648, (int)12647);
			return 0;
		}
		var_442_bool = var_30_string == (int)12648;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11446);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11447, (int)-1, (int)12649);
			@@@var_0_object:AddReply((int)11448, (int)-1, (int)12650);
			return 0;
		}
		var_452_bool = var_30_string == (int)12163;
		if(var_452_bool != 0) {
			var_453_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10997, (int)12165, (int)12164);
			return 0;
		}
		var_459_bool = var_30_string == (int)12165;
		if(var_459_bool != 0) {
			var_460_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10999, (int)12167, (int)12166);
			@@@var_0_object:AddReply((int)11001, (int)12170, (int)12168);
			return 0;
		}
		var_469_bool = var_30_string == (int)12170;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11003, (int)12167, (int)12171);
			@@@var_0_object:AddReply((int)11004, (int)12167, (int)12172);
			return 0;
		}
		var_479_bool = var_30_string == (int)12167;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11000);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11005, (int)12176, (int)12175);
			@@@var_0_object:AddReply((int)11008, (int)12176, (int)12178);
			return 0;
		}
		var_489_bool = var_30_string == (int)12176;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11006);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11007, (int)12180, (int)12177);
			@@@var_0_object:AddReply((int)11012, (int)-1, (int)12183);
			return 0;
		}
		var_499_bool = var_30_string == (int)12180;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11009);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11010, (int)-1, (int)12181);
			@@@var_0_object:AddReply((int)11011, (int)-1, (int)12182);
			return 0;
		}
		var_509_bool = var_30_string == (int)11195;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10153);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10977, (int)12140, (int)12139);
			@@@var_0_object:AddReply((int)10154, (int)11197, (int)11196);
			return 0;
		}
		var_519_bool = var_30_string == (int)11197;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10155);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10982, (int)12145, (int)12144);
			@@@var_0_object:AddReply((int)10986, (int)12149, (int)12148);
			return 0;
		}
		var_529_bool = var_30_string == (int)12149;
		if(var_529_bool != 0) {
			var_530_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10987);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10988, (int)12143, (int)12150);
			return 0;
		}
		var_536_bool = var_30_string == (int)12145;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10984, (int)12143, (int)12146);
			@@@var_0_object:AddReply((int)10985, (int)12143, (int)12147);
			return 0;
		}
		var_546_bool = var_30_string == (int)12140;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10980, (int)12143, (int)12142);
			return 0;
		}
		var_553_bool = var_30_string == (int)12143;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10159, (int)12154, (int)11201);
			@@@var_0_object:AddReply((int)10990, (int)12154, (int)12155);
			return 0;
		}
		var_563_bool = var_30_string == (int)12154;
		if(var_563_bool != 0) {
			var_564_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10989);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10992, (int)12157, (int)12158);
			return 0;
		}
		var_570_bool = var_30_string == (int)12157;
		if(var_570_bool != 0) {
			var_571_string = "";
			func_3671(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10993, (int)-1, (int)12160);
			@@@var_0_object:AddReply((int)10994, (int)-1, (int)12161);
			return 0;
		}
		var_3_string = true;
		var_579_bool = 0;
		func_5101(var_579_bool);
		if(var_579_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe68";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	if((int)1 != 0) {
		func_4989();
		var_35_bool = var_31_int == (int)12878;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5531();
		}
		var_72_bool = var_30_int == (int)12861;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11662);
			@@@var_0_object:ClearReplies();
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_6145(var_90_object);
			if(var_89_bool != 0) {
				@@@var_0_object:AddReply((int)11663, (int)12863, (int)12862);
			}
			@@@var_0_object:AddReply((int)11960, (int)-1, (int)13174);
			return 0;
		}
		var_104_bool = var_30_int == (int)12863;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11680, (int)12867, (int)12879);
			@@@var_0_object:AddReply((int)11665, (int)12865, (int)12864);
			return 0;
		}
		var_114_bool = var_30_int == (int)12865;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11666);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11667, (int)12867, (int)12866);
			return 0;
		}
		var_121_bool = var_30_int == (int)12867;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11669, (int)12869, (int)12868);
			@@@var_0_object:AddReply((int)11684, (int)12886, (int)12885);
			return 0;
		}
		var_131_bool = var_30_int == (int)12886;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11685);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11686, (int)12888, (int)12887);
			return 0;
		}
		var_138_bool = var_30_int == (int)12888;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11687);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11688, (int)12869, (int)12889);
			return 0;
		}
		var_145_bool = var_30_int == (int)12869;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11673, (int)12873, (int)12872);
			@@@var_0_object:AddReply((int)11671, (int)12871, (int)12870);
			return 0;
		}
		var_155_bool = var_30_int == (int)12871;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11681, (int)12882, (int)12881);
			return 0;
		}
		var_162_bool = var_30_int == (int)12882;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11683, (int)12873, (int)12883);
			return 0;
		}
		var_169_bool = var_30_int == (int)12873;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11675, (int)12875, (int)12874);
			return 0;
		}
		var_176_bool = var_30_int == (int)12875;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11677, (int)12877, (int)12876);
			return 0;
		}
		var_183_bool = var_30_int == (int)12877;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_4610(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11679, (int)-1, (int)12878);
			return 0;
		}
		var_3_string = true;
		var_189_bool = 0;
		func_5101(var_189_bool);
		if(var_189_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1213";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_6726();
	var_31_bool = 0;
	func_4906(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_35_string = "";
	func_4971("Neutral");
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


func_5121()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_4610(var_2_object, var_73_string)
{
	var_74_bool = 0;
	func_5101(var_74_bool);
	var_75_bool = var_74_bool == 0; //@nz
	if(var_75_bool != 0) {
		return 0;
	}
	var_76_bool = var_73_string == var_2_object;
	if(var_76_bool != 0) {
		return 0;
	}
	var_77_string = "";
	var_73_string = var_77_string;
	func_4971(var_77_string);
	var_2_object = var_73_string;
	return 0;
}


func_6145(var_89_bool)
{
	var_91_int = 0; var_92_string = "";
	func_5006(var_91_int, "d5q01");
	var_96_bool = var_91_int == (int)4;
	if(var_96_bool != 0) {
		var_89_bool = 1;
		return 0;
	}
	var_89_bool = 0;
	return 0;
}


func_6662()
{
	var_65_object = Obj(); var_66_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_66_object, (int)88, (int)1, (int)12170);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_66_object = var_72_object;
	func_6469(var_71_bool, var_72_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5127()
{
	SetVariable("ood2Lara1", (int)1);
	return 0;
}


func_6157(var_322_bool)
{
	var_324_int = 0; var_325_string = "";
	func_5006(var_324_int, "KnowMark");
	var_327_bool = var_324_int == (int)1;
	if(var_327_bool != 0) {
		var_322_bool = 1;
		return 0;
	}
	var_322_bool = 0;
	return 0;
}


func_5133()
{
	SetVariable("ood2Lara2", (int)1);
	return 0;
}


func_5139()
{
	SetVariable("ood2Lara3", (int)1);
	return 0;
}


func_6678()
{
	var_40_object = Obj(); var_41_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_41_object, (int)143, (int)1, (int)15343);
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0;
	var_41_object = var_47_object;
	func_6469(var_46_bool, var_47_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6169(var_211_bool)
{
	var_213_int = 0; var_214_string = "";
	func_5006(var_213_int, "d6q01");
	var_218_bool = var_213_int == (int)1;
	if(var_218_bool != 0) {
		var_211_bool = 1;
		return 0;
	}
	var_211_bool = 0;
	return 0;
}


func_5145()
{
	var_42_object = Obj(); var_43_object = Obj();
	SetVariable("d2q03", (int)1);
	func_6515(Obj());
	var_46_object = var_43_object;
	var_57_float = 0;
	func_5060(var_57_float);
	@@var_43_object:AddMark("d2q03LaraGotoMoneyFoodSelf", "pt_map_lara", (int)0, (int)15286, var_57_float);
	var_64_float = 0;
	func_5060(var_64_float);
	@@var_43_object:AddMark("d2q03LaraGotoJulia", "pt_map_julia", (int)0, (int)15288, var_64_float);
	var_69_float = 0;
	func_5060(var_69_float);
	@@var_43_object:AddMark("d2q03LaraGotoMaria", "pt_map_maria", (int)0, (int)15289, var_69_float);
	var_74_float = 0;
	func_5060(var_74_float);
	@@var_43_object:AddMark("d2q03LaraGotoMladVlad", "pt_map_mladvlad", (int)0, (int)15287, var_74_float);
	func_6598();
	func_6614();
	var_109_object = Obj(); var_110_string = "";
	func_5011(var_109_object, "quest_d2_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_6181(var_219_bool)
{
	var_221_int = 0; var_222_string = "";
	func_5006(var_221_int, "ood6Lara1");
	var_224_bool = var_221_int == (int)0;
	if(var_224_bool != 0) {
		var_219_bool = 1;
		return 0;
	}
	var_219_bool = 0;
	return 0;
}


func_6694()
{
	var_44_object = Obj(); var_45_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_45_object, (int)160, (int)1, (int)15393);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_45_object = var_51_object;
	func_6469(var_50_bool, var_51_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_551(var_2_object, var_194_string)
{
	var_195_bool = 0;
	func_5101(var_195_bool);
	var_196_bool = var_195_bool == 0; //@nz
	if(var_196_bool != 0) {
		return 0;
	}
	var_197_bool = var_194_string == var_2_object;
	if(var_197_bool != 0) {
		return 0;
	}
	var_198_string = "";
	var_194_string = var_198_string;
	func_4971(var_198_string);
	var_2_object = var_194_string;
	return 0;
}


func_6193(var_231_bool)
{
	var_233_int = 0; var_234_string = "";
	func_5006(var_233_int, "microscope_d6q01_lara_blood");
	var_236_bool = var_233_int != (int)0;
	if(var_236_bool != 0) {
		var_231_bool = 1;
		return 0;
	}
	var_231_bool = 0;
	return 0;
}


func_1585(var_2_object, var_162_string)
{
	var_163_bool = 0;
	func_5101(var_163_bool);
	var_164_bool = var_163_bool == 0; //@nz
	if(var_164_bool != 0) {
		return 0;
	}
	var_165_bool = var_162_string == var_2_object;
	if(var_165_bool != 0) {
		return 0;
	}
	var_166_string = "";
	var_162_string = var_166_string;
	func_4971(var_166_string);
	var_2_object = var_162_string;
	return 0;
}


func_49(var_0_object, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_0_object = var_35_object;
	var_45_bool = 0; var_46_object = Obj();
	var_35_object = var_46_object;
	func_4911(var_45_bool, var_46_object);
	var_85_bool = var_45_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	CreateDialog(var_41_object);
	var_86_int = 0;
	func_5097(var_86_int);
	@@var_41_object:SetNPCName(var_86_int);
	var_87_string = "";
	func_5099(var_87_string);
	@@var_41_object:SetPhoto(var_87_string);
	var_88_int = 0;
	func_6565(var_88_int);
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
	var_135_bool = var_44_bool == 0; //@nz
	if(var_135_bool != 0) {
		sync();
		@@var_41_object:IsDialogEnd(var_44_bool);
		goto Label_94;
	}
	var_35_object = Obj();
	func_4967();
	StopDialog(var_41_object);
	@@var_41_object:GetReturnValue((int)-1);
	var_43_int = var_34_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6710()
{
	var_147_object = Obj(); var_148_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_148_object, (int)118, (int)1, (int)13741);
	var_153_bool = 0; var_154_object = Obj(); var_155_int = 0;
	var_148_object = var_154_object;
	func_6469(var_153_bool, var_154_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6205(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_5006(var_239_int, "ood6Lara2");
	var_242_bool = var_239_int == (int)0;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_6726()
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_6217(var_261_bool)
{
	var_263_int = 0; var_264_string = "";
	func_5006(var_263_int, "ood6Lara3");
	var_266_bool = var_263_int == (int)0;
	if(var_266_bool != 0) {
		var_261_bool = 1;
		return 0;
	}
	var_261_bool = 0;
	return 0;
}


func_6730(var_31_object)
{
	var_32_bool = GlobalVars[1];
	var_33_bool = var_32_bool == 0; //@nz
	if(var_33_bool != 0) {
		var_34_int = 0; var_35_object = Obj();
		var_31_object = var_35_object;
		TaskCall(2);
		func_49(var_36_object, var_34_int, var_35_object);
		TaskReturn();
		var_137_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_138_bool = 0; var_139_int = 0;
	func_5082(var_138_bool, (int)1);
	if(var_138_bool != 0) {
		var_146_int = 0; var_147_object = Obj();
		var_31_object = var_147_object;
		TaskCall(6);
		func_1204(var_148_object, var_146_int, var_147_object);
		TaskReturn();
		return 0;
	}
	var_388_bool = 0; var_389_int = 0;
	func_5082(var_388_bool, (int)2);
	if(var_388_bool != 0) {
		var_390_int = 0; var_391_object = Obj();
		var_31_object = var_391_object;
		TaskCall(8);
		func_2485(var_392_object, var_390_int, var_391_object);
		TaskReturn();
		return 0;
	}
	var_516_bool = 0; var_517_int = 0;
	func_5082(var_516_bool, (int)4);
	if(var_516_bool != 0) {
		var_518_int = 0; var_519_object = Obj();
		var_31_object = var_519_object;
		TaskCall(10);
		func_3459(var_520_object, var_518_int, var_519_object);
		TaskReturn();
		return 0;
	}
	var_639_bool = 0; var_640_int = 0;
	func_5082(var_639_bool, (int)5);
	if(var_639_bool != 0) {
		var_641_int = 0; var_642_object = Obj();
		var_31_object = var_642_object;
		TaskCall(12);
		func_4484(var_643_object, var_641_int, var_642_object);
		TaskReturn();
		return 0;
	}
	var_694_bool = 0; var_695_int = 0;
	func_5082(var_694_bool, (int)6);
	if(var_694_bool != 0) {
		var_696_int = 0; var_697_object = Obj();
		var_31_object = var_697_object;
		TaskCall(4);
		func_348(var_698_object, var_696_int, var_697_object);
		TaskReturn();
		return 0;
	}
	func_5088((bool)0);
	return 0;
}


func_5202()
{
	var_196_object = Obj(); var_197_object = Obj();
	SetVariable("d2q03", (int)2);
	func_6515(Obj());
	var_200_object = var_197_object;
	var_205_float = 0;
	func_5060(var_205_float);
	@@var_197_object:AddMark("d2q03LaraGotoSklad", "pt_map_d2q03_shouse", (int)0, (int)15290, var_205_float);
	var_210_float = 0;
	func_5060(var_210_float);
	@@var_197_object:AddMark("d2q03LaraGotoSkladSelf", "pt_map_lara", (int)0, (int)15291, var_210_float);
	func_6630();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6229(var_290_bool)
{
	var_292_int = 0; var_293_string = "";
	func_5006(var_292_int, "KnowAlexandr");
	var_295_bool = var_292_int == (int)1;
	if(var_295_bool != 0) {
		var_290_bool = 1;
		return 0;
	}
	var_290_bool = 0;
	return 0;
}


func_3671(var_2_object, var_276_string)
{
	var_277_bool = 0;
	func_5101(var_277_bool);
	var_278_bool = var_277_bool == 0; //@nz
	if(var_278_bool != 0) {
		return 0;
	}
	var_279_bool = var_276_string == var_2_object;
	if(var_279_bool != 0) {
		return 0;
	}
	var_280_string = "";
	var_276_string = var_280_string;
	func_4971(var_280_string);
	var_2_object = var_276_string;
	return 0;
}


func_6241(var_276_bool)
{
	var_278_int = 0; var_279_string = "";
	func_5006(var_278_int, "ood6Lara4");
	var_281_bool = var_278_int == (int)0;
	if(var_281_bool != 0) {
		var_276_bool = 1;
		return 0;
	}
	var_276_bool = 0;
	return 0;
}


func_5731()
{
	SetVariable("KnowLara", (int)1);
	return 0;
}


func_5737()
{
	SetVariable("KnowMaria", (int)1);
	return 0;
}


func_6253(var_243_bool)
{
	var_245_int = 0; var_246_string = "";
	func_5006(var_245_int, "d6q01");
	var_248_bool = var_245_int == (int)1000;
	if(var_248_bool != 0) {
		var_243_bool = 1;
		return 0;
	}
	var_243_bool = 0;
	return 0;
}


func_5743()
{
	SetVariable("ood1Lara4", (int)1);
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
		func_5731();
		var_108_string = "";
		func_170(var_98_object, "Neutral");
		@@@var_0_object:SetMessage((int)441);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)8443, (int)9267, (int)9266);
		goto Label_140;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_140:
	var_127_bool = 0;
	func_5101(var_127_bool);
	if(var_127_bool != 0) {

	Label_144:
		lshWaitForAnimEnd();
		var_128_object = var_3_object;
		if(var_128_object != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_object;
			func_4971(var_129_string);
			goto Label_144;
	}
		PlayAnimation("all", "idle");

	Label_159:
		WaitForAnimEnd();
		var_132_object = var_3_object;
		if(var_132_object != 0) {
			goto Label_169;
		}
		PlayAnimation("all", "idle");
		goto Label_159;
	}
	goto Label_169;
	
Label_169:
	return 0;
	
}


func_5234(var_133_object)
{
	var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0; var_138_object = Obj(); var_139_object = Obj(); var_140_int = 0;
	func_6515(Obj());
	var_141_object = var_138_object;
	@@var_138_object:FindMark(var_139_object, "d2q03BirdmaskGotoLara");
	var_143_object = var_139_object;
	if(var_143_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d2q03BirdmaskGotoLaraSelf");
	var_145_object = var_139_object;
	if(var_145_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d2q03LaraGotoJulia");
	var_147_object = var_139_object;
	if(var_147_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d2q03LaraGotoMaria");
	var_149_object = var_139_object;
	if(var_149_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d2q03LaraGotoMladVlad");
	var_151_object = var_139_object;
	if(var_151_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d2q03LaraGotoMoneyFoodSelf");
	var_153_object = var_139_object;
	if(var_153_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d2q03LaraGotoSklad");
	var_155_object = var_139_object;
	if(var_155_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d2q03LaraGotoSkladSelf");
	var_157_object = var_139_object;
	if(var_157_object != 0) {
		@@var_139_object:Remove();
	}
	func_6646();
	@@var_133_object:RemoveItemByType(var_140_int, "smoked_meat", (int)3);
	@@var_133_object:RemoveItemByType(var_140_int, "dried_fish", (int)3);
	@@var_133_object:RemoveItemByType(var_140_int, "bread", (int)3);
	var_173_bool = 0; var_174_string = ""; var_175_string = "";
	func_5048(var_173_bool, "quest_d2_03", "completed");
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5749()
{
	SetVariable("ood1Lara5", (int)1);
	return 0;
}


func_6265(var_250_bool)
{
	var_252_int = 0; var_253_string = "";
	func_5006(var_252_int, "d6q01");
	var_255_bool = var_252_int == (int)-1;
	if(var_255_bool != 0) {
		var_250_bool = 1;
		return 0;
	}
	var_250_bool = 0;
	return 0;
}


func_5755()
{
	SetVariable("ood1Lara6", (int)1);
	return 0;
}


func_5761()
{
	SetVariable("ood1Lara7", (int)1);
	return 0;
}


func_6277(var_258_bool)
{
	var_260_int = 0; var_261_string = "";
	func_5006(var_260_int, "KnowJulia");
	var_263_bool = var_260_int == (int)1;
	if(var_263_bool != 0) {
		var_258_bool = 1;
		return 0;
	}
	var_258_bool = 0;
	return 0;
}


func_5767()
{
	SetVariable("ood1Lara8", (int)1);
	return 0;
}


func_5773()
{
	SetVariable("ood1Lara9", (int)1);
	return 0;
}


func_6289(var_274_bool)
{
	var_276_int = 0; var_277_string = "";
	func_5006(var_276_int, "KnowKaterina");
	var_279_bool = var_276_int == (int)1;
	if(var_279_bool != 0) {
		var_274_bool = 1;
		return 0;
	}
	var_274_bool = 0;
	return 0;
}


func_5779(var_221_object)
{
	var_222_object = Obj(); var_223_string = ""; var_224_float = 0;
	func_6515(Obj());
	var_225_object = var_222_object;
	func_6532(var_222_object, "pt_map_d2q03_shouse", (float)2);
	var_245_object = Obj();
	func_6515(var_245_object);
	@@var_221_object:ShowMap(var_245_object);
	return 0;
}


func_6301(var_248_bool)
{
	var_250_int = 0; var_251_string = "";
	func_5006(var_250_int, "ood1Lara4");
	var_253_bool = var_250_int == (int)0;
	if(var_253_bool != 0) {
		var_248_bool = 1;
		return 0;
	}
	var_248_bool = 0;
	return 0;
}


func_5795(var_234_object)
{
	Trace("morfin is given");
	var_237_object = Obj(); var_238_string = ""; var_239_int = 0;
	var_234_object = var_237_object;
	func_5035(var_237_object, "morfin", (int)1);
	return 0;
}


func_6313(var_264_bool)
{
	var_266_int = 0; var_267_string = "";
	func_5006(var_266_int, "ood1Lara5");
	var_269_bool = var_266_int == (int)0;
	if(var_269_bool != 0) {
		var_264_bool = 1;
		return 0;
	}
	var_264_bool = 0;
	return 0;
}


func_170(var_2_object, var_40_string)
{
	var_41_bool = 0;
	func_5101(var_41_bool);
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
	func_4971(var_44_string);
	var_2_object = var_40_string;
	return 0;
}


func_5806(var_240_object)
{
	Trace("etorfin is given");
	var_243_object = Obj(); var_244_string = ""; var_245_int = 0;
	var_240_object = var_243_object;
	func_5035(var_243_object, "etorfin", (int)1);
	return 0;
}


func_1204(var_0_object, var_146_int, var_147_object)
{
	var_149_object = Obj(); var_150_bool = 0; var_151_int = 0; var_152_bool = 0; var_153_object = Obj(); var_154_bool = 0; var_155_int = 0; var_156_bool = 0;
	var_0_object = var_147_object;
	var_157_bool = 0; var_158_object = Obj();
	var_147_object = var_158_object;
	func_4911(var_157_bool, var_158_object);
	var_159_bool = var_157_bool == 0; //@nz
	if(var_159_bool != 0) {
		var_146_int = -2;
		return 8;
	}
	CreateDialog(var_153_object);
	var_160_int = 0;
	func_5097(var_160_int);
	@@var_153_object:SetNPCName(var_160_int);
	var_161_string = "";
	func_5099(var_161_string);
	@@var_153_object:SetPhoto(var_161_string);
	var_162_int = 0;
	func_6565(var_162_int);
	@@var_153_object:SetPlayerName(var_162_int);
	IsOverrideActive(var_154_bool);
	var_163_bool = var_154_bool;
	if(var_163_bool != 0) {
		var_146_int = -2;
		return 8;
	}
	DoDialog(var_153_object);
	var_164_object = Obj(); var_165_object = Obj();
	var_147_object = var_164_object;
	var_153_object = var_165_object;
	TaskCall(7);
	func_1267(var_166_object, var_167_object, var_168_string, var_169_bool, var_164_object, var_165_object);
	TaskReturn();
	@@var_153_object:IsDialogEnd(var_156_bool);
	
Label_1249:
	var_386_bool = var_156_bool == 0; //@nz
	if(var_386_bool != 0) {
		sync();
		@@var_153_object:IsDialogEnd(var_156_bool);
		goto Label_1249;
	}
	var_147_object = Obj();
	func_4967();
	StopDialog(var_153_object);
	@@var_153_object:GetReturnValue((int)-1);
	var_155_int = var_146_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6325(var_280_bool)
{
	var_282_int = 0; var_283_string = "";
	func_5006(var_282_int, "ood1Lara6");
	var_285_bool = var_282_int == (int)0;
	if(var_285_bool != 0) {
		var_280_bool = 1;
		return 0;
	}
	var_280_bool = 0;
	return 0;
}


func_5817(var_215_object)
{
	Trace("novocaine is given");
	var_218_object = Obj(); var_219_string = ""; var_220_int = 0;
	var_215_object = var_218_object;
	func_5035(var_218_object, "novocaine", (int)1);
	return 0;
}


func_2751(var_2_object, var_263_string)
{
	var_264_bool = 0;
	func_5101(var_264_bool);
	var_265_bool = var_264_bool == 0; //@nz
	if(var_265_bool != 0) {
		return 0;
	}
	var_266_bool = var_263_string == var_2_object;
	if(var_266_bool != 0) {
		return 0;
	}
	var_267_string = "";
	var_263_string = var_267_string;
	func_4971(var_267_string);
	var_2_object = var_263_string;
	return 0;
}


func_6337(var_296_bool)
{
	var_298_int = 0; var_299_string = "";
	func_5006(var_298_int, "ood1Lara7");
	var_301_bool = var_298_int == (int)0;
	if(var_301_bool != 0) {
		var_296_bool = 1;
		return 0;
	}
	var_296_bool = 0;
	return 0;
}


func_5828()
{
	SetVariable("KnowPredictions", (int)1);
	return 0;
}


func_5318()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5834(var_531_bool)
{
	var_533_int = 0; var_534_string = "";
	func_5006(var_533_int, "KnowWarehouses");
	var_536_bool = var_533_int == (int)1;
	if(var_536_bool != 0) {
		var_531_bool = 1;
		return 0;
	}
	var_531_bool = 0;
	return 0;
}


func_5324()
{
	var_191_bool = 0; var_192_string = ""; var_193_string = "";
	func_5048(var_191_bool, "quest_d2_03", "birdmask");
	return 0;
}


func_6349(var_312_bool)
{
	var_314_int = 0; var_315_string = "";
	func_5006(var_314_int, "ood1Lara8");
	var_317_bool = var_314_int == (int)0;
	if(var_317_bool != 0) {
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_5331()
{
	SetVariable("d1q01KnowEpidemic", (int)1);
	func_6582();
	return 0;
}


func_5846(var_127_bool)
{
	var_129_int = 0; var_130_string = "";
	func_5006(var_129_int, "ood1Lara1");
	var_134_bool = var_129_int == (int)0;
	if(var_134_bool != 0) {
		var_127_bool = 1;
		return 0;
	}
	var_127_bool = 0;
	return 0;
}


func_6361(var_328_bool)
{
	var_330_int = 0; var_331_string = "";
	func_5006(var_330_int, "ood1Lara9");
	var_333_bool = var_330_int == (int)0;
	if(var_333_bool != 0) {
		var_328_bool = 1;
		return 0;
	}
	var_328_bool = 0;
	return 0;
}


func_5340(var_160_object)
{
	var_161_object = Obj(); var_162_string = ""; var_163_float = 0;
	func_6515(Obj());
	var_164_object = var_161_object;
	func_6532(var_161_object, "pt_map_ospina", (float)2);
	var_165_object = Obj();
	func_6515(var_165_object);
	@@var_160_object:ShowMap(var_165_object);
	return 0;
}


func_5858(var_155_bool)
{
	var_157_int = 0; var_158_string = "";
	func_5006(var_157_int, "ood1Lara2");
	var_160_bool = var_157_int == (int)0;
	if(var_160_bool != 0) {
		var_155_bool = 1;
		return 0;
	}
	var_155_bool = 0;
	return 0;
}


func_6373(var_306_bool)
{
	var_308_int = 0; var_309_string = "";
	func_5006(var_308_int, "KnowMladVlad");
	var_311_bool = var_308_int == (int)1;
	if(var_311_bool != 0) {
		var_306_bool = 1;
		return 0;
	}
	var_306_bool = 0;
	return 0;
}


func_5356(var_91_object)
{
	var_92_object = Obj(); var_93_string = ""; var_94_float = 0;
	func_6515(Obj());
	var_95_object = var_92_object;
	func_6532(var_92_object, "pt_map_mladvlad", (float)2);
	var_115_object = Obj();
	func_6515(var_115_object);
	@@var_91_object:ShowMap(var_115_object);
	return 0;
}


func_5870(var_218_bool)
{
	var_220_int = 0; var_221_string = "";
	func_5006(var_220_int, "ood1Lara3");
	var_223_bool = var_220_int == (int)0;
	if(var_223_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_6385(var_242_bool)
{
	var_244_int = 0; var_245_string = "";
	func_5006(var_244_int, "KnowPredictions");
	var_247_bool = var_244_int == (int)1;
	if(var_247_bool != 0) {
		var_242_bool = 1;
		return 0;
	}
	var_242_bool = 0;
	return 0;
}


func_1267(var_0_object, var_1_object, var_2_object, var_3_object, var_164_object, var_165_object)
{
	var_0_object = var_165_object;
	var_1_object = var_164_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_171_bool = 0;
		var_171_bool = 0;
		var_172_bool = 0;
		var_172_bool = 0;
		var_173_bool = 0;
		var_173_bool = 0;
		var_174_bool = 0;
		var_174_bool = 0;
		var_175_bool = 0; var_176_object = Obj();
		var_176_object = var_1_object;
		func_5846(var_176_object);
		if(var_175_bool != 0) {
			var_183_bool = 0; var_184_object = Obj();
			var_184_object = var_1_object;
			func_5894(var_184_object);
			var_189_bool = var_183_bool == 0; //@nz
			if(var_189_bool != 0) {
				var_174_bool = 1;
			}
		}
		if(var_174_bool != 0) {
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_5882(var_191_object);
			var_196_bool = var_190_bool == 0; //@nz
			if(var_196_bool != 0) {
				var_173_bool = 1;
			}
		}
		if(var_173_bool != 0) {
			var_197_bool = 0; var_198_object = Obj();
			var_198_object = var_1_object;
			func_6005(var_198_object);
			if(var_197_bool != 0) {
				var_172_bool = 1;
			}
		}
		if(var_172_bool != 0) {
			var_203_bool = 0; var_204_object = Obj();
			var_204_object = var_1_object;
			func_5858(var_204_object);
			var_209_bool = var_203_bool == 0; //@nz
			if(var_209_bool != 0) {
				var_171_bool = 1;
			}
		}
		if(var_171_bool != 0) {
			var_210_string = "";
			func_1585(var_165_object, "Neutral");
			@@@var_0_object:SetMessage((int)5423);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5447, (int)6886, (int)6001);
			@@@var_0_object:AddReply((int)6231, (int)6893, (int)6892);
		} else {
				var_230_bool = 0;
				var_230_bool = 0;
				var_231_bool = 0;
				var_231_bool = 0;
				var_232_bool = 0;
				var_232_bool = 0;
				var_233_bool = 0; var_234_object = Obj();
				var_234_object = var_1_object;
				func_5858(var_234_object);
				if(var_233_bool != 0) {
					var_235_bool = 0; var_236_object = Obj();
					var_236_object = var_1_object;
					func_5894(var_236_object);
					var_237_bool = var_235_bool == 0; //@nz
					if(var_237_bool != 0) {
						var_232_bool = 1;
					}
				}
				if(var_232_bool != 0) {
					var_238_bool = 0; var_239_object = Obj();
					var_239_object = var_1_object;
					func_5882(var_239_object);
					var_240_bool = var_238_bool == 0; //@nz
					if(var_240_bool != 0) {
						var_231_bool = 1;
					}
				}
				if(var_231_bool != 0) {
					var_241_bool = 0; var_242_object = Obj();
					var_242_object = var_1_object;
					func_6005(var_242_object);
					var_243_bool = var_241_bool == 0; //@nz
					if(var_243_bool != 0) {
						var_230_bool = 1;
					}
				}
				if(var_230_bool != 0) {
					var_244_string = "";
					func_1585(var_165_object, "Neutral");
					@@@var_0_object:SetMessage((int)8666);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)8667, (int)9493, (int)9492);
					goto Label_1555;
				}
				var_249_string = "";
				func_1585(var_165_object, "Neutral");
				@@@var_0_object:SetMessage((int)8034);
				@@@var_0_object:ClearReplies();
				var_251_bool = 0;
				var_251_bool = 1;
				var_252_bool = 0;
				var_252_bool = 0;
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_6017(var_253_bool, var_254_object);
				if(var_253_bool != 0) {
					var_264_bool = 0; var_265_object = Obj();
					var_265_object = var_1_object;
					func_5870(var_265_object);
					if(var_264_bool != 0) {
						var_252_bool = 1;
					}
				}
				if(var_252_bool != 1) {
					var_270_bool = 0;
					var_270_bool = 0;
					var_271_bool = 0; var_272_object = Obj();
					var_272_object = var_1_object;
					func_6075(var_271_bool, var_272_object);
					if(var_271_bool != 0) {
						var_282_bool = 0; var_283_object = Obj();
						var_283_object = var_1_object;
						func_5870(var_283_object);
						if(var_282_bool != 0) {
							var_270_bool = 1;
						}
					}
					if(var_270_bool != 1) {
						var_251_bool = 0;
					}
				}
				if(var_251_bool != 0) {
					@@@var_0_object:AddReply((int)8036, (int)5976, (int)8859);
				}
				var_287_bool = 0;
				var_287_bool = 0;
				var_288_bool = 0; var_289_object = Obj();
				var_289_object = var_1_object;
				func_6385(var_289_object);
				if(var_288_bool != 0) {
					var_294_bool = 0; var_295_object = Obj();
					var_295_object = var_1_object;
					func_6301(var_295_object);
					if(var_294_bool != 0) {
						var_287_bool = 1;
					}
				}
				if(var_287_bool != 0) {
					@@@var_0_object:AddReply((int)8039, (int)5991, (int)8862);
				}
				var_303_bool = 0;
				var_303_bool = 0;
				var_304_bool = 0; var_305_object = Obj();
				var_305_object = var_1_object;
				func_6277(var_305_object);
				if(var_304_bool != 0) {
					var_310_bool = 0; var_311_object = Obj();
					var_311_object = var_1_object;
					func_6313(var_311_object);
					if(var_310_bool != 0) {
						var_303_bool = 1;
					}
				}
				if(var_303_bool != 0) {
					@@@var_0_object:AddReply((int)8042, (int)8884, (int)8865);
				}
				var_319_bool = 0;
				var_319_bool = 0;
				var_320_bool = 0; var_321_object = Obj();
				var_321_object = var_1_object;
				func_6289(var_321_object);
				if(var_320_bool != 0) {
					var_326_bool = 0; var_327_object = Obj();
					var_327_object = var_1_object;
					func_6325(var_327_object);
					if(var_326_bool != 0) {
						var_319_bool = 1;
					}
				}
				if(var_319_bool != 0) {
					@@@var_0_object:AddReply((int)8046, (int)8885, (int)8869);
				}
				var_335_bool = 0;
				var_335_bool = 0;
				var_336_bool = 0; var_337_object = Obj();
				var_337_object = var_1_object;
				func_6229(var_337_object);
				if(var_336_bool != 0) {
					var_342_bool = 0; var_343_object = Obj();
					var_343_object = var_1_object;
					func_6337(var_343_object);
					if(var_342_bool != 0) {
						var_335_bool = 1;
					}
				}
				if(var_335_bool != 0) {
					@@@var_0_object:AddReply((int)8047, (int)8886, (int)8870);
				}
				var_351_bool = 0;
				var_351_bool = 0;
				var_352_bool = 0; var_353_object = Obj();
				var_353_object = var_1_object;
				func_6373(var_353_object);
				if(var_352_bool != 0) {
					var_358_bool = 0; var_359_object = Obj();
					var_359_object = var_1_object;
					func_6349(var_359_object);
					if(var_358_bool != 0) {
						var_351_bool = 1;
					}
				}
				if(var_351_bool != 0) {
					@@@var_0_object:AddReply((int)8051, (int)8887, (int)8874);
				}
				var_367_bool = 0;
				var_367_bool = 0;
				var_368_bool = 0; var_369_object = Obj();
				var_369_object = var_1_object;
				func_6157(var_369_object);
				if(var_368_bool != 0) {
					var_374_bool = 0; var_375_object = Obj();
					var_375_object = var_1_object;
					func_6361(var_375_object);
					if(var_374_bool != 0) {
						var_367_bool = 1;
					}
				}
				if(var_367_bool != 0) {
					@@@var_0_object:AddReply((int)8052, (int)8888, (int)8875);
				}
				@@@var_0_object:AddReply((int)8709, (int)-1, (int)9546);
				goto Label_1555;
		}
	}
Label_1555:
	var_222_bool = 0;
	func_5101(var_222_bool);
	if(var_222_bool != 0) {

	Label_1559:
		lshWaitForAnimEnd();
		var_223_object = var_3_object;
		if(var_223_object != 0) {
		} else {
			var_224_string = "";
			var_224_string = var_2_object;
			func_4971(var_224_string);
			goto Label_1559;
	}
		PlayAnimation("all", "idle");

	Label_1574:
		WaitForAnimEnd();
		var_227_object = var_3_object;
		if(var_227_object != 0) {
			goto Label_1584;
		}
		PlayAnimation("all", "idle");
		goto Label_1574;

	}
	goto Label_1584;
	
Label_1584:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4f7";


func_5882(var_142_bool)
{
	var_144_int = 0; var_145_string = "";
	func_5006(var_144_int, "d1q01");
	var_147_bool = var_144_int == (int)1000;
	if(var_147_bool != 0) {
		var_142_bool = 1;
		return 0;
	}
	var_142_bool = 0;
	return 0;
}


func_5372()
{
	SetVariable("ood4Lara1", (int)1);
	return 0;
}


func_6397(var_303_bool, var_304_object)
{
	var_305_int = 0; var_306_int = 0;
	@@var_304_object:GetItemCountOfType(var_306_int, "smoked_meat");
	var_309_bool = var_306_int < (int)3;
	if(var_309_bool != 0) {
		var_303_bool = 0;
		return 2;
	}
	@@var_304_object:GetItemCountOfType(var_306_int, "dried_fish");
	var_312_bool = var_306_int < (int)3;
	if(var_312_bool != 0) {
		var_303_bool = 0;
		return 2;
	}
	@@var_304_object:GetItemCountOfType(var_306_int, "bread");
	var_315_bool = var_306_int < (int)3;
	if(var_315_bool != 0) {
		var_303_bool = 0;
		return 2;
	}
	var_303_bool = 1;
	return 2;
}


func_5378()
{
	var_42_object = Obj(); var_43_object = Obj();
	SetVariable("d4q01", (int)2);
	func_6515(Obj());
	var_46_object = var_43_object;
	var_57_float = 0;
	func_5060(var_57_float);
	@@var_43_object:AddMark("d4q01LaraGotoMladVlad", "pt_map_mladvlad", (int)1, (int)11483, var_57_float);
	var_64_float = 0;
	func_5060(var_64_float);
	@@var_43_object:AddMark("d4q01LaraGotoMladVladSelf", "pt_map_lara", (int)1, (int)15321, var_64_float);
	func_6662();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5894(var_135_bool)
{
	var_137_int = 0; var_138_string = "";
	func_5006(var_137_int, "d1q01");
	var_140_bool = var_137_int == (int)0;
	if(var_140_bool != 0) {
		var_135_bool = 1;
		return 0;
	}
	var_135_bool = 0;
	return 0;
}


func_5906(var_249_bool)
{
	var_251_int = 0; var_252_string = "";
	func_5006(var_251_int, "ood2Lara1");
	var_256_bool = var_251_int == (int)0;
	if(var_256_bool != 0) {
		var_249_bool = 1;
		return 0;
	}
	var_249_bool = 0;
	return 0;
}


func_6424(var_209_bool)
{
	var_211_int = 0;
	func_5074(var_211_int);
	var_217_bool = var_211_int >= (int)18;
	if(var_217_bool != 0) {
		var_209_bool = 1;
		return 0;
	}
	var_209_bool = 0;
	return 0;
}


func_4894(var_31_bool, var_32_object)
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


func_5918(var_289_bool)
{
	var_291_int = 0; var_292_string = "";
	func_5006(var_291_int, "ood2Lara2");
	var_294_bool = var_291_int == (int)0;
	if(var_294_bool != 0) {
		var_289_bool = 1;
		return 0;
	}
	var_289_bool = 0;
	return 0;
}


func_5410()
{
	SetVariable("ood4Lara2", (int)1);
	return 0;
}


func_6435(var_227_bool)
{
	var_229_bool = 0;
	var_229_bool = 0;
	var_230_int = 0;
	func_5074(var_230_int);
	var_232_bool = var_230_int >= (int)12;
	if(var_232_bool != 0) {
		var_233_int = 0;
		func_5074(var_233_int);
		var_235_bool = var_233_int < (int)18;
		if(var_235_bool != 0) {
			var_229_bool = 1;
		}
	}
	if(var_229_bool != 0) {
		var_227_bool = 1;
		return 0;
	}
	var_227_bool = 0;
	return 0;
}


func_5416()
{
	var_132_object = Obj(); var_133_object = Obj();
	SetVariable("d4q01_subquest", (int)3);
	func_6515(Obj());
	var_136_object = var_133_object;
	var_141_float = 0;
	func_5060(var_141_float);
	@@var_133_object:AddMark("d4q01LaraGotoOspina", "pt_map_ospina", (int)0, (int)11506, var_141_float);
	var_146_float = 0;
	func_5060(var_146_float);
	@@var_133_object:AddMark("d4q01LaraGotoOspinaSelf", "pt_map_lara", (int)1, (int)15324, var_146_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4906(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_5930(var_320_bool)
{
	var_322_int = 0; var_323_string = "";
	func_5006(var_322_int, "ood2Lara3");
	var_325_bool = var_322_int == (int)0;
	if(var_325_bool != 0) {
		var_320_bool = 1;
		return 0;
	}
	var_320_bool = 0;
	return 0;
}


func_4911(var_45_bool, var_46_object)
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
	func_4996(var_70_cvector, var_71_cvector);
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


func_5942(var_257_bool)
{
	var_259_int = 0; var_260_string = "";
	func_5006(var_259_int, "d2q03");
	var_262_bool = var_259_int == (int)0;
	if(var_262_bool != 0) {
		var_257_bool = 1;
		return 0;
	}
	var_257_bool = 0;
	return 0;
}


func_6456(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj();
	GetDiaryRoot(var_57_object);
	var_58_bool = var_57_object == 0; //@nz
	if(var_58_bool != 0) {
		Trace("Can't retrieve diary root");
		var_55_object = 0;
		return 2;
	}
	var_57_object = var_55_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5954(var_332_bool)
{
	var_332_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_5445()
{
	SetVariable("ood4Lara3", (int)1);
	return 0;
}


func_6469(var_46_bool, var_47_object, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0;
	func_6456(Obj());
	var_55_object = var_52_object;
	@@var_52_object:Find(var_48_int, var_53_object);
	var_60_bool = var_53_object == 0; //@nz
	if(var_60_bool != 0) {
		var_62_int = "Can't find diary parent with id: " + var_48_int;
		Trace(var_62_int);
		var_46_bool = 0;
		return 6;
	}
	@@var_53_object:AddChild(var_47_object);
	SetVariable("player_diary", (int)1);
	@@var_47_object:GetCategory(var_54_int);
	SetDiarySection(var_54_int);
	var_46_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5959(var_301_bool, var_302_object)
{
	var_303_bool = 0; var_304_object = Obj();
	var_302_object = var_304_object;
	func_6397(var_303_bool, var_304_object);
	if(var_303_bool != 0) {
		var_301_bool = 1;
		return 0;
	}
	var_301_bool = 0;
	return 0;
}


func_5451()
{
	SetVariable("d4q02LaraGivesMedcine", (int)1);
	return 0;
}


func_5969(var_334_bool)
{
	var_336_int = 0; var_337_string = "";
	func_5006(var_336_int, "d2q03");
	var_339_bool = var_336_int == (int)1;
	if(var_339_bool != 0) {
		var_334_bool = 1;
		return 0;
	}
	var_334_bool = 0;
	return 0;
}


func_5457(var_177_object)
{
	var_178_object = Obj(); var_179_object = Obj();
	var_180_bool = 0;
	var_180_bool = 0;
	var_181_bool = 0;
	var_181_bool = 0;
	var_182_int = 0; var_183_string = "";
	func_5006(var_182_int, "d4q02AnnaGivesMedcine");
	var_187_bool = var_182_int == (int)1;
	if(var_187_bool != 0) {
		var_188_int = 0; var_189_string = "";
		func_5006(var_188_int, "d4q02JuliaGivesMedcine");
		var_191_bool = var_188_int == (int)1;
		if(var_191_bool != 0) {
			var_181_bool = 1;
		}
	}
	if(var_181_bool != 0) {
		var_192_int = 0; var_193_string = "";
		func_5006(var_192_int, "d4q02LaraGivesMedcine");
		var_195_bool = var_192_int == (int)1;
		if(var_195_bool != 0) {
			var_180_bool = 1;
		}
	}
	if(var_180_bool != 0) {
		SetVariable("d4q02", (int)2);
		func_6515(Obj());
		var_198_object = var_179_object;
		var_203_float = 0;
		func_5060(var_203_float);
		@@var_179_object:AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", (int)0, (int)11842, var_203_float);
		var_204_bool = 0; var_205_string = ""; var_206_string = "";
		func_5048(var_204_bool, "quest_d4_02", "birdmask");
		var_210_object = Obj(); var_211_string = ""; var_212_float = 0;
		func_6515(Obj());
		var_213_object = var_210_object;
		func_6532(var_210_object, "pt_d4q02_birdmask", (float)2);
		var_214_object = Obj();
		func_6515(var_214_object);
		@@var_177_object:ShowMap(var_214_object);
		var_179_object = 0;
	}
	return 2;
}


func_348(var_0_object, var_696_int, var_697_object)
{
	var_699_object = Obj(); var_700_bool = 0; var_701_int = 0; var_702_bool = 0; var_703_object = Obj(); var_704_bool = 0; var_705_int = 0; var_706_bool = 0;
	var_0_object = var_697_object;
	var_707_bool = 0; var_708_object = Obj();
	var_697_object = var_708_object;
	func_4911(var_707_bool, var_708_object);
	var_709_bool = var_707_bool == 0; //@nz
	if(var_709_bool != 0) {
		var_696_int = -2;
		return 8;
	}
	CreateDialog(var_703_object);
	var_710_int = 0;
	func_5097(var_710_int);
	@@var_703_object:SetNPCName(var_710_int);
	var_711_string = "";
	func_5099(var_711_string);
	@@var_703_object:SetPhoto(var_711_string);
	var_712_int = 0;
	func_6565(var_712_int);
	@@var_703_object:SetPlayerName(var_712_int);
	IsOverrideActive(var_704_bool);
	var_713_bool = var_704_bool;
	if(var_713_bool != 0) {
		var_696_int = -2;
		return 8;
	}
	DoDialog(var_703_object);
	var_714_object = Obj(); var_715_object = Obj();
	var_697_object = var_714_object;
	var_703_object = var_715_object;
	TaskCall(5);
	func_411(var_716_object, var_717_object, var_718_string, var_719_bool, var_714_object, var_715_object);
	TaskReturn();
	@@var_703_object:IsDialogEnd(var_706_bool);
	
Label_393:
	var_811_bool = var_706_bool == 0; //@nz
	if(var_811_bool != 0) {
		sync();
		@@var_703_object:IsDialogEnd(var_706_bool);
		goto Label_393;
	}
	var_697_object = Obj();
	func_4967();
	StopDialog(var_703_object);
	@@var_703_object:GetReturnValue((int)-1);
	var_705_int = var_696_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5981(var_295_bool)
{
	var_297_int = 0; var_298_string = "";
	func_5006(var_297_int, "d2q03");
	var_300_bool = var_297_int == (int)3;
	if(var_300_bool != 0) {
		var_295_bool = 1;
		return 0;
	}
	var_295_bool = 0;
	return 0;
}


func_6498(var_156_bool, var_157_int)
{
	var_158_object = Obj(); var_159_object = Obj(); var_160_object = Obj(); var_161_object = Obj();
	func_6456(Obj());
	var_162_object = var_160_object;
	@@var_160_object:Find(var_157_int, var_161_object);
	var_163_bool = var_161_object == 0; //@nz
	if(var_163_bool != 0) {
		var_156_bool = 0;
		return 4;
	}
	@@var_161_object:Remove();
	var_156_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4967()
{
	CameraSwitchToNormal();
	return 0;
}


func_5993(var_267_bool)
{
	var_269_int = 0; var_270_string = "";
	func_5006(var_269_int, "d2q03");
	var_272_bool = var_269_int == (int)1000;
	if(var_272_bool != 0) {
		var_267_bool = 1;
		return 0;
	}
	var_267_bool = 0;
	return 0;
}


func_4971(var_35_string)
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


func_6515(var_46_object)
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


func_6005(var_149_bool)
{
	var_151_int = 0; var_152_string = "";
	func_5006(var_151_int, "d1q01KnowEpidemic");
	var_154_bool = var_151_int == (int)1;
	if(var_154_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_4989()
{
	var_33_bool = 0;
	func_5101(var_33_bool);
	if(var_33_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_6017(var_207_bool, var_208_object)
{
	var_209_bool = 0; var_210_object = Obj();
	var_208_object = var_210_object;
	func_6424(var_210_object);
	if(var_209_bool != 0) {
		var_207_bool = 1;
		return 0;
	}
	var_207_bool = 0;
	return 0;
}


func_3459(var_0_object, var_518_int, var_519_object)
{
	var_521_object = Obj(); var_522_bool = 0; var_523_int = 0; var_524_bool = 0; var_525_object = Obj(); var_526_bool = 0; var_527_int = 0; var_528_bool = 0;
	var_0_object = var_519_object;
	var_529_bool = 0; var_530_object = Obj();
	var_519_object = var_530_object;
	func_4911(var_529_bool, var_530_object);
	var_531_bool = var_529_bool == 0; //@nz
	if(var_531_bool != 0) {
		var_518_int = -2;
		return 8;
	}
	CreateDialog(var_525_object);
	var_532_int = 0;
	func_5097(var_532_int);
	@@var_525_object:SetNPCName(var_532_int);
	var_533_string = "";
	func_5099(var_533_string);
	@@var_525_object:SetPhoto(var_533_string);
	var_534_int = 0;
	func_6565(var_534_int);
	@@var_525_object:SetPlayerName(var_534_int);
	IsOverrideActive(var_526_bool);
	var_535_bool = var_526_bool;
	if(var_535_bool != 0) {
		var_518_int = -2;
		return 8;
	}
	DoDialog(var_525_object);
	var_536_object = Obj(); var_537_object = Obj();
	var_519_object = var_536_object;
	var_525_object = var_537_object;
	TaskCall(11);
	func_3522(var_538_object, var_539_object, var_540_string, var_541_bool, var_536_object, var_537_object);
	TaskReturn();
	@@var_525_object:IsDialogEnd(var_528_bool);
	
Label_3504:
	var_637_bool = var_528_bool == 0; //@nz
	if(var_637_bool != 0) {
		sync();
		@@var_525_object:IsDialogEnd(var_528_bool);
		goto Label_3504;
	}
	var_519_object = Obj();
	func_4967();
	StopDialog(var_525_object);
	@@var_525_object:GetReturnValue((int)-1);
	var_527_int = var_518_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4996(var_70_cvector, var_71_cvector)
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


func_6532(var_92_object, var_93_string, var_94_float)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_object = Obj(); var_103_bool = 0;
	GetMainOutdoorScene(var_102_object);
	var_104_bool = var_102_object == 0; //@ne
	if(var_104_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_102_object:GetLocator(var_93_string, var_103_bool, var_100_cvector, var_101_cvector);
	var_106_bool = var_103_bool == 0; //@nz
	if(var_106_bool != 0) {
		var_108_int = "Warning: outdoor scene locator " + var_93_string;
		var_110_int = var_108_int + " doesnt exist";
		Trace(var_110_int);
	}
	@@var_102_object:GetMap(var_92_object);
	var_111_bool = var_92_object == 0; //@ne
	if(var_111_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_113_float = GetByIndex(var_100_cvector, 0);
	var_114_float = GetByIndex(var_100_cvector, 2);
	@@var_92_object:SetMapParams(var_113_float, var_114_float, var_94_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4484(var_0_object, var_641_int, var_642_object)
{
	var_644_object = Obj(); var_645_bool = 0; var_646_int = 0; var_647_bool = 0; var_648_object = Obj(); var_649_bool = 0; var_650_int = 0; var_651_bool = 0;
	var_0_object = var_642_object;
	var_652_bool = 0; var_653_object = Obj();
	var_642_object = var_653_object;
	func_4911(var_652_bool, var_653_object);
	var_654_bool = var_652_bool == 0; //@nz
	if(var_654_bool != 0) {
		var_641_int = -2;
		return 8;
	}
	CreateDialog(var_648_object);
	var_655_int = 0;
	func_5097(var_655_int);
	@@var_648_object:SetNPCName(var_655_int);
	var_656_string = "";
	func_5099(var_656_string);
	@@var_648_object:SetPhoto(var_656_string);
	var_657_int = 0;
	func_6565(var_657_int);
	@@var_648_object:SetPlayerName(var_657_int);
	IsOverrideActive(var_649_bool);
	var_658_bool = var_649_bool;
	if(var_658_bool != 0) {
		var_641_int = -2;
		return 8;
	}
	DoDialog(var_648_object);
	var_659_object = Obj(); var_660_object = Obj();
	var_642_object = var_659_object;
	var_648_object = var_660_object;
	TaskCall(13);
	func_4547(var_661_object, var_662_object, var_663_string, var_664_bool, var_659_object, var_660_object);
	TaskReturn();
	@@var_648_object:IsDialogEnd(var_651_bool);
	
Label_4529:
	var_692_bool = var_651_bool == 0; //@nz
	if(var_692_bool != 0) {
		sync();
		@@var_648_object:IsDialogEnd(var_651_bool);
		goto Label_4529;
	}
	var_642_object = Obj();
	func_4967();
	StopDialog(var_648_object);
	@@var_648_object:GetReturnValue((int)-1);
	var_650_int = var_641_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6027(var_299_bool)
{
	var_301_int = 0; var_302_string = "";
	func_5006(var_301_int, "d4q01");
	var_304_bool = var_301_int == (int)1;
	if(var_304_bool != 0) {
		var_299_bool = 1;
		return 0;
	}
	var_299_bool = 0;
	return 0;
}


func_5006(var_91_int, var_92_string)
{
	var_93_int = 0; var_94_int = 0;
	GetVariable(var_92_string, var_94_int);
	var_94_int = var_91_int;
	return 2;
}


func_5011(var_109_object, var_110_string)
{
	var_111_object = Obj(); var_112_object = Obj(); var_113_object = Obj(); var_114_object = Obj();
	GetMainOutdoorScene(var_113_object);
	var_116_int = var_110_string + ".bin";
	AddBlankActor(var_114_object, var_113_object, var_110_string, var_116_int);
	var_114_object = var_109_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5525()
{
	SetVariable("ood4Lara4", (int)1);
	return 0;
}


func_6039(var_293_bool)
{
	var_295_int = 0; var_296_string = "";
	func_5006(var_295_int, "ood4Lara1");
	var_298_bool = var_295_int == (int)0;
	if(var_298_bool != 0) {
		var_293_bool = 1;
		return 0;
	}
	var_293_bool = 0;
	return 0;
}


func_411(var_0_object, var_1_object, var_2_object, var_3_object, var_714_object, var_715_object)
{
	var_0_object = var_715_object;
	var_1_object = var_714_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_721_string = "";
		func_551(var_715_object, "Neutral");
		@@@var_0_object:SetMessage((int)3662);
		@@@var_0_object:ClearReplies();
		var_727_bool = 0;
		var_727_bool = 0;
		var_728_bool = 0; var_729_object = Obj();
		var_729_object = var_1_object;
		func_6169(var_729_object);
		if(var_728_bool != 0) {
			var_734_bool = 0; var_735_object = Obj();
			var_735_object = var_1_object;
			func_6181(var_735_object);
			if(var_734_bool != 0) {
				var_727_bool = 1;
			}
		}
		if(var_727_bool != 0) {
			@@@var_0_object:AddReply((int)12735, (int)11881, (int)13929);
		}
		var_743_bool = 0;
		var_743_bool = 0;
		var_744_bool = 0;
		var_744_bool = 0;
		var_745_bool = 0;
		var_745_bool = 0;
		var_746_bool = 0; var_747_object = Obj();
		var_747_object = var_1_object;
		func_6193(var_747_object);
		if(var_746_bool != 0) {
			var_752_bool = 0; var_753_object = Obj();
			var_753_object = var_1_object;
			func_6205(var_753_object);
			if(var_752_bool != 0) {
				var_745_bool = 1;
			}
		}
		if(var_745_bool != 0) {
			var_758_bool = 0; var_759_object = Obj();
			var_759_object = var_1_object;
			func_6253(var_759_object);
			var_764_bool = var_758_bool == 0; //@nz
			if(var_764_bool != 0) {
				var_744_bool = 1;
			}
		}
		if(var_744_bool != 0) {
			var_765_bool = 0; var_766_object = Obj();
			var_766_object = var_1_object;
			func_6265(var_766_object);
			var_771_bool = var_765_bool == 0; //@nz
			if(var_771_bool != 0) {
				var_743_bool = 1;
			}
		}
		if(var_743_bool != 0) {
			@@@var_0_object:AddReply((int)12736, (int)11904, (int)13930);
		}
		var_775_bool = 0;
		var_775_bool = 0;
		var_776_bool = 0; var_777_object = Obj();
		var_777_object = var_1_object;
		func_6217(var_777_object);
		if(var_776_bool != 0) {
			var_782_bool = 0; var_783_object = Obj();
			var_783_object = var_1_object;
			func_5993(var_783_object);
			if(var_782_bool != 0) {
				var_775_bool = 1;
			}
		}
		if(var_775_bool != 0) {
			@@@var_0_object:AddReply((int)3664, (int)3970, (int)3969);
		}
		var_791_bool = 0; var_792_object = Obj();
		var_792_object = var_1_object;
		func_6241(var_792_object);
		if(var_791_bool != 0) {
			@@@var_0_object:AddReply((int)3663, (int)3972, (int)3968);
		}
		@@@var_0_object:AddReply((int)13019, (int)-1, (int)14225);
		goto Label_521;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19f";
	}
Label_521:
	var_803_bool = 0;
	func_5101(var_803_bool);
	if(var_803_bool != 0) {

	Label_525:
		lshWaitForAnimEnd();
		var_804_object = var_3_object;
		if(var_804_object != 0) {
		} else {
			var_805_string = "";
			var_805_string = var_2_object;
			func_4971(var_805_string);
			goto Label_525;
	}
		PlayAnimation("all", "idle");

	Label_540:
		WaitForAnimEnd();
		var_808_object = var_3_object;
		if(var_808_object != 0) {
			goto Label_550;
		}
		PlayAnimation("all", "idle");
		goto Label_540;
	}
	goto Label_550;
	
Label_550:
	return 0;
	
}


func_5531()
{
	SetVariable("d5q01", (int)5);
	func_6678();
	var_65_bool = 0; var_66_string = ""; var_67_string = "";
	func_5048(var_65_bool, "quest_d5_01", "factory");
	return 0;
}


func_5022(var_223_object, var_224_object, var_225_int)
{
	var_226_int = 0; var_227_int = 0; var_228_bool = 0; var_229_int = 0; var_230_int = 0; var_231_bool = 0;
	@@var_224_object:GetItemID(var_229_int);
	GetInvItemProperty(var_230_int, var_229_int, "Category");
	@@var_223_object:AddItem(var_231_bool, var_224_object, var_230_int, var_225_int);
	var_233_bool = var_231_bool == 0; //@nz
	if(var_233_bool != 0) {
		@@var_223_object:DropItems(var_224_object, var_225_int);
	}
	return 6;
}


func_6051(var_309_bool)
{
	var_311_int = 0; var_312_string = "";
	func_5006(var_311_int, "ood4Lara2");
	var_314_bool = var_311_int == (int)0;
	if(var_314_bool != 0) {
		var_309_bool = 1;
		return 0;
	}
	var_309_bool = 0;
	return 0;
}


func_6565(var_88_int)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable("player", var_90_int);
	var_93_bool = var_90_int == (int)0;
	if(var_93_bool != 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0x19b4";
	}
	var_95_bool = var_90_int == (int)1;
	if(var_95_bool != 0) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
	return 2;
}


func_5545()
{
	SetVariable("ood6Lara1", (int)1);
	return 0;
}


func_5035(var_218_object, var_219_string, var_220_int)
{
	var_221_object = Obj(); var_222_object = Obj();
	CreateInvItem(var_222_object);
	@@var_222_object:SetItemName(var_219_string);
	var_223_object = Obj(); var_224_object = Obj(); var_225_int = 0;
	var_218_object = var_223_object;
	var_222_object = var_224_object;
	var_220_int = var_225_int;
	func_5022(var_223_object, var_224_object, var_225_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5551(var_42_object)
{
	func_6694();
	Trace("lara blood is given");
	var_70_object = Obj(); var_71_string = ""; var_72_int = 0;
	var_42_object = var_70_object;
	func_5035(var_70_object, "d6q01_lara_blood", (int)1);
	return 0;
}


func_6063(var_315_bool)
{
	var_317_int = 0; var_318_string = "";
	func_5006(var_317_int, "d4q01_subquest");
	var_320_bool = var_317_int == (int)2;
	if(var_320_bool != 0) {
		var_315_bool = 1;
		return 0;
	}
	var_315_bool = 0;
	return 0;
}


func_2485(var_0_object, var_390_int, var_391_object)
{
	var_393_object = Obj(); var_394_bool = 0; var_395_int = 0; var_396_bool = 0; var_397_object = Obj(); var_398_bool = 0; var_399_int = 0; var_400_bool = 0;
	var_0_object = var_391_object;
	var_401_bool = 0; var_402_object = Obj();
	var_391_object = var_402_object;
	func_4911(var_401_bool, var_402_object);
	var_403_bool = var_401_bool == 0; //@nz
	if(var_403_bool != 0) {
		var_390_int = -2;
		return 8;
	}
	CreateDialog(var_397_object);
	var_404_int = 0;
	func_5097(var_404_int);
	@@var_397_object:SetNPCName(var_404_int);
	var_405_string = "";
	func_5099(var_405_string);
	@@var_397_object:SetPhoto(var_405_string);
	var_406_int = 0;
	func_6565(var_406_int);
	@@var_397_object:SetPlayerName(var_406_int);
	IsOverrideActive(var_398_bool);
	var_407_bool = var_398_bool;
	if(var_407_bool != 0) {
		var_390_int = -2;
		return 8;
	}
	DoDialog(var_397_object);
	var_408_object = Obj(); var_409_object = Obj();
	var_391_object = var_408_object;
	var_397_object = var_409_object;
	TaskCall(9);
	func_2548(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object);
	TaskReturn();
	@@var_397_object:IsDialogEnd(var_400_bool);
	
Label_2530:
	var_514_bool = var_400_bool == 0; //@nz
	if(var_514_bool != 0) {
		sync();
		@@var_397_object:IsDialogEnd(var_400_bool);
		goto Label_2530;
	}
	var_391_object = Obj();
	func_4967();
	StopDialog(var_397_object);
	@@var_397_object:GetReturnValue((int)-1);
	var_399_int = var_390_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6582()
{
	var_50_object = Obj(); var_51_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_51_object, (int)33, (int)1, (int)12115);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_51_object = var_57_object;
	func_6469(var_56_bool, var_57_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5048(var_65_bool, var_66_string, var_67_string)
{
	var_68_object = Obj(); var_69_object = Obj();
	FindActor(var_69_object, var_66_string);
	var_70_bool = var_69_object == 0; //@ne
	if(var_70_bool != 0) {
		var_65_bool = 0;
		return 2;
	}
	Trigger(var_69_object, var_67_string);
	var_65_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6075(var_225_bool, var_226_object)
{
	var_227_bool = 0; var_228_object = Obj();
	var_226_object = var_228_object;
	func_6435(var_228_object);
	if(var_227_bool != 0) {
		var_225_bool = 1;
		return 0;
	}
	var_225_bool = 0;
	return 0;
}


func_5565()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3522(var_0_object, var_1_object, var_2_object, var_3_object, var_536_object, var_537_object)
{
	var_0_object = var_537_object;
	var_1_object = var_536_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_543_string = "";
		func_3671(var_537_object, "Neutral");
		@@@var_0_object:SetMessage((int)10151);
		@@@var_0_object:ClearReplies();
		var_549_bool = 0;
		var_549_bool = 0;
		var_550_bool = 0; var_551_object = Obj();
		var_551_object = var_1_object;
		func_6039(var_551_object);
		if(var_550_bool != 0) {
			var_556_bool = 0; var_557_object = Obj();
			var_557_object = var_1_object;
			func_6027(var_557_object);
			if(var_556_bool != 0) {
				var_549_bool = 1;
			}
		}
		if(var_549_bool != 0) {
			@@@var_0_object:AddReply((int)10152, (int)11195, (int)11194);
		}
		var_565_bool = 0;
		var_565_bool = 0;
		var_566_bool = 0; var_567_object = Obj();
		var_567_object = var_1_object;
		func_6051(var_567_object);
		if(var_566_bool != 0) {
			var_572_bool = 0; var_573_object = Obj();
			var_573_object = var_1_object;
			func_6063(var_573_object);
			if(var_572_bool != 0) {
				var_565_bool = 1;
			}
		}
		if(var_565_bool != 0) {
			@@@var_0_object:AddReply((int)10995, (int)12163, (int)12162);
		}
		var_581_bool = 0;
		var_581_bool = 0;
		var_582_bool = 0; var_583_object = Obj();
		var_583_object = var_1_object;
		func_6097(var_583_object);
		if(var_582_bool != 0) {
			var_588_bool = 0; var_589_object = Obj();
			var_589_object = var_1_object;
			func_6085(var_589_object);
			if(var_588_bool != 0) {
				var_581_bool = 1;
			}
		}
		if(var_581_bool != 0) {
			@@@var_0_object:AddReply((int)11435, (int)12638, (int)12637);
		}
		var_597_bool = 0;
		var_597_bool = 0;
		var_598_bool = 0; var_599_object = Obj();
		var_599_object = var_1_object;
		func_6085(var_599_object);
		if(var_598_bool != 0) {
			var_600_bool = 0; var_601_object = Obj();
			var_601_object = var_1_object;
			func_6109(var_601_object);
			var_606_bool = var_600_bool == 0; //@nz
			if(var_606_bool != 0) {
				var_597_bool = 1;
			}
		}
		if(var_597_bool != 0) {
			@@@var_0_object:AddReply((int)11476, (int)12683, (int)12682);
		}
		var_610_bool = 0;
		var_610_bool = 0;
		var_611_bool = 0; var_612_object = Obj();
		var_612_object = var_1_object;
		func_6133(var_612_object);
		if(var_611_bool != 0) {
			var_617_bool = 0; var_618_object = Obj();
			var_618_object = var_1_object;
			func_6121(var_618_object);
			if(var_617_bool != 0) {
				var_610_bool = 1;
			}
		}
		if(var_610_bool != 0) {
			@@@var_0_object:AddReply((int)11859, (int)13073, (int)13072);
		}
		@@@var_0_object:AddReply((int)11479, (int)-1, (int)12685);
		goto Label_3641;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xdc6";
	}
Label_3641:
	var_629_bool = 0;
	func_5101(var_629_bool);
	if(var_629_bool != 0) {

	Label_3645:
		lshWaitForAnimEnd();
		var_630_object = var_3_object;
		if(var_630_object != 0) {
		} else {
			var_631_string = "";
			var_631_string = var_2_object;
			func_4971(var_631_string);
			goto Label_3645;
	}
		PlayAnimation("all", "idle");

	Label_3660:
		WaitForAnimEnd();
		var_634_object = var_3_object;
		if(var_634_object != 0) {
			goto Label_3670;
		}
		PlayAnimation("all", "idle");
		goto Label_3660;
	}
	goto Label_3670;
	
Label_3670:
	return 0;
	
}


func_5571()
{
	SetVariable("ood6Lara2", (int)1);
	return 0;
}


func_4547(var_0_object, var_1_object, var_2_object, var_3_object, var_659_object, var_660_object)
{
	var_0_object = var_660_object;
	var_1_object = var_659_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_666_string = "";
		func_4610(var_660_object, "Neutral");
		@@@var_0_object:SetMessage((int)11662);
		@@@var_0_object:ClearReplies();
		var_672_bool = 0; var_673_object = Obj();
		var_673_object = var_1_object;
		func_6145(var_673_object);
		if(var_672_bool != 0) {
			@@@var_0_object:AddReply((int)11663, (int)12863, (int)12862);
		}
		@@@var_0_object:AddReply((int)11960, (int)-1, (int)13174);
		goto Label_4580;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x11c7";
	}
Label_4580:
	var_684_bool = 0;
	func_5101(var_684_bool);
	if(var_684_bool != 0) {

	Label_4584:
		lshWaitForAnimEnd();
		var_685_object = var_3_object;
		if(var_685_object != 0) {
		} else {
			var_686_string = "";
			var_686_string = var_2_object;
			func_4971(var_686_string);
			goto Label_4584;
	}
		PlayAnimation("all", "idle");

	Label_4599:
		WaitForAnimEnd();
		var_689_object = var_3_object;
		if(var_689_object != 0) {
			goto Label_4609;
		}
		PlayAnimation("all", "idle");
		goto Label_4599;
	}
	goto Label_4609;
	
Label_4609:
	return 0;
	
}


func_6085(var_331_bool)
{
	var_333_int = 0; var_334_string = "";
	func_5006(var_333_int, "d4q02");
	var_336_bool = var_333_int == (int)1;
	if(var_336_bool != 0) {
		var_331_bool = 1;
		return 0;
	}
	var_331_bool = 0;
	return 0;
}


func_5060(var_57_float)
{
	var_58_float = 0; var_59_float = 0;
	GetGameTime(var_59_float);
	var_59_float = var_57_float;
	return 2;
}


func_6598()
{
	var_75_object = Obj(); var_76_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_76_object, (int)12, (int)2, (int)3096);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_76_object = var_82_object;
	func_6469(var_81_bool, var_82_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5577()
{
	SetVariable("ood6Lara3", (int)1);
	return 0;
}


func_5065(var_140_int)
{
	var_141_float = 0; var_142_float = 0;
	GetGameTime(var_142_float);
	var_144_int = 0;
	var_144_int = var_142_float / (int)24;
	var_140_int = (int)1 + var_144_int;
	return 2;
}


func_5583()
{
	SetVariable("ood6Lara4", (int)1);
	return 0;
}


func_6097(var_325_bool)
{
	var_327_int = 0; var_328_string = "";
	func_5006(var_327_int, "ood4Lara3");
	var_330_bool = var_327_int == (int)0;
	if(var_330_bool != 0) {
		var_325_bool = 1;
		return 0;
	}
	var_325_bool = 0;
	return 0;
}


func_5074(var_211_int)
{
	var_212_float = 0; var_213_float = 0;
	GetGameTime(var_213_float);
	var_214_int = 0;
	var_213_float = var_214_int;
	var_211_int = var_214_int % (int)24;
	return 2;
}


func_5589()
{
	var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); var_109_object = Obj();
	SetVariable("d6q01LaraVolonteer", (int)1);
	func_6515(Obj());
	var_112_object = var_108_object;
	@@var_108_object:FindMark(var_109_object, "d6q01AlexandrGotoJulia");
	var_120_object = var_109_object;
	if(var_120_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01AlexandrGotoKaterina");
	var_122_object = var_109_object;
	if(var_122_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01AlexandrGotoLara");
	var_124_object = var_109_object;
	if(var_124_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01AlexangrGotoJulLaraSelf");
	var_126_object = var_109_object;
	if(var_126_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01BigVladGotoAnna");
	var_128_object = var_109_object;
	if(var_128_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01BigVladGotoAnnaOspinaSelf");
	var_130_object = var_109_object;
	if(var_130_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01BigVladGotoOspina");
	var_132_object = var_109_object;
	if(var_132_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01KaterinaGotoLaska");
	var_134_object = var_109_object;
	if(var_134_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01KaterinagotoLaskaSelf");
	var_136_object = var_109_object;
	if(var_136_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01KillerIsKlara");
	var_138_object = var_109_object;
	if(var_138_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01LaskaGotoAlbinos");
	var_140_object = var_109_object;
	if(var_140_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01ViktorGotoAlexandr");
	var_142_object = var_109_object;
	if(var_142_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01ViktorGotoAlxBigSelf");
	var_144_object = var_109_object;
	if(var_144_object != 0) {
		@@var_109_object:Remove();
	}
	@@var_108_object:FindMark(var_109_object, "d6q01ViktorGotoBigVlad");
	var_146_object = var_109_object;
	if(var_146_object != 0) {
		@@var_109_object:Remove();
	}
	func_6710();
	var_156_bool = 0; var_157_int = 0;
	func_6498(var_156_bool, (int)112);
	var_164_bool = 0; var_165_int = 0;
	func_6498(var_164_bool, (int)113);
	var_166_bool = 0; var_167_int = 0;
	func_6498(var_166_bool, (int)114);
	var_168_bool = 0; var_169_int = 0;
	func_6498(var_168_bool, (int)115);
	var_170_bool = 0; var_171_int = 0;
	func_6498(var_170_bool, (int)116);
	var_172_bool = 0; var_173_int = 0;
	func_6498(var_172_bool, (int)117);
	var_174_bool = 0; var_175_string = ""; var_176_string = "";
	func_5048(var_174_bool, "quest_d6_01", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6614()
{
	var_100_object = Obj(); var_101_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_101_object, (int)63, (int)2, (int)12145);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_101_object = var_107_object;
	func_6469(var_106_bool, var_107_object, (int)12);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5082(var_138_bool, var_139_int)
{
	var_140_int = 0;
	func_5065(var_140_int);
	var_138_bool = var_140_int == var_139_int;
	return 0;
}


func_6109(var_343_bool)
{
	var_345_int = 0; var_346_string = "";
	func_5006(var_345_int, "d4q02LaraGivesMedcine");
	var_348_bool = var_345_int == (int)1;
	if(var_348_bool != 0) {
		var_343_bool = 1;
		return 0;
	}
	var_343_bool = 0;
	return 0;
}


func_5088(var_813_bool)
{
	var_814_bool = 0; var_815_bool = 0;
	var_816_string = "";
	func_4971("No");
	lshWaitForAnimEnd(var_815_bool);
	var_815_bool = var_813_bool;
	return 2;
}


func_6630()
{
	var_211_object = Obj(); var_212_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_212_object, (int)65, (int)2, (int)12147);
	var_217_bool = 0; var_218_object = Obj(); var_219_int = 0;
	var_212_object = var_218_object;
	func_6469(var_217_bool, var_218_object, (int)12);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5097(var_86_int)
{
	var_86_int = 2866;
	return 0;
}


func_6121(var_360_bool)
{
	var_362_int = 0; var_363_string = "";
	func_5006(var_362_int, "d4q02");
	var_365_bool = var_362_int == (int)1000;
	if(var_365_bool != 0) {
		var_360_bool = 1;
		return 0;
	}
	var_360_bool = 0;
	return 0;
}


func_5099(var_87_string)
{
	var_87_string = "ui/NPC_Lara.png";
	return 0;
}


func_5101(var_33_bool)
{
	var_33_bool = 1;
	return 0;
}


func_5103()
{
	SetVariable("ood1Lara1", (int)1);
	return 0;
}


func_2548(var_0_object, var_1_object, var_2_object, var_3_object, var_408_object, var_409_object)
{
	var_0_object = var_409_object;
	var_1_object = var_408_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_415_bool = 0;
		var_415_bool = 0;
		var_416_bool = 0; var_417_object = Obj();
		var_417_object = var_1_object;
		func_5906(var_417_object);
		if(var_416_bool != 0) {
			var_422_bool = 0; var_423_object = Obj();
			var_423_object = var_1_object;
			func_5942(var_423_object);
			if(var_422_bool != 0) {
				var_415_bool = 1;
			}
		}
		if(var_415_bool != 0) {
			var_428_string = "";
			func_2751(var_409_object, "Neutral");
			@@@var_0_object:SetMessage((int)6893);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7378, (int)8140, (int)8139);
			@@@var_0_object:AddReply((int)7384, (int)8140, (int)8145);
		} else {
				var_448_string = "";
				func_2751(var_409_object, "Neutral");
				@@@var_0_object:SetMessage((int)7377);
				@@@var_0_object:ClearReplies();
				var_450_bool = 0;
				var_450_bool = 0;
				var_451_bool = 0;
				var_451_bool = 0;
				var_452_bool = 0; var_453_object = Obj();
				var_453_object = var_1_object;
				func_5918(var_453_object);
				if(var_452_bool != 0) {
					var_458_bool = 0; var_459_object = Obj();
					var_459_object = var_1_object;
					func_5981(var_459_object);
					if(var_458_bool != 0) {
						var_451_bool = 1;
					}
				}
				if(var_451_bool != 0) {
					var_464_bool = 0; var_465_object = Obj();
					var_465_object = var_1_object;
					func_5959(var_464_bool, var_465_object);
					if(var_464_bool != 0) {
						var_450_bool = 1;
					}
				}
				if(var_450_bool != 0) {
					@@@var_0_object:AddReply((int)6900, (int)7607, (int)7606);
				}
				var_482_bool = 0;
				var_482_bool = 0;
				var_483_bool = 0; var_484_object = Obj();
				var_484_object = var_1_object;
				func_5930(var_484_object);
				if(var_483_bool != 0) {
					var_489_bool = 0; var_490_object = Obj();
					var_490_object = var_1_object;
					func_5959(var_489_bool, var_490_object);
					if(var_489_bool != 0) {
						var_482_bool = 1;
					}
				}
				if(var_482_bool != 0) {
					@@@var_0_object:AddReply((int)6902, (int)7609, (int)7608);
				}
				var_494_bool = 0;
				var_494_bool = 0;
				var_495_bool = 0; var_496_object = Obj();
				var_496_object = var_1_object;
				func_5954(var_496_object);
				if(var_495_bool != 0) {
					var_497_bool = 0; var_498_object = Obj();
					var_498_object = var_1_object;
					func_5969(var_498_object);
					if(var_497_bool != 0) {
						var_494_bool = 1;
					}
				}
				if(var_494_bool != 0) {
					@@@var_0_object:AddReply((int)6905, (int)7612, (int)7611);
				}
				var_506_bool = 0; var_507_object = Obj();
				var_507_object = var_1_object;
				func_5942(var_507_object);
				if(var_506_bool != 0) {
					@@@var_0_object:AddReply((int)7745, (int)7601, (int)8545);
				}
				@@@var_0_object:AddReply((int)7744, (int)-1, (int)8544);
				goto Label_2721;
		}
	}
Label_2721:
	var_440_bool = 0;
	func_5101(var_440_bool);
	if(var_440_bool != 0) {

	Label_2725:
		lshWaitForAnimEnd();
		var_441_object = var_3_object;
		if(var_441_object != 0) {
		} else {
			var_442_string = "";
			var_442_string = var_2_object;
			func_4971(var_442_string);
			goto Label_2725;
	}
		PlayAnimation("all", "idle");

	Label_2740:
		WaitForAnimEnd();
		var_445_object = var_3_object;
		if(var_445_object != 0) {
			goto Label_2750;
		}
		PlayAnimation("all", "idle");
		goto Label_2740;

	}
	goto Label_2750;
	
Label_2750:
	return 0;
	
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0xabf";
EMIT "Pop(1)";
EMIT "Push((int) 9342)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9343)";
EMIT "Push((int) 10264)";
EMIT "Push((int) 10263)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9350)";
EMIT "Push((int) 10264)";
EMIT "Push((int) 10271)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0xaa1";
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0xabf";
EMIT "Pop(1)";
EMIT "Push((int) 9451)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9452)";
EMIT "Push((int) 10391)";
EMIT "Push((int) 10390)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9471)";
EMIT "Push((int) 10391)";
EMIT "Push((int) 10412)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0xaa1";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x9f8";


func_5109()
{
	SetVariable("ood1Lara2", (int)1);
	return 0;
}


func_6133(var_354_bool)
{
	var_356_int = 0; var_357_string = "";
	func_5006(var_356_int, "ood4Lara4");
	var_359_bool = var_356_int == (int)0;
	if(var_359_bool != 0) {
		var_354_bool = 1;
		return 0;
	}
	var_354_bool = 0;
	return 0;
}


func_6646()
{
	var_158_object = Obj(); var_159_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_159_object, (int)66, (int)2, (int)12148);
	var_164_bool = 0; var_165_object = Obj(); var_166_int = 0;
	var_159_object = var_165_object;
	func_6469(var_164_bool, var_165_object, (int)12);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5115()
{
	SetVariable("ood1Lara3", (int)1);
	return 0;
}


