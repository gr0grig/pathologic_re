// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Doubt|W:Agression|W:Sorrow|W:Smile|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:.bin|W:Door |W: not found|W:locked|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|W:ui/NPC_Burah.png|W:ui/NPC_Burah_b.png|W:pt_map_burah_home|A:ShowMap|W:boiny@door1|W:ook1Burah1|W:k1q01BurahGotoAnna|W:pt_map_anna|A:AddMark|W:k2q01|W:k7q01CorpseMark|W:k7q01BirdmaskGotoCorpse|W:pt_d7q02_corpse|W:quest_k7_01|W:place_corpse|W:ook7Burah1|W:k7q01|W:bird_balahon|A:RemoveItemByType|W:k7q03BurahGotoFather|W:quest_k7_03|W:place_family|W:ook7Burah2|W:tvirin 5 is given|W:tvirin|W:completed|W:money2000 is given|W:k11q01|W:playsound|W:givemoney|W:giveitem|W:ook12BurahFactory1|W:k12q01BurahInSobor|W:k12q01_Burah|W:k12BurahVisit|W:game_final|W:k1q01LaskaGotoBurah|W:k12DankoVisit|W:k7q03|W:k12q01ChildsAreVisited|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:vol_|A:size|A:get|W:mt_burah
// @GLOBALS: 0:object:
// @RUN_OP: 0xc3c
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb4 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x265 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x38f vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4d6 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7d5 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x98f vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc12 vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0xc85 vars=int
// @EVENT_6: op=0xcab vars=
// @EVENT_5: op=0xcba vars=
// @EVENT_45: op=0xcc7 vars=bool
// @EVENT_0: op=0xcd3 vars=object
// @PE: 0x51,0x9e,0xb4,0x210,0x24f,0x265,0x33f,0x379,0x38f,0x42e,0x4c0,0x4d6,0x77b,0x7bf,0x7d5,0x8f4,0x979,0x98f,0xbc2,0xbfc,0xc12,0xc3c,0xc85,0xcab,0xcc7,0xf0a,0xf32,0xf42,0xf49,0xf62,0xf8b,0xfbd,0xfc3,0xfce,0xfd8,0xfe2,0xfeb,0xff1,0xff7,0xffd,0x1006,0x1016,0x101c,0x1026,0x1032,0x103e,0x104a,0x1056,0x1062,0x106d,0x1079,0x1085,0x1091,0x109d,0x10a9,0x10b5,0x10c1,0x10cd,0x10d9,0x11c0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3698();
		var_41_bool = var_37_cvector == (int)26042;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3913();
		}
		var_47_bool = var_37_cvector == (int)26045;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3919();
		}
		var_90_bool = var_37_cvector == (int)44014;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_3919();
		}
		var_94_bool = var_37_cvector == (int)44013;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_3919();
		}
		var_98_bool = var_36_bool == (int)26041;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_158(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524702);
			@@@var_0_object:ClearReplies();
			var_117_bool = 0;
			var_117_bool = 0;
			var_118_bool = 0; var_119_object = Obj();
			var_119_object = var_1_object;
			func_4146(var_119_object);
			if(var_118_bool != 0) {
				var_126_bool = 0; var_127_object = Obj();
				var_127_object = var_1_object;
				func_4158(var_127_object);
				if(var_126_bool != 0) {
					var_117_bool = 1;
				}
			}
			if(var_117_bool != 0) {
				@@@var_0_object:AddReply((int)524703, (int)28087, (int)26042);
			}
			@@@var_0_object:AddReply((int)524704, (int)-1, (int)26043);
			@@@var_0_object:AddReply((int)541803, (int)-1, (int)44015);
			return 0;
		}
		var_142_bool = var_36_bool == (int)28087;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_158(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)526807);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526808, (int)28089, (int)28088);
			@@@var_0_object:AddReply((int)541797, (int)28092, (int)44007);
			return 0;
		}
		var_152_bool = var_36_bool == (int)28089;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_158(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)526809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526810, (int)26044, (int)28090);
			@@@var_0_object:AddReply((int)526811, (int)28092, (int)28091);
			return 0;
		}
		var_162_bool = var_36_bool == (int)28092;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_158(var_37_cvector, "Agression");
			@@@var_0_object:SetMessage((int)526812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526813, (int)28095, (int)28093);
			@@@var_0_object:AddReply((int)526814, (int)28095, (int)28094);
			return 0;
		}
		var_172_bool = var_36_bool == (int)28095;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_158(var_37_cvector, "Agression");
			@@@var_0_object:SetMessage((int)526815);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526816, (int)26044, (int)28097);
			return 0;
		}
		var_179_bool = var_36_bool == (int)26044;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_158(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)524705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541798, (int)44010, (int)44009);
			return 0;
		}
		var_186_bool = var_36_bool == (int)44010;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_158(var_37_cvector, "Agression");
			@@@var_0_object:SetMessage((int)541799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526817, (int)28100, (int)28099);
			@@@var_0_object:AddReply((int)541800, (int)28102, (int)44011);
			return 0;
		}
		var_196_bool = var_36_bool == (int)28100;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_158(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526818);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526819, (int)28102, (int)28101);
			@@@var_0_object:AddReply((int)541801, (int)-1, (int)44013);
			return 0;
		}
		var_206_bool = var_36_bool == (int)28102;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_158(var_37_cvector, "Agression");
			@@@var_0_object:SetMessage((int)526820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524706, (int)-1, (int)26045);
			@@@var_0_object:AddReply((int)541802, (int)-1, (int)44014);
			return 0;
		}
		var_3_string = true;
		var_215_bool = 0;
		func_3888(var_215_bool);
		if(var_215_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb5";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3698();
		var_41_bool = var_37_cvector == (int)26628;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3938();
		}
		var_70_bool = var_36_bool == (int)26625;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_591(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525257);
			@@@var_0_object:ClearReplies();
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_4182(var_90_object);
			if(var_89_bool != 0) {
				@@@var_0_object:AddReply((int)525258, (int)30607, (int)26626);
			}
			@@@var_0_object:AddReply((int)525261, (int)-1, (int)26629);
			return 0;
		}
		var_104_bool = var_36_bool == (int)30607;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_591(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)529158);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529159, (int)30609, (int)30608);
			@@@var_0_object:AddReply((int)529161, (int)30611, (int)30610);
			return 0;
		}
		var_114_bool = var_36_bool == (int)30611;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_591(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)529162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529163, (int)26627, (int)30612);
			return 0;
		}
		var_121_bool = var_36_bool == (int)30609;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_591(var_37_cvector, "Smile");
			@@@var_0_object:SetMessage((int)529160);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529164, (int)26627, (int)30613);
			return 0;
		}
		var_128_bool = var_36_bool == (int)26627;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_591(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525259);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525260, (int)-1, (int)26628);
			@@@var_0_object:AddReply((int)529166, (int)-1, (int)30616);
			return 0;
		}
		var_3_string = true;
		var_137_bool = 0;
		func_3888(var_137_bool);
		if(var_137_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x266";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3698();
		var_41_bool = var_36_bool == (int)26827;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_889(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525471);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525472, (int)27550, (int)26828);
			@@@var_0_object:AddReply((int)526276, (int)28085, (int)27552);
			return 0;
		}
		var_67_bool = var_36_bool == (int)28085;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_889(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526805);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526806, (int)-1, (int)28086);
			return 0;
		}
		var_74_bool = var_36_bool == (int)27550;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_889(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526274);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526275, (int)-1, (int)27551);
			return 0;
		}
		var_3_string = true;
		var_80_bool = 0;
		func_3888(var_80_bool);
		if(var_80_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x390";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3698();
		var_41_bool = var_37_cvector == (int)27656;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3998();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_4081();
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_4035(var_110_object);
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_3890(var_134_object);
		}
		var_160_bool = var_37_cvector == (int)27454;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_3979();
		}
		var_166_bool = var_37_cvector == (int)27456;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_3947();
		}
		var_189_bool = var_37_cvector == (int)27460;
		if(var_189_bool != 0) {
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_object;
			func_3985(var_191_object);
		}
		var_207_bool = var_37_cvector == (int)27660;
		if(var_207_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_3998();
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_4035(var_211_object);
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_4081();
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_3890(var_215_object);
		}
		var_217_bool = var_37_cvector == (int)27669;
		if(var_217_bool != 0) {
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_4046();
			var_231_object = Obj(); var_232_object = Obj();
			var_231_object = var_1_object;
			var_232_object = var_0_object;
			func_4056(var_232_object);
			var_249_object = Obj(); var_250_object = Obj();
			var_249_object = var_1_object;
			var_250_object = var_0_object;
			func_4075();
		}
		var_254_bool = var_37_cvector == (int)44880;
		if(var_254_bool != 0) {
			var_255_object = Obj(); var_256_object = Obj();
			var_255_object = var_1_object;
			var_256_object = var_0_object;
			func_4046();
		}
		var_258_bool = var_36_bool == (int)27653;
		if(var_258_bool != 0) {
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_4241(var_260_object);
			if(var_259_bool != 0) {
				var_265_object = Obj(); var_266_object = Obj();
				var_265_object = var_1_object;
				var_266_object = var_0_object;
				func_4029();
				var_269_string = "";
				func_1216(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526373);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526374, (int)27655, (int)27654);
				@@@var_0_object:AddReply((int)528676, (int)27655, (int)30089);
				return 0;
			}
			var_293_string = "";
			func_1216(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526173);
			@@@var_0_object:ClearReplies();
			var_295_bool = 0;
			var_295_bool = 0;
			var_296_bool = 0; var_297_object = Obj();
			var_297_object = var_1_object;
			func_4205(var_297_object);
			if(var_296_bool != 0) {
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_4217(var_303_object);
				if(var_302_bool != 0) {
					var_295_bool = 1;
				}
			}
			if(var_295_bool != 0) {
				@@@var_0_object:AddReply((int)526174, (int)27455, (int)27454);
			}
			var_311_bool = 0;
			var_311_bool = 0;
			var_312_bool = 0; var_313_object = Obj();
			var_313_object = var_1_object;
			func_4205(var_313_object);
			if(var_312_bool != 0) {
				var_314_bool = 0; var_315_object = Obj();
				var_315_object = var_1_object;
				func_4194(var_314_bool, var_315_object);
				if(var_314_bool != 0) {
					var_311_bool = 1;
				}
			}
			if(var_311_bool != 0) {
				@@@var_0_object:AddReply((int)526178, (int)27459, (int)27458);
			}
			var_326_bool = 0; var_327_object = Obj();
			var_327_object = var_1_object;
			func_4229(var_327_object);
			if(var_326_bool != 0) {
				@@@var_0_object:AddReply((int)526378, (int)27659, (int)27658);
			}
			var_335_bool = 0; var_336_object = Obj();
			var_336_object = var_1_object;
			func_4253(var_336_object);
			if(var_335_bool != 0) {
				@@@var_0_object:AddReply((int)526387, (int)44876, (int)27667);
			}
			@@@var_0_object:AddReply((int)526181, (int)-1, (int)27461);
			@@@var_0_object:AddReply((int)528675, (int)-1, (int)30088);
			return 0;
		}
		var_351_bool = var_36_bool == (int)44876;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_1216(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)542490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542491, (int)27668, (int)44877);
			@@@var_0_object:AddReply((int)542492, (int)27668, (int)44878);
			return 0;
		}
		var_361_bool = var_36_bool == (int)27668;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_1216(var_37_cvector, "Smile");
			@@@var_0_object:SetMessage((int)526388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526389, (int)-1, (int)27669);
			@@@var_0_object:AddReply((int)542493, (int)-1, (int)44880);
			return 0;
		}
		var_371_bool = var_36_bool == (int)27659;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_1216(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526380, (int)-1, (int)27660);
			return 0;
		}
		var_378_bool = var_36_bool == (int)27459;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_1216(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528687, (int)30103, (int)30102);
			return 0;
		}
		var_385_bool = var_36_bool == (int)30103;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_1216(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)528688);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528689, (int)30105, (int)30104);
			return 0;
		}
		var_392_bool = var_36_bool == (int)30105;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_1216(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)528690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528691, (int)30107, (int)30106);
			@@@var_0_object:AddReply((int)528697, (int)30113, (int)30112);
			return 0;
		}
		var_402_bool = var_36_bool == (int)30113;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_1216(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528699, (int)30107, (int)30114);
			return 0;
		}
		var_409_bool = var_36_bool == (int)30107;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_1216(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528692);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528693, (int)30109, (int)30108);
			return 0;
		}
		var_416_bool = var_36_bool == (int)30109;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_1216(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)528694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528702, (int)30118, (int)30117);
			@@@var_0_object:AddReply((int)528700, (int)30116, (int)30115);
			return 0;
		}
		var_426_bool = var_36_bool == (int)30116;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_1216(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528704, (int)30118, (int)30119);
			return 0;
		}
		var_433_bool = var_36_bool == (int)30118;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_1216(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)528703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528695, (int)30111, (int)30110);
			return 0;
		}
		var_440_bool = var_36_bool == (int)30111;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_1216(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)528696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526180, (int)-1, (int)27460);
			return 0;
		}
		var_447_bool = var_36_bool == (int)27455;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_1216(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)526175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528685, (int)30101, (int)30100);
			return 0;
		}
		var_454_bool = var_36_bool == (int)30101;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_1216(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)528686);
			@@@var_0_object:ClearReplies();
			var_457_bool = 0; var_458_object = Obj();
			var_458_object = var_1_object;
			func_4194(var_457_bool, var_458_object);
			var_459_bool = var_457_bool == 0; //@nz
			if(var_459_bool != 0) {
				@@@var_0_object:AddReply((int)526176, (int)-1, (int)27456);
			}
			var_463_bool = 0; var_464_object = Obj();
			var_464_object = var_1_object;
			func_4194(var_463_bool, var_464_object);
			if(var_463_bool != 0) {
				@@@var_0_object:AddReply((int)526177, (int)27459, (int)27457);
			}
			return 0;
		}
		var_469_bool = var_36_bool == (int)27655;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_1216(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526375);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528677, (int)30092, (int)30091);
			return 0;
		}
		var_476_bool = var_36_bool == (int)30092;
		if(var_476_bool != 0) {
			var_477_string = "";
			func_1216(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)528678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528679, (int)30094, (int)30093);
			@@@var_0_object:AddReply((int)528681, (int)30094, (int)30095);
			return 0;
		}
		var_486_bool = var_36_bool == (int)30094;
		if(var_486_bool != 0) {
			var_487_string = "";
			func_1216(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)528680);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528682, (int)30098, (int)30097);
			return 0;
		}
		var_493_bool = var_36_bool == (int)30098;
		if(var_493_bool != 0) {
			var_494_string = "";
			func_1216(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528683);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526376, (int)-1, (int)27656);
			@@@var_0_object:AddReply((int)526377, (int)-1, (int)27657);
			return 0;
		}
		var_3_string = true;
		var_502_bool = 0;
		func_3888(var_502_bool);
		if(var_502_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4d7";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3698();
		var_41_bool = var_37_cvector == (int)28885;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4066();
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_3906();
		}
		var_82_bool = var_36_bool == (int)28512;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_1983(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527204);
			@@@var_0_object:ClearReplies();
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_4265(var_102_object);
			if(var_101_bool != 0) {
				@@@var_0_object:AddReply((int)527205, (int)28514, (int)28513);
			}
			@@@var_0_object:AddReply((int)527210, (int)-1, (int)28518);
			@@@var_0_object:AddReply((int)527533, (int)-1, (int)28871);
			return 0;
		}
		var_119_bool = var_36_bool == (int)28514;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_1983(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)527206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527207, (int)28516, (int)28515);
			return 0;
		}
		var_126_bool = var_36_bool == (int)28516;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_1983(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)527208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527534, (int)28874, (int)28872);
			@@@var_0_object:AddReply((int)527535, (int)28874, (int)28873);
			return 0;
		}
		var_136_bool = var_36_bool == (int)28874;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_1983(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)527536);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527537, (int)28876, (int)28875);
			@@@var_0_object:AddReply((int)527539, (int)28876, (int)28878);
			return 0;
		}
		var_146_bool = var_36_bool == (int)28876;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_1983(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)527538);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527540, (int)28881, (int)28880);
			return 0;
		}
		var_153_bool = var_36_bool == (int)28881;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_1983(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)527541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527542, (int)28883, (int)28882);
			return 0;
		}
		var_160_bool = var_36_bool == (int)28883;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_1983(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)527543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527209, (int)28884, (int)28517);
			@@@var_0_object:AddReply((int)527546, (int)28884, (int)28886);
			return 0;
		}
		var_170_bool = var_36_bool == (int)28884;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_1983(var_37_cvector, "Smile");
			@@@var_0_object:SetMessage((int)527544);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527545, (int)-1, (int)28885);
			return 0;
		}
		var_3_string = true;
		var_176_bool = 0;
		func_3888(var_176_bool);
		if(var_176_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7d6";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3698();
		var_41_bool = var_37_cvector == (int)41268;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4102();
		}
		var_76_bool = var_37_cvector == (int)41271;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_4093();
		}
		var_90_bool = var_37_cvector == (int)41278;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_4093();
		}
		var_94_bool = var_36_bool == (int)41261;
		if(var_94_bool != 0) {
			var_95_bool = 0;
			var_95_bool = 0;
			var_96_bool = 0; var_97_object = Obj();
			var_97_object = var_1_object;
			func_4301(var_97_object);
			if(var_96_bool != 0) {
				var_102_bool = 0; var_103_object = Obj();
				var_103_object = var_1_object;
				func_4134(var_103_object);
				var_108_bool = var_102_bool == 0; //@nz
				if(var_108_bool != 0) {
					var_95_bool = 1;
				}
			}
			if(var_95_bool != 0) {
				var_109_object = Obj(); var_110_object = Obj();
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_4087();
				var_113_object = Obj(); var_114_object = Obj();
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_4118();
				var_117_string = "";
				func_2425(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)539318);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541446, (int)45384, (int)43602);
				@@@var_0_object:AddReply((int)542944, (int)45384, (int)45383);
				return 0;
			}
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_4118();
			var_143_string = "";
			func_2425(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539331);
			@@@var_0_object:ClearReplies();
			var_145_bool = 0;
			var_145_bool = 0;
			var_146_bool = 0;
			var_146_bool = 0;
			var_147_bool = 0; var_148_object = Obj();
			var_148_object = var_1_object;
			func_4124(var_147_bool, var_148_object);
			if(var_147_bool != 0) {
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_4289(var_197_object);
				var_202_bool = var_196_bool == 0; //@nz
				if(var_202_bool != 0) {
					var_146_bool = 1;
				}
			}
			if(var_146_bool != 0) {
				var_203_bool = 0; var_204_object = Obj();
				var_204_object = var_1_object;
				func_4134(var_204_object);
				var_205_bool = var_203_bool == 0; //@nz
				if(var_205_bool != 0) {
					var_145_bool = 1;
				}
			}
			if(var_145_bool != 0) {
				@@@var_0_object:AddReply((int)539332, (int)41277, (int)41276);
			}
			@@@var_0_object:AddReply((int)539335, (int)-1, (int)41279);
			return 0;
		}
		var_213_bool = var_36_bool == (int)41277;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_2425(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)539333);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539334, (int)-1, (int)41278);
			return 0;
		}
		var_220_bool = var_36_bool == (int)45384;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_2425(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)542945);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542946, (int)45386, (int)45385);
			return 0;
		}
		var_227_bool = var_36_bool == (int)45386;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_2425(var_37_cvector, "Smile");
			@@@var_0_object:SetMessage((int)542947);
			@@@var_0_object:ClearReplies();
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_4170(var_231_object);
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)542955, (int)45398, (int)45395);
			}
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_4277(var_240_object);
			if(var_239_bool != 0) {
				@@@var_0_object:AddReply((int)542957, (int)45396, (int)45397);
			}
			@@@var_0_object:AddReply((int)542951, (int)45402, (int)45391);
			return 0;
		}
		var_252_bool = var_36_bool == (int)45402;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_2425(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542962, (int)43611, (int)45403);
			@@@var_0_object:AddReply((int)542963, (int)-1, (int)45404);
			return 0;
		}
		var_262_bool = var_36_bool == (int)45396;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_2425(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)542956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542960, (int)45392, (int)45401);
			return 0;
		}
		var_269_bool = var_36_bool == (int)45392;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_2425(var_37_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)542952);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542953, (int)45394, (int)45393);
			return 0;
		}
		var_276_bool = var_36_bool == (int)45394;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_2425(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)542954);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542948, (int)45388, (int)45387);
			@@@var_0_object:AddReply((int)542964, (int)45406, (int)45405);
			return 0;
		}
		var_286_bool = var_36_bool == (int)45388;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_2425(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)542949);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542950, (int)45406, (int)45389);
			return 0;
		}
		var_293_bool = var_36_bool == (int)45406;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_2425(var_37_cvector, "Smile");
			@@@var_0_object:SetMessage((int)542965);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542966, (int)43611, (int)45407);
			@@@var_0_object:AddReply((int)542967, (int)45410, (int)45408);
			return 0;
		}
		var_303_bool = var_36_bool == (int)45410;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_2425(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542969, (int)45412, (int)45411);
			return 0;
		}
		var_310_bool = var_36_bool == (int)45412;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_2425(var_37_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)542970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542971, (int)43611, (int)45413);
			return 0;
		}
		var_317_bool = var_36_bool == (int)43611;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_2425(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541456, (int)41267, (int)43612);
			return 0;
		}
		var_324_bool = var_36_bool == (int)41267;
		if(var_324_bool != 0) {
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_4124(var_325_bool, var_326_object);
			var_327_bool = var_325_bool == 0; //@nz
			if(var_327_bool != 0) {
				var_328_string = "";
				func_2425(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)539324);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541458, (int)43615, (int)43614);
				@@@var_0_object:AddReply((int)541461, (int)-1, (int)43617);
				return 0;
			}
			var_336_bool = 0; var_337_object = Obj();
			var_337_object = var_1_object;
			func_4124(var_336_bool, var_337_object);
			if(var_336_bool != 0) {
				var_338_string = "";
				func_2425(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)539327);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539328, (int)-1, (int)41271);
				@@@var_0_object:AddReply((int)539329, (int)-1, (int)41272);
				return 0;
			}
		}
		var_347_bool = var_36_bool == (int)43615;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_2425(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539325, (int)-1, (int)41268);
			return 0;
		}
		var_354_bool = var_36_bool == (int)45398;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_2425(var_37_cvector, "Smile");
			@@@var_0_object:SetMessage((int)542958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542959, (int)45396, (int)45399);
			return 0;
		}
		var_3_string = true;
		var_360_bool = 0;
		func_3888(var_360_bool);
		if(var_360_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x990";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_3698();
		var_41_bool = var_36_int == (int)42554;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_3068(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_3888(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc13";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_3201();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_3422(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_3170(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_3150(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_3705(Obj());
				var_82_object = var_81_object;
				func_3572(var_80_bool, var_81_object);
			}
		} else {
			func_3165(var_36_int);
			func_3192();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3383();
	func_3201();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_3201();
	var_37_string = "";
	func_3652("Neutral");
	func_3192();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_3192();
	} else {
		var_43_string = "";
		func_3652("Neutral");
	}
	return 0;
	
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0;
	IsOverrideActive(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		EventDisable(0);
		func_3383();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_3413(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_4635(var_54_object);
		var_826_string = "";
		func_3652("Neutral");
		func_3201();
		func_3192();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3136(var_35_cvector);
	return 0;
}


func_0(var_0_object, var_289_int, var_290_object)
{
	var_292_object = Obj(); var_293_bool = 0; var_294_int = 0; var_295_bool = 0; var_296_object = Obj(); var_297_bool = 0; var_298_int = 0; var_299_bool = 0;
	var_0_object = var_290_object;
	var_300_bool = 0; var_301_object = Obj(); var_302_float = 0;
	var_290_object = var_301_object;
	func_3427(var_300_bool, var_301_object, (float)70.0);
	var_303_bool = var_300_bool == 0; //@nz
	if(var_303_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	CreateDialog(var_296_object);
	var_304_int = 0;
	func_3882(var_304_int);
	@@var_296_object:SetNPCName(var_304_int);
	var_305_int = 0;
	func_3880(var_305_int);
	@@var_296_object:SetNPCDescription(var_305_int);
	var_306_string = "";
	func_3884(var_306_string);
	@@var_296_object:SetPhoto(var_306_string);
	var_307_string = "";
	func_3886(var_307_string);
	@@var_296_object:SetPhoto2(var_307_string);
	var_308_int = 0;
	func_4527(var_308_int);
	@@var_296_object:SetPlayerName(var_308_int);
	IsOverrideActive(var_297_bool);
	var_309_bool = var_297_bool;
	if(var_309_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	DoDialog(var_296_object);
	var_310_bool = 0; var_311_object = Obj();
	func_3705(Obj());
	var_312_object = var_311_object;
	func_3514(var_310_bool, var_311_object);
	var_313_object = Obj(); var_314_object = Obj();
	var_290_object = var_313_object;
	var_296_object = var_314_object;
	TaskCall(1);
	func_81(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object);
	TaskReturn();
	@@var_296_object:IsDialogEnd(var_299_bool);
	
Label_63:
	var_361_bool = var_299_bool == 0; //@nz
	if(var_361_bool != 0) {
		sync();
		@@var_296_object:IsDialogEnd(var_299_bool);
		goto Label_63;
	}
	var_290_object = Obj();
	func_3496();
	StopDialog(var_296_object);
	@@var_296_object:GetReturnValue((int)-1);
	var_298_int = var_289_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3841(var_186_int)
{
	var_187_float = 0; var_188_float = 0;
	GetGameTime(var_188_float);
	var_190_int = 0;
	var_190_int = var_188_float / (int)24;
	var_186_int = (int)1 + var_190_int;
	return 2;
}


func_4102()
{
	var_44_int = 0; var_45_string = "";
	func_3721(var_44_int, "k12q01_Burah");
	var_49_bool = var_44_int == (int)0;
	if(var_49_bool != 0) {
		SetVariable("k12q01_Burah", (int)1);
		func_4345();
	}
	return 0;
}


func_4358()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)777, (int)1, (int)541531);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_4449(var_71_bool, var_72_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3850(var_286_bool, var_287_int)
{
	var_288_int = 0;
	func_3841(var_288_int);
	var_286_bool = var_288_int == var_287_int;
	return 0;
}


func_528(var_0_object, var_1_object, var_2_object, var_3_string, var_389_object, var_390_object)
{
	var_0_object = var_390_object;
	var_1_object = var_389_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_396_string = "";
		func_591(var_390_object, "Neutral");
		@@@var_0_object:SetMessage((int)525257);
		@@@var_0_object:ClearReplies();
		var_405_bool = 0; var_406_object = Obj();
		var_406_object = var_1_object;
		func_4182(var_406_object);
		if(var_405_bool != 0) {
			@@@var_0_object:AddReply((int)525258, (int)30607, (int)26626);
		}
		@@@var_0_object:AddReply((int)525261, (int)-1, (int)26629);
		goto Label_561;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x214";
	}
Label_561:
	var_417_bool = 0;
	func_3888(var_417_bool);
	if(var_417_bool != 0) {

	Label_565:
		lshWaitForAnimEnd();
		var_418_string = var_3_string;
		if(var_418_string != 0) {
		} else {
			var_419_string = "";
			var_419_string = var_2_object;
			func_3652(var_419_string);
			goto Label_565;
	}
		PlayAnimation("all", "idle");

	Label_580:
		WaitForAnimEnd();
		var_422_string = var_3_string;
		if(var_422_string != 0) {
			goto Label_590;
		}
		PlayAnimation("all", "idle");
		goto Label_580;
	}
	goto Label_590;
	
Label_590:
	return 0;
	
}


func_3856(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = "";
	var_64_int = var_61_int;
	if(var_64_int != 0) {
		"idle" = "idle" + var_61_int;
	}
	var_63_string = var_60_string;
	return 2;
}


func_4371()
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateDiaryEntry(var_47_object, (int)466, (int)1, (int)527782);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_47_object = var_52_object;
	func_4449(var_51_bool, var_52_object, (int)461);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4118()
{
	SetVariable("k12BurahVisit", (int)1);
	return 0;
}


func_3863(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_57_int = 0;
	
Label_3865:
	var_60_string = ""; var_61_int = 0;
	var_57_int = var_61_int;
	func_3856(var_60_string, var_61_int);
	HasAnimation(var_58_bool, "all", var_60_string);
	var_65_bool = var_58_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
		var_57_int = var_57_int + (int)1;
		goto Label_3865;
	}
	var_57_int = var_54_int;
	return 4;
	
}


func_3609(var_173_bool, var_174_object)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = "";
	var_186_int = 0;
	func_3841(var_186_int);
	var_192_int = "d" + var_186_int;
	var_180_string = var_192_int + "m";
	var_181_int = 0;
	
Label_3618:
	if((int)1 != 0) {
		var_196_int = var_181_int + (int)1;
		var_197_int = var_180_string + var_196_int;
		@@var_174_object:HasProperty(var_197_int, var_182_bool);
		var_198_bool = var_182_bool == 0; //@nz
		if(var_198_bool != 0) {
		} else {
			var_181_int = var_181_int + (int)1;
			goto Label_3618;
		}
	}
	var_199_bool = var_181_int == 0; //@nz
	if(var_199_bool != 0) {
		var_173_bool = 0;
		return 10;
	}
	var_183_int = 0;
	var_201_bool = var_181_int > (int)1;
	if(var_201_bool != 0) {
		irand(var_183_int, var_181_int);
	}
	var_203_int = var_183_int + (int)1;
	var_204_int = var_180_string + var_203_int;
	@@var_174_object:GetProperty(var_204_int, var_184_string);
	var_205_bool = 0; var_206_string = "";
	var_184_string = var_206_string;
	func_3683(var_205_bool, var_206_string);
	var_205_bool = var_173_bool;
	return 10;
	
}


func_4635(var_54_object)
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("mt_burah", var_56_int);
	var_58_bool = var_56_int == 0; //@nz
	if(var_58_bool != 0) {
		var_59_int = 0; var_60_object = Obj();
		var_54_object = var_60_object;
		TaskCall(4);
		func_750(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		SetVariable("mt_burah", (int)1);
	}
	var_286_bool = 0; var_287_int = 0;
	func_3850(var_286_bool, (int)1);
	if(var_286_bool != 0) {
		var_289_int = 0; var_290_object = Obj();
		var_54_object = var_290_object;
		TaskCall(0);
		func_0(var_291_object, var_289_int, var_290_object);
		TaskReturn();
		return 2;
	}
	var_363_bool = 0; var_364_int = 0;
	func_3850(var_363_bool, (int)2);
	if(var_363_bool != 0) {
		var_365_int = 0; var_366_object = Obj();
		var_54_object = var_366_object;
		TaskCall(2);
		func_447(var_367_object, var_365_int, var_366_object);
		TaskReturn();
		return 2;
	}
	var_427_bool = 0; var_428_int = 0;
	func_3850(var_427_bool, (int)7);
	if(var_427_bool != 0) {
		var_429_int = 0; var_430_object = Obj();
		var_54_object = var_430_object;
		TaskCall(6);
		func_989(var_431_object, var_429_int, var_430_object);
		TaskReturn();
		return 2;
	}
	var_552_bool = 0; var_553_int = 0;
	func_3850(var_552_bool, (int)11);
	if(var_552_bool != 0) {
		var_554_int = 0; var_555_object = Obj();
		var_54_object = var_555_object;
		TaskCall(8);
		func_1834(var_556_object, var_554_int, var_555_object);
		TaskReturn();
		return 2;
	}
	var_619_bool = 0; var_620_int = 0;
	func_3850(var_619_bool, (int)12);
	if(var_619_bool != 0) {
		var_621_int = 0; var_622_object = Obj();
		var_54_object = var_622_object;
		TaskCall(10);
		func_2211(var_623_object, var_621_int, var_622_object);
		TaskReturn();
		return 2;
	}
	var_770_int = 0; var_771_object = Obj();
	var_54_object = var_771_object;
	TaskCall(12);
	func_2929(var_772_object, var_770_int, var_771_object);
	TaskReturn();
	return 2;
}


func_4124(var_703_bool, var_704_object)
{
	var_705_bool = 0; var_706_object = Obj();
	var_704_object = var_706_object;
	func_4313(var_706_object);
	if(var_705_bool != 0) {
		var_703_bool = 1;
		return 0;
	}
	var_703_bool = 0;
	return 0;
}


func_4384()
{
	var_196_object = Obj(); var_197_object = Obj();
	CreateDiaryEntry(var_197_object, (int)422, (int)1, (int)526221);
	var_201_bool = 0; var_202_object = Obj(); var_203_int = 0;
	var_197_object = var_202_object;
	func_4449(var_201_bool, var_202_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4134(var_659_bool)
{
	var_661_int = 0; var_662_string = "";
	func_3721(var_661_int, "game_final");
	var_664_bool = var_661_int != (int)0;
	if(var_664_bool != 0) {
		var_659_bool = 1;
		return 0;
	}
	var_659_bool = 0;
	return 0;
}


func_3880(var_119_int)
{
	var_119_int = 515592;
	return 0;
}


func_3882(var_118_int)
{
	var_118_int = 511961;
	return 0;
}


func_1834(var_0_object, var_554_int, var_555_object)
{
	var_557_object = Obj(); var_558_bool = 0; var_559_int = 0; var_560_bool = 0; var_561_object = Obj(); var_562_bool = 0; var_563_int = 0; var_564_bool = 0;
	var_0_object = var_555_object;
	var_565_bool = 0; var_566_object = Obj(); var_567_float = 0;
	var_555_object = var_566_object;
	func_3427(var_565_bool, var_566_object, (float)70.0);
	var_568_bool = var_565_bool == 0; //@nz
	if(var_568_bool != 0) {
		var_554_int = -2;
		return 8;
	}
	CreateDialog(var_561_object);
	var_569_int = 0;
	func_3882(var_569_int);
	@@var_561_object:SetNPCName(var_569_int);
	var_570_int = 0;
	func_3880(var_570_int);
	@@var_561_object:SetNPCDescription(var_570_int);
	var_571_string = "";
	func_3884(var_571_string);
	@@var_561_object:SetPhoto(var_571_string);
	var_572_string = "";
	func_3886(var_572_string);
	@@var_561_object:SetPhoto2(var_572_string);
	var_573_int = 0;
	func_4527(var_573_int);
	@@var_561_object:SetPlayerName(var_573_int);
	IsOverrideActive(var_562_bool);
	var_574_bool = var_562_bool;
	if(var_574_bool != 0) {
		var_554_int = -2;
		return 8;
	}
	DoDialog(var_561_object);
	var_575_bool = 0; var_576_object = Obj();
	func_3705(Obj());
	var_577_object = var_576_object;
	func_3514(var_575_bool, var_576_object);
	var_578_object = Obj(); var_579_object = Obj();
	var_555_object = var_578_object;
	var_561_object = var_579_object;
	TaskCall(9);
	func_1915(var_580_object, var_581_object, var_582_string, var_583_bool, var_578_object, var_579_object);
	TaskReturn();
	@@var_561_object:IsDialogEnd(var_564_bool);
	
Label_1897:
	var_617_bool = var_564_bool == 0; //@nz
	if(var_617_bool != 0) {
		sync();
		@@var_561_object:IsDialogEnd(var_564_bool);
		goto Label_1897;
	}
	var_555_object = Obj();
	func_3496();
	StopDialog(var_561_object);
	@@var_561_object:GetReturnValue((int)-1);
	var_563_int = var_554_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3884(var_120_string)
{
	var_120_string = "ui/NPC_Burah.png";
	return 0;
}


func_4397()
{
	var_60_object = Obj(); var_61_object = Obj();
	CreateDiaryEntry(var_61_object, (int)434, (int)2, (int)526390);
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0;
	var_61_object = var_66_object;
	func_4449(var_65_bool, var_66_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1070(var_0_object, var_1_object, var_2_object, var_3_string, var_453_object, var_454_object)
{
	var_0_object = var_454_object;
	var_1_object = var_453_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_460_bool = 0; var_461_object = Obj();
		var_461_object = var_1_object;
		func_4241(var_461_object);
		if(var_460_bool != 0) {
			var_466_object = Obj(); var_467_object = Obj();
			var_466_object = var_1_object;
			var_467_object = var_0_object;
			func_4029();
			var_470_string = "";
			func_1216(var_454_object, "Neutral");
			@@@var_0_object:SetMessage((int)526373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526374, (int)27655, (int)27654);
			@@@var_0_object:AddReply((int)528676, (int)27655, (int)30089);
		} else {
				var_493_string = "";
				func_1216(var_454_object, "Neutral");
				@@@var_0_object:SetMessage((int)526173);
				@@@var_0_object:ClearReplies();
				var_495_bool = 0;
				var_495_bool = 0;
				var_496_bool = 0; var_497_object = Obj();
				var_497_object = var_1_object;
				func_4205(var_497_object);
				if(var_496_bool != 0) {
					var_502_bool = 0; var_503_object = Obj();
					var_503_object = var_1_object;
					func_4217(var_503_object);
					if(var_502_bool != 0) {
						var_495_bool = 1;
					}
				}
				if(var_495_bool != 0) {
					@@@var_0_object:AddReply((int)526174, (int)27455, (int)27454);
				}
				var_511_bool = 0;
				var_511_bool = 0;
				var_512_bool = 0; var_513_object = Obj();
				var_513_object = var_1_object;
				func_4205(var_513_object);
				if(var_512_bool != 0) {
					var_514_bool = 0; var_515_object = Obj();
					var_515_object = var_1_object;
					func_4194(var_514_bool, var_515_object);
					if(var_514_bool != 0) {
						var_511_bool = 1;
					}
				}
				if(var_511_bool != 0) {
					@@@var_0_object:AddReply((int)526178, (int)27459, (int)27458);
				}
				var_526_bool = 0; var_527_object = Obj();
				var_527_object = var_1_object;
				func_4229(var_527_object);
				if(var_526_bool != 0) {
					@@@var_0_object:AddReply((int)526378, (int)27659, (int)27658);
				}
				var_535_bool = 0; var_536_object = Obj();
				var_536_object = var_1_object;
				func_4253(var_536_object);
				if(var_535_bool != 0) {
					@@@var_0_object:AddReply((int)526387, (int)44876, (int)27667);
				}
				@@@var_0_object:AddReply((int)526181, (int)-1, (int)27461);
				@@@var_0_object:AddReply((int)528675, (int)-1, (int)30088);
				goto Label_1186;
		}
	}
Label_1186:
	var_485_bool = 0;
	func_3888(var_485_bool);
	if(var_485_bool != 0) {

	Label_1190:
		lshWaitForAnimEnd();
		var_486_string = var_3_string;
		if(var_486_string != 0) {
		} else {
			var_487_string = "";
			var_487_string = var_2_object;
			func_3652(var_487_string);
			goto Label_1190;
	}
		PlayAnimation("all", "idle");

	Label_1205:
		WaitForAnimEnd();
		var_490_string = var_3_string;
		if(var_490_string != 0) {
			goto Label_1215;
		}
		PlayAnimation("all", "idle");
		goto Label_1205;

	}
	goto Label_1215;
	
Label_1215:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x432";


func_3886(var_121_string)
{
	var_121_string = "ui/NPC_Burah_b.png";
	return 0;
}


func_3888(var_113_bool)
{
	var_113_bool = 1;
	return 0;
}


func_4146(var_330_bool)
{
	var_332_int = 0; var_333_string = "";
	func_3721(var_332_int, "k1q01LaskaGotoBurah");
	var_337_bool = var_332_int != (int)0;
	if(var_337_bool != 0) {
		var_330_bool = 1;
		return 0;
	}
	var_330_bool = 0;
	return 0;
}


func_3890(var_134_object)
{
	var_135_object = Obj(); var_136_string = ""; var_137_float = 0;
	func_4477(Obj());
	var_138_object = var_135_object;
	func_4494(var_135_object, "pt_map_burah_home", (float)2);
	var_158_object = Obj();
	func_4477(var_158_object);
	@@var_134_object:ShowMap(var_158_object);
	return 0;
}


func_3381(var_74_bool)
{
	var_74_bool = 1;
	return 0;
}


func_3383()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4410()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)435, (int)2, (int)526391);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_4449(var_88_bool, var_89_object, (int)434);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3388(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_4158(var_338_bool)
{
	var_340_int = 0; var_341_string = "";
	func_3721(var_340_int, "ook1Burah1");
	var_343_bool = var_340_int == (int)0;
	if(var_343_bool != 0) {
		var_338_bool = 1;
		return 0;
	}
	var_338_bool = 0;
	return 0;
}


func_831(var_0_object, var_1_object, var_2_object, var_3_string, var_226_object, var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_233_string = "";
		func_889(var_227_object, "Neutral");
		@@@var_0_object:SetMessage((int)525471);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525472, (int)27550, (int)26828);
		@@@var_0_object:AddReply((int)526276, (int)28085, (int)27552);
		goto Label_859;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x343";
	}
Label_859:
	var_257_bool = 0;
	func_3888(var_257_bool);
	if(var_257_bool != 0) {

	Label_863:
		lshWaitForAnimEnd();
		var_258_string = var_3_string;
		if(var_258_string != 0) {
		} else {
			var_259_string = "";
			var_259_string = var_2_object;
			func_3652(var_259_string);
			goto Label_863;
	}
		PlayAnimation("all", "idle");

	Label_878:
		WaitForAnimEnd();
		var_272_string = var_3_string;
		if(var_272_string != 0) {
			goto Label_888;
		}
		PlayAnimation("all", "idle");
		goto Label_878;
	}
	goto Label_888;
	
Label_888:
	return 0;
	
}


func_3136(var_0_object)
{
	var_36_bool = 0;
	func_3422(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_3145:
	func_3312();
	goto Label_3145;
}
EMIT "Return(); Pop(0)";


func_3906()
{
	var_71_string = ""; var_72_bool = 0;
	func_3737("boiny@door1", (bool)0);
	return 0;
}


func_3652(var_259_string)
{
	var_260_bool = 0; var_261_float = 0; var_262_float = 0; var_263_bool = 0; var_264_float = 0; var_265_float = 0;
	lshHasAnimation(var_263_bool, var_259_string);
	var_266_bool = var_263_bool;
	if(var_266_bool != 0) {
		lshGetAnimTimes(var_259_string, var_264_float, var_265_float);
		lshPlayAnimation(var_264_float, var_265_float, (bool)0);
	} else {
		var_269_int = "Can't find lsh animation : " + var_259_string;
		Trace(var_269_int);
	}
	return 6;
	
}


func_3396(var_238_object, var_239_string, var_240_int)
{
	var_241_int = 0; var_242_int = 0;
	@@var_238_object:GetProperty(var_239_string, var_242_int);
	var_243_int = var_242_int + var_240_int;
	@@var_238_object:SetProperty(var_239_string, var_243_int);
	return 2;
}


func_4423()
{
	var_220_object = Obj(); var_221_object = Obj();
	CreateDiaryEntry(var_221_object, (int)437, (int)2, (int)526393);
	var_225_bool = 0; var_226_object = Obj(); var_227_int = 0;
	var_221_object = var_226_object;
	func_4449(var_225_bool, var_226_object, (int)434);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3913()
{
	SetVariable("ook1Burah1", (int)1);
	return 0;
}


func_4170(var_230_bool)
{
	var_232_int = 0; var_233_string = "";
	func_3721(var_232_int, "k12DankoVisit");
	var_235_bool = var_232_int != (int)0;
	if(var_235_bool != 0) {
		var_230_bool = 1;
		return 0;
	}
	var_230_bool = 0;
	return 0;
}


func_3403(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0;
	GetPosition(var_49_cvector);
	var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
	return 6;
}


func_3068(var_2_object, var_801_string)
{
	var_802_bool = 0;
	func_3888(var_802_bool);
	var_803_bool = var_802_bool == 0; //@nz
	if(var_803_bool != 0) {
		return 0;
	}
	var_804_bool = var_801_string == var_2_object;
	if(var_804_bool != 0) {
		return 0;
	}
	var_805_string = ""; var_806_bool = 0;
	var_801_string = var_805_string;
	var_808_bool = var_801_string == "";
	if(var_808_bool != 0) {
		var_806_bool = 0;
	} else {
		var_806_bool = 1;
	}
	func_3668(var_805_string, var_806_bool);
	var_2_object = var_801_string;
	return 0;
	
}


func_3150(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj();
	FindActor(var_63_object, "player");
	var_65_bool = var_63_object == 0; //@nz
	if(var_65_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	var_66_bool = 0; var_67_object = Obj();
	var_63_object = var_67_object;
	func_3413(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_591(var_2_object, var_396_string)
{
	var_397_bool = 0;
	func_3888(var_397_bool);
	var_398_bool = var_397_bool == 0; //@nz
	if(var_398_bool != 0) {
		return 0;
	}
	var_399_bool = var_396_string == var_2_object;
	if(var_399_bool != 0) {
		return 0;
	}
	var_400_string = ""; var_401_bool = 0;
	var_396_string = var_400_string;
	var_403_bool = var_396_string == "";
	if(var_403_bool != 0) {
		var_401_bool = 0;
	} else {
		var_401_bool = 1;
	}
	func_3668(var_400_string, var_401_bool);
	var_2_object = var_396_string;
	return 0;
	
}


func_3919()
{
	var_50_object = Obj(); var_51_object = Obj();
	func_4477(Obj());
	var_52_object = var_51_object;
	var_63_float = 0;
	func_3836(var_63_float);
	@@var_51_object:AddMark("k1q01BurahGotoAnna", "pt_map_anna", (int)1, (int)524732, var_63_float);
	func_4358();
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_313_object, var_314_object)
{
	var_0_object = var_314_object;
	var_1_object = var_313_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_320_string = "";
		func_158(var_314_object, "Neutral");
		@@@var_0_object:SetMessage((int)524702);
		@@@var_0_object:ClearReplies();
		var_329_bool = 0;
		var_329_bool = 0;
		var_330_bool = 0; var_331_object = Obj();
		var_331_object = var_1_object;
		func_4146(var_331_object);
		if(var_330_bool != 0) {
			var_338_bool = 0; var_339_object = Obj();
			var_339_object = var_1_object;
			func_4158(var_339_object);
			if(var_338_bool != 0) {
				var_329_bool = 1;
			}
		}
		if(var_329_bool != 0) {
			@@@var_0_object:AddReply((int)524703, (int)28087, (int)26042);
		}
		@@@var_0_object:AddReply((int)524704, (int)-1, (int)26043);
		@@@var_0_object:AddReply((int)541803, (int)-1, (int)44015);
		goto Label_128;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_128:
	var_353_bool = 0;
	func_3888(var_353_bool);
	if(var_353_bool != 0) {

	Label_132:
		lshWaitForAnimEnd();
		var_354_string = var_3_string;
		if(var_354_string != 0) {
		} else {
			var_355_string = "";
			var_355_string = var_2_object;
			func_3652(var_355_string);
			goto Label_132;
	}
		PlayAnimation("all", "idle");

	Label_147:
		WaitForAnimEnd();
		var_358_string = var_3_string;
		if(var_358_string != 0) {
			goto Label_157;
		}
		PlayAnimation("all", "idle");
		goto Label_147;
	}
	goto Label_157;
	
Label_157:
	return 0;
	
}


func_3668(var_237_string, var_238_bool)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0;
	lshHasAnimation(var_244_bool, var_237_string);
	var_247_bool = var_244_bool;
	if(var_247_bool != 0) {
		lshGetAnimTimes(var_237_string, var_245_float, var_246_float);
		lshPlayAnimation(var_245_float, var_246_float, var_238_bool);
	} else {
		var_249_int = "Can't find lsh animation : " + var_237_string;
		Trace(var_249_int);
	}
	return 6;
	
}


func_4436(var_66_object)
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


func_4182(var_405_bool)
{
	var_407_int = 0; var_408_string = "";
	func_3721(var_407_int, "k2q01");
	var_410_bool = var_407_int == (int)4;
	if(var_410_bool != 0) {
		var_405_bool = 1;
		return 0;
	}
	var_405_bool = 0;
	return 0;
}


func_3413(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_3403(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_3165(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_3422(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_4449(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0;
	func_4436(Obj());
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
	SendWorldWndMessage((int)7);
	@@var_58_object:GetCategory(var_65_int);
	SetDiarySection(var_65_int);
	var_57_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4194(var_514_bool, var_515_object)
{
	var_516_bool = 0; var_517_object = Obj(); var_518_string = "";
	var_515_object = var_517_object;
	func_3817(var_516_bool, var_517_object, "bird_balahon");
	if(var_516_bool != 0) {
		var_514_bool = 1;
		return 0;
	}
	var_514_bool = 0;
	return 0;
}


func_3170(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0;
	FindActor(var_47_object, "player");
	var_50_bool = var_47_object == 0; //@nz
	if(var_50_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	var_51_float = 0; var_52_object = Obj();
	var_47_object = var_52_object;
	func_3388(var_51_float, var_52_object);
	var_60_bool = var_51_float > (float)90000.0;
	if(var_60_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	CanSee(var_48_bool, var_47_object);
	var_48_bool = var_44_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_3683(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0;
	var_169_bool = 0;
	func_3888(var_169_bool);
	if(var_169_bool != 0) {
		lshHasSpeech(var_168_bool, var_166_string);
		var_170_bool = var_168_bool;
		if(var_170_bool != 0) {
			lshPlaySpeech(var_166_string);
			var_165_bool = 1;
			return 2;
		}
	}
	var_165_bool = 0;
	return 2;
}


func_3938()
{
	SetVariable("k2q01", (int)5);
	func_4371();
	return 0;
}


func_3427(var_70_bool, var_71_object, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0;
	@@var_71_object:GetPosition(var_83_cvector);
	@@var_71_object:GetEyesHeight(var_82_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	var_91_float = var_91_float + var_82_float;
	SetByIndex(var_83_cvector, 1) = var_91_float;
	GetPosition(var_84_cvector);
	GetEyesHeight(var_82_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	var_92_float = var_92_float + var_82_float;
	SetByIndex(var_84_cvector, 1) = var_92_float;
	var_85_cvector = var_83_cvector - var_84_cvector;
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (float)0;
	var_94_int = var_85_cvector | var_85_cvector;
	var_95_float = sqrt(var_94_int);
	var_85_cvector = var_85_cvector / var_95_float;
	var_86_cvector = -var_85_cvector;
	var_96_float = var_85_cvector * var_72_float;
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	var_98_cvector = var_86_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3711(var_97_cvector, var_98_cvector);
	var_106_float = var_97_cvector * (int)25;
	var_107_int = var_96_float + var_106_float;
	var_87_cvector = var_107_int - CVector(0.0, 10.0, 0.0);
	var_88_cvector = var_84_cvector + var_87_cvector;
	IsOverrideActive(var_89_bool);
	var_109_bool = var_89_bool;
	if(var_109_bool != 0) {
		var_70_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_88_cvector, var_86_cvector, (bool)1);
	var_111_float = GetByIndex(var_87_cvector, 0);
	var_112_float = GetByIndex(var_87_cvector, 2);
	Rotate(var_111_float, var_112_float);
	var_113_bool = 0;
	func_3888(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		HasAnimationTrack(var_90_bool, "head");
		var_115_bool = var_90_bool;
		if(var_115_bool == 0) goto Label_3490;
		LookAsyncCamera("head");
	}
Label_3490:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_70_bool = 1;
	return 18;
	
}


func_3947()
{
	var_169_object = Obj(); var_170_object = Obj();
	var_171_int = 0; var_172_string = "";
	func_3721(var_171_int, "k7q01CorpseMark");
	var_176_bool = var_171_int == (int)0;
	if(var_176_bool != 0) {
		SetVariable("k7q01CorpseMark", (int)1);
		func_4477(Obj());
		var_179_object = var_170_object;
		var_184_float = 0;
		func_3836(var_184_float);
		@@var_170_object:AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", (int)3, (int)526214, var_184_float);
		var_185_bool = 0; var_186_string = ""; var_187_string = "";
		func_3824(var_185_bool, "quest_k7_01", "place_corpse");
		var_170_object = 0;
	}
	return 2;
}


func_4205(var_496_bool)
{
	var_498_int = 0; var_499_string = "";
	func_3721(var_498_int, "k7q01");
	var_501_bool = var_498_int == (int)3;
	if(var_501_bool != 0) {
		var_496_bool = 1;
		return 0;
	}
	var_496_bool = 0;
	return 0;
}


func_2929(var_0_object, var_770_int, var_771_object)
{
	var_773_object = Obj(); var_774_bool = 0; var_775_int = 0; var_776_bool = 0; var_777_object = Obj(); var_778_bool = 0; var_779_int = 0; var_780_bool = 0;
	var_0_object = var_771_object;
	var_781_bool = 0; var_782_object = Obj(); var_783_float = 0;
	var_771_object = var_782_object;
	func_3427(var_781_bool, var_782_object, (float)70.0);
	var_784_bool = var_781_bool == 0; //@nz
	if(var_784_bool != 0) {
		var_770_int = -2;
		return 8;
	}
	CreateDialog(var_777_object);
	var_785_int = 0;
	func_3882(var_785_int);
	@@var_777_object:SetNPCName(var_785_int);
	var_786_int = 0;
	func_3880(var_786_int);
	@@var_777_object:SetNPCDescription(var_786_int);
	var_787_string = "";
	func_3884(var_787_string);
	@@var_777_object:SetPhoto(var_787_string);
	var_788_string = "";
	func_3886(var_788_string);
	@@var_777_object:SetPhoto2(var_788_string);
	var_789_int = 0;
	func_4527(var_789_int);
	@@var_777_object:SetPlayerName(var_789_int);
	IsOverrideActive(var_778_bool);
	var_790_bool = var_778_bool;
	if(var_790_bool != 0) {
		var_770_int = -2;
		return 8;
	}
	DoDialog(var_777_object);
	var_791_bool = 0; var_792_object = Obj();
	func_3705(Obj());
	var_793_object = var_792_object;
	func_3514(var_791_bool, var_792_object);
	var_794_object = Obj(); var_795_object = Obj();
	var_771_object = var_794_object;
	var_777_object = var_795_object;
	TaskCall(13);
	func_3010(var_796_object, var_797_object, var_798_string, var_799_bool, var_794_object, var_795_object);
	TaskReturn();
	@@var_777_object:IsDialogEnd(var_780_bool);
	
Label_2992:
	var_824_bool = var_780_bool == 0; //@nz
	if(var_824_bool != 0) {
		sync();
		@@var_777_object:IsDialogEnd(var_780_bool);
		goto Label_2992;
	}
	var_771_object = Obj();
	func_3496();
	StopDialog(var_777_object);
	@@var_777_object:GetReturnValue((int)-1);
	var_779_int = var_770_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3698()
{
	var_39_bool = 0;
	func_3888(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3192()
{
	var_828_float = 0; var_829_float = 0;
	rand(var_829_float, (int)8, (int)16);
	SetTimer((int)10, var_829_float);
	return 2;
}


func_3705(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj();
	self(var_135_object);
	var_135_object = var_133_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4217(var_502_bool)
{
	var_504_int = 0; var_505_string = "";
	func_3721(var_504_int, "ook7Burah1");
	var_507_bool = var_504_int == (int)0;
	if(var_507_bool != 0) {
		var_502_bool = 1;
		return 0;
	}
	var_502_bool = 0;
	return 0;
}


func_2425(var_2_object, var_674_string)
{
	var_675_bool = 0;
	func_3888(var_675_bool);
	var_676_bool = var_675_bool == 0; //@nz
	if(var_676_bool != 0) {
		return 0;
	}
	var_677_bool = var_674_string == var_2_object;
	if(var_677_bool != 0) {
		return 0;
	}
	var_678_string = ""; var_679_bool = 0;
	var_674_string = var_678_string;
	var_681_bool = var_674_string == "";
	if(var_681_bool != 0) {
		var_679_bool = 0;
	} else {
		var_679_bool = 1;
	}
	func_3668(var_678_string, var_679_bool);
	var_2_object = var_674_string;
	return 0;
	
}


func_889(var_2_object, var_233_string)
{
	var_234_bool = 0;
	func_3888(var_234_bool);
	var_235_bool = var_234_bool == 0; //@nz
	if(var_235_bool != 0) {
		return 0;
	}
	var_236_bool = var_233_string == var_2_object;
	if(var_236_bool != 0) {
		return 0;
	}
	var_237_string = ""; var_238_bool = 0;
	var_233_string = var_237_string;
	var_240_bool = var_233_string == "";
	if(var_240_bool != 0) {
		var_238_bool = 0;
	} else {
		var_238_bool = 1;
	}
	func_3668(var_237_string, var_238_bool);
	var_2_object = var_233_string;
	return 0;
	
}


func_1915(var_0_object, var_1_object, var_2_object, var_3_string, var_578_object, var_579_object)
{
	var_0_object = var_579_object;
	var_1_object = var_578_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_585_string = "";
		func_1983(var_579_object, "Neutral");
		@@@var_0_object:SetMessage((int)527204);
		@@@var_0_object:ClearReplies();
		var_594_bool = 0; var_595_object = Obj();
		var_595_object = var_1_object;
		func_4265(var_595_object);
		if(var_594_bool != 0) {
			@@@var_0_object:AddReply((int)527205, (int)28514, (int)28513);
		}
		@@@var_0_object:AddReply((int)527210, (int)-1, (int)28518);
		@@@var_0_object:AddReply((int)527533, (int)-1, (int)28871);
		goto Label_1953;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x77f";
	}
Label_1953:
	var_609_bool = 0;
	func_3888(var_609_bool);
	if(var_609_bool != 0) {

	Label_1957:
		lshWaitForAnimEnd();
		var_610_string = var_3_string;
		if(var_610_string != 0) {
		} else {
			var_611_string = "";
			var_611_string = var_2_object;
			func_3652(var_611_string);
			goto Label_1957;
	}
		PlayAnimation("all", "idle");

	Label_1972:
		WaitForAnimEnd();
		var_614_string = var_3_string;
		if(var_614_string != 0) {
			goto Label_1982;
		}
		PlayAnimation("all", "idle");
		goto Label_1972;
	}
	goto Label_1982;
	
Label_1982:
	return 0;
	
}


func_4477(var_46_object)
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


func_3711(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0;
	var_102_int = var_98_cvector | var_98_cvector;
	var_101_float = sqrt(var_102_int);
	var_103_float = 9.999999974752427e-07;
	var_104_bool = var_101_float < var_103_float;
	if(var_104_bool != 0) {
		var_97_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_97_cvector = var_98_cvector / var_101_float;
	return 2;
}


func_3201()
{
	KillTimer((int)10);
	return 0;
}


func_4229(var_526_bool)
{
	var_528_int = 0; var_529_string = "";
	func_3721(var_528_int, "k7q03");
	var_531_bool = var_528_int == (int)0;
	if(var_531_bool != 0) {
		var_526_bool = 1;
		return 0;
	}
	var_526_bool = 0;
	return 0;
}


func_3721(var_332_int, var_333_string)
{
	var_334_int = 0; var_335_int = 0;
	GetVariable(var_333_string, var_335_int);
	var_335_int = var_332_int;
	return 2;
}


func_3979()
{
	SetVariable("ook7Burah1", (int)1);
	return 0;
}


func_3726(var_91_object, var_92_string)
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


func_4494(var_135_object, var_136_string, var_137_float)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_object = Obj(); var_142_bool = 0; var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_object = Obj(); var_146_bool = 0;
	GetMainOutdoorScene(var_145_object);
	var_147_bool = var_145_object == 0; //@ne
	if(var_147_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_145_object:GetLocator(var_136_string, var_146_bool, var_143_cvector, var_144_cvector);
	var_149_bool = var_146_bool == 0; //@nz
	if(var_149_bool != 0) {
		var_151_int = "Warning: outdoor scene locator " + var_136_string;
		var_153_int = var_151_int + " doesnt exist";
		Trace(var_153_int);
	}
	@@var_145_object:GetMap(var_135_object);
	var_154_bool = var_135_object == 0; //@ne
	if(var_154_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_156_float = GetByIndex(var_143_cvector, 0);
	var_157_float = GetByIndex(var_143_cvector, 2);
	@@var_135_object:SetMapParams(var_156_float, var_157_float, var_137_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4241(var_460_bool)
{
	var_462_int = 0; var_463_string = "";
	func_3721(var_462_int, "ook7Burah2");
	var_465_bool = var_462_int == (int)0;
	if(var_465_bool != 0) {
		var_460_bool = 1;
		return 0;
	}
	var_460_bool = 0;
	return 0;
}


func_3985(var_190_object)
{
	var_192_int = 0; var_193_int = 0;
	SetVariable("k7q01", (int)4);
	func_4384();
	@@var_190_object:RemoveItemByType(var_193_int, "bird_balahon", (int)1);
	return 2;
}


func_3737(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj();
	FindActor(var_74_object, var_71_string);
	var_75_bool = var_74_object == 0; //@nz
	if(var_75_bool != 0) {
		var_77_int = "Door " + var_71_string;
		var_79_int = var_77_int + " not found";
		Trace(var_79_int);
	} else {
		@@var_74_object:SetProperty("locked", var_72_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_4253(var_535_bool)
{
	var_537_int = 0; var_538_string = "";
	func_3721(var_537_int, "k7q03");
	var_540_bool = var_537_int == (int)2;
	if(var_540_bool != 0) {
		var_535_bool = 1;
		return 0;
	}
	var_535_bool = 0;
	return 0;
}


func_158(var_2_object, var_320_string)
{
	var_321_bool = 0;
	func_3888(var_321_bool);
	var_322_bool = var_321_bool == 0; //@nz
	if(var_322_bool != 0) {
		return 0;
	}
	var_323_bool = var_320_string == var_2_object;
	if(var_323_bool != 0) {
		return 0;
	}
	var_324_string = ""; var_325_bool = 0;
	var_320_string = var_324_string;
	var_327_bool = var_320_string == "";
	if(var_327_bool != 0) {
		var_325_bool = 0;
	} else {
		var_325_bool = 1;
	}
	func_3668(var_324_string, var_325_bool);
	var_2_object = var_320_string;
	return 0;
	
}


func_3998()
{
	var_44_object = Obj(); var_45_object = Obj();
	func_4477(Obj());
	var_46_object = var_45_object;
	var_57_float = 0;
	func_3836(var_57_float);
	@@var_45_object:AddMark("k7q03BurahGotoFather", "pt_map_burah_home", (int)0, (int)526394, var_57_float);
	func_4397();
	func_4410();
	var_91_object = Obj(); var_92_string = "";
	func_3726(var_91_object, "quest_k7_03");
	var_99_bool = 0; var_100_string = ""; var_101_string = "";
	func_3824(var_99_bool, "quest_k7_03", "place_family");
	return 2;
}
EMIT "Stack[-1] = 0";


func_2211(var_0_object, var_621_int, var_622_object)
{
	var_624_object = Obj(); var_625_bool = 0; var_626_int = 0; var_627_bool = 0; var_628_object = Obj(); var_629_bool = 0; var_630_int = 0; var_631_bool = 0;
	var_0_object = var_622_object;
	var_632_bool = 0; var_633_object = Obj(); var_634_float = 0;
	var_622_object = var_633_object;
	func_3427(var_632_bool, var_633_object, (float)70.0);
	var_635_bool = var_632_bool == 0; //@nz
	if(var_635_bool != 0) {
		var_621_int = -2;
		return 8;
	}
	CreateDialog(var_628_object);
	var_636_int = 0;
	func_3882(var_636_int);
	@@var_628_object:SetNPCName(var_636_int);
	var_637_int = 0;
	func_3880(var_637_int);
	@@var_628_object:SetNPCDescription(var_637_int);
	var_638_string = "";
	func_3884(var_638_string);
	@@var_628_object:SetPhoto(var_638_string);
	var_639_string = "";
	func_3886(var_639_string);
	@@var_628_object:SetPhoto2(var_639_string);
	var_640_int = 0;
	func_4527(var_640_int);
	@@var_628_object:SetPlayerName(var_640_int);
	IsOverrideActive(var_629_bool);
	var_641_bool = var_629_bool;
	if(var_641_bool != 0) {
		var_621_int = -2;
		return 8;
	}
	DoDialog(var_628_object);
	var_642_bool = 0; var_643_object = Obj();
	func_3705(Obj());
	var_644_object = var_643_object;
	func_3514(var_642_bool, var_643_object);
	var_645_object = Obj(); var_646_object = Obj();
	var_622_object = var_645_object;
	var_628_object = var_646_object;
	TaskCall(11);
	func_2292(var_647_object, var_648_object, var_649_string, var_650_bool, var_645_object, var_646_object);
	TaskReturn();
	@@var_628_object:IsDialogEnd(var_631_bool);
	
Label_2274:
	var_768_bool = var_631_bool == 0; //@nz
	if(var_768_bool != 0) {
		sync();
		@@var_628_object:IsDialogEnd(var_631_bool);
		goto Label_2274;
	}
	var_622_object = Obj();
	func_3496();
	StopDialog(var_628_object);
	@@var_628_object:GetReturnValue((int)-1);
	var_630_int = var_621_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3496()
{
	var_277_bool = 0; var_278_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_280_bool = 0;
	func_3888(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		HasAnimationTrack(var_278_bool, "head");
		var_282_bool = var_278_bool;
		if(var_282_bool == 0) goto Label_3513;
		UnlookAsync("head");
	}
Label_3513:
	return 2;
	
}


func_4265(var_594_bool)
{
	var_596_int = 0; var_597_string = "";
	func_3721(var_596_int, "k11q01");
	var_599_bool = var_596_int == (int)4;
	if(var_599_bool != 0) {
		var_594_bool = 1;
		return 0;
	}
	var_594_bool = 0;
	return 0;
}


func_3754(var_128_int, var_129_int)
{
	var_130_object = Obj(); var_131_object = Obj();
	CreateIntVector(var_131_object);
	@@var_131_object:add(var_128_int);
	@@var_131_object:add(var_129_int);
	SendWorldWndMessage((int)3, var_131_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4527(var_122_int)
{
	var_123_int = 0; var_124_int = 0;
	GetVariable("branch", var_124_int);
	var_127_bool = var_124_int == (int)0;
	if(var_127_bool != 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0x11be";
	}
	var_129_bool = var_124_int == (int)1;
	if(var_129_bool != 0) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
	return 2;
}


func_4277(var_239_bool)
{
	var_241_int = 0; var_242_string = "";
	func_3721(var_241_int, "k12q01ChildsAreVisited");
	var_244_bool = var_241_int != (int)0;
	if(var_244_bool != 0) {
		var_239_bool = 1;
		return 0;
	}
	var_239_bool = 0;
	return 0;
}


func_3766(var_234_object, var_235_int)
{
	var_236_int = 0; var_237_int = 0;
	var_238_object = Obj(); var_239_string = ""; var_240_int = 0;
	var_234_object = var_238_object;
	var_235_int = var_240_int;
	func_3396(var_238_object, "money", var_240_int);
	var_245_bool = var_235_int > (int)0;
	if(var_245_bool != 0) {
		GetInvItemByName(var_237_int, "Money");
		var_247_int = 0; var_248_int = 0;
		var_237_int = var_247_int;
		var_235_int = var_248_int;
		func_3754(var_247_int, var_248_int);
	}
	return 2;
}


func_3514(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0;
	GetVariable("voice_common", var_138_int);
	var_141_int = var_138_int;
	if(var_141_int != 0) {
		var_142_bool = 0; var_143_object = Obj();
		var_132_object = var_143_object;
		func_3572(var_142_bool, var_143_object);
		var_172_bool = var_142_bool == 0; //@nz
		if(var_172_bool != 0) {
			var_173_bool = 0; var_174_object = Obj();
			var_132_object = var_174_object;
			func_3609(var_173_bool, var_174_object);
			var_208_bool = var_173_bool == 0; //@nz
			if(var_208_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		irand(var_139_int, (int)2);
		var_210_int = var_139_int;
		if(var_210_int != 0) {
			var_213_int = var_138_int + (int)1;
			var_215_int = var_213_int % (int)3;
			SetVariable("voice_common", var_215_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_218_bool = 0; var_219_object = Obj();
		var_132_object = var_219_object;
		func_3609(var_218_bool, var_219_object);
		var_220_bool = var_218_bool == 0; //@nz
		if(var_220_bool != 0) {
			var_221_bool = 0; var_222_object = Obj();
			var_132_object = var_222_object;
			func_3572(var_221_bool, var_222_object);
			var_223_bool = var_221_bool == 0; //@nz
			if(var_223_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3570;
	
Label_3570:
	var_131_bool = 1;
	return 4;
	
}


func_4029()
{
	SetVariable("ook7Burah2", (int)1);
	return 0;
}


func_1983(var_2_object, var_585_string)
{
	var_586_bool = 0;
	func_3888(var_586_bool);
	var_587_bool = var_586_bool == 0; //@nz
	if(var_587_bool != 0) {
		return 0;
	}
	var_588_bool = var_585_string == var_2_object;
	if(var_588_bool != 0) {
		return 0;
	}
	var_589_string = ""; var_590_bool = 0;
	var_585_string = var_589_string;
	var_592_bool = var_585_string == "";
	if(var_592_bool != 0) {
		var_590_bool = 0;
	} else {
		var_590_bool = 1;
	}
	func_3668(var_589_string, var_590_bool);
	var_2_object = var_585_string;
	return 0;
	
}


func_1216(var_2_object, var_470_string)
{
	var_471_bool = 0;
	func_3888(var_471_bool);
	var_472_bool = var_471_bool == 0; //@nz
	if(var_472_bool != 0) {
		return 0;
	}
	var_473_bool = var_470_string == var_2_object;
	if(var_473_bool != 0) {
		return 0;
	}
	var_474_string = ""; var_475_bool = 0;
	var_470_string = var_474_string;
	var_477_bool = var_470_string == "";
	if(var_477_bool != 0) {
		var_475_bool = 0;
	} else {
		var_475_bool = 1;
	}
	func_3668(var_474_string, var_475_bool);
	var_2_object = var_470_string;
	return 0;
	
}


func_4289(var_752_bool)
{
	var_754_int = 0; var_755_string = "";
	func_3721(var_754_int, "k12q01BurahInSobor");
	var_757_bool = var_754_int != (int)0;
	if(var_757_bool != 0) {
		var_752_bool = 1;
		return 0;
	}
	var_752_bool = 0;
	return 0;
}


func_4544(var_716_object, var_717_bool, var_718_int)
{
	@@var_716_object:add((int)18);
	@@var_716_object:add((int)24);
	@@var_716_object:add((int)20);
	@@var_716_object:add((int)14);
	var_724_bool = var_717_bool == (bool)0;
	if(var_724_bool != 0) {
		@@var_716_object:add((int)10);
		@@var_716_object:add((int)17);
		@@var_716_object:add((int)8);
	} else {
		var_729_bool = var_718_int != (int)1;
		if(var_729_bool == 0) goto Label_4576;
		@@var_716_object:add((int)10);
	}
Label_4576:
	return 0;
	
}


func_447(var_0_object, var_365_int, var_366_object)
{
	var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0;
	var_0_object = var_366_object;
	var_376_bool = 0; var_377_object = Obj(); var_378_float = 0;
	var_366_object = var_377_object;
	func_3427(var_376_bool, var_377_object, (float)70.0);
	var_379_bool = var_376_bool == 0; //@nz
	if(var_379_bool != 0) {
		var_365_int = -2;
		return 8;
	}
	CreateDialog(var_372_object);
	var_380_int = 0;
	func_3882(var_380_int);
	@@var_372_object:SetNPCName(var_380_int);
	var_381_int = 0;
	func_3880(var_381_int);
	@@var_372_object:SetNPCDescription(var_381_int);
	var_382_string = "";
	func_3884(var_382_string);
	@@var_372_object:SetPhoto(var_382_string);
	var_383_string = "";
	func_3886(var_383_string);
	@@var_372_object:SetPhoto2(var_383_string);
	var_384_int = 0;
	func_4527(var_384_int);
	@@var_372_object:SetPlayerName(var_384_int);
	IsOverrideActive(var_373_bool);
	var_385_bool = var_373_bool;
	if(var_385_bool != 0) {
		var_365_int = -2;
		return 8;
	}
	DoDialog(var_372_object);
	var_386_bool = 0; var_387_object = Obj();
	func_3705(Obj());
	var_388_object = var_387_object;
	func_3514(var_386_bool, var_387_object);
	var_389_object = Obj(); var_390_object = Obj();
	var_366_object = var_389_object;
	var_372_object = var_390_object;
	TaskCall(3);
	func_528(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object);
	TaskReturn();
	@@var_372_object:IsDialogEnd(var_375_bool);
	
Label_510:
	var_425_bool = var_375_bool == 0; //@nz
	if(var_425_bool != 0) {
		sync();
		@@var_372_object:IsDialogEnd(var_375_bool);
		goto Label_510;
	}
	var_366_object = Obj();
	func_3496();
	StopDialog(var_372_object);
	@@var_372_object:GetReturnValue((int)-1);
	var_374_int = var_365_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3010(var_0_object, var_1_object, var_2_object, var_3_string, var_794_object, var_795_object)
{
	var_0_object = var_795_object;
	var_1_object = var_794_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_801_string = "";
		func_3068(var_795_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_3038;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbc6";
	}
Label_3038:
	var_816_bool = 0;
	func_3888(var_816_bool);
	if(var_816_bool != 0) {

	Label_3042:
		lshWaitForAnimEnd();
		var_817_string = var_3_string;
		if(var_817_string != 0) {
		} else {
			var_818_string = "";
			var_818_string = var_2_object;
			func_3652(var_818_string);
			goto Label_3042;
	}
		PlayAnimation("all", "idle");

	Label_3057:
		WaitForAnimEnd();
		var_821_string = var_3_string;
		if(var_821_string != 0) {
			goto Label_3067;
		}
		PlayAnimation("all", "idle");
		goto Label_3057;
	}
	goto Label_3067;
	
Label_3067:
	return 0;
	
}


func_4035(var_109_object)
{
	Trace("tvirin 5 is given");
	var_112_object = Obj(); var_113_string = ""; var_114_int = 0;
	var_109_object = var_112_object;
	func_3804(var_112_object, "tvirin", (int)5);
	return 0;
}


func_3785(var_117_object, var_118_object, var_119_int)
{
	var_120_int = 0; var_121_int = 0; var_122_bool = 0; var_123_int = 0; var_124_int = 0; var_125_bool = 0;
	@@var_118_object:GetItemID(var_123_int);
	GetInvItemProperty(var_124_int, var_123_int, "Category");
	@@var_117_object:AddItem(var_125_bool, var_118_object, var_124_int, var_119_int);
	var_127_bool = var_125_bool == 0; //@nz
	if(var_127_bool != 0) {
		@@var_117_object:DropItems(var_118_object, var_119_int);
	} else {
		var_128_int = 0; var_129_int = 0;
		var_123_int = var_128_int;
		var_119_int = var_129_int;
		func_3754(var_128_int, var_129_int);
	}
	return 6;
	
}


func_4301(var_653_bool)
{
	var_655_int = 0; var_656_string = "";
	func_3721(var_655_int, "ook12BurahFactory1");
	var_658_bool = var_655_int == (int)0;
	if(var_658_bool != 0) {
		var_653_bool = 1;
		return 0;
	}
	var_653_bool = 0;
	return 0;
}


func_4046()
{
	func_4423();
	var_228_bool = 0; var_229_string = ""; var_230_string = "";
	func_3824(var_228_bool, "quest_k7_03", "completed");
	return 0;
}


func_4056(var_231_object)
{
	Trace("money2000 is given");
	var_234_object = Obj(); var_235_int = 0;
	var_231_object = var_234_object;
	func_3766(var_234_object, (int)2000);
	return 0;
}


func_4313(var_705_bool)
{
	func_4597((bool)0);
	var_707_bool = var_705_bool;
	return 0;
}


func_3804(var_112_object, var_113_string, var_114_int)
{
	var_115_object = Obj(); var_116_object = Obj();
	CreateInvItem(var_116_object);
	@@var_116_object:SetItemName(var_113_string);
	var_117_object = Obj(); var_118_object = Obj(); var_119_int = 0;
	var_112_object = var_117_object;
	var_116_object = var_118_object;
	var_114_int = var_119_int;
	func_3785(var_117_object, var_118_object, var_119_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_989(var_0_object, var_429_int, var_430_object)
{
	var_432_object = Obj(); var_433_bool = 0; var_434_int = 0; var_435_bool = 0; var_436_object = Obj(); var_437_bool = 0; var_438_int = 0; var_439_bool = 0;
	var_0_object = var_430_object;
	var_440_bool = 0; var_441_object = Obj(); var_442_float = 0;
	var_430_object = var_441_object;
	func_3427(var_440_bool, var_441_object, (float)70.0);
	var_443_bool = var_440_bool == 0; //@nz
	if(var_443_bool != 0) {
		var_429_int = -2;
		return 8;
	}
	CreateDialog(var_436_object);
	var_444_int = 0;
	func_3882(var_444_int);
	@@var_436_object:SetNPCName(var_444_int);
	var_445_int = 0;
	func_3880(var_445_int);
	@@var_436_object:SetNPCDescription(var_445_int);
	var_446_string = "";
	func_3884(var_446_string);
	@@var_436_object:SetPhoto(var_446_string);
	var_447_string = "";
	func_3886(var_447_string);
	@@var_436_object:SetPhoto2(var_447_string);
	var_448_int = 0;
	func_4527(var_448_int);
	@@var_436_object:SetPlayerName(var_448_int);
	IsOverrideActive(var_437_bool);
	var_449_bool = var_437_bool;
	if(var_449_bool != 0) {
		var_429_int = -2;
		return 8;
	}
	DoDialog(var_436_object);
	var_450_bool = 0; var_451_object = Obj();
	func_3705(Obj());
	var_452_object = var_451_object;
	func_3514(var_450_bool, var_451_object);
	var_453_object = Obj(); var_454_object = Obj();
	var_430_object = var_453_object;
	var_436_object = var_454_object;
	TaskCall(7);
	func_1070(var_455_object, var_456_object, var_457_string, var_458_bool, var_453_object, var_454_object);
	TaskReturn();
	@@var_436_object:IsDialogEnd(var_439_bool);
	
Label_1052:
	var_550_bool = var_439_bool == 0; //@nz
	if(var_550_bool != 0) {
		sync();
		@@var_436_object:IsDialogEnd(var_439_bool);
		goto Label_1052;
	}
	var_430_object = Obj();
	func_3496();
	StopDialog(var_436_object);
	@@var_436_object:GetReturnValue((int)-1);
	var_438_int = var_429_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4319()
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateDiaryEntry(var_47_object, (int)488, (int)1, (int)528055);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_47_object = var_52_object;
	func_4449(var_51_bool, var_52_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4577(var_742_bool, var_743_int)
{
	var_744_int = 0; var_745_int = 0;
	var_747_int = "vol_" + var_743_int;
	GetVariable(var_747_int, var_745_int);
	var_749_int = var_745_int & (int)4;
	var_742_bool = var_749_int != (int)0;
	return 2;
}


func_4066()
{
	SetVariable("k11q01", (int)5);
	func_4319();
	return 0;
}


func_3817(var_516_bool, var_517_object, var_518_string)
{
	var_519_int = 0; var_520_bool = 0; var_521_int = 0; var_522_bool = 0;
	GetInvItemByName(var_521_int, var_518_string);
	@@var_517_object:HasItem(var_521_int, var_522_bool);
	var_522_bool = var_516_bool;
	return 4;
}


func_4075()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_4332()
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateDiaryEntry(var_82_object, (int)731, (int)1, (int)539361);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_82_object = var_87_object;
	func_4449(var_86_bool, var_87_object, (int)729);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4587(var_733_bool, var_734_int)
{
	var_735_int = 0; var_736_int = 0;
	var_738_int = "vol_" + var_734_int;
	GetVariable(var_738_int, var_736_int);
	var_740_int = var_736_int & (int)16;
	var_733_bool = var_740_int != (int)0;
	return 2;
}


func_750(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_0_object = var_60_object;
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0;
	var_60_object = var_71_object;
	func_3427(var_70_bool, var_71_object, (float)70.0);
	var_117_bool = var_70_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	CreateDialog(var_66_object);
	var_118_int = 0;
	func_3882(var_118_int);
	@@var_66_object:SetNPCName(var_118_int);
	var_119_int = 0;
	func_3880(var_119_int);
	@@var_66_object:SetNPCDescription(var_119_int);
	var_120_string = "";
	func_3884(var_120_string);
	@@var_66_object:SetPhoto(var_120_string);
	var_121_string = "";
	func_3886(var_121_string);
	@@var_66_object:SetPhoto2(var_121_string);
	var_122_int = 0;
	func_4527(var_122_int);
	@@var_66_object:SetPlayerName(var_122_int);
	IsOverrideActive(var_67_bool);
	var_130_bool = var_67_bool;
	if(var_130_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	DoDialog(var_66_object);
	var_131_bool = 0; var_132_object = Obj();
	func_3705(Obj());
	var_133_object = var_132_object;
	func_3514(var_131_bool, var_132_object);
	var_226_object = Obj(); var_227_object = Obj();
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(5);
	func_831(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	@@var_66_object:IsDialogEnd(var_69_bool);
	
Label_813:
	var_275_bool = var_69_bool == 0; //@nz
	if(var_275_bool != 0) {
		sync();
		@@var_66_object:IsDialogEnd(var_69_bool);
		goto Label_813;
	}
	var_60_object = Obj();
	func_3496();
	StopDialog(var_66_object);
	@@var_66_object:GetReturnValue((int)-1);
	var_68_int = var_59_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3312()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0;
	WaitForAnimEnd();
	var_52_bool = 0;
	func_3422(var_52_bool);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 12;
	}
	func_3863((int)0);
	var_54_int = var_46_int;
	var_47_int = 0;
	
Label_3326:
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_47_int < (int)5;
	if(var_69_bool != 0) {
		var_70_bool = 0;
		func_3422(var_70_bool);
		if(var_70_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		var_71_bool = var_46_int == 0; //@nz
		if(var_71_bool != 0) {
			Sleep((int)3, var_48_bool);
			var_73_bool = var_48_bool == 0; //@nz
			if(var_73_bool != 0) {
			} else {
		} else {
				irand(var_49_int, var_46_int);
				irand(var_50_int, (int)5);
				var_79_bool = var_50_int != (int)0;
				if(var_79_bool != 0) {
					var_49_int = 0;
				}
				var_81_string = ""; var_82_int = 0;
				var_49_int = var_82_int;
				func_3856(var_81_string, var_82_int);
				PlayAnimation("all", var_81_string);
				WaitForAnimEnd(var_51_bool);
				var_83_bool = var_51_bool == 0; //@nz
				if(var_83_bool == 0) goto Label_3367;
				goto Label_3378;
		}
		Label_3367:
			var_74_bool = 0;
			func_3381(var_74_bool);
			var_75_bool = var_74_bool == 0; //@nz
			if(var_75_bool != 0) {
				goto Label_3378;
			}
			ResetAAS();
			var_47_int = var_47_int + (int)1;
			goto Label_3326;

		}
	}
Label_3378:
	ResetAAS();
	return 12;
	
}


func_3824(var_99_bool, var_100_string, var_101_string)
{
	var_102_object = Obj(); var_103_object = Obj();
	FindActor(var_103_object, var_100_string);
	var_104_bool = var_103_object == 0; //@ne
	if(var_104_bool != 0) {
		var_99_bool = 0;
		return 2;
	}
	Trigger(var_103_object, var_101_string);
	var_99_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4081()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2292(var_0_object, var_1_object, var_2_object, var_3_string, var_645_object, var_646_object)
{
	var_0_object = var_646_object;
	var_1_object = var_645_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_652_bool = 0;
		var_652_bool = 0;
		var_653_bool = 0; var_654_object = Obj();
		var_654_object = var_1_object;
		func_4301(var_654_object);
		if(var_653_bool != 0) {
			var_659_bool = 0; var_660_object = Obj();
			var_660_object = var_1_object;
			func_4134(var_660_object);
			var_665_bool = var_659_bool == 0; //@nz
			if(var_665_bool != 0) {
				var_652_bool = 1;
			}
		}
		if(var_652_bool != 0) {
			var_666_object = Obj(); var_667_object = Obj();
			var_666_object = var_1_object;
			var_667_object = var_0_object;
			func_4087();
			var_670_object = Obj(); var_671_object = Obj();
			var_670_object = var_1_object;
			var_671_object = var_0_object;
			func_4118();
			var_674_string = "";
			func_2425(var_646_object, "Neutral");
			@@@var_0_object:SetMessage((int)539318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541446, (int)45384, (int)43602);
			@@@var_0_object:AddReply((int)542944, (int)45384, (int)45383);
		} else {
				var_697_object = Obj(); var_698_object = Obj();
				var_697_object = var_1_object;
				var_698_object = var_0_object;
				func_4118();
				var_699_string = "";
				func_2425(var_646_object, "Neutral");
				@@@var_0_object:SetMessage((int)539331);
				@@@var_0_object:ClearReplies();
				var_701_bool = 0;
				var_701_bool = 0;
				var_702_bool = 0;
				var_702_bool = 0;
				var_703_bool = 0; var_704_object = Obj();
				var_704_object = var_1_object;
				func_4124(var_703_bool, var_704_object);
				if(var_703_bool != 0) {
					var_752_bool = 0; var_753_object = Obj();
					var_753_object = var_1_object;
					func_4289(var_753_object);
					var_758_bool = var_752_bool == 0; //@nz
					if(var_758_bool != 0) {
						var_702_bool = 1;
					}
				}
				if(var_702_bool != 0) {
					var_759_bool = 0; var_760_object = Obj();
					var_760_object = var_1_object;
					func_4134(var_760_object);
					var_761_bool = var_759_bool == 0; //@nz
					if(var_761_bool != 0) {
						var_701_bool = 1;
					}
				}
				if(var_701_bool != 0) {
					@@@var_0_object:AddReply((int)539332, (int)41277, (int)41276);
				}
				@@@var_0_object:AddReply((int)539335, (int)-1, (int)41279);
				goto Label_2395;
		}
	}
Label_2395:
	var_689_bool = 0;
	func_3888(var_689_bool);
	if(var_689_bool != 0) {

	Label_2399:
		lshWaitForAnimEnd();
		var_690_string = var_3_string;
		if(var_690_string != 0) {
		} else {
			var_691_string = "";
			var_691_string = var_2_object;
			func_3652(var_691_string);
			goto Label_2399;
	}
		PlayAnimation("all", "idle");

	Label_2414:
		WaitForAnimEnd();
		var_694_string = var_3_string;
		if(var_694_string != 0) {
			goto Label_2424;
		}
		PlayAnimation("all", "idle");
		goto Label_2414;

	}
	goto Label_2424;
	
Label_2424:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x8f8";


func_3572(var_142_bool, var_143_object)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = "";
	var_149_string = "c";
	var_150_int = 0;
	
Label_3575:
	if((int)1 != 0) {
		var_156_int = var_150_int + (int)1;
		var_157_int = var_149_string + var_156_int;
		@@var_143_object:HasProperty(var_157_int, var_151_bool);
		var_158_bool = var_151_bool == 0; //@nz
		if(var_158_bool != 0) {
		} else {
			var_150_int = var_150_int + (int)1;
			goto Label_3575;
		}
	}
	var_159_bool = var_150_int == 0; //@nz
	if(var_159_bool != 0) {
		var_142_bool = 0;
		return 10;
	}
	var_152_int = 0;
	var_161_bool = var_150_int > (int)1;
	if(var_161_bool != 0) {
		irand(var_152_int, var_150_int);
	}
	var_163_int = var_152_int + (int)1;
	var_164_int = var_149_string + var_163_int;
	@@var_143_object:GetProperty(var_164_int, var_153_string);
	var_165_bool = 0; var_166_string = "";
	var_153_string = var_166_string;
	func_3683(var_165_bool, var_166_string);
	var_165_bool = var_142_bool;
	return 10;
	
}


func_4597(var_707_bool)
{
	var_708_object = Obj(); var_709_int = 0; var_710_int = 0; var_711_int = 0; var_712_object = Obj(); var_713_int = 0; var_714_int = 0; var_715_int = 0;
	CreateIntVector(var_712_object);
	var_716_object = Obj(); var_717_bool = 0; var_718_int = 0;
	var_712_object = var_716_object;
	func_4544(var_716_object, (bool)0, (int)-1);
	@@var_712_object:size(var_713_int);
	var_714_int = 0;
	
Label_4609:
	var_731_bool = var_714_int < var_713_int;
	if(var_731_bool != 0) {
		@@var_712_object:get(var_715_int, var_714_int);
		var_732_bool = 0;
		var_732_bool = 1;
		var_733_bool = 0; var_734_int = 0;
		var_715_int = var_734_int;
		func_4587(var_733_bool, var_734_int);
		if(var_733_bool != 1) {
			var_742_bool = 0; var_743_int = 0;
			var_715_int = var_743_int;
			func_4577(var_742_bool, var_743_int);
			if(var_742_bool != 1) {
				var_732_bool = 0;
			}
		}
		if(var_732_bool != 0) {
			var_707_bool = 0;
			var_714_int = var_714_int + (int)1;
			goto Label_4609;
		}
		return 8;
	}
	var_707_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4087()
{
	SetVariable("ook12BurahFactory1", (int)1);
	return 0;
}


func_4345()
{
	var_52_object = Obj(); var_53_object = Obj();
	CreateDiaryEntry(var_53_object, (int)738, (int)1, (int)539368);
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0;
	var_53_object = var_58_object;
	func_4449(var_57_bool, var_58_object, (int)729);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3836(var_57_float)
{
	var_58_float = 0; var_59_float = 0;
	GetGameTime(var_59_float);
	var_59_float = var_57_float;
	return 2;
}


func_4093()
{
	SetVariable("k12q01BurahInSobor", (int)1);
	func_4332();
	return 0;
}


