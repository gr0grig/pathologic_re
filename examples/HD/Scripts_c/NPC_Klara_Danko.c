// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Menace|W:Smile|W:Untrust|W:Sorrow|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|W:reputation|W:ui/NPC_Bakalavr.png|W:ui/NPC_Bakalavr_b.png|W:ook6Danko1|W:quest_k6_01|W:teleport|W:completed|W:ook7Danko1|W:money1000 is given|W:playsound|W:givemoney|W:k12q01DankoInSobor|W:k12q01_Danko|W:ook12Danko1|W:k5q04|W:k5q04_bring_water|W:k12DankoVisit|W:game_final|W:k7q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:vol_|A:size|A:get|W:mt_danko
// @GLOBALS: 0:object:
// @RUN_OP: 0x8b6
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1b8 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x339 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4a7 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x72f vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x88c vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0x8ff vars=int
// @EVENT_6: op=0x925 vars=
// @EVENT_5: op=0x934 vars=
// @EVENT_45: op=0x941 vars=bool
// @EVENT_0: op=0x94d vars=object
// @PE: 0x51,0x8b,0xa1,0x14a,0x1a2,0x1b8,0x2c7,0x323,0x339,0x40c,0x491,0x4a7,0x6d5,0x719,0x72f,0x83c,0x876,0x88c,0x8b6,0x8ff,0x925,0x941,0xb25,0xb54,0xb96,0xbbe,0xbc4,0xbcb,0xbd5,0xbdb,0xbe5,0xbeb,0xbf4,0xc04,0xc0a,0xc10,0xc1c,0xc22,0xc29,0xc35,0xc3f,0xc4b,0xc57,0xc63,0xc6f,0xc7b,0xc87,0xcfb

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2830();
		var_36_bool = var_31_bool == (int)26830;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525475, (int)27554, (int)26831);
			@@@var_0_object:AddReply((int)526277, (int)27557, (int)27553);
			return 0;
		}
		var_62_bool = var_31_bool == (int)27554;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526279, (int)27557, (int)27555);
			@@@var_0_object:AddReply((int)526280, (int)27557, (int)27556);
			return 0;
		}
		var_72_bool = var_31_bool == (int)27557;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526282, (int)-1, (int)27560);
			@@@var_0_object:AddReply((int)526283, (int)-1, (int)27561);
			return 0;
		}
		var_3_string = true;
		var_81_bool = 0;
		func_3004(var_81_bool);
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
		func_2830();
		var_36_bool = var_32_cvector == (int)27393;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3012();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_3019();
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_3106(var_74_object);
		}
		var_114_bool = var_32_cvector == (int)27390;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_3012();
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_3019();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_3106(var_120_object);
		}
		var_122_bool = var_31_bool == (int)27383;
		if(var_122_bool != 0) {
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_3135(var_124_object);
			if(var_123_bool != 0) {
				var_131_object = Obj(); var_132_object = Obj();
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_3006();
				var_135_string = "";
				func_418(var_32_cvector, "Menace");
				@@@var_0_object:SetMessage((int)526097);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526098, (int)27386, (int)27384);
				@@@var_0_object:AddReply((int)526099, (int)27386, (int)27385);
				return 0;
			}
			var_159_string = "";
			func_418(var_32_cvector, "Menace");
			@@@var_0_object:SetMessage((int)526107);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526108, (int)-1, (int)27395);
			@@@var_0_object:AddReply((int)528917, (int)-1, (int)30347);
			return 0;
		}
		var_168_bool = var_31_bool == (int)27386;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_418(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)526100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526101, (int)27388, (int)27387);
			@@@var_0_object:AddReply((int)541281, (int)43414, (int)43413);
			return 0;
		}
		var_178_bool = var_31_bool == (int)43414;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_418(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)541282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541283, (int)27392, (int)43415);
			return 0;
		}
		var_185_bool = var_31_bool == (int)27388;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_418(var_32_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)526102);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526103, (int)27392, (int)27389);
			@@@var_0_object:AddReply((int)526104, (int)-1, (int)27390);
			return 0;
		}
		var_195_bool = var_31_bool == (int)27392;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_418(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)526105);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526106, (int)-1, (int)27393);
			return 0;
		}
		var_3_string = true;
		var_201_bool = 0;
		func_3004(var_201_bool);
		if(var_201_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1b9";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2830();
		var_36_bool = var_32_cvector == (int)27398;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3035(var_38_object);
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_3045();
		}
		var_63_bool = var_31_bool == (int)27397;
		if(var_63_bool != 0) {
			var_64_bool = 0;
			var_64_bool = 0;
			var_65_bool = 0; var_66_object = Obj();
			var_66_object = var_1_object;
			func_3147(var_66_object);
			if(var_65_bool != 0) {
				var_73_bool = 0; var_74_object = Obj();
				var_74_object = var_1_object;
				func_3159(var_74_object);
				if(var_73_bool != 0) {
					var_64_bool = 1;
				}
			}
			if(var_64_bool != 0) {
				var_79_object = Obj(); var_80_object = Obj();
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_3029();
				var_83_string = "";
				func_803(var_32_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526118);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528252, (int)29614, (int)29613);
				@@@var_0_object:AddReply((int)528256, (int)29614, (int)29617);
				return 0;
			}
			var_107_string = "";
			func_803(var_32_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)526120);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526121, (int)-1, (int)27400);
			return 0;
		}
		var_113_bool = var_31_bool == (int)29614;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_803(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)528253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528254, (int)29616, (int)29615);
			@@@var_0_object:AddReply((int)528257, (int)29616, (int)29619);
			return 0;
		}
		var_123_bool = var_31_bool == (int)29616;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_803(var_32_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)528255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526119, (int)-1, (int)27398);
			return 0;
		}
		var_3_string = true;
		var_129_bool = 0;
		func_3004(var_129_bool);
		if(var_129_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x33a";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2830();
		var_36_bool = var_32_cvector == (int)41290;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3060();
		}
		var_71_bool = var_32_cvector == (int)41293;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_3051();
		}
		var_85_bool = var_32_cvector == (int)41300;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_3051();
		}
		var_89_bool = var_31_bool == (int)41283;
		if(var_89_bool != 0) {
			var_90_bool = 0;
			var_90_bool = 0;
			var_91_bool = 0; var_92_object = Obj();
			var_92_object = var_1_object;
			func_3113(var_92_object);
			var_97_bool = var_91_bool == 0; //@nz
			if(var_97_bool != 0) {
				var_98_bool = 0; var_99_object = Obj();
				var_99_object = var_1_object;
				func_3183(var_99_object);
				if(var_98_bool != 0) {
					var_90_bool = 1;
				}
			}
			if(var_90_bool != 0) {
				var_104_object = Obj(); var_105_object = Obj();
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_3076();
				var_108_object = Obj(); var_109_object = Obj();
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_3100();
				var_112_string = "";
				func_1169(var_32_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)539339);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539340, (int)43548, (int)41284);
				@@@var_0_object:AddReply((int)542972, (int)45416, (int)45415);
				return 0;
			}
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_3100();
			var_138_string = "";
			func_1169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539352);
			@@@var_0_object:ClearReplies();
			var_140_bool = 0;
			var_140_bool = 0;
			var_141_bool = 0;
			var_141_bool = 0;
			var_142_bool = 0; var_143_object = Obj();
			var_143_object = var_1_object;
			func_3171(var_143_object);
			var_148_bool = var_142_bool == 0; //@nz
			if(var_148_bool != 0) {
				var_149_bool = 0; var_150_object = Obj();
				var_150_object = var_1_object;
				func_3125(var_149_bool, var_150_object);
				if(var_149_bool != 0) {
					var_141_bool = 1;
				}
			}
			if(var_141_bool != 0) {
				var_198_bool = 0; var_199_object = Obj();
				var_199_object = var_1_object;
				func_3113(var_199_object);
				var_200_bool = var_198_bool == 0; //@nz
				if(var_200_bool != 0) {
					var_140_bool = 1;
				}
			}
			if(var_140_bool != 0) {
				@@@var_0_object:AddReply((int)539353, (int)43589, (int)41298);
			}
			@@@var_0_object:AddReply((int)539356, (int)-1, (int)41301);
			return 0;
		}
		var_208_bool = var_31_bool == (int)43589;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_1169(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)541433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539355, (int)-1, (int)41300);
			return 0;
		}
		var_215_bool = var_31_bool == (int)45416;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_1169(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)542973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542974, (int)43548, (int)45417);
			return 0;
		}
		var_222_bool = var_31_bool == (int)43548;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_1169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541394);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541395, (int)43550, (int)43549);
			return 0;
		}
		var_229_bool = var_31_bool == (int)43550;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_1169(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)541396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541397, (int)43552, (int)43551);
			@@@var_0_object:AddReply((int)542975, (int)43554, (int)45419);
			return 0;
		}
		var_239_bool = var_31_bool == (int)43552;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_1169(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)541398);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541399, (int)45421, (int)43553);
			return 0;
		}
		var_246_bool = var_31_bool == (int)45421;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_1169(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)542976);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542977, (int)45423, (int)45422);
			@@@var_0_object:AddReply((int)542984, (int)45428, (int)45429);
			return 0;
		}
		var_256_bool = var_31_bool == (int)45423;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_1169(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)542978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542979, (int)45428, (int)45424);
			return 0;
		}
		var_263_bool = var_31_bool == (int)45428;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_1169(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)542983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542980, (int)45426, (int)45425);
			@@@var_0_object:AddReply((int)542985, (int)-1, (int)45431);
			return 0;
		}
		var_273_bool = var_31_bool == (int)45426;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_1169(var_32_cvector, "Menace");
			@@@var_0_object:SetMessage((int)542981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542982, (int)45435, (int)45427);
			@@@var_0_object:AddReply((int)542986, (int)45433, (int)45432);
			return 0;
		}
		var_283_bool = var_31_bool == (int)45433;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_1169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542987);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542988, (int)45438, (int)45434);
			return 0;
		}
		var_290_bool = var_31_bool == (int)45438;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_1169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542992);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542993, (int)43554, (int)45439);
			@@@var_0_object:AddReply((int)542994, (int)-1, (int)45441);
			return 0;
		}
		var_300_bool = var_31_bool == (int)43554;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_1169(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)541400);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541401, (int)41289, (int)43555);
			return 0;
		}
		var_307_bool = var_31_bool == (int)41289;
		if(var_307_bool != 0) {
			var_308_bool = 0; var_309_object = Obj();
			var_309_object = var_1_object;
			func_3125(var_308_bool, var_309_object);
			var_310_bool = var_308_bool == 0; //@nz
			if(var_310_bool != 0) {
				var_311_string = "";
				func_1169(var_32_cvector, "Untrust");
				@@@var_0_object:SetMessage((int)539345);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541431, (int)43558, (int)43587);
				@@@var_0_object:AddReply((int)541406, (int)-1, (int)43560);
				return 0;
			}
			var_319_bool = 0; var_320_object = Obj();
			var_320_object = var_1_object;
			func_3125(var_319_bool, var_320_object);
			if(var_319_bool != 0) {
				var_321_string = "";
				func_1169(var_32_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)539348);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539349, (int)-1, (int)41293);
				@@@var_0_object:AddReply((int)539350, (int)-1, (int)41294);
				return 0;
			}
		}
		var_330_bool = var_31_bool == (int)43558;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_1169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539346, (int)-1, (int)41290);
			return 0;
		}
		var_337_bool = var_31_bool == (int)45435;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_1169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542989);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542990, (int)43554, (int)45436);
			@@@var_0_object:AddReply((int)542991, (int)-1, (int)45437);
			return 0;
		}
		var_3_string = true;
		var_346_bool = 0;
		func_3004(var_346_bool);
		if(var_346_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4a8";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2830();
		var_36_bool = var_32_cvector == (int)41369;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3082();
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_3088();
		}
		var_73_bool = var_32_cvector == (int)42820;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_3082();
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_3088();
		}
		var_79_bool = var_31_bool == (int)41366;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_1817(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539435);
			@@@var_0_object:ClearReplies();
			var_98_bool = 0; var_99_object = Obj();
			var_99_object = var_1_object;
			func_3195(var_99_object);
			if(var_98_bool != 0) {
				@@@var_0_object:AddReply((int)539436, (int)42812, (int)41367);
			}
			@@@var_0_object:AddReply((int)539439, (int)-1, (int)41370);
			@@@var_0_object:AddReply((int)540767, (int)-1, (int)42811);
			return 0;
		}
		var_114_bool = var_31_bool == (int)42812;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_1817(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)540768);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540769, (int)42814, (int)42813);
			@@@var_0_object:AddReply((int)540772, (int)42817, (int)42816);
			return 0;
		}
		var_124_bool = var_31_bool == (int)42817;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_1817(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540774, (int)41368, (int)42818);
			return 0;
		}
		var_131_bool = var_31_bool == (int)42814;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_1817(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)540770);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540771, (int)42823, (int)42815);
			@@@var_0_object:AddReply((int)540776, (int)41368, (int)42821);
			return 0;
		}
		var_141_bool = var_31_bool == (int)42823;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_1817(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)540777);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540778, (int)41368, (int)42824);
			@@@var_0_object:AddReply((int)540779, (int)-1, (int)42825);
			return 0;
		}
		var_151_bool = var_31_bool == (int)41368;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_1817(var_32_cvector, "Menace");
			@@@var_0_object:SetMessage((int)539437);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539438, (int)-1, (int)41369);
			@@@var_0_object:AddReply((int)540775, (int)-1, (int)42820);
			return 0;
		}
		var_3_string = true;
		var_160_bool = 0;
		func_3004(var_160_bool);
		if(var_160_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x730";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_2830();
		var_36_bool = var_31_int == (int)42554;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2166(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_3004(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x88d";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_2299();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_2554(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_2268(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_2248(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_2837(Obj());
				var_77_object = var_76_object;
				func_2704(var_75_bool, var_76_object);
			}
		} else {
			func_2263(var_31_int);
			func_2290();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2481();
	func_2299();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_2299();
	var_32_string = "";
	func_2784("Neutral");
	func_2290();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_2290();
	} else {
		var_38_string = "";
		func_2784("Neutral");
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
		func_2481();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_2545(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_3414(var_49_object);
		var_714_string = "";
		func_2784("Neutral");
		func_2299();
		func_2290();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2234(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	var_0_object = var_55_object;
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0;
	var_55_object = var_66_object;
	func_2559(var_65_bool, var_66_object, (float)70.0);
	var_112_bool = var_65_bool == 0; //@nz
	if(var_112_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	CreateDialog(var_61_object);
	var_113_int = 0;
	func_2998(var_113_int);
	@@var_61_object:SetNPCName(var_113_int);
	var_114_int = 0;
	func_2996(var_114_int);
	@@var_61_object:SetNPCDescription(var_114_int);
	var_115_string = "";
	func_3000(var_115_string);
	@@var_61_object:SetPhoto(var_115_string);
	var_116_string = "";
	func_3002(var_116_string);
	@@var_61_object:SetPhoto2(var_116_string);
	var_117_int = 0;
	func_3306(var_117_int);
	@@var_61_object:SetPlayerName(var_117_int);
	IsOverrideActive(var_62_bool);
	var_125_bool = var_62_bool;
	if(var_125_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	DoDialog(var_61_object);
	var_126_bool = 0; var_127_object = Obj();
	func_2837(Obj());
	var_128_object = var_127_object;
	func_2646(var_126_bool, var_127_object);
	var_221_object = Obj(); var_222_object = Obj();
	var_55_object = var_221_object;
	var_61_object = var_222_object;
	TaskCall(1);
	func_81(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object);
	TaskReturn();
	@@var_61_object:IsDialogEnd(var_64_bool);
	
Label_63:
	var_270_bool = var_64_bool == 0; //@nz
	if(var_270_bool != 0) {
		sync();
		@@var_61_object:IsDialogEnd(var_64_bool);
		goto Label_63;
	}
	var_55_object = Obj();
	func_2628();
	StopDialog(var_61_object);
	@@var_61_object:GetReturnValue((int)-1);
	var_63_int = var_54_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3076()
{
	SetVariable("ook12Danko1", (int)1);
	return 0;
}


func_3082()
{
	SetVariable("k5q04", (int)3);
	return 0;
}


func_1036(var_0_object, var_1_object, var_2_object, var_3_string, var_533_object, var_534_object)
{
	var_0_object = var_534_object;
	var_1_object = var_533_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_540_bool = 0;
		var_540_bool = 0;
		var_541_bool = 0; var_542_object = Obj();
		var_542_object = var_1_object;
		func_3113(var_542_object);
		var_547_bool = var_541_bool == 0; //@nz
		if(var_547_bool != 0) {
			var_548_bool = 0; var_549_object = Obj();
			var_549_object = var_1_object;
			func_3183(var_549_object);
			if(var_548_bool != 0) {
				var_540_bool = 1;
			}
		}
		if(var_540_bool != 0) {
			var_554_object = Obj(); var_555_object = Obj();
			var_554_object = var_1_object;
			var_555_object = var_0_object;
			func_3076();
			var_558_object = Obj(); var_559_object = Obj();
			var_558_object = var_1_object;
			var_559_object = var_0_object;
			func_3100();
			var_562_string = "";
			func_1169(var_534_object, "Neutral");
			@@@var_0_object:SetMessage((int)539339);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539340, (int)43548, (int)41284);
			@@@var_0_object:AddReply((int)542972, (int)45416, (int)45415);
		} else {
				var_585_object = Obj(); var_586_object = Obj();
				var_585_object = var_1_object;
				var_586_object = var_0_object;
				func_3100();
				var_587_string = "";
				func_1169(var_534_object, "Neutral");
				@@@var_0_object:SetMessage((int)539352);
				@@@var_0_object:ClearReplies();
				var_589_bool = 0;
				var_589_bool = 0;
				var_590_bool = 0;
				var_590_bool = 0;
				var_591_bool = 0; var_592_object = Obj();
				var_592_object = var_1_object;
				func_3171(var_592_object);
				var_597_bool = var_591_bool == 0; //@nz
				if(var_597_bool != 0) {
					var_598_bool = 0; var_599_object = Obj();
					var_599_object = var_1_object;
					func_3125(var_598_bool, var_599_object);
					if(var_598_bool != 0) {
						var_590_bool = 1;
					}
				}
				if(var_590_bool != 0) {
					var_647_bool = 0; var_648_object = Obj();
					var_648_object = var_1_object;
					func_3113(var_648_object);
					var_649_bool = var_647_bool == 0; //@nz
					if(var_649_bool != 0) {
						var_589_bool = 1;
					}
				}
				if(var_589_bool != 0) {
					@@@var_0_object:AddReply((int)539353, (int)43589, (int)41298);
				}
				@@@var_0_object:AddReply((int)539356, (int)-1, (int)41301);
				goto Label_1139;
		}
	}
Label_1139:
	var_577_bool = 0;
	func_3004(var_577_bool);
	if(var_577_bool != 0) {

	Label_1143:
		lshWaitForAnimEnd();
		var_578_string = var_3_string;
		if(var_578_string != 0) {
		} else {
			var_579_string = "";
			var_579_string = var_2_object;
			func_2784(var_579_string);
			goto Label_1143;
	}
		PlayAnimation("all", "idle");

	Label_1158:
		WaitForAnimEnd();
		var_582_string = var_3_string;
		if(var_582_string != 0) {
			goto Label_1168;
		}
		PlayAnimation("all", "idle");
		goto Label_1158;

	}
	goto Label_1168;
	
Label_1168:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x410";


func_2830()
{
	var_34_bool = 0;
	func_3004(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3088()
{
	var_43_int = 0; var_44_string = "";
	func_2864(var_43_int, "k5q04_bring_water");
	var_48_bool = var_43_int == (int)0;
	if(var_48_bool != 0) {
		func_3239();
	}
	return 0;
}


func_2837(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj();
	self(var_130_object);
	var_130_object = var_128_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1817(var_2_object, var_315_string)
{
	var_316_bool = 0;
	func_3004(var_316_bool);
	var_317_bool = var_316_bool == 0; //@nz
	if(var_317_bool != 0) {
		return 0;
	}
	var_318_bool = var_315_string == var_2_object;
	if(var_318_bool != 0) {
		return 0;
	}
	var_319_string = ""; var_320_bool = 0;
	var_315_string = var_319_string;
	var_322_bool = var_315_string == "";
	if(var_322_bool != 0) {
		var_320_bool = 0;
	} else {
		var_320_bool = 1;
	}
	func_2800(var_319_string, var_320_bool);
	var_2_object = var_315_string;
	return 0;
	
}


func_2843(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0;
	var_97_int = var_93_cvector | var_93_cvector;
	var_96_float = sqrt(var_97_int);
	var_98_float = 9.999999974752427e-07;
	var_99_bool = var_96_float < var_98_float;
	if(var_99_bool != 0) {
		var_92_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_92_cvector = var_93_cvector / var_96_float;
	return 2;
}


func_3100()
{
	SetVariable("k12DankoVisit", (int)1);
	return 0;
}


func_3356(var_637_bool, var_638_int)
{
	var_639_int = 0; var_640_int = 0;
	var_642_int = "vol_" + var_638_int;
	GetVariable(var_642_int, var_640_int);
	var_644_int = var_640_int & (int)4;
	var_637_bool = var_644_int != (int)0;
	return 2;
}


func_3106(var_73_object)
{
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0;
	var_73_object = var_76_object;
	func_2900(var_75_bool, var_76_object, (float)0.30000001192092896);
	return 0;
}


func_803(var_2_object, var_477_string)
{
	var_478_bool = 0;
	func_3004(var_478_bool);
	var_479_bool = var_478_bool == 0; //@nz
	if(var_479_bool != 0) {
		return 0;
	}
	var_480_bool = var_477_string == var_2_object;
	if(var_480_bool != 0) {
		return 0;
	}
	var_481_string = ""; var_482_bool = 0;
	var_477_string = var_481_string;
	var_484_bool = var_477_string == "";
	if(var_484_bool != 0) {
		var_482_bool = 0;
	} else {
		var_482_bool = 1;
	}
	func_2800(var_481_string, var_482_bool);
	var_2_object = var_477_string;
	return 0;
	
}


func_2853(var_104_float, var_105_float, var_106_float, var_107_float)
{
	var_108_bool = var_105_float < var_106_float;
	if(var_108_bool != 0) {
		var_106_float = var_104_float;
		return 0;
	}
	var_109_bool = var_105_float > var_107_float;
	if(var_109_bool != 0) {
		var_107_float = var_104_float;
		return 0;
	}
	var_105_float = var_104_float;
	return 0;
}


func_3366(var_628_bool, var_629_int)
{
	var_630_int = 0; var_631_int = 0;
	var_633_int = "vol_" + var_629_int;
	GetVariable(var_633_int, var_631_int);
	var_635_int = var_631_int & (int)16;
	var_628_bool = var_635_int != (int)0;
	return 2;
}


func_3113(var_541_bool)
{
	var_543_int = 0; var_544_string = "";
	func_2864(var_543_int, "game_final");
	var_546_bool = var_543_int != (int)0;
	if(var_546_bool != 0) {
		var_541_bool = 1;
		return 0;
	}
	var_541_bool = 0;
	return 0;
}


func_2864(var_326_int, var_327_string)
{
	var_328_int = 0; var_329_int = 0;
	GetVariable(var_327_string, var_329_int);
	var_329_int = var_326_int;
	return 2;
}


func_3376(var_602_bool)
{
	var_603_object = Obj(); var_604_int = 0; var_605_int = 0; var_606_int = 0; var_607_object = Obj(); var_608_int = 0; var_609_int = 0; var_610_int = 0;
	CreateIntVector(var_607_object);
	var_611_object = Obj(); var_612_bool = 0; var_613_int = 0;
	var_607_object = var_611_object;
	func_3323(var_611_object, (bool)0, (int)-1);
	@@var_607_object:size(var_608_int);
	var_609_int = 0;
	
Label_3388:
	var_626_bool = var_609_int < var_608_int;
	if(var_626_bool != 0) {
		@@var_607_object:get(var_610_int, var_609_int);
		var_627_bool = 0;
		var_627_bool = 1;
		var_628_bool = 0; var_629_int = 0;
		var_610_int = var_629_int;
		func_3366(var_628_bool, var_629_int);
		if(var_628_bool != 1) {
			var_637_bool = 0; var_638_int = 0;
			var_610_int = var_638_int;
			func_3356(var_637_bool, var_638_int);
			if(var_637_bool != 1) {
				var_627_bool = 0;
			}
		}
		if(var_627_bool != 0) {
			var_602_bool = 0;
			var_609_int = var_609_int + (int)1;
			goto Label_3388;
		}
		return 8;
	}
	var_602_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3125(var_598_bool, var_599_object)
{
	var_600_bool = 0; var_601_object = Obj();
	var_599_object = var_601_object;
	func_3207(var_601_object);
	if(var_600_bool != 0) {
		var_598_bool = 1;
		return 0;
	}
	var_598_bool = 0;
	return 0;
}


func_2869(var_53_int, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj();
	CreateIntVector(var_56_object);
	@@var_56_object:add(var_53_int);
	@@var_56_object:add(var_54_int);
	SendWorldWndMessage((int)3, var_56_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2108(var_0_object, var_1_object, var_2_object, var_3_string, var_682_object, var_683_object)
{
	var_0_object = var_683_object;
	var_1_object = var_682_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_689_string = "";
		func_2166(var_683_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_2136;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x840";
	}
Label_2136:
	var_704_bool = 0;
	func_3004(var_704_bool);
	if(var_704_bool != 0) {

	Label_2140:
		lshWaitForAnimEnd();
		var_705_string = var_3_string;
		if(var_705_string != 0) {
		} else {
			var_706_string = "";
			var_706_string = var_2_object;
			func_2784(var_706_string);
			goto Label_2140;
	}
		PlayAnimation("all", "idle");

	Label_2155:
		WaitForAnimEnd();
		var_709_string = var_3_string;
		if(var_709_string != 0) {
			goto Label_2165;
		}
		PlayAnimation("all", "idle");
		goto Label_2155;
	}
	goto Label_2165;
	
Label_2165:
	return 0;
	
}


func_3135(var_384_bool)
{
	var_386_int = 0; var_387_string = "";
	func_2864(var_386_int, "ook6Danko1");
	var_389_bool = var_386_int == (int)0;
	if(var_389_bool != 0) {
		var_384_bool = 1;
		return 0;
	}
	var_384_bool = 0;
	return 0;
}


func_2881(var_40_object, var_41_int)
{
	var_42_int = 0; var_43_int = 0;
	var_44_object = Obj(); var_45_string = ""; var_46_int = 0;
	var_40_object = var_44_object;
	var_41_int = var_46_int;
	func_2528(var_44_object, "money", var_46_int);
	var_51_bool = var_41_int > (int)0;
	if(var_51_bool != 0) {
		GetInvItemByName(var_43_int, "Money");
		var_53_int = 0; var_54_int = 0;
		var_43_int = var_53_int;
		var_41_int = var_54_int;
		func_2869(var_53_int, var_54_int);
	}
	return 2;
}


func_2628()
{
	var_272_bool = 0; var_273_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_275_bool = 0;
	func_3004(var_275_bool);
	if(var_275_bool != 0) {
	} else {
		HasAnimationTrack(var_273_bool, "head");
		var_277_bool = var_273_bool;
		if(var_277_bool == 0) goto Label_2645;
		UnlookAsync("head");
	}
Label_2645:
	return 2;
	
}


func_330(var_0_object, var_1_object, var_2_object, var_3_string, var_377_object, var_378_object)
{
	var_0_object = var_378_object;
	var_1_object = var_377_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_384_bool = 0; var_385_object = Obj();
		var_385_object = var_1_object;
		func_3135(var_385_object);
		if(var_384_bool != 0) {
			var_390_object = Obj(); var_391_object = Obj();
			var_390_object = var_1_object;
			var_391_object = var_0_object;
			func_3006();
			var_394_string = "";
			func_418(var_378_object, "Menace");
			@@@var_0_object:SetMessage((int)526097);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526098, (int)27386, (int)27384);
			@@@var_0_object:AddReply((int)526099, (int)27386, (int)27385);
		} else {
				var_417_string = "";
				func_418(var_378_object, "Menace");
				@@@var_0_object:SetMessage((int)526107);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526108, (int)-1, (int)27395);
				@@@var_0_object:AddReply((int)528917, (int)-1, (int)30347);
				goto Label_388;
		}
	}
Label_388:
	var_409_bool = 0;
	func_3004(var_409_bool);
	if(var_409_bool != 0) {

	Label_392:
		lshWaitForAnimEnd();
		var_410_string = var_3_string;
		if(var_410_string != 0) {
		} else {
			var_411_string = "";
			var_411_string = var_2_object;
			func_2784(var_411_string);
			goto Label_392;
	}
		PlayAnimation("all", "idle");

	Label_407:
		WaitForAnimEnd();
		var_414_string = var_3_string;
		if(var_414_string != 0) {
			goto Label_417;
		}
		PlayAnimation("all", "idle");
		goto Label_407;

	}
	goto Label_417;
	
Label_417:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x14e";


func_3147(var_461_bool)
{
	var_463_int = 0; var_464_string = "";
	func_2864(var_463_int, "k7q01");
	var_466_bool = var_463_int == (int)0;
	if(var_466_bool != 0) {
		var_461_bool = 1;
		return 0;
	}
	var_461_bool = 0;
	return 0;
}


func_2559(var_65_bool, var_66_object, var_67_float)
{
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0;
	@@var_66_object:GetPosition(var_78_cvector);
	@@var_66_object:GetEyesHeight(var_77_float);
	var_86_float = GetByIndex(var_78_cvector, 1);
	var_86_float = var_86_float + var_77_float;
	SetByIndex(var_78_cvector, 1) = var_86_float;
	GetPosition(var_79_cvector);
	GetEyesHeight(var_77_float);
	var_87_float = GetByIndex(var_79_cvector, 1);
	var_87_float = var_87_float + var_77_float;
	SetByIndex(var_79_cvector, 1) = var_87_float;
	var_80_cvector = var_78_cvector - var_79_cvector;
	var_88_float = GetByIndex(var_80_cvector, 1);
	SetByIndex(var_80_cvector, 1) = (float)0;
	var_89_int = var_80_cvector | var_80_cvector;
	var_90_float = sqrt(var_89_int);
	var_80_cvector = var_80_cvector / var_90_float;
	var_81_cvector = -var_80_cvector;
	var_91_float = var_80_cvector * var_67_float;
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0);
	var_93_cvector = var_81_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2843(var_92_cvector, var_93_cvector);
	var_101_float = var_92_cvector * (int)25;
	var_102_int = var_91_float + var_101_float;
	var_82_cvector = var_102_int - CVector(0.0, 10.0, 0.0);
	var_83_cvector = var_79_cvector + var_82_cvector;
	IsOverrideActive(var_84_bool);
	var_104_bool = var_84_bool;
	if(var_104_bool != 0) {
		var_65_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_83_cvector, var_81_cvector, (bool)1);
	var_106_float = GetByIndex(var_82_cvector, 0);
	var_107_float = GetByIndex(var_82_cvector, 2);
	Rotate(var_106_float, var_107_float);
	var_108_bool = 0;
	func_3004(var_108_bool);
	if(var_108_bool != 0) {
	} else {
		HasAnimationTrack(var_85_bool, "head");
		var_110_bool = var_85_bool;
		if(var_110_bool == 0) goto Label_2622;
		LookAsyncCamera("head");
	}
Label_2622:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_65_bool = 1;
	return 18;
	
}


func_3323(var_611_object, var_612_bool, var_613_int)
{
	@@var_611_object:add((int)6);
	@@var_611_object:add((int)26);
	@@var_611_object:add((int)2);
	@@var_611_object:add((int)22);
	var_619_bool = var_612_bool == (bool)0;
	if(var_619_bool != 0) {
		@@var_611_object:add((int)15);
		@@var_611_object:add((int)5);
		@@var_611_object:add((int)16);
	} else {
		var_624_bool = var_613_int != (int)0;
		if(var_624_bool == 0) goto Label_3355;
		@@var_611_object:add((int)15);
	}
Label_3355:
	return 0;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_221_object, var_222_object)
{
	var_0_object = var_222_object;
	var_1_object = var_221_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_228_string = "";
		func_139(var_222_object, "Neutral");
		@@@var_0_object:SetMessage((int)525474);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525475, (int)27554, (int)26831);
		@@@var_0_object:AddReply((int)526277, (int)27557, (int)27553);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_252_bool = 0;
	func_3004(var_252_bool);
	if(var_252_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_253_string = var_3_string;
		if(var_253_string != 0) {
		} else {
			var_254_string = "";
			var_254_string = var_2_object;
			func_2784(var_254_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_267_string = var_3_string;
		if(var_267_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_2900(var_75_bool, var_76_object, var_77_float)
{
	var_78_bool = var_76_object == 0; //@nz
	if(var_78_bool != 0) {
		var_75_bool = 0;
		return 0;
	}
	var_80_bool = var_77_float > (int)0;
	if(var_80_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_111_bool = var_77_float < (int)0;
		if(var_111_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2921;
		}
		var_75_bool = 0;
		return 0;
	}
Label_2921:
	var_82_float = 0;
	var_77_float = var_82_float;
	func_2935(var_82_float);
	var_86_bool = 0; var_87_object = Obj(); var_88_string = ""; var_89_float = 0; var_90_float = 0; var_91_float = 0;
	var_76_object = var_87_object;
	var_77_float = var_89_float;
	func_2506(var_86_bool, var_87_object, "reputation", var_89_float, (float)0, (float)1);
	var_75_bool = 1;
	return 0;
	
}


func_2646(var_126_bool, var_127_object)
{
	var_131_int = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0;
	GetVariable("voice_common", var_133_int);
	var_136_int = var_133_int;
	if(var_136_int != 0) {
		var_137_bool = 0; var_138_object = Obj();
		var_127_object = var_138_object;
		func_2704(var_137_bool, var_138_object);
		var_167_bool = var_137_bool == 0; //@nz
		if(var_167_bool != 0) {
			var_168_bool = 0; var_169_object = Obj();
			var_127_object = var_169_object;
			func_2741(var_168_bool, var_169_object);
			var_203_bool = var_168_bool == 0; //@nz
			if(var_203_bool != 0) {
				var_126_bool = 0;
				return 4;
			}
		}
		irand(var_134_int, (int)2);
		var_205_int = var_134_int;
		if(var_205_int != 0) {
			var_208_int = var_133_int + (int)1;
			var_210_int = var_208_int % (int)3;
			SetVariable("voice_common", var_210_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_213_bool = 0; var_214_object = Obj();
		var_127_object = var_214_object;
		func_2741(var_213_bool, var_214_object);
		var_215_bool = var_213_bool == 0; //@nz
		if(var_215_bool != 0) {
			var_216_bool = 0; var_217_object = Obj();
			var_127_object = var_217_object;
			func_2704(var_216_bool, var_217_object);
			var_218_bool = var_216_bool == 0; //@nz
			if(var_218_bool != 0) {
				var_126_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2702;
	
Label_2702:
	var_126_bool = 1;
	return 4;
	
}


func_3159(var_467_bool)
{
	var_469_int = 0; var_470_string = "";
	func_2864(var_469_int, "ook7Danko1");
	var_472_bool = var_469_int == (int)0;
	if(var_472_bool != 0) {
		var_467_bool = 1;
		return 0;
	}
	var_467_bool = 0;
	return 0;
}


func_3414(var_49_object)
{
	var_50_int = 0; var_51_int = 0;
	GetVariable("mt_danko", var_51_int);
	var_53_bool = var_51_int == 0; //@nz
	if(var_53_bool != 0) {
		var_54_int = 0; var_55_object = Obj();
		var_49_object = var_55_object;
		TaskCall(0);
		func_0(var_56_object, var_54_int, var_55_object);
		TaskReturn();
		SetVariable("mt_danko", (int)1);
	}
	var_281_bool = 0; var_282_int = 0;
	func_2966(var_281_bool, (int)5);
	if(var_281_bool != 0) {
		var_284_int = 0; var_285_object = Obj();
		var_49_object = var_285_object;
		TaskCall(8);
		func_1668(var_286_object, var_284_int, var_285_object);
		TaskReturn();
		return 2;
	}
	var_351_bool = 0; var_352_int = 0;
	func_2966(var_351_bool, (int)6);
	if(var_351_bool != 0) {
		var_353_int = 0; var_354_object = Obj();
		var_49_object = var_354_object;
		TaskCall(2);
		func_249(var_355_object, var_353_int, var_354_object);
		TaskReturn();
		return 2;
	}
	var_427_bool = 0; var_428_int = 0;
	func_2966(var_427_bool, (int)7);
	if(var_427_bool != 0) {
		var_429_int = 0; var_430_object = Obj();
		var_49_object = var_430_object;
		TaskCall(4);
		func_630(var_431_object, var_429_int, var_430_object);
		TaskReturn();
		return 2;
	}
	var_507_bool = 0; var_508_int = 0;
	func_2966(var_507_bool, (int)12);
	if(var_507_bool != 0) {
		var_509_int = 0; var_510_object = Obj();
		var_49_object = var_510_object;
		TaskCall(6);
		func_955(var_511_object, var_509_int, var_510_object);
		TaskReturn();
		return 2;
	}
	var_658_int = 0; var_659_object = Obj();
	var_49_object = var_659_object;
	TaskCall(10);
	func_2027(var_660_object, var_658_int, var_659_object);
	TaskReturn();
	return 2;
}


func_3171(var_591_bool)
{
	var_593_int = 0; var_594_string = "";
	func_2864(var_593_int, "k12q01DankoInSobor");
	var_596_bool = var_593_int != (int)0;
	if(var_596_bool != 0) {
		var_591_bool = 1;
		return 0;
	}
	var_591_bool = 0;
	return 0;
}


func_2410()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0;
	WaitForAnimEnd();
	var_47_bool = 0;
	func_2554(var_47_bool);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 12;
	}
	func_2979((int)0);
	var_49_int = var_41_int;
	var_42_int = 0;
	
Label_2424:
	var_62_bool = 0;
	var_62_bool = 0;
	var_64_bool = var_42_int < (int)5;
	if(var_64_bool != 0) {
		var_65_bool = 0;
		func_2554(var_65_bool);
		if(var_65_bool != 0) {
			var_62_bool = 1;
		}
	}
	if(var_62_bool != 0) {
		var_66_bool = var_41_int == 0; //@nz
		if(var_66_bool != 0) {
			Sleep((int)3, var_43_bool);
			var_68_bool = var_43_bool == 0; //@nz
			if(var_68_bool != 0) {
			} else {
		} else {
				irand(var_44_int, var_41_int);
				irand(var_45_int, (int)5);
				var_74_bool = var_45_int != (int)0;
				if(var_74_bool != 0) {
					var_44_int = 0;
				}
				var_76_string = ""; var_77_int = 0;
				var_44_int = var_77_int;
				func_2972(var_76_string, var_77_int);
				PlayAnimation("all", var_76_string);
				WaitForAnimEnd(var_46_bool);
				var_78_bool = var_46_bool == 0; //@nz
				if(var_78_bool == 0) goto Label_2465;
				goto Label_2476;
		}
		Label_2465:
			var_69_bool = 0;
			func_2479(var_69_bool);
			var_70_bool = var_69_bool == 0; //@nz
			if(var_70_bool != 0) {
				goto Label_2476;
			}
			ResetAAS();
			var_42_int = var_42_int + (int)1;
			goto Label_2424;

		}
	}
Label_2476:
	ResetAAS();
	return 12;
	
}


func_3183(var_548_bool)
{
	var_550_int = 0; var_551_string = "";
	func_2864(var_550_int, "ook12Danko1");
	var_553_bool = var_550_int == (int)0;
	if(var_553_bool != 0) {
		var_548_bool = 1;
		return 0;
	}
	var_548_bool = 0;
	return 0;
}


func_2166(var_2_object, var_689_string)
{
	var_690_bool = 0;
	func_3004(var_690_bool);
	var_691_bool = var_690_bool == 0; //@nz
	if(var_691_bool != 0) {
		return 0;
	}
	var_692_bool = var_689_string == var_2_object;
	if(var_692_bool != 0) {
		return 0;
	}
	var_693_string = ""; var_694_bool = 0;
	var_689_string = var_693_string;
	var_696_bool = var_689_string == "";
	if(var_696_bool != 0) {
		var_694_bool = 0;
	} else {
		var_694_bool = 1;
	}
	func_2800(var_693_string, var_694_bool);
	var_2_object = var_689_string;
	return 0;
	
}


func_630(var_0_object, var_429_int, var_430_object)
{
	var_432_object = Obj(); var_433_bool = 0; var_434_int = 0; var_435_bool = 0; var_436_object = Obj(); var_437_bool = 0; var_438_int = 0; var_439_bool = 0;
	var_0_object = var_430_object;
	var_440_bool = 0; var_441_object = Obj(); var_442_float = 0;
	var_430_object = var_441_object;
	func_2559(var_440_bool, var_441_object, (float)70.0);
	var_443_bool = var_440_bool == 0; //@nz
	if(var_443_bool != 0) {
		var_429_int = -2;
		return 8;
	}
	CreateDialog(var_436_object);
	var_444_int = 0;
	func_2998(var_444_int);
	@@var_436_object:SetNPCName(var_444_int);
	var_445_int = 0;
	func_2996(var_445_int);
	@@var_436_object:SetNPCDescription(var_445_int);
	var_446_string = "";
	func_3000(var_446_string);
	@@var_436_object:SetPhoto(var_446_string);
	var_447_string = "";
	func_3002(var_447_string);
	@@var_436_object:SetPhoto2(var_447_string);
	var_448_int = 0;
	func_3306(var_448_int);
	@@var_436_object:SetPlayerName(var_448_int);
	IsOverrideActive(var_437_bool);
	var_449_bool = var_437_bool;
	if(var_449_bool != 0) {
		var_429_int = -2;
		return 8;
	}
	DoDialog(var_436_object);
	var_450_bool = 0; var_451_object = Obj();
	func_2837(Obj());
	var_452_object = var_451_object;
	func_2646(var_450_bool, var_451_object);
	var_453_object = Obj(); var_454_object = Obj();
	var_430_object = var_453_object;
	var_436_object = var_454_object;
	TaskCall(5);
	func_711(var_455_object, var_456_object, var_457_string, var_458_bool, var_453_object, var_454_object);
	TaskReturn();
	@@var_436_object:IsDialogEnd(var_439_bool);
	
Label_693:
	var_505_bool = var_439_bool == 0; //@nz
	if(var_505_bool != 0) {
		sync();
		@@var_436_object:IsDialogEnd(var_439_bool);
		goto Label_693;
	}
	var_430_object = Obj();
	func_2628();
	StopDialog(var_436_object);
	@@var_436_object:GetReturnValue((int)-1);
	var_438_int = var_429_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2935(var_82_float)
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateFloatVector(var_84_object);
	@@var_84_object:add(var_82_float);
	SendWorldWndMessage((int)16, var_84_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3195(var_324_bool)
{
	var_326_int = 0; var_327_string = "";
	func_2864(var_326_int, "k5q04");
	var_331_bool = var_326_int == (int)2;
	if(var_331_bool != 0) {
		var_324_bool = 1;
		return 0;
	}
	var_324_bool = 0;
	return 0;
}


func_2945(var_39_bool, var_40_string, var_41_string)
{
	var_42_object = Obj(); var_43_object = Obj();
	FindActor(var_43_object, var_40_string);
	var_44_bool = var_43_object == 0; //@ne
	if(var_44_bool != 0) {
		var_39_bool = 0;
		return 2;
	}
	Trigger(var_43_object, var_41_string);
	var_39_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1668(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0;
	var_0_object = var_285_object;
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0;
	var_285_object = var_296_object;
	func_2559(var_295_bool, var_296_object, (float)70.0);
	var_298_bool = var_295_bool == 0; //@nz
	if(var_298_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	CreateDialog(var_291_object);
	var_299_int = 0;
	func_2998(var_299_int);
	@@var_291_object:SetNPCName(var_299_int);
	var_300_int = 0;
	func_2996(var_300_int);
	@@var_291_object:SetNPCDescription(var_300_int);
	var_301_string = "";
	func_3000(var_301_string);
	@@var_291_object:SetPhoto(var_301_string);
	var_302_string = "";
	func_3002(var_302_string);
	@@var_291_object:SetPhoto2(var_302_string);
	var_303_int = 0;
	func_3306(var_303_int);
	@@var_291_object:SetPlayerName(var_303_int);
	IsOverrideActive(var_292_bool);
	var_304_bool = var_292_bool;
	if(var_304_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	DoDialog(var_291_object);
	var_305_bool = 0; var_306_object = Obj();
	func_2837(Obj());
	var_307_object = var_306_object;
	func_2646(var_305_bool, var_306_object);
	var_308_object = Obj(); var_309_object = Obj();
	var_285_object = var_308_object;
	var_291_object = var_309_object;
	TaskCall(9);
	func_1749(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	@@var_291_object:IsDialogEnd(var_294_bool);
	
Label_1731:
	var_349_bool = var_294_bool == 0; //@nz
	if(var_349_bool != 0) {
		sync();
		@@var_291_object:IsDialogEnd(var_294_bool);
		goto Label_1731;
	}
	var_285_object = Obj();
	func_2628();
	StopDialog(var_291_object);
	@@var_291_object:GetReturnValue((int)-1);
	var_293_int = var_284_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3207(var_600_bool)
{
	func_3376((bool)0);
	var_602_bool = var_600_bool;
	return 0;
}


func_139(var_2_object, var_228_string)
{
	var_229_bool = 0;
	func_3004(var_229_bool);
	var_230_bool = var_229_bool == 0; //@nz
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_bool = var_228_string == var_2_object;
	if(var_231_bool != 0) {
		return 0;
	}
	var_232_string = ""; var_233_bool = 0;
	var_228_string = var_232_string;
	var_235_bool = var_228_string == "";
	if(var_235_bool != 0) {
		var_233_bool = 0;
	} else {
		var_233_bool = 1;
	}
	func_2800(var_232_string, var_233_bool);
	var_2_object = var_228_string;
	return 0;
	
}


func_3213()
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateDiaryEntry(var_77_object, (int)730, (int)1, (int)539360);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_77_object = var_82_object;
	func_3278(var_81_bool, var_82_object, (int)729);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2957(var_181_int)
{
	var_182_float = 0; var_183_float = 0;
	GetGameTime(var_183_float);
	var_185_int = 0;
	var_185_int = var_183_float / (int)24;
	var_181_int = (int)1 + var_185_int;
	return 2;
}


func_2704(var_137_bool, var_138_object)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = "";
	var_144_string = "c";
	var_145_int = 0;
	
Label_2707:
	if((int)1 != 0) {
		var_151_int = var_145_int + (int)1;
		var_152_int = var_144_string + var_151_int;
		@@var_138_object:HasProperty(var_152_int, var_146_bool);
		var_153_bool = var_146_bool == 0; //@nz
		if(var_153_bool != 0) {
		} else {
			var_145_int = var_145_int + (int)1;
			goto Label_2707;
		}
	}
	var_154_bool = var_145_int == 0; //@nz
	if(var_154_bool != 0) {
		var_137_bool = 0;
		return 10;
	}
	var_147_int = 0;
	var_156_bool = var_145_int > (int)1;
	if(var_156_bool != 0) {
		irand(var_147_int, var_145_int);
	}
	var_158_int = var_147_int + (int)1;
	var_159_int = var_144_string + var_158_int;
	@@var_138_object:GetProperty(var_159_int, var_148_string);
	var_160_bool = 0; var_161_string = "";
	var_148_string = var_161_string;
	func_2815(var_160_bool, var_161_string);
	var_160_bool = var_137_bool;
	return 10;
	
}


func_1169(var_2_object, var_562_string)
{
	var_563_bool = 0;
	func_3004(var_563_bool);
	var_564_bool = var_563_bool == 0; //@nz
	if(var_564_bool != 0) {
		return 0;
	}
	var_565_bool = var_562_string == var_2_object;
	if(var_565_bool != 0) {
		return 0;
	}
	var_566_string = ""; var_567_bool = 0;
	var_562_string = var_566_string;
	var_569_bool = var_562_string == "";
	if(var_569_bool != 0) {
		var_567_bool = 0;
	} else {
		var_567_bool = 1;
	}
	func_2800(var_566_string, var_567_bool);
	var_2_object = var_562_string;
	return 0;
	
}


func_2966(var_281_bool, var_282_int)
{
	var_283_int = 0;
	func_2957(var_283_int);
	var_281_bool = var_283_int == var_282_int;
	return 0;
}


func_3226()
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateDiaryEntry(var_48_object, (int)736, (int)1, (int)539366);
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0;
	var_48_object = var_53_object;
	func_3278(var_52_bool, var_53_object, (int)729);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2972(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = "";
	var_59_int = var_56_int;
	if(var_59_int != 0) {
		"idle" = "idle" + var_56_int;
	}
	var_58_string = var_55_string;
	return 2;
}


func_418(var_2_object, var_394_string)
{
	var_395_bool = 0;
	func_3004(var_395_bool);
	var_396_bool = var_395_bool == 0; //@nz
	if(var_396_bool != 0) {
		return 0;
	}
	var_397_bool = var_394_string == var_2_object;
	if(var_397_bool != 0) {
		return 0;
	}
	var_398_string = ""; var_399_bool = 0;
	var_394_string = var_398_string;
	var_401_bool = var_394_string == "";
	if(var_401_bool != 0) {
		var_399_bool = 0;
	} else {
		var_399_bool = 1;
	}
	func_2800(var_398_string, var_399_bool);
	var_2_object = var_394_string;
	return 0;
	
}


func_2979(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_52_int = 0;
	
Label_2981:
	var_55_string = ""; var_56_int = 0;
	var_52_int = var_56_int;
	func_2972(var_55_string, var_56_int);
	HasAnimation(var_53_bool, "all", var_55_string);
	var_60_bool = var_53_bool == 0; //@nz
	if(var_60_bool != 0) {
	} else {
		var_52_int = var_52_int + (int)1;
		goto Label_2981;
	}
	var_52_int = var_49_int;
	return 4;
	
}


func_3239()
{
	var_49_object = Obj(); var_50_object = Obj();
	CreateDiaryEntry(var_50_object, (int)743, (int)2, (int)539460);
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0;
	var_50_object = var_55_object;
	func_3278(var_54_bool, var_55_object, (int)740);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2479(var_69_bool)
{
	var_69_bool = 1;
	return 0;
}


func_2481()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3252()
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateDiaryEntry(var_48_object, (int)415, (int)1, (int)526116);
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0;
	var_48_object = var_53_object;
	func_3278(var_52_bool, var_53_object, (int)408);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2741(var_168_bool, var_169_object)
{
	var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = "";
	var_181_int = 0;
	func_2957(var_181_int);
	var_187_int = "d" + var_181_int;
	var_175_string = var_187_int + "m";
	var_176_int = 0;
	
Label_2750:
	if((int)1 != 0) {
		var_191_int = var_176_int + (int)1;
		var_192_int = var_175_string + var_191_int;
		@@var_169_object:HasProperty(var_192_int, var_177_bool);
		var_193_bool = var_177_bool == 0; //@nz
		if(var_193_bool != 0) {
		} else {
			var_176_int = var_176_int + (int)1;
			goto Label_2750;
		}
	}
	var_194_bool = var_176_int == 0; //@nz
	if(var_194_bool != 0) {
		var_168_bool = 0;
		return 10;
	}
	var_178_int = 0;
	var_196_bool = var_176_int > (int)1;
	if(var_196_bool != 0) {
		irand(var_178_int, var_176_int);
	}
	var_198_int = var_178_int + (int)1;
	var_199_int = var_175_string + var_198_int;
	@@var_169_object:GetProperty(var_199_int, var_179_string);
	var_200_bool = 0; var_201_string = "";
	var_179_string = var_201_string;
	func_2815(var_200_bool, var_201_string);
	var_200_bool = var_168_bool;
	return 10;
	
}


func_2996(var_114_int)
{
	var_114_int = 515573;
	return 0;
}


func_2998(var_113_int)
{
	var_113_int = 504032;
	return 0;
}


func_2486(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_3000(var_115_string)
{
	var_115_string = "ui/NPC_Bakalavr.png";
	return 0;
}


func_2234(var_0_object)
{
	var_31_bool = 0;
	func_2554(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2243:
	func_2410();
	goto Label_2243;
}
EMIT "Return(); Pop(0)";


func_3002(var_116_string)
{
	var_116_string = "ui/NPC_Bakalavr_b.png";
	return 0;
}


func_955(var_0_object, var_509_int, var_510_object)
{
	var_512_object = Obj(); var_513_bool = 0; var_514_int = 0; var_515_bool = 0; var_516_object = Obj(); var_517_bool = 0; var_518_int = 0; var_519_bool = 0;
	var_0_object = var_510_object;
	var_520_bool = 0; var_521_object = Obj(); var_522_float = 0;
	var_510_object = var_521_object;
	func_2559(var_520_bool, var_521_object, (float)70.0);
	var_523_bool = var_520_bool == 0; //@nz
	if(var_523_bool != 0) {
		var_509_int = -2;
		return 8;
	}
	CreateDialog(var_516_object);
	var_524_int = 0;
	func_2998(var_524_int);
	@@var_516_object:SetNPCName(var_524_int);
	var_525_int = 0;
	func_2996(var_525_int);
	@@var_516_object:SetNPCDescription(var_525_int);
	var_526_string = "";
	func_3000(var_526_string);
	@@var_516_object:SetPhoto(var_526_string);
	var_527_string = "";
	func_3002(var_527_string);
	@@var_516_object:SetPhoto2(var_527_string);
	var_528_int = 0;
	func_3306(var_528_int);
	@@var_516_object:SetPlayerName(var_528_int);
	IsOverrideActive(var_517_bool);
	var_529_bool = var_517_bool;
	if(var_529_bool != 0) {
		var_509_int = -2;
		return 8;
	}
	DoDialog(var_516_object);
	var_530_bool = 0; var_531_object = Obj();
	func_2837(Obj());
	var_532_object = var_531_object;
	func_2646(var_530_bool, var_531_object);
	var_533_object = Obj(); var_534_object = Obj();
	var_510_object = var_533_object;
	var_516_object = var_534_object;
	TaskCall(7);
	func_1036(var_535_object, var_536_object, var_537_string, var_538_bool, var_533_object, var_534_object);
	TaskReturn();
	@@var_516_object:IsDialogEnd(var_519_bool);
	
Label_1018:
	var_656_bool = var_519_bool == 0; //@nz
	if(var_656_bool != 0) {
		sync();
		@@var_516_object:IsDialogEnd(var_519_bool);
		goto Label_1018;
	}
	var_510_object = Obj();
	func_2628();
	StopDialog(var_516_object);
	@@var_516_object:GetReturnValue((int)-1);
	var_518_int = var_509_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3004(var_108_bool)
{
	var_108_bool = 1;
	return 0;
}


func_3006()
{
	SetVariable("ook6Danko1", (int)1);
	return 0;
}


func_2494(var_94_bool, var_95_object, var_96_string)
{
	var_97_bool = 0; var_98_bool = 0;
	var_101_bool = IsFuncExist(var_95_object, "HasProperty", (int)2);
	var_102_bool = var_101_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_94_bool = 0;
		return 2;
	}
	@@var_95_object:HasProperty(var_96_string, var_98_bool);
	var_98_bool = var_94_bool;
	return 2;
}


func_3265(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj();
	GetDiaryRoot(var_65_object);
	var_66_bool = var_65_object == 0; //@nz
	if(var_66_bool != 0) {
		Trace("Can't retrieve diary root");
		var_63_object = 0;
		return 2;
	}
	var_65_object = var_63_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3012()
{
	var_39_bool = 0; var_40_string = ""; var_41_string = "";
	func_2945(var_39_bool, "quest_k6_01", "teleport");
	return 0;
}


func_711(var_0_object, var_1_object, var_2_object, var_3_string, var_453_object, var_454_object)
{
	var_0_object = var_454_object;
	var_1_object = var_453_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_460_bool = 0;
		var_460_bool = 0;
		var_461_bool = 0; var_462_object = Obj();
		var_462_object = var_1_object;
		func_3147(var_462_object);
		if(var_461_bool != 0) {
			var_467_bool = 0; var_468_object = Obj();
			var_468_object = var_1_object;
			func_3159(var_468_object);
			if(var_467_bool != 0) {
				var_460_bool = 1;
			}
		}
		if(var_460_bool != 0) {
			var_473_object = Obj(); var_474_object = Obj();
			var_473_object = var_1_object;
			var_474_object = var_0_object;
			func_3029();
			var_477_string = "";
			func_803(var_454_object, "Neutral");
			@@@var_0_object:SetMessage((int)526118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528252, (int)29614, (int)29613);
			@@@var_0_object:AddReply((int)528256, (int)29614, (int)29617);
		} else {
				var_500_string = "";
				func_803(var_454_object, "Sorrow");
				@@@var_0_object:SetMessage((int)526120);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526121, (int)-1, (int)27400);
				goto Label_773;
		}
	}
Label_773:
	var_492_bool = 0;
	func_3004(var_492_bool);
	if(var_492_bool != 0) {

	Label_777:
		lshWaitForAnimEnd();
		var_493_string = var_3_string;
		if(var_493_string != 0) {
		} else {
			var_494_string = "";
			var_494_string = var_2_object;
			func_2784(var_494_string);
			goto Label_777;
	}
		PlayAnimation("all", "idle");

	Label_792:
		WaitForAnimEnd();
		var_497_string = var_3_string;
		if(var_497_string != 0) {
			goto Label_802;
		}
		PlayAnimation("all", "idle");
		goto Label_792;

	}
	goto Label_802;
	
Label_802:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2cb";


func_2248(var_56_bool)
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
	func_2545(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2506(var_86_bool, var_87_object, var_88_string, var_89_float, var_90_float, var_91_float)
{
	var_92_float = 0; var_93_float = 0;
	var_94_bool = 0; var_95_object = Obj(); var_96_string = "";
	var_87_object = var_95_object;
	var_88_string = var_96_string;
	func_2494(var_94_bool, var_95_object, var_96_string);
	var_103_bool = var_94_bool == 0; //@nz
	if(var_103_bool != 0) {
		var_86_bool = 0;
		return 2;
	}
	@@var_87_object:GetProperty(var_88_string, var_93_float);
	var_104_float = 0; var_105_float = 0; var_106_float = 0; var_107_float = 0;
	var_105_float = var_93_float + var_89_float;
	var_90_float = var_106_float;
	var_91_float = var_107_float;
	func_2853(var_104_float, var_105_float, var_106_float, var_107_float);
	@@var_87_object:SetProperty(var_88_string, var_104_float);
	var_86_bool = 1;
	return 2;
}


func_3019()
{
	func_3252();
	var_70_bool = 0; var_71_string = ""; var_72_string = "";
	func_2945(var_70_bool, "quest_k6_01", "completed");
	return 0;
}


func_3278(var_54_bool, var_55_object, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0;
	func_3265(Obj());
	var_63_object = var_60_object;
	@@var_60_object:Find(var_56_int, var_61_object);
	var_68_bool = var_61_object == 0; //@nz
	if(var_68_bool != 0) {
		var_70_int = "Can't find diary parent with id: " + var_56_int;
		Trace(var_70_int);
		var_54_bool = 0;
		return 6;
	}
	@@var_61_object:AddChild(var_55_object);
	SendWorldWndMessage((int)7);
	@@var_55_object:GetCategory(var_62_int);
	SetDiarySection(var_62_int);
	var_54_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1749(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object;
	var_1_object = var_308_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_315_string = "";
		func_1817(var_309_object, "Neutral");
		@@@var_0_object:SetMessage((int)539435);
		@@@var_0_object:ClearReplies();
		var_324_bool = 0; var_325_object = Obj();
		var_325_object = var_1_object;
		func_3195(var_325_object);
		if(var_324_bool != 0) {
			@@@var_0_object:AddReply((int)539436, (int)42812, (int)41367);
		}
		@@@var_0_object:AddReply((int)539439, (int)-1, (int)41370);
		@@@var_0_object:AddReply((int)540767, (int)-1, (int)42811);
		goto Label_1787;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6d9";
	}
Label_1787:
	var_341_bool = 0;
	func_3004(var_341_bool);
	if(var_341_bool != 0) {

	Label_1791:
		lshWaitForAnimEnd();
		var_342_string = var_3_string;
		if(var_342_string != 0) {
		} else {
			var_343_string = "";
			var_343_string = var_2_object;
			func_2784(var_343_string);
			goto Label_1791;
	}
		PlayAnimation("all", "idle");

	Label_1806:
		WaitForAnimEnd();
		var_346_string = var_3_string;
		if(var_346_string != 0) {
			goto Label_1816;
		}
		PlayAnimation("all", "idle");
		goto Label_1806;
	}
	goto Label_1816;
	
Label_1816:
	return 0;
	
}


func_3029()
{
	SetVariable("ook7Danko1", (int)1);
	return 0;
}


func_2263(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_3035(var_37_object)
{
	Trace("money1000 is given");
	var_40_object = Obj(); var_41_int = 0;
	var_37_object = var_40_object;
	func_2881(var_40_object, (int)1000);
	return 0;
}


func_2268(var_39_bool)
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
	func_2486(var_46_float, var_47_object);
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


func_2784(var_254_string)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0;
	lshHasAnimation(var_258_bool, var_254_string);
	var_261_bool = var_258_bool;
	if(var_261_bool != 0) {
		lshGetAnimTimes(var_254_string, var_259_float, var_260_float);
		lshPlayAnimation(var_259_float, var_260_float, (bool)0);
	} else {
		var_264_int = "Can't find lsh animation : " + var_254_string;
		Trace(var_264_int);
	}
	return 6;
	
}


func_2528(var_44_object, var_45_string, var_46_int)
{
	var_47_int = 0; var_48_int = 0;
	@@var_44_object:GetProperty(var_45_string, var_48_int);
	var_49_int = var_48_int + var_46_int;
	@@var_44_object:SetProperty(var_45_string, var_49_int);
	return 2;
}


func_3045()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_2535(var_39_bool, var_40_cvector)
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


func_3306(var_117_int)
{
	var_118_int = 0; var_119_int = 0;
	GetVariable("branch", var_119_int);
	var_122_bool = var_119_int == (int)0;
	if(var_122_bool != 0) {
		var_117_int = 1;
		return 2;
	EMIT "GOTO 0xcf9";
	}
	var_124_bool = var_119_int == (int)1;
	if(var_124_bool != 0) {
		var_117_int = 2;
		return 2;
	}
	var_117_int = 3;
	return 2;
}


func_3051()
{
	SetVariable("k12q01DankoInSobor", (int)1);
	func_3213();
	return 0;
}


func_2027(var_0_object, var_658_int, var_659_object)
{
	var_661_object = Obj(); var_662_bool = 0; var_663_int = 0; var_664_bool = 0; var_665_object = Obj(); var_666_bool = 0; var_667_int = 0; var_668_bool = 0;
	var_0_object = var_659_object;
	var_669_bool = 0; var_670_object = Obj(); var_671_float = 0;
	var_659_object = var_670_object;
	func_2559(var_669_bool, var_670_object, (float)70.0);
	var_672_bool = var_669_bool == 0; //@nz
	if(var_672_bool != 0) {
		var_658_int = -2;
		return 8;
	}
	CreateDialog(var_665_object);
	var_673_int = 0;
	func_2998(var_673_int);
	@@var_665_object:SetNPCName(var_673_int);
	var_674_int = 0;
	func_2996(var_674_int);
	@@var_665_object:SetNPCDescription(var_674_int);
	var_675_string = "";
	func_3000(var_675_string);
	@@var_665_object:SetPhoto(var_675_string);
	var_676_string = "";
	func_3002(var_676_string);
	@@var_665_object:SetPhoto2(var_676_string);
	var_677_int = 0;
	func_3306(var_677_int);
	@@var_665_object:SetPlayerName(var_677_int);
	IsOverrideActive(var_666_bool);
	var_678_bool = var_666_bool;
	if(var_678_bool != 0) {
		var_658_int = -2;
		return 8;
	}
	DoDialog(var_665_object);
	var_679_bool = 0; var_680_object = Obj();
	func_2837(Obj());
	var_681_object = var_680_object;
	func_2646(var_679_bool, var_680_object);
	var_682_object = Obj(); var_683_object = Obj();
	var_659_object = var_682_object;
	var_665_object = var_683_object;
	TaskCall(11);
	func_2108(var_684_object, var_685_object, var_686_string, var_687_bool, var_682_object, var_683_object);
	TaskReturn();
	@@var_665_object:IsDialogEnd(var_668_bool);
	
Label_2090:
	var_712_bool = var_668_bool == 0; //@nz
	if(var_712_bool != 0) {
		sync();
		@@var_665_object:IsDialogEnd(var_668_bool);
		goto Label_2090;
	}
	var_659_object = Obj();
	func_2628();
	StopDialog(var_665_object);
	@@var_665_object:GetReturnValue((int)-1);
	var_667_int = var_658_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2800(var_232_string, var_233_bool)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0;
	lshHasAnimation(var_239_bool, var_232_string);
	var_242_bool = var_239_bool;
	if(var_242_bool != 0) {
		lshGetAnimTimes(var_232_string, var_240_float, var_241_float);
		lshPlayAnimation(var_240_float, var_241_float, var_233_bool);
	} else {
		var_244_int = "Can't find lsh animation : " + var_232_string;
		Trace(var_244_int);
	}
	return 6;
	
}


func_2545(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_2535(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_2290()
{
	var_716_float = 0; var_717_float = 0;
	rand(var_717_float, (int)8, (int)16);
	SetTimer((int)10, var_717_float);
	return 2;
}


func_3060()
{
	var_39_int = 0; var_40_string = "";
	func_2864(var_39_int, "k12q01_Danko");
	var_44_bool = var_39_int == (int)0;
	if(var_44_bool != 0) {
		SetVariable("k12q01_Danko", (int)1);
		func_3226();
	}
	return 0;
}


func_249(var_0_object, var_353_int, var_354_object)
{
	var_356_object = Obj(); var_357_bool = 0; var_358_int = 0; var_359_bool = 0; var_360_object = Obj(); var_361_bool = 0; var_362_int = 0; var_363_bool = 0;
	var_0_object = var_354_object;
	var_364_bool = 0; var_365_object = Obj(); var_366_float = 0;
	var_354_object = var_365_object;
	func_2559(var_364_bool, var_365_object, (float)70.0);
	var_367_bool = var_364_bool == 0; //@nz
	if(var_367_bool != 0) {
		var_353_int = -2;
		return 8;
	}
	CreateDialog(var_360_object);
	var_368_int = 0;
	func_2998(var_368_int);
	@@var_360_object:SetNPCName(var_368_int);
	var_369_int = 0;
	func_2996(var_369_int);
	@@var_360_object:SetNPCDescription(var_369_int);
	var_370_string = "";
	func_3000(var_370_string);
	@@var_360_object:SetPhoto(var_370_string);
	var_371_string = "";
	func_3002(var_371_string);
	@@var_360_object:SetPhoto2(var_371_string);
	var_372_int = 0;
	func_3306(var_372_int);
	@@var_360_object:SetPlayerName(var_372_int);
	IsOverrideActive(var_361_bool);
	var_373_bool = var_361_bool;
	if(var_373_bool != 0) {
		var_353_int = -2;
		return 8;
	}
	DoDialog(var_360_object);
	var_374_bool = 0; var_375_object = Obj();
	func_2837(Obj());
	var_376_object = var_375_object;
	func_2646(var_374_bool, var_375_object);
	var_377_object = Obj(); var_378_object = Obj();
	var_354_object = var_377_object;
	var_360_object = var_378_object;
	TaskCall(3);
	func_330(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object);
	TaskReturn();
	@@var_360_object:IsDialogEnd(var_363_bool);
	
Label_312:
	var_425_bool = var_363_bool == 0; //@nz
	if(var_425_bool != 0) {
		sync();
		@@var_360_object:IsDialogEnd(var_363_bool);
		goto Label_312;
	}
	var_354_object = Obj();
	func_2628();
	StopDialog(var_360_object);
	@@var_360_object:GetReturnValue((int)-1);
	var_362_int = var_353_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2554(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_2299()
{
	KillTimer((int)10);
	return 0;
}


func_2815(var_160_bool, var_161_string)
{
	var_162_bool = 0; var_163_bool = 0;
	var_164_bool = 0;
	func_3004(var_164_bool);
	if(var_164_bool != 0) {
		lshHasSpeech(var_163_bool, var_161_string);
		var_165_bool = var_163_bool;
		if(var_165_bool != 0) {
			lshPlaySpeech(var_161_string);
			var_160_bool = 1;
			return 2;
		}
	}
	var_160_bool = 0;
	return 2;
}


