// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Azart|A:SetMessage|A:ClearReplies|A:AddReply|W:Secret|W:all|W:idle|W:Serious|W:Neutral|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:.bin|W:ui/NPC_Spi4ka.png|W:ui/NPC_Spi4ka_b.png|W:quest_b4_02|W:place_boy|W:oob4Spi4ka1|W:oob4Spi4ka2|W:b10q04Spi4kaTalk|W:b4Spi4kaVisit|W:oob12Spi4ka1|W:b4q02|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:mt_spi4ka
// @GLOBALS: 0:object:
// @RUN_OP: 0x63b
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdc vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2c7 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3bb vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4d8 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x611 vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0x684 vars=int
// @EVENT_6: op=0x6aa vars=
// @EVENT_5: op=0x6b9 vars=
// @EVENT_45: op=0x6c6 vars=bool
// @EVENT_0: op=0x6d2 vars=object
// @PE: 0x51,0xc6,0xdc,0x277,0x2b1,0x2c7,0x366,0x3a5,0x3bb,0x47e,0x4c2,0x4d8,0x5c1,0x5fb,0x611,0x63b,0x684,0x6aa,0x6c6,0x8a6,0x8ce,0x8df,0x8e5,0x8eb,0x8f4,0x8fa,0x900,0x90c,0x918,0x924,0x930,0x93c,0x9ba

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2154();
		var_31_bool = var_27_cvector == (int)19687;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2254();
		}
		var_80_bool = var_27_cvector == (int)19689;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_2254();
		}
		var_84_bool = var_27_cvector == (int)19693;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_2277();
		}
		var_90_bool = var_26_bool == (int)19678;
		if(var_90_bool != 0) {
			var_91_bool = 0; var_92_object = Obj();
			var_92_object = var_1_object;
			func_2328(var_92_object);
			if(var_91_bool != 0) {
				var_99_object = Obj(); var_100_object = Obj();
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_2271();
				var_103_object = Obj(); var_104_object = Obj();
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_2292();
				var_107_string = "";
				func_198(var_27_cvector, "Azart");
				@@@var_0_object:SetMessage((int)518568);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518572, (int)20064, (int)19682);
				@@@var_0_object:AddReply((int)518950, (int)20062, (int)20061);
				return 0;
			}
			var_131_string = "";
			func_198(var_27_cvector, "Secret");
			@@@var_0_object:SetMessage((int)518573);
			@@@var_0_object:ClearReplies();
			var_133_bool = 0; var_134_object = Obj();
			var_134_object = var_1_object;
			func_2340(var_134_object);
			if(var_133_bool != 0) {
				@@@var_0_object:AddReply((int)518574, (int)19688, (int)19684);
			}
			var_142_bool = 0;
			var_142_bool = 0;
			var_143_bool = 0; var_144_object = Obj();
			var_144_object = var_1_object;
			func_2352(var_144_object);
			if(var_143_bool != 0) {
				var_149_bool = 0; var_150_object = Obj();
				var_150_object = var_1_object;
				func_2364(var_150_object);
				if(var_149_bool != 0) {
					var_142_bool = 1;
				}
			}
			if(var_142_bool != 0) {
				@@@var_0_object:AddReply((int)518586, (int)19694, (int)19693);
			}
			@@@var_0_object:AddReply((int)518575, (int)-1, (int)19685);
			return 0;
		}
		var_162_bool = var_26_bool == (int)19694;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_198(var_27_cvector, "Secret");
			@@@var_0_object:SetMessage((int)518587);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518588, (int)20052, (int)19695);
			@@@var_0_object:AddReply((int)518942, (int)20054, (int)20053);
			return 0;
		}
		var_172_bool = var_26_bool == (int)20054;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_198(var_27_cvector, "Serious");
			@@@var_0_object:SetMessage((int)518943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518944, (int)20057, (int)20055);
			@@@var_0_object:AddReply((int)518945, (int)-1, (int)20056);
			return 0;
		}
		var_182_bool = var_26_bool == (int)20057;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_198(var_27_cvector, "Serious");
			@@@var_0_object:SetMessage((int)518946);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518947, (int)-1, (int)20058);
			@@@var_0_object:AddReply((int)518948, (int)-1, (int)20059);
			return 0;
		}
		var_192_bool = var_26_bool == (int)20052;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_198(var_27_cvector, "Secret");
			@@@var_0_object:SetMessage((int)518941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518949, (int)-1, (int)20060);
			return 0;
		}
		var_199_bool = var_26_bool == (int)19688;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_198(var_27_cvector, "Serious");
			@@@var_0_object:SetMessage((int)518581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518582, (int)-1, (int)19689);
			return 0;
		}
		var_206_bool = var_26_bool == (int)20062;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_198(var_27_cvector, "Azart");
			@@@var_0_object:SetMessage((int)518951);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518952, (int)20069, (int)20063);
			return 0;
		}
		var_213_bool = var_26_bool == (int)20064;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_198(var_27_cvector, "Secret");
			@@@var_0_object:SetMessage((int)518953);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518954, (int)20066, (int)20065);
			return 0;
		}
		var_220_bool = var_26_bool == (int)20066;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_198(var_27_cvector, "Azart");
			@@@var_0_object:SetMessage((int)518955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518956, (int)20069, (int)20067);
			@@@var_0_object:AddReply((int)518957, (int)-1, (int)20068);
			return 0;
		}
		var_230_bool = var_26_bool == (int)20069;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_198(var_27_cvector, "Secret");
			@@@var_0_object:SetMessage((int)518958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518959, (int)19686, (int)20071);
			@@@var_0_object:AddReply((int)518960, (int)-1, (int)20072);
			return 0;
		}
		var_240_bool = var_26_bool == (int)19686;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_198(var_27_cvector, "Secret");
			@@@var_0_object:SetMessage((int)518579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518580, (int)-1, (int)19687);
			return 0;
		}
		var_3_string = true;
		var_246_bool = 0;
		func_2252(var_246_bool);
		if(var_246_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdd";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2154();
		var_31_bool = var_26_bool == (int)22020;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_689(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520804, (int)29221, (int)22021);
			@@@var_0_object:AddReply((int)527876, (int)29224, (int)29223);
			return 0;
		}
		var_57_bool = var_26_bool == (int)29224;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_689(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527878, (int)-1, (int)29225);
			return 0;
		}
		var_64_bool = var_26_bool == (int)29221;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_689(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527875, (int)-1, (int)29222);
			return 0;
		}
		var_3_string = true;
		var_70_bool = 0;
		func_2252(var_70_bool);
		if(var_70_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2c8";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2154();
		var_31_bool = var_27_cvector == (int)31849;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2283();
		}
		var_60_bool = var_26_bool == (int)31845;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_933(var_27_cvector, "Serious");
			@@@var_0_object:SetMessage((int)530479);
			@@@var_0_object:ClearReplies();
			var_79_bool = 0; var_80_object = Obj();
			var_80_object = var_1_object;
			func_2304(var_80_object);
			if(var_79_bool != 0) {
				@@@var_0_object:AddReply((int)530480, (int)32848, (int)31846);
			}
			@@@var_0_object:AddReply((int)530481, (int)-1, (int)31847);
			return 0;
		}
		var_94_bool = var_26_bool == (int)32848;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_933(var_27_cvector, "Azart");
			@@@var_0_object:SetMessage((int)531491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531493, (int)31848, (int)32850);
			@@@var_0_object:AddReply((int)531492, (int)31848, (int)32849);
			return 0;
		}
		var_104_bool = var_26_bool == (int)31848;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_933(var_27_cvector, "Azart");
			@@@var_0_object:SetMessage((int)530482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531494, (int)32853, (int)32852);
			return 0;
		}
		var_111_bool = var_26_bool == (int)32853;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_933(var_27_cvector, "Azart");
			@@@var_0_object:SetMessage((int)531495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530483, (int)-1, (int)31849);
			return 0;
		}
		var_3_string = true;
		var_117_bool = 0;
		func_2252(var_117_bool);
		if(var_117_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3bc";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2154();
		var_31_bool = var_27_cvector == (int)36924;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2298();
		}
		var_37_bool = var_26_bool == (int)36923;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_1218(var_27_cvector, "Secret");
			@@@var_0_object:SetMessage((int)535248);
			@@@var_0_object:ClearReplies();
			var_56_bool = 0; var_57_object = Obj();
			var_57_object = var_1_object;
			func_2316(var_57_object);
			if(var_56_bool != 0) {
				@@@var_0_object:AddReply((int)535249, (int)37070, (int)36924);
			}
			@@@var_0_object:AddReply((int)535387, (int)-1, (int)37072);
			@@@var_0_object:AddReply((int)535388, (int)-1, (int)37073);
			return 0;
		}
		var_74_bool = var_26_bool == (int)37070;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_1218(var_27_cvector, "Serious");
			@@@var_0_object:SetMessage((int)535385);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535386, (int)37074, (int)37071);
			return 0;
		}
		var_81_bool = var_26_bool == (int)37074;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_1218(var_27_cvector, "Serious");
			@@@var_0_object:SetMessage((int)535389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535390, (int)37076, (int)37075);
			@@@var_0_object:AddReply((int)535393, (int)-1, (int)37078);
			return 0;
		}
		var_91_bool = var_26_bool == (int)37076;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_1218(var_27_cvector, "Azart");
			@@@var_0_object:SetMessage((int)535391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535392, (int)37079, (int)37077);
			@@@var_0_object:AddReply((int)535396, (int)-1, (int)37081);
			@@@var_0_object:AddReply((int)535397, (int)-1, (int)37082);
			return 0;
		}
		var_104_bool = var_26_bool == (int)37079;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_1218(var_27_cvector, "Serious");
			@@@var_0_object:SetMessage((int)535394);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535395, (int)-1, (int)37080);
			@@@var_0_object:AddReply((int)535398, (int)-1, (int)37083);
			return 0;
		}
		var_3_string = true;
		var_113_bool = 0;
		func_2252(var_113_bool);
		if(var_113_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4d9";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_2154();
		var_31_bool = var_26_int == (int)42563;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1531(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_2252(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x612";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_1664();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_1878(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_1633(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_1613(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_2161(Obj());
				var_72_object = var_71_object;
				func_2028(var_70_bool, var_71_object);
			}
		} else {
			func_1628(var_26_int);
			func_1655();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1846();
	func_1664();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_1664();
	var_27_string = "";
	func_2108("Neutral");
	func_1655();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_1655();
	} else {
		var_33_string = "";
		func_2108("Neutral");
	}
	return 0;
	
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	IsOverrideActive(var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
		EventDisable(0);
		func_1846();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_1869(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_2490(var_44_object);
		var_569_string = "";
		func_2108("Neutral");
		func_1664();
		func_1655();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1599(var_25_cvector);
	return 0;
}


func_2304(var_424_bool)
{
	var_426_int = 0; var_427_string = "";
	func_2177(var_426_int, "b10q04Spi4kaTalk");
	var_429_bool = var_426_int == (int)1;
	if(var_429_bool != 0) {
		var_424_bool = 1;
		return 0;
	}
	var_424_bool = 0;
	return 0;
}


func_0(var_0_object, var_280_int, var_281_object)
{
	var_283_object = Obj(); var_284_bool = 0; var_285_int = 0; var_286_bool = 0; var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0;
	var_0_object = var_281_object;
	var_291_bool = 0; var_292_object = Obj(); var_293_float = 0;
	var_281_object = var_292_object;
	func_1883(var_291_bool, var_292_object, (float)70.0);
	var_294_bool = var_291_bool == 0; //@nz
	if(var_294_bool != 0) {
		var_280_int = -2;
		return 8;
	}
	CreateDialog(var_287_object);
	var_295_int = 0;
	func_2246(var_295_int);
	@@var_287_object:SetNPCName(var_295_int);
	var_296_int = 0;
	func_2244(var_296_int);
	@@var_287_object:SetNPCDescription(var_296_int);
	var_297_string = "";
	func_2248(var_297_string);
	@@var_287_object:SetPhoto(var_297_string);
	var_298_string = "";
	func_2250(var_298_string);
	@@var_287_object:SetPhoto2(var_298_string);
	var_299_int = 0;
	func_2456(var_299_int);
	@@var_287_object:SetPlayerName(var_299_int);
	IsOverrideActive(var_288_bool);
	var_300_bool = var_288_bool;
	if(var_300_bool != 0) {
		var_280_int = -2;
		return 8;
	}
	DoDialog(var_287_object);
	var_301_bool = 0; var_302_object = Obj();
	func_2161(Obj());
	var_303_object = var_302_object;
	func_1970(var_301_bool, var_302_object);
	var_304_object = Obj(); var_305_object = Obj();
	var_281_object = var_304_object;
	var_287_object = var_305_object;
	TaskCall(1);
	func_81(var_306_object, var_307_object, var_308_string, var_309_bool, var_304_object, var_305_object);
	TaskReturn();
	@@var_287_object:IsDialogEnd(var_290_bool);
	
Label_63:
	var_380_bool = var_290_bool == 0; //@nz
	if(var_380_bool != 0) {
		sync();
		@@var_287_object:IsDialogEnd(var_290_bool);
		goto Label_63;
	}
	var_281_object = Obj();
	func_1952();
	StopDialog(var_287_object);
	@@var_287_object:GetReturnValue((int)-1);
	var_289_int = var_280_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2316(var_488_bool)
{
	var_490_int = 0; var_491_string = "";
	func_2177(var_490_int, "oob12Spi4ka1");
	var_493_bool = var_490_int == (int)0;
	if(var_493_bool != 0) {
		var_488_bool = 1;
		return 0;
	}
	var_488_bool = 0;
	return 0;
}


func_2065(var_164_bool, var_165_object)
{
	var_166_string = ""; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_string = ""; var_171_string = ""; var_172_int = 0; var_173_bool = 0; var_174_int = 0; var_175_string = "";
	var_177_int = 0;
	func_2205(var_177_int);
	var_183_int = "d" + var_177_int;
	var_171_string = var_183_int + "m";
	var_172_int = 0;
	
Label_2074:
	if((int)1 != 0) {
		var_187_int = var_172_int + (int)1;
		var_188_int = var_171_string + var_187_int;
		@@var_165_object:HasProperty(var_188_int, var_173_bool);
		var_189_bool = var_173_bool == 0; //@nz
		if(var_189_bool != 0) {
		} else {
			var_172_int = var_172_int + (int)1;
			goto Label_2074;
		}
	}
	var_190_bool = var_172_int == 0; //@nz
	if(var_190_bool != 0) {
		var_164_bool = 0;
		return 10;
	}
	var_174_int = 0;
	var_192_bool = var_172_int > (int)1;
	if(var_192_bool != 0) {
		irand(var_174_int, var_172_int);
	}
	var_194_int = var_174_int + (int)1;
	var_195_int = var_171_string + var_194_int;
	@@var_165_object:GetProperty(var_195_int, var_175_string);
	var_196_bool = 0; var_197_string = "";
	var_175_string = var_197_string;
	func_2139(var_196_bool, var_197_string);
	var_196_bool = var_164_bool;
	return 10;
	
}


func_789(var_0_object, var_384_int, var_385_object)
{
	var_387_object = Obj(); var_388_bool = 0; var_389_int = 0; var_390_bool = 0; var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0;
	var_0_object = var_385_object;
	var_395_bool = 0; var_396_object = Obj(); var_397_float = 0;
	var_385_object = var_396_object;
	func_1883(var_395_bool, var_396_object, (float)70.0);
	var_398_bool = var_395_bool == 0; //@nz
	if(var_398_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	CreateDialog(var_391_object);
	var_399_int = 0;
	func_2246(var_399_int);
	@@var_391_object:SetNPCName(var_399_int);
	var_400_int = 0;
	func_2244(var_400_int);
	@@var_391_object:SetNPCDescription(var_400_int);
	var_401_string = "";
	func_2248(var_401_string);
	@@var_391_object:SetPhoto(var_401_string);
	var_402_string = "";
	func_2250(var_402_string);
	@@var_391_object:SetPhoto2(var_402_string);
	var_403_int = 0;
	func_2456(var_403_int);
	@@var_391_object:SetPlayerName(var_403_int);
	IsOverrideActive(var_392_bool);
	var_404_bool = var_392_bool;
	if(var_404_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	DoDialog(var_391_object);
	var_405_bool = 0; var_406_object = Obj();
	func_2161(Obj());
	var_407_object = var_406_object;
	func_1970(var_405_bool, var_406_object);
	var_408_object = Obj(); var_409_object = Obj();
	var_385_object = var_408_object;
	var_391_object = var_409_object;
	TaskCall(5);
	func_870(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object);
	TaskReturn();
	@@var_391_object:IsDialogEnd(var_394_bool);
	
Label_852:
	var_444_bool = var_394_bool == 0; //@nz
	if(var_444_bool != 0) {
		sync();
		@@var_391_object:IsDialogEnd(var_394_bool);
		goto Label_852;
	}
	var_385_object = Obj();
	func_1952();
	StopDialog(var_391_object);
	@@var_391_object:GetReturnValue((int)-1);
	var_393_int = var_384_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2328(var_311_bool)
{
	var_313_int = 0; var_314_string = "";
	func_2177(var_313_int, "oob4Spi4ka1");
	var_318_bool = var_313_int == (int)0;
	if(var_318_bool != 0) {
		var_311_bool = 1;
		return 0;
	}
	var_311_bool = 0;
	return 0;
}


func_2340(var_352_bool)
{
	var_354_int = 0; var_355_string = "";
	func_2177(var_354_int, "b4q02");
	var_357_bool = var_354_int == (int)0;
	if(var_357_bool != 0) {
		var_352_bool = 1;
		return 0;
	}
	var_352_bool = 0;
	return 0;
}


func_550(var_0_object, var_50_int, var_51_object)
{
	var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0;
	var_0_object = var_51_object;
	var_61_bool = 0; var_62_object = Obj(); var_63_float = 0;
	var_51_object = var_62_object;
	func_1883(var_61_bool, var_62_object, (float)70.0);
	var_108_bool = var_61_bool == 0; //@nz
	if(var_108_bool != 0) {
		var_50_int = -2;
		return 8;
	}
	CreateDialog(var_57_object);
	var_109_int = 0;
	func_2246(var_109_int);
	@@var_57_object:SetNPCName(var_109_int);
	var_110_int = 0;
	func_2244(var_110_int);
	@@var_57_object:SetNPCDescription(var_110_int);
	var_111_string = "";
	func_2248(var_111_string);
	@@var_57_object:SetPhoto(var_111_string);
	var_112_string = "";
	func_2250(var_112_string);
	@@var_57_object:SetPhoto2(var_112_string);
	var_113_int = 0;
	func_2456(var_113_int);
	@@var_57_object:SetPlayerName(var_113_int);
	IsOverrideActive(var_58_bool);
	var_121_bool = var_58_bool;
	if(var_121_bool != 0) {
		var_50_int = -2;
		return 8;
	}
	DoDialog(var_57_object);
	var_122_bool = 0; var_123_object = Obj();
	func_2161(Obj());
	var_124_object = var_123_object;
	func_1970(var_122_bool, var_123_object);
	var_217_object = Obj(); var_218_object = Obj();
	var_51_object = var_217_object;
	var_57_object = var_218_object;
	TaskCall(3);
	func_631(var_219_object, var_220_object, var_221_string, var_222_bool, var_217_object, var_218_object);
	TaskReturn();
	@@var_57_object:IsDialogEnd(var_60_bool);
	
Label_613:
	var_266_bool = var_60_bool == 0; //@nz
	if(var_266_bool != 0) {
		sync();
		@@var_57_object:IsDialogEnd(var_60_bool);
		goto Label_613;
	}
	var_51_object = Obj();
	func_1952();
	StopDialog(var_57_object);
	@@var_57_object:GetReturnValue((int)-1);
	var_59_int = var_50_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1069(var_0_object, var_448_int, var_449_object)
{
	var_451_object = Obj(); var_452_bool = 0; var_453_int = 0; var_454_bool = 0; var_455_object = Obj(); var_456_bool = 0; var_457_int = 0; var_458_bool = 0;
	var_0_object = var_449_object;
	var_459_bool = 0; var_460_object = Obj(); var_461_float = 0;
	var_449_object = var_460_object;
	func_1883(var_459_bool, var_460_object, (float)70.0);
	var_462_bool = var_459_bool == 0; //@nz
	if(var_462_bool != 0) {
		var_448_int = -2;
		return 8;
	}
	CreateDialog(var_455_object);
	var_463_int = 0;
	func_2246(var_463_int);
	@@var_455_object:SetNPCName(var_463_int);
	var_464_int = 0;
	func_2244(var_464_int);
	@@var_455_object:SetNPCDescription(var_464_int);
	var_465_string = "";
	func_2248(var_465_string);
	@@var_455_object:SetPhoto(var_465_string);
	var_466_string = "";
	func_2250(var_466_string);
	@@var_455_object:SetPhoto2(var_466_string);
	var_467_int = 0;
	func_2456(var_467_int);
	@@var_455_object:SetPlayerName(var_467_int);
	IsOverrideActive(var_456_bool);
	var_468_bool = var_456_bool;
	if(var_468_bool != 0) {
		var_448_int = -2;
		return 8;
	}
	DoDialog(var_455_object);
	var_469_bool = 0; var_470_object = Obj();
	func_2161(Obj());
	var_471_object = var_470_object;
	func_1970(var_469_bool, var_470_object);
	var_472_object = Obj(); var_473_object = Obj();
	var_449_object = var_472_object;
	var_455_object = var_473_object;
	TaskCall(7);
	func_1150(var_474_object, var_475_object, var_476_string, var_477_bool, var_472_object, var_473_object);
	TaskReturn();
	@@var_455_object:IsDialogEnd(var_458_bool);
	
Label_1132:
	var_511_bool = var_458_bool == 0; //@nz
	if(var_511_bool != 0) {
		sync();
		@@var_455_object:IsDialogEnd(var_458_bool);
		goto Label_1132;
	}
	var_449_object = Obj();
	func_1952();
	StopDialog(var_455_object);
	@@var_455_object:GetReturnValue((int)-1);
	var_457_int = var_448_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2352(var_362_bool)
{
	var_364_int = 0; var_365_string = "";
	func_2177(var_364_int, "oob4Spi4ka2");
	var_367_bool = var_364_int == (int)0;
	if(var_367_bool != 0) {
		var_362_bool = 1;
		return 0;
	}
	var_362_bool = 0;
	return 0;
}


func_1844(var_64_bool)
{
	var_64_bool = 1;
	return 0;
}


func_1846()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1851(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_2108(var_250_string)
{
	var_251_bool = 0; var_252_float = 0; var_253_float = 0; var_254_bool = 0; var_255_float = 0; var_256_float = 0;
	lshHasAnimation(var_254_bool, var_250_string);
	var_257_bool = var_254_bool;
	if(var_257_bool != 0) {
		lshGetAnimTimes(var_250_string, var_255_float, var_256_float);
		lshPlayAnimation(var_255_float, var_256_float, (bool)0);
	} else {
		var_260_int = "Can't find lsh animation : " + var_250_string;
		Trace(var_260_int);
	}
	return 6;
	
}


func_2364(var_368_bool)
{
	var_370_int = 0; var_371_string = "";
	func_2177(var_370_int, "b4q02");
	var_373_bool = var_370_int == (int)1000;
	if(var_373_bool != 0) {
		var_368_bool = 1;
		return 0;
	}
	var_368_bool = 0;
	return 0;
}


func_1599(var_0_object)
{
	var_26_bool = 0;
	func_1878(var_26_bool);
	var_29_bool = var_26_bool == 0; //@nz
	if(var_29_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1608:
	func_1775();
	goto Label_1608;
}
EMIT "Return(); Pop(0)";


func_1859(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0;
	GetPosition(var_39_cvector);
	var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
	return 6;
}


func_2376()
{
	var_36_object = Obj(); var_37_object = Obj();
	CreateDiaryEntry(var_37_object, (int)557, (int)2, (int)530536);
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0;
	var_37_object = var_42_object;
	func_2428(var_41_bool, var_42_object, (int)548);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2124(var_228_string, var_229_bool)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0;
	lshHasAnimation(var_235_bool, var_228_string);
	var_238_bool = var_235_bool;
	if(var_238_bool != 0) {
		lshGetAnimTimes(var_228_string, var_236_float, var_237_float);
		lshPlayAnimation(var_236_float, var_237_float, var_229_bool);
	} else {
		var_240_int = "Can't find lsh animation : " + var_228_string;
		Trace(var_240_int);
	}
	return 6;
	
}


func_1869(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_1859(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_1613(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj();
	FindActor(var_53_object, "player");
	var_55_bool = var_53_object == 0; //@nz
	if(var_55_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	var_56_bool = 0; var_57_object = Obj();
	var_53_object = var_57_object;
	func_1869(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_304_object, var_305_object)
{
	var_0_object = var_305_object;
	var_1_object = var_304_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_311_bool = 0; var_312_object = Obj();
		var_312_object = var_1_object;
		func_2328(var_312_object);
		if(var_311_bool != 0) {
			var_319_object = Obj(); var_320_object = Obj();
			var_319_object = var_1_object;
			var_320_object = var_0_object;
			func_2271();
			var_323_object = Obj(); var_324_object = Obj();
			var_323_object = var_1_object;
			var_324_object = var_0_object;
			func_2292();
			var_327_string = "";
			func_198(var_305_object, "Azart");
			@@@var_0_object:SetMessage((int)518568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518572, (int)20064, (int)19682);
			@@@var_0_object:AddReply((int)518950, (int)20062, (int)20061);
		} else {
				var_350_string = "";
				func_198(var_305_object, "Secret");
				@@@var_0_object:SetMessage((int)518573);
				@@@var_0_object:ClearReplies();
				var_352_bool = 0; var_353_object = Obj();
				var_353_object = var_1_object;
				func_2340(var_353_object);
				if(var_352_bool != 0) {
					@@@var_0_object:AddReply((int)518574, (int)19688, (int)19684);
				}
				var_361_bool = 0;
				var_361_bool = 0;
				var_362_bool = 0; var_363_object = Obj();
				var_363_object = var_1_object;
				func_2352(var_363_object);
				if(var_362_bool != 0) {
					var_368_bool = 0; var_369_object = Obj();
					var_369_object = var_1_object;
					func_2364(var_369_object);
					if(var_368_bool != 0) {
						var_361_bool = 1;
					}
				}
				if(var_361_bool != 0) {
					@@@var_0_object:AddReply((int)518586, (int)19694, (int)19693);
				}
				@@@var_0_object:AddReply((int)518575, (int)-1, (int)19685);
				goto Label_168;
		}
	}
Label_168:
	var_342_bool = 0;
	func_2252(var_342_bool);
	if(var_342_bool != 0) {

	Label_172:
		lshWaitForAnimEnd();
		var_343_string = var_3_string;
		if(var_343_string != 0) {
		} else {
			var_344_string = "";
			var_344_string = var_2_object;
			func_2108(var_344_string);
			goto Label_172;
	}
		PlayAnimation("all", "idle");

	Label_187:
		WaitForAnimEnd();
		var_347_string = var_3_string;
		if(var_347_string != 0) {
			goto Label_197;
		}
		PlayAnimation("all", "idle");
		goto Label_187;

	}
	goto Label_197;
	
Label_197:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_2389()
{
	var_34_object = Obj(); var_35_object = Obj();
	CreateDiaryEntry(var_35_object, (int)213, (int)2, (int)518576);
	var_39_bool = 0; var_40_object = Obj(); var_41_int = 0;
	var_35_object = var_40_object;
	func_2428(var_39_bool, var_40_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1878(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
	return 2;
}


func_1883(var_61_bool, var_62_object, var_63_float)
{
	var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0;
	@@var_62_object:GetPosition(var_74_cvector);
	@@var_62_object:GetEyesHeight(var_73_float);
	var_82_float = GetByIndex(var_74_cvector, 1);
	var_82_float = var_82_float + var_73_float;
	SetByIndex(var_74_cvector, 1) = var_82_float;
	GetPosition(var_75_cvector);
	GetEyesHeight(var_73_float);
	var_83_float = GetByIndex(var_75_cvector, 1);
	var_83_float = var_83_float + var_73_float;
	SetByIndex(var_75_cvector, 1) = var_83_float;
	var_76_cvector = var_74_cvector - var_75_cvector;
	var_84_float = GetByIndex(var_76_cvector, 1);
	SetByIndex(var_76_cvector, 1) = (float)0;
	var_85_int = var_76_cvector | var_76_cvector;
	var_86_float = sqrt(var_85_int);
	var_76_cvector = var_76_cvector / var_86_float;
	var_77_cvector = -var_76_cvector;
	var_87_float = var_76_cvector * var_63_float;
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0);
	var_89_cvector = var_77_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2167(var_88_cvector, var_89_cvector);
	var_97_float = var_88_cvector * (int)25;
	var_98_int = var_87_float + var_97_float;
	var_78_cvector = var_98_int - CVector(0.0, 10.0, 0.0);
	var_79_cvector = var_75_cvector + var_78_cvector;
	IsOverrideActive(var_80_bool);
	var_100_bool = var_80_bool;
	if(var_100_bool != 0) {
		var_61_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_79_cvector, var_77_cvector, (bool)1);
	var_102_float = GetByIndex(var_78_cvector, 0);
	var_103_float = GetByIndex(var_78_cvector, 2);
	Rotate(var_102_float, var_103_float);
	var_104_bool = 0;
	func_2252(var_104_bool);
	if(var_104_bool != 0) {
	} else {
		HasAnimationTrack(var_81_bool, "head");
		var_106_bool = var_81_bool;
		if(var_106_bool == 0) goto Label_1946;
		LookAsyncCamera("head");
	}
Label_1946:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_61_bool = 1;
	return 18;
	
}


func_1628(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_2139(var_156_bool, var_157_string)
{
	var_158_bool = 0; var_159_bool = 0;
	var_160_bool = 0;
	func_2252(var_160_bool);
	if(var_160_bool != 0) {
		lshHasSpeech(var_159_bool, var_157_string);
		var_161_bool = var_159_bool;
		if(var_161_bool != 0) {
			lshPlaySpeech(var_157_string);
			var_156_bool = 1;
			return 2;
		}
	}
	var_156_bool = 0;
	return 2;
}


func_1633(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0;
	FindActor(var_37_object, "player");
	var_40_bool = var_37_object == 0; //@nz
	if(var_40_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_41_float = 0; var_42_object = Obj();
	var_37_object = var_42_object;
	func_1851(var_41_float, var_42_object);
	var_50_bool = var_41_float > (float)90000.0;
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	CanSee(var_38_bool, var_37_object);
	var_38_bool = var_34_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2402()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)214, (int)2, (int)518577);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_2428(var_62_bool, var_63_object, (int)213);
	return 2;
}
EMIT "Stack[-1] = 0";


func_870(var_0_object, var_1_object, var_2_object, var_3_string, var_408_object, var_409_object)
{
	var_0_object = var_409_object;
	var_1_object = var_408_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_415_string = "";
		func_933(var_409_object, "Serious");
		@@@var_0_object:SetMessage((int)530479);
		@@@var_0_object:ClearReplies();
		var_424_bool = 0; var_425_object = Obj();
		var_425_object = var_1_object;
		func_2304(var_425_object);
		if(var_424_bool != 0) {
			@@@var_0_object:AddReply((int)530480, (int)32848, (int)31846);
		}
		@@@var_0_object:AddReply((int)530481, (int)-1, (int)31847);
		goto Label_903;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x36a";
	}
Label_903:
	var_436_bool = 0;
	func_2252(var_436_bool);
	if(var_436_bool != 0) {

	Label_907:
		lshWaitForAnimEnd();
		var_437_string = var_3_string;
		if(var_437_string != 0) {
		} else {
			var_438_string = "";
			var_438_string = var_2_object;
			func_2108(var_438_string);
			goto Label_907;
	}
		PlayAnimation("all", "idle");

	Label_922:
		WaitForAnimEnd();
		var_441_string = var_3_string;
		if(var_441_string != 0) {
			goto Label_932;
		}
		PlayAnimation("all", "idle");
		goto Label_922;
	}
	goto Label_932;
	
Label_932:
	return 0;
	
}


func_2154()
{
	var_29_bool = 0;
	func_2252(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2415(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj();
	GetDiaryRoot(var_52_object);
	var_53_bool = var_52_object == 0; //@nz
	if(var_53_bool != 0) {
		Trace("Can't retrieve diary root");
		var_50_object = 0;
		return 2;
	}
	var_52_object = var_50_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1392(var_0_object, var_513_int, var_514_object)
{
	var_516_object = Obj(); var_517_bool = 0; var_518_int = 0; var_519_bool = 0; var_520_object = Obj(); var_521_bool = 0; var_522_int = 0; var_523_bool = 0;
	var_0_object = var_514_object;
	var_524_bool = 0; var_525_object = Obj(); var_526_float = 0;
	var_514_object = var_525_object;
	func_1883(var_524_bool, var_525_object, (float)70.0);
	var_527_bool = var_524_bool == 0; //@nz
	if(var_527_bool != 0) {
		var_513_int = -2;
		return 8;
	}
	CreateDialog(var_520_object);
	var_528_int = 0;
	func_2246(var_528_int);
	@@var_520_object:SetNPCName(var_528_int);
	var_529_int = 0;
	func_2244(var_529_int);
	@@var_520_object:SetNPCDescription(var_529_int);
	var_530_string = "";
	func_2248(var_530_string);
	@@var_520_object:SetPhoto(var_530_string);
	var_531_string = "";
	func_2250(var_531_string);
	@@var_520_object:SetPhoto2(var_531_string);
	var_532_int = 0;
	func_2456(var_532_int);
	@@var_520_object:SetPlayerName(var_532_int);
	IsOverrideActive(var_521_bool);
	var_533_bool = var_521_bool;
	if(var_533_bool != 0) {
		var_513_int = -2;
		return 8;
	}
	DoDialog(var_520_object);
	var_534_bool = 0; var_535_object = Obj();
	func_2161(Obj());
	var_536_object = var_535_object;
	func_1970(var_534_bool, var_535_object);
	var_537_object = Obj(); var_538_object = Obj();
	var_514_object = var_537_object;
	var_520_object = var_538_object;
	TaskCall(9);
	func_1473(var_539_object, var_540_object, var_541_string, var_542_bool, var_537_object, var_538_object);
	TaskReturn();
	@@var_520_object:IsDialogEnd(var_523_bool);
	
Label_1455:
	var_567_bool = var_523_bool == 0; //@nz
	if(var_567_bool != 0) {
		sync();
		@@var_520_object:IsDialogEnd(var_523_bool);
		goto Label_1455;
	}
	var_514_object = Obj();
	func_1952();
	StopDialog(var_520_object);
	@@var_520_object:GetReturnValue((int)-1);
	var_522_int = var_513_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2161(var_124_object)
{
	var_125_object = Obj(); var_126_object = Obj();
	self(var_126_object);
	var_126_object = var_124_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1655()
{
	var_571_float = 0; var_572_float = 0;
	rand(var_572_float, (int)8, (int)16);
	SetTimer((int)10, var_572_float);
	return 2;
}


func_631(var_0_object, var_1_object, var_2_object, var_3_string, var_217_object, var_218_object)
{
	var_0_object = var_218_object;
	var_1_object = var_217_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_224_string = "";
		func_689(var_218_object, "Neutral");
		@@@var_0_object:SetMessage((int)520803);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520804, (int)29221, (int)22021);
		@@@var_0_object:AddReply((int)527876, (int)29224, (int)29223);
		goto Label_659;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x27b";
	}
Label_659:
	var_248_bool = 0;
	func_2252(var_248_bool);
	if(var_248_bool != 0) {

	Label_663:
		lshWaitForAnimEnd();
		var_249_string = var_3_string;
		if(var_249_string != 0) {
		} else {
			var_250_string = "";
			var_250_string = var_2_object;
			func_2108(var_250_string);
			goto Label_663;
	}
		PlayAnimation("all", "idle");

	Label_678:
		WaitForAnimEnd();
		var_263_string = var_3_string;
		if(var_263_string != 0) {
			goto Label_688;
		}
		PlayAnimation("all", "idle");
		goto Label_678;
	}
	goto Label_688;
	
Label_688:
	return 0;
	
}


func_2167(var_88_cvector, var_89_cvector)
{
	var_91_float = 0; var_92_float = 0;
	var_93_int = var_89_cvector | var_89_cvector;
	var_92_float = sqrt(var_93_int);
	var_94_float = 9.999999974752427e-07;
	var_95_bool = var_92_float < var_94_float;
	if(var_95_bool != 0) {
		var_88_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_88_cvector = var_89_cvector / var_92_float;
	return 2;
}


func_2428(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0;
	func_2415(Obj());
	var_50_object = var_47_object;
	@@var_47_object:Find(var_43_int, var_48_object);
	var_55_bool = var_48_object == 0; //@nz
	if(var_55_bool != 0) {
		var_57_int = "Can't find diary parent with id: " + var_43_int;
		Trace(var_57_int);
		var_41_bool = 0;
		return 6;
	}
	@@var_48_object:AddChild(var_42_object);
	SendWorldWndMessage((int)7);
	@@var_42_object:GetCategory(var_49_int);
	SetDiarySection(var_49_int);
	var_41_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1150(var_0_object, var_1_object, var_2_object, var_3_string, var_472_object, var_473_object)
{
	var_0_object = var_473_object;
	var_1_object = var_472_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_479_string = "";
		func_1218(var_473_object, "Secret");
		@@@var_0_object:SetMessage((int)535248);
		@@@var_0_object:ClearReplies();
		var_488_bool = 0; var_489_object = Obj();
		var_489_object = var_1_object;
		func_2316(var_489_object);
		if(var_488_bool != 0) {
			@@@var_0_object:AddReply((int)535249, (int)37070, (int)36924);
		}
		@@@var_0_object:AddReply((int)535387, (int)-1, (int)37072);
		@@@var_0_object:AddReply((int)535388, (int)-1, (int)37073);
		goto Label_1188;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x482";
	}
Label_1188:
	var_503_bool = 0;
	func_2252(var_503_bool);
	if(var_503_bool != 0) {

	Label_1192:
		lshWaitForAnimEnd();
		var_504_string = var_3_string;
		if(var_504_string != 0) {
		} else {
			var_505_string = "";
			var_505_string = var_2_object;
			func_2108(var_505_string);
			goto Label_1192;
	}
		PlayAnimation("all", "idle");

	Label_1207:
		WaitForAnimEnd();
		var_508_string = var_3_string;
		if(var_508_string != 0) {
			goto Label_1217;
		}
		PlayAnimation("all", "idle");
		goto Label_1207;
	}
	goto Label_1217;
	
Label_1217:
	return 0;
	
}


func_1664()
{
	KillTimer((int)10);
	return 0;
}


func_2177(var_313_int, var_314_string)
{
	var_315_int = 0; var_316_int = 0;
	GetVariable(var_314_string, var_316_int);
	var_316_int = var_313_int;
	return 2;
}


func_2182(var_65_object, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj();
	GetMainOutdoorScene(var_69_object);
	var_72_int = var_66_string + ".bin";
	AddBlankActor(var_70_object, var_69_object, var_66_string, var_72_int);
	var_70_object = var_65_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2193(var_73_bool, var_74_string, var_75_string)
{
	var_76_object = Obj(); var_77_object = Obj();
	FindActor(var_77_object, var_74_string);
	var_78_bool = var_77_object == 0; //@ne
	if(var_78_bool != 0) {
		var_73_bool = 0;
		return 2;
	}
	Trigger(var_77_object, var_75_string);
	var_73_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2456(var_113_int)
{
	var_114_int = 0; var_115_int = 0;
	GetVariable("branch", var_115_int);
	var_118_bool = var_115_int == (int)0;
	if(var_118_bool != 0) {
		var_113_int = 1;
		return 2;
	EMIT "GOTO 0x9a7";
	}
	var_120_bool = var_115_int == (int)1;
	if(var_120_bool != 0) {
		var_113_int = 2;
		return 2;
	}
	var_113_int = 3;
	return 2;
}


func_2205(var_177_int)
{
	var_178_float = 0; var_179_float = 0;
	GetGameTime(var_179_float);
	var_181_int = 0;
	var_181_int = var_179_float / (int)24;
	var_177_int = (int)1 + var_181_int;
	return 2;
}


func_1952()
{
	var_268_bool = 0; var_269_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_271_bool = 0;
	func_2252(var_271_bool);
	if(var_271_bool != 0) {
	} else {
		HasAnimationTrack(var_269_bool, "head");
		var_273_bool = var_269_bool;
		if(var_273_bool == 0) goto Label_1969;
		UnlookAsync("head");
	}
Label_1969:
	return 2;
	
}


func_933(var_2_object, var_415_string)
{
	var_416_bool = 0;
	func_2252(var_416_bool);
	var_417_bool = var_416_bool == 0; //@nz
	if(var_417_bool != 0) {
		return 0;
	}
	var_418_bool = var_415_string == var_2_object;
	if(var_418_bool != 0) {
		return 0;
	}
	var_419_string = ""; var_420_bool = 0;
	var_415_string = var_419_string;
	var_422_bool = var_415_string == "";
	if(var_422_bool != 0) {
		var_420_bool = 0;
	} else {
		var_420_bool = 1;
	}
	func_2124(var_419_string, var_420_bool);
	var_2_object = var_415_string;
	return 0;
	
}


func_2214(var_277_bool, var_278_int)
{
	var_279_int = 0;
	func_2205(var_279_int);
	var_277_bool = var_279_int == var_278_int;
	return 0;
}


func_2473(var_45_object)
{
	var_46_int = 0; var_47_int = 0;
	GetVariable("mt_spi4ka", var_47_int);
	var_49_bool = var_47_int == 0; //@nz
	if(var_49_bool != 0) {
		var_50_int = 0; var_51_object = Obj();
		var_45_object = var_51_object;
		TaskCall(2);
		func_550(var_52_object, var_50_int, var_51_object);
		TaskReturn();
		SetVariable("mt_spi4ka", (int)1);
	}
	return 2;
}


func_2220(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = "";
	var_54_int = var_51_int;
	if(var_54_int != 0) {
		"idle" = "idle" + var_51_int;
	}
	var_53_string = var_50_string;
	return 2;
}


func_689(var_2_object, var_224_string)
{
	var_225_bool = 0;
	func_2252(var_225_bool);
	var_226_bool = var_225_bool == 0; //@nz
	if(var_226_bool != 0) {
		return 0;
	}
	var_227_bool = var_224_string == var_2_object;
	if(var_227_bool != 0) {
		return 0;
	}
	var_228_string = ""; var_229_bool = 0;
	var_224_string = var_228_string;
	var_231_bool = var_224_string == "";
	if(var_231_bool != 0) {
		var_229_bool = 0;
	} else {
		var_229_bool = 1;
	}
	func_2124(var_228_string, var_229_bool);
	var_2_object = var_224_string;
	return 0;
	
}


func_1970(var_122_bool, var_123_object)
{
	var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0;
	GetVariable("voice_common", var_129_int);
	var_132_int = var_129_int;
	if(var_132_int != 0) {
		var_133_bool = 0; var_134_object = Obj();
		var_123_object = var_134_object;
		func_2028(var_133_bool, var_134_object);
		var_163_bool = var_133_bool == 0; //@nz
		if(var_163_bool != 0) {
			var_164_bool = 0; var_165_object = Obj();
			var_123_object = var_165_object;
			func_2065(var_164_bool, var_165_object);
			var_199_bool = var_164_bool == 0; //@nz
			if(var_199_bool != 0) {
				var_122_bool = 0;
				return 4;
			}
		}
		irand(var_130_int, (int)2);
		var_201_int = var_130_int;
		if(var_201_int != 0) {
			var_204_int = var_129_int + (int)1;
			var_206_int = var_204_int % (int)3;
			SetVariable("voice_common", var_206_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_209_bool = 0; var_210_object = Obj();
		var_123_object = var_210_object;
		func_2065(var_209_bool, var_210_object);
		var_211_bool = var_209_bool == 0; //@nz
		if(var_211_bool != 0) {
			var_212_bool = 0; var_213_object = Obj();
			var_123_object = var_213_object;
			func_2028(var_212_bool, var_213_object);
			var_214_bool = var_212_bool == 0; //@nz
			if(var_214_bool != 0) {
				var_122_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2026;
	
Label_2026:
	var_122_bool = 1;
	return 4;
	
}


func_2227(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0;
	var_47_int = 0;
	
Label_2229:
	var_50_string = ""; var_51_int = 0;
	var_47_int = var_51_int;
	func_2220(var_50_string, var_51_int);
	HasAnimation(var_48_bool, "all", var_50_string);
	var_55_bool = var_48_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
		var_47_int = var_47_int + (int)1;
		goto Label_2229;
	}
	var_47_int = var_44_int;
	return 4;
	
}


func_2490(var_44_object)
{
	var_45_object = Obj();
	var_44_object = var_45_object;
	func_2473(var_45_object);
	var_277_bool = 0; var_278_int = 0;
	func_2214(var_277_bool, (int)4);
	if(var_277_bool != 0) {
		var_280_int = 0; var_281_object = Obj();
		var_44_object = var_281_object;
		TaskCall(0);
		func_0(var_282_object, var_280_int, var_281_object);
		TaskReturn();
		return 0;
	}
	var_382_bool = 0; var_383_int = 0;
	func_2214(var_382_bool, (int)10);
	if(var_382_bool != 0) {
		var_384_int = 0; var_385_object = Obj();
		var_44_object = var_385_object;
		TaskCall(4);
		func_789(var_386_object, var_384_int, var_385_object);
		TaskReturn();
		return 0;
	}
	var_446_bool = 0; var_447_int = 0;
	func_2214(var_446_bool, (int)12);
	if(var_446_bool != 0) {
		var_448_int = 0; var_449_object = Obj();
		var_44_object = var_449_object;
		TaskCall(6);
		func_1069(var_450_object, var_448_int, var_449_object);
		TaskReturn();
		return 0;
	}
	var_513_int = 0; var_514_object = Obj();
	var_44_object = var_514_object;
	TaskCall(8);
	func_1392(var_515_object, var_513_int, var_514_object);
	TaskReturn();
	return 0;
}


func_1473(var_0_object, var_1_object, var_2_object, var_3_string, var_537_object, var_538_object)
{
	var_0_object = var_538_object;
	var_1_object = var_537_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_544_string = "";
		func_1531(var_538_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_1501;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5c5";
	}
Label_1501:
	var_559_bool = 0;
	func_2252(var_559_bool);
	if(var_559_bool != 0) {

	Label_1505:
		lshWaitForAnimEnd();
		var_560_string = var_3_string;
		if(var_560_string != 0) {
		} else {
			var_561_string = "";
			var_561_string = var_2_object;
			func_2108(var_561_string);
			goto Label_1505;
	}
		PlayAnimation("all", "idle");

	Label_1520:
		WaitForAnimEnd();
		var_564_string = var_3_string;
		if(var_564_string != 0) {
			goto Label_1530;
		}
		PlayAnimation("all", "idle");
		goto Label_1520;
	}
	goto Label_1530;
	
Label_1530:
	return 0;
	
}


func_1218(var_2_object, var_479_string)
{
	var_480_bool = 0;
	func_2252(var_480_bool);
	var_481_bool = var_480_bool == 0; //@nz
	if(var_481_bool != 0) {
		return 0;
	}
	var_482_bool = var_479_string == var_2_object;
	if(var_482_bool != 0) {
		return 0;
	}
	var_483_string = ""; var_484_bool = 0;
	var_479_string = var_483_string;
	var_486_bool = var_479_string == "";
	if(var_486_bool != 0) {
		var_484_bool = 0;
	} else {
		var_484_bool = 1;
	}
	func_2124(var_483_string, var_484_bool);
	var_2_object = var_479_string;
	return 0;
	
}


func_2244(var_110_int)
{
	var_110_int = 515552;
	return 0;
}


func_2246(var_109_int)
{
	var_109_int = 502877;
	return 0;
}


func_198(var_2_object, var_327_string)
{
	var_328_bool = 0;
	func_2252(var_328_bool);
	var_329_bool = var_328_bool == 0; //@nz
	if(var_329_bool != 0) {
		return 0;
	}
	var_330_bool = var_327_string == var_2_object;
	if(var_330_bool != 0) {
		return 0;
	}
	var_331_string = ""; var_332_bool = 0;
	var_327_string = var_331_string;
	var_334_bool = var_327_string == "";
	if(var_334_bool != 0) {
		var_332_bool = 0;
	} else {
		var_332_bool = 1;
	}
	func_2124(var_331_string, var_332_bool);
	var_2_object = var_327_string;
	return 0;
	
}


func_2248(var_111_string)
{
	var_111_string = "ui/NPC_Spi4ka.png";
	return 0;
}


func_2250(var_112_string)
{
	var_112_string = "ui/NPC_Spi4ka_b.png";
	return 0;
}


func_2252(var_104_bool)
{
	var_104_bool = 1;
	return 0;
}


func_2254()
{
	func_2389();
	func_2402();
	var_65_object = Obj(); var_66_string = "";
	func_2182(var_65_object, "quest_b4_02");
	var_73_bool = 0; var_74_string = ""; var_75_string = "";
	func_2193(var_73_bool, "quest_b4_02", "place_boy");
	return 0;
}


func_2271()
{
	SetVariable("oob4Spi4ka1", (int)1);
	return 0;
}


func_2277()
{
	SetVariable("oob4Spi4ka2", (int)1);
	return 0;
}


func_2283()
{
	SetVariable("b10q04Spi4kaTalk", (int)9);
	func_2376();
	return 0;
}


func_2028(var_133_bool, var_134_object)
{
	var_135_string = ""; var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_string = ""; var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = "";
	var_140_string = "c";
	var_141_int = 0;
	
Label_2031:
	if((int)1 != 0) {
		var_147_int = var_141_int + (int)1;
		var_148_int = var_140_string + var_147_int;
		@@var_134_object:HasProperty(var_148_int, var_142_bool);
		var_149_bool = var_142_bool == 0; //@nz
		if(var_149_bool != 0) {
		} else {
			var_141_int = var_141_int + (int)1;
			goto Label_2031;
		}
	}
	var_150_bool = var_141_int == 0; //@nz
	if(var_150_bool != 0) {
		var_133_bool = 0;
		return 10;
	}
	var_143_int = 0;
	var_152_bool = var_141_int > (int)1;
	if(var_152_bool != 0) {
		irand(var_143_int, var_141_int);
	}
	var_154_int = var_143_int + (int)1;
	var_155_int = var_140_string + var_154_int;
	@@var_134_object:GetProperty(var_155_int, var_144_string);
	var_156_bool = 0; var_157_string = "";
	var_144_string = var_157_string;
	func_2139(var_156_bool, var_157_string);
	var_156_bool = var_133_bool;
	return 10;
	
}


func_1775()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0;
	WaitForAnimEnd();
	var_42_bool = 0;
	func_1878(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 12;
	}
	func_2227((int)0);
	var_44_int = var_36_int;
	var_37_int = 0;
	
Label_1789:
	var_57_bool = 0;
	var_57_bool = 0;
	var_59_bool = var_37_int < (int)5;
	if(var_59_bool != 0) {
		var_60_bool = 0;
		func_1878(var_60_bool);
		if(var_60_bool != 0) {
			var_57_bool = 1;
		}
	}
	if(var_57_bool != 0) {
		var_61_bool = var_36_int == 0; //@nz
		if(var_61_bool != 0) {
			Sleep((int)3, var_38_bool);
			var_63_bool = var_38_bool == 0; //@nz
			if(var_63_bool != 0) {
			} else {
		} else {
				irand(var_39_int, var_36_int);
				irand(var_40_int, (int)5);
				var_69_bool = var_40_int != (int)0;
				if(var_69_bool != 0) {
					var_39_int = 0;
				}
				var_71_string = ""; var_72_int = 0;
				var_39_int = var_72_int;
				func_2220(var_71_string, var_72_int);
				PlayAnimation("all", var_71_string);
				WaitForAnimEnd(var_41_bool);
				var_73_bool = var_41_bool == 0; //@nz
				if(var_73_bool == 0) goto Label_1830;
				goto Label_1841;
		}
		Label_1830:
			var_64_bool = 0;
			func_1844(var_64_bool);
			var_65_bool = var_64_bool == 0; //@nz
			if(var_65_bool != 0) {
				goto Label_1841;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_1789;

		}
	}
Label_1841:
	ResetAAS();
	return 12;
	
}


func_2292()
{
	SetVariable("b4Spi4kaVisit", (int)1);
	return 0;
}


func_2298()
{
	SetVariable("oob12Spi4ka1", (int)1);
	return 0;
}


func_1531(var_2_object, var_544_string)
{
	var_545_bool = 0;
	func_2252(var_545_bool);
	var_546_bool = var_545_bool == 0; //@nz
	if(var_546_bool != 0) {
		return 0;
	}
	var_547_bool = var_544_string == var_2_object;
	if(var_547_bool != 0) {
		return 0;
	}
	var_548_string = ""; var_549_bool = 0;
	var_544_string = var_548_string;
	var_551_bool = var_544_string == "";
	if(var_551_bool != 0) {
		var_549_bool = 0;
	} else {
		var_549_bool = 1;
	}
	func_2124(var_548_string, var_549_bool);
	var_2_object = var_544_string;
	return 0;
	
}


