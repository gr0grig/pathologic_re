// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Doubt|W:Smile|W:Sorrow|W:Agression|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:ood8Burah2|W:ood8Burah3|W:d8q03|W:quest_d8_03|W:completed|W:burah gives blood|W:d8q03_blood|W:burah gives serum|W:burah_serum|W:ood8Burah1|W:d8q04|W:d8BurahLetter|W:microscope_d8q03_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Burah.png|W:ui/NPC_Burah_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x42a
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xee vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x42e vars=string
// @EVENT_6: op=0x442 vars=
// @EVENT_5: op=0x44f vars=
// @EVENT_7: op=0x498 vars=int
// @EVENT_45: op=0x4da vars=bool
// @EVENT_0: op=0x4e6 vars=object
// @PE: 0x51,0xd8,0xee,0x422,0x42a,0x44f,0x498,0x4be,0x4da,0x6f3,0x6f9,0x6ff,0x705,0x711,0x71b,0x726,0x72f,0x73a,0x740,0x74c,0x758,0x764,0x770,0x77c,0x788,0x794

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1662();
		var_12_bool = var_8_bool == (int)14668;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1797();
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_1819(var_49_object);
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_1779();
		}
		var_77_bool = var_8_bool == (int)14696;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_1839(var_79_object);
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_1779();
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_1809();
		}
		var_103_bool = var_8_bool == (int)14692;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1830();
		}
		var_117_bool = var_8_bool == (int)37696;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_1830();
		}
		var_121_bool = var_8_bool == (int)14669;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_1850();
		}
		var_127_bool = var_8_bool == (int)37705;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_1785();
		}
		var_133_bool = var_8_bool == (int)40564;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_1791();
		}
		var_139_bool = var_7_cvector == (int)14659;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513423);
			@@@var_0_object:ClearReplies();
			var_158_bool = 0; var_159_object = Obj();
			var_159_object = var_1_object;
			func_1904(var_159_object);
			if(var_158_bool != 0) {
				@@@var_0_object:AddReply((int)513424, (int)14661, (int)14660);
			}
			var_169_bool = 0;
			var_169_bool = 0;
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_1916(var_171_object);
			if(var_170_bool != 0) {
				var_176_bool = 0; var_177_object = Obj();
				var_177_object = var_1_object;
				func_1928(var_177_object);
				if(var_176_bool != 0) {
					var_169_bool = 1;
				}
			}
			if(var_169_bool != 0) {
				@@@var_0_object:AddReply((int)513447, (int)37690, (int)14683);
			}
			var_185_bool = 0; var_186_object = Obj();
			var_186_object = var_1_object;
			func_1940(var_186_object);
			if(var_185_bool != 0) {
				@@@var_0_object:AddReply((int)513433, (int)14670, (int)14669);
			}
			var_194_bool = 0;
			var_194_bool = 0;
			var_195_bool = 0; var_196_object = Obj();
			var_196_object = var_1_object;
			func_1856(var_196_object);
			if(var_195_bool != 0) {
				var_201_bool = 0; var_202_object = Obj();
				var_202_object = var_1_object;
				func_1868(var_202_object);
				if(var_201_bool != 0) {
					var_194_bool = 1;
				}
			}
			if(var_194_bool != 0) {
				@@@var_0_object:AddReply((int)535977, (int)37706, (int)37705);
			}
			var_210_bool = 0;
			var_210_bool = 0;
			var_211_bool = 0; var_212_object = Obj();
			var_212_object = var_1_object;
			func_1880(var_212_object);
			if(var_211_bool != 0) {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_object;
				func_1892(var_218_object);
				if(var_217_bool != 0) {
					var_210_bool = 1;
				}
			}
			if(var_210_bool != 0) {
				@@@var_0_object:AddReply((int)538666, (int)40565, (int)40564);
			}
			@@@var_0_object:AddReply((int)513460, (int)-1, (int)14697);
			@@@var_0_object:AddReply((int)535944, (int)-1, (int)37665);
			return 0;
		}
		var_233_bool = var_7_cvector == (int)40565;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_216(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)538667);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538668, (int)40568, (int)40566);
			@@@var_0_object:AddReply((int)538669, (int)-1, (int)40567);
			return 0;
		}
		var_243_bool = var_7_cvector == (int)40568;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_216(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)538670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538671, (int)40570, (int)40569);
			@@@var_0_object:AddReply((int)538675, (int)-1, (int)40573);
			return 0;
		}
		var_253_bool = var_7_cvector == (int)40570;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_216(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)538672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538673, (int)40574, (int)40571);
			@@@var_0_object:AddReply((int)538674, (int)-1, (int)40572);
			return 0;
		}
		var_263_bool = var_7_cvector == (int)40574;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_216(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)538676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538677, (int)-1, (int)40575);
			@@@var_0_object:AddReply((int)538678, (int)-1, (int)40576);
			return 0;
		}
		var_273_bool = var_7_cvector == (int)37706;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_216(var_8_bool, "Agression");
			@@@var_0_object:SetMessage((int)535978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535979, (int)-1, (int)37707);
			@@@var_0_object:AddReply((int)535980, (int)37709, (int)37708);
			return 0;
		}
		var_283_bool = var_7_cvector == (int)37709;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_216(var_8_bool, "Agression");
			@@@var_0_object:SetMessage((int)535981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535982, (int)37711, (int)37710);
			return 0;
		}
		var_290_bool = var_7_cvector == (int)37711;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_216(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)535983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535984, (int)-1, (int)37712);
			@@@var_0_object:AddReply((int)535985, (int)-1, (int)37713);
			return 0;
		}
		var_300_bool = var_7_cvector == (int)14670;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513435, (int)14672, (int)14671);
			@@@var_0_object:AddReply((int)535970, (int)-1, (int)37697);
			return 0;
		}
		var_310_bool = var_7_cvector == (int)14672;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_216(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)513436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513437, (int)14674, (int)14673);
			@@@var_0_object:AddReply((int)535971, (int)37699, (int)37698);
			return 0;
		}
		var_320_bool = var_7_cvector == (int)37699;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_216(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)535972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535973, (int)37701, (int)37700);
			return 0;
		}
		var_327_bool = var_7_cvector == (int)37701;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_216(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)535974);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535975, (int)14674, (int)37702);
			return 0;
		}
		var_334_bool = var_7_cvector == (int)14674;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_216(var_8_bool, "Agression");
			@@@var_0_object:SetMessage((int)513438);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513494, (int)14736, (int)14735);
			@@@var_0_object:AddReply((int)513491, (int)14732, (int)14731);
			return 0;
		}
		var_344_bool = var_7_cvector == (int)14732;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513493, (int)14678, (int)14733);
			return 0;
		}
		var_351_bool = var_7_cvector == (int)14736;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_216(var_8_bool, "Agression");
			@@@var_0_object:SetMessage((int)513495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513439, (int)14676, (int)14675);
			@@@var_0_object:AddReply((int)535976, (int)-1, (int)37704);
			return 0;
		}
		var_361_bool = var_7_cvector == (int)14676;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_216(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)513440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513441, (int)14678, (int)14677);
			return 0;
		}
		var_368_bool = var_7_cvector == (int)14678;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513444, (int)14681, (int)14680);
			return 0;
		}
		var_375_bool = var_7_cvector == (int)14681;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513446, (int)-1, (int)14682);
			return 0;
		}
		var_382_bool = var_7_cvector == (int)37690;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535965, (int)14684, (int)37691);
			@@@var_0_object:AddReply((int)535966, (int)37693, (int)37692);
			return 0;
		}
		var_392_bool = var_7_cvector == (int)37693;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_216(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)535967);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535968, (int)14684, (int)37694);
			@@@var_0_object:AddReply((int)535969, (int)-1, (int)37696);
			return 0;
		}
		var_402_bool = var_7_cvector == (int)14684;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_216(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)513448);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513449, (int)14686, (int)14685);
			@@@var_0_object:AddReply((int)513451, (int)14688, (int)14687);
			return 0;
		}
		var_412_bool = var_7_cvector == (int)14688;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513453, (int)14690, (int)14689);
			return 0;
		}
		var_419_bool = var_7_cvector == (int)14690;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_216(var_8_bool, "Agression");
			@@@var_0_object:SetMessage((int)513454);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513455, (int)14694, (int)14691);
			@@@var_0_object:AddReply((int)513456, (int)-1, (int)14692);
			return 0;
		}
		var_429_bool = var_7_cvector == (int)14686;
		if(var_429_bool != 0) {
			var_430_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513450);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513457, (int)14694, (int)14693);
			return 0;
		}
		var_436_bool = var_7_cvector == (int)14694;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_216(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)513458);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513459, (int)-1, (int)14696);
			return 0;
		}
		var_443_bool = var_7_cvector == (int)14661;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_216(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)513425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513426, (int)14663, (int)14662);
			return 0;
		}
		var_450_bool = var_7_cvector == (int)14663;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_216(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)513427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535957, (int)37683, (int)37682);
			return 0;
		}
		var_457_bool = var_7_cvector == (int)37683;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_216(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)535958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513428, (int)14665, (int)14664);
			@@@var_0_object:AddReply((int)535959, (int)37685, (int)37684);
			return 0;
		}
		var_467_bool = var_7_cvector == (int)37685;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535962, (int)14665, (int)37687);
			@@@var_0_object:AddReply((int)535963, (int)-1, (int)37689);
			return 0;
		}
		var_477_bool = var_7_cvector == (int)14665;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513430, (int)14667, (int)14666);
			@@@var_0_object:AddReply((int)535961, (int)-1, (int)37686);
			return 0;
		}
		var_487_bool = var_7_cvector == (int)14667;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_216(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513432, (int)-1, (int)14668);
			return 0;
		}
		var_3_string = true;
		var_493_bool = 0;
		func_2070(var_493_bool);
		if(var_493_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xef";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_1_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = var_9_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_object = Obj();
			func_1669(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_1089;
		var_1_object = false;
	}
Label_1089:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1669(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_1214();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1229();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_1172();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_1386(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_1141(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_1121(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1669(Obj());
				var_53_object = var_52_object;
				func_1536(var_51_bool, var_52_object);
			}
		} else {
			func_1136(var_7_int);
			func_1163();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_1163();
	} else {
		var_14_string = "";
		func_1616("Neutral");
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		EventDisable(0);
		func_1354();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_1377(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_1058(var_25_object);
		var_319_string = "";
		func_1616("Neutral");
		func_1172();
		func_1163();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1107(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_1391(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_2064(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_2062(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_2066(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_2068(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_2045(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1669(Obj());
	var_100_object = var_99_object;
	func_1478(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_310_bool = var_36_bool == 0; //@nz
	if(var_310_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_1460();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1536(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1539:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1539;
		}
	}
	var_126_bool = var_117_int == 0; //@nz
	if(var_126_bool != 0) {
		var_109_bool = 0;
		return 10;
	}
	var_119_int = 0;
	var_128_bool = var_117_int > (int)1;
	if(var_128_bool != 0) {
		irand(var_119_int, var_117_int);
	}
	var_130_int = var_119_int + (int)1;
	var_131_int = var_116_string + var_130_int;
	@@var_110_object:GetProperty(var_131_int, var_120_string);
	var_132_bool = 0; var_133_string = "";
	var_120_string = var_133_string;
	func_1647(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1283()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_1386(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1762((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_1297:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_1386(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_42_bool = var_17_int == 0; //@nz
		if(var_42_bool != 0) {
			Sleep((int)3, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
			} else {
		} else {
				irand(var_20_int, var_17_int);
				irand(var_21_int, (int)5);
				var_50_bool = var_21_int != (int)0;
				if(var_50_bool != 0) {
					var_20_int = 0;
				}
				var_52_string = ""; var_53_int = 0;
				var_20_int = var_53_int;
				func_1755(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_1338;
				goto Label_1349;
		}
		Label_1338:
			var_45_bool = 0;
			func_1352(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1349;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_1297;

		}
	}
Label_1349:
	ResetAAS();
	return 12;
	
}


func_1797()
{
	SetVariable("d8q03", (int)1);
	func_1952();
	func_1965();
	return 0;
}


func_2062(var_86_int)
{
	var_86_int = 515592;
	return 0;
}


func_2064(var_85_int)
{
	var_85_int = 511961;
	return 0;
}


func_1809()
{
	func_1978();
	var_96_bool = 0; var_97_string = ""; var_98_string = "";
	func_1734(var_96_bool, "quest_d8_03", "completed");
	return 0;
}


func_2066(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png";
	return 0;
}


func_2068(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png";
	return 0;
}


func_2070(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1819(var_48_object)
{
	Trace("burah gives blood");
	var_51_object = Obj(); var_52_string = ""; var_53_int = 0;
	var_48_object = var_51_object;
	func_1721(var_51_object, "d8q03_blood", (int)1);
	return 0;
}


func_1058(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1573(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1746(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1582:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1582;
		}
	}
	var_166_bool = var_148_int == 0; //@nz
	if(var_166_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_168_bool = var_148_int > (int)1;
	if(var_168_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_170_int = var_150_int + (int)1;
	var_171_int = var_147_string + var_170_int;
	@@var_141_object:GetProperty(var_171_int, var_151_string);
	var_172_bool = 0; var_173_string = "";
	var_151_string = var_173_string;
	func_1647(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1830()
{
	SetVariable("d8q03", (int)-1);
	func_1991();
	return 0;
}


func_1839(var_78_object)
{
	Trace("burah gives serum");
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0;
	var_78_object = var_81_object;
	func_1721(var_81_object, "burah_serum", (int)1);
	return 0;
}


func_1850()
{
	SetVariable("ood8Burah1", (int)1);
	return 0;
}


func_1856(var_255_bool)
{
	var_257_int = 0; var_258_string = "";
	func_1685(var_257_int, "d8q04");
	var_260_bool = var_257_int == (int)1;
	if(var_260_bool != 0) {
		var_255_bool = 1;
		return 0;
	}
	var_255_bool = 0;
	return 0;
}


func_1352(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_1354()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1868(var_261_bool)
{
	var_263_int = 0; var_264_string = "";
	func_1685(var_263_int, "ood8Burah2");
	var_266_bool = var_263_int == (int)0;
	if(var_266_bool != 0) {
		var_261_bool = 1;
		return 0;
	}
	var_261_bool = 0;
	return 0;
}


func_1359(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1616(var_294_string)
{
	var_295_bool = 0; var_296_float = 0; var_297_float = 0; var_298_bool = 0; var_299_float = 0; var_300_float = 0;
	lshHasAnimation(var_298_bool, var_294_string);
	var_301_bool = var_298_bool;
	if(var_301_bool != 0) {
		lshGetAnimTimes(var_294_string, var_299_float, var_300_float);
		lshPlayAnimation(var_299_float, var_300_float, (bool)0);
	} else {
		var_304_int = "Can't find lsh animation : " + var_294_string;
		Trace(var_304_int);
	}
	return 6;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_string = "";
		func_216(var_194_object, "Neutral");
		@@@var_0_object:SetMessage((int)513423);
		@@@var_0_object:ClearReplies();
		var_218_bool = 0; var_219_object = Obj();
		var_219_object = var_1_object;
		func_1904(var_219_object);
		if(var_218_bool != 0) {
			@@@var_0_object:AddReply((int)513424, (int)14661, (int)14660);
		}
		var_229_bool = 0;
		var_229_bool = 0;
		var_230_bool = 0; var_231_object = Obj();
		var_231_object = var_1_object;
		func_1916(var_231_object);
		if(var_230_bool != 0) {
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_1928(var_237_object);
			if(var_236_bool != 0) {
				var_229_bool = 1;
			}
		}
		if(var_229_bool != 0) {
			@@@var_0_object:AddReply((int)513447, (int)37690, (int)14683);
		}
		var_245_bool = 0; var_246_object = Obj();
		var_246_object = var_1_object;
		func_1940(var_246_object);
		if(var_245_bool != 0) {
			@@@var_0_object:AddReply((int)513433, (int)14670, (int)14669);
		}
		var_254_bool = 0;
		var_254_bool = 0;
		var_255_bool = 0; var_256_object = Obj();
		var_256_object = var_1_object;
		func_1856(var_256_object);
		if(var_255_bool != 0) {
			var_261_bool = 0; var_262_object = Obj();
			var_262_object = var_1_object;
			func_1868(var_262_object);
			if(var_261_bool != 0) {
				var_254_bool = 1;
			}
		}
		if(var_254_bool != 0) {
			@@@var_0_object:AddReply((int)535977, (int)37706, (int)37705);
		}
		var_270_bool = 0;
		var_270_bool = 0;
		var_271_bool = 0; var_272_object = Obj();
		var_272_object = var_1_object;
		func_1880(var_272_object);
		if(var_271_bool != 0) {
			var_277_bool = 0; var_278_object = Obj();
			var_278_object = var_1_object;
			func_1892(var_278_object);
			if(var_277_bool != 0) {
				var_270_bool = 1;
			}
		}
		if(var_270_bool != 0) {
			@@@var_0_object:AddReply((int)538666, (int)40565, (int)40564);
		}
		@@@var_0_object:AddReply((int)513460, (int)-1, (int)14697);
		@@@var_0_object:AddReply((int)535944, (int)-1, (int)37665);
		goto Label_186;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_186:
	var_292_bool = 0;
	func_2070(var_292_bool);
	if(var_292_bool != 0) {

	Label_190:
		lshWaitForAnimEnd();
		var_293_string = var_3_string;
		if(var_293_string != 0) {
		} else {
			var_294_string = "";
			var_294_string = var_2_object;
			func_1616(var_294_string);
			goto Label_190;
	}
		PlayAnimation("all", "idle");

	Label_205:
		WaitForAnimEnd();
		var_307_string = var_3_string;
		if(var_307_string != 0) {
			goto Label_215;
		}
		PlayAnimation("all", "idle");
		goto Label_205;
	}
	goto Label_215;
	
Label_215:
	return 0;
	
}


func_1107(var_0_object)
{
	var_7_bool = 0;
	func_1386(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1116:
	func_1283();
	goto Label_1116;
}
EMIT "Return(); Pop(0)";


func_1367(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0;
	GetPosition(var_20_cvector);
	var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
	return 6;
}


func_1880(var_271_bool)
{
	var_273_int = 0; var_274_string = "";
	func_1685(var_273_int, "d8BurahLetter");
	var_276_bool = var_273_int != (int)0;
	if(var_276_bool != 0) {
		var_271_bool = 1;
		return 0;
	}
	var_271_bool = 0;
	return 0;
}


func_1632(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0;
	lshHasAnimation(var_211_bool, var_204_string);
	var_214_bool = var_211_bool;
	if(var_214_bool != 0) {
		lshGetAnimTimes(var_204_string, var_212_float, var_213_float);
		lshPlayAnimation(var_212_float, var_213_float, var_205_bool);
	} else {
		var_216_int = "Can't find lsh animation : " + var_204_string;
		Trace(var_216_int);
	}
	return 6;
	
}


func_1377(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_1367(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_1121(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj();
	var_34_object = var_38_object;
	func_1377(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1892(var_277_bool)
{
	var_279_int = 0; var_280_string = "";
	func_1685(var_279_int, "ood8Burah3");
	var_282_bool = var_279_int == (int)0;
	if(var_282_bool != 0) {
		var_277_bool = 1;
		return 0;
	}
	var_277_bool = 0;
	return 0;
}


func_1386(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1391(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1675(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_2070(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1454;
		LookAsyncCamera("head");
	}
Label_1454:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1904(var_218_bool)
{
	var_220_int = 0; var_221_string = "";
	func_1685(var_220_int, "d8q03");
	var_225_bool = var_220_int == (int)0;
	if(var_225_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_1136(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1647(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_2070(var_136_bool);
	if(var_136_bool != 0) {
		lshHasSpeech(var_135_bool, var_133_string);
		var_137_bool = var_135_bool;
		if(var_137_bool != 0) {
			lshPlaySpeech(var_133_string);
			var_132_bool = 1;
			return 2;
		}
	}
	var_132_bool = 0;
	return 2;
}


func_1141(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	FindActor(var_18_object, "player");
	var_21_bool = var_18_object == 0; //@nz
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_float = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_1359(var_22_float, var_23_object);
	var_31_bool = var_22_float > (float)90000.0;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_18_object);
	var_19_bool = var_15_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1916(var_230_bool)
{
	var_232_int = 0; var_233_string = "";
	func_1685(var_232_int, "microscope_d8q03_blood");
	var_235_bool = var_232_int == (int)1;
	if(var_235_bool != 0) {
		var_230_bool = 1;
		return 0;
	}
	var_230_bool = 0;
	return 0;
}


func_1662()
{
	var_10_bool = 0;
	func_2070(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1669(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1928(var_236_bool)
{
	var_238_int = 0; var_239_string = "";
	func_1685(var_238_int, "d8q03");
	var_241_bool = var_238_int == (int)1;
	if(var_241_bool != 0) {
		var_236_bool = 1;
		return 0;
	}
	var_236_bool = 0;
	return 0;
}


func_1163()
{
	var_321_float = 0; var_322_float = 0;
	rand(var_322_float, (int)8, (int)16);
	SetTimer((int)10, var_322_float);
	return 2;
}


func_1675(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0;
	var_69_int = var_65_cvector | var_65_cvector;
	var_68_float = sqrt(var_69_int);
	var_70_float = 9.999999974752427e-07;
	var_71_bool = var_68_float < var_70_float;
	if(var_71_bool != 0) {
		var_64_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_64_cvector = var_65_cvector / var_68_float;
	return 2;
}


func_1940(var_245_bool)
{
	var_247_int = 0; var_248_string = "";
	func_1685(var_247_int, "ood8Burah1");
	var_250_bool = var_247_int == (int)0;
	if(var_250_bool != 0) {
		var_245_bool = 1;
		return 0;
	}
	var_245_bool = 0;
	return 0;
}


func_1172()
{
	KillTimer((int)10);
	return 0;
}


func_1685(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0;
	GetVariable(var_221_string, var_223_int);
	var_223_int = var_220_int;
	return 2;
}


func_1690(var_67_int, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj();
	CreateIntVector(var_70_object);
	@@var_70_object:add(var_67_int);
	@@var_70_object:add(var_68_int);
	SendWorldWndMessage((int)3, var_70_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1952()
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateDiaryEntry(var_18_object, (int)124, (int)2, (int)513763);
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0;
	var_18_object = var_23_object;
	func_2017(var_22_bool, var_23_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1702(var_56_object, var_57_object, var_58_int)
{
	var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0;
	@@var_57_object:GetItemID(var_62_int);
	GetInvItemProperty(var_63_int, var_62_int, "Category");
	@@var_56_object:AddItem(var_64_bool, var_57_object, var_63_int, var_58_int);
	var_66_bool = var_64_bool == 0; //@nz
	if(var_66_bool != 0) {
		@@var_56_object:DropItems(var_57_object, var_58_int);
	} else {
		var_67_int = 0; var_68_int = 0;
		var_62_int = var_67_int;
		var_58_int = var_68_int;
		func_1690(var_67_int, var_68_int);
	}
	return 6;
	
}


func_1965()
{
	var_40_object = Obj(); var_41_object = Obj();
	CreateDiaryEntry(var_41_object, (int)770, (int)2, (int)540199);
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0;
	var_41_object = var_46_object;
	func_2017(var_45_bool, var_46_object, (int)124);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1460()
{
	var_312_bool = 0; var_313_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_315_bool = 0;
	func_2070(var_315_bool);
	if(var_315_bool != 0) {
	} else {
		HasAnimationTrack(var_313_bool, "head");
		var_317_bool = var_313_bool;
		if(var_317_bool == 0) goto Label_1477;
		UnlookAsync("head");
	}
Label_1477:
	return 2;
	
}


func_1721(var_51_object, var_52_string, var_53_int)
{
	var_54_object = Obj(); var_55_object = Obj();
	CreateInvItem(var_55_object);
	@@var_55_object:SetItemName(var_52_string);
	var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	var_51_object = var_56_object;
	var_55_object = var_57_object;
	var_53_int = var_58_int;
	func_1702(var_56_object, var_57_object, var_58_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1978()
{
	var_88_object = Obj(); var_89_object = Obj();
	CreateDiaryEntry(var_89_object, (int)125, (int)2, (int)513764);
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0;
	var_89_object = var_94_object;
	func_2017(var_93_bool, var_94_object, (int)124);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1214()
{
	func_1354();
	func_1172();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1478(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1536(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1573(var_140_bool, var_141_object);
			var_175_bool = var_140_bool == 0; //@nz
			if(var_175_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		irand(var_106_int, (int)2);
		var_177_int = var_106_int;
		if(var_177_int != 0) {
			var_180_int = var_105_int + (int)1;
			var_182_int = var_180_int % (int)3;
			SetVariable("voice_common", var_182_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_185_bool = 0; var_186_object = Obj();
		var_99_object = var_186_object;
		func_1573(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1536(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1534;
	
Label_1534:
	var_98_bool = 1;
	return 4;
	
}


func_1734(var_96_bool, var_97_string, var_98_string)
{
	var_99_object = Obj(); var_100_object = Obj();
	FindActor(var_100_object, var_97_string);
	var_101_bool = var_100_object == 0; //@ne
	if(var_101_bool != 0) {
		var_96_bool = 0;
		return 2;
	}
	Trigger(var_100_object, var_98_string);
	var_96_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1991()
{
	var_108_object = Obj(); var_109_object = Obj();
	CreateDiaryEntry(var_109_object, (int)126, (int)2, (int)513765);
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0;
	var_109_object = var_114_object;
	func_2017(var_113_bool, var_114_object, (int)124);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1229()
{
	StopGroup0();
	func_1172();
	var_8_string = "";
	func_1616("Neutral");
	func_1163();
	return 0;
}


func_1746(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_2004(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	GetDiaryRoot(var_33_object);
	var_34_bool = var_33_object == 0; //@nz
	if(var_34_bool != 0) {
		Trace("Can't retrieve diary root");
		var_31_object = 0;
		return 2;
	}
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_216(var_2_object, var_200_string)
{
	var_201_bool = 0;
	func_2070(var_201_bool);
	var_202_bool = var_201_bool == 0; //@nz
	if(var_202_bool != 0) {
		return 0;
	}
	var_203_bool = var_200_string == var_2_object;
	if(var_203_bool != 0) {
		return 0;
	}
	var_204_string = ""; var_205_bool = 0;
	var_200_string = var_204_string;
	var_207_bool = var_200_string == "";
	if(var_207_bool != 0) {
		var_205_bool = 0;
	} else {
		var_205_bool = 1;
	}
	func_1632(var_204_string, var_205_bool);
	var_2_object = var_200_string;
	return 0;
	
}


func_1755(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_2017(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_2004(Obj());
	var_31_object = var_28_object;
	@@var_28_object:Find(var_24_int, var_29_object);
	var_36_bool = var_29_object == 0; //@nz
	if(var_36_bool != 0) {
		var_38_int = "Can't find diary parent with id: " + var_24_int;
		Trace(var_38_int);
		var_22_bool = 0;
		return 6;
	}
	@@var_29_object:AddChild(var_23_object);
	SendWorldWndMessage((int)7);
	@@var_23_object:GetCategory(var_30_int);
	SetDiarySection(var_30_int);
	var_22_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1762(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1764:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1755(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1764;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1779()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1785()
{
	SetVariable("ood8Burah2", (int)1);
	return 0;
}


func_2045(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x80c";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1791()
{
	SetVariable("ood8Burah3", (int)1);
	return 0;
}


