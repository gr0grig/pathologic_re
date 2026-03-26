// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Untrust|W:Autizm|W:Drunk|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Petr.png|W:ui/NPC_Petr_b.png|W:playsound|W:giveitem|W:quest_d7_03|W:remove_maria|W:ood7Petr2|W:ood3Petr2|W:ood3Petr3|W:ood3Petr4|W:ood3Petr5|W:ood2Petr4|W:ood2Petr5|W:lens is given|W:lens|W:KnowTvirin|W:ood2Petr1|W:ood2Petr2|W:ood2Petr3|W:d2q02|W:d2q02PetrGotoAndrei|W:pt_map_andrei|A:AddMark|W:KnowPetr|W:d7q02|W:d7q02BirdBalahon|W:d7q02AlexandrGotoPetr|A:FindMark|A:Remove|W:d7q02MarkGotoAlexandr|W:d7q02MarkGotoCemetery|W:quest_d7_02|W:completed|W:ood7Petr1|W:birdmask is given|W:bird_mask|W:ood11Petr1|W:ood11Petr2|W:ood3Petr1|W:d7q03|W:d11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:mt_petr
// @GLOBALS: 0:object:
// @RUN_OP: 0xf6c
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x222 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5ba vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x889 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbf7 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe13 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf42 vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0xfb5 vars=int
// @EVENT_6: op=0xfdb vars=
// @EVENT_5: op=0xfea vars=
// @EVENT_45: op=0xff7 vars=bool
// @EVENT_0: op=0x1003 vars=object
// @PE: 0x51,0x90,0xa6,0x18a,0x20c,0x222,0x529,0x5a4,0x5ba,0x7e3,0x873,0x889,0xb85,0xbe1,0xbf7,0xdc3,0xdfd,0xe13,0xef2,0xf2c,0xf42,0xf6c,0xfb5,0xfdb,0xff7,0x11fd,0x1225,0x122b,0x1232,0x1238,0x123e,0x1244,0x124a,0x1250,0x1256,0x125c,0x1267,0x126d,0x1273,0x1279,0x127f,0x129f,0x12a5,0x12ae,0x12e0,0x12e6,0x12f1,0x12f7,0x12fd,0x1303,0x130f,0x131b,0x1327,0x1333,0x133f,0x134b,0x1357,0x1363,0x136f,0x137b,0x1387,0x1393,0x139f,0x13ab,0x13b7,0x13c3,0x13cf,0x13db,0x13e7,0x13f3,0x13ff,0x140b,0x1417,0x1423

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4507();
		var_41_bool = var_36_bool == (int)205;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4767();
			var_46_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500171, (int)210, (int)206);
			@@@var_0_object:AddReply((int)500172, (int)209, (int)207);
			return 0;
		}
		var_71_bool = var_36_bool == (int)209;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500174);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500178, (int)218, (int)213);
			return 0;
		}
		var_78_bool = var_36_bool == (int)210;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500176, (int)215, (int)211);
			@@@var_0_object:AddReply((int)500177, (int)214, (int)212);
			return 0;
		}
		var_88_bool = var_36_bool == (int)214;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500181, (int)218, (int)216);
			return 0;
		}
		var_95_bool = var_36_bool == (int)215;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500182, (int)218, (int)217);
			return 0;
		}
		var_102_bool = var_36_bool == (int)218;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500184, (int)-1, (int)221);
			@@@var_0_object:AddReply((int)500185, (int)-1, (int)222);
			return 0;
		}
		var_3_string = true;
		var_111_bool = 0;
		func_4643(var_111_bool);
		if(var_111_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4507();
		var_41_bool = var_37_cvector == (int)8221;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4717();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_4735();
		}
		var_74_bool = var_37_cvector == (int)8222;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_4717();
		}
		var_78_bool = var_37_cvector == (int)8202;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_4723();
		}
		var_84_bool = var_37_cvector == (int)8210;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_4744();
		}
		var_114_bool = var_37_cvector == (int)7590;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_4729();
		}
		var_120_bool = var_37_cvector == (int)26525;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_4688();
		}
		var_126_bool = var_37_cvector == (int)26533;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_4694();
		}
		var_132_bool = var_36_bool == (int)7583;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_524(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)506877);
			@@@var_0_object:ClearReplies();
			var_151_bool = 0;
			var_151_bool = 0;
			var_152_bool = 0; var_153_object = Obj();
			var_153_object = var_1_object;
			func_4975(var_153_object);
			if(var_152_bool != 0) {
				var_160_bool = 0; var_161_object = Obj();
				var_161_object = var_1_object;
				func_5023(var_161_object);
				if(var_160_bool != 0) {
					var_151_bool = 1;
				}
			}
			if(var_151_bool != 0) {
				@@@var_0_object:AddReply((int)506878, (int)7585, (int)7584);
			}
			var_169_bool = 0;
			var_169_bool = 0;
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_4987(var_171_object);
			if(var_170_bool != 0) {
				var_176_bool = 0; var_177_object = Obj();
				var_177_object = var_1_object;
				func_5047(var_177_object);
				if(var_176_bool != 0) {
					var_169_bool = 1;
				}
			}
			if(var_169_bool != 0) {
				@@@var_0_object:AddReply((int)507431, (int)8203, (int)8202);
			}
			var_185_bool = 0;
			var_185_bool = 0;
			var_186_bool = 0; var_187_object = Obj();
			var_187_object = var_1_object;
			func_4999(var_187_object);
			if(var_186_bool != 0) {
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_5011(var_193_object);
				if(var_192_bool != 0) {
					var_185_bool = 1;
				}
			}
			if(var_185_bool != 0) {
				@@@var_0_object:AddReply((int)506884, (int)7591, (int)7590);
			}
			var_201_bool = 0; var_202_object = Obj();
			var_202_object = var_1_object;
			func_4951(var_202_object);
			if(var_201_bool != 0) {
				@@@var_0_object:AddReply((int)525164, (int)26526, (int)26525);
			}
			var_210_bool = 0; var_211_object = Obj();
			var_211_object = var_1_object;
			func_4963(var_211_object);
			if(var_210_bool != 0) {
				@@@var_0_object:AddReply((int)525171, (int)26534, (int)26533);
			}
			@@@var_0_object:AddReply((int)507529, (int)-1, (int)8311);
			return 0;
		}
		var_223_bool = var_36_bool == (int)26534;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525173, (int)26536, (int)26535);
			@@@var_0_object:AddReply((int)525182, (int)26536, (int)26544);
			return 0;
		}
		var_233_bool = var_36_bool == (int)26536;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525174);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525175, (int)26538, (int)26537);
			@@@var_0_object:AddReply((int)525181, (int)-1, (int)26543);
			return 0;
		}
		var_243_bool = var_36_bool == (int)26538;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525176);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525177, (int)26540, (int)26539);
			@@@var_0_object:AddReply((int)525180, (int)-1, (int)26542);
			return 0;
		}
		var_253_bool = var_36_bool == (int)26540;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525179, (int)-1, (int)26541);
			@@@var_0_object:AddReply((int)534039, (int)-1, (int)35617);
			return 0;
		}
		var_263_bool = var_36_bool == (int)26526;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525166, (int)26528, (int)26527);
			@@@var_0_object:AddReply((int)525170, (int)26528, (int)26531);
			return 0;
		}
		var_273_bool = var_36_bool == (int)26528;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525167);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525168, (int)-1, (int)26529);
			@@@var_0_object:AddReply((int)525169, (int)-1, (int)26530);
			return 0;
		}
		var_283_bool = var_36_bool == (int)7591;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507430, (int)10354, (int)8201);
			@@@var_0_object:AddReply((int)533996, (int)-1, (int)35570);
			return 0;
		}
		var_293_bool = var_36_bool == (int)10354;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509422);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509423, (int)10356, (int)10355);
			@@@var_0_object:AddReply((int)509432, (int)10366, (int)10365);
			return 0;
		}
		var_303_bool = var_36_bool == (int)10366;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509434, (int)10356, (int)10367);
			return 0;
		}
		var_310_bool = var_36_bool == (int)10356;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509425, (int)10358, (int)10357);
			@@@var_0_object:AddReply((int)509429, (int)10362, (int)10361);
			return 0;
		}
		var_320_bool = var_36_bool == (int)10362;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509431, (int)10358, (int)10363);
			return 0;
		}
		var_327_bool = var_36_bool == (int)10358;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509427, (int)-1, (int)10359);
			@@@var_0_object:AddReply((int)509428, (int)-1, (int)10360);
			return 0;
		}
		var_337_bool = var_36_bool == (int)8203;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507432);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507433, (int)7589, (int)8204);
			@@@var_0_object:AddReply((int)534034, (int)35612, (int)35611);
			return 0;
		}
		var_347_bool = var_36_bool == (int)35612;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_524(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)534035);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534036, (int)-1, (int)35613);
			return 0;
		}
		var_354_bool = var_36_bool == (int)7589;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_524(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)506883);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507435, (int)8207, (int)8206);
			@@@var_0_object:AddReply((int)507440, (int)8207, (int)8211);
			return 0;
		}
		var_364_bool = var_36_bool == (int)8207;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_524(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)507436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507437, (int)8209, (int)8208);
			@@@var_0_object:AddReply((int)507441, (int)8209, (int)8213);
			return 0;
		}
		var_374_bool = var_36_bool == (int)8209;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_524(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)507438);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507439, (int)-1, (int)8210);
			var_380_bool = 0; var_381_object = Obj();
			var_381_object = var_1_object;
			func_5059(var_381_object);
			if(var_380_bool != 0) {
				@@@var_0_object:AddReply((int)534037, (int)-1, (int)35614);
			}
			return 0;
		}
		var_390_bool = var_36_bool == (int)7585;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_524(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)506879);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506880, (int)7587, (int)7586);
			@@@var_0_object:AddReply((int)507450, (int)8216, (int)8223);
			return 0;
		}
		var_400_bool = var_36_bool == (int)7587;
		if(var_400_bool != 0) {
			var_401_object = Obj(); var_402_object = Obj();
			var_401_object = var_1_object;
			var_402_object = var_0_object;
			func_4711();
			var_405_string = "";
			func_524(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)506881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507442, (int)8216, (int)8215);
			@@@var_0_object:AddReply((int)507451, (int)8226, (int)8225);
			return 0;
		}
		var_414_bool = var_36_bool == (int)8226;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507453, (int)8216, (int)8227);
			return 0;
		}
		var_421_bool = var_36_bool == (int)8216;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_524(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)507443);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507444, (int)8218, (int)8217);
			@@@var_0_object:AddReply((int)534038, (int)8218, (int)35615);
			return 0;
		}
		var_431_bool = var_36_bool == (int)8218;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_524(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)507445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507446, (int)8220, (int)8219);
			var_437_bool = 0; var_438_object = Obj();
			var_438_object = var_1_object;
			func_5035(var_438_object);
			if(var_437_bool != 0) {
				@@@var_0_object:AddReply((int)507449, (int)-1, (int)8222);
			}
			return 0;
		}
		var_447_bool = var_36_bool == (int)8220;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_524(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507448, (int)-1, (int)8221);
			return 0;
		}
		var_3_string = true;
		var_453_bool = 0;
		func_4643(var_453_bool);
		if(var_453_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x223";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4507();
		var_41_bool = var_37_cvector == (int)35572;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4664();
		}
		var_47_bool = var_37_cvector == (int)35586;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_4670();
		}
		var_53_bool = var_37_cvector == (int)35594;
		if(var_53_bool != 0) {
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_4676();
		}
		var_59_bool = var_37_cvector == (int)35601;
		if(var_59_bool != 0) {
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_4682();
		}
		var_65_bool = var_36_bool == (int)11052;
		if(var_65_bool != 0) {
			var_66_bool = 0; var_67_object = Obj();
			var_67_object = var_1_object;
			func_5155(var_67_object);
			if(var_66_bool != 0) {
				var_74_object = Obj(); var_75_object = Obj();
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_4861();
				var_78_string = "";
				func_1444(var_37_cvector, "Drunk");
				@@@var_0_object:SetMessage((int)510030);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)510031, (int)11054, (int)11053);
				@@@var_0_object:AddReply((int)510039, (int)11063, (int)11062);
				return 0;
			}
			var_102_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)533997);
			@@@var_0_object:ClearReplies();
			var_104_bool = 0; var_105_object = Obj();
			var_105_object = var_1_object;
			func_4903(var_105_object);
			if(var_104_bool != 0) {
				@@@var_0_object:AddReply((int)533998, (int)35573, (int)35572);
			}
			var_113_bool = 0; var_114_object = Obj();
			var_114_object = var_1_object;
			func_4915(var_114_object);
			if(var_113_bool != 0) {
				@@@var_0_object:AddReply((int)534011, (int)35587, (int)35586);
			}
			var_122_bool = 0; var_123_object = Obj();
			var_123_object = var_1_object;
			func_4927(var_123_object);
			if(var_122_bool != 0) {
				@@@var_0_object:AddReply((int)534019, (int)35595, (int)35594);
			}
			var_131_bool = 0; var_132_object = Obj();
			var_132_object = var_1_object;
			func_4939(var_132_object);
			if(var_131_bool != 0) {
				@@@var_0_object:AddReply((int)534025, (int)35602, (int)35601);
			}
			@@@var_0_object:AddReply((int)534033, (int)-1, (int)35610);
			return 0;
		}
		var_144_bool = var_36_bool == (int)35602;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534026);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534027, (int)35604, (int)35603);
			@@@var_0_object:AddReply((int)534030, (int)35607, (int)35606);
			return 0;
		}
		var_154_bool = var_36_bool == (int)35607;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534031);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534032, (int)35604, (int)35608);
			return 0;
		}
		var_161_bool = var_36_bool == (int)35604;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534028);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534029, (int)-1, (int)35605);
			return 0;
		}
		var_168_bool = var_36_bool == (int)35595;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534020);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534021, (int)35597, (int)35596);
			@@@var_0_object:AddReply((int)534024, (int)35597, (int)35599);
			return 0;
		}
		var_178_bool = var_36_bool == (int)35597;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534022);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534023, (int)-1, (int)35598);
			return 0;
		}
		var_185_bool = var_36_bool == (int)35587;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534013, (int)35589, (int)35588);
			return 0;
		}
		var_192_bool = var_36_bool == (int)35589;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534014);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534015, (int)35591, (int)35590);
			return 0;
		}
		var_199_bool = var_36_bool == (int)35591;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534016);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534017, (int)-1, (int)35592);
			@@@var_0_object:AddReply((int)534018, (int)-1, (int)35593);
			return 0;
		}
		var_209_bool = var_36_bool == (int)35573;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)533999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534000, (int)35575, (int)35574);
			@@@var_0_object:AddReply((int)534008, (int)35583, (int)35582);
			return 0;
		}
		var_219_bool = var_36_bool == (int)35583;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534009);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534010, (int)35577, (int)35584);
			return 0;
		}
		var_226_bool = var_36_bool == (int)35575;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_1444(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)534001);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534002, (int)35577, (int)35576);
			return 0;
		}
		var_233_bool = var_36_bool == (int)35577;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_1444(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)534003);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534004, (int)35579, (int)35578);
			return 0;
		}
		var_240_bool = var_36_bool == (int)35579;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)534005);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534006, (int)-1, (int)35580);
			@@@var_0_object:AddReply((int)534007, (int)-1, (int)35581);
			return 0;
		}
		var_250_bool = var_36_bool == (int)11063;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)510040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510041, (int)-1, (int)11064);
			@@@var_0_object:AddReply((int)510042, (int)11056, (int)11065);
			return 0;
		}
		var_260_bool = var_36_bool == (int)11054;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)510032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510033, (int)11056, (int)11055);
			@@@var_0_object:AddReply((int)510038, (int)11056, (int)11060);
			return 0;
		}
		var_270_bool = var_36_bool == (int)11056;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_1444(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)510034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510035, (int)-1, (int)11057);
			@@@var_0_object:AddReply((int)510036, (int)-1, (int)11058);
			@@@var_0_object:AddReply((int)510037, (int)-1, (int)11059);
			return 0;
		}
		var_3_string = true;
		var_282_bool = 0;
		func_4643(var_282_bool);
		if(var_282_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5bb";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4507();
		var_41_bool = var_37_cvector == (int)14602;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4832();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_4773();
		}
		var_74_bool = var_37_cvector == (int)14605;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_4832();
		}
		var_78_bool = var_37_cvector == (int)14608;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_4773();
		}
		var_82_bool = var_37_cvector == (int)14626;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_4782();
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_4788();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_4838(var_127_object);
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_4645();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_4700(var_155_object);
		}
		var_161_bool = var_37_cvector == (int)34778;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_4658();
		}
		var_167_bool = var_37_cvector == (int)34780;
		if(var_167_bool != 0) {
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_4651();
		}
		var_174_bool = var_37_cvector == (int)37384;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_4651();
		}
		var_178_bool = var_36_bool == (int)14585;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_2163(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)513353);
			@@@var_0_object:ClearReplies();
			var_197_bool = 0;
			var_197_bool = 0;
			var_198_bool = 0; var_199_object = Obj();
			var_199_object = var_1_object;
			func_5083(var_199_object);
			if(var_198_bool != 0) {
				var_204_bool = 0; var_205_object = Obj();
				var_205_object = var_1_object;
				func_5071(var_205_object);
				if(var_204_bool != 0) {
					var_197_bool = 1;
				}
			}
			if(var_197_bool != 0) {
				@@@var_0_object:AddReply((int)513355, (int)14598, (int)14587);
			}
			var_213_bool = 0;
			var_213_bool = 0;
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_5083(var_215_object);
			var_216_bool = var_214_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_object;
				func_5071(var_218_object);
				if(var_217_bool != 0) {
					var_213_bool = 1;
				}
			}
			if(var_213_bool != 0) {
				@@@var_0_object:AddReply((int)513374, (int)14607, (int)14606);
			}
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_5095(var_223_object);
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)513390, (int)14625, (int)14624);
			}
			var_231_bool = 0;
			var_231_bool = 1;
			var_232_bool = 0;
			var_232_bool = 0;
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_4879(var_234_object);
			if(var_233_bool != 0) {
				var_239_bool = 0; var_240_object = Obj();
				var_240_object = var_1_object;
				func_4891(var_240_object);
				if(var_239_bool != 0) {
					var_232_bool = 1;
				}
			}
			if(var_232_bool != 1) {
				var_245_bool = 0;
				var_245_bool = 0;
				var_246_bool = 0; var_247_object = Obj();
				var_247_object = var_1_object;
				func_4867(var_247_object);
				if(var_246_bool != 0) {
					var_252_bool = 0; var_253_object = Obj();
					var_253_object = var_1_object;
					func_4891(var_253_object);
					if(var_252_bool != 0) {
						var_245_bool = 1;
					}
				}
				if(var_245_bool != 1) {
					var_231_bool = 0;
				}
			}
			if(var_231_bool != 0) {
				@@@var_0_object:AddReply((int)533264, (int)34779, (int)34778);
			}
			@@@var_0_object:AddReply((int)513354, (int)-1, (int)14586);
			@@@var_0_object:AddReply((int)535721, (int)-1, (int)37400);
			return 0;
		}
		var_264_bool = var_36_bool == (int)34779;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_2163(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)533265);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535698, (int)37373, (int)37370);
			@@@var_0_object:AddReply((int)535713, (int)37371, (int)37385);
			return 0;
		}
		var_274_bool = var_36_bool == (int)37371;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_2163(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535699);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535700, (int)37373, (int)37372);
			return 0;
		}
		var_281_bool = var_36_bool == (int)37373;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_2163(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)535701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535702, (int)37375, (int)37374);
			@@@var_0_object:AddReply((int)535714, (int)37375, (int)37387);
			return 0;
		}
		var_291_bool = var_36_bool == (int)37375;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_2163(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)535703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535704, (int)37377, (int)37376);
			@@@var_0_object:AddReply((int)535715, (int)37377, (int)37389);
			return 0;
		}
		var_301_bool = var_36_bool == (int)37377;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_2163(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)535705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535706, (int)37379, (int)37378);
			@@@var_0_object:AddReply((int)535716, (int)37379, (int)37391);
			return 0;
		}
		var_311_bool = var_36_bool == (int)37379;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_2163(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)535707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535708, (int)37381, (int)37380);
			return 0;
		}
		var_318_bool = var_36_bool == (int)37381;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_2163(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535709);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535710, (int)37383, (int)37382);
			return 0;
		}
		var_325_bool = var_36_bool == (int)37383;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_2163(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535711);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533266, (int)-1, (int)34780);
			@@@var_0_object:AddReply((int)535712, (int)-1, (int)37384);
			return 0;
		}
		var_335_bool = var_36_bool == (int)14625;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_2163(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)513391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513392, (int)-1, (int)14626);
			return 0;
		}
		var_342_bool = var_36_bool == (int)14607;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_2163(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)513375);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513376, (int)-1, (int)14608);
			return 0;
		}
		var_349_bool = var_36_bool == (int)14598;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_2163(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)513366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513367, (int)14588, (int)14599);
			@@@var_0_object:AddReply((int)535717, (int)14590, (int)37393);
			return 0;
		}
		var_359_bool = var_36_bool == (int)14588;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_2163(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)513356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513357, (int)14590, (int)14589);
			@@@var_0_object:AddReply((int)535718, (int)37396, (int)37395);
			return 0;
		}
		var_369_bool = var_36_bool == (int)37396;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_2163(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)535719);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535720, (int)14592, (int)37397);
			return 0;
		}
		var_376_bool = var_36_bool == (int)14590;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_2163(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)513358);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513359, (int)14592, (int)14591);
			@@@var_0_object:AddReply((int)541555, (int)43724, (int)43723);
			return 0;
		}
		var_386_bool = var_36_bool == (int)43724;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_2163(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)541556);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541557, (int)43729, (int)43725);
			@@@var_0_object:AddReply((int)541558, (int)43727, (int)43726);
			return 0;
		}
		var_396_bool = var_36_bool == (int)43727;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_2163(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)541559);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541560, (int)43729, (int)43728);
			return 0;
		}
		var_403_bool = var_36_bool == (int)43729;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_2163(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)541561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541562, (int)43732, (int)43731);
			@@@var_0_object:AddReply((int)541565, (int)14592, (int)43735);
			return 0;
		}
		var_413_bool = var_36_bool == (int)43732;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_2163(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)541563);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541564, (int)14592, (int)43733);
			return 0;
		}
		var_420_bool = var_36_bool == (int)14592;
		if(var_420_bool != 0) {
			var_421_string = "";
			func_2163(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)513360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513361, (int)14594, (int)14593);
			return 0;
		}
		var_427_bool = var_36_bool == (int)14594;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_2163(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)513362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513363, (int)14601, (int)14595);
			@@@var_0_object:AddReply((int)513364, (int)14597, (int)14596);
			return 0;
		}
		var_437_bool = var_36_bool == (int)14597;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_2163(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)513365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513368, (int)14601, (int)14600);
			@@@var_0_object:AddReply((int)513371, (int)14604, (int)14603);
			return 0;
		}
		var_447_bool = var_36_bool == (int)14604;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_2163(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513372);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513373, (int)-1, (int)14605);
			return 0;
		}
		var_454_bool = var_36_bool == (int)14601;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_2163(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)513369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513370, (int)-1, (int)14602);
			return 0;
		}
		var_3_string = true;
		var_460_bool = 0;
		func_4643(var_460_bool);
		if(var_460_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x88a";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4507();
		var_41_bool = var_37_cvector == (int)15708;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4855();
		}
		var_47_bool = var_37_cvector == (int)41570;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_4849();
		}
		var_53_bool = var_36_bool == (int)15707;
		if(var_53_bool != 0) {
			var_54_string = "";
			func_3041(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)514474);
			@@@var_0_object:ClearReplies();
			var_72_bool = 0; var_73_object = Obj();
			var_73_object = var_1_object;
			func_5143(var_73_object);
			if(var_72_bool != 0) {
				@@@var_0_object:AddReply((int)514475, (int)15709, (int)15708);
			}
			var_83_bool = 0;
			var_83_bool = 0;
			var_84_bool = 0; var_85_object = Obj();
			var_85_object = var_1_object;
			func_5107(var_85_object);
			if(var_84_bool != 0) {
				var_90_bool = 0; var_91_object = Obj();
				var_91_object = var_1_object;
				func_5119(var_91_object);
				if(var_90_bool != 0) {
					var_83_bool = 1;
				}
			}
			if(var_83_bool != 0) {
				@@@var_0_object:AddReply((int)539623, (int)15695, (int)41570);
			}
			var_99_bool = 0; var_100_object = Obj();
			var_100_object = var_1_object;
			func_5131(var_100_object);
			if(var_99_bool != 0) {
				@@@var_0_object:AddReply((int)514501, (int)-1, (int)15737);
			}
			@@@var_0_object:AddReply((int)514500, (int)-1, (int)15736);
			return 0;
		}
		var_112_bool = var_36_bool == (int)15695;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_3041(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514465, (int)15697, (int)15696);
			@@@var_0_object:AddReply((int)539626, (int)15697, (int)41574);
			return 0;
		}
		var_122_bool = var_36_bool == (int)15697;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_3041(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514466);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514467, (int)-1, (int)15698);
			@@@var_0_object:AddReply((int)539630, (int)41859, (int)41576);
			return 0;
		}
		var_132_bool = var_36_bool == (int)41859;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_3041(var_37_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)539899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539900, (int)41861, (int)41860);
			return 0;
		}
		var_139_bool = var_36_bool == (int)41861;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_3041(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539902, (int)-1, (int)41862);
			return 0;
		}
		var_146_bool = var_36_bool == (int)15709;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_3041(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)514476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514477, (int)15711, (int)15710);
			@@@var_0_object:AddReply((int)514499, (int)15711, (int)15734);
			return 0;
		}
		var_156_bool = var_36_bool == (int)15711;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_3041(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)514478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514479, (int)15713, (int)15712);
			@@@var_0_object:AddReply((int)514494, (int)15729, (int)15728);
			return 0;
		}
		var_166_bool = var_36_bool == (int)15729;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_3041(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514496, (int)15731, (int)15730);
			return 0;
		}
		var_173_bool = var_36_bool == (int)15731;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_3041(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514497);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514498, (int)15713, (int)15732);
			return 0;
		}
		var_180_bool = var_36_bool == (int)15713;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_3041(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514480);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514481, (int)15715, (int)15714);
			return 0;
		}
		var_187_bool = var_36_bool == (int)15715;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_3041(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514483, (int)15717, (int)15716);
			@@@var_0_object:AddReply((int)539625, (int)15719, (int)41572);
			return 0;
		}
		var_197_bool = var_36_bool == (int)15717;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_3041(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514484);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514485, (int)15719, (int)15718);
			return 0;
		}
		var_204_bool = var_36_bool == (int)15719;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_3041(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)514486);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514487, (int)15721, (int)15720);
			@@@var_0_object:AddReply((int)514491, (int)15725, (int)15724);
			return 0;
		}
		var_214_bool = var_36_bool == (int)15725;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_3041(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)514492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514493, (int)15721, (int)15726);
			return 0;
		}
		var_221_bool = var_36_bool == (int)15721;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_3041(var_37_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)514488);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514489, (int)-1, (int)15722);
			@@@var_0_object:AddReply((int)514490, (int)-1, (int)15723);
			return 0;
		}
		var_3_string = true;
		var_230_bool = 0;
		func_4643(var_230_bool);
		if(var_230_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbf8";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4507();
		var_41_bool = var_36_bool == (int)37360;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_3581(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535675, (int)42165, (int)37361);
			@@@var_0_object:AddReply((int)540006, (int)-1, (int)41977);
			return 0;
		}
		var_67_bool = var_36_bool == (int)42165;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_3581(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)540187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540188, (int)42167, (int)42166);
			return 0;
		}
		var_74_bool = var_36_bool == (int)42167;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_3581(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)540189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540190, (int)42196, (int)42168);
			@@@var_0_object:AddReply((int)540192, (int)42169, (int)42170);
			return 0;
		}
		var_84_bool = var_36_bool == (int)42196;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_3581(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)540216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540217, (int)42169, (int)42197);
			return 0;
		}
		var_91_bool = var_36_bool == (int)42169;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_3581(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540193, (int)-1, (int)42172);
			@@@var_0_object:AddReply((int)540194, (int)42174, (int)42173);
			return 0;
		}
		var_101_bool = var_36_bool == (int)42174;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_3581(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540195);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540196, (int)-1, (int)42175);
			return 0;
		}
		var_3_string = true;
		var_107_bool = 0;
		func_4643(var_107_bool);
		if(var_107_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe14";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_4507();
		var_41_bool = var_36_int == (int)42551;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_3884(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_4643(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf43";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_4017();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_4231(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_3986(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_3966(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_4514(Obj());
				var_82_object = var_81_object;
				func_4381(var_80_bool, var_81_object);
			}
		} else {
			func_3981(var_36_int);
			func_4008();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_4199();
	func_4017();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_4017();
	var_37_string = "";
	func_4461("Neutral");
	func_4008();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_4008();
	} else {
		var_43_string = "";
		func_4461("Neutral");
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
		func_4199();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_4222(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_5294(var_54_object);
		var_844_string = "";
		func_4461("Neutral");
		func_4017();
		func_4008();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3952(var_35_cvector);
	return 0;
}


func_0(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_0_object = var_60_object;
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0;
	var_60_object = var_71_object;
	func_4236(var_70_bool, var_71_object, (float)70.0);
	var_117_bool = var_70_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	CreateDialog(var_66_object);
	var_118_int = 0;
	func_4637(var_118_int);
	@@var_66_object:SetNPCName(var_118_int);
	var_119_int = 0;
	func_4635(var_119_int);
	@@var_66_object:SetNPCDescription(var_119_int);
	var_120_string = "";
	func_4639(var_120_string);
	@@var_66_object:SetPhoto(var_120_string);
	var_121_string = "";
	func_4641(var_121_string);
	@@var_66_object:SetPhoto2(var_121_string);
	var_122_int = 0;
	func_5277(var_122_int);
	@@var_66_object:SetPlayerName(var_122_int);
	IsOverrideActive(var_67_bool);
	var_130_bool = var_67_bool;
	if(var_130_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	DoDialog(var_66_object);
	var_131_bool = 0; var_132_object = Obj();
	func_4514(Obj());
	var_133_object = var_132_object;
	func_4323(var_131_bool, var_132_object);
	var_226_object = Obj(); var_227_object = Obj();
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(1);
	func_81(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	@@var_66_object:IsDialogEnd(var_69_bool);
	
Label_63:
	var_279_bool = var_69_bool == 0; //@nz
	if(var_279_bool != 0) {
		sync();
		@@var_66_object:IsDialogEnd(var_69_bool);
		goto Label_63;
	}
	var_60_object = Obj();
	func_4305();
	StopDialog(var_66_object);
	@@var_66_object:GetReturnValue((int)-1);
	var_68_int = var_59_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4611(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = "";
	var_64_int = var_61_int;
	if(var_64_int != 0) {
		"idle" = "idle" + var_61_int;
	}
	var_63_string = var_60_string;
	return 2;
}


func_4867(var_614_bool)
{
	var_616_int = 0; var_617_string = "";
	func_4530(var_616_int, "d7q03");
	var_619_bool = var_616_int == (int)4;
	if(var_619_bool != 0) {
		var_614_bool = 1;
		return 0;
	}
	var_614_bool = 0;
	return 0;
}


func_4618(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_57_int = 0;
	
Label_4620:
	var_60_string = ""; var_61_int = 0;
	var_57_int = var_61_int;
	func_4611(var_60_string, var_61_int);
	HasAnimation(var_58_bool, "all", var_60_string);
	var_65_bool = var_58_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
		var_57_int = var_57_int + (int)1;
		goto Label_4620;
	}
	var_57_int = var_54_int;
	return 4;
	
}


func_5131(var_708_bool)
{
	var_710_int = 0; var_711_string = "";
	func_4530(var_710_int, "d11q01");
	var_713_bool = var_710_int == (int)1000;
	if(var_713_bool != 0) {
		var_708_bool = 1;
		return 0;
	}
	var_708_bool = 0;
	return 0;
}


func_524(var_2_object, var_324_string)
{
	var_325_bool = 0;
	func_4643(var_325_bool);
	var_326_bool = var_325_bool == 0; //@nz
	if(var_326_bool != 0) {
		return 0;
	}
	var_327_bool = var_324_string == var_2_object;
	if(var_327_bool != 0) {
		return 0;
	}
	var_328_string = ""; var_329_bool = 0;
	var_324_string = var_328_string;
	var_331_bool = var_324_string == "";
	if(var_331_bool != 0) {
		var_329_bool = 0;
	} else {
		var_329_bool = 1;
	}
	func_4477(var_328_string, var_329_bool);
	var_2_object = var_324_string;
	return 0;
	
}


func_4879(var_601_bool)
{
	var_603_int = 0; var_604_string = "";
	func_4530(var_603_int, "d7q03");
	var_606_bool = var_603_int == (int)1000;
	if(var_606_bool != 0) {
		var_601_bool = 1;
		return 0;
	}
	var_601_bool = 0;
	return 0;
}


func_5143(var_683_bool)
{
	var_685_int = 0; var_686_string = "";
	func_4530(var_685_int, "ood11Petr2");
	var_688_bool = var_685_int == (int)0;
	if(var_688_bool != 0) {
		var_683_bool = 1;
		return 0;
	}
	var_683_bool = 0;
	return 0;
}


func_4635(var_119_int)
{
	var_119_int = 515550;
	return 0;
}


func_4891(var_607_bool)
{
	var_609_int = 0; var_610_string = "";
	func_4530(var_609_int, "ood7Petr2");
	var_612_bool = var_609_int == (int)0;
	if(var_612_bool != 0) {
		var_607_bool = 1;
		return 0;
	}
	var_607_bool = 0;
	return 0;
}


func_4637(var_118_int)
{
	var_118_int = 502875;
	return 0;
}


func_4381(var_142_bool, var_143_object)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = "";
	var_149_string = "c";
	var_150_int = 0;
	
Label_4384:
	if((int)1 != 0) {
		var_156_int = var_150_int + (int)1;
		var_157_int = var_149_string + var_156_int;
		@@var_143_object:HasProperty(var_157_int, var_151_bool);
		var_158_bool = var_151_bool == 0; //@nz
		if(var_158_bool != 0) {
		} else {
			var_150_int = var_150_int + (int)1;
			goto Label_4384;
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
	func_4492(var_165_bool, var_166_string);
	var_165_bool = var_142_bool;
	return 10;
	
}


func_4639(var_120_string)
{
	var_120_string = "ui/NPC_Petr.png";
	return 0;
}


func_4128()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0;
	WaitForAnimEnd();
	var_52_bool = 0;
	func_4231(var_52_bool);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 12;
	}
	func_4618((int)0);
	var_54_int = var_46_int;
	var_47_int = 0;
	
Label_4142:
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_47_int < (int)5;
	if(var_69_bool != 0) {
		var_70_bool = 0;
		func_4231(var_70_bool);
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
				func_4611(var_81_string, var_82_int);
				PlayAnimation("all", var_81_string);
				WaitForAnimEnd(var_51_bool);
				var_83_bool = var_51_bool == 0; //@nz
				if(var_83_bool == 0) goto Label_4183;
				goto Label_4194;
		}
		Label_4183:
			var_74_bool = 0;
			func_4197(var_74_bool);
			var_75_bool = var_74_bool == 0; //@nz
			if(var_75_bool != 0) {
				goto Label_4194;
			}
			ResetAAS();
			var_47_int = var_47_int + (int)1;
			goto Label_4142;

		}
	}
Label_4194:
	ResetAAS();
	return 12;
	
}


func_4641(var_121_string)
{
	var_121_string = "ui/NPC_Petr_b.png";
	return 0;
}


func_4643(var_113_bool)
{
	var_113_bool = 1;
	return 0;
}


func_5155(var_447_bool)
{
	var_449_int = 0; var_450_string = "";
	func_4530(var_449_int, "ood3Petr1");
	var_452_bool = var_449_int == (int)0;
	if(var_452_bool != 0) {
		var_447_bool = 1;
		return 0;
	}
	var_447_bool = 0;
	return 0;
}


func_4645()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_4903(var_482_bool)
{
	var_484_int = 0; var_485_string = "";
	func_4530(var_484_int, "ood3Petr2");
	var_487_bool = var_484_int == (int)0;
	if(var_487_bool != 0) {
		var_482_bool = 1;
		return 0;
	}
	var_482_bool = 0;
	return 0;
}


func_1321(var_0_object, var_1_object, var_2_object, var_3_string, var_440_object, var_441_object)
{
	var_0_object = var_441_object;
	var_1_object = var_440_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_447_bool = 0; var_448_object = Obj();
		var_448_object = var_1_object;
		func_5155(var_448_object);
		if(var_447_bool != 0) {
			var_453_object = Obj(); var_454_object = Obj();
			var_453_object = var_1_object;
			var_454_object = var_0_object;
			func_4861();
			var_457_string = "";
			func_1444(var_441_object, "Drunk");
			@@@var_0_object:SetMessage((int)510030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510031, (int)11054, (int)11053);
			@@@var_0_object:AddReply((int)510039, (int)11063, (int)11062);
		} else {
				var_480_string = "";
				func_1444(var_441_object, "Drunk");
				@@@var_0_object:SetMessage((int)533997);
				@@@var_0_object:ClearReplies();
				var_482_bool = 0; var_483_object = Obj();
				var_483_object = var_1_object;
				func_4903(var_483_object);
				if(var_482_bool != 0) {
					@@@var_0_object:AddReply((int)533998, (int)35573, (int)35572);
				}
				var_491_bool = 0; var_492_object = Obj();
				var_492_object = var_1_object;
				func_4915(var_492_object);
				if(var_491_bool != 0) {
					@@@var_0_object:AddReply((int)534011, (int)35587, (int)35586);
				}
				var_500_bool = 0; var_501_object = Obj();
				var_501_object = var_1_object;
				func_4927(var_501_object);
				if(var_500_bool != 0) {
					@@@var_0_object:AddReply((int)534019, (int)35595, (int)35594);
				}
				var_509_bool = 0; var_510_object = Obj();
				var_510_object = var_1_object;
				func_4939(var_510_object);
				if(var_509_bool != 0) {
					@@@var_0_object:AddReply((int)534025, (int)35602, (int)35601);
				}
				@@@var_0_object:AddReply((int)534033, (int)-1, (int)35610);
				goto Label_1414;
		}
	}
Label_1414:
	var_472_bool = 0;
	func_4643(var_472_bool);
	if(var_472_bool != 0) {

	Label_1418:
		lshWaitForAnimEnd();
		var_473_string = var_3_string;
		if(var_473_string != 0) {
		} else {
			var_474_string = "";
			var_474_string = var_2_object;
			func_4461(var_474_string);
			goto Label_1418;
	}
		PlayAnimation("all", "idle");

	Label_1433:
		WaitForAnimEnd();
		var_477_string = var_3_string;
		if(var_477_string != 0) {
			goto Label_1443;
		}
		PlayAnimation("all", "idle");
		goto Label_1433;

	}
	goto Label_1443;
	
Label_1443:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x52d";


func_4651()
{
	var_170_bool = 0; var_171_string = ""; var_172_string = "";
	func_4579(var_170_bool, "quest_d7_03", "remove_maria");
	return 0;
}


func_3884(var_2_object, var_819_string)
{
	var_820_bool = 0;
	func_4643(var_820_bool);
	var_821_bool = var_820_bool == 0; //@nz
	if(var_821_bool != 0) {
		return 0;
	}
	var_822_bool = var_819_string == var_2_object;
	if(var_822_bool != 0) {
		return 0;
	}
	var_823_string = ""; var_824_bool = 0;
	var_819_string = var_823_string;
	var_826_bool = var_819_string == "";
	if(var_826_bool != 0) {
		var_824_bool = 0;
	} else {
		var_824_bool = 1;
	}
	func_4477(var_823_string, var_824_bool);
	var_2_object = var_819_string;
	return 0;
	
}


func_5167()
{
	var_50_object = Obj(); var_51_object = Obj();
	CreateDiaryEntry(var_51_object, (int)130, (int)2, (int)515267);
	var_55_bool = 0; var_56_object = Obj(); var_57_int = 0;
	var_51_object = var_56_object;
	func_5232(var_55_bool, var_56_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4658()
{
	SetVariable("ood7Petr2", (int)1);
	return 0;
}


func_4915(var_491_bool)
{
	var_493_int = 0; var_494_string = "";
	func_4530(var_493_int, "ood3Petr3");
	var_496_bool = var_493_int == (int)0;
	if(var_496_bool != 0) {
		var_491_bool = 1;
		return 0;
	}
	var_491_bool = 0;
	return 0;
}


func_2868(var_0_object, var_643_int, var_644_object)
{
	var_646_object = Obj(); var_647_bool = 0; var_648_int = 0; var_649_bool = 0; var_650_object = Obj(); var_651_bool = 0; var_652_int = 0; var_653_bool = 0;
	var_0_object = var_644_object;
	var_654_bool = 0; var_655_object = Obj(); var_656_float = 0;
	var_644_object = var_655_object;
	func_4236(var_654_bool, var_655_object, (float)70.0);
	var_657_bool = var_654_bool == 0; //@nz
	if(var_657_bool != 0) {
		var_643_int = -2;
		return 8;
	}
	CreateDialog(var_650_object);
	var_658_int = 0;
	func_4637(var_658_int);
	@@var_650_object:SetNPCName(var_658_int);
	var_659_int = 0;
	func_4635(var_659_int);
	@@var_650_object:SetNPCDescription(var_659_int);
	var_660_string = "";
	func_4639(var_660_string);
	@@var_650_object:SetPhoto(var_660_string);
	var_661_string = "";
	func_4641(var_661_string);
	@@var_650_object:SetPhoto2(var_661_string);
	var_662_int = 0;
	func_5277(var_662_int);
	@@var_650_object:SetPlayerName(var_662_int);
	IsOverrideActive(var_651_bool);
	var_663_bool = var_651_bool;
	if(var_663_bool != 0) {
		var_643_int = -2;
		return 8;
	}
	DoDialog(var_650_object);
	var_664_bool = 0; var_665_object = Obj();
	func_4514(Obj());
	var_666_object = var_665_object;
	func_4323(var_664_bool, var_665_object);
	var_667_object = Obj(); var_668_object = Obj();
	var_644_object = var_667_object;
	var_650_object = var_668_object;
	TaskCall(9);
	func_2949(var_669_object, var_670_object, var_671_string, var_672_bool, var_667_object, var_668_object);
	TaskReturn();
	@@var_650_object:IsDialogEnd(var_653_bool);
	
Label_2931:
	var_728_bool = var_653_bool == 0; //@nz
	if(var_728_bool != 0) {
		sync();
		@@var_650_object:IsDialogEnd(var_653_bool);
		goto Label_2931;
	}
	var_644_object = Obj();
	func_4305();
	StopDialog(var_650_object);
	@@var_650_object:GetReturnValue((int)-1);
	var_652_int = var_643_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4664()
{
	SetVariable("ood3Petr2", (int)1);
	return 0;
}


func_313(var_0_object, var_293_int, var_294_object)
{
	var_296_object = Obj(); var_297_bool = 0; var_298_int = 0; var_299_bool = 0; var_300_object = Obj(); var_301_bool = 0; var_302_int = 0; var_303_bool = 0;
	var_0_object = var_294_object;
	var_304_bool = 0; var_305_object = Obj(); var_306_float = 0;
	var_294_object = var_305_object;
	func_4236(var_304_bool, var_305_object, (float)70.0);
	var_307_bool = var_304_bool == 0; //@nz
	if(var_307_bool != 0) {
		var_293_int = -2;
		return 8;
	}
	CreateDialog(var_300_object);
	var_308_int = 0;
	func_4637(var_308_int);
	@@var_300_object:SetNPCName(var_308_int);
	var_309_int = 0;
	func_4635(var_309_int);
	@@var_300_object:SetNPCDescription(var_309_int);
	var_310_string = "";
	func_4639(var_310_string);
	@@var_300_object:SetPhoto(var_310_string);
	var_311_string = "";
	func_4641(var_311_string);
	@@var_300_object:SetPhoto2(var_311_string);
	var_312_int = 0;
	func_5277(var_312_int);
	@@var_300_object:SetPlayerName(var_312_int);
	IsOverrideActive(var_301_bool);
	var_313_bool = var_301_bool;
	if(var_313_bool != 0) {
		var_293_int = -2;
		return 8;
	}
	DoDialog(var_300_object);
	var_314_bool = 0; var_315_object = Obj();
	func_4514(Obj());
	var_316_object = var_315_object;
	func_4323(var_314_bool, var_315_object);
	var_317_object = Obj(); var_318_object = Obj();
	var_294_object = var_317_object;
	var_300_object = var_318_object;
	TaskCall(3);
	func_394(var_319_object, var_320_object, var_321_string, var_322_bool, var_317_object, var_318_object);
	TaskReturn();
	@@var_300_object:IsDialogEnd(var_303_bool);
	
Label_376:
	var_412_bool = var_303_bool == 0; //@nz
	if(var_412_bool != 0) {
		sync();
		@@var_300_object:IsDialogEnd(var_303_bool);
		goto Label_376;
	}
	var_294_object = Obj();
	func_4305();
	StopDialog(var_300_object);
	@@var_300_object:GetReturnValue((int)-1);
	var_302_int = var_293_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5180()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)131, (int)2, (int)515268);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_5232(var_110_bool, var_111_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4670()
{
	SetVariable("ood3Petr3", (int)1);
	return 0;
}


func_4927(var_500_bool)
{
	var_502_int = 0; var_503_string = "";
	func_4530(var_502_int, "ood3Petr4");
	var_505_bool = var_502_int == (int)0;
	if(var_505_bool != 0) {
		var_500_bool = 1;
		return 0;
	}
	var_500_bool = 0;
	return 0;
}


func_4418(var_173_bool, var_174_object)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = "";
	var_186_int = 0;
	func_4596(var_186_int);
	var_192_int = "d" + var_186_int;
	var_180_string = var_192_int + "m";
	var_181_int = 0;
	
Label_4427:
	if((int)1 != 0) {
		var_196_int = var_181_int + (int)1;
		var_197_int = var_180_string + var_196_int;
		@@var_174_object:HasProperty(var_197_int, var_182_bool);
		var_198_bool = var_182_bool == 0; //@nz
		if(var_198_bool != 0) {
		} else {
			var_181_int = var_181_int + (int)1;
			goto Label_4427;
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
	func_4492(var_205_bool, var_206_string);
	var_205_bool = var_173_bool;
	return 10;
	
}


func_4676()
{
	SetVariable("ood3Petr4", (int)1);
	return 0;
}


func_5193()
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateDiaryEntry(var_113_object, (int)174, (int)2, (int)515426);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_113_object = var_118_object;
	func_5232(var_117_bool, var_118_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4682()
{
	SetVariable("ood3Petr5", (int)1);
	return 0;
}


func_4939(var_509_bool)
{
	var_511_int = 0; var_512_string = "";
	func_4530(var_511_int, "ood3Petr5");
	var_514_bool = var_511_int == (int)0;
	if(var_514_bool != 0) {
		var_509_bool = 1;
		return 0;
	}
	var_509_bool = 0;
	return 0;
}


func_4688()
{
	SetVariable("ood2Petr4", (int)1);
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_226_object, var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_233_object = Obj(); var_234_object = Obj();
		var_233_object = var_1_object;
		var_234_object = var_0_object;
		func_4767();
		var_237_string = "";
		func_144(var_227_object, "Neutral");
		@@@var_0_object:SetMessage((int)500170);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500171, (int)210, (int)206);
		@@@var_0_object:AddReply((int)500172, (int)209, (int)207);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_261_bool = 0;
	func_4643(var_261_bool);
	if(var_261_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_262_string = var_3_string;
		if(var_262_string != 0) {
		} else {
			var_263_string = "";
			var_263_string = var_2_object;
			func_4461(var_263_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_276_string = var_3_string;
		if(var_276_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_4694()
{
	SetVariable("ood2Petr5", (int)1);
	return 0;
}


func_5206()
{
	var_50_object = Obj(); var_51_object = Obj();
	CreateDiaryEntry(var_51_object, (int)173, (int)2, (int)515425);
	var_55_bool = 0; var_56_object = Obj(); var_57_int = 0;
	var_51_object = var_56_object;
	func_5232(var_55_bool, var_56_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4951(var_383_bool)
{
	var_385_int = 0; var_386_string = "";
	func_4530(var_385_int, "ood2Petr4");
	var_388_bool = var_385_int == (int)0;
	if(var_388_bool != 0) {
		var_383_bool = 1;
		return 0;
	}
	var_383_bool = 0;
	return 0;
}


func_4700(var_154_object)
{
	Trace("lens is given");
	var_157_object = Obj(); var_158_string = ""; var_159_int = 0;
	var_154_object = var_157_object;
	func_4566(var_157_object, "lens", (int)1);
	return 0;
}


func_5219(var_64_object)
{
	var_65_object = Obj(); var_66_object = Obj();
	GetDiaryRoot(var_66_object);
	var_67_bool = var_66_object == 0; //@nz
	if(var_67_bool != 0) {
		Trace("Can't retrieve diary root");
		var_64_object = 0;
		return 2;
	}
	var_66_object = var_64_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4963(var_392_bool)
{
	var_394_int = 0; var_395_string = "";
	func_4530(var_394_int, "ood2Petr5");
	var_397_bool = var_394_int == (int)0;
	if(var_397_bool != 0) {
		var_392_bool = 1;
		return 0;
	}
	var_392_bool = 0;
	return 0;
}


func_4197(var_74_bool)
{
	var_74_bool = 1;
	return 0;
}


func_4711()
{
	SetVariable("KnowTvirin", (int)1);
	return 0;
}


func_4199()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4204(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_4717()
{
	SetVariable("ood2Petr1", (int)1);
	return 0;
}


func_4461(var_263_string)
{
	var_264_bool = 0; var_265_float = 0; var_266_float = 0; var_267_bool = 0; var_268_float = 0; var_269_float = 0;
	lshHasAnimation(var_267_bool, var_263_string);
	var_270_bool = var_267_bool;
	if(var_270_bool != 0) {
		lshGetAnimTimes(var_263_string, var_268_float, var_269_float);
		lshPlayAnimation(var_268_float, var_269_float, (bool)0);
	} else {
		var_273_int = "Can't find lsh animation : " + var_263_string;
		Trace(var_273_int);
	}
	return 6;
	
}


func_4975(var_334_bool)
{
	var_336_int = 0; var_337_string = "";
	func_4530(var_336_int, "ood2Petr1");
	var_341_bool = var_336_int == (int)0;
	if(var_341_bool != 0) {
		var_334_bool = 1;
		return 0;
	}
	var_334_bool = 0;
	return 0;
}


func_5232(var_55_bool, var_56_object, var_57_int)
{
	var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; var_61_object = Obj(); var_62_object = Obj(); var_63_int = 0;
	func_5219(Obj());
	var_64_object = var_61_object;
	@@var_61_object:Find(var_57_int, var_62_object);
	var_69_bool = var_62_object == 0; //@nz
	if(var_69_bool != 0) {
		var_71_int = "Can't find diary parent with id: " + var_57_int;
		Trace(var_71_int);
		var_55_bool = 0;
		return 6;
	}
	@@var_62_object:AddChild(var_56_object);
	SendWorldWndMessage((int)7);
	@@var_56_object:GetCategory(var_63_int);
	SetDiarySection(var_63_int);
	var_55_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3952(var_0_object)
{
	var_36_bool = 0;
	func_4231(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_3961:
	func_4128();
	goto Label_3961;
}
EMIT "Return(); Pop(0)";


func_3442(var_0_object, var_732_int, var_733_object)
{
	var_735_object = Obj(); var_736_bool = 0; var_737_int = 0; var_738_bool = 0; var_739_object = Obj(); var_740_bool = 0; var_741_int = 0; var_742_bool = 0;
	var_0_object = var_733_object;
	var_743_bool = 0; var_744_object = Obj(); var_745_float = 0;
	var_733_object = var_744_object;
	func_4236(var_743_bool, var_744_object, (float)70.0);
	var_746_bool = var_743_bool == 0; //@nz
	if(var_746_bool != 0) {
		var_732_int = -2;
		return 8;
	}
	CreateDialog(var_739_object);
	var_747_int = 0;
	func_4637(var_747_int);
	@@var_739_object:SetNPCName(var_747_int);
	var_748_int = 0;
	func_4635(var_748_int);
	@@var_739_object:SetNPCDescription(var_748_int);
	var_749_string = "";
	func_4639(var_749_string);
	@@var_739_object:SetPhoto(var_749_string);
	var_750_string = "";
	func_4641(var_750_string);
	@@var_739_object:SetPhoto2(var_750_string);
	var_751_int = 0;
	func_5277(var_751_int);
	@@var_739_object:SetPlayerName(var_751_int);
	IsOverrideActive(var_740_bool);
	var_752_bool = var_740_bool;
	if(var_752_bool != 0) {
		var_732_int = -2;
		return 8;
	}
	DoDialog(var_739_object);
	var_753_bool = 0; var_754_object = Obj();
	func_4514(Obj());
	var_755_object = var_754_object;
	func_4323(var_753_bool, var_754_object);
	var_756_object = Obj(); var_757_object = Obj();
	var_733_object = var_756_object;
	var_739_object = var_757_object;
	TaskCall(11);
	func_3523(var_758_object, var_759_object, var_760_string, var_761_bool, var_756_object, var_757_object);
	TaskReturn();
	@@var_739_object:IsDialogEnd(var_742_bool);
	
Label_3505:
	var_786_bool = var_742_bool == 0; //@nz
	if(var_786_bool != 0) {
		sync();
		@@var_739_object:IsDialogEnd(var_742_bool);
		goto Label_3505;
	}
	var_733_object = Obj();
	func_4305();
	StopDialog(var_739_object);
	@@var_739_object:GetReturnValue((int)-1);
	var_741_int = var_732_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4723()
{
	SetVariable("ood2Petr2", (int)1);
	return 0;
}


func_2163(var_2_object, var_556_string)
{
	var_557_bool = 0;
	func_4643(var_557_bool);
	var_558_bool = var_557_bool == 0; //@nz
	if(var_558_bool != 0) {
		return 0;
	}
	var_559_bool = var_556_string == var_2_object;
	if(var_559_bool != 0) {
		return 0;
	}
	var_560_string = ""; var_561_bool = 0;
	var_556_string = var_560_string;
	var_563_bool = var_556_string == "";
	if(var_563_bool != 0) {
		var_561_bool = 0;
	} else {
		var_561_bool = 1;
	}
	func_4477(var_560_string, var_561_bool);
	var_2_object = var_556_string;
	return 0;
	
}


func_4212(var_44_bool, var_45_cvector)
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


func_4729()
{
	SetVariable("ood2Petr3", (int)1);
	return 0;
}


func_4987(var_352_bool)
{
	var_354_int = 0; var_355_string = "";
	func_4530(var_354_int, "ood2Petr2");
	var_357_bool = var_354_int == (int)0;
	if(var_357_bool != 0) {
		var_352_bool = 1;
		return 0;
	}
	var_352_bool = 0;
	return 0;
}


func_4477(var_241_string, var_242_bool)
{
	var_245_bool = 0; var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_float = 0; var_250_float = 0;
	lshHasAnimation(var_248_bool, var_241_string);
	var_251_bool = var_248_bool;
	if(var_251_bool != 0) {
		lshGetAnimTimes(var_241_string, var_249_float, var_250_float);
		lshPlayAnimation(var_249_float, var_250_float, var_242_bool);
	} else {
		var_253_int = "Can't find lsh animation : " + var_241_string;
		Trace(var_253_int);
	}
	return 6;
	
}


func_4222(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_4212(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_4735()
{
	SetVariable("d2q02", (int)3);
	func_5167();
	return 0;
}


func_3966(var_61_bool)
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
	func_4222(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4605(var_290_bool, var_291_int)
{
	var_292_int = 0;
	func_4596(var_292_int);
	var_290_bool = var_292_int == var_291_int;
	return 0;
}


func_2949(var_0_object, var_1_object, var_2_object, var_3_string, var_667_object, var_668_object)
{
	var_0_object = var_668_object;
	var_1_object = var_667_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_674_string = "";
		func_3041(var_668_object, "Drunk");
		@@@var_0_object:SetMessage((int)514474);
		@@@var_0_object:ClearReplies();
		var_683_bool = 0; var_684_object = Obj();
		var_684_object = var_1_object;
		func_5143(var_684_object);
		if(var_683_bool != 0) {
			@@@var_0_object:AddReply((int)514475, (int)15709, (int)15708);
		}
		var_692_bool = 0;
		var_692_bool = 0;
		var_693_bool = 0; var_694_object = Obj();
		var_694_object = var_1_object;
		func_5107(var_694_object);
		if(var_693_bool != 0) {
			var_699_bool = 0; var_700_object = Obj();
			var_700_object = var_1_object;
			func_5119(var_700_object);
			if(var_699_bool != 0) {
				var_692_bool = 1;
			}
		}
		if(var_692_bool != 0) {
			@@@var_0_object:AddReply((int)539623, (int)15695, (int)41570);
		}
		var_708_bool = 0; var_709_object = Obj();
		var_709_object = var_1_object;
		func_5131(var_709_object);
		if(var_708_bool != 0) {
			@@@var_0_object:AddReply((int)514501, (int)-1, (int)15737);
		}
		@@@var_0_object:AddReply((int)514500, (int)-1, (int)15736);
		goto Label_3011;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb89";
	}
Label_3011:
	var_720_bool = 0;
	func_4643(var_720_bool);
	if(var_720_bool != 0) {

	Label_3015:
		lshWaitForAnimEnd();
		var_721_string = var_3_string;
		if(var_721_string != 0) {
		} else {
			var_722_string = "";
			var_722_string = var_2_object;
			func_4461(var_722_string);
			goto Label_3015;
	}
		PlayAnimation("all", "idle");

	Label_3030:
		WaitForAnimEnd();
		var_725_string = var_3_string;
		if(var_725_string != 0) {
			goto Label_3040;
		}
		PlayAnimation("all", "idle");
		goto Label_3030;
	}
	goto Label_3040;
	
Label_3040:
	return 0;
	
}


func_4231(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_4744()
{
	var_87_object = Obj(); var_88_object = Obj();
	SetVariable("d2q02", (int)5);
	func_5260(Obj());
	var_91_object = var_88_object;
	var_102_float = 0;
	func_4591(var_102_float);
	@@var_88_object:AddMark("d2q02PetrGotoAndrei", "pt_map_andrei", (int)0, (int)515276, var_102_float);
	func_5180();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4861()
{
	SetVariable("ood3Petr1", (int)1);
	return 0;
}


func_4999(var_368_bool)
{
	var_370_int = 0; var_371_string = "";
	func_4530(var_370_int, "ood2Petr3");
	var_373_bool = var_370_int == (int)0;
	if(var_373_bool != 0) {
		var_368_bool = 1;
		return 0;
	}
	var_368_bool = 0;
	return 0;
}


func_394(var_0_object, var_1_object, var_2_object, var_3_string, var_317_object, var_318_object)
{
	var_0_object = var_318_object;
	var_1_object = var_317_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_324_string = "";
		func_524(var_318_object, "Untrust");
		@@@var_0_object:SetMessage((int)506877);
		@@@var_0_object:ClearReplies();
		var_333_bool = 0;
		var_333_bool = 0;
		var_334_bool = 0; var_335_object = Obj();
		var_335_object = var_1_object;
		func_4975(var_335_object);
		if(var_334_bool != 0) {
			var_342_bool = 0; var_343_object = Obj();
			var_343_object = var_1_object;
			func_5023(var_343_object);
			if(var_342_bool != 0) {
				var_333_bool = 1;
			}
		}
		if(var_333_bool != 0) {
			@@@var_0_object:AddReply((int)506878, (int)7585, (int)7584);
		}
		var_351_bool = 0;
		var_351_bool = 0;
		var_352_bool = 0; var_353_object = Obj();
		var_353_object = var_1_object;
		func_4987(var_353_object);
		if(var_352_bool != 0) {
			var_358_bool = 0; var_359_object = Obj();
			var_359_object = var_1_object;
			func_5047(var_359_object);
			if(var_358_bool != 0) {
				var_351_bool = 1;
			}
		}
		if(var_351_bool != 0) {
			@@@var_0_object:AddReply((int)507431, (int)8203, (int)8202);
		}
		var_367_bool = 0;
		var_367_bool = 0;
		var_368_bool = 0; var_369_object = Obj();
		var_369_object = var_1_object;
		func_4999(var_369_object);
		if(var_368_bool != 0) {
			var_374_bool = 0; var_375_object = Obj();
			var_375_object = var_1_object;
			func_5011(var_375_object);
			if(var_374_bool != 0) {
				var_367_bool = 1;
			}
		}
		if(var_367_bool != 0) {
			@@@var_0_object:AddReply((int)506884, (int)7591, (int)7590);
		}
		var_383_bool = 0; var_384_object = Obj();
		var_384_object = var_1_object;
		func_4951(var_384_object);
		if(var_383_bool != 0) {
			@@@var_0_object:AddReply((int)525164, (int)26526, (int)26525);
		}
		var_392_bool = 0; var_393_object = Obj();
		var_393_object = var_1_object;
		func_4963(var_393_object);
		if(var_392_bool != 0) {
			@@@var_0_object:AddReply((int)525171, (int)26534, (int)26533);
		}
		@@@var_0_object:AddReply((int)507529, (int)-1, (int)8311);
		goto Label_494;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x18e";
	}
Label_494:
	var_404_bool = 0;
	func_4643(var_404_bool);
	if(var_404_bool != 0) {

	Label_498:
		lshWaitForAnimEnd();
		var_405_string = var_3_string;
		if(var_405_string != 0) {
		} else {
			var_406_string = "";
			var_406_string = var_2_object;
			func_4461(var_406_string);
			goto Label_498;
	}
		PlayAnimation("all", "idle");

	Label_513:
		WaitForAnimEnd();
		var_409_string = var_3_string;
		if(var_409_string != 0) {
			goto Label_523;
		}
		PlayAnimation("all", "idle");
		goto Label_513;
	}
	goto Label_523;
	
Label_523:
	return 0;
	
}


func_4236(var_70_bool, var_71_object, var_72_float)
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
	func_4520(var_97_cvector, var_98_cvector);
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
	func_4643(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		HasAnimationTrack(var_90_bool, "head");
		var_115_bool = var_90_bool;
		if(var_115_bool == 0) goto Label_4299;
		LookAsyncCamera("head");
	}
Label_4299:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_70_bool = 1;
	return 18;
	
}


func_5260(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); var_102_object = Obj(); var_103_object = Obj();
	GetMainOutdoorScene(var_102_object);
	var_104_bool = var_102_object == 0; //@ne
	if(var_104_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_103_object = 0;
		var_103_object = var_99_object;
		return 4;
	}
	@@var_102_object:GetMap(var_103_object);
	var_103_object = var_99_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4492(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0;
	var_169_bool = 0;
	func_4643(var_169_bool);
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


func_3981(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_144(var_2_object, var_237_string)
{
	var_238_bool = 0;
	func_4643(var_238_bool);
	var_239_bool = var_238_bool == 0; //@nz
	if(var_239_bool != 0) {
		return 0;
	}
	var_240_bool = var_237_string == var_2_object;
	if(var_240_bool != 0) {
		return 0;
	}
	var_241_string = ""; var_242_bool = 0;
	var_237_string = var_241_string;
	var_244_bool = var_237_string == "";
	if(var_244_bool != 0) {
		var_242_bool = 0;
	} else {
		var_242_bool = 1;
	}
	func_4477(var_241_string, var_242_bool);
	var_2_object = var_237_string;
	return 0;
	
}


func_3986(var_44_bool)
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
	func_4204(var_51_float, var_52_object);
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


func_5011(var_374_bool)
{
	var_376_int = 0; var_377_string = "";
	func_4530(var_376_int, "d2q02");
	var_379_bool = var_376_int == (int)1000;
	if(var_379_bool != 0) {
		var_374_bool = 1;
		return 0;
	}
	var_374_bool = 0;
	return 0;
}


func_1938(var_0_object, var_525_int, var_526_object)
{
	var_528_object = Obj(); var_529_bool = 0; var_530_int = 0; var_531_bool = 0; var_532_object = Obj(); var_533_bool = 0; var_534_int = 0; var_535_bool = 0;
	var_0_object = var_526_object;
	var_536_bool = 0; var_537_object = Obj(); var_538_float = 0;
	var_526_object = var_537_object;
	func_4236(var_536_bool, var_537_object, (float)70.0);
	var_539_bool = var_536_bool == 0; //@nz
	if(var_539_bool != 0) {
		var_525_int = -2;
		return 8;
	}
	CreateDialog(var_532_object);
	var_540_int = 0;
	func_4637(var_540_int);
	@@var_532_object:SetNPCName(var_540_int);
	var_541_int = 0;
	func_4635(var_541_int);
	@@var_532_object:SetNPCDescription(var_541_int);
	var_542_string = "";
	func_4639(var_542_string);
	@@var_532_object:SetPhoto(var_542_string);
	var_543_string = "";
	func_4641(var_543_string);
	@@var_532_object:SetPhoto2(var_543_string);
	var_544_int = 0;
	func_5277(var_544_int);
	@@var_532_object:SetPlayerName(var_544_int);
	IsOverrideActive(var_533_bool);
	var_545_bool = var_533_bool;
	if(var_545_bool != 0) {
		var_525_int = -2;
		return 8;
	}
	DoDialog(var_532_object);
	var_546_bool = 0; var_547_object = Obj();
	func_4514(Obj());
	var_548_object = var_547_object;
	func_4323(var_546_bool, var_547_object);
	var_549_object = Obj(); var_550_object = Obj();
	var_526_object = var_549_object;
	var_532_object = var_550_object;
	TaskCall(7);
	func_2019(var_551_object, var_552_object, var_553_string, var_554_bool, var_549_object, var_550_object);
	TaskReturn();
	@@var_532_object:IsDialogEnd(var_535_bool);
	
Label_2001:
	var_639_bool = var_535_bool == 0; //@nz
	if(var_639_bool != 0) {
		sync();
		@@var_532_object:IsDialogEnd(var_535_bool);
		goto Label_2001;
	}
	var_526_object = Obj();
	func_4305();
	StopDialog(var_532_object);
	@@var_532_object:GetReturnValue((int)-1);
	var_534_int = var_525_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4507()
{
	var_39_bool = 0;
	func_4643(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5277(var_122_int)
{
	var_123_int = 0; var_124_int = 0;
	GetVariable("branch", var_124_int);
	var_127_bool = var_124_int == (int)0;
	if(var_127_bool != 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0x14ac";
	}
	var_129_bool = var_124_int == (int)1;
	if(var_129_bool != 0) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
	return 2;
}


func_4767()
{
	SetVariable("KnowPetr", (int)1);
	return 0;
}


func_5023(var_342_bool)
{
	var_344_int = 0; var_345_string = "";
	func_4530(var_344_int, "d2q02");
	var_347_bool = var_344_int == (int)2;
	if(var_347_bool != 0) {
		var_342_bool = 1;
		return 0;
	}
	var_342_bool = 0;
	return 0;
}


func_3745(var_0_object, var_788_int, var_789_object)
{
	var_791_object = Obj(); var_792_bool = 0; var_793_int = 0; var_794_bool = 0; var_795_object = Obj(); var_796_bool = 0; var_797_int = 0; var_798_bool = 0;
	var_0_object = var_789_object;
	var_799_bool = 0; var_800_object = Obj(); var_801_float = 0;
	var_789_object = var_800_object;
	func_4236(var_799_bool, var_800_object, (float)70.0);
	var_802_bool = var_799_bool == 0; //@nz
	if(var_802_bool != 0) {
		var_788_int = -2;
		return 8;
	}
	CreateDialog(var_795_object);
	var_803_int = 0;
	func_4637(var_803_int);
	@@var_795_object:SetNPCName(var_803_int);
	var_804_int = 0;
	func_4635(var_804_int);
	@@var_795_object:SetNPCDescription(var_804_int);
	var_805_string = "";
	func_4639(var_805_string);
	@@var_795_object:SetPhoto(var_805_string);
	var_806_string = "";
	func_4641(var_806_string);
	@@var_795_object:SetPhoto2(var_806_string);
	var_807_int = 0;
	func_5277(var_807_int);
	@@var_795_object:SetPlayerName(var_807_int);
	IsOverrideActive(var_796_bool);
	var_808_bool = var_796_bool;
	if(var_808_bool != 0) {
		var_788_int = -2;
		return 8;
	}
	DoDialog(var_795_object);
	var_809_bool = 0; var_810_object = Obj();
	func_4514(Obj());
	var_811_object = var_810_object;
	func_4323(var_809_bool, var_810_object);
	var_812_object = Obj(); var_813_object = Obj();
	var_789_object = var_812_object;
	var_795_object = var_813_object;
	TaskCall(13);
	func_3826(var_814_object, var_815_object, var_816_string, var_817_bool, var_812_object, var_813_object);
	TaskReturn();
	@@var_795_object:IsDialogEnd(var_798_bool);
	
Label_3808:
	var_842_bool = var_798_bool == 0; //@nz
	if(var_842_bool != 0) {
		sync();
		@@var_795_object:IsDialogEnd(var_798_bool);
		goto Label_3808;
	}
	var_789_object = Obj();
	func_4305();
	StopDialog(var_795_object);
	@@var_795_object:GetReturnValue((int)-1);
	var_797_int = var_788_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4514(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj();
	self(var_135_object);
	var_135_object = var_133_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1444(var_2_object, var_457_string)
{
	var_458_bool = 0;
	func_4643(var_458_bool);
	var_459_bool = var_458_bool == 0; //@nz
	if(var_459_bool != 0) {
		return 0;
	}
	var_460_bool = var_457_string == var_2_object;
	if(var_460_bool != 0) {
		return 0;
	}
	var_461_string = ""; var_462_bool = 0;
	var_457_string = var_461_string;
	var_464_bool = var_457_string == "";
	if(var_464_bool != 0) {
		var_462_bool = 0;
	} else {
		var_462_bool = 1;
	}
	func_4477(var_461_string, var_462_bool);
	var_2_object = var_457_string;
	return 0;
	
}


func_4773()
{
	SetVariable("d7q02", (int)2);
	func_5206();
	return 0;
}


func_4008()
{
	var_846_float = 0; var_847_float = 0;
	rand(var_847_float, (int)8, (int)16);
	SetTimer((int)10, var_847_float);
	return 2;
}


func_4520(var_97_cvector, var_98_cvector)
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


func_5035(var_437_bool)
{
	var_439_int = 0; var_440_string = "";
	func_4530(var_439_int, "d2q02");
	var_442_bool = var_439_int == (int)3;
	if(var_442_bool != 0) {
		var_437_bool = 1;
		return 0;
	}
	var_437_bool = 0;
	return 0;
}


func_4782()
{
	SetVariable("d7q02", (int)4);
	return 0;
}


func_5294(var_54_object)
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("mt_petr", var_56_int);
	var_58_bool = var_56_int == 0; //@nz
	if(var_58_bool != 0) {
		var_59_int = 0; var_60_object = Obj();
		var_54_object = var_60_object;
		TaskCall(0);
		func_0(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		SetVariable("mt_petr", (int)1);
	}
	var_290_bool = 0; var_291_int = 0;
	func_4605(var_290_bool, (int)2);
	if(var_290_bool != 0) {
		var_293_int = 0; var_294_object = Obj();
		var_54_object = var_294_object;
		TaskCall(2);
		func_313(var_295_object, var_293_int, var_294_object);
		TaskReturn();
		return 2;
	}
	var_414_bool = 0; var_415_int = 0;
	func_4605(var_414_bool, (int)3);
	if(var_414_bool != 0) {
		var_416_int = 0; var_417_object = Obj();
		var_54_object = var_417_object;
		TaskCall(4);
		func_1240(var_418_object, var_416_int, var_417_object);
		TaskReturn();
		return 2;
	}
	var_523_bool = 0; var_524_int = 0;
	func_4605(var_523_bool, (int)7);
	if(var_523_bool != 0) {
		var_525_int = 0; var_526_object = Obj();
		var_54_object = var_526_object;
		TaskCall(6);
		func_1938(var_527_object, var_525_int, var_526_object);
		TaskReturn();
		return 2;
	}
	var_641_bool = 0; var_642_int = 0;
	func_4605(var_641_bool, (int)11);
	if(var_641_bool != 0) {
		var_643_int = 0; var_644_object = Obj();
		var_54_object = var_644_object;
		TaskCall(8);
		func_2868(var_645_object, var_643_int, var_644_object);
		TaskReturn();
		return 2;
	}
	var_730_bool = 0; var_731_int = 0;
	func_4605(var_730_bool, (int)12);
	if(var_730_bool != 0) {
		var_732_int = 0; var_733_object = Obj();
		var_54_object = var_733_object;
		TaskCall(10);
		func_3442(var_734_object, var_732_int, var_733_object);
		TaskReturn();
		return 2;
	}
	var_788_int = 0; var_789_object = Obj();
	var_54_object = var_789_object;
	TaskCall(12);
	func_3745(var_790_object, var_788_int, var_789_object);
	TaskReturn();
	return 2;
}


func_4017()
{
	KillTimer((int)10);
	return 0;
}


func_4530(var_336_int, var_337_string)
{
	var_338_int = 0; var_339_int = 0;
	GetVariable(var_337_string, var_339_int);
	var_339_int = var_336_int;
	return 2;
}


func_4788()
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj();
	var_93_int = 0; var_94_string = "";
	func_4530(var_93_int, "d7q02BirdBalahon");
	var_98_bool = var_93_int != (int)0;
	if(var_98_bool != 0) {
		func_5260(Obj());
		var_99_object = var_91_object;
		@@var_91_object:FindMark(var_92_object, "d7q02AlexandrGotoPetr");
		var_107_object = var_92_object;
		if(var_107_object != 0) {
			@@var_92_object:Remove();
		}
		@@var_91_object:FindMark(var_92_object, "d7q02MarkGotoAlexandr");
		var_109_object = var_92_object;
		if(var_109_object != 0) {
			@@var_92_object:Remove();
		}
		@@var_91_object:FindMark(var_92_object, "d7q02MarkGotoCemetery");
		var_111_object = var_92_object;
		if(var_111_object != 0) {
			@@var_92_object:Remove();
		}
		func_5193();
		var_120_bool = 0; var_121_string = ""; var_122_string = "";
		func_4579(var_120_bool, "quest_d7_02", "completed");
		var_92_object = 0;
		var_91_object = 0;
	}
	return 4;
}


func_5047(var_358_bool)
{
	var_360_int = 0; var_361_string = "";
	func_4530(var_360_int, "d2q02");
	var_363_bool = var_360_int == (int)4;
	if(var_363_bool != 0) {
		var_358_bool = 1;
		return 0;
	}
	var_358_bool = 0;
	return 0;
}


func_4535(var_145_int, var_146_int)
{
	var_147_object = Obj(); var_148_object = Obj();
	CreateIntVector(var_148_object);
	@@var_148_object:add(var_145_int);
	@@var_148_object:add(var_146_int);
	SendWorldWndMessage((int)3, var_148_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5059(var_380_bool)
{
	var_382_int = 0; var_383_string = "";
	func_4530(var_382_int, "d2q02");
	var_385_bool = var_382_int == (int)5;
	if(var_385_bool != 0) {
		var_380_bool = 1;
		return 0;
	}
	var_380_bool = 0;
	return 0;
}


func_3523(var_0_object, var_1_object, var_2_object, var_3_string, var_756_object, var_757_object)
{
	var_0_object = var_757_object;
	var_1_object = var_756_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_763_string = "";
		func_3581(var_757_object, "Neutral");
		@@@var_0_object:SetMessage((int)535674);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535675, (int)42165, (int)37361);
		@@@var_0_object:AddReply((int)540006, (int)-1, (int)41977);
		goto Label_3551;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xdc7";
	}
Label_3551:
	var_778_bool = 0;
	func_4643(var_778_bool);
	if(var_778_bool != 0) {

	Label_3555:
		lshWaitForAnimEnd();
		var_779_string = var_3_string;
		if(var_779_string != 0) {
		} else {
			var_780_string = "";
			var_780_string = var_2_object;
			func_4461(var_780_string);
			goto Label_3555;
	}
		PlayAnimation("all", "idle");

	Label_3570:
		WaitForAnimEnd();
		var_783_string = var_3_string;
		if(var_783_string != 0) {
			goto Label_3580;
		}
		PlayAnimation("all", "idle");
		goto Label_3570;
	}
	goto Label_3580;
	
Label_3580:
	return 0;
	
}


func_4547(var_134_object, var_135_object, var_136_int)
{
	var_137_int = 0; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_int = 0; var_142_bool = 0;
	@@var_135_object:GetItemID(var_140_int);
	GetInvItemProperty(var_141_int, var_140_int, "Category");
	@@var_134_object:AddItem(var_142_bool, var_135_object, var_141_int, var_136_int);
	var_144_bool = var_142_bool == 0; //@nz
	if(var_144_bool != 0) {
		@@var_134_object:DropItems(var_135_object, var_136_int);
	} else {
		var_145_int = 0; var_146_int = 0;
		var_140_int = var_145_int;
		var_136_int = var_146_int;
		func_4535(var_145_int, var_146_int);
	}
	return 6;
	
}


func_5071(var_572_bool)
{
	var_574_int = 0; var_575_string = "";
	func_4530(var_574_int, "d7q02");
	var_577_bool = var_574_int == (int)1;
	if(var_577_bool != 0) {
		var_572_bool = 1;
		return 0;
	}
	var_572_bool = 0;
	return 0;
}


func_4305()
{
	var_281_bool = 0; var_282_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_284_bool = 0;
	func_4643(var_284_bool);
	if(var_284_bool != 0) {
	} else {
		HasAnimationTrack(var_282_bool, "head");
		var_286_bool = var_282_bool;
		if(var_286_bool == 0) goto Label_4322;
		UnlookAsync("head");
	}
Label_4322:
	return 2;
	
}


func_4566(var_129_object, var_130_string, var_131_int)
{
	var_132_object = Obj(); var_133_object = Obj();
	CreateInvItem(var_133_object);
	@@var_133_object:SetItemName(var_130_string);
	var_134_object = Obj(); var_135_object = Obj(); var_136_int = 0;
	var_129_object = var_134_object;
	var_133_object = var_135_object;
	var_131_int = var_136_int;
	func_4547(var_134_object, var_135_object, var_136_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1240(var_0_object, var_416_int, var_417_object)
{
	var_419_object = Obj(); var_420_bool = 0; var_421_int = 0; var_422_bool = 0; var_423_object = Obj(); var_424_bool = 0; var_425_int = 0; var_426_bool = 0;
	var_0_object = var_417_object;
	var_427_bool = 0; var_428_object = Obj(); var_429_float = 0;
	var_417_object = var_428_object;
	func_4236(var_427_bool, var_428_object, (float)70.0);
	var_430_bool = var_427_bool == 0; //@nz
	if(var_430_bool != 0) {
		var_416_int = -2;
		return 8;
	}
	CreateDialog(var_423_object);
	var_431_int = 0;
	func_4637(var_431_int);
	@@var_423_object:SetNPCName(var_431_int);
	var_432_int = 0;
	func_4635(var_432_int);
	@@var_423_object:SetNPCDescription(var_432_int);
	var_433_string = "";
	func_4639(var_433_string);
	@@var_423_object:SetPhoto(var_433_string);
	var_434_string = "";
	func_4641(var_434_string);
	@@var_423_object:SetPhoto2(var_434_string);
	var_435_int = 0;
	func_5277(var_435_int);
	@@var_423_object:SetPlayerName(var_435_int);
	IsOverrideActive(var_424_bool);
	var_436_bool = var_424_bool;
	if(var_436_bool != 0) {
		var_416_int = -2;
		return 8;
	}
	DoDialog(var_423_object);
	var_437_bool = 0; var_438_object = Obj();
	func_4514(Obj());
	var_439_object = var_438_object;
	func_4323(var_437_bool, var_438_object);
	var_440_object = Obj(); var_441_object = Obj();
	var_417_object = var_440_object;
	var_423_object = var_441_object;
	TaskCall(5);
	func_1321(var_442_object, var_443_object, var_444_string, var_445_bool, var_440_object, var_441_object);
	TaskReturn();
	@@var_423_object:IsDialogEnd(var_426_bool);
	
Label_1303:
	var_521_bool = var_426_bool == 0; //@nz
	if(var_521_bool != 0) {
		sync();
		@@var_423_object:IsDialogEnd(var_426_bool);
		goto Label_1303;
	}
	var_417_object = Obj();
	func_4305();
	StopDialog(var_423_object);
	@@var_423_object:GetReturnValue((int)-1);
	var_425_int = var_416_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5083(var_566_bool)
{
	var_568_int = 0; var_569_string = "";
	func_4530(var_568_int, "ood7Petr1");
	var_571_bool = var_568_int == (int)0;
	if(var_571_bool != 0) {
		var_566_bool = 1;
		return 0;
	}
	var_566_bool = 0;
	return 0;
}


func_4832()
{
	SetVariable("ood7Petr1", (int)1);
	return 0;
}


func_3041(var_2_object, var_674_string)
{
	var_675_bool = 0;
	func_4643(var_675_bool);
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
	func_4477(var_678_string, var_679_bool);
	var_2_object = var_674_string;
	return 0;
	
}


func_4323(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0;
	GetVariable("voice_common", var_138_int);
	var_141_int = var_138_int;
	if(var_141_int != 0) {
		var_142_bool = 0; var_143_object = Obj();
		var_132_object = var_143_object;
		func_4381(var_142_bool, var_143_object);
		var_172_bool = var_142_bool == 0; //@nz
		if(var_172_bool != 0) {
			var_173_bool = 0; var_174_object = Obj();
			var_132_object = var_174_object;
			func_4418(var_173_bool, var_174_object);
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
		func_4418(var_218_bool, var_219_object);
		var_220_bool = var_218_bool == 0; //@nz
		if(var_220_bool != 0) {
			var_221_bool = 0; var_222_object = Obj();
			var_132_object = var_222_object;
			func_4381(var_221_bool, var_222_object);
			var_223_bool = var_221_bool == 0; //@nz
			if(var_223_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4379;
	
Label_4379:
	var_131_bool = 1;
	return 4;
	
}


func_2019(var_0_object, var_1_object, var_2_object, var_3_string, var_549_object, var_550_object)
{
	var_0_object = var_550_object;
	var_1_object = var_549_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_556_string = "";
		func_2163(var_550_object, "Autizm");
		@@@var_0_object:SetMessage((int)513353);
		@@@var_0_object:ClearReplies();
		var_565_bool = 0;
		var_565_bool = 0;
		var_566_bool = 0; var_567_object = Obj();
		var_567_object = var_1_object;
		func_5083(var_567_object);
		if(var_566_bool != 0) {
			var_572_bool = 0; var_573_object = Obj();
			var_573_object = var_1_object;
			func_5071(var_573_object);
			if(var_572_bool != 0) {
				var_565_bool = 1;
			}
		}
		if(var_565_bool != 0) {
			@@@var_0_object:AddReply((int)513355, (int)14598, (int)14587);
		}
		var_581_bool = 0;
		var_581_bool = 0;
		var_582_bool = 0; var_583_object = Obj();
		var_583_object = var_1_object;
		func_5083(var_583_object);
		var_584_bool = var_582_bool == 0; //@nz
		if(var_584_bool != 0) {
			var_585_bool = 0; var_586_object = Obj();
			var_586_object = var_1_object;
			func_5071(var_586_object);
			if(var_585_bool != 0) {
				var_581_bool = 1;
			}
		}
		if(var_581_bool != 0) {
			@@@var_0_object:AddReply((int)513374, (int)14607, (int)14606);
		}
		var_590_bool = 0; var_591_object = Obj();
		var_591_object = var_1_object;
		func_5095(var_591_object);
		if(var_590_bool != 0) {
			@@@var_0_object:AddReply((int)513390, (int)14625, (int)14624);
		}
		var_599_bool = 0;
		var_599_bool = 1;
		var_600_bool = 0;
		var_600_bool = 0;
		var_601_bool = 0; var_602_object = Obj();
		var_602_object = var_1_object;
		func_4879(var_602_object);
		if(var_601_bool != 0) {
			var_607_bool = 0; var_608_object = Obj();
			var_608_object = var_1_object;
			func_4891(var_608_object);
			if(var_607_bool != 0) {
				var_600_bool = 1;
			}
		}
		if(var_600_bool != 1) {
			var_613_bool = 0;
			var_613_bool = 0;
			var_614_bool = 0; var_615_object = Obj();
			var_615_object = var_1_object;
			func_4867(var_615_object);
			if(var_614_bool != 0) {
				var_620_bool = 0; var_621_object = Obj();
				var_621_object = var_1_object;
				func_4891(var_621_object);
				if(var_620_bool != 0) {
					var_613_bool = 1;
				}
			}
			if(var_613_bool != 1) {
				var_599_bool = 0;
			}
		}
		if(var_599_bool != 0) {
			@@@var_0_object:AddReply((int)533264, (int)34779, (int)34778);
		}
		@@@var_0_object:AddReply((int)513354, (int)-1, (int)14586);
		@@@var_0_object:AddReply((int)535721, (int)-1, (int)37400);
		goto Label_2133;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7e7";
	}
Label_2133:
	var_631_bool = 0;
	func_4643(var_631_bool);
	if(var_631_bool != 0) {

	Label_2137:
		lshWaitForAnimEnd();
		var_632_string = var_3_string;
		if(var_632_string != 0) {
		} else {
			var_633_string = "";
			var_633_string = var_2_object;
			func_4461(var_633_string);
			goto Label_2137;
	}
		PlayAnimation("all", "idle");

	Label_2152:
		WaitForAnimEnd();
		var_636_string = var_3_string;
		if(var_636_string != 0) {
			goto Label_2162;
		}
		PlayAnimation("all", "idle");
		goto Label_2152;
	}
	goto Label_2162;
	
Label_2162:
	return 0;
	
}


func_4579(var_120_bool, var_121_string, var_122_string)
{
	var_123_object = Obj(); var_124_object = Obj();
	FindActor(var_124_object, var_121_string);
	var_125_bool = var_124_object == 0; //@ne
	if(var_125_bool != 0) {
		var_120_bool = 0;
		return 2;
	}
	Trigger(var_124_object, var_122_string);
	var_120_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4838(var_126_object)
{
	Trace("birdmask is given");
	var_129_object = Obj(); var_130_string = ""; var_131_int = 0;
	var_126_object = var_129_object;
	func_4566(var_129_object, "bird_mask", (int)1);
	return 0;
}


func_5095(var_590_bool)
{
	var_592_int = 0; var_593_string = "";
	func_4530(var_592_int, "d7q02");
	var_595_bool = var_592_int == (int)3;
	if(var_595_bool != 0) {
		var_590_bool = 1;
		return 0;
	}
	var_590_bool = 0;
	return 0;
}


func_4591(var_102_float)
{
	var_103_float = 0; var_104_float = 0;
	GetGameTime(var_104_float);
	var_104_float = var_102_float;
	return 2;
}


func_4849()
{
	SetVariable("ood11Petr1", (int)1);
	return 0;
}


func_3826(var_0_object, var_1_object, var_2_object, var_3_string, var_812_object, var_813_object)
{
	var_0_object = var_813_object;
	var_1_object = var_812_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_819_string = "";
		func_3884(var_813_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_3854;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xef6";
	}
Label_3854:
	var_834_bool = 0;
	func_4643(var_834_bool);
	if(var_834_bool != 0) {

	Label_3858:
		lshWaitForAnimEnd();
		var_835_string = var_3_string;
		if(var_835_string != 0) {
		} else {
			var_836_string = "";
			var_836_string = var_2_object;
			func_4461(var_836_string);
			goto Label_3858;
	}
		PlayAnimation("all", "idle");

	Label_3873:
		WaitForAnimEnd();
		var_839_string = var_3_string;
		if(var_839_string != 0) {
			goto Label_3883;
		}
		PlayAnimation("all", "idle");
		goto Label_3873;
	}
	goto Label_3883;
	
Label_3883:
	return 0;
	
}


func_5107(var_693_bool)
{
	var_695_int = 0; var_696_string = "";
	func_4530(var_695_int, "d11q01");
	var_698_bool = var_695_int == (int)1;
	if(var_698_bool != 0) {
		var_693_bool = 1;
		return 0;
	}
	var_693_bool = 0;
	return 0;
}


func_4596(var_186_int)
{
	var_187_float = 0; var_188_float = 0;
	GetGameTime(var_188_float);
	var_190_int = 0;
	var_190_int = var_188_float / (int)24;
	var_186_int = (int)1 + var_190_int;
	return 2;
}


func_4855()
{
	SetVariable("ood11Petr2", (int)1);
	return 0;
}


func_3581(var_2_object, var_763_string)
{
	var_764_bool = 0;
	func_4643(var_764_bool);
	var_765_bool = var_764_bool == 0; //@nz
	if(var_765_bool != 0) {
		return 0;
	}
	var_766_bool = var_763_string == var_2_object;
	if(var_766_bool != 0) {
		return 0;
	}
	var_767_string = ""; var_768_bool = 0;
	var_763_string = var_767_string;
	var_770_bool = var_763_string == "";
	if(var_770_bool != 0) {
		var_768_bool = 0;
	} else {
		var_768_bool = 1;
	}
	func_4477(var_767_string, var_768_bool);
	var_2_object = var_763_string;
	return 0;
	
}


func_5119(var_699_bool)
{
	var_701_int = 0; var_702_string = "";
	func_4530(var_701_int, "ood11Petr1");
	var_704_bool = var_701_int == (int)0;
	if(var_704_bool != 0) {
		var_699_bool = 1;
		return 0;
	}
	var_699_bool = 0;
	return 0;
}


