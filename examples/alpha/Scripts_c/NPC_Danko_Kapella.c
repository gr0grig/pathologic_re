// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Kapella.png|W:KnowUklad|W:ood1Kapella1|W:ood1Kapella2|W:ood1Kapella3|W:ood1Kapella4|W:KnowKaterina|W:KnowKapella|W:d1q03IsKapella|W:d1q03KapellaGotoOspina|W:pt_map_ospina|A:AddMark|W:quest_d1_03|W:ood1Kapella6|W:funduk3 is given|W:funduk|W:playsound|W:giveitem|W:ood2Kapella1|W:ood2Kapella2|W:d2q01|W:d2q01KapellaGotoSpi4ka|W:pt_map_spi4ka|A:ShowMap|W:ood1Kapella7|W:ood1Kapella8|W:ood1Kapella9|W:ood1Kapella10|W:ood1Kapella12|W:d3q03|W:d3q03KapellaBoyLocation|W:pt_d3q03_boy|W:quest_d3_03|W:ood3Kapella1|W:ood3Kapella2|A:FindMark|A:Remove|W:d3q03KapellaBoyLocationSelf|W:completed|W:ood3Kapella3|W:ood3Kapella4|W:ood3Kapella5|W:ood6Kapella1|W:d6q02KnowAboutAttack|W:KnowViktoria|W:ood8Kapella1|W:d8q02|W:feromicin is given|W:feromicin|W:ood8Kapella2|W:ood4Kapella1|W:KnowPredictions|W:d6q02KapellaGotoMladVlad|W:pt_map_mladvlad|W:d6KapellaVisit|W:ood6Kapella3|W:KnowTermitnik|W:d1q01FirstGeorgVisit|W:ood1Kapella5|W:d1q03|W:KnowAgo|W:ood1Kapella11|W:d3q01|W:d6q02|W:d6q01|W:d8TalkToMat|W:d8TermitnikLoad|W:KnowLara|W:KnowMishka|W:KnowMladVlad|W:d4q02|W:KnowNotkin|W:KnowSpi4ka|W:disease|A:GetProperty|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0x23b vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x526 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcb9 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf33 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x134b vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x147b vars=int,int
// @PE: 0x23,0x29,0x70,0xb4,0xc4,0x19d,0x22b,0x23b,0x3e4,0x516,0x526,0xc3e,0xca9,0xcb9,0xe70,0xf23,0xf33,0x12f3,0x133b,0x134b,0x1400,0x146b,0x147b,0x15f4,0x165f,0x1674,0x167a,0x1680,0x1686,0x168c,0x1692,0x1698,0x16b9,0x16bf,0x16ca,0x16d0,0x16d6,0x16f3,0x1703,0x1713,0x1719,0x171f,0x1725,0x172b,0x1754,0x175a,0x176a,0x178e,0x1794,0x179a,0x17a0,0x17a6,0x17ac,0x17b2,0x17b8,0x17c1,0x17cc,0x17d2,0x17d8,0x17ee,0x17f4,0x17fa,0x1800,0x180c,0x1818,0x1824,0x1830,0x183c,0x1848,0x1854,0x1860,0x186c,0x1878,0x1884,0x1890,0x189c,0x18a8,0x18b4,0x18c0,0x18cc,0x18d8,0x18e4,0x18f0,0x18fc,0x1908,0x1914,0x1920,0x192c,0x1938,0x1944,0x194e,0x1953,0x195f,0x196b,0x1977,0x1983,0x198f,0x199b,0x19a7,0x19b3,0x19bf,0x19cb,0x19d7,0x19e3,0x19ef,0x19fb,0x1a07,0x1a13,0x1a1f,0x1a2b,0x1a37,0x1a43,0x1a4f,0x1b33

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_object = Obj();
	var_35_bool = var_36_object;
	func_6963(var_36_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_bool = var_37_object;
	func_5547(var_36_bool, var_37_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5642();
		var_40_bool = var_35_string == (int)543;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5778();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5784();
			var_49_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)473);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)476, (int)547, (int)546);
			@@@var_0_object:AddReply((int)474, (int)545, (int)544);
			return 0;
		}
		var_72_bool = var_35_string == (int)545;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_6060();
			var_77_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)475);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)480, (int)547, (int)550);
			@@@var_0_object:AddReply((int)479, (int)-1, (int)549);
			return 0;
		}
		var_86_bool = var_35_string == (int)547;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_6104();
			var_91_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)481, (int)554, (int)552);
			@@@var_0_object:AddReply((int)8439, (int)9263, (int)9262);
			return 0;
		}
		var_100_bool = var_35_string == (int)9263;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8442, (int)-1, (int)9265);
			@@@var_0_object:AddReply((int)8441, (int)-1, (int)9264);
			return 0;
		}
		var_110_bool = var_35_string == (int)554;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)484, (int)-1, (int)555);
			@@@var_0_object:AddReply((int)485, (int)-1, (int)556);
			return 0;
		}
		var_3_string = true;
		var_119_bool = 0;
		func_5746(var_119_bool);
		if(var_119_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5642();
		var_40_bool = var_36_bool == (int)13328;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_6048();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_6110();
		}
		var_64_bool = var_36_bool == (int)13695;
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_6048();
		}
		var_68_bool = var_35_string == (int)3618;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_69_bool = 0;
			var_70_bool = 0; var_71_object = Obj();
			var_71_object = var_1_object;
			func_6531(var_71_object);
			if(var_70_bool != 0) {
				var_78_bool = 0; var_79_object = Obj();
				var_79_object = var_1_object;
				func_6687(var_79_object);
				if(var_78_bool != 0) {
					var_69_bool = 1;
				}
			}
			if(var_69_bool != 0) {
				var_84_object = Obj(); var_85_object = Obj();
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_6126();
				var_88_object = Obj(); var_89_object = Obj();
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_6132();
				var_92_string = "";
				func_555(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)3371);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)3375, (int)3621, (int)3619);
				@@@var_0_object:AddReply((int)3376, (int)3621, (int)3620);
				return 0;
			}
			var_114_bool = 0;
			var_114_bool = 0;
			var_115_bool = 0;
			var_115_bool = 0;
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_6519(var_117_object);
			if(var_116_bool != 0) {
				var_122_bool = 0; var_123_object = Obj();
				var_123_object = var_1_object;
				func_6495(var_123_object);
				var_128_bool = var_122_bool == 0; //@nz
				if(var_128_bool != 0) {
					var_115_bool = 1;
				}
			}
			if(var_115_bool != 0) {
				var_129_bool = 0; var_130_object = Obj();
				var_130_object = var_1_object;
				func_6507(var_130_object);
				var_135_bool = var_129_bool == 0; //@nz
				if(var_135_bool != 0) {
					var_114_bool = 1;
				}
			}
			if(var_114_bool != 0) {
				var_136_object = Obj(); var_137_object = Obj();
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_6126();
				var_138_string = "";
				func_555(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12095);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12096, (int)13323, (int)13322);
				return 0;
			}
			var_143_string = "";
			func_555(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12524, (int)-1, (int)13694);
			return 0;
		}
		var_149_bool = var_35_string == (int)13323;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_555(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12097);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12098, (int)13325, (int)13324);
			return 0;
		}
		var_156_bool = var_35_string == (int)13325;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_555(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12099);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12100, (int)13327, (int)13326);
			return 0;
		}
		var_163_bool = var_35_string == (int)13327;
		if(var_163_bool != 0) {
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_6054();
			var_168_string = "";
			func_555(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12101);
			@@@var_0_object:ClearReplies();
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_6483(var_171_object);
			if(var_170_bool != 0) {
				@@@var_0_object:AddReply((int)12102, (int)-1, (int)13328);
			}
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_6483(var_180_object);
			var_181_bool = var_179_bool == 0; //@nz
			if(var_181_bool != 0) {
				@@@var_0_object:AddReply((int)12525, (int)-1, (int)13695);
			}
			return 0;
		}
		var_186_bool = var_35_string == (int)3621;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_555(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3378, (int)3626, (int)3622);
			@@@var_0_object:AddReply((int)3379, (int)3626, (int)3624);
			@@@var_0_object:AddReply((int)3380, (int)3626, (int)3625);
			return 0;
		}
		var_199_bool = var_35_string == (int)3626;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_555(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3382, (int)3631, (int)3627);
			@@@var_0_object:AddReply((int)3383, (int)-1, (int)3630);
			@@@var_0_object:AddReply((int)3396, (int)-1, (int)3643);
			return 0;
		}
		var_212_bool = var_35_string == (int)3631;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_555(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3385, (int)3639, (int)3632);
			@@@var_0_object:AddReply((int)3386, (int)-1, (int)3633);
			@@@var_0_object:AddReply((int)3387, (int)-1, (int)3634);
			@@@var_0_object:AddReply((int)3388, (int)3636, (int)3635);
			return 0;
		}
		var_228_bool = var_35_string == (int)3636;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_555(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3390, (int)-1, (int)3637);
			@@@var_0_object:AddReply((int)3391, (int)-1, (int)3638);
			return 0;
		}
		var_238_bool = var_35_string == (int)3639;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_555(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3393, (int)-1, (int)3640);
			@@@var_0_object:AddReply((int)3394, (int)-1, (int)3641);
			@@@var_0_object:AddReply((int)3395, (int)-1, (int)3642);
			return 0;
		}
		var_3_string = true;
		var_250_bool = 0;
		func_5746(var_250_bool);
		if(var_250_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x23c";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5642();
		var_40_bool = var_36_bool == (int)6610;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5754();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5790();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_5875(var_99_object);
		}
		var_125_bool = var_36_bool == (int)6606;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5754();
		}
		var_129_bool = var_36_bool == (int)6611;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_5754();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_5790();
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_5875(var_135_object);
		}
		var_137_bool = var_36_bool == (int)6612;
		if(var_137_bool != 0) {
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_5754();
		}
		var_141_bool = var_36_bool == (int)6035;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_5760();
		}
		var_147_bool = var_36_bool == (int)6036;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_5760();
		}
		var_151_bool = var_36_bool == (int)6037;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_5760();
		}
		var_155_bool = var_36_bool == (int)6038;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_5760();
		}
		var_159_bool = var_36_bool == (int)6041;
		if(var_159_bool != 0) {
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_5760();
		}
		var_163_bool = var_36_bool == (int)6042;
		if(var_163_bool != 0) {
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_5760();
		}
		var_167_bool = var_36_bool == (int)6015;
		if(var_167_bool != 0) {
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_5766();
		}
		var_173_bool = var_36_bool == (int)6016;
		if(var_173_bool != 0) {
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_5766();
		}
		var_177_bool = var_36_bool == (int)6017;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_5766();
		}
		var_181_bool = var_36_bool == (int)6675;
		if(var_181_bool != 0) {
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_5772();
		}
		var_187_bool = var_36_bool == (int)6700;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_5772();
		}
		var_191_bool = var_36_bool == (int)6701;
		if(var_191_bool != 0) {
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_5772();
		}
		var_195_bool = var_36_bool == (int)6006;
		if(var_195_bool != 0) {
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_object;
			func_5790();
		}
		var_199_bool = var_36_bool == (int)9564;
		if(var_199_bool != 0) {
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_5790();
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_5875(var_203_object);
		}
		var_205_bool = var_36_bool == (int)6942;
		if(var_205_bool != 0) {
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_5817();
		}
		var_211_bool = var_36_bool == (int)6943;
		if(var_211_bool != 0) {
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_5817();
		}
		var_215_bool = var_36_bool == (int)8783;
		if(var_215_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_5907();
		}
		var_221_bool = var_36_bool == (int)8794;
		if(var_221_bool != 0) {
			var_222_object = Obj(); var_223_object = Obj();
			var_222_object = var_1_object;
			var_223_object = var_0_object;
			func_5913();
		}
		var_227_bool = var_36_bool == (int)8803;
		if(var_227_bool != 0) {
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_object;
			func_5919();
		}
		var_233_bool = var_36_bool == (int)8804;
		if(var_233_bool != 0) {
			var_234_object = Obj(); var_235_object = Obj();
			var_234_object = var_1_object;
			var_235_object = var_0_object;
			func_5919();
		}
		var_237_bool = var_36_bool == (int)8811;
		if(var_237_bool != 0) {
			var_238_object = Obj(); var_239_object = Obj();
			var_238_object = var_1_object;
			var_239_object = var_0_object;
			func_5925();
		}
		var_243_bool = var_36_bool == (int)8812;
		if(var_243_bool != 0) {
			var_244_object = Obj(); var_245_object = Obj();
			var_244_object = var_1_object;
			var_245_object = var_0_object;
			func_5925();
		}
		var_247_bool = var_36_bool == (int)8817;
		if(var_247_bool != 0) {
			var_248_object = Obj(); var_249_object = Obj();
			var_248_object = var_1_object;
			var_249_object = var_0_object;
			func_5925();
		}
		var_251_bool = var_36_bool == (int)9568;
		if(var_251_bool != 0) {
			var_252_object = Obj(); var_253_object = Obj();
			var_252_object = var_1_object;
			var_253_object = var_0_object;
			func_5931();
		}
		var_257_bool = var_35_string == (int)6003;
		if(var_257_bool != 0) {
			var_258_bool = 0;
			var_258_bool = 0;
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_6723(var_260_object);
			if(var_259_bool != 0) {
				var_267_bool = 0; var_268_object = Obj();
				var_268_object = var_1_object;
				func_6192(var_268_object);
				if(var_267_bool != 0) {
					var_258_bool = 1;
				}
			}
			if(var_258_bool != 0) {
				var_273_string = "";
				func_1302(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5449);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5453, (int)6575, (int)6007);
				@@@var_0_object:AddReply((int)5974, (int)6575, (int)6579);
				return 0;
			}
			var_295_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5484);
			@@@var_0_object:ClearReplies();
			var_297_bool = 0; var_298_object = Obj();
			var_298_object = var_1_object;
			func_6735(var_298_object);
			if(var_297_bool != 0) {
				@@@var_0_object:AddReply((int)8729, (int)6028, (int)9566);
			}
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_6144(var_308_object);
			if(var_307_bool != 0) {
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_6168(var_314_object);
				if(var_313_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)8728, (int)6008, (int)9565);
			}
			var_322_bool = 0;
			var_322_bool = 0;
			var_323_bool = 0;
			var_323_bool = 0;
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_object;
			func_6156(var_325_object);
			if(var_324_bool != 0) {
				var_330_bool = 0; var_331_object = Obj();
				var_331_object = var_1_object;
				func_6204(var_331_object);
				if(var_330_bool != 0) {
					var_323_bool = 1;
				}
			}
			if(var_323_bool != 0) {
				var_336_bool = 0; var_337_object = Obj();
				var_337_object = var_1_object;
				func_6216(var_337_object);
				if(var_336_bool != 0) {
					var_322_bool = 1;
				}
			}
			if(var_322_bool != 0) {
				@@@var_0_object:AddReply((int)5451, (int)6666, (int)6005);
			}
			var_345_bool = 0;
			var_345_bool = 0;
			var_346_bool = 0;
			var_346_bool = 0;
			var_347_bool = 0; var_348_object = Obj();
			var_348_object = var_1_object;
			func_6180(var_348_object);
			if(var_347_bool != 0) {
				var_353_bool = 0; var_354_object = Obj();
				var_354_object = var_1_object;
				func_6192(var_354_object);
				if(var_353_bool != 0) {
					var_346_bool = 1;
				}
			}
			if(var_346_bool != 0) {
				var_355_bool = 0; var_356_object = Obj();
				var_356_object = var_1_object;
				func_6723(var_356_object);
				var_357_bool = var_355_bool == 0; //@nz
				if(var_357_bool != 0) {
					var_345_bool = 1;
				}
			}
			if(var_345_bool != 0) {
				@@@var_0_object:AddReply((int)5452, (int)9563, (int)6006);
			}
			var_361_bool = 0;
			var_361_bool = 0;
			var_362_bool = 0; var_363_object = Obj();
			var_363_object = var_1_object;
			func_6228(var_363_object);
			if(var_362_bool != 0) {
				var_368_bool = 0; var_369_object = Obj();
				var_369_object = var_1_object;
				func_6240(var_369_object);
				if(var_368_bool != 0) {
					var_361_bool = 1;
				}
			}
			if(var_361_bool != 0) {
				@@@var_0_object:AddReply((int)6288, (int)6941, (int)6940);
			}
			var_377_bool = 0;
			var_377_bool = 0;
			var_378_bool = 0; var_379_object = Obj();
			var_379_object = var_1_object;
			func_6615(var_379_object);
			if(var_378_bool != 0) {
				var_384_bool = 0; var_385_object = Obj();
				var_385_object = var_1_object;
				func_6300(var_385_object);
				if(var_384_bool != 0) {
					var_377_bool = 1;
				}
			}
			if(var_377_bool != 0) {
				@@@var_0_object:AddReply((int)7933, (int)8773, (int)8753);
			}
			var_393_bool = 0;
			var_393_bool = 0;
			var_394_bool = 0; var_395_object = Obj();
			var_395_object = var_1_object;
			func_6603(var_395_object);
			if(var_394_bool != 0) {
				var_400_bool = 0; var_401_object = Obj();
				var_401_object = var_1_object;
				func_6312(var_401_object);
				if(var_400_bool != 0) {
					var_393_bool = 1;
				}
			}
			if(var_393_bool != 0) {
				@@@var_0_object:AddReply((int)7938, (int)8784, (int)8758);
			}
			var_409_bool = 0;
			var_409_bool = 0;
			var_410_bool = 0; var_411_object = Obj();
			var_411_object = var_1_object;
			func_6639(var_411_object);
			if(var_410_bool != 0) {
				var_416_bool = 0; var_417_object = Obj();
				var_417_object = var_1_object;
				func_6324(var_417_object);
				if(var_416_bool != 0) {
					var_409_bool = 1;
				}
			}
			if(var_409_bool != 0) {
				@@@var_0_object:AddReply((int)7943, (int)8775, (int)8763);
			}
			var_425_bool = 0;
			var_425_bool = 0;
			var_426_bool = 0; var_427_object = Obj();
			var_427_object = var_1_object;
			func_6627(var_427_object);
			if(var_426_bool != 0) {
				var_432_bool = 0; var_433_object = Obj();
				var_433_object = var_1_object;
				func_6336(var_433_object);
				if(var_432_bool != 0) {
					var_425_bool = 1;
				}
			}
			if(var_425_bool != 0) {
				@@@var_0_object:AddReply((int)7950, (int)8776, (int)8770);
			}
			var_441_bool = 0;
			var_441_bool = 0;
			var_442_bool = 0; var_443_object = Obj();
			var_443_object = var_1_object;
			func_6699(var_443_object);
			if(var_442_bool != 0) {
				var_448_bool = 0; var_449_object = Obj();
				var_449_object = var_1_object;
				func_6348(var_449_object);
				if(var_448_bool != 0) {
					var_441_bool = 1;
				}
			}
			if(var_441_bool != 0) {
				@@@var_0_object:AddReply((int)7951, (int)8777, (int)8771);
			}
			var_457_bool = 0;
			var_457_bool = 0;
			var_458_bool = 0; var_459_object = Obj();
			var_459_object = var_1_object;
			func_6675(var_459_object);
			if(var_458_bool != 0) {
				var_464_bool = 0; var_465_object = Obj();
				var_465_object = var_1_object;
				func_6360(var_465_object);
				if(var_464_bool != 0) {
					var_457_bool = 1;
				}
			}
			if(var_457_bool != 0) {
				@@@var_0_object:AddReply((int)7952, (int)8778, (int)8772);
			}
			@@@var_0_object:AddReply((int)6264, (int)-1, (int)6931);
			return 0;
		}
		var_477_bool = var_35_string == (int)8778;
		if(var_477_bool != 0) {
			var_478_object = Obj(); var_479_object = Obj();
			var_478_object = var_1_object;
			var_479_object = var_0_object;
			func_6138();
			var_482_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8000, (int)9567, (int)8823);
			return 0;
		}
		var_488_bool = var_35_string == (int)9567;
		if(var_488_bool != 0) {
			var_489_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8730);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8731, (int)-1, (int)9568);
			return 0;
		}
		var_495_bool = var_35_string == (int)8777;
		if(var_495_bool != 0) {
			var_496_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7957);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7995, (int)8819, (int)8818);
			return 0;
		}
		var_502_bool = var_35_string == (int)8819;
		if(var_502_bool != 0) {
			var_503_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7997, (int)9569, (int)8820);
			return 0;
		}
		var_509_bool = var_35_string == (int)9569;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8732);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8733, (int)9571, (int)9570);
			return 0;
		}
		var_516_bool = var_35_string == (int)9571;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8734);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8735, (int)-1, (int)9572);
			return 0;
		}
		var_523_bool = var_35_string == (int)8776;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7983, (int)8807, (int)8805);
			@@@var_0_object:AddReply((int)7984, (int)8807, (int)8806);
			return 0;
		}
		var_533_bool = var_35_string == (int)8807;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7986, (int)8810, (int)8809);
			@@@var_0_object:AddReply((int)7990, (int)8814, (int)8813);
			return 0;
		}
		var_543_bool = var_35_string == (int)8814;
		if(var_543_bool != 0) {
			var_544_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7992, (int)8816, (int)8815);
			return 0;
		}
		var_550_bool = var_35_string == (int)8816;
		if(var_550_bool != 0) {
			var_551_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7994, (int)-1, (int)8817);
			return 0;
		}
		var_557_bool = var_35_string == (int)8810;
		if(var_557_bool != 0) {
			var_558_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7987);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7988, (int)-1, (int)8811);
			@@@var_0_object:AddReply((int)7989, (int)-1, (int)8812);
			return 0;
		}
		var_567_bool = var_35_string == (int)8775;
		if(var_567_bool != 0) {
			var_568_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7977, (int)8800, (int)8799);
			return 0;
		}
		var_574_bool = var_35_string == (int)8800;
		if(var_574_bool != 0) {
			var_575_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7979, (int)8802, (int)8801);
			return 0;
		}
		var_581_bool = var_35_string == (int)8802;
		if(var_581_bool != 0) {
			var_582_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7981, (int)-1, (int)8803);
			@@@var_0_object:AddReply((int)7982, (int)-1, (int)8804);
			return 0;
		}
		var_591_bool = var_35_string == (int)8784;
		if(var_591_bool != 0) {
			var_592_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7965, (int)8786, (int)8785);
			return 0;
		}
		var_598_bool = var_35_string == (int)8786;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7967, (int)8774, (int)8787);
			@@@var_0_object:AddReply((int)7976, (int)8774, (int)8797);
			return 0;
		}
		var_608_bool = var_35_string == (int)8774;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7954);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7969, (int)8790, (int)8789);
			@@@var_0_object:AddReply((int)7975, (int)8790, (int)8795);
			return 0;
		}
		var_618_bool = var_35_string == (int)8790;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7971, (int)8792, (int)8791);
			return 0;
		}
		var_625_bool = var_35_string == (int)8792;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7974, (int)-1, (int)8794);
			return 0;
		}
		var_632_bool = var_35_string == (int)8773;
		if(var_632_bool != 0) {
			var_633_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7953);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7959, (int)8780, (int)8779);
			return 0;
		}
		var_639_bool = var_35_string == (int)8780;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7961, (int)8782, (int)8781);
			return 0;
		}
		var_646_bool = var_35_string == (int)8782;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7962);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7963, (int)-1, (int)8783);
			return 0;
		}
		var_653_bool = var_35_string == (int)6941;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6290, (int)-1, (int)6942);
			@@@var_0_object:AddReply((int)6291, (int)-1, (int)6943);
			return 0;
		}
		var_663_bool = var_35_string == (int)9563;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8727, (int)-1, (int)9564);
			return 0;
		}
		var_670_bool = var_35_string == (int)6666;
		if(var_670_bool != 0) {
			var_671_object = Obj(); var_672_object = Obj();
			var_671_object = var_1_object;
			var_672_object = var_0_object;
			func_5772();
			var_673_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6044, (int)6670, (int)6667);
			@@@var_0_object:AddReply((int)6045, (int)6669, (int)6668);
			return 0;
		}
		var_682_bool = var_35_string == (int)6669;
		if(var_682_bool != 0) {
			var_683_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6053, (int)6679, (int)6677);
			@@@var_0_object:AddReply((int)6054, (int)6681, (int)6678);
			return 0;
		}
		var_692_bool = var_35_string == (int)6679;
		if(var_692_bool != 0) {
			var_693_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6055);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6056, (int)6681, (int)6680);
			var_698_bool = 0; var_699_object = Obj();
			var_699_object = var_1_object;
			func_6711(var_699_object);
			var_704_bool = var_698_bool == 0; //@nz
			if(var_704_bool != 0) {
				@@@var_0_object:AddReply((int)6058, (int)6702, (int)6683);
			}
			return 0;
		}
		var_709_bool = var_35_string == (int)6702;
		if(var_709_bool != 0) {
			var_710_object = Obj(); var_711_object = Obj();
			var_710_object = var_1_object;
			var_711_object = var_0_object;
			func_5748();
			var_714_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6075, (int)6681, (int)6703);
			return 0;
		}
		var_720_bool = var_35_string == (int)6681;
		if(var_720_bool != 0) {
			var_721_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6057);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6059, (int)6686, (int)6684);
			@@@var_0_object:AddReply((int)6060, (int)6688, (int)6685);
			return 0;
		}
		var_730_bool = var_35_string == (int)6688;
		if(var_730_bool != 0) {
			var_731_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6064, (int)6686, (int)6689);
			return 0;
		}
		var_737_bool = var_35_string == (int)6686;
		if(var_737_bool != 0) {
			var_738_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6062, (int)6691, (int)6687);
			return 0;
		}
		var_744_bool = var_35_string == (int)6691;
		if(var_744_bool != 0) {
			var_745_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6066, (int)6696, (int)6692);
			@@@var_0_object:AddReply((int)6067, (int)6694, (int)6693);
			return 0;
		}
		var_754_bool = var_35_string == (int)6694;
		if(var_754_bool != 0) {
			var_755_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6069, (int)6696, (int)6695);
			@@@var_0_object:AddReply((int)6071, (int)6696, (int)6698);
			return 0;
		}
		var_764_bool = var_35_string == (int)6696;
		if(var_764_bool != 0) {
			var_765_object = Obj(); var_766_object = Obj();
			var_765_object = var_1_object;
			var_766_object = var_0_object;
			func_5823(var_766_object);
			var_784_object = Obj(); var_785_object = Obj();
			var_784_object = var_1_object;
			var_785_object = var_0_object;
			func_5834();
			var_788_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6072, (int)-1, (int)6700);
			@@@var_0_object:AddReply((int)6073, (int)-1, (int)6701);
			return 0;
		}
		var_797_bool = var_35_string == (int)6670;
		if(var_797_bool != 0) {
			var_798_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6048, (int)6673, (int)6671);
			@@@var_0_object:AddReply((int)6049, (int)6673, (int)6672);
			return 0;
		}
		var_807_bool = var_35_string == (int)6673;
		if(var_807_bool != 0) {
			var_808_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6050);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6051, (int)-1, (int)6675);
			return 0;
		}
		var_814_bool = var_35_string == (int)6008;
		if(var_814_bool != 0) {
			var_815_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5454);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5455, (int)6010, (int)6009);
			@@@var_0_object:AddReply((int)5467, (int)6010, (int)6024);
			return 0;
		}
		var_824_bool = var_35_string == (int)6010;
		if(var_824_bool != 0) {
			var_825_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5456);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5457, (int)6012, (int)6011);
			@@@var_0_object:AddReply((int)5466, (int)6012, (int)6022);
			return 0;
		}
		var_834_bool = var_35_string == (int)6012;
		if(var_834_bool != 0) {
			var_835_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5458);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5459, (int)6014, (int)6013);
			@@@var_0_object:AddReply((int)5465, (int)6014, (int)6020);
			@@@var_0_object:AddReply((int)5464, (int)6014, (int)6018);
			return 0;
		}
		var_847_bool = var_35_string == (int)6014;
		if(var_847_bool != 0) {
			var_848_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5460);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5461, (int)-1, (int)6015);
			@@@var_0_object:AddReply((int)5462, (int)-1, (int)6016);
			@@@var_0_object:AddReply((int)5463, (int)-1, (int)6017);
			return 0;
		}
		var_860_bool = var_35_string == (int)6028;
		if(var_860_bool != 0) {
			var_861_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5469);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5470, (int)6030, (int)6029);
			@@@var_0_object:AddReply((int)5480, (int)6040, (int)6039);
			return 0;
		}
		var_870_bool = var_35_string == (int)6040;
		if(var_870_bool != 0) {
			var_871_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5481);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5482, (int)-1, (int)6041);
			@@@var_0_object:AddReply((int)5483, (int)-1, (int)6042);
			return 0;
		}
		var_880_bool = var_35_string == (int)6030;
		if(var_880_bool != 0) {
			var_881_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5471);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5472, (int)6032, (int)6031);
			@@@var_0_object:AddReply((int)5479, (int)-1, (int)6038);
			return 0;
		}
		var_890_bool = var_35_string == (int)6032;
		if(var_890_bool != 0) {
			var_891_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5473);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5474, (int)6034, (int)6033);
			@@@var_0_object:AddReply((int)5478, (int)-1, (int)6037);
			return 0;
		}
		var_900_bool = var_35_string == (int)6034;
		if(var_900_bool != 0) {
			var_901_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5475);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5476, (int)-1, (int)6035);
			@@@var_0_object:AddReply((int)5477, (int)-1, (int)6036);
			return 0;
		}
		var_910_bool = var_35_string == (int)6575;
		if(var_910_bool != 0) {
			var_911_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5971, (int)6580, (int)6576);
			@@@var_0_object:AddReply((int)5973, (int)6580, (int)6578);
			return 0;
		}
		var_920_bool = var_35_string == (int)6580;
		if(var_920_bool != 0) {
			var_921_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5975);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5976, (int)6588, (int)6583);
			@@@var_0_object:AddReply((int)5977, (int)6585, (int)6584);
			return 0;
		}
		var_930_bool = var_35_string == (int)6585;
		if(var_930_bool != 0) {
			var_931_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5979, (int)-1, (int)6586);
			@@@var_0_object:AddReply((int)5980, (int)-1, (int)6587);
			return 0;
		}
		var_940_bool = var_35_string == (int)6588;
		if(var_940_bool != 0) {
			var_941_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5982, (int)6593, (int)6589);
			@@@var_0_object:AddReply((int)5983, (int)6591, (int)6590);
			return 0;
		}
		var_950_bool = var_35_string == (int)6591;
		if(var_950_bool != 0) {
			var_951_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5984);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5985, (int)6593, (int)6592);
			return 0;
		}
		var_957_bool = var_35_string == (int)6593;
		if(var_957_bool != 0) {
			var_958_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5986);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5987, (int)6595, (int)6594);
			@@@var_0_object:AddReply((int)5993, (int)6599, (int)6601);
			return 0;
		}
		var_967_bool = var_35_string == (int)6595;
		if(var_967_bool != 0) {
			var_968_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5989, (int)6597, (int)6596);
			@@@var_0_object:AddReply((int)5994, (int)6597, (int)6603);
			return 0;
		}
		var_977_bool = var_35_string == (int)6597;
		if(var_977_bool != 0) {
			var_978_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5990);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5991, (int)6599, (int)6598);
			return 0;
		}
		var_984_bool = var_35_string == (int)6599;
		if(var_984_bool != 0) {
			var_985_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5992);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5995, (int)6609, (int)6605);
			@@@var_0_object:AddReply((int)5997, (int)6608, (int)6607);
			return 0;
		}
		var_994_bool = var_35_string == (int)6608;
		if(var_994_bool != 0) {
			var_995_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6001, (int)-1, (int)6611);
			@@@var_0_object:AddReply((int)6002, (int)-1, (int)6612);
			return 0;
		}
		var_1004_bool = var_35_string == (int)6609;
		if(var_1004_bool != 0) {
			var_1005_string = "";
			func_1302(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6000, (int)-1, (int)6610);
			@@@var_0_object:AddReply((int)5996, (int)-1, (int)6606);
			return 0;
		}
		var_3_string = true;
		var_1013_bool = 0;
		func_5746(var_1013_bool);
		if(var_1013_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x527";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5642();
		var_40_bool = var_36_bool == (int)7322;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5840();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5852();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_5891(var_91_object);
		}
		var_117_bool = var_36_bool == (int)8137;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_5840();
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_5852();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_5891(var_123_object);
		}
		var_125_bool = var_36_bool == (int)7317;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5846();
		}
		var_131_bool = var_36_bool == (int)7313;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_5846();
		}
		var_135_bool = var_35_string == (int)7320;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6647);
			@@@var_0_object:ClearReplies();
			var_152_bool = 0;
			var_152_bool = 0;
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_6264(var_154_object);
			if(var_153_bool != 0) {
				var_161_bool = 0; var_162_object = Obj();
				var_162_object = var_1_object;
				func_6288(var_162_object);
				if(var_161_bool != 0) {
					var_152_bool = 1;
				}
			}
			if(var_152_bool != 0) {
				@@@var_0_object:AddReply((int)7373, (int)8135, (int)8134);
			}
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_6276(var_171_object);
			if(var_170_bool != 0) {
				@@@var_0_object:AddReply((int)6640, (int)7312, (int)7311);
			}
			@@@var_0_object:AddReply((int)7533, (int)-1, (int)8315);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xca9";
		EMIT "Pop(1)";
		EMIT "Push((int) 9438)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9439)";
		EMIT "Push((int) 10375)";
		EMIT "Push((int) 10374)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9449)";
		EMIT "Push((int) 10375)";
		EMIT "Push((int) 10385)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9450)";
		EMIT "Push((int) 10375)";
		EMIT "Push((int) 10387)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_183_bool = var_35_string == (int)10375;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9441, (int)10377, (int)10376);
			@@@var_0_object:AddReply((int)9448, (int)10377, (int)10383);
			return 0;
		}
		var_193_bool = var_35_string == (int)10377;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9443, (int)10379, (int)10378);
			@@@var_0_object:AddReply((int)9447, (int)-1, (int)10382);
			return 0;
		}
		var_203_bool = var_35_string == (int)10379;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9445, (int)-1, (int)10380);
			@@@var_0_object:AddReply((int)9446, (int)-1, (int)10381);
			return 0;
		}
		var_213_bool = var_35_string == (int)7312;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6643, (int)7316, (int)7315);
			@@@var_0_object:AddReply((int)6642, (int)-1, (int)7313);
			return 0;
		}
		var_223_bool = var_35_string == (int)7316;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6645, (int)-1, (int)7317);
			return 0;
		}
		var_230_bool = var_35_string == (int)8135;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7375, (int)7298, (int)8136);
			return 0;
		}
		var_237_bool = var_35_string == (int)7298;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6630, (int)7300, (int)7299);
			return 0;
		}
		var_244_bool = var_35_string == (int)7300;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6631);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6632, (int)7302, (int)7301);
			@@@var_0_object:AddReply((int)6636, (int)7306, (int)7305);
			return 0;
		}
		var_254_bool = var_35_string == (int)7306;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6637);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6638, (int)7302, (int)7307);
			return 0;
		}
		var_261_bool = var_35_string == (int)7302;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6633);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6634, (int)7297, (int)7303);
			@@@var_0_object:AddReply((int)6635, (int)7297, (int)7304);
			return 0;
		}
		var_271_bool = var_35_string == (int)7297;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_3241(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6628);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6648, (int)-1, (int)7322);
			@@@var_0_object:AddReply((int)7376, (int)-1, (int)8137);
			return 0;
		}
		var_3_string = true;
		var_280_bool = 0;
		func_5746(var_280_bool);
		if(var_280_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcba";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5642();
		var_40_bool = var_36_bool == (int)12015;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5972();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5937();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_5978(var_114_object);
		}
		var_140_bool = var_36_bool == (int)12018;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_5972();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_5937();
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_5978(var_146_object);
		}
		var_148_bool = var_36_bool == (int)12019;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_5972();
		}
		var_152_bool = var_36_bool == (int)12023;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_5937();
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_5978(var_156_object);
		}
		var_158_bool = var_36_bool == (int)12033;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_5994();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_6000();
		}
		var_187_bool = var_36_bool == (int)12029;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_5994();
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_object;
			func_6000();
		}
		var_193_bool = var_36_bool == (int)10893;
		if(var_193_bool != 0) {
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_6030();
		}
		var_199_bool = var_36_bool == (int)10894;
		if(var_199_bool != 0) {
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_6030();
		}
		var_203_bool = var_36_bool == (int)10895;
		if(var_203_bool != 0) {
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_6030();
		}
		var_207_bool = var_36_bool == (int)10888;
		if(var_207_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_6030();
		}
		var_211_bool = var_36_bool == (int)10904;
		if(var_211_bool != 0) {
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_6036();
		}
		var_217_bool = var_36_bool == (int)10914;
		if(var_217_bool != 0) {
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_6042();
		}
		var_223_bool = var_36_bool == (int)10915;
		if(var_223_bool != 0) {
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_6042();
		}
		var_227_bool = var_36_bool == (int)10916;
		if(var_227_bool != 0) {
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_object;
			func_6042();
		}
		var_231_bool = var_35_string == (int)11988;
		if(var_231_bool != 0) {
			var_232_bool = 0;
			var_232_bool = 0;
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_6372(var_234_object);
			if(var_233_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_6384(var_242_object);
				if(var_241_bool != 0) {
					var_232_bool = 1;
				}
			}
			if(var_232_bool != 0) {
				var_247_string = "";
				func_3875(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)10844);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10845, (int)11990, (int)11989);
				return 0;
			}
			var_266_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10841);
			@@@var_0_object:ClearReplies();
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_6372(var_269_object);
			if(var_268_bool != 0) {
				@@@var_0_object:AddReply((int)10873, (int)12022, (int)12021);
			}
			var_273_bool = 0;
			var_273_bool = 0;
			var_274_bool = 0;
			var_274_bool = 0;
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_object;
			func_6396(var_276_object);
			if(var_275_bool != 0) {
				var_281_bool = 0; var_282_object = Obj();
				var_282_object = var_1_object;
				func_6408(var_282_object);
				if(var_281_bool != 0) {
					var_274_bool = 1;
				}
			}
			if(var_274_bool != 0) {
				var_287_bool = 0; var_288_object = Obj();
				var_288_object = var_1_object;
				func_6468(var_287_bool, var_288_object);
				if(var_287_bool != 0) {
					var_273_bool = 1;
				}
			}
			if(var_273_bool != 0) {
				@@@var_0_object:AddReply((int)10876, (int)12025, (int)12024);
			}
			var_298_bool = 0;
			var_298_bool = 0;
			var_299_bool = 0;
			var_299_bool = 0;
			var_300_bool = 0; var_301_object = Obj();
			var_301_object = var_1_object;
			func_6396(var_301_object);
			if(var_300_bool != 0) {
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_6478(var_303_object);
				if(var_302_bool != 0) {
					var_299_bool = 1;
				}
			}
			if(var_299_bool != 0) {
				var_304_bool = 0; var_305_object = Obj();
				var_305_object = var_1_object;
				func_6468(var_304_bool, var_305_object);
				var_306_bool = var_304_bool == 0; //@nz
				if(var_306_bool != 0) {
					var_298_bool = 1;
				}
			}
			if(var_298_bool != 0) {
				@@@var_0_object:AddReply((int)11160, (int)12344, (int)12343);
			}
			var_310_bool = 0; var_311_object = Obj();
			var_311_object = var_1_object;
			func_6420(var_311_object);
			if(var_310_bool != 0) {
				@@@var_0_object:AddReply((int)10842, (int)10885, (int)11986);
			}
			var_319_bool = 0; var_320_object = Obj();
			var_320_object = var_1_object;
			func_6432(var_320_object);
			if(var_319_bool != 0) {
				@@@var_0_object:AddReply((int)9894, (int)10899, (int)10898);
			}
			var_328_bool = 0; var_329_object = Obj();
			var_329_object = var_1_object;
			func_6444(var_329_object);
			if(var_328_bool != 0) {
				@@@var_0_object:AddReply((int)10843, (int)10909, (int)11987);
			}
			@@@var_0_object:AddReply((int)11157, (int)-1, (int)12342);
			return 0;
		}
		var_341_bool = var_35_string == (int)10909;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9905, (int)10911, (int)10910);
			@@@var_0_object:AddReply((int)9912, (int)10911, (int)10917);
			@@@var_0_object:AddReply((int)9913, (int)10911, (int)10919);
			return 0;
		}
		var_354_bool = var_35_string == (int)10911;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9907, (int)10913, (int)10912);
			@@@var_0_object:AddReply((int)9911, (int)-1, (int)10916);
			return 0;
		}
		var_364_bool = var_35_string == (int)10913;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9909, (int)-1, (int)10914);
			@@@var_0_object:AddReply((int)9910, (int)-1, (int)10915);
			return 0;
		}
		var_374_bool = var_35_string == (int)10899;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9896, (int)10901, (int)10900);
			@@@var_0_object:AddReply((int)9901, (int)10906, (int)10905);
			return 0;
		}
		var_384_bool = var_35_string == (int)10906;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9903, (int)10901, (int)10907);
			return 0;
		}
		var_391_bool = var_35_string == (int)10901;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9898, (int)10903, (int)10902);
			return 0;
		}
		var_398_bool = var_35_string == (int)10903;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9900, (int)-1, (int)10904);
			return 0;
		}
		var_405_bool = var_35_string == (int)10885;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9883, (int)10887, (int)10886);
			@@@var_0_object:AddReply((int)9893, (int)10887, (int)10896);
			return 0;
		}
		var_415_bool = var_35_string == (int)10887;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9886, (int)10890, (int)10889);
			@@@var_0_object:AddReply((int)9885, (int)-1, (int)10888);
			return 0;
		}
		var_425_bool = var_35_string == (int)10890;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9888, (int)10892, (int)10891);
			@@@var_0_object:AddReply((int)9892, (int)-1, (int)10895);
			return 0;
		}
		var_435_bool = var_35_string == (int)10892;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9890, (int)-1, (int)10893);
			@@@var_0_object:AddReply((int)9891, (int)-1, (int)10894);
			return 0;
		}
		var_445_bool = var_35_string == (int)12344;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11161);
			@@@var_0_object:ClearReplies();
			var_448_bool = 0; var_449_object = Obj();
			var_449_object = var_1_object;
			func_6456(var_449_object);
			if(var_448_bool != 0) {
				@@@var_0_object:AddReply((int)11162, (int)-1, (int)12345);
			}
			return 0;
		}
		var_458_bool = var_35_string == (int)12025;
		if(var_458_bool != 0) {
			var_459_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10878, (int)12030, (int)12026);
			@@@var_0_object:AddReply((int)10879, (int)12028, (int)12027);
			return 0;
		}
		var_468_bool = var_35_string == (int)12028;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10881, (int)-1, (int)12029);
			return 0;
		}
		var_475_bool = var_35_string == (int)12030;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10883, (int)12032, (int)12031);
			return 0;
		}
		var_482_bool = var_35_string == (int)12032;
		if(var_482_bool != 0) {
			var_483_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10885, (int)-1, (int)12033);
			return 0;
		}
		var_489_bool = var_35_string == (int)12022;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10875, (int)-1, (int)12023);
			return 0;
		}
		var_496_bool = var_35_string == (int)11990;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10846);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10847, (int)11994, (int)11991);
			@@@var_0_object:AddReply((int)10849, (int)11994, (int)11993);
			@@@var_0_object:AddReply((int)10848, (int)11994, (int)11992);
			return 0;
		}
		var_509_bool = var_35_string == (int)11994;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10852, (int)12003, (int)11997);
			var_515_bool = 0; var_516_object = Obj();
			var_516_object = var_1_object;
			func_6252(var_516_object);
			var_521_bool = var_515_bool == 0; //@nz
			if(var_521_bool != 0) {
				@@@var_0_object:AddReply((int)10851, (int)12001, (int)11995);
			}
			var_525_bool = 0; var_526_object = Obj();
			var_526_object = var_1_object;
			func_6252(var_526_object);
			if(var_525_bool != 0) {
				@@@var_0_object:AddReply((int)10853, (int)11999, (int)11998);
			}
			return 0;
		}
		var_531_bool = var_35_string == (int)11999;
		if(var_531_bool != 0) {
			var_532_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10854);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10855, (int)12003, (int)12000);
			return 0;
		}
		var_538_bool = var_35_string == (int)12001;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10856);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10857, (int)12003, (int)12002);
			return 0;
		}
		var_545_bool = var_35_string == (int)12003;
		if(var_545_bool != 0) {
			var_546_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10859, (int)12007, (int)12006);
			return 0;
		}
		var_552_bool = var_35_string == (int)12007;
		if(var_552_bool != 0) {
			var_553_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10861, (int)12010, (int)12008);
			@@@var_0_object:AddReply((int)10862, (int)12014, (int)12009);
			return 0;
		}
		var_562_bool = var_35_string == (int)12010;
		if(var_562_bool != 0) {
			var_563_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10864, (int)12012, (int)12011);
			return 0;
		}
		var_569_bool = var_35_string == (int)12012;
		if(var_569_bool != 0) {
			var_570_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10866, (int)12014, (int)12013);
			return 0;
		}
		var_576_bool = var_35_string == (int)12014;
		if(var_576_bool != 0) {
			var_577_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10868, (int)-1, (int)12015);
			@@@var_0_object:AddReply((int)10869, (int)12017, (int)12016);
			return 0;
		}
		var_586_bool = var_35_string == (int)12017;
		if(var_586_bool != 0) {
			var_587_string = "";
			func_3875(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10871, (int)-1, (int)12018);
			@@@var_0_object:AddReply((int)10872, (int)-1, (int)12019);
			return 0;
		}
		var_3_string = true;
		var_595_bool = 0;
		func_5746(var_595_bool);
		if(var_595_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf34";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5642();
		var_40_bool = var_36_bool == (int)12437;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_6098();
		}
		var_46_bool = var_35_string == (int)12435;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_4923(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11245);
			@@@var_0_object:ClearReplies();
			var_63_bool = 0;
			var_63_bool = 0;
			var_64_bool = 0; var_65_object = Obj();
			var_65_object = var_1_object;
			func_6651(var_65_object);
			if(var_64_bool != 0) {
				var_72_bool = 0; var_73_object = Obj();
				var_73_object = var_1_object;
				func_6663(var_73_object);
				if(var_72_bool != 0) {
					var_63_bool = 1;
				}
			}
			if(var_63_bool != 0) {
				@@@var_0_object:AddReply((int)11247, (int)12438, (int)12437);
			}
			@@@var_0_object:AddReply((int)11246, (int)-1, (int)12436);
			return 0;
		}
		var_85_bool = var_35_string == (int)12438;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_4923(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11248);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11249, (int)12440, (int)12439);
			return 0;
		}
		var_92_bool = var_35_string == (int)12440;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_4923(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11251, (int)12442, (int)12441);
			return 0;
		}
		var_99_bool = var_35_string == (int)12442;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_4923(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11253, (int)-1, (int)12443);
			return 0;
		}
		var_3_string = true;
		var_105_bool = 0;
		func_5746(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x134c";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	if((int)1 != 0) {
		func_5642();
		var_40_bool = var_36_int == (int)14724;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_6072();
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_6081(var_71_object);
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_5834();
		}
		var_94_bool = var_36_int == (int)14700;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_6092();
		}
		var_100_bool = var_35_int == (int)14701;
		if(var_100_bool != 0) {
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_6555(var_102_object);
			if(var_101_bool != 0) {
				var_109_object = Obj(); var_110_object = Obj();
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_6066();
				var_113_string = "";
				func_5227(var_36_int, "Neutral");
				@@@var_0_object:SetMessage((int)13464);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13465, (int)14704, (int)14702);
				var_132_bool = 0; var_133_object = Obj();
				var_133_object = var_1_object;
				func_6591(var_133_object);
				if(var_132_bool != 0) {
					@@@var_0_object:AddReply((int)13466, (int)14705, (int)14703);
				}
				return 0;
			}
			var_141_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13462);
			@@@var_0_object:ClearReplies();
			var_143_bool = 0;
			var_143_bool = 0;
			var_144_bool = 0; var_145_object = Obj();
			var_145_object = var_1_object;
			func_6567(var_145_object);
			if(var_144_bool != 0) {
				var_150_bool = 0; var_151_object = Obj();
				var_151_object = var_1_object;
				func_6579(var_151_object);
				if(var_150_bool != 0) {
					var_143_bool = 1;
				}
			}
			if(var_143_bool != 0) {
				@@@var_0_object:AddReply((int)13463, (int)14713, (int)14700);
			}
			@@@var_0_object:AddReply((int)13483, (int)-1, (int)14721);
			return 0;
		}
		var_163_bool = var_35_int == (int)14713;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13477, (int)14715, (int)14714);
			return 0;
		}
		var_170_bool = var_35_int == (int)14715;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13480, (int)14718, (int)14717);
			@@@var_0_object:AddReply((int)13479, (int)-1, (int)14716);
			return 0;
		}
		var_180_bool = var_35_int == (int)14718;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13481);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13482, (int)-1, (int)14719);
			return 0;
		}
		var_187_bool = var_35_int == (int)14705;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13468);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13469, (int)14704, (int)14706);
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_6543(var_194_object);
			if(var_193_bool != 0) {
				@@@var_0_object:AddReply((int)13470, (int)14708, (int)14707);
			}
			return 0;
		}
		var_203_bool = var_35_int == (int)14708;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13471);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13472, (int)14711, (int)14709);
			@@@var_0_object:AddReply((int)13473, (int)14727, (int)14710);
			return 0;
		}
		var_213_bool = var_35_int == (int)14727;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13488);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13489, (int)14711, (int)14728);
			return 0;
		}
		var_220_bool = var_35_int == (int)14711;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13490, (int)-1, (int)14730);
			return 0;
		}
		var_227_bool = var_35_int == (int)14704;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13467);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13475, (int)14723, (int)14712);
			@@@var_0_object:AddReply((int)13484, (int)-1, (int)14722);
			return 0;
		}
		var_237_bool = var_35_int == (int)14723;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_5227(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13485);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13486, (int)-1, (int)14724);
			return 0;
		}
		var_3_string = true;
		var_243_bool = 0;
		func_5746(var_243_bool);
		if(var_243_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x147c";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_6959();
	var_36_bool = 0;
	func_5559(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_40_string = "";
	func_5624("Neutral");
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


func_6144(var_307_bool)
{
	var_309_int = 0; var_310_string = "";
	func_5659(var_309_int, "ood1Kapella3");
	var_312_bool = var_309_int == (int)0;
	if(var_312_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_5120(var_0_object, var_1_object, var_2_object, var_3_object, var_791_object, var_792_object)
{
	var_0_object = var_792_object;
	var_1_object = var_791_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_798_bool = 0; var_799_object = Obj();
		var_799_object = var_1_object;
		func_6555(var_799_object);
		if(var_798_bool != 0) {
			var_804_object = Obj(); var_805_object = Obj();
			var_804_object = var_1_object;
			var_805_object = var_0_object;
			func_6066();
			var_808_string = "";
			func_5227(var_792_object, "Neutral");
			@@@var_0_object:SetMessage((int)13464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13465, (int)14704, (int)14702);
			var_817_bool = 0; var_818_object = Obj();
			var_818_object = var_1_object;
			func_6591(var_818_object);
			if(var_817_bool != 0) {
				@@@var_0_object:AddReply((int)13466, (int)14705, (int)14703);
			}
		} else {
				var_834_string = "";
				func_5227(var_792_object, "Neutral");
				@@@var_0_object:SetMessage((int)13462);
				@@@var_0_object:ClearReplies();
				var_836_bool = 0;
				var_836_bool = 0;
				var_837_bool = 0; var_838_object = Obj();
				var_838_object = var_1_object;
				func_6567(var_838_object);
				if(var_837_bool != 0) {
					var_843_bool = 0; var_844_object = Obj();
					var_844_object = var_1_object;
					func_6579(var_844_object);
					if(var_843_bool != 0) {
						var_836_bool = 1;
					}
				}
				if(var_836_bool != 0) {
					@@@var_0_object:AddReply((int)13463, (int)14713, (int)14700);
				}
				@@@var_0_object:AddReply((int)13483, (int)-1, (int)14721);
				goto Label_5197;
		}
	}
Label_5197:
	var_826_bool = 0;
	func_5746(var_826_bool);
	if(var_826_bool != 0) {

	Label_5201:
		lshWaitForAnimEnd();
		var_827_object = var_3_object;
		if(var_827_object != 0) {
		} else {
			var_828_string = "";
			var_828_string = var_2_object;
			func_5624(var_828_string);
			goto Label_5201;
	}
		PlayAnimation("all", "idle");

	Label_5216:
		WaitForAnimEnd();
		var_831_object = var_3_object;
		if(var_831_object != 0) {
			goto Label_5226;
		}
		PlayAnimation("all", "idle");
		goto Label_5216;

	}
	goto Label_5226;
	
Label_5226:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1404";


func_6663(var_72_bool)
{
	var_74_int = 0; var_75_string = "";
	func_5659(var_74_int, "d4q02");
	var_77_bool = var_74_int == (int)0;
	if(var_77_bool != 0) {
		var_72_bool = 1;
		return 0;
	}
	var_72_bool = 0;
	return 0;
}


func_5642()
{
	var_38_bool = 0;
	func_5746(var_38_bool);
	if(var_38_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_6156(var_324_bool)
{
	var_326_int = 0; var_327_string = "";
	func_5659(var_326_int, "ood1Kapella4");
	var_329_bool = var_326_int == (int)0;
	if(var_329_bool != 0) {
		var_324_bool = 1;
		return 0;
	}
	var_324_bool = 0;
	return 0;
}


func_5649(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0;
	var_80_int = var_76_cvector | var_76_cvector;
	var_79_float = sqrt(var_80_int);
	var_81_float = 9.999999974752427e-07;
	var_82_bool = var_79_float < var_81_float;
	if(var_82_bool != 0) {
		var_75_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_75_cvector = var_76_cvector / var_79_float;
	return 2;
}


func_6675(var_458_bool)
{
	var_460_int = 0; var_461_string = "";
	func_5659(var_460_int, "KnowNotkin");
	var_463_bool = var_460_int == (int)1;
	if(var_463_bool != 0) {
		var_458_bool = 1;
		return 0;
	}
	var_458_bool = 0;
	return 0;
}


func_6168(var_313_bool)
{
	var_315_int = 0; var_316_string = "";
	func_5659(var_315_int, "d1q01FirstGeorgVisit");
	var_318_bool = var_315_int == (int)1;
	if(var_318_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_5659(var_103_int, var_104_string)
{
	var_105_int = 0; var_106_int = 0;
	GetVariable(var_104_string, var_106_int);
	var_106_int = var_103_int;
	return 2;
}


func_6687(var_78_bool)
{
	var_80_int = 0; var_81_string = "";
	func_5659(var_80_int, "ood6Kapella3");
	var_83_bool = var_80_int == (int)0;
	if(var_83_bool != 0) {
		var_78_bool = 1;
		return 0;
	}
	var_78_bool = 0;
	return 0;
}


func_5664(var_99_object, var_100_string)
{
	var_101_object = Obj(); var_102_object = Obj(); var_103_object = Obj(); var_104_object = Obj();
	GetMainOutdoorScene(var_103_object);
	var_106_int = var_100_string + ".bin";
	AddBlankActor(var_104_object, var_103_object, var_100_string, var_106_int);
	var_104_object = var_99_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6180(var_347_bool)
{
	var_349_int = 0; var_350_string = "";
	func_5659(var_349_int, "ood1Kapella5");
	var_352_bool = var_349_int == (int)0;
	if(var_352_bool != 0) {
		var_347_bool = 1;
		return 0;
	}
	var_347_bool = 0;
	return 0;
}


func_555(var_2_object, var_92_string)
{
	var_93_bool = 0;
	func_5746(var_93_bool);
	var_94_bool = var_93_bool == 0; //@nz
	if(var_94_bool != 0) {
		return 0;
	}
	var_95_bool = var_92_string == var_2_object;
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_string = "";
	var_92_string = var_96_string;
	func_5624(var_96_string);
	var_2_object = var_92_string;
	return 0;
}


func_6699(var_442_bool)
{
	var_444_int = 0; var_445_string = "";
	func_5659(var_444_int, "KnowSpi4ka");
	var_447_bool = var_444_int == (int)1;
	if(var_447_bool != 0) {
		var_442_bool = 1;
		return 0;
	}
	var_442_bool = 0;
	return 0;
}


func_5675(var_78_object, var_79_object, var_80_int)
{
	var_81_int = 0; var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_int = 0; var_86_bool = 0;
	@@var_79_object:GetItemID(var_84_int);
	GetInvItemProperty(var_85_int, var_84_int, "Category");
	@@var_78_object:AddItem(var_86_bool, var_79_object, var_85_int, var_80_int);
	var_88_bool = var_86_bool == 0; //@nz
	if(var_88_bool != 0) {
		@@var_78_object:DropItems(var_79_object, var_80_int);
	}
	return 6;
}


func_6192(var_267_bool)
{
	var_269_int = 0; var_270_string = "";
	func_5659(var_269_int, "d1q03");
	var_272_bool = var_269_int == (int)0;
	if(var_272_bool != 0) {
		var_267_bool = 1;
		return 0;
	}
	var_267_bool = 0;
	return 0;
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_0_object = var_40_object;
	var_50_bool = 0; var_51_object = Obj();
	var_40_object = var_51_object;
	func_5564(var_50_bool, var_51_object);
	var_90_bool = var_50_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	CreateDialog(var_46_object);
	var_91_int = 0;
	func_5742(var_91_int);
	@@var_46_object:SetNPCName(var_91_int);
	var_92_string = "";
	func_5744(var_92_string);
	@@var_46_object:SetPhoto(var_92_string);
	var_93_int = 0;
	func_6846(var_93_int);
	@@var_46_object:SetPlayerName(var_93_int);
	IsOverrideActive(var_47_bool);
	var_101_bool = var_47_bool;
	if(var_101_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	DoDialog(var_46_object);
	var_102_object = Obj(); var_103_object = Obj();
	var_40_object = var_102_object;
	var_46_object = var_103_object;
	TaskCall(3);
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	@@var_46_object:IsDialogEnd(var_49_bool);
	
Label_94:
	var_147_bool = var_49_bool == 0; //@nz
	if(var_147_bool != 0) {
		sync();
		@@var_46_object:IsDialogEnd(var_49_bool);
		goto Label_94;
	}
	var_40_object = Obj();
	func_5620();
	StopDialog(var_46_object);
	@@var_46_object:GetReturnValue((int)-1);
	var_48_int = var_39_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3633(var_0_object, var_474_int, var_475_object)
{
	var_477_object = Obj(); var_478_bool = 0; var_479_int = 0; var_480_bool = 0; var_481_object = Obj(); var_482_bool = 0; var_483_int = 0; var_484_bool = 0;
	var_0_object = var_475_object;
	var_485_bool = 0; var_486_object = Obj();
	var_475_object = var_486_object;
	func_5564(var_485_bool, var_486_object);
	var_487_bool = var_485_bool == 0; //@nz
	if(var_487_bool != 0) {
		var_474_int = -2;
		return 8;
	}
	CreateDialog(var_481_object);
	var_488_int = 0;
	func_5742(var_488_int);
	@@var_481_object:SetNPCName(var_488_int);
	var_489_string = "";
	func_5744(var_489_string);
	@@var_481_object:SetPhoto(var_489_string);
	var_490_int = 0;
	func_6846(var_490_int);
	@@var_481_object:SetPlayerName(var_490_int);
	IsOverrideActive(var_482_bool);
	var_491_bool = var_482_bool;
	if(var_491_bool != 0) {
		var_474_int = -2;
		return 8;
	}
	DoDialog(var_481_object);
	var_492_object = Obj(); var_493_object = Obj();
	var_475_object = var_492_object;
	var_481_object = var_493_object;
	TaskCall(11);
	func_3696(var_494_object, var_495_object, var_496_string, var_497_bool, var_492_object, var_493_object);
	TaskReturn();
	@@var_481_object:IsDialogEnd(var_484_bool);
	
Label_3678:
	var_603_bool = var_484_bool == 0; //@nz
	if(var_603_bool != 0) {
		sync();
		@@var_481_object:IsDialogEnd(var_484_bool);
		goto Label_3678;
	}
	var_475_object = Obj();
	func_5620();
	StopDialog(var_481_object);
	@@var_481_object:GetReturnValue((int)-1);
	var_483_int = var_474_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6711(var_698_bool)
{
	var_700_int = 0; var_701_string = "";
	func_5659(var_700_int, "KnowUklad");
	var_703_bool = var_700_int == (int)1;
	if(var_703_bool != 0) {
		var_698_bool = 1;
		return 0;
	}
	var_698_bool = 0;
	return 0;
}


func_5688(var_73_object, var_74_string, var_75_int)
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateInvItem(var_77_object);
	@@var_77_object:SetItemName(var_74_string);
	var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0;
	var_73_object = var_78_object;
	var_77_object = var_79_object;
	var_75_int = var_80_int;
	func_5675(var_78_object, var_79_object, var_80_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6204(var_330_bool)
{
	var_332_int = 0; var_333_string = "";
	func_5659(var_332_int, "d1q03");
	var_335_bool = var_332_int == (int)1000;
	if(var_335_bool != 0) {
		var_330_bool = 1;
		return 0;
	}
	var_330_bool = 0;
	return 0;
}


func_3134(var_0_object, var_1_object, var_2_object, var_3_object, var_421_object, var_422_object)
{
	var_0_object = var_422_object;
	var_1_object = var_421_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_428_string = "";
		func_3241(var_422_object, "Neutral");
		@@@var_0_object:SetMessage((int)6647);
		@@@var_0_object:ClearReplies();
		var_434_bool = 0;
		var_434_bool = 0;
		var_435_bool = 0; var_436_object = Obj();
		var_436_object = var_1_object;
		func_6264(var_436_object);
		if(var_435_bool != 0) {
			var_441_bool = 0; var_442_object = Obj();
			var_442_object = var_1_object;
			func_6288(var_442_object);
			if(var_441_bool != 0) {
				var_434_bool = 1;
			}
		}
		if(var_434_bool != 0) {
			@@@var_0_object:AddReply((int)7373, (int)8135, (int)8134);
		}
		var_450_bool = 0; var_451_object = Obj();
		var_451_object = var_1_object;
		func_6276(var_451_object);
		if(var_450_bool != 0) {
			@@@var_0_object:AddReply((int)6640, (int)7312, (int)7311);
		}
		@@@var_0_object:AddReply((int)7533, (int)-1, (int)8315);
		goto Label_3211;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xca9";
	EMIT "Pop(1)";
	EMIT "Push((int) 9438)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9439)";
	EMIT "Push((int) 10375)";
	EMIT "Push((int) 10374)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9449)";
	EMIT "Push((int) 10375)";
	EMIT "Push((int) 10385)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9450)";
	EMIT "Push((int) 10375)";
	EMIT "Push((int) 10387)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xc8b";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc42";
	}
Label_3211:
	var_462_bool = 0;
	func_5746(var_462_bool);
	if(var_462_bool != 0) {

	Label_3215:
		lshWaitForAnimEnd();
		var_463_object = var_3_object;
		if(var_463_object != 0) {
		} else {
			var_464_string = "";
			var_464_string = var_2_object;
			func_5624(var_464_string);
			goto Label_3215;
	}
		PlayAnimation("all", "idle");

	Label_3230:
		WaitForAnimEnd();
		var_467_object = var_3_object;
		if(var_467_object != 0) {
			goto Label_3240;
		}
		PlayAnimation("all", "idle");
		goto Label_3230;
	}
	goto Label_3240;
	
Label_3240:
	return 0;
	
}


func_6723(var_259_bool)
{
	var_261_int = 0; var_262_string = "";
	func_5659(var_261_int, "ood1Kapella1");
	var_266_bool = var_261_int == (int)0;
	if(var_266_bool != 0) {
		var_259_bool = 1;
		return 0;
	}
	var_259_bool = 0;
	return 0;
}


func_5701(var_107_bool, var_108_string, var_109_string)
{
	var_110_object = Obj(); var_111_object = Obj();
	FindActor(var_111_object, var_108_string);
	var_112_bool = var_111_object == 0; //@ne
	if(var_112_bool != 0) {
		var_107_bool = 0;
		return 2;
	}
	Trigger(var_111_object, var_109_string);
	var_107_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6216(var_336_bool)
{
	var_338_int = 0; var_339_string = "";
	func_5659(var_338_int, "d1q03IsKapella");
	var_341_bool = var_338_int == (int)1;
	if(var_341_bool != 0) {
		var_336_bool = 1;
		return 0;
	}
	var_336_bool = 0;
	return 0;
}


func_6735(var_297_bool)
{
	var_299_int = 0; var_300_string = "";
	func_5659(var_299_int, "ood1Kapella2");
	var_302_bool = var_299_int == (int)0;
	if(var_302_bool != 0) {
		var_297_bool = 1;
		return 0;
	}
	var_297_bool = 0;
	return 0;
}


func_5713(var_62_float)
{
	var_63_float = 0; var_64_float = 0;
	GetGameTime(var_64_float);
	var_64_float = var_62_float;
	return 2;
}


func_6228(var_362_bool)
{
	var_364_int = 0; var_365_string = "";
	func_5659(var_364_int, "ood1Kapella6");
	var_367_bool = var_364_int == (int)0;
	if(var_367_bool != 0) {
		var_362_bool = 1;
		return 0;
	}
	var_362_bool = 0;
	return 0;
}


func_5718(var_152_int)
{
	var_153_float = 0; var_154_float = 0;
	GetGameTime(var_154_float);
	var_156_int = 0;
	var_156_int = var_154_float / (int)24;
	var_152_int = (int)1 + var_156_int;
	return 2;
}


func_6747(var_289_bool, var_290_object)
{
	var_291_float = 0; var_292_float = 0;
	@@var_290_object:GetProperty("disease", var_292_float);
	var_289_bool = var_292_float == (int)0;
	return 2;
}


func_5727(var_150_bool, var_151_int)
{
	var_152_int = 0;
	func_5718(var_152_int);
	var_150_bool = var_152_int == var_151_int;
	return 0;
}


func_6240(var_368_bool)
{
	var_370_int = 0; var_371_string = "";
	func_5659(var_370_int, "d1q03");
	var_373_bool = var_370_int == (int)-1;
	if(var_373_bool != 0) {
		var_368_bool = 1;
		return 0;
	}
	var_368_bool = 0;
	return 0;
}


func_6754(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj();
	GetDiaryRoot(var_62_object);
	var_63_bool = var_62_object == 0; //@nz
	if(var_63_bool != 0) {
		Trace("Can't retrieve diary root");
		var_60_object = 0;
		return 2;
	}
	var_62_object = var_60_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5733(var_857_bool)
{
	var_858_bool = 0; var_859_bool = 0;
	var_860_string = "";
	func_5624("No");
	lshWaitForAnimEnd(var_859_bool);
	var_859_bool = var_857_bool;
	return 2;
}


func_5227(var_2_object, var_113_string)
{
	var_114_bool = 0;
	func_5746(var_114_bool);
	var_115_bool = var_114_bool == 0; //@nz
	if(var_115_bool != 0) {
		return 0;
	}
	var_116_bool = var_113_string == var_2_object;
	if(var_116_bool != 0) {
		return 0;
	}
	var_117_string = "";
	var_113_string = var_117_string;
	func_5624(var_117_string);
	var_2_object = var_113_string;
	return 0;
}


func_6252(var_515_bool)
{
	var_517_int = 0; var_518_string = "";
	func_5659(var_517_int, "KnowAgo");
	var_520_bool = var_517_int == (int)1;
	if(var_520_bool != 0) {
		var_515_bool = 1;
		return 0;
	}
	var_515_bool = 0;
	return 0;
}


func_5742(var_91_int)
{
	var_91_int = 2863;
	return 0;
}


func_6767(var_51_bool, var_52_object, var_53_int)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0;
	func_6754(Obj());
	var_60_object = var_57_object;
	@@var_57_object:Find(var_53_int, var_58_object);
	var_65_bool = var_58_object == 0; //@nz
	if(var_65_bool != 0) {
		var_67_int = "Can't find diary parent with id: " + var_53_int;
		Trace(var_67_int);
		var_51_bool = 0;
		return 6;
	}
	@@var_58_object:AddChild(var_52_object);
	SetVariable("player_diary", (int)1);
	@@var_52_object:GetCategory(var_59_int);
	SetDiarySection(var_59_int);
	var_51_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5744(var_92_string)
{
	var_92_string = "ui/NPC_Kapella.png";
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object;
	var_1_object = var_102_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_109_object = Obj(); var_110_object = Obj();
		var_109_object = var_1_object;
		var_110_object = var_0_object;
		func_5778();
		var_113_object = Obj(); var_114_object = Obj();
		var_113_object = var_1_object;
		var_114_object = var_0_object;
		func_5784();
		var_117_string = "";
		func_180(var_103_object, "Neutral");
		@@@var_0_object:SetMessage((int)473);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)476, (int)547, (int)546);
		@@@var_0_object:AddReply((int)474, (int)545, (int)544);
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	var_139_bool = 0;
	func_5746(var_139_bool);
	if(var_139_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_140_object = var_3_object;
		if(var_140_object != 0) {
		} else {
			var_141_string = "";
			var_141_string = var_2_object;
			func_5624(var_141_string);
			goto Label_154;
	}
		PlayAnimation("all", "idle");

	Label_169:
		WaitForAnimEnd();
		var_144_object = var_3_object;
		if(var_144_object != 0) {
			goto Label_179;
		}
		PlayAnimation("all", "idle");
		goto Label_169;
	}
	goto Label_179;
	
Label_179:
	return 0;
	
}


func_5746(var_38_bool)
{
	var_38_bool = 1;
	return 0;
}


func_3696(var_0_object, var_1_object, var_2_object, var_3_object, var_492_object, var_493_object)
{
	var_0_object = var_493_object;
	var_1_object = var_492_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_499_bool = 0;
		var_499_bool = 0;
		var_500_bool = 0; var_501_object = Obj();
		var_501_object = var_1_object;
		func_6372(var_501_object);
		if(var_500_bool != 0) {
			var_506_bool = 0; var_507_object = Obj();
			var_507_object = var_1_object;
			func_6384(var_507_object);
			if(var_506_bool != 0) {
				var_499_bool = 1;
			}
		}
		if(var_499_bool != 0) {
			var_512_string = "";
			func_3875(var_493_object, "Neutral");
			@@@var_0_object:SetMessage((int)10844);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10845, (int)11990, (int)11989);
		} else {
				var_529_string = "";
				func_3875(var_493_object, "Neutral");
				@@@var_0_object:SetMessage((int)10841);
				@@@var_0_object:ClearReplies();
				var_531_bool = 0; var_532_object = Obj();
				var_532_object = var_1_object;
				func_6372(var_532_object);
				if(var_531_bool != 0) {
					@@@var_0_object:AddReply((int)10873, (int)12022, (int)12021);
				}
				var_536_bool = 0;
				var_536_bool = 0;
				var_537_bool = 0;
				var_537_bool = 0;
				var_538_bool = 0; var_539_object = Obj();
				var_539_object = var_1_object;
				func_6396(var_539_object);
				if(var_538_bool != 0) {
					var_544_bool = 0; var_545_object = Obj();
					var_545_object = var_1_object;
					func_6408(var_545_object);
					if(var_544_bool != 0) {
						var_537_bool = 1;
					}
				}
				if(var_537_bool != 0) {
					var_550_bool = 0; var_551_object = Obj();
					var_551_object = var_1_object;
					func_6468(var_550_bool, var_551_object);
					if(var_550_bool != 0) {
						var_536_bool = 1;
					}
				}
				if(var_536_bool != 0) {
					@@@var_0_object:AddReply((int)10876, (int)12025, (int)12024);
				}
				var_561_bool = 0;
				var_561_bool = 0;
				var_562_bool = 0;
				var_562_bool = 0;
				var_563_bool = 0; var_564_object = Obj();
				var_564_object = var_1_object;
				func_6396(var_564_object);
				if(var_563_bool != 0) {
					var_565_bool = 0; var_566_object = Obj();
					var_566_object = var_1_object;
					func_6478(var_566_object);
					if(var_565_bool != 0) {
						var_562_bool = 1;
					}
				}
				if(var_562_bool != 0) {
					var_567_bool = 0; var_568_object = Obj();
					var_568_object = var_1_object;
					func_6468(var_567_bool, var_568_object);
					var_569_bool = var_567_bool == 0; //@nz
					if(var_569_bool != 0) {
						var_561_bool = 1;
					}
				}
				if(var_561_bool != 0) {
					@@@var_0_object:AddReply((int)11160, (int)12344, (int)12343);
				}
				var_573_bool = 0; var_574_object = Obj();
				var_574_object = var_1_object;
				func_6420(var_574_object);
				if(var_573_bool != 0) {
					@@@var_0_object:AddReply((int)10842, (int)10885, (int)11986);
				}
				var_582_bool = 0; var_583_object = Obj();
				var_583_object = var_1_object;
				func_6432(var_583_object);
				if(var_582_bool != 0) {
					@@@var_0_object:AddReply((int)9894, (int)10899, (int)10898);
				}
				var_591_bool = 0; var_592_object = Obj();
				var_592_object = var_1_object;
				func_6444(var_592_object);
				if(var_591_bool != 0) {
					@@@var_0_object:AddReply((int)10843, (int)10909, (int)11987);
				}
				@@@var_0_object:AddReply((int)11157, (int)-1, (int)12342);
				goto Label_3845;
		}
	}
Label_3845:
	var_521_bool = 0;
	func_5746(var_521_bool);
	if(var_521_bool != 0) {

	Label_3849:
		lshWaitForAnimEnd();
		var_522_object = var_3_object;
		if(var_522_object != 0) {
		} else {
			var_523_string = "";
			var_523_string = var_2_object;
			func_5624(var_523_string);
			goto Label_3849;
	}
		PlayAnimation("all", "idle");

	Label_3864:
		WaitForAnimEnd();
		var_526_object = var_3_object;
		if(var_526_object != 0) {
			goto Label_3874;
		}
		PlayAnimation("all", "idle");
		goto Label_3864;

	}
	goto Label_3874;
	
Label_3874:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe74";


func_5748()
{
	SetVariable("KnowUklad", (int)1);
	return 0;
}


func_6264(var_153_bool)
{
	var_155_int = 0; var_156_string = "";
	func_5659(var_155_int, "ood2Kapella1");
	var_160_bool = var_155_int == (int)0;
	if(var_160_bool != 0) {
		var_153_bool = 1;
		return 0;
	}
	var_153_bool = 0;
	return 0;
}


func_5754()
{
	SetVariable("ood1Kapella1", (int)1);
	return 0;
}


func_5760()
{
	SetVariable("ood1Kapella2", (int)1);
	return 0;
}


func_6276(var_170_bool)
{
	var_172_int = 0; var_173_string = "";
	func_5659(var_172_int, "ood2Kapella2");
	var_175_bool = var_172_int == (int)0;
	if(var_175_bool != 0) {
		var_170_bool = 1;
		return 0;
	}
	var_170_bool = 0;
	return 0;
}


func_5766()
{
	SetVariable("ood1Kapella3", (int)1);
	return 0;
}


func_5772()
{
	SetVariable("ood1Kapella4", (int)1);
	return 0;
}


func_6796(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj();
	GetMainOutdoorScene(var_54_object);
	var_56_bool = var_54_object == 0; //@ne
	if(var_56_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_55_object = 0;
		var_55_object = var_51_object;
		return 4;
	}
	@@var_54_object:GetMap(var_55_object);
	var_55_object = var_51_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6288(var_161_bool)
{
	var_163_int = 0; var_164_string = "";
	func_5659(var_163_int, "d2q01");
	var_166_bool = var_163_int == (int)2;
	if(var_166_bool != 0) {
		var_161_bool = 1;
		return 0;
	}
	var_161_bool = 0;
	return 0;
}


func_5778()
{
	SetVariable("KnowKaterina", (int)1);
	return 0;
}


func_5784()
{
	SetVariable("KnowKapella", (int)1);
	return 0;
}


func_6300(var_384_bool)
{
	var_386_int = 0; var_387_string = "";
	func_5659(var_386_int, "ood1Kapella7");
	var_389_bool = var_386_int == (int)0;
	if(var_389_bool != 0) {
		var_384_bool = 1;
		return 0;
	}
	var_384_bool = 0;
	return 0;
}


func_6813(var_115_object, var_116_string, var_117_float)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_object = Obj(); var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_object = Obj(); var_126_bool = 0;
	GetMainOutdoorScene(var_125_object);
	var_127_bool = var_125_object == 0; //@ne
	if(var_127_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_125_object:GetLocator(var_116_string, var_126_bool, var_123_cvector, var_124_cvector);
	var_129_bool = var_126_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_131_int = "Warning: outdoor scene locator " + var_116_string;
		var_133_int = var_131_int + " doesnt exist";
		Trace(var_133_int);
	}
	@@var_125_object:GetMap(var_115_object);
	var_134_bool = var_115_object == 0; //@ne
	if(var_134_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_136_float = GetByIndex(var_123_cvector, 0);
	var_137_float = GetByIndex(var_123_cvector, 2);
	@@var_115_object:SetMapParams(var_136_float, var_137_float, var_117_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5790()
{
	var_47_object = Obj(); var_48_object = Obj();
	SetVariable("d1q03IsKapella", (int)1);
	func_6796(Obj());
	var_51_object = var_48_object;
	var_62_float = 0;
	func_5713(var_62_float);
	@@var_48_object:AddMark("d1q03KapellaGotoOspina", "pt_map_ospina", (int)0, (int)8641, var_62_float);
	func_6863();
	var_90_object = Obj(); var_91_string = "";
	func_5664(var_90_object, "quest_d1_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_6312(var_400_bool)
{
	var_402_int = 0; var_403_string = "";
	func_5659(var_402_int, "ood1Kapella8");
	var_405_bool = var_402_int == (int)0;
	if(var_405_bool != 0) {
		var_400_bool = 1;
		return 0;
	}
	var_400_bool = 0;
	return 0;
}


func_3241(var_2_object, var_136_string)
{
	var_137_bool = 0;
	func_5746(var_137_bool);
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
	func_5624(var_140_string);
	var_2_object = var_136_string;
	return 0;
}


func_180(var_2_object, var_49_string)
{
	var_50_bool = 0;
	func_5746(var_50_bool);
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool != 0) {
		return 0;
	}
	var_52_bool = var_49_string == var_2_object;
	if(var_52_bool != 0) {
		return 0;
	}
	var_53_string = "";
	var_49_string = var_53_string;
	func_5624(var_53_string);
	var_2_object = var_49_string;
	return 0;
}


func_6324(var_416_bool)
{
	var_418_int = 0; var_419_string = "";
	func_5659(var_418_int, "ood1Kapella9");
	var_421_bool = var_418_int == (int)0;
	if(var_421_bool != 0) {
		var_416_bool = 1;
		return 0;
	}
	var_416_bool = 0;
	return 0;
}


func_4788(var_0_object, var_607_int, var_608_object)
{
	var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0; var_614_object = Obj(); var_615_bool = 0; var_616_int = 0; var_617_bool = 0;
	var_0_object = var_608_object;
	var_618_bool = 0; var_619_object = Obj();
	var_608_object = var_619_object;
	func_5564(var_618_bool, var_619_object);
	var_620_bool = var_618_bool == 0; //@nz
	if(var_620_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	CreateDialog(var_614_object);
	var_621_int = 0;
	func_5742(var_621_int);
	@@var_614_object:SetNPCName(var_621_int);
	var_622_string = "";
	func_5744(var_622_string);
	@@var_614_object:SetPhoto(var_622_string);
	var_623_int = 0;
	func_6846(var_623_int);
	@@var_614_object:SetPlayerName(var_623_int);
	IsOverrideActive(var_615_bool);
	var_624_bool = var_615_bool;
	if(var_624_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	DoDialog(var_614_object);
	var_625_object = Obj(); var_626_object = Obj();
	var_608_object = var_625_object;
	var_614_object = var_626_object;
	TaskCall(13);
	func_4851(var_627_object, var_628_object, var_629_string, var_630_bool, var_625_object, var_626_object);
	TaskReturn();
	@@var_614_object:IsDialogEnd(var_617_bool);
	
Label_4833:
	var_665_bool = var_617_bool == 0; //@nz
	if(var_665_bool != 0) {
		sync();
		@@var_614_object:IsDialogEnd(var_617_bool);
		goto Label_4833;
	}
	var_608_object = Obj();
	func_5620();
	StopDialog(var_614_object);
	@@var_614_object:GetReturnValue((int)-1);
	var_616_int = var_607_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5817()
{
	SetVariable("ood1Kapella6", (int)1);
	return 0;
}


func_6846(var_93_int)
{
	var_94_int = 0; var_95_int = 0;
	GetVariable("player", var_95_int);
	var_98_bool = var_95_int == (int)0;
	if(var_98_bool != 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x1acd";
	}
	var_100_bool = var_95_int == (int)1;
	if(var_100_bool != 0) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
	return 2;
}


func_5823(var_765_object)
{
	Trace("funduk3 is given");
	var_768_object = Obj(); var_769_string = ""; var_770_int = 0;
	var_765_object = var_768_object;
	func_5688(var_768_object, "funduk", (int)3);
	return 0;
}


func_6336(var_432_bool)
{
	var_434_int = 0; var_435_string = "";
	func_5659(var_434_int, "ood1Kapella10");
	var_437_bool = var_434_int == (int)0;
	if(var_437_bool != 0) {
		var_432_bool = 1;
		return 0;
	}
	var_432_bool = 0;
	return 0;
}


func_5834()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_6348(var_448_bool)
{
	var_450_int = 0; var_451_string = "";
	func_5659(var_450_int, "ood1Kapella11");
	var_453_bool = var_450_int == (int)0;
	if(var_453_bool != 0) {
		var_448_bool = 1;
		return 0;
	}
	var_448_bool = 0;
	return 0;
}


func_6863()
{
	var_65_object = Obj(); var_66_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_66_object, (int)37, (int)2, (int)12119);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_66_object = var_72_object;
	func_6767(var_71_bool, var_72_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5840()
{
	SetVariable("ood2Kapella1", (int)1);
	return 0;
}


func_5846()
{
	SetVariable("ood2Kapella2", (int)1);
	return 0;
}


func_6360(var_464_bool)
{
	var_466_int = 0; var_467_string = "";
	func_5659(var_466_int, "ood1Kapella12");
	var_469_bool = var_466_int == (int)0;
	if(var_469_bool != 0) {
		var_464_bool = 1;
		return 0;
	}
	var_464_bool = 0;
	return 0;
}


func_5852()
{
	var_47_object = Obj(); var_48_object = Obj();
	SetVariable("d2q01", (int)3);
	func_6796(Obj());
	var_51_object = var_48_object;
	var_62_float = 0;
	func_5713(var_62_float);
	@@var_48_object:AddMark("d2q01KapellaGotoSpi4ka", "pt_map_spi4ka", (int)1, (int)11389, var_62_float);
	func_6879();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6879()
{
	var_65_object = Obj(); var_66_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_66_object, (int)52, (int)1, (int)12134);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_66_object = var_72_object;
	func_6767(var_71_bool, var_72_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6372(var_233_bool)
{
	var_235_int = 0; var_236_string = "";
	func_5659(var_235_int, "d3q03");
	var_240_bool = var_235_int == (int)0;
	if(var_240_bool != 0) {
		var_233_bool = 1;
		return 0;
	}
	var_233_bool = 0;
	return 0;
}


func_6895()
{
	var_65_object = Obj(); var_66_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_66_object, (int)27, (int)2, (int)3367);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_66_object = var_72_object;
	func_6767(var_71_bool, var_72_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6384(var_241_bool)
{
	var_243_int = 0; var_244_string = "";
	func_5659(var_243_int, "ood3Kapella1");
	var_246_bool = var_243_int == (int)0;
	if(var_246_bool != 0) {
		var_241_bool = 1;
		return 0;
	}
	var_241_bool = 0;
	return 0;
}


func_5875(var_99_object)
{
	var_100_object = Obj(); var_101_string = ""; var_102_float = 0;
	func_6796(Obj());
	var_103_object = var_100_object;
	func_6813(var_100_object, "pt_map_ospina", (float)2);
	var_123_object = Obj();
	func_6796(var_123_object);
	@@var_99_object:ShowMap(var_123_object);
	return 0;
}


func_4851(var_0_object, var_1_object, var_2_object, var_3_object, var_625_object, var_626_object)
{
	var_0_object = var_626_object;
	var_1_object = var_625_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_632_string = "";
		func_4923(var_626_object, "Neutral");
		@@@var_0_object:SetMessage((int)11245);
		@@@var_0_object:ClearReplies();
		var_638_bool = 0;
		var_638_bool = 0;
		var_639_bool = 0; var_640_object = Obj();
		var_640_object = var_1_object;
		func_6651(var_640_object);
		if(var_639_bool != 0) {
			var_645_bool = 0; var_646_object = Obj();
			var_646_object = var_1_object;
			func_6663(var_646_object);
			if(var_645_bool != 0) {
				var_638_bool = 1;
			}
		}
		if(var_638_bool != 0) {
			@@@var_0_object:AddReply((int)11247, (int)12438, (int)12437);
		}
		@@@var_0_object:AddReply((int)11246, (int)-1, (int)12436);
		goto Label_4893;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12f7";
	}
Label_4893:
	var_657_bool = 0;
	func_5746(var_657_bool);
	if(var_657_bool != 0) {

	Label_4897:
		lshWaitForAnimEnd();
		var_658_object = var_3_object;
		if(var_658_object != 0) {
		} else {
			var_659_string = "";
			var_659_string = var_2_object;
			func_5624(var_659_string);
			goto Label_4897;
	}
		PlayAnimation("all", "idle");

	Label_4912:
		WaitForAnimEnd();
		var_662_object = var_3_object;
		if(var_662_object != 0) {
			goto Label_4922;
		}
		PlayAnimation("all", "idle");
		goto Label_4912;
	}
	goto Label_4922;
	
Label_4922:
	return 0;
	
}


func_6396(var_275_bool)
{
	var_277_int = 0; var_278_string = "";
	func_5659(var_277_int, "d3q03");
	var_280_bool = var_277_int == (int)2;
	if(var_280_bool != 0) {
		var_275_bool = 1;
		return 0;
	}
	var_275_bool = 0;
	return 0;
}


func_6911()
{
	var_90_object = Obj(); var_91_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_91_object, (int)83, (int)2, (int)12165);
	var_96_bool = 0; var_97_object = Obj(); var_98_int = 0;
	var_91_object = var_97_object;
	func_6767(var_96_bool, var_97_object, (int)27);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5891(var_91_object)
{
	var_92_object = Obj(); var_93_string = ""; var_94_float = 0;
	func_6796(Obj());
	var_95_object = var_92_object;
	func_6813(var_92_object, "pt_map_spi4ka", (float)2);
	var_115_object = Obj();
	func_6796(var_115_object);
	@@var_91_object:ShowMap(var_115_object);
	return 0;
}


func_6408(var_281_bool)
{
	var_283_int = 0; var_284_string = "";
	func_5659(var_283_int, "ood3Kapella2");
	var_286_bool = var_283_int == (int)0;
	if(var_286_bool != 0) {
		var_281_bool = 1;
		return 0;
	}
	var_281_bool = 0;
	return 0;
}


func_6927()
{
	var_174_object = Obj(); var_175_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_175_object, (int)85, (int)2, (int)12167);
	var_180_bool = 0; var_181_object = Obj(); var_182_int = 0;
	var_175_object = var_181_object;
	func_6767(var_180_bool, var_181_object, (int)27);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5907()
{
	SetVariable("ood1Kapella7", (int)1);
	return 0;
}


func_6420(var_310_bool)
{
	var_312_int = 0; var_313_string = "";
	func_5659(var_312_int, "ood3Kapella3");
	var_315_bool = var_312_int == (int)0;
	if(var_315_bool != 0) {
		var_310_bool = 1;
		return 0;
	}
	var_310_bool = 0;
	return 0;
}


func_1302(var_2_object, var_273_string)
{
	var_274_bool = 0;
	func_5746(var_274_bool);
	var_275_bool = var_274_bool == 0; //@nz
	if(var_275_bool != 0) {
		return 0;
	}
	var_276_bool = var_273_string == var_2_object;
	if(var_276_bool != 0) {
		return 0;
	}
	var_277_string = "";
	var_273_string = var_277_string;
	func_5624(var_277_string);
	var_2_object = var_273_string;
	return 0;
}


func_5913()
{
	SetVariable("ood1Kapella8", (int)1);
	return 0;
}


func_5919()
{
	SetVariable("ood1Kapella9", (int)1);
	return 0;
}


func_6432(var_319_bool)
{
	var_321_int = 0; var_322_string = "";
	func_5659(var_321_int, "ood3Kapella4");
	var_324_bool = var_321_int == (int)0;
	if(var_324_bool != 0) {
		var_319_bool = 1;
		return 0;
	}
	var_319_bool = 0;
	return 0;
}


func_6943()
{
	var_45_object = Obj(); var_46_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_46_object, (int)127, (int)2, (int)13772);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_46_object = var_52_object;
	func_6767(var_51_bool, var_52_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3875(var_2_object, var_247_string)
{
	var_248_bool = 0;
	func_5746(var_248_bool);
	var_249_bool = var_248_bool == 0; //@nz
	if(var_249_bool != 0) {
		return 0;
	}
	var_250_bool = var_247_string == var_2_object;
	if(var_250_bool != 0) {
		return 0;
	}
	var_251_string = "";
	var_247_string = var_251_string;
	func_5624(var_251_string);
	var_2_object = var_247_string;
	return 0;
}


func_5925()
{
	SetVariable("ood1Kapella10", (int)1);
	return 0;
}


func_5931()
{
	SetVariable("ood1Kapella12", (int)1);
	return 0;
}


func_6444(var_328_bool)
{
	var_330_int = 0; var_331_string = "";
	func_5659(var_330_int, "ood3Kapella5");
	var_333_bool = var_330_int == (int)0;
	if(var_333_bool != 0) {
		var_328_bool = 1;
		return 0;
	}
	var_328_bool = 0;
	return 0;
}


func_6959()
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_5937()
{
	var_47_object = Obj(); var_48_object = Obj();
	SetVariable("d3q03", (int)1);
	func_6796(Obj());
	var_51_object = var_48_object;
	var_62_float = 0;
	func_5713(var_62_float);
	@@var_48_object:AddMark("d3q03KapellaBoyLocation", "pt_d3q03_boy", (int)0, (int)11156, var_62_float);
	func_6895();
	func_6911();
	var_99_object = Obj(); var_100_string = "";
	func_5664(var_99_object, "quest_d3_03");
	var_107_bool = 0; var_108_string = ""; var_109_string = "";
	func_5701(var_107_bool, "quest_d3_03", "boy");
	return 2;
}
EMIT "Stack[-1] = 0";


func_6963(var_36_object)
{
	var_37_bool = GlobalVars[1];
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_39_int = 0; var_40_object = Obj();
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_149_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_150_bool = 0; var_151_int = 0;
	func_5727(var_150_bool, (int)1);
	if(var_150_bool != 0) {
		var_158_int = 0; var_159_object = Obj();
		var_36_object = var_159_object;
		TaskCall(6);
		func_933(var_160_object, var_158_int, var_159_object);
		TaskReturn();
		return 0;
	}
	var_401_bool = 0; var_402_int = 0;
	func_5727(var_401_bool, (int)2);
	if(var_401_bool != 0) {
		var_403_int = 0; var_404_object = Obj();
		var_36_object = var_404_object;
		TaskCall(8);
		func_3071(var_405_object, var_403_int, var_404_object);
		TaskReturn();
		return 0;
	}
	var_472_bool = 0; var_473_int = 0;
	func_5727(var_472_bool, (int)3);
	if(var_472_bool != 0) {
		var_474_int = 0; var_475_object = Obj();
		var_36_object = var_475_object;
		TaskCall(10);
		func_3633(var_476_object, var_474_int, var_475_object);
		TaskReturn();
		return 0;
	}
	var_605_bool = 0; var_606_int = 0;
	func_5727(var_605_bool, (int)4);
	if(var_605_bool != 0) {
		var_607_int = 0; var_608_object = Obj();
		var_36_object = var_608_object;
		TaskCall(12);
		func_4788(var_609_object, var_607_int, var_608_object);
		TaskReturn();
		return 0;
	}
	var_667_bool = 0; var_668_int = 0;
	func_5727(var_667_bool, (int)6);
	if(var_667_bool != 0) {
		var_669_int = 0; var_670_object = Obj();
		var_36_object = var_670_object;
		TaskCall(4);
		func_350(var_671_object, var_669_int, var_670_object);
		TaskReturn();
		return 0;
	}
	var_771_bool = 0; var_772_int = 0;
	func_5727(var_771_bool, (int)8);
	if(var_771_bool != 0) {
		var_773_int = 0; var_774_object = Obj();
		var_36_object = var_774_object;
		TaskCall(14);
		func_5057(var_775_object, var_773_int, var_774_object);
		TaskReturn();
		return 0;
	}
	func_5733((bool)0);
	return 0;
}


func_6456(var_448_bool)
{
	var_450_int = 0; var_451_string = "";
	func_5659(var_450_int, "d3q01");
	var_453_bool = var_450_int == (int)-1;
	if(var_453_bool != 0) {
		var_448_bool = 1;
		return 0;
	}
	var_448_bool = 0;
	return 0;
}


func_4923(var_2_object, var_47_string)
{
	var_48_bool = 0;
	func_5746(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 0;
	}
	var_50_bool = var_47_string == var_2_object;
	if(var_50_bool != 0) {
		return 0;
	}
	var_51_string = "";
	var_47_string = var_51_string;
	func_5624(var_51_string);
	var_2_object = var_47_string;
	return 0;
}


func_6468(var_287_bool, var_288_object)
{
	var_289_bool = 0; var_290_object = Obj();
	var_288_object = var_290_object;
	func_6747(var_289_bool, var_290_object);
	if(var_289_bool != 0) {
		var_287_bool = 1;
		return 0;
	}
	var_287_bool = 0;
	return 0;
}


func_6478(var_302_bool)
{
	var_302_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_6483(var_170_bool)
{
	var_172_int = 0; var_173_string = "";
	func_5659(var_172_int, "d6q02");
	var_175_bool = var_172_int == (int)0;
	if(var_175_bool != 0) {
		var_170_bool = 1;
		return 0;
	}
	var_170_bool = 0;
	return 0;
}


func_5972()
{
	SetVariable("ood3Kapella1", (int)1);
	return 0;
}


func_5978(var_114_object)
{
	var_115_object = Obj(); var_116_string = ""; var_117_float = 0;
	func_6796(Obj());
	var_118_object = var_115_object;
	func_6813(var_115_object, "pt_d3q03_boy", (float)2);
	var_138_object = Obj();
	func_6796(var_138_object);
	@@var_114_object:ShowMap(var_138_object);
	return 0;
}


func_350(var_0_object, var_669_int, var_670_object)
{
	var_672_object = Obj(); var_673_bool = 0; var_674_int = 0; var_675_bool = 0; var_676_object = Obj(); var_677_bool = 0; var_678_int = 0; var_679_bool = 0;
	var_0_object = var_670_object;
	var_680_bool = 0; var_681_object = Obj();
	var_670_object = var_681_object;
	func_5564(var_680_bool, var_681_object);
	var_682_bool = var_680_bool == 0; //@nz
	if(var_682_bool != 0) {
		var_669_int = -2;
		return 8;
	}
	CreateDialog(var_676_object);
	var_683_int = 0;
	func_5742(var_683_int);
	@@var_676_object:SetNPCName(var_683_int);
	var_684_string = "";
	func_5744(var_684_string);
	@@var_676_object:SetPhoto(var_684_string);
	var_685_int = 0;
	func_6846(var_685_int);
	@@var_676_object:SetPlayerName(var_685_int);
	IsOverrideActive(var_677_bool);
	var_686_bool = var_677_bool;
	if(var_686_bool != 0) {
		var_669_int = -2;
		return 8;
	}
	DoDialog(var_676_object);
	var_687_object = Obj(); var_688_object = Obj();
	var_670_object = var_687_object;
	var_676_object = var_688_object;
	TaskCall(5);
	func_413(var_689_object, var_690_object, var_691_string, var_692_bool, var_687_object, var_688_object);
	TaskReturn();
	@@var_676_object:IsDialogEnd(var_679_bool);
	
Label_395:
	var_769_bool = var_679_bool == 0; //@nz
	if(var_769_bool != 0) {
		sync();
		@@var_676_object:IsDialogEnd(var_679_bool);
		goto Label_395;
	}
	var_670_object = Obj();
	func_5620();
	StopDialog(var_676_object);
	@@var_676_object:GetReturnValue((int)-1);
	var_678_int = var_669_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6495(var_122_bool)
{
	var_124_int = 0; var_125_string = "";
	func_5659(var_124_int, "d6q02");
	var_127_bool = var_124_int == (int)1000;
	if(var_127_bool != 0) {
		var_122_bool = 1;
		return 0;
	}
	var_122_bool = 0;
	return 0;
}


func_5994()
{
	SetVariable("ood3Kapella2", (int)1);
	return 0;
}


func_6507(var_129_bool)
{
	var_131_int = 0; var_132_string = "";
	func_5659(var_131_int, "d6q02");
	var_134_bool = var_131_int == (int)-1;
	if(var_134_bool != 0) {
		var_129_bool = 1;
		return 0;
	}
	var_129_bool = 0;
	return 0;
}


func_6000()
{
	var_165_object = Obj(); var_166_object = Obj(); var_167_object = Obj(); var_168_object = Obj();
	func_6796(Obj());
	var_169_object = var_167_object;
	@@var_167_object:FindMark(var_168_object, "d3q03KapellaBoyLocation");
	var_171_object = var_168_object;
	if(var_171_object != 0) {
		@@var_168_object:Remove();
	}
	@@var_167_object:FindMark(var_168_object, "d3q03KapellaBoyLocationSelf");
	var_173_object = var_168_object;
	if(var_173_object != 0) {
		@@var_168_object:Remove();
	}
	func_6927();
	var_183_bool = 0; var_184_string = ""; var_185_string = "";
	func_5701(var_183_bool, "quest_d3_03", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6519(var_116_bool)
{
	var_118_int = 0; var_119_string = "";
	func_5659(var_118_int, "ood6Kapella1");
	var_121_bool = var_118_int == (int)0;
	if(var_121_bool != 0) {
		var_116_bool = 1;
		return 0;
	}
	var_116_bool = 0;
	return 0;
}


func_6531(var_70_bool)
{
	var_72_int = 0; var_73_string = "";
	func_5659(var_72_int, "d6q01");
	var_77_bool = var_72_int == (int)0;
	if(var_77_bool != 0) {
		var_70_bool = 1;
		return 0;
	}
	var_70_bool = 0;
	return 0;
}


func_6030()
{
	SetVariable("ood3Kapella3", (int)1);
	return 0;
}


func_6543(var_193_bool)
{
	var_195_int = 0; var_196_string = "";
	func_5659(var_195_int, "d8TalkToMat");
	var_198_bool = var_195_int == (int)1;
	if(var_198_bool != 0) {
		var_193_bool = 1;
		return 0;
	}
	var_193_bool = 0;
	return 0;
}


func_6036()
{
	SetVariable("ood3Kapella4", (int)1);
	return 0;
}


func_6042()
{
	SetVariable("ood3Kapella5", (int)1);
	return 0;
}


func_6555(var_101_bool)
{
	var_103_int = 0; var_104_string = "";
	func_5659(var_103_int, "ood8Kapella1");
	var_108_bool = var_103_int == (int)0;
	if(var_108_bool != 0) {
		var_101_bool = 1;
		return 0;
	}
	var_101_bool = 0;
	return 0;
}


func_413(var_0_object, var_1_object, var_2_object, var_3_object, var_687_object, var_688_object)
{
	var_0_object = var_688_object;
	var_1_object = var_687_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_694_bool = 0;
		var_694_bool = 0;
		var_695_bool = 0; var_696_object = Obj();
		var_696_object = var_1_object;
		func_6531(var_696_object);
		if(var_695_bool != 0) {
			var_701_bool = 0; var_702_object = Obj();
			var_702_object = var_1_object;
			func_6687(var_702_object);
			if(var_701_bool != 0) {
				var_694_bool = 1;
			}
		}
		if(var_694_bool != 0) {
			var_707_object = Obj(); var_708_object = Obj();
			var_707_object = var_1_object;
			var_708_object = var_0_object;
			func_6126();
			var_711_object = Obj(); var_712_object = Obj();
			var_711_object = var_1_object;
			var_712_object = var_0_object;
			func_6132();
			var_715_string = "";
			func_555(var_688_object, "Neutral");
			@@@var_0_object:SetMessage((int)3371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3375, (int)3621, (int)3619);
			@@@var_0_object:AddReply((int)3376, (int)3621, (int)3620);
		} else {
				var_735_bool = 0;
				var_735_bool = 0;
				var_736_bool = 0;
				var_736_bool = 0;
				var_737_bool = 0; var_738_object = Obj();
				var_738_object = var_1_object;
				func_6519(var_738_object);
				if(var_737_bool != 0) {
					var_743_bool = 0; var_744_object = Obj();
					var_744_object = var_1_object;
					func_6495(var_744_object);
					var_749_bool = var_743_bool == 0; //@nz
					if(var_749_bool != 0) {
						var_736_bool = 1;
					}
				}
				if(var_736_bool != 0) {
					var_750_bool = 0; var_751_object = Obj();
					var_751_object = var_1_object;
					func_6507(var_751_object);
					var_756_bool = var_750_bool == 0; //@nz
					if(var_756_bool != 0) {
						var_735_bool = 1;
					}
				}
				if(var_735_bool != 0) {
					var_757_object = Obj(); var_758_object = Obj();
					var_757_object = var_1_object;
					var_758_object = var_0_object;
					func_6126();
					var_759_string = "";
					func_555(var_688_object, "Neutral");
					@@@var_0_object:SetMessage((int)12095);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)12096, (int)13323, (int)13322);
					goto Label_525;
				}
				var_764_string = "";
				func_555(var_688_object, "Neutral");
				@@@var_0_object:SetMessage((int)12523);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12524, (int)-1, (int)13694);
				goto Label_525;
		}
	}
Label_525:
	var_727_bool = 0;
	func_5746(var_727_bool);
	if(var_727_bool != 0) {

	Label_529:
		lshWaitForAnimEnd();
		var_728_object = var_3_object;
		if(var_728_object != 0) {
		} else {
			var_729_string = "";
			var_729_string = var_2_object;
			func_5624(var_729_string);
			goto Label_529;
	}
		PlayAnimation("all", "idle");

	Label_544:
		WaitForAnimEnd();
		var_732_object = var_3_object;
		if(var_732_object != 0) {
			goto Label_554;
		}
		PlayAnimation("all", "idle");
		goto Label_544;

	}
	goto Label_554;
	
Label_554:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1a1";


func_6048()
{
	SetVariable("ood6Kapella1", (int)1);
	return 0;
}


func_933(var_0_object, var_158_int, var_159_object)
{
	var_161_object = Obj(); var_162_bool = 0; var_163_int = 0; var_164_bool = 0; var_165_object = Obj(); var_166_bool = 0; var_167_int = 0; var_168_bool = 0;
	var_0_object = var_159_object;
	var_169_bool = 0; var_170_object = Obj();
	var_159_object = var_170_object;
	func_5564(var_169_bool, var_170_object);
	var_171_bool = var_169_bool == 0; //@nz
	if(var_171_bool != 0) {
		var_158_int = -2;
		return 8;
	}
	CreateDialog(var_165_object);
	var_172_int = 0;
	func_5742(var_172_int);
	@@var_165_object:SetNPCName(var_172_int);
	var_173_string = "";
	func_5744(var_173_string);
	@@var_165_object:SetPhoto(var_173_string);
	var_174_int = 0;
	func_6846(var_174_int);
	@@var_165_object:SetPlayerName(var_174_int);
	IsOverrideActive(var_166_bool);
	var_175_bool = var_166_bool;
	if(var_175_bool != 0) {
		var_158_int = -2;
		return 8;
	}
	DoDialog(var_165_object);
	var_176_object = Obj(); var_177_object = Obj();
	var_159_object = var_176_object;
	var_165_object = var_177_object;
	TaskCall(7);
	func_996(var_178_object, var_179_object, var_180_string, var_181_bool, var_176_object, var_177_object);
	TaskReturn();
	@@var_165_object:IsDialogEnd(var_168_bool);
	
Label_978:
	var_399_bool = var_168_bool == 0; //@nz
	if(var_399_bool != 0) {
		sync();
		@@var_165_object:IsDialogEnd(var_168_bool);
		goto Label_978;
	}
	var_159_object = Obj();
	func_5620();
	StopDialog(var_165_object);
	@@var_165_object:GetReturnValue((int)-1);
	var_167_int = var_158_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6054()
{
	SetVariable("d6q02KnowAboutAttack", (int)1);
	return 0;
}


func_6567(var_144_bool)
{
	var_146_int = 0; var_147_string = "";
	func_5659(var_146_int, "d8q02");
	var_149_bool = var_146_int == (int)1000;
	if(var_149_bool != 0) {
		var_144_bool = 1;
		return 0;
	}
	var_144_bool = 0;
	return 0;
}


func_5547(var_36_bool, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0;
	@@var_37_object:GetPosition(var_42_cvector);
	GetPosition(var_43_cvector);
	var_44_cvector = var_42_cvector - var_43_cvector;
	var_46_float = GetByIndex(var_44_cvector, 0);
	var_47_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_46_float, var_47_float, var_45_bool);
	var_45_bool = var_36_bool;
	return 8;
}


func_6060()
{
	SetVariable("KnowViktoria", (int)1);
	return 0;
}


func_6066()
{
	SetVariable("ood8Kapella1", (int)1);
	return 0;
}


func_6579(var_150_bool)
{
	var_152_int = 0; var_153_string = "";
	func_5659(var_152_int, "ood8Kapella2");
	var_155_bool = var_152_int == (int)0;
	if(var_155_bool != 0) {
		var_150_bool = 1;
		return 0;
	}
	var_150_bool = 0;
	return 0;
}


func_5559(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_6072()
{
	SetVariable("d8q02", (int)1);
	func_6943();
	return 0;
}


func_5564(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0;
	@@var_51_object:GetPosition(var_61_cvector);
	@@var_51_object:GetEyesHeight(var_60_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	var_68_float = var_68_float + var_60_float;
	SetByIndex(var_61_cvector, 1) = var_68_float;
	GetPosition(var_62_cvector);
	GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_62_cvector, 1);
	var_69_float = var_69_float + var_60_float;
	SetByIndex(var_62_cvector, 1) = var_69_float;
	var_63_cvector = var_61_cvector - var_62_cvector;
	var_70_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_71_int = var_63_cvector | var_63_cvector;
	var_72_float = sqrt(var_71_int);
	var_63_cvector = var_63_cvector / var_72_float;
	var_64_cvector = -var_63_cvector;
	var_74_float = var_63_cvector * (int)70;
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_76_cvector = var_64_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5649(var_75_cvector, var_76_cvector);
	var_84_float = var_75_cvector * (int)25;
	var_85_int = var_74_float + var_84_float;
	var_65_cvector = var_85_int - CVector(0.0, 10.0, 0.0);
	var_66_cvector = var_62_cvector + var_65_cvector;
	IsOverrideActive(var_67_bool);
	var_87_bool = var_67_bool;
	if(var_87_bool != 0) {
		var_50_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_66_cvector, var_64_cvector);
	var_88_float = GetByIndex(var_65_cvector, 0);
	var_89_float = GetByIndex(var_65_cvector, 2);
	Rotate(var_88_float, var_89_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_50_bool = 1;
	return 16;
}


func_6591(var_132_bool)
{
	var_134_int = 0; var_135_string = "";
	func_5659(var_134_int, "d8TermitnikLoad");
	var_137_bool = var_134_int != (int)0;
	if(var_137_bool != 0) {
		var_132_bool = 1;
		return 0;
	}
	var_132_bool = 0;
	return 0;
}


func_6081(var_70_object)
{
	Trace("feromicin is given");
	var_73_object = Obj(); var_74_string = ""; var_75_int = 0;
	var_70_object = var_73_object;
	func_5688(var_73_object, "feromicin", (int)1);
	return 0;
}


func_5057(var_0_object, var_773_int, var_774_object)
{
	var_776_object = Obj(); var_777_bool = 0; var_778_int = 0; var_779_bool = 0; var_780_object = Obj(); var_781_bool = 0; var_782_int = 0; var_783_bool = 0;
	var_0_object = var_774_object;
	var_784_bool = 0; var_785_object = Obj();
	var_774_object = var_785_object;
	func_5564(var_784_bool, var_785_object);
	var_786_bool = var_784_bool == 0; //@nz
	if(var_786_bool != 0) {
		var_773_int = -2;
		return 8;
	}
	CreateDialog(var_780_object);
	var_787_int = 0;
	func_5742(var_787_int);
	@@var_780_object:SetNPCName(var_787_int);
	var_788_string = "";
	func_5744(var_788_string);
	@@var_780_object:SetPhoto(var_788_string);
	var_789_int = 0;
	func_6846(var_789_int);
	@@var_780_object:SetPlayerName(var_789_int);
	IsOverrideActive(var_781_bool);
	var_790_bool = var_781_bool;
	if(var_790_bool != 0) {
		var_773_int = -2;
		return 8;
	}
	DoDialog(var_780_object);
	var_791_object = Obj(); var_792_object = Obj();
	var_774_object = var_791_object;
	var_780_object = var_792_object;
	TaskCall(15);
	func_5120(var_793_object, var_794_object, var_795_string, var_796_bool, var_791_object, var_792_object);
	TaskReturn();
	@@var_780_object:IsDialogEnd(var_783_bool);
	
Label_5102:
	var_855_bool = var_783_bool == 0; //@nz
	if(var_855_bool != 0) {
		sync();
		@@var_780_object:IsDialogEnd(var_783_bool);
		goto Label_5102;
	}
	var_774_object = Obj();
	func_5620();
	StopDialog(var_780_object);
	@@var_780_object:GetReturnValue((int)-1);
	var_782_int = var_773_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6603(var_394_bool)
{
	var_396_int = 0; var_397_string = "";
	func_5659(var_396_int, "KnowKaterina");
	var_399_bool = var_396_int == (int)1;
	if(var_399_bool != 0) {
		var_394_bool = 1;
		return 0;
	}
	var_394_bool = 0;
	return 0;
}


func_6092()
{
	SetVariable("ood8Kapella2", (int)1);
	return 0;
}


func_6098()
{
	SetVariable("ood4Kapella1", (int)1);
	return 0;
}


func_6615(var_378_bool)
{
	var_380_int = 0; var_381_string = "";
	func_5659(var_380_int, "KnowLara");
	var_383_bool = var_380_int == (int)1;
	if(var_383_bool != 0) {
		var_378_bool = 1;
		return 0;
	}
	var_378_bool = 0;
	return 0;
}


func_6104()
{
	SetVariable("KnowPredictions", (int)1);
	return 0;
}


func_6110()
{
	var_47_object = Obj(); var_48_object = Obj();
	func_6796(Obj());
	var_49_object = var_48_object;
	var_60_float = 0;
	func_5713(var_60_float);
	@@var_48_object:AddMark("d6q02KapellaGotoMladVlad", "pt_map_mladvlad", (int)0, (int)15377, var_60_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6627(var_426_bool)
{
	var_428_int = 0; var_429_string = "";
	func_5659(var_428_int, "KnowMishka");
	var_431_bool = var_428_int == (int)1;
	if(var_431_bool != 0) {
		var_426_bool = 1;
		return 0;
	}
	var_426_bool = 0;
	return 0;
}


func_996(var_0_object, var_1_object, var_2_object, var_3_object, var_176_object, var_177_object)
{
	var_0_object = var_177_object;
	var_1_object = var_176_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_183_bool = 0;
		var_183_bool = 0;
		var_184_bool = 0; var_185_object = Obj();
		var_185_object = var_1_object;
		func_6723(var_185_object);
		if(var_184_bool != 0) {
			var_192_bool = 0; var_193_object = Obj();
			var_193_object = var_1_object;
			func_6192(var_193_object);
			if(var_192_bool != 0) {
				var_183_bool = 1;
			}
		}
		if(var_183_bool != 0) {
			var_198_string = "";
			func_1302(var_177_object, "Neutral");
			@@@var_0_object:SetMessage((int)5449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5453, (int)6575, (int)6007);
			@@@var_0_object:AddReply((int)5974, (int)6575, (int)6579);
		} else {
				var_218_string = "";
				func_1302(var_177_object, "Neutral");
				@@@var_0_object:SetMessage((int)5484);
				@@@var_0_object:ClearReplies();
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_6735(var_221_object);
				if(var_220_bool != 0) {
					@@@var_0_object:AddReply((int)8729, (int)6028, (int)9566);
				}
				var_229_bool = 0;
				var_229_bool = 0;
				var_230_bool = 0; var_231_object = Obj();
				var_231_object = var_1_object;
				func_6144(var_231_object);
				if(var_230_bool != 0) {
					var_236_bool = 0; var_237_object = Obj();
					var_237_object = var_1_object;
					func_6168(var_237_object);
					if(var_236_bool != 0) {
						var_229_bool = 1;
					}
				}
				if(var_229_bool != 0) {
					@@@var_0_object:AddReply((int)8728, (int)6008, (int)9565);
				}
				var_245_bool = 0;
				var_245_bool = 0;
				var_246_bool = 0;
				var_246_bool = 0;
				var_247_bool = 0; var_248_object = Obj();
				var_248_object = var_1_object;
				func_6156(var_248_object);
				if(var_247_bool != 0) {
					var_253_bool = 0; var_254_object = Obj();
					var_254_object = var_1_object;
					func_6204(var_254_object);
					if(var_253_bool != 0) {
						var_246_bool = 1;
					}
				}
				if(var_246_bool != 0) {
					var_259_bool = 0; var_260_object = Obj();
					var_260_object = var_1_object;
					func_6216(var_260_object);
					if(var_259_bool != 0) {
						var_245_bool = 1;
					}
				}
				if(var_245_bool != 0) {
					@@@var_0_object:AddReply((int)5451, (int)6666, (int)6005);
				}
				var_268_bool = 0;
				var_268_bool = 0;
				var_269_bool = 0;
				var_269_bool = 0;
				var_270_bool = 0; var_271_object = Obj();
				var_271_object = var_1_object;
				func_6180(var_271_object);
				if(var_270_bool != 0) {
					var_276_bool = 0; var_277_object = Obj();
					var_277_object = var_1_object;
					func_6192(var_277_object);
					if(var_276_bool != 0) {
						var_269_bool = 1;
					}
				}
				if(var_269_bool != 0) {
					var_278_bool = 0; var_279_object = Obj();
					var_279_object = var_1_object;
					func_6723(var_279_object);
					var_280_bool = var_278_bool == 0; //@nz
					if(var_280_bool != 0) {
						var_268_bool = 1;
					}
				}
				if(var_268_bool != 0) {
					@@@var_0_object:AddReply((int)5452, (int)9563, (int)6006);
				}
				var_284_bool = 0;
				var_284_bool = 0;
				var_285_bool = 0; var_286_object = Obj();
				var_286_object = var_1_object;
				func_6228(var_286_object);
				if(var_285_bool != 0) {
					var_291_bool = 0; var_292_object = Obj();
					var_292_object = var_1_object;
					func_6240(var_292_object);
					if(var_291_bool != 0) {
						var_284_bool = 1;
					}
				}
				if(var_284_bool != 0) {
					@@@var_0_object:AddReply((int)6288, (int)6941, (int)6940);
				}
				var_300_bool = 0;
				var_300_bool = 0;
				var_301_bool = 0; var_302_object = Obj();
				var_302_object = var_1_object;
				func_6615(var_302_object);
				if(var_301_bool != 0) {
					var_307_bool = 0; var_308_object = Obj();
					var_308_object = var_1_object;
					func_6300(var_308_object);
					if(var_307_bool != 0) {
						var_300_bool = 1;
					}
				}
				if(var_300_bool != 0) {
					@@@var_0_object:AddReply((int)7933, (int)8773, (int)8753);
				}
				var_316_bool = 0;
				var_316_bool = 0;
				var_317_bool = 0; var_318_object = Obj();
				var_318_object = var_1_object;
				func_6603(var_318_object);
				if(var_317_bool != 0) {
					var_323_bool = 0; var_324_object = Obj();
					var_324_object = var_1_object;
					func_6312(var_324_object);
					if(var_323_bool != 0) {
						var_316_bool = 1;
					}
				}
				if(var_316_bool != 0) {
					@@@var_0_object:AddReply((int)7938, (int)8784, (int)8758);
				}
				var_332_bool = 0;
				var_332_bool = 0;
				var_333_bool = 0; var_334_object = Obj();
				var_334_object = var_1_object;
				func_6639(var_334_object);
				if(var_333_bool != 0) {
					var_339_bool = 0; var_340_object = Obj();
					var_340_object = var_1_object;
					func_6324(var_340_object);
					if(var_339_bool != 0) {
						var_332_bool = 1;
					}
				}
				if(var_332_bool != 0) {
					@@@var_0_object:AddReply((int)7943, (int)8775, (int)8763);
				}
				var_348_bool = 0;
				var_348_bool = 0;
				var_349_bool = 0; var_350_object = Obj();
				var_350_object = var_1_object;
				func_6627(var_350_object);
				if(var_349_bool != 0) {
					var_355_bool = 0; var_356_object = Obj();
					var_356_object = var_1_object;
					func_6336(var_356_object);
					if(var_355_bool != 0) {
						var_348_bool = 1;
					}
				}
				if(var_348_bool != 0) {
					@@@var_0_object:AddReply((int)7950, (int)8776, (int)8770);
				}
				var_364_bool = 0;
				var_364_bool = 0;
				var_365_bool = 0; var_366_object = Obj();
				var_366_object = var_1_object;
				func_6699(var_366_object);
				if(var_365_bool != 0) {
					var_371_bool = 0; var_372_object = Obj();
					var_372_object = var_1_object;
					func_6348(var_372_object);
					if(var_371_bool != 0) {
						var_364_bool = 1;
					}
				}
				if(var_364_bool != 0) {
					@@@var_0_object:AddReply((int)7951, (int)8777, (int)8771);
				}
				var_380_bool = 0;
				var_380_bool = 0;
				var_381_bool = 0; var_382_object = Obj();
				var_382_object = var_1_object;
				func_6675(var_382_object);
				if(var_381_bool != 0) {
					var_387_bool = 0; var_388_object = Obj();
					var_388_object = var_1_object;
					func_6360(var_388_object);
					if(var_387_bool != 0) {
						var_380_bool = 1;
					}
				}
				if(var_380_bool != 0) {
					@@@var_0_object:AddReply((int)7952, (int)8778, (int)8772);
				}
				@@@var_0_object:AddReply((int)6264, (int)-1, (int)6931);
				goto Label_1272;
		}
	}
Label_1272:
	var_210_bool = 0;
	func_5746(var_210_bool);
	if(var_210_bool != 0) {

	Label_1276:
		lshWaitForAnimEnd();
		var_211_object = var_3_object;
		if(var_211_object != 0) {
		} else {
			var_212_string = "";
			var_212_string = var_2_object;
			func_5624(var_212_string);
			goto Label_1276;
	}
		PlayAnimation("all", "idle");

	Label_1291:
		WaitForAnimEnd();
		var_215_object = var_3_object;
		if(var_215_object != 0) {
			goto Label_1301;
		}
		PlayAnimation("all", "idle");
		goto Label_1291;

	}
	goto Label_1301;
	
Label_1301:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3e8";


func_6126()
{
	SetVariable("d6KapellaVisit", (int)1);
	return 0;
}


func_6639(var_410_bool)
{
	var_412_int = 0; var_413_string = "";
	func_5659(var_412_int, "KnowMladVlad");
	var_415_bool = var_412_int == (int)1;
	if(var_415_bool != 0) {
		var_410_bool = 1;
		return 0;
	}
	var_410_bool = 0;
	return 0;
}


func_5620()
{
	CameraSwitchToNormal();
	return 0;
}


func_6132()
{
	SetVariable("ood6Kapella3", (int)1);
	return 0;
}


func_5624(var_40_string)
{
	var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0;
	var_46_int = "playing " + var_40_string;
	Trace(var_46_int);
	lshGetAnimTimes(var_40_string, var_43_float, var_44_float);
	lshPlayAnimation(var_43_float, var_44_float);
	var_48_int = "start: " + var_43_float;
	Trace(var_48_int);
	var_50_int = "end: " + var_44_float;
	Trace(var_50_int);
	return 4;
}


func_6138()
{
	SetVariable("KnowTermitnik", (int)1);
	return 0;
}


func_6651(var_64_bool)
{
	var_66_int = 0; var_67_string = "";
	func_5659(var_66_int, "ood4Kapella1");
	var_71_bool = var_66_int == (int)0;
	if(var_71_bool != 0) {
		var_64_bool = 1;
		return 0;
	}
	var_64_bool = 0;
	return 0;
}


func_3071(var_0_object, var_403_int, var_404_object)
{
	var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_object = Obj(); var_411_bool = 0; var_412_int = 0; var_413_bool = 0;
	var_0_object = var_404_object;
	var_414_bool = 0; var_415_object = Obj();
	var_404_object = var_415_object;
	func_5564(var_414_bool, var_415_object);
	var_416_bool = var_414_bool == 0; //@nz
	if(var_416_bool != 0) {
		var_403_int = -2;
		return 8;
	}
	CreateDialog(var_410_object);
	var_417_int = 0;
	func_5742(var_417_int);
	@@var_410_object:SetNPCName(var_417_int);
	var_418_string = "";
	func_5744(var_418_string);
	@@var_410_object:SetPhoto(var_418_string);
	var_419_int = 0;
	func_6846(var_419_int);
	@@var_410_object:SetPlayerName(var_419_int);
	IsOverrideActive(var_411_bool);
	var_420_bool = var_411_bool;
	if(var_420_bool != 0) {
		var_403_int = -2;
		return 8;
	}
	DoDialog(var_410_object);
	var_421_object = Obj(); var_422_object = Obj();
	var_404_object = var_421_object;
	var_410_object = var_422_object;
	TaskCall(9);
	func_3134(var_423_object, var_424_object, var_425_string, var_426_bool, var_421_object, var_422_object);
	TaskReturn();
	@@var_410_object:IsDialogEnd(var_413_bool);
	
Label_3116:
	var_470_bool = var_413_bool == 0; //@nz
	if(var_470_bool != 0) {
		sync();
		@@var_410_object:IsDialogEnd(var_413_bool);
		goto Label_3116;
	}
	var_404_object = Obj();
	func_5620();
	StopDialog(var_410_object);
	@@var_410_object:GetReturnValue((int)-1);
	var_412_int = var_403_int;
	return 8;
}
EMIT "Stack[-4] = 0";


