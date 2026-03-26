// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Hope|W:Untrust|W:Independence|W:Fear|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:reputation|A:add|W:ui/NPC_Julia.png|W:ui/NPC_Julia_b.png|W:k3q02|W:k3q02JuliaGotoEva|W:pt_map_eva|A:AddMark|W:k6q01|W:k6q01IfAnna|W:pt_map_anna|W:k6q01IfEva|W:k6q01IfLara|W:pt_map_lara|W:k6q01IfOspina|W:pt_map_ospina|W:quest_k6_01|W:place_danko|W:k11q01SoulCount|W:ook11Julia1|W:ook3Julia1|W:pt_map_theater|A:ShowMap|W:k6StopKaterinaTalks|W:k11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x859
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a8 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x385 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x55c vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6da vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x82f vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0x8a5 vars=int
// @EVENT_6: op=0x8cb vars=
// @EVENT_5: op=0x8da vars=
// @EVENT_45: op=0x8e7 vars=bool
// @EVENT_0: op=0x8f3 vars=object
// @PE: 0x51,0x8b,0xa1,0x14a,0x192,0x1a8,0x32b,0x36f,0x385,0x4fe,0x546,0x55c,0x685,0x6c4,0x6da,0x7df,0x819,0x82f,0x8a5,0x8cb,0x8e7,0xac4,0xad4,0xb1b,0xbc4,0xbca,0xbd0,0xbe0,0xbe9,0xbef,0xbf6,0xc02,0xc0e,0xc1a,0xc26,0xd13

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2733();
		var_36_bool = var_31_bool == (int)26842;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525486);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525487, (int)30760, (int)26843);
			@@@var_0_object:AddReply((int)540677, (int)-1, (int)42710);
			return 0;
		}
		var_62_bool = var_31_bool == (int)30760;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529306);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529307, (int)30762, (int)30761);
			@@@var_0_object:AddReply((int)540678, (int)-1, (int)42711);
			return 0;
		}
		var_72_bool = var_31_bool == (int)30762;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529308);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529309, (int)-1, (int)30763);
			@@@var_0_object:AddReply((int)529310, (int)-1, (int)30764);
			return 0;
		}
		var_3_string = true;
		var_81_bool = 0;
		func_2881(var_81_bool);
		if(var_81_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2733();
		var_36_bool = var_32_cvector == (int)26897;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3018();
		}
		var_42_bool = var_32_cvector == (int)26901;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_2883();
		}
		var_87_bool = var_32_cvector == (int)42735;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_2883();
		}
		var_91_bool = var_32_cvector == (int)42731;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_2883();
		}
		var_95_bool = var_32_cvector == (int)42732;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_2883();
		}
		var_99_bool = var_32_cvector == (int)42726;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_3055(var_101_object);
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_3040();
		}
		var_153_bool = var_31_bool == (int)26890;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_402(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525534);
			@@@var_0_object:ClearReplies();
			var_172_bool = 0;
			var_172_bool = 0;
			var_173_bool = 0; var_174_object = Obj();
			var_174_object = var_1_object;
			func_3062(var_174_object);
			if(var_173_bool != 0) {
				var_181_bool = 0; var_182_object = Obj();
				var_182_object = var_1_object;
				func_3110(var_182_object);
				if(var_181_bool != 0) {
					var_172_bool = 1;
				}
			}
			if(var_172_bool != 0) {
				@@@var_0_object:AddReply((int)525541, (int)42712, (int)26897);
			}
			@@@var_0_object:AddReply((int)525546, (int)-1, (int)26902);
			return 0;
		}
		var_194_bool = var_31_bool == (int)42712;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_402(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)540679);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540680, (int)42715, (int)42713);
			@@@var_0_object:AddReply((int)540681, (int)42718, (int)42714);
			return 0;
		}
		var_204_bool = var_31_bool == (int)42715;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_402(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)540682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540683, (int)42722, (int)42716);
			@@@var_0_object:AddReply((int)540684, (int)42718, (int)42717);
			return 0;
		}
		var_214_bool = var_31_bool == (int)42718;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_402(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)540685);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540686, (int)42722, (int)42720);
			@@@var_0_object:AddReply((int)540687, (int)42722, (int)42721);
			return 0;
		}
		var_224_bool = var_31_bool == (int)42722;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_402(var_32_cvector, "Independence");
			@@@var_0_object:SetMessage((int)540688);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540689, (int)42727, (int)42725);
			@@@var_0_object:AddReply((int)540690, (int)-1, (int)42726);
			return 0;
		}
		var_234_bool = var_31_bool == (int)42727;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_402(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)540691);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540692, (int)26898, (int)42728);
			return 0;
		}
		var_241_bool = var_31_bool == (int)26898;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_402(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)525542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525543, (int)26900, (int)26899);
			@@@var_0_object:AddReply((int)540693, (int)42730, (int)42729);
			return 0;
		}
		var_251_bool = var_31_bool == (int)42730;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_402(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540695, (int)-1, (int)42731);
			@@@var_0_object:AddReply((int)540696, (int)-1, (int)42732);
			return 0;
		}
		var_261_bool = var_31_bool == (int)26900;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_402(var_32_cvector, "Independence");
			@@@var_0_object:SetMessage((int)525544);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540697, (int)42734, (int)42733);
			@@@var_0_object:AddReply((int)540699, (int)-1, (int)42735);
			return 0;
		}
		var_271_bool = var_31_bool == (int)42734;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_402(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)540698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525545, (int)-1, (int)26901);
			return 0;
		}
		var_3_string = true;
		var_277_bool = 0;
		func_2881(var_277_bool);
		if(var_277_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a9";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2733();
		var_36_bool = var_32_cvector == (int)27331;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3049();
		}
		var_42_bool = var_32_cvector == (int)27347;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_2906();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_3024(var_108_object);
		}
		var_134_bool = var_31_bool == (int)27330;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_879(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)526045);
			@@@var_0_object:ClearReplies();
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_3074(var_154_object);
			if(var_153_bool != 0) {
				@@@var_0_object:AddReply((int)526046, (int)27332, (int)27331);
			}
			@@@var_0_object:AddReply((int)526063, (int)-1, (int)27348);
			@@@var_0_object:AddReply((int)528877, (int)-1, (int)30300);
			return 0;
		}
		var_171_bool = var_31_bool == (int)27332;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_879(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)526047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526048, (int)27334, (int)27333);
			@@@var_0_object:AddReply((int)528878, (int)27334, (int)30301);
			return 0;
		}
		var_181_bool = var_31_bool == (int)27334;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_879(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)526049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526050, (int)27336, (int)27335);
			@@@var_0_object:AddReply((int)528879, (int)27338, (int)30303);
			return 0;
		}
		var_191_bool = var_31_bool == (int)27336;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_879(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526052, (int)27338, (int)27337);
			return 0;
		}
		var_198_bool = var_31_bool == (int)27338;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_879(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528880, (int)30306, (int)30305);
			@@@var_0_object:AddReply((int)528882, (int)30306, (int)30307);
			return 0;
		}
		var_208_bool = var_31_bool == (int)30306;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_879(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526054, (int)27340, (int)27339);
			@@@var_0_object:AddReply((int)526056, (int)27342, (int)27341);
			return 0;
		}
		var_218_bool = var_31_bool == (int)27342;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_879(var_32_cvector, "Independence");
			@@@var_0_object:SetMessage((int)526057);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526058, (int)27344, (int)27343);
			return 0;
		}
		var_225_bool = var_31_bool == (int)27340;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_879(var_32_cvector, "Independence");
			@@@var_0_object:SetMessage((int)526055);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528883, (int)27344, (int)30309);
			return 0;
		}
		var_232_bool = var_31_bool == (int)27344;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_879(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)526059);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528886, (int)30314, (int)30313);
			@@@var_0_object:AddReply((int)540972, (int)43062, (int)43061);
			return 0;
		}
		var_242_bool = var_31_bool == (int)43062;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_879(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)540973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540974, (int)30314, (int)43063);
			return 0;
		}
		var_249_bool = var_31_bool == (int)30314;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_879(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526060, (int)27346, (int)27345);
			return 0;
		}
		var_256_bool = var_31_bool == (int)27346;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_879(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526062, (int)-1, (int)27347);
			return 0;
		}
		var_3_string = true;
		var_262_bool = 0;
		func_2881(var_262_bool);
		if(var_262_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x386";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2733();
		var_36_bool = var_32_cvector == (int)28912;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3012();
		}
		var_42_bool = var_32_cvector == (int)28924;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_2961();
		}
		var_126_bool = var_32_cvector == (int)28929;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_2961();
		}
		var_130_bool = var_31_bool == (int)28910;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_1350(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527568);
			@@@var_0_object:ClearReplies();
			var_149_bool = 0;
			var_149_bool = 0;
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_3098(var_151_object);
			if(var_150_bool != 0) {
				var_158_bool = 0; var_159_object = Obj();
				var_159_object = var_1_object;
				func_3086(var_159_object);
				if(var_158_bool != 0) {
					var_149_bool = 1;
				}
			}
			if(var_149_bool != 0) {
				@@@var_0_object:AddReply((int)527570, (int)28913, (int)28912);
			}
			@@@var_0_object:AddReply((int)527569, (int)-1, (int)28911);
			return 0;
		}
		var_171_bool = var_31_bool == (int)28913;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_1350(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)527571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527572, (int)28915, (int)28914);
			@@@var_0_object:AddReply((int)527583, (int)28926, (int)28925);
			return 0;
		}
		var_181_bool = var_31_bool == (int)28926;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_1350(var_32_cvector, "Independence");
			@@@var_0_object:SetMessage((int)527584);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527585, (int)28917, (int)28927);
			return 0;
		}
		var_188_bool = var_31_bool == (int)28915;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_1350(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)527573);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527574, (int)28917, (int)28916);
			return 0;
		}
		var_195_bool = var_31_bool == (int)28917;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_1350(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)527575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527576, (int)28919, (int)28918);
			return 0;
		}
		var_202_bool = var_31_bool == (int)28919;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_1350(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)527577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527578, (int)28921, (int)28920);
			return 0;
		}
		var_209_bool = var_31_bool == (int)28921;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_1350(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)527579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527580, (int)28923, (int)28922);
			return 0;
		}
		var_216_bool = var_31_bool == (int)28923;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_1350(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)527581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527582, (int)-1, (int)28924);
			@@@var_0_object:AddReply((int)527586, (int)-1, (int)28929);
			return 0;
		}
		var_3_string = true;
		var_225_bool = 0;
		func_2881(var_225_bool);
		if(var_225_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x55d";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2733();
		var_36_bool = var_31_bool == (int)41243;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_1732(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542585, (int)44986, (int)44985);
			@@@var_0_object:AddReply((int)539301, (int)-1, (int)41244);
			@@@var_0_object:AddReply((int)542584, (int)-1, (int)44984);
			return 0;
		}
		var_65_bool = var_31_bool == (int)44986;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_1732(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)542586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542587, (int)44989, (int)44987);
			@@@var_0_object:AddReply((int)542588, (int)-1, (int)44988);
			return 0;
		}
		var_75_bool = var_31_bool == (int)44989;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_1732(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)542589);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542590, (int)44991, (int)44990);
			@@@var_0_object:AddReply((int)542594, (int)44993, (int)44994);
			return 0;
		}
		var_85_bool = var_31_bool == (int)44991;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_1732(var_32_cvector, "Hope");
			@@@var_0_object:SetMessage((int)542591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542592, (int)44993, (int)44992);
			return 0;
		}
		var_92_bool = var_31_bool == (int)44993;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_1732(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542593);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542595, (int)44997, (int)44996);
			return 0;
		}
		var_99_bool = var_31_bool == (int)44997;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_1732(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542596);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542597, (int)45000, (int)44998);
			@@@var_0_object:AddReply((int)542598, (int)-1, (int)44999);
			return 0;
		}
		var_109_bool = var_31_bool == (int)45000;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_1732(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542600, (int)-1, (int)45001);
			@@@var_0_object:AddReply((int)542601, (int)-1, (int)45002);
			@@@var_0_object:AddReply((int)542602, (int)-1, (int)45003);
			return 0;
		}
		var_3_string = true;
		var_121_bool = 0;
		func_2881(var_121_bool);
		if(var_121_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6db";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_2733();
		var_36_bool = var_31_int == (int)42548;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2073(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_2881(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x830";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_2209();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_2457(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_2178(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_2158(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_2740(Obj());
				var_77_object = var_76_object;
				func_2607(var_75_bool, var_76_object);
			}
		} else {
			func_2173(var_31_int);
			func_2200();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2391();
	func_2209();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_2209();
	var_32_string = "";
	func_2687("Neutral");
	func_2200();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_2200();
	} else {
		var_38_string = "";
		func_2687("Neutral");
	}
	return 0;
	
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	IsOverrideActive(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		EventDisable(0);
		func_2391();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_2448(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_3347(var_49_object);
		var_607_string = "";
		func_2687("Neutral");
		func_2209();
		func_2200();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_2144(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_0_object = var_53_object;
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0;
	var_53_object = var_64_object;
	func_2462(var_63_bool, var_64_object, (float)70.0);
	var_110_bool = var_63_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	CreateDialog(var_59_object);
	var_111_int = 0;
	func_2875(var_111_int);
	@@var_59_object:SetNPCName(var_111_int);
	var_112_int = 0;
	func_2873(var_112_int);
	@@var_59_object:SetNPCDescription(var_112_int);
	var_113_string = "";
	func_2877(var_113_string);
	@@var_59_object:SetPhoto(var_113_string);
	var_114_string = "";
	func_2879(var_114_string);
	@@var_59_object:SetPhoto2(var_114_string);
	var_115_int = 0;
	func_3330(var_115_int);
	@@var_59_object:SetPlayerName(var_115_int);
	IsOverrideActive(var_60_bool);
	var_123_bool = var_60_bool;
	if(var_123_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	DoDialog(var_59_object);
	var_124_bool = 0; var_125_object = Obj();
	func_2740(Obj());
	var_126_object = var_125_object;
	func_2549(var_124_bool, var_125_object);
	var_219_object = Obj(); var_220_object = Obj();
	var_53_object = var_219_object;
	var_59_object = var_220_object;
	TaskCall(1);
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	@@var_59_object:IsDialogEnd(var_62_bool);
	
Label_63:
	var_268_bool = var_62_bool == 0; //@nz
	if(var_268_bool != 0) {
		sync();
		@@var_59_object:IsDialogEnd(var_62_bool);
		goto Label_63;
	}
	var_53_object = Obj();
	func_2531();
	StopDialog(var_59_object);
	@@var_59_object:GetReturnValue((int)-1);
	var_61_int = var_52_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2817(var_101_bool, var_102_string, var_103_string)
{
	var_104_object = Obj(); var_105_object = Obj();
	FindActor(var_105_object, var_102_string);
	var_106_bool = var_105_object == 0; //@ne
	if(var_106_bool != 0) {
		var_101_bool = 0;
		return 2;
	}
	Trigger(var_105_object, var_103_string);
	var_101_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3074(var_394_bool)
{
	var_396_int = 0; var_397_string = "";
	func_2767(var_396_int, "k6q01");
	var_399_bool = var_396_int == (int)1;
	if(var_399_bool != 0) {
		var_394_bool = 1;
		return 0;
	}
	var_394_bool = 0;
	return 0;
}


func_3330(var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	GetVariable("branch", var_117_int);
	var_120_bool = var_117_int == (int)0;
	if(var_120_bool != 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xd11";
	}
	var_122_bool = var_117_int == (int)1;
	if(var_122_bool != 0) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
	return 2;
}


func_2829(var_60_float)
{
	var_61_float = 0; var_62_float = 0;
	GetGameTime(var_62_float);
	var_62_float = var_60_float;
	return 2;
}


func_3086(var_468_bool)
{
	var_470_int = 0; var_471_string = "";
	func_2767(var_470_int, "k11q01");
	var_473_bool = var_470_int == (int)9;
	if(var_473_bool != 0) {
		var_468_bool = 1;
		return 0;
	}
	var_468_bool = 0;
	return 0;
}


func_2320()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	WaitForAnimEnd();
	var_48_bool = 0;
	func_2457(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 12;
	}
	func_2856((int)0);
	var_50_int = var_42_int;
	var_43_int = 0;
	
Label_2334:
	var_63_bool = 0;
	var_63_bool = 0;
	var_65_bool = var_43_int < (int)5;
	if(var_65_bool != 0) {
		var_66_bool = 0;
		func_2457(var_66_bool);
		if(var_66_bool != 0) {
			var_63_bool = 1;
		}
	}
	if(var_63_bool != 0) {
		var_67_bool = var_42_int == 0; //@nz
		if(var_67_bool != 0) {
			Sleep((int)3, var_44_bool);
			var_69_bool = var_44_bool == 0; //@nz
			if(var_69_bool != 0) {
			} else {
		} else {
				irand(var_45_int, var_42_int);
				irand(var_46_int, (int)5);
				var_75_bool = var_46_int != (int)0;
				if(var_75_bool != 0) {
					var_45_int = 0;
				}
				var_77_string = ""; var_78_int = 0;
				var_45_int = var_78_int;
				func_2849(var_77_string, var_78_int);
				PlayAnimation("all", var_77_string);
				WaitForAnimEnd(var_47_bool);
				var_79_bool = var_47_bool == 0; //@nz
				if(var_79_bool == 0) goto Label_2375;
				goto Label_2386;
		}
		Label_2375:
			var_70_bool = 0;
			func_2389(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_2386;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_2334;

		}
	}
Label_2386:
	ResetAAS();
	return 12;
	
}


func_2834(var_179_int)
{
	var_180_float = 0; var_181_float = 0;
	GetGameTime(var_181_float);
	var_183_int = 0;
	var_183_int = var_181_float / (int)24;
	var_179_int = (int)1 + var_183_int;
	return 2;
}


func_3347(var_49_object)
{
	var_50_bool = GlobalVars[1];
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_52_int = 0; var_53_object = Obj();
		var_49_object = var_53_object;
		TaskCall(0);
		func_0(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_277_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_278_bool = 0; var_279_int = 0;
	func_2843(var_278_bool, (int)3);
	if(var_278_bool != 0) {
		var_281_int = 0; var_282_object = Obj();
		var_49_object = var_282_object;
		TaskCall(2);
		func_249(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	var_352_bool = 0; var_353_int = 0;
	func_2843(var_352_bool, (int)6);
	if(var_352_bool != 0) {
		var_354_int = 0; var_355_object = Obj();
		var_49_object = var_355_object;
		TaskCall(4);
		func_730(var_356_object, var_354_int, var_355_object);
		TaskReturn();
		return 0;
	}
	var_419_bool = 0; var_420_int = 0;
	func_2843(var_419_bool, (int)11);
	if(var_419_bool != 0) {
		var_421_int = 0; var_422_object = Obj();
		var_49_object = var_422_object;
		TaskCall(6);
		func_1197(var_423_object, var_421_int, var_422_object);
		TaskReturn();
		return 0;
	}
	var_490_bool = 0; var_491_int = 0;
	func_2843(var_490_bool, (int)12);
	if(var_490_bool != 0) {
		var_492_int = 0; var_493_object = Obj();
		var_49_object = var_493_object;
		TaskCall(8);
		func_1588(var_494_object, var_492_int, var_493_object);
		TaskReturn();
		return 0;
	}
	var_551_int = 0; var_552_object = Obj();
	var_49_object = var_552_object;
	TaskCall(10);
	func_1934(var_553_object, var_551_int, var_552_object);
	TaskReturn();
	return 0;
}


func_2073(var_2_object, var_582_string)
{
	var_583_bool = 0;
	func_2881(var_583_bool);
	var_584_bool = var_583_bool == 0; //@nz
	if(var_584_bool != 0) {
		return 0;
	}
	var_585_bool = var_582_string == var_2_object;
	if(var_585_bool != 0) {
		return 0;
	}
	var_586_string = ""; var_587_bool = 0;
	var_582_string = var_586_string;
	var_589_bool = var_582_string == "";
	if(var_589_bool != 0) {
		var_587_bool = 0;
	} else {
		var_587_bool = 1;
	}
	func_2703(var_586_string, var_587_bool);
	var_2_object = var_582_string;
	return 0;
	
}


func_3098(var_462_bool)
{
	var_464_int = 0; var_465_string = "";
	func_2767(var_464_int, "ook11Julia1");
	var_467_bool = var_464_int == (int)0;
	if(var_467_bool != 0) {
		var_462_bool = 1;
		return 0;
	}
	var_462_bool = 0;
	return 0;
}


func_2843(var_278_bool, var_279_int)
{
	var_280_int = 0;
	func_2834(var_280_int);
	var_278_bool = var_280_int == var_279_int;
	return 0;
}


func_2849(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = "";
	var_60_int = var_57_int;
	if(var_60_int != 0) {
		"idle" = "idle" + var_57_int;
	}
	var_59_string = var_56_string;
	return 2;
}


func_3110(var_330_bool)
{
	var_332_int = 0; var_333_string = "";
	func_2767(var_332_int, "ook3Julia1");
	var_335_bool = var_332_int == (int)0;
	if(var_335_bool != 0) {
		var_330_bool = 1;
		return 0;
	}
	var_330_bool = 0;
	return 0;
}


func_2856(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_53_int = 0;
	
Label_2858:
	var_56_string = ""; var_57_int = 0;
	var_53_int = var_57_int;
	func_2849(var_56_string, var_57_int);
	HasAnimation(var_54_bool, "all", var_56_string);
	var_61_bool = var_54_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_53_int = var_53_int + (int)1;
		goto Label_2858;
	}
	var_53_int = var_50_int;
	return 4;
	
}


func_811(var_0_object, var_1_object, var_2_object, var_3_string, var_378_object, var_379_object)
{
	var_0_object = var_379_object;
	var_1_object = var_378_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_385_string = "";
		func_879(var_379_object, "Hope");
		@@@var_0_object:SetMessage((int)526045);
		@@@var_0_object:ClearReplies();
		var_394_bool = 0; var_395_object = Obj();
		var_395_object = var_1_object;
		func_3074(var_395_object);
		if(var_394_bool != 0) {
			@@@var_0_object:AddReply((int)526046, (int)27332, (int)27331);
		}
		@@@var_0_object:AddReply((int)526063, (int)-1, (int)27348);
		@@@var_0_object:AddReply((int)528877, (int)-1, (int)30300);
		goto Label_849;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x32f";
	}
Label_849:
	var_409_bool = 0;
	func_2881(var_409_bool);
	if(var_409_bool != 0) {

	Label_853:
		lshWaitForAnimEnd();
		var_410_string = var_3_string;
		if(var_410_string != 0) {
		} else {
			var_411_string = "";
			var_411_string = var_2_object;
			func_2687(var_411_string);
			goto Label_853;
	}
		PlayAnimation("all", "idle");

	Label_868:
		WaitForAnimEnd();
		var_414_string = var_3_string;
		if(var_414_string != 0) {
			goto Label_878;
		}
		PlayAnimation("all", "idle");
		goto Label_868;
	}
	goto Label_878;
	
Label_878:
	return 0;
	
}


func_2607(var_135_bool, var_136_object)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = "";
	var_142_string = "c";
	var_143_int = 0;
	
Label_2610:
	if((int)1 != 0) {
		var_149_int = var_143_int + (int)1;
		var_150_int = var_142_string + var_149_int;
		@@var_136_object:HasProperty(var_150_int, var_144_bool);
		var_151_bool = var_144_bool == 0; //@nz
		if(var_151_bool != 0) {
		} else {
			var_143_int = var_143_int + (int)1;
			goto Label_2610;
		}
	}
	var_152_bool = var_143_int == 0; //@nz
	if(var_152_bool != 0) {
		var_135_bool = 0;
		return 10;
	}
	var_145_int = 0;
	var_154_bool = var_143_int > (int)1;
	if(var_154_bool != 0) {
		irand(var_145_int, var_143_int);
	}
	var_156_int = var_145_int + (int)1;
	var_157_int = var_142_string + var_156_int;
	@@var_136_object:GetProperty(var_157_int, var_146_string);
	var_158_bool = 0; var_159_string = "";
	var_146_string = var_159_string;
	func_2718(var_158_bool, var_159_string);
	var_158_bool = var_135_bool;
	return 10;
	
}


func_3122()
{
	var_117_object = Obj(); var_118_object = Obj();
	CreateDiaryEntry(var_118_object, (int)498, (int)1, (int)528065);
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0;
	var_118_object = var_123_object;
	func_3252(var_122_bool, var_123_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1588(var_0_object, var_492_int, var_493_object)
{
	var_495_object = Obj(); var_496_bool = 0; var_497_int = 0; var_498_bool = 0; var_499_object = Obj(); var_500_bool = 0; var_501_int = 0; var_502_bool = 0;
	var_0_object = var_493_object;
	var_503_bool = 0; var_504_object = Obj(); var_505_float = 0;
	var_493_object = var_504_object;
	func_2462(var_503_bool, var_504_object, (float)70.0);
	var_506_bool = var_503_bool == 0; //@nz
	if(var_506_bool != 0) {
		var_492_int = -2;
		return 8;
	}
	CreateDialog(var_499_object);
	var_507_int = 0;
	func_2875(var_507_int);
	@@var_499_object:SetNPCName(var_507_int);
	var_508_int = 0;
	func_2873(var_508_int);
	@@var_499_object:SetNPCDescription(var_508_int);
	var_509_string = "";
	func_2877(var_509_string);
	@@var_499_object:SetPhoto(var_509_string);
	var_510_string = "";
	func_2879(var_510_string);
	@@var_499_object:SetPhoto2(var_510_string);
	var_511_int = 0;
	func_3330(var_511_int);
	@@var_499_object:SetPlayerName(var_511_int);
	IsOverrideActive(var_500_bool);
	var_512_bool = var_500_bool;
	if(var_512_bool != 0) {
		var_492_int = -2;
		return 8;
	}
	DoDialog(var_499_object);
	var_513_bool = 0; var_514_object = Obj();
	func_2740(Obj());
	var_515_object = var_514_object;
	func_2549(var_513_bool, var_514_object);
	var_516_object = Obj(); var_517_object = Obj();
	var_493_object = var_516_object;
	var_499_object = var_517_object;
	TaskCall(9);
	func_1669(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object);
	TaskReturn();
	@@var_499_object:IsDialogEnd(var_502_bool);
	
Label_1651:
	var_549_bool = var_502_bool == 0; //@nz
	if(var_549_bool != 0) {
		sync();
		@@var_499_object:IsDialogEnd(var_502_bool);
		goto Label_1651;
	}
	var_493_object = Obj();
	func_2531();
	StopDialog(var_499_object);
	@@var_499_object:GetReturnValue((int)-1);
	var_501_int = var_492_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2873(var_112_int)
{
	var_112_int = 515537;
	return 0;
}


func_2875(var_111_int)
{
	var_111_int = 502862;
	return 0;
}


func_2877(var_113_string)
{
	var_113_string = "ui/NPC_Julia.png";
	return 0;
}


func_3135()
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateDiaryEntry(var_108_object, (int)497, (int)1, (int)528064);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_108_object = var_113_object;
	func_3252(var_112_bool, var_113_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2879(var_114_string)
{
	var_114_string = "ui/NPC_Julia_b.png";
	return 0;
}


func_2881(var_106_bool)
{
	var_106_bool = 1;
	return 0;
}


func_2883()
{
	var_45_object = Obj(); var_46_object = Obj();
	SetVariable("k3q02", (int)2);
	func_3280(Obj());
	var_49_object = var_46_object;
	var_60_float = 0;
	func_2829(var_60_float);
	@@var_46_object:AddMark("k3q02JuliaGotoEva", "pt_map_eva", (int)0, (int)525573, var_60_float);
	func_3213();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1350(var_2_object, var_452_string)
{
	var_453_bool = 0;
	func_2881(var_453_bool);
	var_454_bool = var_453_bool == 0; //@nz
	if(var_454_bool != 0) {
		return 0;
	}
	var_455_bool = var_452_string == var_2_object;
	if(var_455_bool != 0) {
		return 0;
	}
	var_456_string = ""; var_457_bool = 0;
	var_452_string = var_456_string;
	var_459_bool = var_452_string == "";
	if(var_459_bool != 0) {
		var_457_bool = 0;
	} else {
		var_457_bool = 1;
	}
	func_2703(var_456_string, var_457_bool);
	var_2_object = var_452_string;
	return 0;
	
}


func_330(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_312_string = "";
		func_402(var_306_object, "Neutral");
		@@@var_0_object:SetMessage((int)525534);
		@@@var_0_object:ClearReplies();
		var_321_bool = 0;
		var_321_bool = 0;
		var_322_bool = 0; var_323_object = Obj();
		var_323_object = var_1_object;
		func_3062(var_323_object);
		if(var_322_bool != 0) {
			var_330_bool = 0; var_331_object = Obj();
			var_331_object = var_1_object;
			func_3110(var_331_object);
			if(var_330_bool != 0) {
				var_321_bool = 1;
			}
		}
		if(var_321_bool != 0) {
			@@@var_0_object:AddReply((int)525541, (int)42712, (int)26897);
		}
		@@@var_0_object:AddReply((int)525546, (int)-1, (int)26902);
		goto Label_372;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14e";
	}
Label_372:
	var_342_bool = 0;
	func_2881(var_342_bool);
	if(var_342_bool != 0) {

	Label_376:
		lshWaitForAnimEnd();
		var_343_string = var_3_string;
		if(var_343_string != 0) {
		} else {
			var_344_string = "";
			var_344_string = var_2_object;
			func_2687(var_344_string);
			goto Label_376;
	}
		PlayAnimation("all", "idle");

	Label_391:
		WaitForAnimEnd();
		var_347_string = var_3_string;
		if(var_347_string != 0) {
			goto Label_401;
		}
		PlayAnimation("all", "idle");
		goto Label_391;
	}
	goto Label_401;
	
Label_401:
	return 0;
	
}


func_3148()
{
	var_97_object = Obj(); var_98_object = Obj();
	CreateDiaryEntry(var_98_object, (int)496, (int)1, (int)528063);
	var_102_bool = 0; var_103_object = Obj(); var_104_int = 0;
	var_98_object = var_103_object;
	func_3252(var_102_bool, var_103_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_226_string = "";
		func_139(var_220_object, "Neutral");
		@@@var_0_object:SetMessage((int)525486);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525487, (int)30760, (int)26843);
		@@@var_0_object:AddReply((int)540677, (int)-1, (int)42710);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_250_bool = 0;
	func_2881(var_250_bool);
	if(var_250_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
		} else {
			var_252_string = "";
			var_252_string = var_2_object;
			func_2687(var_252_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_265_string = var_3_string;
		if(var_265_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_2644(var_166_bool, var_167_object)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = "";
	var_179_int = 0;
	func_2834(var_179_int);
	var_185_int = "d" + var_179_int;
	var_173_string = var_185_int + "m";
	var_174_int = 0;
	
Label_2653:
	if((int)1 != 0) {
		var_189_int = var_174_int + (int)1;
		var_190_int = var_173_string + var_189_int;
		@@var_167_object:HasProperty(var_190_int, var_175_bool);
		var_191_bool = var_175_bool == 0; //@nz
		if(var_191_bool != 0) {
		} else {
			var_174_int = var_174_int + (int)1;
			goto Label_2653;
		}
	}
	var_192_bool = var_174_int == 0; //@nz
	if(var_192_bool != 0) {
		var_166_bool = 0;
		return 10;
	}
	var_176_int = 0;
	var_194_bool = var_174_int > (int)1;
	if(var_194_bool != 0) {
		irand(var_176_int, var_174_int);
	}
	var_196_int = var_176_int + (int)1;
	var_197_int = var_173_string + var_196_int;
	@@var_167_object:GetProperty(var_197_int, var_177_string);
	var_198_bool = 0; var_199_string = "";
	var_177_string = var_199_string;
	func_2718(var_198_bool, var_199_string);
	var_198_bool = var_166_bool;
	return 10;
	
}


func_2389(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_2391()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3161()
{
	var_87_object = Obj(); var_88_object = Obj();
	CreateDiaryEntry(var_88_object, (int)495, (int)1, (int)528062);
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0;
	var_88_object = var_93_object;
	func_3252(var_92_bool, var_93_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2906()
{
	var_45_object = Obj(); var_46_object = Obj();
	SetVariable("k6q01", (int)2);
	func_3280(Obj());
	var_49_object = var_46_object;
	var_60_float = 0;
	func_2829(var_60_float);
	@@var_46_object:AddMark("k6q01IfAnna", "pt_map_anna", (int)1, (int)541591, var_60_float);
	var_67_float = 0;
	func_2829(var_67_float);
	@@var_46_object:AddMark("k6q01IfEva", "pt_map_eva", (int)1, (int)541594, var_67_float);
	var_72_float = 0;
	func_2829(var_72_float);
	@@var_46_object:AddMark("k6q01IfLara", "pt_map_lara", (int)1, (int)541592, var_72_float);
	var_77_float = 0;
	func_2829(var_77_float);
	@@var_46_object:AddMark("k6q01IfOspina", "pt_map_ospina", (int)1, (int)541593, var_77_float);
	func_3226();
	var_101_bool = 0; var_102_string = ""; var_103_string = "";
	func_2817(var_101_bool, "quest_k6_01", "place_danko");
	return 2;
}
EMIT "Stack[-1] = 0";


func_2396(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_2144(var_0_object)
{
	var_32_bool = 0;
	func_2457(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2153:
	func_2320();
	goto Label_2153;
}
EMIT "Return(); Pop(0)";


func_2404(var_121_bool, var_122_object, var_123_string)
{
	var_124_bool = 0; var_125_bool = 0;
	var_128_bool = IsFuncExist(var_122_object, "HasProperty", (int)2);
	var_129_bool = var_128_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_121_bool = 0;
		return 2;
	}
	@@var_122_object:HasProperty(var_123_string, var_125_bool);
	var_125_bool = var_121_bool;
	return 2;
}


func_3174()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)494, (int)1, (int)528061);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_3252(var_82_bool, var_83_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2158(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj();
	FindActor(var_58_object, "player");
	var_60_bool = var_58_object == 0; //@nz
	if(var_60_bool != 0) {
		var_56_bool = 0;
		return 2;
	}
	var_61_bool = 0; var_62_object = Obj();
	var_58_object = var_62_object;
	func_2448(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_879(var_2_object, var_385_string)
{
	var_386_bool = 0;
	func_2881(var_386_bool);
	var_387_bool = var_386_bool == 0; //@nz
	if(var_387_bool != 0) {
		return 0;
	}
	var_388_bool = var_385_string == var_2_object;
	if(var_388_bool != 0) {
		return 0;
	}
	var_389_string = ""; var_390_bool = 0;
	var_385_string = var_389_string;
	var_392_bool = var_385_string == "";
	if(var_392_bool != 0) {
		var_390_bool = 0;
	} else {
		var_390_bool = 1;
	}
	func_2703(var_389_string, var_390_bool);
	var_2_object = var_385_string;
	return 0;
	
}


func_2416(var_113_bool, var_114_object, var_115_string, var_116_float, var_117_float, var_118_float)
{
	var_119_float = 0; var_120_float = 0;
	var_121_bool = 0; var_122_object = Obj(); var_123_string = "";
	var_114_object = var_122_object;
	var_115_string = var_123_string;
	func_2404(var_121_bool, var_122_object, var_123_string);
	var_130_bool = var_121_bool == 0; //@nz
	if(var_130_bool != 0) {
		var_113_bool = 0;
		return 2;
	}
	@@var_114_object:GetProperty(var_115_string, var_120_float);
	var_131_float = 0; var_132_float = 0; var_133_float = 0; var_134_float = 0;
	var_132_float = var_120_float + var_116_float;
	var_117_float = var_133_float;
	var_118_float = var_134_float;
	func_2756(var_131_float, var_132_float, var_133_float, var_134_float);
	@@var_114_object:SetProperty(var_115_string, var_131_float);
	var_113_bool = 1;
	return 2;
}


func_3187()
{
	var_52_object = Obj(); var_53_object = Obj();
	CreateDiaryEntry(var_53_object, (int)493, (int)1, (int)528060);
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0;
	var_53_object = var_58_object;
	func_3252(var_57_bool, var_58_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2173(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_2687(var_252_string)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0;
	lshHasAnimation(var_256_bool, var_252_string);
	var_259_bool = var_256_bool;
	if(var_259_bool != 0) {
		lshGetAnimTimes(var_252_string, var_257_float, var_258_float);
		lshPlayAnimation(var_257_float, var_258_float, (bool)0);
	} else {
		var_262_int = "Can't find lsh animation : " + var_252_string;
		Trace(var_262_int);
	}
	return 6;
	
}


func_3200()
{
	var_144_object = Obj(); var_145_object = Obj();
	CreateDiaryEntry(var_145_object, (int)782, (int)2, (int)542095);
	var_149_bool = 0; var_150_object = Obj(); var_151_int = 0;
	var_145_object = var_150_object;
	func_3252(var_149_bool, var_150_object, (int)344);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2178(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0;
	FindActor(var_42_object, "player");
	var_45_bool = var_42_object == 0; //@nz
	if(var_45_bool != 0) {
		var_39_bool = 0;
		return 4;
	}
	var_46_float = 0; var_47_object = Obj();
	var_42_object = var_47_object;
	func_2396(var_46_float, var_47_object);
	var_55_bool = var_46_float > (float)90000.0;
	if(var_55_bool != 0) {
		var_39_bool = 0;
		return 4;
	}
	CanSee(var_43_bool, var_42_object);
	var_43_bool = var_39_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1669(var_0_object, var_1_object, var_2_object, var_3_string, var_516_object, var_517_object)
{
	var_0_object = var_517_object;
	var_1_object = var_516_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_523_string = "";
		func_1732(var_517_object, "Neutral");
		@@@var_0_object:SetMessage((int)539300);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)542585, (int)44986, (int)44985);
		@@@var_0_object:AddReply((int)539301, (int)-1, (int)41244);
		@@@var_0_object:AddReply((int)542584, (int)-1, (int)44984);
		goto Label_1702;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x689";
	}
Label_1702:
	var_541_bool = 0;
	func_2881(var_541_bool);
	if(var_541_bool != 0) {

	Label_1706:
		lshWaitForAnimEnd();
		var_542_string = var_3_string;
		if(var_542_string != 0) {
		} else {
			var_543_string = "";
			var_543_string = var_2_object;
			func_2687(var_543_string);
			goto Label_1706;
	}
		PlayAnimation("all", "idle");

	Label_1721:
		WaitForAnimEnd();
		var_546_string = var_3_string;
		if(var_546_string != 0) {
			goto Label_1731;
		}
		PlayAnimation("all", "idle");
		goto Label_1721;
	}
	goto Label_1731;
	
Label_1731:
	return 0;
	
}


func_2438(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0;
	GetPosition(var_44_cvector);
	var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
	return 6;
}


func_139(var_2_object, var_226_string)
{
	var_227_bool = 0;
	func_2881(var_227_bool);
	var_228_bool = var_227_bool == 0; //@nz
	if(var_228_bool != 0) {
		return 0;
	}
	var_229_bool = var_226_string == var_2_object;
	if(var_229_bool != 0) {
		return 0;
	}
	var_230_string = ""; var_231_bool = 0;
	var_226_string = var_230_string;
	var_233_bool = var_226_string == "";
	if(var_233_bool != 0) {
		var_231_bool = 0;
	} else {
		var_231_bool = 1;
	}
	func_2703(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	return 0;
	
}


func_3213()
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateDiaryEntry(var_64_object, (int)346, (int)2, (int)525568);
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0;
	var_64_object = var_69_object;
	func_3252(var_68_bool, var_69_object, (int)344);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1934(var_0_object, var_551_int, var_552_object)
{
	var_554_object = Obj(); var_555_bool = 0; var_556_int = 0; var_557_bool = 0; var_558_object = Obj(); var_559_bool = 0; var_560_int = 0; var_561_bool = 0;
	var_0_object = var_552_object;
	var_562_bool = 0; var_563_object = Obj(); var_564_float = 0;
	var_552_object = var_563_object;
	func_2462(var_562_bool, var_563_object, (float)70.0);
	var_565_bool = var_562_bool == 0; //@nz
	if(var_565_bool != 0) {
		var_551_int = -2;
		return 8;
	}
	CreateDialog(var_558_object);
	var_566_int = 0;
	func_2875(var_566_int);
	@@var_558_object:SetNPCName(var_566_int);
	var_567_int = 0;
	func_2873(var_567_int);
	@@var_558_object:SetNPCDescription(var_567_int);
	var_568_string = "";
	func_2877(var_568_string);
	@@var_558_object:SetPhoto(var_568_string);
	var_569_string = "";
	func_2879(var_569_string);
	@@var_558_object:SetPhoto2(var_569_string);
	var_570_int = 0;
	func_3330(var_570_int);
	@@var_558_object:SetPlayerName(var_570_int);
	IsOverrideActive(var_559_bool);
	var_571_bool = var_559_bool;
	if(var_571_bool != 0) {
		var_551_int = -2;
		return 8;
	}
	DoDialog(var_558_object);
	var_572_bool = 0; var_573_object = Obj();
	func_2740(Obj());
	var_574_object = var_573_object;
	func_2549(var_572_bool, var_573_object);
	var_575_object = Obj(); var_576_object = Obj();
	var_552_object = var_575_object;
	var_558_object = var_576_object;
	TaskCall(11);
	func_2015(var_577_object, var_578_object, var_579_string, var_580_bool, var_575_object, var_576_object);
	TaskReturn();
	@@var_558_object:IsDialogEnd(var_561_bool);
	
Label_1997:
	var_605_bool = var_561_bool == 0; //@nz
	if(var_605_bool != 0) {
		sync();
		@@var_558_object:IsDialogEnd(var_561_bool);
		goto Label_1997;
	}
	var_552_object = Obj();
	func_2531();
	StopDialog(var_558_object);
	@@var_558_object:GetReturnValue((int)-1);
	var_560_int = var_551_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2703(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0;
	lshHasAnimation(var_237_bool, var_230_string);
	var_240_bool = var_237_bool;
	if(var_240_bool != 0) {
		lshGetAnimTimes(var_230_string, var_238_float, var_239_float);
		lshPlayAnimation(var_238_float, var_239_float, var_231_bool);
	} else {
		var_242_int = "Can't find lsh animation : " + var_230_string;
		Trace(var_242_int);
	}
	return 6;
	
}


func_2448(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_2438(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_2961()
{
	var_45_int = 0; var_46_int = 0;
	GetVariable("k11q01SoulCount", var_46_int);
	var_46_int = var_46_int + (int)1;
	SetVariable("k11q01SoulCount", var_46_int);
	var_51_bool = var_46_int == (int)2;
	if(var_51_bool != 0) {
		func_3187();
	} else {
		var_76_bool = var_46_int == (int)3;
		if(var_76_bool != 0) {
			func_3174();
			goto Label_3011;
		}
		var_86_bool = var_46_int == (int)4;
		if(var_86_bool != 0) {
			func_3161();
			goto Label_3011;
		}
		var_96_bool = var_46_int == (int)5;
		if(var_96_bool != 0) {
			func_3148();
			goto Label_3011;
		}
		var_106_bool = var_46_int == (int)6;
		if(var_106_bool != 0) {
			func_3135();
			goto Label_3011;
		}
		var_116_bool = var_46_int == (int)7;
		if(var_116_bool == 0) goto Label_3011;
		func_3122();
	}
Label_3011:
	return 2;
	
}


func_402(var_2_object, var_312_string)
{
	var_313_bool = 0;
	func_2881(var_313_bool);
	var_314_bool = var_313_bool == 0; //@nz
	if(var_314_bool != 0) {
		return 0;
	}
	var_315_bool = var_312_string == var_2_object;
	if(var_315_bool != 0) {
		return 0;
	}
	var_316_string = ""; var_317_bool = 0;
	var_312_string = var_316_string;
	var_319_bool = var_312_string == "";
	if(var_319_bool != 0) {
		var_317_bool = 0;
	} else {
		var_317_bool = 1;
	}
	func_2703(var_316_string, var_317_bool);
	var_2_object = var_312_string;
	return 0;
	
}


func_2200()
{
	var_609_float = 0; var_610_float = 0;
	rand(var_610_float, (int)8, (int)16);
	SetTimer((int)10, var_610_float);
	return 2;
}


func_2457(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_3226()
{
	var_78_object = Obj(); var_79_object = Obj();
	CreateDiaryEntry(var_79_object, (int)411, (int)1, (int)526112);
	var_83_bool = 0; var_84_object = Obj(); var_85_int = 0;
	var_79_object = var_84_object;
	func_3252(var_83_bool, var_84_object, (int)408);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2718(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0;
	var_162_bool = 0;
	func_2881(var_162_bool);
	if(var_162_bool != 0) {
		lshHasSpeech(var_161_bool, var_159_string);
		var_163_bool = var_161_bool;
		if(var_163_bool != 0) {
			lshPlaySpeech(var_159_string);
			var_158_bool = 1;
			return 2;
		}
	}
	var_158_bool = 0;
	return 2;
}


func_2462(var_63_bool, var_64_object, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0;
	@@var_64_object:GetPosition(var_76_cvector);
	@@var_64_object:GetEyesHeight(var_75_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	var_84_float = var_84_float + var_75_float;
	SetByIndex(var_76_cvector, 1) = var_84_float;
	GetPosition(var_77_cvector);
	GetEyesHeight(var_75_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	var_85_float = var_85_float + var_75_float;
	SetByIndex(var_77_cvector, 1) = var_85_float;
	var_78_cvector = var_76_cvector - var_77_cvector;
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (float)0;
	var_87_int = var_78_cvector | var_78_cvector;
	var_88_float = sqrt(var_87_int);
	var_78_cvector = var_78_cvector / var_88_float;
	var_79_cvector = -var_78_cvector;
	var_89_float = var_78_cvector * var_65_float;
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0);
	var_91_cvector = var_79_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2746(var_90_cvector, var_91_cvector);
	var_99_float = var_90_cvector * (int)25;
	var_100_int = var_89_float + var_99_float;
	var_80_cvector = var_100_int - CVector(0.0, 10.0, 0.0);
	var_81_cvector = var_77_cvector + var_80_cvector;
	IsOverrideActive(var_82_bool);
	var_102_bool = var_82_bool;
	if(var_102_bool != 0) {
		var_63_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_81_cvector, var_79_cvector, (bool)1);
	var_104_float = GetByIndex(var_80_cvector, 0);
	var_105_float = GetByIndex(var_80_cvector, 2);
	Rotate(var_104_float, var_105_float);
	var_106_bool = 0;
	func_2881(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		HasAnimationTrack(var_83_bool, "head");
		var_108_bool = var_83_bool;
		if(var_108_bool == 0) goto Label_2525;
		LookAsyncCamera("head");
	}
Label_2525:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_63_bool = 1;
	return 18;
	
}


func_2209()
{
	KillTimer((int)10);
	return 0;
}


func_3239(var_66_object)
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


func_2733()
{
	var_34_bool = 0;
	func_2881(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1197(var_0_object, var_421_int, var_422_object)
{
	var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0; var_428_object = Obj(); var_429_bool = 0; var_430_int = 0; var_431_bool = 0;
	var_0_object = var_422_object;
	var_432_bool = 0; var_433_object = Obj(); var_434_float = 0;
	var_422_object = var_433_object;
	func_2462(var_432_bool, var_433_object, (float)70.0);
	var_435_bool = var_432_bool == 0; //@nz
	if(var_435_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	CreateDialog(var_428_object);
	var_436_int = 0;
	func_2875(var_436_int);
	@@var_428_object:SetNPCName(var_436_int);
	var_437_int = 0;
	func_2873(var_437_int);
	@@var_428_object:SetNPCDescription(var_437_int);
	var_438_string = "";
	func_2877(var_438_string);
	@@var_428_object:SetPhoto(var_438_string);
	var_439_string = "";
	func_2879(var_439_string);
	@@var_428_object:SetPhoto2(var_439_string);
	var_440_int = 0;
	func_3330(var_440_int);
	@@var_428_object:SetPlayerName(var_440_int);
	IsOverrideActive(var_429_bool);
	var_441_bool = var_429_bool;
	if(var_441_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	DoDialog(var_428_object);
	var_442_bool = 0; var_443_object = Obj();
	func_2740(Obj());
	var_444_object = var_443_object;
	func_2549(var_442_bool, var_443_object);
	var_445_object = Obj(); var_446_object = Obj();
	var_422_object = var_445_object;
	var_428_object = var_446_object;
	TaskCall(7);
	func_1278(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object);
	TaskReturn();
	@@var_428_object:IsDialogEnd(var_431_bool);
	
Label_1260:
	var_488_bool = var_431_bool == 0; //@nz
	if(var_488_bool != 0) {
		sync();
		@@var_428_object:IsDialogEnd(var_431_bool);
		goto Label_1260;
	}
	var_422_object = Obj();
	func_2531();
	StopDialog(var_428_object);
	@@var_428_object:GetReturnValue((int)-1);
	var_430_int = var_421_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2740(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj();
	self(var_128_object);
	var_128_object = var_126_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3252(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0;
	func_3239(Obj());
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


func_2746(var_90_cvector, var_91_cvector)
{
	var_93_float = 0; var_94_float = 0;
	var_95_int = var_91_cvector | var_91_cvector;
	var_94_float = sqrt(var_95_int);
	var_96_float = 9.999999974752427e-07;
	var_97_bool = var_94_float < var_96_float;
	if(var_97_bool != 0) {
		var_90_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_90_cvector = var_91_cvector / var_94_float;
	return 2;
}


func_1732(var_2_object, var_523_string)
{
	var_524_bool = 0;
	func_2881(var_524_bool);
	var_525_bool = var_524_bool == 0; //@nz
	if(var_525_bool != 0) {
		return 0;
	}
	var_526_bool = var_523_string == var_2_object;
	if(var_526_bool != 0) {
		return 0;
	}
	var_527_string = ""; var_528_bool = 0;
	var_523_string = var_527_string;
	var_530_bool = var_523_string == "";
	if(var_530_bool != 0) {
		var_528_bool = 0;
	} else {
		var_528_bool = 1;
	}
	func_2703(var_527_string, var_528_bool);
	var_2_object = var_523_string;
	return 0;
	
}


func_2756(var_131_float, var_132_float, var_133_float, var_134_float)
{
	var_135_bool = var_132_float < var_133_float;
	if(var_135_bool != 0) {
		var_133_float = var_131_float;
		return 0;
	}
	var_136_bool = var_132_float > var_134_float;
	if(var_136_bool != 0) {
		var_134_float = var_131_float;
		return 0;
	}
	var_132_float = var_131_float;
	return 0;
}


func_3012()
{
	SetVariable("ook11Julia1", (int)1);
	return 0;
}


func_3018()
{
	SetVariable("ook3Julia1", (int)1);
	return 0;
}


func_2767(var_324_int, var_325_string)
{
	var_326_int = 0; var_327_int = 0;
	GetVariable(var_325_string, var_327_int);
	var_327_int = var_324_int;
	return 2;
}


func_3280(var_49_object)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_object = Obj(); var_53_object = Obj();
	GetMainOutdoorScene(var_52_object);
	var_54_bool = var_52_object == 0; //@ne
	if(var_54_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_53_object = 0;
		var_53_object = var_49_object;
		return 4;
	}
	@@var_52_object:GetMap(var_53_object);
	var_53_object = var_49_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3024(var_108_object)
{
	var_109_object = Obj(); var_110_string = ""; var_111_float = 0;
	func_3280(Obj());
	var_112_object = var_109_object;
	func_3297(var_109_object, "pt_map_theater", (float)1);
	var_132_object = Obj();
	func_3280(var_132_object);
	@@var_108_object:ShowMap(var_132_object);
	return 0;
}


func_2772(var_102_bool, var_103_object, var_104_float)
{
	var_105_bool = var_103_object == 0; //@nz
	if(var_105_bool != 0) {
		var_102_bool = 0;
		return 0;
	}
	var_107_bool = var_104_float > (int)0;
	if(var_107_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_138_bool = var_104_float < (int)0;
		if(var_138_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2793;
		}
		var_102_bool = 0;
		return 0;
	}
Label_2793:
	var_109_float = 0;
	var_104_float = var_109_float;
	func_2807(var_109_float);
	var_113_bool = 0; var_114_object = Obj(); var_115_string = ""; var_116_float = 0; var_117_float = 0; var_118_float = 0;
	var_103_object = var_114_object;
	var_104_float = var_116_float;
	func_2416(var_113_bool, var_114_object, "reputation", var_116_float, (float)0, (float)1);
	var_102_bool = 1;
	return 0;
	
}


func_730(var_0_object, var_354_int, var_355_object)
{
	var_357_object = Obj(); var_358_bool = 0; var_359_int = 0; var_360_bool = 0; var_361_object = Obj(); var_362_bool = 0; var_363_int = 0; var_364_bool = 0;
	var_0_object = var_355_object;
	var_365_bool = 0; var_366_object = Obj(); var_367_float = 0;
	var_355_object = var_366_object;
	func_2462(var_365_bool, var_366_object, (float)70.0);
	var_368_bool = var_365_bool == 0; //@nz
	if(var_368_bool != 0) {
		var_354_int = -2;
		return 8;
	}
	CreateDialog(var_361_object);
	var_369_int = 0;
	func_2875(var_369_int);
	@@var_361_object:SetNPCName(var_369_int);
	var_370_int = 0;
	func_2873(var_370_int);
	@@var_361_object:SetNPCDescription(var_370_int);
	var_371_string = "";
	func_2877(var_371_string);
	@@var_361_object:SetPhoto(var_371_string);
	var_372_string = "";
	func_2879(var_372_string);
	@@var_361_object:SetPhoto2(var_372_string);
	var_373_int = 0;
	func_3330(var_373_int);
	@@var_361_object:SetPlayerName(var_373_int);
	IsOverrideActive(var_362_bool);
	var_374_bool = var_362_bool;
	if(var_374_bool != 0) {
		var_354_int = -2;
		return 8;
	}
	DoDialog(var_361_object);
	var_375_bool = 0; var_376_object = Obj();
	func_2740(Obj());
	var_377_object = var_376_object;
	func_2549(var_375_bool, var_376_object);
	var_378_object = Obj(); var_379_object = Obj();
	var_355_object = var_378_object;
	var_361_object = var_379_object;
	TaskCall(5);
	func_811(var_380_object, var_381_object, var_382_string, var_383_bool, var_378_object, var_379_object);
	TaskReturn();
	@@var_361_object:IsDialogEnd(var_364_bool);
	
Label_793:
	var_417_bool = var_364_bool == 0; //@nz
	if(var_417_bool != 0) {
		sync();
		@@var_361_object:IsDialogEnd(var_364_bool);
		goto Label_793;
	}
	var_355_object = Obj();
	func_2531();
	StopDialog(var_361_object);
	@@var_361_object:GetReturnValue((int)-1);
	var_363_int = var_354_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2015(var_0_object, var_1_object, var_2_object, var_3_string, var_575_object, var_576_object)
{
	var_0_object = var_576_object;
	var_1_object = var_575_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_582_string = "";
		func_2073(var_576_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_2043;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7e3";
	}
Label_2043:
	var_597_bool = 0;
	func_2881(var_597_bool);
	if(var_597_bool != 0) {

	Label_2047:
		lshWaitForAnimEnd();
		var_598_string = var_3_string;
		if(var_598_string != 0) {
		} else {
			var_599_string = "";
			var_599_string = var_2_object;
			func_2687(var_599_string);
			goto Label_2047;
	}
		PlayAnimation("all", "idle");

	Label_2062:
		WaitForAnimEnd();
		var_602_string = var_3_string;
		if(var_602_string != 0) {
			goto Label_2072;
		}
		PlayAnimation("all", "idle");
		goto Label_2062;
	}
	goto Label_2072;
	
Label_2072:
	return 0;
	
}


func_3040()
{
	SetVariable("k3q02", (int)-1);
	func_3200();
	return 0;
}


func_3297(var_109_object, var_110_string, var_111_float)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_object = Obj(); var_116_bool = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_object = Obj(); var_120_bool = 0;
	GetMainOutdoorScene(var_119_object);
	var_121_bool = var_119_object == 0; //@ne
	if(var_121_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_119_object:GetLocator(var_110_string, var_120_bool, var_117_cvector, var_118_cvector);
	var_123_bool = var_120_bool == 0; //@nz
	if(var_123_bool != 0) {
		var_125_int = "Warning: outdoor scene locator " + var_110_string;
		var_127_int = var_125_int + " doesnt exist";
		Trace(var_127_int);
	}
	@@var_119_object:GetMap(var_109_object);
	var_128_bool = var_109_object == 0; //@ne
	if(var_128_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_130_float = GetByIndex(var_117_cvector, 0);
	var_131_float = GetByIndex(var_117_cvector, 2);
	@@var_109_object:SetMapParams(var_130_float, var_131_float, var_111_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2531()
{
	var_270_bool = 0; var_271_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_273_bool = 0;
	func_2881(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		HasAnimationTrack(var_271_bool, "head");
		var_275_bool = var_271_bool;
		if(var_275_bool == 0) goto Label_2548;
		UnlookAsync("head");
	}
Label_2548:
	return 2;
	
}


func_3049()
{
	SetVariable("k6StopKaterinaTalks", (int)1);
	return 0;
}


func_3055(var_100_object)
{
	var_102_bool = 0; var_103_object = Obj(); var_104_float = 0;
	var_100_object = var_103_object;
	func_2772(var_102_bool, var_103_object, (float)0.30000001192092896);
	return 0;
}


func_2549(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0;
	GetVariable("voice_common", var_131_int);
	var_134_int = var_131_int;
	if(var_134_int != 0) {
		var_135_bool = 0; var_136_object = Obj();
		var_125_object = var_136_object;
		func_2607(var_135_bool, var_136_object);
		var_165_bool = var_135_bool == 0; //@nz
		if(var_165_bool != 0) {
			var_166_bool = 0; var_167_object = Obj();
			var_125_object = var_167_object;
			func_2644(var_166_bool, var_167_object);
			var_201_bool = var_166_bool == 0; //@nz
			if(var_201_bool != 0) {
				var_124_bool = 0;
				return 4;
			}
		}
		irand(var_132_int, (int)2);
		var_203_int = var_132_int;
		if(var_203_int != 0) {
			var_206_int = var_131_int + (int)1;
			var_208_int = var_206_int % (int)3;
			SetVariable("voice_common", var_208_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_211_bool = 0; var_212_object = Obj();
		var_125_object = var_212_object;
		func_2644(var_211_bool, var_212_object);
		var_213_bool = var_211_bool == 0; //@nz
		if(var_213_bool != 0) {
			var_214_bool = 0; var_215_object = Obj();
			var_125_object = var_215_object;
			func_2607(var_214_bool, var_215_object);
			var_216_bool = var_214_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_124_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2605;
	
Label_2605:
	var_124_bool = 1;
	return 4;
	
}


func_3062(var_322_bool)
{
	var_324_int = 0; var_325_string = "";
	func_2767(var_324_int, "k3q02");
	var_329_bool = var_324_int == (int)1;
	if(var_329_bool != 0) {
		var_322_bool = 1;
		return 0;
	}
	var_322_bool = 0;
	return 0;
}


func_2807(var_109_float)
{
	var_110_object = Obj(); var_111_object = Obj();
	CreateFloatVector(var_111_object);
	@@var_111_object:add(var_109_float);
	SendWorldWndMessage((int)16, var_111_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_249(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0;
	var_0_object = var_282_object;
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0;
	var_282_object = var_293_object;
	func_2462(var_292_bool, var_293_object, (float)70.0);
	var_295_bool = var_292_bool == 0; //@nz
	if(var_295_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	CreateDialog(var_288_object);
	var_296_int = 0;
	func_2875(var_296_int);
	@@var_288_object:SetNPCName(var_296_int);
	var_297_int = 0;
	func_2873(var_297_int);
	@@var_288_object:SetNPCDescription(var_297_int);
	var_298_string = "";
	func_2877(var_298_string);
	@@var_288_object:SetPhoto(var_298_string);
	var_299_string = "";
	func_2879(var_299_string);
	@@var_288_object:SetPhoto2(var_299_string);
	var_300_int = 0;
	func_3330(var_300_int);
	@@var_288_object:SetPlayerName(var_300_int);
	IsOverrideActive(var_289_bool);
	var_301_bool = var_289_bool;
	if(var_301_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	DoDialog(var_288_object);
	var_302_bool = 0; var_303_object = Obj();
	func_2740(Obj());
	var_304_object = var_303_object;
	func_2549(var_302_bool, var_303_object);
	var_305_object = Obj(); var_306_object = Obj();
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(3);
	func_330(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	@@var_288_object:IsDialogEnd(var_291_bool);
	
Label_312:
	var_350_bool = var_291_bool == 0; //@nz
	if(var_350_bool != 0) {
		sync();
		@@var_288_object:IsDialogEnd(var_291_bool);
		goto Label_312;
	}
	var_282_object = Obj();
	func_2531();
	StopDialog(var_288_object);
	@@var_288_object:GetReturnValue((int)-1);
	var_290_int = var_281_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1278(var_0_object, var_1_object, var_2_object, var_3_string, var_445_object, var_446_object)
{
	var_0_object = var_446_object;
	var_1_object = var_445_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_452_string = "";
		func_1350(var_446_object, "Neutral");
		@@@var_0_object:SetMessage((int)527568);
		@@@var_0_object:ClearReplies();
		var_461_bool = 0;
		var_461_bool = 0;
		var_462_bool = 0; var_463_object = Obj();
		var_463_object = var_1_object;
		func_3098(var_463_object);
		if(var_462_bool != 0) {
			var_468_bool = 0; var_469_object = Obj();
			var_469_object = var_1_object;
			func_3086(var_469_object);
			if(var_468_bool != 0) {
				var_461_bool = 1;
			}
		}
		if(var_461_bool != 0) {
			@@@var_0_object:AddReply((int)527570, (int)28913, (int)28912);
		}
		@@@var_0_object:AddReply((int)527569, (int)-1, (int)28911);
		goto Label_1320;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x502";
	}
Label_1320:
	var_480_bool = 0;
	func_2881(var_480_bool);
	if(var_480_bool != 0) {

	Label_1324:
		lshWaitForAnimEnd();
		var_481_string = var_3_string;
		if(var_481_string != 0) {
		} else {
			var_482_string = "";
			var_482_string = var_2_object;
			func_2687(var_482_string);
			goto Label_1324;
	}
		PlayAnimation("all", "idle");

	Label_1339:
		WaitForAnimEnd();
		var_485_string = var_3_string;
		if(var_485_string != 0) {
			goto Label_1349;
		}
		PlayAnimation("all", "idle");
		goto Label_1339;
	}
	goto Label_1349;
	
Label_1349:
	return 0;
	
}


