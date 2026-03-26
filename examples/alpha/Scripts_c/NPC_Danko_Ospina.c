// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Disappointment|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Ospina.png|W:ood1Ospina1|W:ood1Ospina2|W:ood1Ospina3|W:d1q03KapellaGotoOspina|A:FindMark|A:Remove|W:d1q03MladVladGotoOspina|W:quest_d1_03|W:kapella_finish|W:ood1Ospina4|W:ood1Ospina5|W:ood1Ospina6|W:ood3Ospina1|W:ood3Ospina2|W:ood3Ospina3|W:d3q01|W:d3q01OspinaGotoBigVlad|W:pt_map_bigvlad|A:AddMark|W:d3q01OspinaGotoBigVladSelf|W:pt_map_ospina|W:ood3Ospina4|W:d3q01OspinaButchersWillHelpSelf|W:quest_d3_01|W:place_butchers|A:ShowMap|W:pt_map_lara|W:d4q01_subquest|W:d4q01OspinaGotoLara|W:ood4Ospina1|W:ood4Ospina2|W:ood6Ospina1|W:ood6Ospina2|W:d8q01MladVladIsBad|W:ood8Ospina1|W:ood8Ospina2|W:ospina blood is given|W:d6q01_ospina_blood|W:playsound|W:giveitem|W:d6q01OspinaVolonteer|W:d6q01AlexandrGotoJulia|W:d6q01AlexandrGotoKaterina|W:d6q01AlexandrGotoLara|W:d6q01AlexangrGotoJulLaraSelf|W:d6q01BigVladGotoAnna|W:d6q01BigVladGotoAnnaOspinaSelf|W:d6q01BigVladGotoOspina|W:d6q01KaterinaGotoLaska|W:d6q01KaterinagotoLaskaSelf|W:d6q01KillerIsKlara|W:d6q01LaskaGotoAlbinos|W:d6q01ViktorGotoAlexandr|W:d6q01ViktorGotoAlxBigSelf|W:d6q01ViktorGotoBigVlad|W:quest_d6_01|W:completed|W:KnowOspina|W:d1q01FirstGeorgVisit|W:d1q03|W:d6q01|W:d8q01|W:microscope_d6q01_ospina_blood|W:KnowBigVlad|W:KnowKaterina|W:KnowLaska|W:KnowMladVlad|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0x20d vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x52e vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa29 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd43 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe66 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x105b vars=int,int
// @PE: 0x23,0x29,0x70,0xb4,0xc4,0x18e,0x1fd,0x20d,0x45f,0x51e,0x52e,0x997,0xa19,0xa29,0xcf9,0xd33,0xd43,0xdfb,0xe56,0xe66,0xff8,0x104b,0x105b,0x1294,0x12f4,0x1309,0x130f,0x1315,0x1336,0x133c,0x1342,0x1348,0x134e,0x1354,0x137a,0x139c,0x13ac,0x13d0,0x13d6,0x13dc,0x13e2,0x13e8,0x13ee,0x13f7,0x13fd,0x1403,0x1411,0x14a5,0x14ab,0x14b7,0x14c3,0x14cf,0x14db,0x14e7,0x14f3,0x14ff,0x150b,0x1517,0x1523,0x152f,0x153b,0x1547,0x1553,0x155f,0x156b,0x1577,0x1583,0x158f,0x159b,0x15a7,0x15b3,0x15bf,0x15cb,0x15d7,0x15e3,0x15ef,0x15fb,0x1607,0x1613,0x16f1

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
	func_5873(var_36_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_bool = var_37_object;
	func_4683(var_36_bool, var_37_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4778();
		var_40_bool = var_35_string == (int)362;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5285();
			var_45_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)311, (int)370, (int)364);
			@@@var_0_object:AddReply((int)312, (int)366, (int)365);
			@@@var_0_object:AddReply((int)310, (int)369, (int)363);
			return 0;
		}
		var_71_bool = var_35_string == (int)369;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)316);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6268, (int)-1, (int)6938);
			return 0;
		}
		var_78_bool = var_35_string == (int)366;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)314, (int)370, (int)367);
			@@@var_0_object:AddReply((int)315, (int)370, (int)368);
			return 0;
		}
		var_88_bool = var_35_string == (int)370;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)319, (int)374, (int)372);
			@@@var_0_object:AddReply((int)318, (int)374, (int)371);
			return 0;
		}
		var_98_bool = var_35_string == (int)374;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)322, (int)-1, (int)376);
			@@@var_0_object:AddReply((int)323, (int)-1, (int)377);
			return 0;
		}
		var_3_string = true;
		var_107_bool = 0;
		func_4871(var_107_bool);
		if(var_107_bool != 0) {
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
		func_4778();
		var_40_bool = var_36_bool == (int)3869;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5090();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5137();
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_5123(var_50_object);
		}
		var_94_bool = var_36_bool == (int)3872;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_5090();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_5137();
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_5123(var_100_object);
		}
		var_102_bool = var_36_bool == (int)3870;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_5090();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_5123(var_106_object);
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_5137();
		}
		var_110_bool = var_36_bool == (int)3860;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_5090();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_5137();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_5123(var_116_object);
		}
		var_118_bool = var_36_bool == (int)3856;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_5090();
		}
		var_122_bool = var_36_bool == (int)3857;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_5090();
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_5123(var_126_object);
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_5137();
		}
		var_130_bool = var_36_bool == (int)13923;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_5096();
		}
		var_136_bool = var_36_bool == (int)11938;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_5143();
		}
		var_214_bool = var_36_bool == (int)11939;
		if(var_214_bool != 0) {
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_5143();
		}
		var_218_bool = var_35_string == (int)13922;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12729);
			@@@var_0_object:ClearReplies();
			var_235_bool = 0;
			var_235_bool = 0;
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_5519(var_237_object);
			if(var_236_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_5507(var_245_object);
				if(var_244_bool != 0) {
					var_235_bool = 1;
				}
			}
			if(var_235_bool != 0) {
				@@@var_0_object:AddReply((int)12731, (int)3851, (int)13924);
			}
			var_253_bool = 0;
			var_253_bool = 0;
			var_254_bool = 0;
			var_254_bool = 0;
			var_255_bool = 0;
			var_255_bool = 0;
			var_256_bool = 0; var_257_object = Obj();
			var_257_object = var_1_object;
			func_5531(var_257_object);
			if(var_256_bool != 0) {
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_5579(var_263_object);
				if(var_262_bool != 0) {
					var_255_bool = 1;
				}
			}
			if(var_255_bool != 0) {
				var_268_bool = 0; var_269_object = Obj();
				var_269_object = var_1_object;
				func_5591(var_269_object);
				var_274_bool = var_268_bool == 0; //@nz
				if(var_274_bool != 0) {
					var_254_bool = 1;
				}
			}
			if(var_254_bool != 0) {
				var_275_bool = 0; var_276_object = Obj();
				var_276_object = var_1_object;
				func_5603(var_276_object);
				var_281_bool = var_275_bool == 0; //@nz
				if(var_281_bool != 0) {
					var_253_bool = 1;
				}
			}
			if(var_253_bool != 0) {
				@@@var_0_object:AddReply((int)12730, (int)11927, (int)13923);
			}
			@@@var_0_object:AddReply((int)12732, (int)-1, (int)13926);
			return 0;
		}
		var_289_bool = var_35_string == (int)11927;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10791);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10792, (int)11929, (int)11928);
			@@@var_0_object:AddReply((int)10810, (int)11929, (int)11950);
			return 0;
		}
		var_299_bool = var_35_string == (int)11929;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10794, (int)11931, (int)11930);
			@@@var_0_object:AddReply((int)10808, (int)11931, (int)11946);
			@@@var_0_object:AddReply((int)10809, (int)11931, (int)11948);
			return 0;
		}
		var_312_bool = var_35_string == (int)11931;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10795);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10796, (int)11933, (int)11932);
			@@@var_0_object:AddReply((int)10807, (int)11933, (int)11945);
			return 0;
		}
		var_322_bool = var_35_string == (int)11933;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10798, (int)11935, (int)11934);
			@@@var_0_object:AddReply((int)10806, (int)11937, (int)11943);
			return 0;
		}
		var_332_bool = var_35_string == (int)11935;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_509(var_36_bool, "Disappointment");
			@@@var_0_object:SetMessage((int)10799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10800, (int)11937, (int)11936);
			@@@var_0_object:AddReply((int)10805, (int)11937, (int)11941);
			return 0;
		}
		var_342_bool = var_35_string == (int)11937;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10801);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10802, (int)-1, (int)11938);
			@@@var_0_object:AddReply((int)10803, (int)-1, (int)11939);
			@@@var_0_object:AddReply((int)10804, (int)-1, (int)11940);
			return 0;
		}
		var_355_bool = var_35_string == (int)3851;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3562);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3563, (int)3858, (int)3852);
			@@@var_0_object:AddReply((int)3564, (int)3858, (int)3853);
			@@@var_0_object:AddReply((int)3565, (int)3855, (int)3854);
			return 0;
		}
		var_368_bool = var_35_string == (int)3855;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3567, (int)-1, (int)3856);
			@@@var_0_object:AddReply((int)3568, (int)-1, (int)3857);
			return 0;
		}
		var_378_bool = var_35_string == (int)3858;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3571, (int)3862, (int)3861);
			@@@var_0_object:AddReply((int)3582, (int)3874, (int)3873);
			@@@var_0_object:AddReply((int)3570, (int)-1, (int)3860);
			return 0;
		}
		var_391_bool = var_35_string == (int)3874;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3584, (int)3867, (int)3875);
			return 0;
		}
		var_398_bool = var_35_string == (int)3862;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3573, (int)3864, (int)3863);
			@@@var_0_object:AddReply((int)3576, (int)3867, (int)3866);
			return 0;
		}
		var_408_bool = var_35_string == (int)3864;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3574);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3575, (int)3867, (int)3865);
			@@@var_0_object:AddReply((int)3579, (int)-1, (int)3870);
			return 0;
		}
		var_418_bool = var_35_string == (int)3867;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_509(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3578, (int)-1, (int)3869);
			@@@var_0_object:AddReply((int)3581, (int)-1, (int)3872);
			return 0;
		}
		var_3_string = true;
		var_427_bool = 0;
		func_4871(var_427_bool);
		if(var_427_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x20e";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4778();
		var_40_bool = var_36_bool == (int)6645;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4873();
		}
		var_46_bool = var_36_bool == (int)6653;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4873();
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_4891();
		}
		var_73_bool = var_36_bool == (int)6312;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_4879();
		}
		var_79_bool = var_36_bool == (int)6313;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_4879();
		}
		var_83_bool = var_36_bool == (int)6314;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_4879();
		}
		var_87_bool = var_36_bool == (int)6319;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_4879();
		}
		var_91_bool = var_36_bool == (int)6320;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_4879();
		}
		var_95_bool = var_36_bool == (int)6321;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_4879();
		}
		var_99_bool = var_36_bool == (int)6327;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_4885();
		}
		var_105_bool = var_36_bool == (int)6328;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_4885();
		}
		var_109_bool = var_36_bool == (int)6329;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_4885();
		}
		var_113_bool = var_36_bool == (int)6332;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_4885();
		}
		var_117_bool = var_36_bool == (int)6333;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_4885();
		}
		var_121_bool = var_36_bool == (int)9456;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_4918();
		}
		var_127_bool = var_36_bool == (int)9453;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_4918();
		}
		var_131_bool = var_36_bool == (int)9469;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_4924();
		}
		var_137_bool = var_36_bool == (int)9466;
		if(var_137_bool != 0) {
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_4924();
		}
		var_141_bool = var_36_bool == (int)9474;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_4930();
		}
		var_147_bool = var_35_string == (int)6305;
		if(var_147_bool != 0) {
			var_148_bool = 0;
			var_148_bool = 0;
			var_149_bool = 0; var_150_object = Obj();
			var_150_object = var_1_object;
			func_5291(var_150_object);
			if(var_149_bool != 0) {
				var_157_bool = 0; var_158_object = Obj();
				var_158_object = var_1_object;
				func_5339(var_158_object);
				if(var_157_bool != 0) {
					var_148_bool = 1;
				}
			}
			if(var_148_bool != 0) {
				var_163_string = "";
				func_1310(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5721);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5722, (int)6334, (int)6306);
				@@@var_0_object:AddReply((int)6003, (int)6615, (int)6614);
				return 0;
			}
			var_185_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8287);
			@@@var_0_object:ClearReplies();
			var_187_bool = 0;
			var_187_bool = 0;
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_5303(var_189_object);
			if(var_188_bool != 0) {
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_object;
				func_5327(var_195_object);
				if(var_194_bool != 0) {
					var_187_bool = 1;
				}
			}
			if(var_187_bool != 0) {
				@@@var_0_object:AddReply((int)8288, (int)6307, (int)9111);
			}
			var_203_bool = 0; var_204_object = Obj();
			var_204_object = var_1_object;
			func_5315(var_204_object);
			if(var_203_bool != 0) {
				@@@var_0_object:AddReply((int)8291, (int)6322, (int)9114);
			}
			var_212_bool = 0;
			var_212_bool = 0;
			var_213_bool = 0; var_214_object = Obj();
			var_214_object = var_1_object;
			func_5627(var_214_object);
			if(var_213_bool != 0) {
				var_219_bool = 0; var_220_object = Obj();
				var_220_object = var_1_object;
				func_5351(var_220_object);
				if(var_219_bool != 0) {
					var_212_bool = 1;
				}
			}
			if(var_212_bool != 0) {
				@@@var_0_object:AddReply((int)8299, (int)9137, (int)9122);
			}
			var_228_bool = 0;
			var_228_bool = 1;
			var_229_bool = 0;
			var_229_bool = 0;
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_5651(var_231_object);
			if(var_230_bool != 0) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_5363(var_237_object);
				if(var_236_bool != 0) {
					var_229_bool = 1;
				}
			}
			if(var_229_bool != 1) {
				var_242_bool = 0;
				var_242_bool = 0;
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_5615(var_244_object);
				if(var_243_bool != 0) {
					var_249_bool = 0; var_250_object = Obj();
					var_250_object = var_1_object;
					func_5363(var_250_object);
					if(var_249_bool != 0) {
						var_242_bool = 1;
					}
				}
				if(var_242_bool != 1) {
					var_228_bool = 0;
				}
			}
			if(var_228_bool != 0) {
				@@@var_0_object:AddReply((int)8302, (int)9457, (int)9125);
			}
			var_254_bool = 0;
			var_254_bool = 0;
			var_255_bool = 0; var_256_object = Obj();
			var_256_object = var_1_object;
			func_5639(var_256_object);
			if(var_255_bool != 0) {
				var_261_bool = 0; var_262_object = Obj();
				var_262_object = var_1_object;
				func_5375(var_262_object);
				if(var_261_bool != 0) {
					var_254_bool = 1;
				}
			}
			if(var_254_bool != 0) {
				@@@var_0_object:AddReply((int)8310, (int)9140, (int)9133);
			}
			@@@var_0_object:AddReply((int)8723, (int)-1, (int)9560);
			return 0;
		}
		var_274_bool = var_35_string == (int)9140;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8623, (int)9471, (int)9470);
			return 0;
		}
		var_281_bool = var_35_string == (int)9471;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8624);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8625, (int)9473, (int)9472);
			return 0;
		}
		var_288_bool = var_35_string == (int)9473;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8627, (int)-1, (int)9474);
			return 0;
		}
		var_295_bool = var_35_string == (int)9457;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8610);
			@@@var_0_object:ClearReplies();
			var_298_bool = 0; var_299_object = Obj();
			var_299_object = var_1_object;
			func_5615(var_299_object);
			if(var_298_bool != 0) {
				@@@var_0_object:AddReply((int)8611, (int)9462, (int)9458);
			}
			var_303_bool = 0; var_304_object = Obj();
			var_304_object = var_1_object;
			func_5651(var_304_object);
			if(var_303_bool != 0) {
				@@@var_0_object:AddReply((int)8612, (int)9460, (int)9459);
			}
			return 0;
		}
		var_309_bool = var_35_string == (int)9460;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8614, (int)9139, (int)9461);
			return 0;
		}
		var_316_bool = var_35_string == (int)9139;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8316);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8617, (int)9465, (int)9464);
			return 0;
		}
		var_323_bool = var_35_string == (int)9465;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8618);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8619, (int)-1, (int)9466);
			return 0;
		}
		var_330_bool = var_35_string == (int)9462;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8616, (int)9138, (int)9463);
			return 0;
		}
		var_337_bool = var_35_string == (int)9138;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8620, (int)9468, (int)9467);
			return 0;
		}
		var_344_bool = var_35_string == (int)9468;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8621);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8622, (int)-1, (int)9469);
			return 0;
		}
		var_351_bool = var_35_string == (int)9137;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8604, (int)9452, (int)9451);
			return 0;
		}
		var_358_bool = var_35_string == (int)9452;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8605);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8607, (int)9455, (int)9454);
			@@@var_0_object:AddReply((int)8606, (int)-1, (int)9453);
			return 0;
		}
		var_368_bool = var_35_string == (int)9455;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8609, (int)-1, (int)9456);
			return 0;
		}
		var_375_bool = var_35_string == (int)6322;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5738, (int)6324, (int)6323);
			@@@var_0_object:AddReply((int)5745, (int)6331, (int)6330);
			return 0;
		}
		var_385_bool = var_35_string == (int)6331;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5746);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5747, (int)-1, (int)6332);
			@@@var_0_object:AddReply((int)5748, (int)-1, (int)6333);
			return 0;
		}
		var_395_bool = var_35_string == (int)6324;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5740, (int)6326, (int)6325);
			@@@var_0_object:AddReply((int)5744, (int)-1, (int)6329);
			return 0;
		}
		var_405_bool = var_35_string == (int)6326;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5742, (int)-1, (int)6327);
			@@@var_0_object:AddReply((int)5743, (int)-1, (int)6328);
			return 0;
		}
		var_415_bool = var_35_string == (int)6307;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5724, (int)6309, (int)6308);
			@@@var_0_object:AddReply((int)5732, (int)6318, (int)6317);
			@@@var_0_object:AddReply((int)5736, (int)-1, (int)6321);
			return 0;
		}
		var_428_bool = var_35_string == (int)6318;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5733);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5734, (int)-1, (int)6319);
			@@@var_0_object:AddReply((int)5735, (int)-1, (int)6320);
			return 0;
		}
		var_438_bool = var_35_string == (int)6309;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5725);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5726, (int)6311, (int)6310);
			@@@var_0_object:AddReply((int)5730, (int)-1, (int)6314);
			@@@var_0_object:AddReply((int)5731, (int)6311, (int)6315);
			return 0;
		}
		var_451_bool = var_35_string == (int)6311;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5727);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5728, (int)-1, (int)6312);
			@@@var_0_object:AddReply((int)5729, (int)-1, (int)6313);
			return 0;
		}
		var_461_bool = var_35_string == (int)6615;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6004);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6005, (int)6618, (int)6616);
			@@@var_0_object:AddReply((int)6006, (int)6625, (int)6617);
			return 0;
		}
		var_471_bool = var_35_string == (int)6618;
		if(var_471_bool != 0) {
			var_472_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6007);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6011, (int)6625, (int)6622);
			@@@var_0_object:AddReply((int)6015, (int)6625, (int)6628);
			return 0;
		}
		var_481_bool = var_35_string == (int)6334;
		if(var_481_bool != 0) {
			var_482_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6008, (int)6621, (int)6619);
			@@@var_0_object:AddReply((int)6009, (int)6621, (int)6620);
			return 0;
		}
		var_491_bool = var_35_string == (int)6621;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6010);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6016, (int)6632, (int)6631);
			@@@var_0_object:AddReply((int)6013, (int)6625, (int)6624);
			return 0;
		}
		var_501_bool = var_35_string == (int)6625;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6014);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6018, (int)6632, (int)6633);
			return 0;
		}
		var_508_bool = var_35_string == (int)6632;
		if(var_508_bool != 0) {
			var_509_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6017);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6019, (int)6636, (int)6634);
			@@@var_0_object:AddReply((int)6020, (int)6637, (int)6635);
			@@@var_0_object:AddReply((int)6039, (int)6661, (int)6660);
			return 0;
		}
		var_521_bool = var_35_string == (int)6661;
		if(var_521_bool != 0) {
			var_522_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6041, (int)6636, (int)6662);
			return 0;
		}
		var_528_bool = var_35_string == (int)6637;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6022);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6023, (int)6641, (int)6638);
			@@@var_0_object:AddReply((int)6027, (int)6652, (int)6642);
			@@@var_0_object:AddReply((int)6029, (int)6647, (int)6646);
			return 0;
		}
		var_541_bool = var_35_string == (int)6647;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6031, (int)6652, (int)6648);
			@@@var_0_object:AddReply((int)6032, (int)6650, (int)6649);
			return 0;
		}
		var_551_bool = var_35_string == (int)6650;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6033);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6034, (int)6652, (int)6651);
			@@@var_0_object:AddReply((int)6037, (int)6641, (int)6655);
			return 0;
		}
		var_561_bool = var_35_string == (int)6652;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6035);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6036, (int)-1, (int)6653);
			@@@var_0_object:AddReply((int)6038, (int)6641, (int)6656);
			return 0;
		}
		var_571_bool = var_35_string == (int)6636;
		if(var_571_bool != 0) {
			var_572_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6021);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6024, (int)6641, (int)6639);
			@@@var_0_object:AddReply((int)6025, (int)6641, (int)6640);
			return 0;
		}
		var_581_bool = var_35_string == (int)6641;
		if(var_581_bool != 0) {
			var_582_string = "";
			func_1310(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6026);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6028, (int)-1, (int)6645);
			return 0;
		}
		var_3_string = true;
		var_587_bool = 0;
		func_4871(var_587_bool);
		if(var_587_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x52f";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4778();
		var_40_bool = var_36_bool == (int)9768;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4954();
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_4942();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_5020(var_96_object);
		}
		var_122_bool = var_36_bool == (int)9769;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_4942();
		}
		var_126_bool = var_36_bool == (int)9760;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_4942();
		}
		var_130_bool = var_36_bool == (int)9762;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_4942();
		}
		var_134_bool = var_36_bool == (int)12327;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_4954();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_4986();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_5020(var_142_object);
		}
		var_144_bool = var_36_bool == (int)9736;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_4936();
		}
		var_150_bool = var_36_bool == (int)9737;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_4936();
		}
		var_154_bool = var_36_bool == (int)9738;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_4936();
		}
		var_158_bool = var_36_bool == (int)9745;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_4936();
		}
		var_162_bool = var_36_bool == (int)9746;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_4936();
		}
		var_166_bool = var_36_bool == (int)9788;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_4948();
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_4992();
		}
		var_199_bool = var_36_bool == (int)9789;
		if(var_199_bool != 0) {
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_4948();
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_4992();
		}
		var_205_bool = var_35_string == (int)9728;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8869);
			@@@var_0_object:ClearReplies();
			var_222_bool = 0;
			var_222_bool = 0;
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_5399(var_224_object);
			if(var_223_bool != 0) {
				var_231_bool = 0; var_232_object = Obj();
				var_232_object = var_1_object;
				func_5435(var_232_object);
				if(var_231_bool != 0) {
					var_222_bool = 1;
				}
			}
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)8889, (int)9751, (int)9750);
			}
			var_240_bool = 0;
			var_240_bool = 0;
			var_241_bool = 0;
			var_241_bool = 0;
			var_242_bool = 0; var_243_object = Obj();
			var_243_object = var_1_object;
			func_5423(var_243_object);
			if(var_242_bool != 0) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_5399(var_249_object);
				var_250_bool = var_248_bool == 0; //@nz
				if(var_250_bool != 0) {
					var_241_bool = 1;
				}
			}
			if(var_241_bool != 0) {
				var_251_bool = 0; var_252_object = Obj();
				var_252_object = var_1_object;
				func_5435(var_252_object);
				if(var_251_bool != 0) {
					var_240_bool = 1;
				}
			}
			if(var_240_bool != 0) {
				@@@var_0_object:AddReply((int)11136, (int)12326, (int)12325);
			}
			var_256_bool = 0; var_257_object = Obj();
			var_257_object = var_1_object;
			func_5387(var_257_object);
			if(var_256_bool != 0) {
				@@@var_0_object:AddReply((int)8888, (int)9729, (int)9749);
			}
			var_265_bool = 0;
			var_265_bool = 0;
			var_266_bool = 0; var_267_object = Obj();
			var_267_object = var_1_object;
			func_5411(var_267_object);
			if(var_266_bool != 0) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_5447(var_273_object);
				if(var_272_bool != 0) {
					var_265_bool = 1;
				}
			}
			if(var_265_bool != 0) {
				@@@var_0_object:AddReply((int)8908, (int)9772, (int)9771);
			}
			@@@var_0_object:AddReply((int)11134, (int)-1, (int)12323);
			return 0;
		}
		var_285_bool = var_35_string == (int)9772;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8909);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8913, (int)9778, (int)9777);
			@@@var_0_object:AddReply((int)8910, (int)9775, (int)9773);
			@@@var_0_object:AddReply((int)8911, (int)9775, (int)9774);
			return 0;
		}
		var_298_bool = var_35_string == (int)9775;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8915, (int)-1, (int)9779);
			return 0;
		}
		var_305_bool = var_35_string == (int)9778;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8916, (int)9781, (int)9780);
			@@@var_0_object:AddReply((int)8918, (int)9783, (int)9782);
			return 0;
		}
		var_315_bool = var_35_string == (int)9783;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8920, (int)9786, (int)9784);
			return 0;
		}
		var_322_bool = var_35_string == (int)9781;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8921, (int)9786, (int)9785);
			return 0;
		}
		var_329_bool = var_35_string == (int)9786;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8923, (int)-1, (int)9788);
			@@@var_0_object:AddReply((int)8924, (int)-1, (int)9789);
			return 0;
		}
		var_339_bool = var_35_string == (int)9729;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8871, (int)9731, (int)9730);
			@@@var_0_object:AddReply((int)8887, (int)9731, (int)9747);
			return 0;
		}
		var_349_bool = var_35_string == (int)9731;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8873, (int)9733, (int)9732);
			@@@var_0_object:AddReply((int)8880, (int)9740, (int)9739);
			return 0;
		}
		var_359_bool = var_35_string == (int)9740;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8882, (int)9733, (int)9741);
			@@@var_0_object:AddReply((int)8883, (int)9744, (int)9743);
			return 0;
		}
		var_369_bool = var_35_string == (int)9744;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8885, (int)-1, (int)9745);
			@@@var_0_object:AddReply((int)8886, (int)-1, (int)9746);
			return 0;
		}
		var_379_bool = var_35_string == (int)9733;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8875, (int)9735, (int)9734);
			@@@var_0_object:AddReply((int)8879, (int)-1, (int)9738);
			return 0;
		}
		var_389_bool = var_35_string == (int)9735;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8877, (int)-1, (int)9736);
			@@@var_0_object:AddReply((int)8878, (int)-1, (int)9737);
			return 0;
		}
		var_399_bool = var_35_string == (int)12326;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11137);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11138, (int)-1, (int)12327);
			return 0;
		}
		var_406_bool = var_35_string == (int)9751;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8891, (int)9753, (int)9752);
			@@@var_0_object:AddReply((int)8893, (int)9759, (int)9754);
			return 0;
		}
		var_416_bool = var_35_string == (int)9759;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8898);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8899, (int)-1, (int)9760);
			@@@var_0_object:AddReply((int)8900, (int)-1, (int)9762);
			return 0;
		}
		var_426_bool = var_35_string == (int)9753;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8894, (int)9756, (int)9755);
			return 0;
		}
		var_433_bool = var_35_string == (int)9756;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8896, (int)9763, (int)9757);
			@@@var_0_object:AddReply((int)8897, (int)9759, (int)9758);
			return 0;
		}
		var_443_bool = var_35_string == (int)9763;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8902, (int)9766, (int)9764);
			@@@var_0_object:AddReply((int)8903, (int)9766, (int)9765);
			return 0;
		}
		var_453_bool = var_35_string == (int)9766;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_2585(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8905, (int)-1, (int)9768);
			@@@var_0_object:AddReply((int)8906, (int)-1, (int)9769);
			return 0;
		}
		var_3_string = true;
		var_462_bool = 0;
		func_4871(var_462_bool);
		if(var_462_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2a";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4778();
		var_40_bool = var_35_string == (int)10322;
		if(var_40_bool != 0) {
			var_41_string = "";
			func_3379(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9394);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9395, (int)10324, (int)10323);
			@@@var_0_object:AddReply((int)9407, (int)10328, (int)10335);
			return 0;
		}
		var_64_bool = var_35_string == (int)10324;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_3379(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9397, (int)10326, (int)10325);
			@@@var_0_object:AddReply((int)9405, (int)-1, (int)10333);
			@@@var_0_object:AddReply((int)9406, (int)-1, (int)10334);
			return 0;
		}
		var_77_bool = var_35_string == (int)10326;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3379(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9398);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9399, (int)10328, (int)10327);
			@@@var_0_object:AddReply((int)9403, (int)-1, (int)10331);
			@@@var_0_object:AddReply((int)9404, (int)-1, (int)10332);
			return 0;
		}
		var_90_bool = var_35_string == (int)10328;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_3379(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9400);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9401, (int)-1, (int)10329);
			@@@var_0_object:AddReply((int)9402, (int)-1, (int)10330);
			return 0;
		}
		var_3_string = true;
		var_99_bool = 0;
		func_4871(var_99_bool);
		if(var_99_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd44";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4778();
		var_40_bool = var_36_bool == (int)12266;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5072();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5052();
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_5036(var_66_object);
		}
		var_92_bool = var_36_bool == (int)12267;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_5072();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_5052();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_5036(var_98_object);
		}
		var_100_bool = var_36_bool == (int)12281;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_5084();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_5078();
		}
		var_110_bool = var_35_string == (int)12246;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11065);
			@@@var_0_object:ClearReplies();
			var_127_bool = 0;
			var_127_bool = 0;
			var_128_bool = 0; var_129_object = Obj();
			var_129_object = var_1_object;
			func_5471(var_129_object);
			if(var_128_bool != 0) {
				var_136_bool = 0; var_137_object = Obj();
				var_137_object = var_1_object;
				func_5459(var_137_object);
				if(var_136_bool != 0) {
					var_127_bool = 1;
				}
			}
			if(var_127_bool != 0) {
				@@@var_0_object:AddReply((int)11066, (int)12248, (int)12247);
			}
			var_145_bool = 0;
			var_145_bool = 0;
			var_146_bool = 0; var_147_object = Obj();
			var_147_object = var_1_object;
			func_5495(var_147_object);
			if(var_146_bool != 0) {
				var_152_bool = 0; var_153_object = Obj();
				var_153_object = var_1_object;
				func_5483(var_153_object);
				if(var_152_bool != 0) {
					var_145_bool = 1;
				}
			}
			if(var_145_bool != 0) {
				@@@var_0_object:AddReply((int)11079, (int)12268, (int)12263);
			}
			@@@var_0_object:AddReply((int)11505, (int)-1, (int)12707);
			return 0;
		}
		var_165_bool = var_35_string == (int)12268;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11083);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11084, (int)12271, (int)12269);
			@@@var_0_object:AddReply((int)11085, (int)12272, (int)12270);
			return 0;
		}
		var_175_bool = var_35_string == (int)12272;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11088, (int)12275, (int)12273);
			return 0;
		}
		var_182_bool = var_35_string == (int)12271;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11089, (int)12275, (int)12274);
			return 0;
		}
		var_189_bool = var_35_string == (int)12275;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11091, (int)12279, (int)12276);
			@@@var_0_object:AddReply((int)11092, (int)12279, (int)12277);
			return 0;
		}
		var_199_bool = var_35_string == (int)12279;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11094, (int)-1, (int)12281);
			return 0;
		}
		var_206_bool = var_35_string == (int)12248;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11067);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11068, (int)12250, (int)12249);
			@@@var_0_object:AddReply((int)11073, (int)12255, (int)12254);
			return 0;
		}
		var_216_bool = var_35_string == (int)12250;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11069);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11070, (int)12257, (int)12251);
			@@@var_0_object:AddReply((int)11071, (int)12257, (int)12252);
			@@@var_0_object:AddReply((int)11072, (int)12255, (int)12253);
			return 0;
		}
		var_229_bool = var_35_string == (int)12255;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11075, (int)12257, (int)12256);
			return 0;
		}
		var_236_bool = var_35_string == (int)12257;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11077, (int)12264, (int)12261);
			@@@var_0_object:AddReply((int)11078, (int)12264, (int)12262);
			return 0;
		}
		var_246_bool = var_35_string == (int)12264;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_3670(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11080);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11081, (int)-1, (int)12266);
			@@@var_0_object:AddReply((int)11082, (int)-1, (int)12267);
			return 0;
		}
		var_3_string = true;
		var_255_bool = 0;
		func_4871(var_255_bool);
		if(var_255_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe67";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	if((int)1 != 0) {
		func_4778();
		var_40_bool = var_36_int == (int)14897;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5117();
		}
		var_46_bool = var_36_int == (int)14911;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5102();
		}
		var_77_bool = var_36_int == (int)13535;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_5111();
		}
		var_83_bool = var_35_int == (int)13534;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12374);
			@@@var_0_object:ClearReplies();
			var_100_bool = 0;
			var_100_bool = 0;
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_5543(var_102_object);
			var_109_bool = var_101_bool == 0; //@nz
			if(var_109_bool != 0) {
				var_110_bool = 0; var_111_object = Obj();
				var_111_object = var_1_object;
				func_5567(var_111_object);
				if(var_110_bool != 0) {
					var_100_bool = 1;
				}
			}
			if(var_100_bool != 0) {
				@@@var_0_object:AddReply((int)13641, (int)14898, (int)14897);
			}
			var_119_bool = 0; var_120_object = Obj();
			var_120_object = var_1_object;
			func_5555(var_120_object);
			if(var_119_bool != 0) {
				@@@var_0_object:AddReply((int)12375, (int)13536, (int)13535);
			}
			@@@var_0_object:AddReply((int)13658, (int)-1, (int)14916);
			return 0;
		}
		var_132_bool = var_35_int == (int)13536;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12378, (int)13544, (int)13538);
			@@@var_0_object:AddReply((int)12377, (int)13539, (int)13537);
			return 0;
		}
		var_142_bool = var_35_int == (int)13539;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12380, (int)13541, (int)13540);
			return 0;
		}
		var_149_bool = var_35_int == (int)13541;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12382, (int)-1, (int)13542);
			@@@var_0_object:AddReply((int)12383, (int)-1, (int)13543);
			return 0;
		}
		var_159_bool = var_35_int == (int)13544;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12385, (int)13552, (int)13545);
			@@@var_0_object:AddReply((int)12386, (int)13547, (int)13546);
			return 0;
		}
		var_169_bool = var_35_int == (int)13547;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12388, (int)13550, (int)13548);
			@@@var_0_object:AddReply((int)12389, (int)13550, (int)13549);
			return 0;
		}
		var_179_bool = var_35_int == (int)13550;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12390);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12391, (int)-1, (int)13551);
			return 0;
		}
		var_186_bool = var_35_int == (int)13552;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12393, (int)13559, (int)13554);
			@@@var_0_object:AddReply((int)12394, (int)13557, (int)13555);
			@@@var_0_object:AddReply((int)12395, (int)13558, (int)13556);
			return 0;
		}
		var_199_bool = var_35_int == (int)13558;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12397);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12403, (int)13565, (int)13564);
			return 0;
		}
		var_206_bool = var_35_int == (int)13557;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12402, (int)13565, (int)13563);
			return 0;
		}
		var_213_bool = var_35_int == (int)13559;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12398);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12399, (int)13561, (int)13560);
			return 0;
		}
		var_220_bool = var_35_int == (int)13561;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12400);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12401, (int)13565, (int)13562);
			return 0;
		}
		var_227_bool = var_35_int == (int)13565;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12405, (int)13570, (int)13568);
			@@@var_0_object:AddReply((int)12406, (int)13570, (int)13569);
			return 0;
		}
		var_237_bool = var_35_int == (int)13570;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)12407);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12408, (int)-1, (int)13572);
			return 0;
		}
		var_244_bool = var_35_int == (int)14898;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13642);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13643, (int)14900, (int)14899);
			return 0;
		}
		var_251_bool = var_35_int == (int)14900;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13645, (int)14902, (int)14901);
			return 0;
		}
		var_258_bool = var_35_int == (int)14902;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13647, (int)14904, (int)14903);
			@@@var_0_object:AddReply((int)13649, (int)14906, (int)14905);
			return 0;
		}
		var_268_bool = var_35_int == (int)14906;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13652, (int)14907, (int)14908);
			return 0;
		}
		var_275_bool = var_35_int == (int)14904;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13651, (int)14909, (int)14907);
			@@@var_0_object:AddReply((int)13655, (int)14913, (int)14912);
			return 0;
		}
		var_285_bool = var_35_int == (int)14913;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13657, (int)14909, (int)14914);
			return 0;
		}
		var_292_bool = var_35_int == (int)14909;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_4171(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)13653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13654, (int)-1, (int)14911);
			return 0;
		}
		var_3_string = true;
		var_298_bool = 0;
		func_4871(var_298_bool);
		if(var_298_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x105c";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_5869();
	var_36_bool = 0;
	func_4695(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_40_string = "";
	func_4760("Neutral");
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


func_5123(var_49_object)
{
	func_5821();
	Trace("ospina blood is given");
	var_77_object = Obj(); var_78_string = ""; var_79_int = 0;
	var_49_object = var_77_object;
	func_4813(var_77_object, "d6q01_ospina_blood", (int)1);
	return 0;
}


func_4867(var_91_int)
{
	var_91_int = 2874;
	return 0;
}


func_4869(var_92_string)
{
	var_92_string = "ui/NPC_Ospina.png";
	return 0;
}


func_5639(var_255_bool)
{
	var_257_int = 0; var_258_string = "";
	func_4795(var_257_int, "KnowLaska");
	var_260_bool = var_257_int == (int)1;
	if(var_260_bool != 0) {
		var_255_bool = 1;
		return 0;
	}
	var_255_bool = 0;
	return 0;
}


func_4871(var_38_bool)
{
	var_38_bool = 1;
	return 0;
}


func_4873()
{
	SetVariable("ood1Ospina1", (int)1);
	return 0;
}


func_5387(var_256_bool)
{
	var_258_int = 0; var_259_string = "";
	func_4795(var_258_int, "ood3Ospina1");
	var_261_bool = var_258_int == (int)0;
	if(var_261_bool != 0) {
		var_256_bool = 1;
		return 0;
	}
	var_256_bool = 0;
	return 0;
}


func_4879()
{
	SetVariable("ood1Ospina2", (int)1);
	return 0;
}


func_5137()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5651(var_230_bool)
{
	var_232_int = 0; var_233_string = "";
	func_4795(var_232_int, "KnowMladVlad");
	var_235_bool = var_232_int == (int)1;
	if(var_235_bool != 0) {
		var_230_bool = 1;
		return 0;
	}
	var_230_bool = 0;
	return 0;
}


func_4885()
{
	SetVariable("ood1Ospina3", (int)1);
	return 0;
}


func_5143()
{
	var_139_object = Obj(); var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj();
	SetVariable("d6q01OspinaVolonteer", (int)1);
	func_5722(Obj());
	var_145_object = var_141_object;
	@@var_141_object:FindMark(var_142_object, "d6q01AlexandrGotoJulia");
	var_153_object = var_142_object;
	if(var_153_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01AlexandrGotoKaterina");
	var_155_object = var_142_object;
	if(var_155_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01AlexandrGotoLara");
	var_157_object = var_142_object;
	if(var_157_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01AlexangrGotoJulLaraSelf");
	var_159_object = var_142_object;
	if(var_159_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01BigVladGotoAnna");
	var_161_object = var_142_object;
	if(var_161_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01BigVladGotoAnnaOspinaSelf");
	var_163_object = var_142_object;
	if(var_163_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01BigVladGotoOspina");
	var_165_object = var_142_object;
	if(var_165_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01KaterinaGotoLaska");
	var_167_object = var_142_object;
	if(var_167_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01KaterinagotoLaskaSelf");
	var_169_object = var_142_object;
	if(var_169_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01KillerIsKlara");
	var_171_object = var_142_object;
	if(var_171_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01LaskaGotoAlbinos");
	var_173_object = var_142_object;
	if(var_173_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01ViktorGotoAlexandr");
	var_175_object = var_142_object;
	if(var_175_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01ViktorGotoAlxBigSelf");
	var_177_object = var_142_object;
	if(var_177_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d6q01ViktorGotoBigVlad");
	var_179_object = var_142_object;
	if(var_179_object != 0) {
		@@var_142_object:Remove();
	}
	func_5837();
	var_189_bool = 0; var_190_int = 0;
	func_5705(var_189_bool, (int)112);
	var_197_bool = 0; var_198_int = 0;
	func_5705(var_197_bool, (int)113);
	var_199_bool = 0; var_200_int = 0;
	func_5705(var_199_bool, (int)114);
	var_201_bool = 0; var_202_int = 0;
	func_5705(var_201_bool, (int)115);
	var_203_bool = 0; var_204_int = 0;
	func_5705(var_203_bool, (int)116);
	var_205_bool = 0; var_206_int = 0;
	func_5705(var_205_bool, (int)117);
	var_207_bool = 0; var_208_string = ""; var_209_string = "";
	func_4826(var_207_bool, "quest_d6_01", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5399(var_223_bool)
{
	var_225_int = 0; var_226_string = "";
	func_4795(var_225_int, "ood3Ospina2");
	var_230_bool = var_225_int == (int)0;
	if(var_230_bool != 0) {
		var_223_bool = 1;
		return 0;
	}
	var_223_bool = 0;
	return 0;
}


func_2585(var_2_object, var_206_string)
{
	var_207_bool = 0;
	func_4871(var_207_bool);
	var_208_bool = var_207_bool == 0; //@nz
	if(var_208_bool != 0) {
		return 0;
	}
	var_209_bool = var_206_string == var_2_object;
	if(var_209_bool != 0) {
		return 0;
	}
	var_210_string = "";
	var_206_string = var_210_string;
	func_4760(var_210_string);
	var_2_object = var_206_string;
	return 0;
}


func_4891()
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj();
	func_5722(Obj());
	var_55_object = var_53_object;
	@@var_53_object:FindMark(var_54_object, "d1q03KapellaGotoOspina");
	var_63_object = var_54_object;
	if(var_63_object != 0) {
		@@var_54_object:Remove();
	}
	@@var_53_object:FindMark(var_54_object, "d1q03MladVladGotoOspina");
	var_65_object = var_54_object;
	if(var_65_object != 0) {
		@@var_54_object:Remove();
	}
	var_66_bool = 0; var_67_string = ""; var_68_string = "";
	func_4826(var_66_bool, "quest_d1_03", "kapella_finish");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1310(var_2_object, var_163_string)
{
	var_164_bool = 0;
	func_4871(var_164_bool);
	var_165_bool = var_164_bool == 0; //@nz
	if(var_165_bool != 0) {
		return 0;
	}
	var_166_bool = var_163_string == var_2_object;
	if(var_166_bool != 0) {
		return 0;
	}
	var_167_string = "";
	var_163_string = var_167_string;
	func_4760(var_167_string);
	var_2_object = var_163_string;
	return 0;
}


func_5663(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj();
	GetDiaryRoot(var_68_object);
	var_69_bool = var_68_object == 0; //@nz
	if(var_69_bool != 0) {
		Trace("Can't retrieve diary root");
		var_66_object = 0;
		return 2;
	}
	var_68_object = var_66_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1056(var_0_object, var_157_int, var_158_object)
{
	var_160_object = Obj(); var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_object = Obj(); var_165_bool = 0; var_166_int = 0; var_167_bool = 0;
	var_0_object = var_158_object;
	var_168_bool = 0; var_169_object = Obj();
	var_158_object = var_169_object;
	func_4700(var_168_bool, var_169_object);
	var_170_bool = var_168_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_157_int = -2;
		return 8;
	}
	CreateDialog(var_164_object);
	var_171_int = 0;
	func_4867(var_171_int);
	@@var_164_object:SetNPCName(var_171_int);
	var_172_string = "";
	func_4869(var_172_string);
	@@var_164_object:SetPhoto(var_172_string);
	var_173_int = 0;
	func_5772(var_173_int);
	@@var_164_object:SetPlayerName(var_173_int);
	IsOverrideActive(var_165_bool);
	var_174_bool = var_165_bool;
	if(var_174_bool != 0) {
		var_157_int = -2;
		return 8;
	}
	DoDialog(var_164_object);
	var_175_object = Obj(); var_176_object = Obj();
	var_158_object = var_175_object;
	var_164_object = var_176_object;
	TaskCall(7);
	func_1119(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object);
	TaskReturn();
	@@var_164_object:IsDialogEnd(var_167_bool);
	
Label_1101:
	var_305_bool = var_167_bool == 0; //@nz
	if(var_305_bool != 0) {
		sync();
		@@var_164_object:IsDialogEnd(var_167_bool);
		goto Label_1101;
	}
	var_158_object = Obj();
	func_4756();
	StopDialog(var_164_object);
	@@var_164_object:GetReturnValue((int)-1);
	var_166_int = var_157_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5411(var_266_bool)
{
	var_268_int = 0; var_269_string = "";
	func_4795(var_268_int, "ood3Ospina3");
	var_271_bool = var_268_int == (int)0;
	if(var_271_bool != 0) {
		var_266_bool = 1;
		return 0;
	}
	var_266_bool = 0;
	return 0;
}


func_5676(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0;
	func_5663(Obj());
	var_66_object = var_63_object;
	@@var_63_object:Find(var_59_int, var_64_object);
	var_71_bool = var_64_object == 0; //@nz
	if(var_71_bool != 0) {
		var_73_int = "Can't find diary parent with id: " + var_59_int;
		Trace(var_73_int);
		var_57_bool = 0;
		return 6;
	}
	@@var_64_object:AddChild(var_58_object);
	SetVariable("player_diary", (int)1);
	@@var_58_object:GetCategory(var_65_int);
	SetDiarySection(var_65_int);
	var_57_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5423(var_242_bool)
{
	var_244_int = 0; var_245_string = "";
	func_4795(var_244_int, "ood3Ospina4");
	var_247_bool = var_244_int == (int)0;
	if(var_247_bool != 0) {
		var_242_bool = 1;
		return 0;
	}
	var_242_bool = 0;
	return 0;
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_0_object = var_40_object;
	var_50_bool = 0; var_51_object = Obj();
	var_40_object = var_51_object;
	func_4700(var_50_bool, var_51_object);
	var_90_bool = var_50_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	CreateDialog(var_46_object);
	var_91_int = 0;
	func_4867(var_91_int);
	@@var_46_object:SetNPCName(var_91_int);
	var_92_string = "";
	func_4869(var_92_string);
	@@var_46_object:SetPhoto(var_92_string);
	var_93_int = 0;
	func_5772(var_93_int);
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
	var_146_bool = var_49_bool == 0; //@nz
	if(var_146_bool != 0) {
		sync();
		@@var_46_object:IsDialogEnd(var_49_bool);
		goto Label_94;
	}
	var_40_object = Obj();
	func_4756();
	StopDialog(var_46_object);
	@@var_46_object:GetReturnValue((int)-1);
	var_48_int = var_39_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3379(var_2_object, var_41_string)
{
	var_42_bool = 0;
	func_4871(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 0;
	}
	var_44_bool = var_41_string == var_2_object;
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_string = "";
	var_41_string = var_45_string;
	func_4760(var_45_string);
	var_2_object = var_41_string;
	return 0;
}


func_4918()
{
	SetVariable("ood1Ospina4", (int)1);
	return 0;
}


func_5435(var_231_bool)
{
	var_233_int = 0; var_234_string = "";
	func_4795(var_233_int, "d3q01");
	var_236_bool = var_233_int == (int)2;
	if(var_236_bool != 0) {
		var_231_bool = 1;
		return 0;
	}
	var_231_bool = 0;
	return 0;
}


func_4924()
{
	SetVariable("ood1Ospina5", (int)1);
	return 0;
}


func_4930()
{
	SetVariable("ood1Ospina6", (int)1);
	return 0;
}


func_5447(var_272_bool)
{
	var_274_int = 0; var_275_string = "";
	func_4795(var_274_int, "d3q01");
	var_277_bool = var_274_int == (int)6;
	if(var_277_bool != 0) {
		var_272_bool = 1;
		return 0;
	}
	var_272_bool = 0;
	return 0;
}


func_4936()
{
	SetVariable("ood3Ospina1", (int)1);
	return 0;
}


func_5705(var_189_bool, var_190_int)
{
	var_191_object = Obj(); var_192_object = Obj(); var_193_object = Obj(); var_194_object = Obj();
	func_5663(Obj());
	var_195_object = var_193_object;
	@@var_193_object:Find(var_190_int, var_194_object);
	var_196_bool = var_194_object == 0; //@nz
	if(var_196_bool != 0) {
		var_189_bool = 0;
		return 4;
	}
	@@var_194_object:Remove();
	var_189_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4683(var_36_bool, var_37_object)
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


func_4171(var_2_object, var_84_string)
{
	var_85_bool = 0;
	func_4871(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 0;
	}
	var_87_bool = var_84_string == var_2_object;
	if(var_87_bool != 0) {
		return 0;
	}
	var_88_string = "";
	var_84_string = var_88_string;
	func_4760(var_88_string);
	var_2_object = var_84_string;
	return 0;
}


func_4942()
{
	SetVariable("ood3Ospina2", (int)1);
	return 0;
}


func_335(var_0_object, var_539_int, var_540_object)
{
	var_542_object = Obj(); var_543_bool = 0; var_544_int = 0; var_545_bool = 0; var_546_object = Obj(); var_547_bool = 0; var_548_int = 0; var_549_bool = 0;
	var_0_object = var_540_object;
	var_550_bool = 0; var_551_object = Obj();
	var_540_object = var_551_object;
	func_4700(var_550_bool, var_551_object);
	var_552_bool = var_550_bool == 0; //@nz
	if(var_552_bool != 0) {
		var_539_int = -2;
		return 8;
	}
	CreateDialog(var_546_object);
	var_553_int = 0;
	func_4867(var_553_int);
	@@var_546_object:SetNPCName(var_553_int);
	var_554_string = "";
	func_4869(var_554_string);
	@@var_546_object:SetPhoto(var_554_string);
	var_555_int = 0;
	func_5772(var_555_int);
	@@var_546_object:SetPlayerName(var_555_int);
	IsOverrideActive(var_547_bool);
	var_556_bool = var_547_bool;
	if(var_556_bool != 0) {
		var_539_int = -2;
		return 8;
	}
	DoDialog(var_546_object);
	var_557_object = Obj(); var_558_object = Obj();
	var_540_object = var_557_object;
	var_546_object = var_558_object;
	TaskCall(5);
	func_398(var_559_object, var_560_object, var_561_string, var_562_bool, var_557_object, var_558_object);
	TaskReturn();
	@@var_546_object:IsDialogEnd(var_549_bool);
	
Label_380:
	var_629_bool = var_549_bool == 0; //@nz
	if(var_629_bool != 0) {
		sync();
		@@var_546_object:IsDialogEnd(var_549_bool);
		goto Label_380;
	}
	var_540_object = Obj();
	func_4756();
	StopDialog(var_546_object);
	@@var_546_object:GetReturnValue((int)-1);
	var_548_int = var_539_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5459(var_136_bool)
{
	var_138_int = 0; var_139_string = "";
	func_4795(var_138_int, "d4q01_subquest");
	var_141_bool = var_138_int == (int)1;
	if(var_141_bool != 0) {
		var_136_bool = 1;
		return 0;
	}
	var_136_bool = 0;
	return 0;
}


func_4948()
{
	SetVariable("ood3Ospina3", (int)1);
	return 0;
}


func_3670(var_2_object, var_111_string)
{
	var_112_bool = 0;
	func_4871(var_112_bool);
	var_113_bool = var_112_bool == 0; //@nz
	if(var_113_bool != 0) {
		return 0;
	}
	var_114_bool = var_111_string == var_2_object;
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_string = "";
	var_111_string = var_115_string;
	func_4760(var_115_string);
	var_2_object = var_111_string;
	return 0;
}


func_4695(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_2392(var_0_object, var_358_int, var_359_object)
{
	var_361_object = Obj(); var_362_bool = 0; var_363_int = 0; var_364_bool = 0; var_365_object = Obj(); var_366_bool = 0; var_367_int = 0; var_368_bool = 0;
	var_0_object = var_359_object;
	var_369_bool = 0; var_370_object = Obj();
	var_359_object = var_370_object;
	func_4700(var_369_bool, var_370_object);
	var_371_bool = var_369_bool == 0; //@nz
	if(var_371_bool != 0) {
		var_358_int = -2;
		return 8;
	}
	CreateDialog(var_365_object);
	var_372_int = 0;
	func_4867(var_372_int);
	@@var_365_object:SetNPCName(var_372_int);
	var_373_string = "";
	func_4869(var_373_string);
	@@var_365_object:SetPhoto(var_373_string);
	var_374_int = 0;
	func_5772(var_374_int);
	@@var_365_object:SetPlayerName(var_374_int);
	IsOverrideActive(var_366_bool);
	var_375_bool = var_366_bool;
	if(var_375_bool != 0) {
		var_358_int = -2;
		return 8;
	}
	DoDialog(var_365_object);
	var_376_object = Obj(); var_377_object = Obj();
	var_359_object = var_376_object;
	var_365_object = var_377_object;
	TaskCall(9);
	func_2455(var_378_object, var_379_object, var_380_string, var_381_bool, var_376_object, var_377_object);
	TaskReturn();
	@@var_365_object:IsDialogEnd(var_368_bool);
	
Label_2437:
	var_457_bool = var_368_bool == 0; //@nz
	if(var_457_bool != 0) {
		sync();
		@@var_365_object:IsDialogEnd(var_368_bool);
		goto Label_2437;
	}
	var_359_object = Obj();
	func_4756();
	StopDialog(var_365_object);
	@@var_365_object:GetReturnValue((int)-1);
	var_367_int = var_358_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5722(var_51_object)
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


func_4954()
{
	var_43_object = Obj(); var_44_object = Obj();
	SetVariable("d3q01", (int)3);
	func_5722(Obj());
	var_47_object = var_44_object;
	var_58_float = 0;
	func_4838(var_58_float);
	@@var_44_object:AddMark("d3q01OspinaGotoBigVlad", "pt_map_bigvlad", (int)1, (int)11152, var_58_float);
	var_65_float = 0;
	func_4838(var_65_float);
	@@var_44_object:AddMark("d3q01OspinaGotoBigVladSelf", "pt_map_ospina", (int)1, (int)15296, var_65_float);
	func_5805();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4700(var_50_bool, var_51_object)
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
	func_4785(var_75_cvector, var_76_cvector);
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


func_1119(var_0_object, var_1_object, var_2_object, var_3_object, var_175_object, var_176_object)
{
	var_0_object = var_176_object;
	var_1_object = var_175_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_182_bool = 0;
		var_182_bool = 0;
		var_183_bool = 0; var_184_object = Obj();
		var_184_object = var_1_object;
		func_5291(var_184_object);
		if(var_183_bool != 0) {
			var_191_bool = 0; var_192_object = Obj();
			var_192_object = var_1_object;
			func_5339(var_192_object);
			if(var_191_bool != 0) {
				var_182_bool = 1;
			}
		}
		if(var_182_bool != 0) {
			var_197_string = "";
			func_1310(var_176_object, "Neutral");
			@@@var_0_object:SetMessage((int)5721);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5722, (int)6334, (int)6306);
			@@@var_0_object:AddReply((int)6003, (int)6615, (int)6614);
		} else {
				var_217_string = "";
				func_1310(var_176_object, "Neutral");
				@@@var_0_object:SetMessage((int)8287);
				@@@var_0_object:ClearReplies();
				var_219_bool = 0;
				var_219_bool = 0;
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_5303(var_221_object);
				if(var_220_bool != 0) {
					var_226_bool = 0; var_227_object = Obj();
					var_227_object = var_1_object;
					func_5327(var_227_object);
					if(var_226_bool != 0) {
						var_219_bool = 1;
					}
				}
				if(var_219_bool != 0) {
					@@@var_0_object:AddReply((int)8288, (int)6307, (int)9111);
				}
				var_235_bool = 0; var_236_object = Obj();
				var_236_object = var_1_object;
				func_5315(var_236_object);
				if(var_235_bool != 0) {
					@@@var_0_object:AddReply((int)8291, (int)6322, (int)9114);
				}
				var_244_bool = 0;
				var_244_bool = 0;
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_5627(var_246_object);
				if(var_245_bool != 0) {
					var_251_bool = 0; var_252_object = Obj();
					var_252_object = var_1_object;
					func_5351(var_252_object);
					if(var_251_bool != 0) {
						var_244_bool = 1;
					}
				}
				if(var_244_bool != 0) {
					@@@var_0_object:AddReply((int)8299, (int)9137, (int)9122);
				}
				var_260_bool = 0;
				var_260_bool = 1;
				var_261_bool = 0;
				var_261_bool = 0;
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_5651(var_263_object);
				if(var_262_bool != 0) {
					var_268_bool = 0; var_269_object = Obj();
					var_269_object = var_1_object;
					func_5363(var_269_object);
					if(var_268_bool != 0) {
						var_261_bool = 1;
					}
				}
				if(var_261_bool != 1) {
					var_274_bool = 0;
					var_274_bool = 0;
					var_275_bool = 0; var_276_object = Obj();
					var_276_object = var_1_object;
					func_5615(var_276_object);
					if(var_275_bool != 0) {
						var_281_bool = 0; var_282_object = Obj();
						var_282_object = var_1_object;
						func_5363(var_282_object);
						if(var_281_bool != 0) {
							var_274_bool = 1;
						}
					}
					if(var_274_bool != 1) {
						var_260_bool = 0;
					}
				}
				if(var_260_bool != 0) {
					@@@var_0_object:AddReply((int)8302, (int)9457, (int)9125);
				}
				var_286_bool = 0;
				var_286_bool = 0;
				var_287_bool = 0; var_288_object = Obj();
				var_288_object = var_1_object;
				func_5639(var_288_object);
				if(var_287_bool != 0) {
					var_293_bool = 0; var_294_object = Obj();
					var_294_object = var_1_object;
					func_5375(var_294_object);
					if(var_293_bool != 0) {
						var_286_bool = 1;
					}
				}
				if(var_286_bool != 0) {
					@@@var_0_object:AddReply((int)8310, (int)9140, (int)9133);
				}
				@@@var_0_object:AddReply((int)8723, (int)-1, (int)9560);
				goto Label_1280;
		}
	}
Label_1280:
	var_209_bool = 0;
	func_4871(var_209_bool);
	if(var_209_bool != 0) {

	Label_1284:
		lshWaitForAnimEnd();
		var_210_object = var_3_object;
		if(var_210_object != 0) {
		} else {
			var_211_string = "";
			var_211_string = var_2_object;
			func_4760(var_211_string);
			goto Label_1284;
	}
		PlayAnimation("all", "idle");

	Label_1299:
		WaitForAnimEnd();
		var_214_object = var_3_object;
		if(var_214_object != 0) {
			goto Label_1309;
		}
		PlayAnimation("all", "idle");
		goto Label_1299;

	}
	goto Label_1309;
	
Label_1309:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x463";


func_5471(var_128_bool)
{
	var_130_int = 0; var_131_string = "";
	func_4795(var_130_int, "ood4Ospina1");
	var_135_bool = var_130_int == (int)0;
	if(var_135_bool != 0) {
		var_128_bool = 1;
		return 0;
	}
	var_128_bool = 0;
	return 0;
}


func_5739(var_67_object, var_68_string, var_69_float)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_object = Obj(); var_78_bool = 0;
	GetMainOutdoorScene(var_77_object);
	var_79_bool = var_77_object == 0; //@ne
	if(var_79_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_77_object:GetLocator(var_68_string, var_78_bool, var_75_cvector, var_76_cvector);
	var_81_bool = var_78_bool == 0; //@nz
	if(var_81_bool != 0) {
		var_83_int = "Warning: outdoor scene locator " + var_68_string;
		var_85_int = var_83_int + " doesnt exist";
		Trace(var_85_int);
	}
	@@var_77_object:GetMap(var_67_object);
	var_86_bool = var_67_object == 0; //@ne
	if(var_86_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_88_float = GetByIndex(var_75_cvector, 0);
	var_89_float = GetByIndex(var_75_cvector, 2);
	@@var_67_object:SetMapParams(var_88_float, var_89_float, var_69_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5483(var_152_bool)
{
	var_154_int = 0; var_155_string = "";
	func_4795(var_154_int, "d4q01_subquest");
	var_157_bool = var_154_int == (int)3;
	if(var_157_bool != 0) {
		var_152_bool = 1;
		return 0;
	}
	var_152_bool = 0;
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
		func_5285();
		var_113_string = "";
		func_180(var_103_object, "Neutral");
		@@@var_0_object:SetMessage((int)309);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)311, (int)370, (int)364);
		@@@var_0_object:AddReply((int)312, (int)366, (int)365);
		@@@var_0_object:AddReply((int)310, (int)369, (int)363);
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	var_138_bool = 0;
	func_4871(var_138_bool);
	if(var_138_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_139_object = var_3_object;
		if(var_139_object != 0) {
		} else {
			var_140_string = "";
			var_140_string = var_2_object;
			func_4760(var_140_string);
			goto Label_154;
	}
		PlayAnimation("all", "idle");

	Label_169:
		WaitForAnimEnd();
		var_143_object = var_3_object;
		if(var_143_object != 0) {
			goto Label_179;
		}
		PlayAnimation("all", "idle");
		goto Label_169;
	}
	goto Label_179;
	
Label_179:
	return 0;
	
}


func_5495(var_146_bool)
{
	var_148_int = 0; var_149_string = "";
	func_4795(var_148_int, "ood4Ospina2");
	var_151_bool = var_148_int == (int)0;
	if(var_151_bool != 0) {
		var_146_bool = 1;
		return 0;
	}
	var_146_bool = 0;
	return 0;
}


func_4986()
{
	SetVariable("ood3Ospina4", (int)1);
	return 0;
}


func_4992()
{
	var_173_object = Obj(); var_174_object = Obj();
	SetVariable("d3q01", (int)7);
	func_5722(Obj());
	var_177_object = var_174_object;
	var_182_float = 0;
	func_4838(var_182_float);
	@@var_174_object:AddMark("d3q01OspinaButchersWillHelpSelf", "pt_map_ospina", (int)1, (int)15301, var_182_float);
	func_5789();
	var_192_bool = 0; var_193_string = ""; var_194_string = "";
	func_4826(var_192_bool, "quest_d3_01", "place_butchers");
	return 2;
}
EMIT "Stack[-1] = 0";


func_5507(var_244_bool)
{
	var_246_int = 0; var_247_string = "";
	func_4795(var_246_int, "d6q01");
	var_249_bool = var_246_int == (int)1;
	if(var_249_bool != 0) {
		var_244_bool = 1;
		return 0;
	}
	var_244_bool = 0;
	return 0;
}


func_5772(var_93_int)
{
	var_94_int = 0; var_95_int = 0;
	GetVariable("player", var_95_int);
	var_98_bool = var_95_int == (int)0;
	if(var_98_bool != 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x169b";
	}
	var_100_bool = var_95_int == (int)1;
	if(var_100_bool != 0) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
	return 2;
}


func_398(var_0_object, var_1_object, var_2_object, var_3_object, var_557_object, var_558_object)
{
	var_0_object = var_558_object;
	var_1_object = var_557_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_564_string = "";
		func_509(var_558_object, "Neutral");
		@@@var_0_object:SetMessage((int)12729);
		@@@var_0_object:ClearReplies();
		var_570_bool = 0;
		var_570_bool = 0;
		var_571_bool = 0; var_572_object = Obj();
		var_572_object = var_1_object;
		func_5519(var_572_object);
		if(var_571_bool != 0) {
			var_577_bool = 0; var_578_object = Obj();
			var_578_object = var_1_object;
			func_5507(var_578_object);
			if(var_577_bool != 0) {
				var_570_bool = 1;
			}
		}
		if(var_570_bool != 0) {
			@@@var_0_object:AddReply((int)12731, (int)3851, (int)13924);
		}
		var_586_bool = 0;
		var_586_bool = 0;
		var_587_bool = 0;
		var_587_bool = 0;
		var_588_bool = 0;
		var_588_bool = 0;
		var_589_bool = 0; var_590_object = Obj();
		var_590_object = var_1_object;
		func_5531(var_590_object);
		if(var_589_bool != 0) {
			var_595_bool = 0; var_596_object = Obj();
			var_596_object = var_1_object;
			func_5579(var_596_object);
			if(var_595_bool != 0) {
				var_588_bool = 1;
			}
		}
		if(var_588_bool != 0) {
			var_601_bool = 0; var_602_object = Obj();
			var_602_object = var_1_object;
			func_5591(var_602_object);
			var_607_bool = var_601_bool == 0; //@nz
			if(var_607_bool != 0) {
				var_587_bool = 1;
			}
		}
		if(var_587_bool != 0) {
			var_608_bool = 0; var_609_object = Obj();
			var_609_object = var_1_object;
			func_5603(var_609_object);
			var_614_bool = var_608_bool == 0; //@nz
			if(var_614_bool != 0) {
				var_586_bool = 1;
			}
		}
		if(var_586_bool != 0) {
			@@@var_0_object:AddReply((int)12730, (int)11927, (int)13923);
		}
		@@@var_0_object:AddReply((int)12732, (int)-1, (int)13926);
		goto Label_479;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x192";
	}
Label_479:
	var_621_bool = 0;
	func_4871(var_621_bool);
	if(var_621_bool != 0) {

	Label_483:
		lshWaitForAnimEnd();
		var_622_object = var_3_object;
		if(var_622_object != 0) {
		} else {
			var_623_string = "";
			var_623_string = var_2_object;
			func_4760(var_623_string);
			goto Label_483;
	}
		PlayAnimation("all", "idle");

	Label_498:
		WaitForAnimEnd();
		var_626_object = var_3_object;
		if(var_626_object != 0) {
			goto Label_508;
		}
		PlayAnimation("all", "idle");
		goto Label_498;
	}
	goto Label_508;
	
Label_508:
	return 0;
	
}


func_5519(var_236_bool)
{
	var_238_int = 0; var_239_string = "";
	func_4795(var_238_int, "ood6Ospina1");
	var_243_bool = var_238_int == (int)0;
	if(var_243_bool != 0) {
		var_236_bool = 1;
		return 0;
	}
	var_236_bool = 0;
	return 0;
}


func_5117()
{
	SetVariable("ood8Ospina2", (int)1);
	return 0;
}


func_4756()
{
	CameraSwitchToNormal();
	return 0;
}


func_2455(var_0_object, var_1_object, var_2_object, var_3_object, var_376_object, var_377_object)
{
	var_0_object = var_377_object;
	var_1_object = var_376_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_383_string = "";
		func_2585(var_377_object, "Neutral");
		@@@var_0_object:SetMessage((int)8869);
		@@@var_0_object:ClearReplies();
		var_389_bool = 0;
		var_389_bool = 0;
		var_390_bool = 0; var_391_object = Obj();
		var_391_object = var_1_object;
		func_5399(var_391_object);
		if(var_390_bool != 0) {
			var_396_bool = 0; var_397_object = Obj();
			var_397_object = var_1_object;
			func_5435(var_397_object);
			if(var_396_bool != 0) {
				var_389_bool = 1;
			}
		}
		if(var_389_bool != 0) {
			@@@var_0_object:AddReply((int)8889, (int)9751, (int)9750);
		}
		var_405_bool = 0;
		var_405_bool = 0;
		var_406_bool = 0;
		var_406_bool = 0;
		var_407_bool = 0; var_408_object = Obj();
		var_408_object = var_1_object;
		func_5423(var_408_object);
		if(var_407_bool != 0) {
			var_413_bool = 0; var_414_object = Obj();
			var_414_object = var_1_object;
			func_5399(var_414_object);
			var_415_bool = var_413_bool == 0; //@nz
			if(var_415_bool != 0) {
				var_406_bool = 1;
			}
		}
		if(var_406_bool != 0) {
			var_416_bool = 0; var_417_object = Obj();
			var_417_object = var_1_object;
			func_5435(var_417_object);
			if(var_416_bool != 0) {
				var_405_bool = 1;
			}
		}
		if(var_405_bool != 0) {
			@@@var_0_object:AddReply((int)11136, (int)12326, (int)12325);
		}
		var_421_bool = 0; var_422_object = Obj();
		var_422_object = var_1_object;
		func_5387(var_422_object);
		if(var_421_bool != 0) {
			@@@var_0_object:AddReply((int)8888, (int)9729, (int)9749);
		}
		var_430_bool = 0;
		var_430_bool = 0;
		var_431_bool = 0; var_432_object = Obj();
		var_432_object = var_1_object;
		func_5411(var_432_object);
		if(var_431_bool != 0) {
			var_437_bool = 0; var_438_object = Obj();
			var_438_object = var_1_object;
			func_5447(var_438_object);
			if(var_437_bool != 0) {
				var_430_bool = 1;
			}
		}
		if(var_430_bool != 0) {
			@@@var_0_object:AddReply((int)8908, (int)9772, (int)9771);
		}
		@@@var_0_object:AddReply((int)11134, (int)-1, (int)12323);
		goto Label_2555;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x99b";
	}
Label_2555:
	var_449_bool = 0;
	func_4871(var_449_bool);
	if(var_449_bool != 0) {

	Label_2559:
		lshWaitForAnimEnd();
		var_450_object = var_3_object;
		if(var_450_object != 0) {
		} else {
			var_451_string = "";
			var_451_string = var_2_object;
			func_4760(var_451_string);
			goto Label_2559;
	}
		PlayAnimation("all", "idle");

	Label_2574:
		WaitForAnimEnd();
		var_454_object = var_3_object;
		if(var_454_object != 0) {
			goto Label_2584;
		}
		PlayAnimation("all", "idle");
		goto Label_2574;
	}
	goto Label_2584;
	
Label_2584:
	return 0;
	
}


func_4760(var_40_string)
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


func_5627(var_213_bool)
{
	var_215_int = 0; var_216_string = "";
	func_4795(var_215_int, "KnowKaterina");
	var_218_bool = var_215_int == (int)1;
	if(var_218_bool != 0) {
		var_213_bool = 1;
		return 0;
	}
	var_213_bool = 0;
	return 0;
}


func_5531(var_256_bool)
{
	var_258_int = 0; var_259_string = "";
	func_4795(var_258_int, "ood6Ospina2");
	var_261_bool = var_258_int == (int)0;
	if(var_261_bool != 0) {
		var_256_bool = 1;
		return 0;
	}
	var_256_bool = 0;
	return 0;
}


func_5020(var_96_object)
{
	var_97_object = Obj(); var_98_string = ""; var_99_float = 0;
	func_5722(Obj());
	var_100_object = var_97_object;
	func_5739(var_97_object, "pt_map_bigvlad", (float)2);
	var_120_object = Obj();
	func_5722(var_120_object);
	@@var_96_object:ShowMap(var_120_object);
	return 0;
}


func_5789()
{
	var_183_object = Obj(); var_184_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_184_object, (int)71, (int)1, (int)12153);
	var_189_bool = 0; var_190_object = Obj(); var_191_int = 0;
	var_184_object = var_190_object;
	func_5676(var_189_bool, var_190_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5285()
{
	SetVariable("KnowOspina", (int)1);
	return 0;
}


func_5543(var_101_bool)
{
	var_103_int = 0; var_104_string = "";
	func_4795(var_103_int, "d8q01");
	var_108_bool = var_103_int == (int)0;
	if(var_108_bool != 0) {
		var_101_bool = 1;
		return 0;
	}
	var_101_bool = 0;
	return 0;
}


func_4778()
{
	var_38_bool = 0;
	func_4871(var_38_bool);
	if(var_38_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5291(var_149_bool)
{
	var_151_int = 0; var_152_string = "";
	func_4795(var_151_int, "ood1Ospina1");
	var_156_bool = var_151_int == (int)0;
	if(var_156_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_5036(var_66_object)
{
	var_67_object = Obj(); var_68_string = ""; var_69_float = 0;
	func_5722(Obj());
	var_70_object = var_67_object;
	func_5739(var_67_object, "pt_map_lara", (float)2);
	var_90_object = Obj();
	func_5722(var_90_object);
	@@var_66_object:ShowMap(var_90_object);
	return 0;
}


func_5805()
{
	var_66_object = Obj(); var_67_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_67_object, (int)70, (int)1, (int)12152);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_67_object = var_73_object;
	func_5676(var_72_bool, var_73_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4785(var_75_cvector, var_76_cvector)
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


func_5555(var_119_bool)
{
	var_121_int = 0; var_122_string = "";
	func_4795(var_121_int, "ood8Ospina1");
	var_124_bool = var_121_int == (int)0;
	if(var_124_bool != 0) {
		var_119_bool = 1;
		return 0;
	}
	var_119_bool = 0;
	return 0;
}


func_180(var_2_object, var_45_string)
{
	var_46_bool = 0;
	func_4871(var_46_bool);
	var_47_bool = var_46_bool == 0; //@nz
	if(var_47_bool != 0) {
		return 0;
	}
	var_48_bool = var_45_string == var_2_object;
	if(var_48_bool != 0) {
		return 0;
	}
	var_49_string = "";
	var_45_string = var_49_string;
	func_4760(var_49_string);
	var_2_object = var_45_string;
	return 0;
}


func_5303(var_188_bool)
{
	var_190_int = 0; var_191_string = "";
	func_4795(var_190_int, "ood1Ospina2");
	var_193_bool = var_190_int == (int)0;
	if(var_193_bool != 0) {
		var_188_bool = 1;
		return 0;
	}
	var_188_bool = 0;
	return 0;
}


func_4025(var_0_object, var_633_int, var_634_object)
{
	var_636_object = Obj(); var_637_bool = 0; var_638_int = 0; var_639_bool = 0; var_640_object = Obj(); var_641_bool = 0; var_642_int = 0; var_643_bool = 0;
	var_0_object = var_634_object;
	var_644_bool = 0; var_645_object = Obj();
	var_634_object = var_645_object;
	func_4700(var_644_bool, var_645_object);
	var_646_bool = var_644_bool == 0; //@nz
	if(var_646_bool != 0) {
		var_633_int = -2;
		return 8;
	}
	CreateDialog(var_640_object);
	var_647_int = 0;
	func_4867(var_647_int);
	@@var_640_object:SetNPCName(var_647_int);
	var_648_string = "";
	func_4869(var_648_string);
	@@var_640_object:SetPhoto(var_648_string);
	var_649_int = 0;
	func_5772(var_649_int);
	@@var_640_object:SetPlayerName(var_649_int);
	IsOverrideActive(var_641_bool);
	var_650_bool = var_641_bool;
	if(var_650_bool != 0) {
		var_633_int = -2;
		return 8;
	}
	DoDialog(var_640_object);
	var_651_object = Obj(); var_652_object = Obj();
	var_634_object = var_651_object;
	var_640_object = var_652_object;
	TaskCall(15);
	func_4088(var_653_object, var_654_object, var_655_string, var_656_bool, var_651_object, var_652_object);
	TaskReturn();
	@@var_640_object:IsDialogEnd(var_643_bool);
	
Label_4070:
	var_701_bool = var_643_bool == 0; //@nz
	if(var_701_bool != 0) {
		sync();
		@@var_640_object:IsDialogEnd(var_643_bool);
		goto Label_4070;
	}
	var_634_object = Obj();
	func_4756();
	StopDialog(var_640_object);
	@@var_640_object:GetReturnValue((int)-1);
	var_642_int = var_633_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3258(var_0_object, var_309_int, var_310_object)
{
	var_312_object = Obj(); var_313_bool = 0; var_314_int = 0; var_315_bool = 0; var_316_object = Obj(); var_317_bool = 0; var_318_int = 0; var_319_bool = 0;
	var_0_object = var_310_object;
	var_320_bool = 0; var_321_object = Obj();
	var_310_object = var_321_object;
	func_4700(var_320_bool, var_321_object);
	var_322_bool = var_320_bool == 0; //@nz
	if(var_322_bool != 0) {
		var_309_int = -2;
		return 8;
	}
	CreateDialog(var_316_object);
	var_323_int = 0;
	func_4867(var_323_int);
	@@var_316_object:SetNPCName(var_323_int);
	var_324_string = "";
	func_4869(var_324_string);
	@@var_316_object:SetPhoto(var_324_string);
	var_325_int = 0;
	func_5772(var_325_int);
	@@var_316_object:SetPlayerName(var_325_int);
	IsOverrideActive(var_317_bool);
	var_326_bool = var_317_bool;
	if(var_326_bool != 0) {
		var_309_int = -2;
		return 8;
	}
	DoDialog(var_316_object);
	var_327_object = Obj(); var_328_object = Obj();
	var_310_object = var_327_object;
	var_316_object = var_328_object;
	TaskCall(11);
	func_3321(var_329_object, var_330_object, var_331_string, var_332_bool, var_327_object, var_328_object);
	TaskReturn();
	@@var_316_object:IsDialogEnd(var_319_bool);
	
Label_3303:
	var_354_bool = var_319_bool == 0; //@nz
	if(var_354_bool != 0) {
		sync();
		@@var_316_object:IsDialogEnd(var_319_bool);
		goto Label_3303;
	}
	var_310_object = Obj();
	func_4756();
	StopDialog(var_316_object);
	@@var_316_object:GetReturnValue((int)-1);
	var_318_int = var_309_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4795(var_103_int, var_104_string)
{
	var_105_int = 0; var_106_int = 0;
	GetVariable(var_104_string, var_106_int);
	var_106_int = var_103_int;
	return 2;
}


func_5052()
{
	var_47_object = Obj(); var_48_object = Obj();
	SetVariable("d4q01_subquest", (int)2);
	func_5722(Obj());
	var_51_object = var_48_object;
	var_62_float = 0;
	func_4838(var_62_float);
	@@var_48_object:AddMark("d4q01OspinaGotoLara", "pt_map_lara", (int)1, (int)11504, var_62_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5821()
{
	var_51_object = Obj(); var_52_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_52_object, (int)162, (int)1, (int)15395);
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0;
	var_52_object = var_58_object;
	func_5676(var_57_bool, var_58_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3516(var_0_object, var_461_int, var_462_object)
{
	var_464_object = Obj(); var_465_bool = 0; var_466_int = 0; var_467_bool = 0; var_468_object = Obj(); var_469_bool = 0; var_470_int = 0; var_471_bool = 0;
	var_0_object = var_462_object;
	var_472_bool = 0; var_473_object = Obj();
	var_462_object = var_473_object;
	func_4700(var_472_bool, var_473_object);
	var_474_bool = var_472_bool == 0; //@nz
	if(var_474_bool != 0) {
		var_461_int = -2;
		return 8;
	}
	CreateDialog(var_468_object);
	var_475_int = 0;
	func_4867(var_475_int);
	@@var_468_object:SetNPCName(var_475_int);
	var_476_string = "";
	func_4869(var_476_string);
	@@var_468_object:SetPhoto(var_476_string);
	var_477_int = 0;
	func_5772(var_477_int);
	@@var_468_object:SetPlayerName(var_477_int);
	IsOverrideActive(var_469_bool);
	var_478_bool = var_469_bool;
	if(var_478_bool != 0) {
		var_461_int = -2;
		return 8;
	}
	DoDialog(var_468_object);
	var_479_object = Obj(); var_480_object = Obj();
	var_462_object = var_479_object;
	var_468_object = var_480_object;
	TaskCall(13);
	func_3579(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object);
	TaskReturn();
	@@var_468_object:IsDialogEnd(var_471_bool);
	
Label_3561:
	var_535_bool = var_471_bool == 0; //@nz
	if(var_535_bool != 0) {
		sync();
		@@var_468_object:IsDialogEnd(var_471_bool);
		goto Label_3561;
	}
	var_462_object = Obj();
	func_4756();
	StopDialog(var_468_object);
	@@var_468_object:GetReturnValue((int)-1);
	var_470_int = var_461_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5567(var_110_bool)
{
	var_112_int = 0; var_113_string = "";
	func_4795(var_112_int, "ood8Ospina2");
	var_115_bool = var_112_int == (int)0;
	if(var_115_bool != 0) {
		var_110_bool = 1;
		return 0;
	}
	var_110_bool = 0;
	return 0;
}


func_4800(var_82_object, var_83_object, var_84_int)
{
	var_85_int = 0; var_86_int = 0; var_87_bool = 0; var_88_int = 0; var_89_int = 0; var_90_bool = 0;
	@@var_83_object:GetItemID(var_88_int);
	GetInvItemProperty(var_89_int, var_88_int, "Category");
	@@var_82_object:AddItem(var_90_bool, var_83_object, var_89_int, var_84_int);
	var_92_bool = var_90_bool == 0; //@nz
	if(var_92_bool != 0) {
		@@var_82_object:DropItems(var_83_object, var_84_int);
	}
	return 6;
}


func_5315(var_203_bool)
{
	var_205_int = 0; var_206_string = "";
	func_4795(var_205_int, "ood1Ospina3");
	var_208_bool = var_205_int == (int)0;
	if(var_208_bool != 0) {
		var_203_bool = 1;
		return 0;
	}
	var_203_bool = 0;
	return 0;
}


func_5579(var_262_bool)
{
	var_264_int = 0; var_265_string = "";
	func_4795(var_264_int, "microscope_d6q01_ospina_blood");
	var_267_bool = var_264_int != (int)0;
	if(var_267_bool != 0) {
		var_262_bool = 1;
		return 0;
	}
	var_262_bool = 0;
	return 0;
}


func_4813(var_77_object, var_78_string, var_79_int)
{
	var_80_object = Obj(); var_81_object = Obj();
	CreateInvItem(var_81_object);
	@@var_81_object:SetItemName(var_78_string);
	var_82_object = Obj(); var_83_object = Obj(); var_84_int = 0;
	var_77_object = var_82_object;
	var_81_object = var_83_object;
	var_79_int = var_84_int;
	func_4800(var_82_object, var_83_object, var_84_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5837()
{
	var_180_object = Obj(); var_181_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_181_object, (int)121, (int)1, (int)13744);
	var_186_bool = 0; var_187_object = Obj(); var_188_int = 0;
	var_181_object = var_187_object;
	func_5676(var_186_bool, var_187_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5327(var_194_bool)
{
	var_196_int = 0; var_197_string = "";
	func_4795(var_196_int, "d1q01FirstGeorgVisit");
	var_199_bool = var_196_int == (int)1;
	if(var_199_bool != 0) {
		var_194_bool = 1;
		return 0;
	}
	var_194_bool = 0;
	return 0;
}


func_5072()
{
	SetVariable("ood4Ospina1", (int)1);
	return 0;
}


func_5078()
{
	SetVariable("d4q01_subquest", (int)1000);
	return 0;
}


func_5591(var_268_bool)
{
	var_270_int = 0; var_271_string = "";
	func_4795(var_270_int, "d6q01");
	var_273_bool = var_270_int == (int)1000;
	if(var_273_bool != 0) {
		var_268_bool = 1;
		return 0;
	}
	var_268_bool = 0;
	return 0;
}


func_4826(var_192_bool, var_193_string, var_194_string)
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


func_5339(var_157_bool)
{
	var_159_int = 0; var_160_string = "";
	func_4795(var_159_int, "d1q03");
	var_162_bool = var_159_int == (int)1;
	if(var_162_bool != 0) {
		var_157_bool = 1;
		return 0;
	}
	var_157_bool = 0;
	return 0;
}


func_5084()
{
	SetVariable("ood4Ospina2", (int)1);
	return 0;
}


func_5853()
{
	var_51_object = Obj(); var_52_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_52_object, (int)178, (int)1, (int)15437);
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0;
	var_52_object = var_58_object;
	func_5676(var_57_bool, var_58_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5090()
{
	SetVariable("ood6Ospina1", (int)1);
	return 0;
}


func_5603(var_275_bool)
{
	var_277_int = 0; var_278_string = "";
	func_4795(var_277_int, "d6q01");
	var_280_bool = var_277_int == (int)-1;
	if(var_280_bool != 0) {
		var_275_bool = 1;
		return 0;
	}
	var_275_bool = 0;
	return 0;
}


func_4838(var_62_float)
{
	var_63_float = 0; var_64_float = 0;
	GetGameTime(var_64_float);
	var_64_float = var_62_float;
	return 2;
}


func_5351(var_219_bool)
{
	var_221_int = 0; var_222_string = "";
	func_4795(var_221_int, "ood1Ospina4");
	var_224_bool = var_221_int == (int)0;
	if(var_224_bool != 0) {
		var_219_bool = 1;
		return 0;
	}
	var_219_bool = 0;
	return 0;
}


func_5096()
{
	SetVariable("ood6Ospina2", (int)1);
	return 0;
}


func_4843(var_151_int)
{
	var_152_float = 0; var_153_float = 0;
	GetGameTime(var_153_float);
	var_155_int = 0;
	var_155_int = var_153_float / (int)24;
	var_151_int = (int)1 + var_155_int;
	return 2;
}


func_5869()
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_5102()
{
	SetVariable("d8q01MladVladIsBad", (int)1);
	func_5853();
	return 0;
}


func_5615(var_243_bool)
{
	var_245_int = 0; var_246_string = "";
	func_4795(var_245_int, "KnowBigVlad");
	var_248_bool = var_245_int == (int)1;
	if(var_248_bool != 0) {
		var_243_bool = 1;
		return 0;
	}
	var_243_bool = 0;
	return 0;
}


func_5873(var_36_object)
{
	var_37_bool = GlobalVars[1];
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_39_int = 0; var_40_object = Obj();
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_148_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_149_bool = 0; var_150_int = 0;
	func_4852(var_149_bool, (int)1);
	if(var_149_bool != 0) {
		var_157_int = 0; var_158_object = Obj();
		var_36_object = var_158_object;
		TaskCall(6);
		func_1056(var_159_object, var_157_int, var_158_object);
		TaskReturn();
		return 0;
	}
	var_307_bool = 0; var_308_int = 0;
	func_4852(var_307_bool, (int)2);
	if(var_307_bool != 0) {
		var_309_int = 0; var_310_object = Obj();
		var_36_object = var_310_object;
		TaskCall(10);
		func_3258(var_311_object, var_309_int, var_310_object);
		TaskReturn();
		return 0;
	}
	var_356_bool = 0; var_357_int = 0;
	func_4852(var_356_bool, (int)3);
	if(var_356_bool != 0) {
		var_358_int = 0; var_359_object = Obj();
		var_36_object = var_359_object;
		TaskCall(8);
		func_2392(var_360_object, var_358_int, var_359_object);
		TaskReturn();
		return 0;
	}
	var_459_bool = 0; var_460_int = 0;
	func_4852(var_459_bool, (int)4);
	if(var_459_bool != 0) {
		var_461_int = 0; var_462_object = Obj();
		var_36_object = var_462_object;
		TaskCall(12);
		func_3516(var_463_object, var_461_int, var_462_object);
		TaskReturn();
		return 0;
	}
	var_537_bool = 0; var_538_int = 0;
	func_4852(var_537_bool, (int)6);
	if(var_537_bool != 0) {
		var_539_int = 0; var_540_object = Obj();
		var_36_object = var_540_object;
		TaskCall(4);
		func_335(var_541_object, var_539_int, var_540_object);
		TaskReturn();
		return 0;
	}
	var_631_bool = 0; var_632_int = 0;
	func_4852(var_631_bool, (int)8);
	if(var_631_bool != 0) {
		var_633_int = 0; var_634_object = Obj();
		var_36_object = var_634_object;
		TaskCall(14);
		func_4025(var_635_object, var_633_int, var_634_object);
		TaskReturn();
		return 0;
	}
	func_4858((bool)0);
	return 0;
}


func_5363(var_236_bool)
{
	var_238_int = 0; var_239_string = "";
	func_4795(var_238_int, "ood1Ospina5");
	var_241_bool = var_238_int == (int)0;
	if(var_241_bool != 0) {
		var_236_bool = 1;
		return 0;
	}
	var_236_bool = 0;
	return 0;
}


func_4852(var_149_bool, var_150_int)
{
	var_151_int = 0;
	func_4843(var_151_int);
	var_149_bool = var_151_int == var_150_int;
	return 0;
}


func_5111()
{
	SetVariable("ood8Ospina1", (int)1);
	return 0;
}


func_4088(var_0_object, var_1_object, var_2_object, var_3_object, var_651_object, var_652_object)
{
	var_0_object = var_652_object;
	var_1_object = var_651_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_658_string = "";
		func_4171(var_652_object, "Neutral");
		@@@var_0_object:SetMessage((int)12374);
		@@@var_0_object:ClearReplies();
		var_664_bool = 0;
		var_664_bool = 0;
		var_665_bool = 0; var_666_object = Obj();
		var_666_object = var_1_object;
		func_5543(var_666_object);
		var_671_bool = var_665_bool == 0; //@nz
		if(var_671_bool != 0) {
			var_672_bool = 0; var_673_object = Obj();
			var_673_object = var_1_object;
			func_5567(var_673_object);
			if(var_672_bool != 0) {
				var_664_bool = 1;
			}
		}
		if(var_664_bool != 0) {
			@@@var_0_object:AddReply((int)13641, (int)14898, (int)14897);
		}
		var_681_bool = 0; var_682_object = Obj();
		var_682_object = var_1_object;
		func_5555(var_682_object);
		if(var_681_bool != 0) {
			@@@var_0_object:AddReply((int)12375, (int)13536, (int)13535);
		}
		@@@var_0_object:AddReply((int)13658, (int)-1, (int)14916);
		goto Label_4141;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xffc";
	}
Label_4141:
	var_693_bool = 0;
	func_4871(var_693_bool);
	if(var_693_bool != 0) {

	Label_4145:
		lshWaitForAnimEnd();
		var_694_object = var_3_object;
		if(var_694_object != 0) {
		} else {
			var_695_string = "";
			var_695_string = var_2_object;
			func_4760(var_695_string);
			goto Label_4145;
	}
		PlayAnimation("all", "idle");

	Label_4160:
		WaitForAnimEnd();
		var_698_object = var_3_object;
		if(var_698_object != 0) {
			goto Label_4170;
		}
		PlayAnimation("all", "idle");
		goto Label_4160;
	}
	goto Label_4170;
	
Label_4170:
	return 0;
	
}


func_3321(var_0_object, var_1_object, var_2_object, var_3_object, var_327_object, var_328_object)
{
	var_0_object = var_328_object;
	var_1_object = var_327_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_334_string = "";
		func_3379(var_328_object, "Neutral");
		@@@var_0_object:SetMessage((int)9394);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)9395, (int)10324, (int)10323);
		@@@var_0_object:AddReply((int)9407, (int)10328, (int)10335);
		goto Label_3349;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xcfd";
	}
Label_3349:
	var_346_bool = 0;
	func_4871(var_346_bool);
	if(var_346_bool != 0) {

	Label_3353:
		lshWaitForAnimEnd();
		var_347_object = var_3_object;
		if(var_347_object != 0) {
		} else {
			var_348_string = "";
			var_348_string = var_2_object;
			func_4760(var_348_string);
			goto Label_3353;
	}
		PlayAnimation("all", "idle");

	Label_3368:
		WaitForAnimEnd();
		var_351_object = var_3_object;
		if(var_351_object != 0) {
			goto Label_3378;
		}
		PlayAnimation("all", "idle");
		goto Label_3368;
	}
	goto Label_3378;
	
Label_3378:
	return 0;
	
}


func_4858(var_703_bool)
{
	var_704_bool = 0; var_705_bool = 0;
	var_706_string = "";
	func_4760("No");
	lshWaitForAnimEnd(var_705_bool);
	var_705_bool = var_703_bool;
	return 2;
}


func_3579(var_0_object, var_1_object, var_2_object, var_3_object, var_479_object, var_480_object)
{
	var_0_object = var_480_object;
	var_1_object = var_479_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_486_string = "";
		func_3670(var_480_object, "Neutral");
		@@@var_0_object:SetMessage((int)11065);
		@@@var_0_object:ClearReplies();
		var_492_bool = 0;
		var_492_bool = 0;
		var_493_bool = 0; var_494_object = Obj();
		var_494_object = var_1_object;
		func_5471(var_494_object);
		if(var_493_bool != 0) {
			var_499_bool = 0; var_500_object = Obj();
			var_500_object = var_1_object;
			func_5459(var_500_object);
			if(var_499_bool != 0) {
				var_492_bool = 1;
			}
		}
		if(var_492_bool != 0) {
			@@@var_0_object:AddReply((int)11066, (int)12248, (int)12247);
		}
		var_508_bool = 0;
		var_508_bool = 0;
		var_509_bool = 0; var_510_object = Obj();
		var_510_object = var_1_object;
		func_5495(var_510_object);
		if(var_509_bool != 0) {
			var_515_bool = 0; var_516_object = Obj();
			var_516_object = var_1_object;
			func_5483(var_516_object);
			if(var_515_bool != 0) {
				var_508_bool = 1;
			}
		}
		if(var_508_bool != 0) {
			@@@var_0_object:AddReply((int)11079, (int)12268, (int)12263);
		}
		@@@var_0_object:AddReply((int)11505, (int)-1, (int)12707);
		goto Label_3640;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xdff";
	}
Label_3640:
	var_527_bool = 0;
	func_4871(var_527_bool);
	if(var_527_bool != 0) {

	Label_3644:
		lshWaitForAnimEnd();
		var_528_object = var_3_object;
		if(var_528_object != 0) {
		} else {
			var_529_string = "";
			var_529_string = var_2_object;
			func_4760(var_529_string);
			goto Label_3644;
	}
		PlayAnimation("all", "idle");

	Label_3659:
		WaitForAnimEnd();
		var_532_object = var_3_object;
		if(var_532_object != 0) {
			goto Label_3669;
		}
		PlayAnimation("all", "idle");
		goto Label_3659;
	}
	goto Label_3669;
	
Label_3669:
	return 0;
	
}


func_509(var_2_object, var_219_string)
{
	var_220_bool = 0;
	func_4871(var_220_bool);
	var_221_bool = var_220_bool == 0; //@nz
	if(var_221_bool != 0) {
		return 0;
	}
	var_222_bool = var_219_string == var_2_object;
	if(var_222_bool != 0) {
		return 0;
	}
	var_223_string = "";
	var_219_string = var_223_string;
	func_4760(var_223_string);
	var_2_object = var_219_string;
	return 0;
}


func_5375(var_261_bool)
{
	var_263_int = 0; var_264_string = "";
	func_4795(var_263_int, "ood1Ospina6");
	var_266_bool = var_263_int == (int)0;
	if(var_266_bool != 0) {
		var_261_bool = 1;
		return 0;
	}
	var_261_bool = 0;
	return 0;
}


