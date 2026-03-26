// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Confusion|A:SetMessage|A:ClearReplies|A:AddReply|W:Warning|W:all|W:idle|W:Rage|W:Neutral|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Rubin.png|W:ui/NPC_Rubin_b.png|W:k3q03|W:k5q01|W:k5q01RubinGotoGeorg|W:pt_map_georg|A:AddMark|W:tvirin|A:RemoveItemByType|W:fresh_meat|W:k11q01SoulCount|W:ook11Rubin1|W:playsound|W:giveitem|A:ShowMap|W:blackvaccine2 is given|W:black_vaccine|W:k11q01|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x83c
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xba vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2fe vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x511 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x670 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x812 vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0x885 vars=int
// @EVENT_6: op=0x8ab vars=
// @EVENT_5: op=0x8ba vars=
// @EVENT_45: op=0x8c7 vars=bool
// @EVENT_0: op=0x8d3 vars=object
// @PE: 0x51,0xa4,0xba,0x27d,0x2e8,0x2fe,0x4b3,0x4fb,0x511,0x61b,0x65a,0x670,0x7c2,0x7fc,0x812,0x83c,0x885,0x8ab,0x8c7,0xac1,0xae9,0xb09,0xb4f,0xb55,0xb5b,0xb6b,0xb76,0xb82,0xb8e,0xb98,0xba4,0xbb0,0xcb0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2667();
		var_31_bool = var_27_cvector == (int)26936;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2793();
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_2901();
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_2923(var_64_object);
		}
		var_88_bool = var_27_cvector == (int)26937;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_2793();
		}
		var_92_bool = var_27_cvector == (int)42688;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_2793();
		}
		var_96_bool = var_26_bool == (int)26931;
		if(var_96_bool != 0) {
			var_97_bool = 0; var_98_object = Obj();
			var_98_object = var_1_object;
			func_2934(var_98_object);
			if(var_97_bool != 0) {
				var_105_string = "";
				func_164(var_27_cvector, "Confusion");
				@@@var_0_object:SetMessage((int)525584);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525585, (int)26933, (int)26932);
				@@@var_0_object:AddReply((int)540637, (int)26933, (int)42660);
				return 0;
			}
			var_129_string = "";
			func_164(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)525591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525592, (int)-1, (int)26939);
			@@@var_0_object:AddReply((int)540621, (int)-1, (int)42643);
			return 0;
		}
		var_138_bool = var_26_bool == (int)26933;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_164(var_27_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)525586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525587, (int)42662, (int)26934);
			@@@var_0_object:AddReply((int)540639, (int)42664, (int)42663);
			return 0;
		}
		var_148_bool = var_26_bool == (int)42664;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_164(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)540640);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540641, (int)26935, (int)42665);
			return 0;
		}
		var_155_bool = var_26_bool == (int)26935;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_164(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)525588);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540642, (int)42667, (int)42666);
			return 0;
		}
		var_162_bool = var_26_bool == (int)42667;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_164(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)540643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525589, (int)-1, (int)26936);
			@@@var_0_object:AddReply((int)540625, (int)42648, (int)42647);
			return 0;
		}
		var_172_bool = var_26_bool == (int)42648;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_164(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)540626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525590, (int)-1, (int)26937);
			@@@var_0_object:AddReply((int)540661, (int)42689, (int)42690);
			return 0;
		}
		var_182_bool = var_26_bool == (int)42689;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_164(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)540660);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540659, (int)-1, (int)42688);
			return 0;
		}
		var_189_bool = var_26_bool == (int)42662;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_164(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)540638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540644, (int)26935, (int)42668);
			@@@var_0_object:AddReply((int)540645, (int)42670, (int)42669);
			return 0;
		}
		var_199_bool = var_26_bool == (int)42670;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_164(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)540646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540647, (int)42673, (int)42671);
			@@@var_0_object:AddReply((int)540649, (int)42673, (int)42675);
			return 0;
		}
		var_209_bool = var_26_bool == (int)42673;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_164(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)540648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540650, (int)42678, (int)42677);
			return 0;
		}
		var_216_bool = var_26_bool == (int)42678;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_164(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)540651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540652, (int)42680, (int)42679);
			return 0;
		}
		var_223_bool = var_26_bool == (int)42680;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_164(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540654, (int)42691, (int)42681);
			@@@var_0_object:AddReply((int)540655, (int)42683, (int)42682);
			return 0;
		}
		var_233_bool = var_26_bool == (int)42683;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_164(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540657, (int)26935, (int)42684);
			@@@var_0_object:AddReply((int)540658, (int)26935, (int)42685);
			return 0;
		}
		var_243_bool = var_26_bool == (int)42691;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_164(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)540662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540663, (int)26935, (int)42692);
			return 0;
		}
		var_3_string = true;
		var_249_bool = 0;
		func_2791(var_249_bool);
		if(var_249_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2667();
		var_31_bool = var_27_cvector == (int)27160;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2802();
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_2834(var_76_object);
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_2907(var_84_object);
		}
		var_110_bool = var_27_cvector == (int)27178;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_2825();
		}
		var_124_bool = var_26_bool == (int)27146;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_744(var_27_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)525847);
			@@@var_0_object:ClearReplies();
			var_143_bool = 0;
			var_143_bool = 0;
			var_144_bool = 0; var_145_object = Obj();
			var_145_object = var_1_object;
			func_2946(var_145_object);
			if(var_144_bool != 0) {
				var_152_bool = 0; var_153_object = Obj();
				var_153_object = var_1_object;
				func_2958(var_152_bool, var_153_object);
				var_164_bool = var_152_bool == 0; //@nz
				if(var_164_bool != 0) {
					var_143_bool = 1;
				}
			}
			if(var_143_bool != 0) {
				@@@var_0_object:AddReply((int)525848, (int)27148, (int)27147);
			}
			var_168_bool = 0;
			var_168_bool = 0;
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_2946(var_170_object);
			if(var_169_bool != 0) {
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_object;
				func_2958(var_171_bool, var_172_object);
				if(var_171_bool != 0) {
					var_168_bool = 1;
				}
			}
			if(var_168_bool != 0) {
				@@@var_0_object:AddReply((int)525851, (int)27151, (int)27150);
			}
			var_176_bool = 0; var_177_object = Obj();
			var_177_object = var_1_object;
			func_2968(var_177_object);
			if(var_176_bool != 0) {
				@@@var_0_object:AddReply((int)525875, (int)27175, (int)27174);
			}
			@@@var_0_object:AddReply((int)525862, (int)-1, (int)27161);
			@@@var_0_object:AddReply((int)529118, (int)-1, (int)30563);
			return 0;
		}
		var_192_bool = var_26_bool == (int)27175;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_744(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)525876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525877, (int)27177, (int)27176);
			return 0;
		}
		var_199_bool = var_26_bool == (int)27177;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_744(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525878);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529128, (int)30575, (int)30574);
			return 0;
		}
		var_206_bool = var_26_bool == (int)30575;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_744(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529129);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525879, (int)-1, (int)27178);
			return 0;
		}
		var_213_bool = var_26_bool == (int)27151;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_744(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525852);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529119, (int)30565, (int)30564);
			return 0;
		}
		var_220_bool = var_26_bool == (int)30565;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_744(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529120);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525853, (int)27153, (int)27152);
			@@@var_0_object:AddReply((int)529121, (int)30567, (int)30566);
			return 0;
		}
		var_230_bool = var_26_bool == (int)30567;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_744(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529122);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529123, (int)27153, (int)30568);
			return 0;
		}
		var_237_bool = var_26_bool == (int)27153;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_744(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)525854);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529124, (int)30571, (int)30570);
			return 0;
		}
		var_244_bool = var_26_bool == (int)30571;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_744(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)529125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525855, (int)27155, (int)27154);
			return 0;
		}
		var_251_bool = var_26_bool == (int)27155;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_744(var_27_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)525856);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529126, (int)30573, (int)30572);
			return 0;
		}
		var_258_bool = var_26_bool == (int)30573;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_744(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)529127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525857, (int)27157, (int)27156);
			return 0;
		}
		var_265_bool = var_26_bool == (int)27157;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_744(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)525858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525859, (int)27159, (int)27158);
			return 0;
		}
		var_272_bool = var_26_bool == (int)27159;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_744(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525861, (int)-1, (int)27160);
			return 0;
		}
		var_279_bool = var_26_bool == (int)27148;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_744(var_27_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)525849);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525850, (int)-1, (int)27149);
			return 0;
		}
		var_3_string = true;
		var_285_bool = 0;
		func_2791(var_285_bool);
		if(var_285_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2ff";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2667();
		var_31_bool = var_27_cvector == (int)29045;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2895();
		}
		var_37_bool = var_27_cvector == (int)29057;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_object;
			func_2844();
		}
		var_121_bool = var_26_bool == (int)29043;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_1275(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527693);
			@@@var_0_object:ClearReplies();
			var_140_bool = 0;
			var_140_bool = 0;
			var_141_bool = 0; var_142_object = Obj();
			var_142_object = var_1_object;
			func_2992(var_142_object);
			if(var_141_bool != 0) {
				var_149_bool = 0; var_150_object = Obj();
				var_150_object = var_1_object;
				func_2980(var_150_object);
				if(var_149_bool != 0) {
					var_140_bool = 1;
				}
			}
			if(var_140_bool != 0) {
				@@@var_0_object:AddReply((int)527695, (int)29046, (int)29045);
			}
			@@@var_0_object:AddReply((int)527694, (int)-1, (int)29044);
			return 0;
		}
		var_162_bool = var_26_bool == (int)29046;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_1275(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)527696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527697, (int)29048, (int)29047);
			return 0;
		}
		var_169_bool = var_26_bool == (int)29048;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_1275(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)527698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527699, (int)29050, (int)29049);
			return 0;
		}
		var_176_bool = var_26_bool == (int)29050;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_1275(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527700);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527701, (int)29052, (int)29051);
			return 0;
		}
		var_183_bool = var_26_bool == (int)29052;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_1275(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527702);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527703, (int)29054, (int)29053);
			@@@var_0_object:AddReply((int)527712, (int)29054, (int)29063);
			return 0;
		}
		var_193_bool = var_26_bool == (int)29054;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_1275(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)527704);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527705, (int)29056, (int)29055);
			return 0;
		}
		var_200_bool = var_26_bool == (int)29056;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_1275(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)527706);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527707, (int)-1, (int)29057);
			return 0;
		}
		var_3_string = true;
		var_206_bool = 0;
		func_2791(var_206_bool);
		if(var_206_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x512";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2667();
		var_31_bool = var_26_bool == (int)41237;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1626(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542670, (int)45076, (int)45074);
			@@@var_0_object:AddReply((int)539295, (int)-1, (int)41238);
			@@@var_0_object:AddReply((int)542671, (int)-1, (int)45075);
			return 0;
		}
		var_60_bool = var_26_bool == (int)45076;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_1626(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542673, (int)45078, (int)45077);
			return 0;
		}
		var_67_bool = var_26_bool == (int)45078;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_1626(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542675, (int)45081, (int)45079);
			@@@var_0_object:AddReply((int)542676, (int)45084, (int)45080);
			return 0;
		}
		var_77_bool = var_26_bool == (int)45081;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_1626(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542677);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542678, (int)45088, (int)45082);
			@@@var_0_object:AddReply((int)542679, (int)45084, (int)45083);
			return 0;
		}
		var_87_bool = var_26_bool == (int)45088;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_1626(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)542683);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542684, (int)45084, (int)45089);
			return 0;
		}
		var_94_bool = var_26_bool == (int)45084;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_1626(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)542680);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542681, (int)45091, (int)45085);
			@@@var_0_object:AddReply((int)542687, (int)45094, (int)45093);
			return 0;
		}
		var_104_bool = var_26_bool == (int)45094;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_1626(var_27_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)542688);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542689, (int)45096, (int)45095);
			return 0;
		}
		var_111_bool = var_26_bool == (int)45091;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_1626(var_27_cvector, "Warning");
			@@@var_0_object:SetMessage((int)542685);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542686, (int)45096, (int)45092);
			return 0;
		}
		var_118_bool = var_26_bool == (int)45096;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_1626(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542691, (int)45100, (int)45098);
			@@@var_0_object:AddReply((int)542692, (int)-1, (int)45099);
			return 0;
		}
		var_128_bool = var_26_bool == (int)45100;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_1626(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542693);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542694, (int)45103, (int)45101);
			@@@var_0_object:AddReply((int)542695, (int)45103, (int)45102);
			return 0;
		}
		var_138_bool = var_26_bool == (int)45103;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_1626(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542697, (int)-1, (int)45105);
			@@@var_0_object:AddReply((int)542698, (int)-1, (int)45106);
			return 0;
		}
		var_3_string = true;
		var_147_bool = 0;
		func_2791(var_147_bool);
		if(var_147_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x671";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_2667();
		var_31_bool = var_26_int == (int)42554;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_2044(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_2791(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x813";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_2177();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_2391(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_2146(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_2126(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_2674(Obj());
				var_72_object = var_71_object;
				func_2541(var_70_bool, var_71_object);
			}
		} else {
			func_2141(var_26_int);
			func_2168();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2359();
	func_2177();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_2177();
	var_27_string = "";
	func_2621("Neutral");
	func_2168();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_2168();
	} else {
		var_33_string = "";
		func_2621("Neutral");
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
		func_2359();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_2382(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_3248(var_44_object);
		var_575_string = "";
		func_2621("Neutral");
		func_2177();
		func_2168();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2112(var_25_cvector);
	return 0;
}


func_0(var_0_object, var_53_int, var_54_object)
{
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0;
	var_0_object = var_54_object;
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0;
	var_54_object = var_65_object;
	func_2396(var_64_bool, var_65_object, (float)70.0);
	var_111_bool = var_64_bool == 0; //@nz
	if(var_111_bool != 0) {
		var_53_int = -2;
		return 8;
	}
	CreateDialog(var_60_object);
	var_112_int = 0;
	func_2785(var_112_int);
	@@var_60_object:SetNPCName(var_112_int);
	var_113_int = 0;
	func_2783(var_113_int);
	@@var_60_object:SetNPCDescription(var_113_int);
	var_114_string = "";
	func_2787(var_114_string);
	@@var_60_object:SetPhoto(var_114_string);
	var_115_string = "";
	func_2789(var_115_string);
	@@var_60_object:SetPhoto2(var_115_string);
	var_116_int = 0;
	func_3231(var_116_int);
	@@var_60_object:SetPlayerName(var_116_int);
	IsOverrideActive(var_61_bool);
	var_124_bool = var_61_bool;
	if(var_124_bool != 0) {
		var_53_int = -2;
		return 8;
	}
	DoDialog(var_60_object);
	var_125_bool = 0; var_126_object = Obj();
	func_2674(Obj());
	var_127_object = var_126_object;
	func_2483(var_125_bool, var_126_object);
	var_215_object = Obj(); var_216_object = Obj();
	var_54_object = var_215_object;
	var_60_object = var_216_object;
	TaskCall(1);
	func_81(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object);
	TaskReturn();
	@@var_60_object:IsDialogEnd(var_63_bool);
	
Label_63:
	var_280_bool = var_63_bool == 0; //@nz
	if(var_280_bool != 0) {
		sync();
		@@var_60_object:IsDialogEnd(var_63_bool);
		goto Label_63;
	}
	var_54_object = Obj();
	func_2465();
	StopDialog(var_60_object);
	@@var_60_object:GetReturnValue((int)-1);
	var_62_int = var_53_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3075()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)494, (int)1, (int)528061);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_3153(var_77_bool, var_78_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2825()
{
	SetVariable("k5q01", (int)4);
	func_3114();
	return 0;
}


func_3088()
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateDiaryEntry(var_48_object, (int)493, (int)1, (int)528060);
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0;
	var_48_object = var_53_object;
	func_3153(var_52_bool, var_53_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2578(var_167_bool, var_168_object)
{
	var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = "";
	var_180_int = 0;
	func_2744(var_180_int);
	var_181_int = "d" + var_180_int;
	var_174_string = var_181_int + "m";
	var_175_int = 0;
	
Label_2587:
	if((int)1 != 0) {
		var_185_int = var_175_int + (int)1;
		var_186_int = var_174_string + var_185_int;
		@@var_168_object:HasProperty(var_186_int, var_176_bool);
		var_187_bool = var_176_bool == 0; //@nz
		if(var_187_bool != 0) {
		} else {
			var_175_int = var_175_int + (int)1;
			goto Label_2587;
		}
	}
	var_188_bool = var_175_int == 0; //@nz
	if(var_188_bool != 0) {
		var_167_bool = 0;
		return 10;
	}
	var_177_int = 0;
	var_190_bool = var_175_int > (int)1;
	if(var_190_bool != 0) {
		irand(var_177_int, var_175_int);
	}
	var_192_int = var_177_int + (int)1;
	var_193_int = var_174_string + var_192_int;
	@@var_168_object:GetProperty(var_193_int, var_178_string);
	var_194_bool = 0; var_195_string = "";
	var_178_string = var_195_string;
	func_2652(var_194_bool, var_195_string);
	var_194_bool = var_167_bool;
	return 10;
	
}


func_2834(var_75_object)
{
	var_77_int = 0; var_78_int = 0;
	@@var_75_object:RemoveItemByType(var_78_int, "tvirin", (int)3);
	@@var_75_object:RemoveItemByType(var_78_int, "fresh_meat", (int)3);
	return 2;
}


func_1563(var_0_object, var_1_object, var_2_object, var_3_string, var_484_object, var_485_object)
{
	var_0_object = var_485_object;
	var_1_object = var_484_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_491_string = "";
		func_1626(var_485_object, "Neutral");
		@@@var_0_object:SetMessage((int)539294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)542670, (int)45076, (int)45074);
		@@@var_0_object:AddReply((int)539295, (int)-1, (int)41238);
		@@@var_0_object:AddReply((int)542671, (int)-1, (int)45075);
		goto Label_1596;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x61f";
	}
Label_1596:
	var_509_bool = 0;
	func_2791(var_509_bool);
	if(var_509_bool != 0) {

	Label_1600:
		lshWaitForAnimEnd();
		var_510_string = var_3_string;
		if(var_510_string != 0) {
		} else {
			var_511_string = "";
			var_511_string = var_2_object;
			func_2621(var_511_string);
			goto Label_1600;
	}
		PlayAnimation("all", "idle");

	Label_1615:
		WaitForAnimEnd();
		var_514_string = var_3_string;
		if(var_514_string != 0) {
			goto Label_1625;
		}
		PlayAnimation("all", "idle");
		goto Label_1615;
	}
	goto Label_1625;
	
Label_1625:
	return 0;
	
}


func_2844()
{
	var_40_int = 0; var_41_int = 0;
	GetVariable("k11q01SoulCount", var_41_int);
	var_41_int = var_41_int + (int)1;
	SetVariable("k11q01SoulCount", var_41_int);
	var_46_bool = var_41_int == (int)2;
	if(var_46_bool != 0) {
		func_3088();
	} else {
		var_71_bool = var_41_int == (int)3;
		if(var_71_bool != 0) {
			func_3075();
			goto Label_2894;
		}
		var_81_bool = var_41_int == (int)4;
		if(var_81_bool != 0) {
			func_3062();
			goto Label_2894;
		}
		var_91_bool = var_41_int == (int)5;
		if(var_91_bool != 0) {
			func_3049();
			goto Label_2894;
		}
		var_101_bool = var_41_int == (int)6;
		if(var_101_bool != 0) {
			func_3036();
			goto Label_2894;
		}
		var_111_bool = var_41_int == (int)7;
		if(var_111_bool == 0) goto Label_2894;
		func_3023();
	}
Label_2894:
	return 2;
	
}


func_3101()
{
	var_36_object = Obj(); var_37_object = Obj();
	CreateDiaryEntry(var_37_object, (int)353, (int)2, (int)525619);
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0;
	var_37_object = var_42_object;
	func_3153(var_41_bool, var_42_object, (int)350);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3114()
{
	var_115_object = Obj(); var_116_object = Obj();
	CreateDiaryEntry(var_116_object, (int)395, (int)1, (int)525888);
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0;
	var_116_object = var_121_object;
	func_3153(var_120_bool, var_121_object, (int)390);
	return 2;
}
EMIT "Stack[-1] = 0";


func_556(var_0_object, var_291_int, var_292_object)
{
	var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; var_298_object = Obj(); var_299_bool = 0; var_300_int = 0; var_301_bool = 0;
	var_0_object = var_292_object;
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0;
	var_292_object = var_303_object;
	func_2396(var_302_bool, var_303_object, (float)70.0);
	var_305_bool = var_302_bool == 0; //@nz
	if(var_305_bool != 0) {
		var_291_int = -2;
		return 8;
	}
	CreateDialog(var_298_object);
	var_306_int = 0;
	func_2785(var_306_int);
	@@var_298_object:SetNPCName(var_306_int);
	var_307_int = 0;
	func_2783(var_307_int);
	@@var_298_object:SetNPCDescription(var_307_int);
	var_308_string = "";
	func_2787(var_308_string);
	@@var_298_object:SetPhoto(var_308_string);
	var_309_string = "";
	func_2789(var_309_string);
	@@var_298_object:SetPhoto2(var_309_string);
	var_310_int = 0;
	func_3231(var_310_int);
	@@var_298_object:SetPlayerName(var_310_int);
	IsOverrideActive(var_299_bool);
	var_311_bool = var_299_bool;
	if(var_311_bool != 0) {
		var_291_int = -2;
		return 8;
	}
	DoDialog(var_298_object);
	var_312_bool = 0; var_313_object = Obj();
	func_2674(Obj());
	var_314_object = var_313_object;
	func_2483(var_312_bool, var_313_object);
	var_315_object = Obj(); var_316_object = Obj();
	var_292_object = var_315_object;
	var_298_object = var_316_object;
	TaskCall(3);
	func_637(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object);
	TaskReturn();
	@@var_298_object:IsDialogEnd(var_301_bool);
	
Label_619:
	var_385_bool = var_301_bool == 0; //@nz
	if(var_385_bool != 0) {
		sync();
		@@var_298_object:IsDialogEnd(var_301_bool);
		goto Label_619;
	}
	var_292_object = Obj();
	func_2465();
	StopDialog(var_298_object);
	@@var_298_object:GetReturnValue((int)-1);
	var_300_int = var_291_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2357(var_64_bool)
{
	var_64_bool = 1;
	return 0;
}


func_3127()
{
	var_52_object = Obj(); var_53_object = Obj();
	CreateDiaryEntry(var_53_object, (int)393, (int)1, (int)525886);
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0;
	var_53_object = var_58_object;
	func_3153(var_57_bool, var_58_object, (int)390);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2359()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2364(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_2621(var_256_string)
{
	var_257_bool = 0; var_258_float = 0; var_259_float = 0; var_260_bool = 0; var_261_float = 0; var_262_float = 0;
	lshHasAnimation(var_260_bool, var_256_string);
	var_263_bool = var_260_bool;
	if(var_263_bool != 0) {
		lshGetAnimTimes(var_256_string, var_261_float, var_262_float);
		lshPlayAnimation(var_261_float, var_262_float, (bool)0);
	} else {
		var_266_int = "Can't find lsh animation : " + var_256_string;
		Trace(var_266_int);
	}
	return 6;
	
}


func_2112(var_0_object)
{
	var_26_bool = 0;
	func_2391(var_26_bool);
	var_29_bool = var_26_bool == 0; //@nz
	if(var_29_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2121:
	func_2288();
	goto Label_2121;
}
EMIT "Return(); Pop(0)";


func_3140(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj();
	GetDiaryRoot(var_63_object);
	var_64_bool = var_63_object == 0; //@nz
	if(var_64_bool != 0) {
		Trace("Can't retrieve diary root");
		var_61_object = 0;
		return 2;
	}
	var_63_object = var_61_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2372(var_34_bool, var_35_cvector)
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


func_2637(var_234_string, var_235_bool)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0;
	lshHasAnimation(var_241_bool, var_234_string);
	var_244_bool = var_241_bool;
	if(var_244_bool != 0) {
		lshGetAnimTimes(var_234_string, var_242_float, var_243_float);
		lshPlayAnimation(var_242_float, var_243_float, var_235_bool);
	} else {
		var_246_int = "Can't find lsh animation : " + var_234_string;
		Trace(var_246_int);
	}
	return 6;
	
}


func_2126(var_51_bool)
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
	func_2382(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2382(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_2372(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_2895()
{
	SetVariable("ook11Rubin1", (int)1);
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_215_object, var_216_object)
{
	var_0_object = var_216_object;
	var_1_object = var_215_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_222_bool = 0; var_223_object = Obj();
		var_223_object = var_1_object;
		func_2934(var_223_object);
		if(var_222_bool != 0) {
			var_230_string = "";
			func_164(var_216_object, "Confusion");
			@@@var_0_object:SetMessage((int)525584);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525585, (int)26933, (int)26932);
			@@@var_0_object:AddReply((int)540637, (int)26933, (int)42660);
		} else {
				var_272_string = "";
				func_164(var_216_object, "Warning");
				@@@var_0_object:SetMessage((int)525591);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525592, (int)-1, (int)26939);
				@@@var_0_object:AddReply((int)540621, (int)-1, (int)42643);
				goto Label_134;
		}
	}
Label_134:
	var_254_bool = 0;
	func_2791(var_254_bool);
	if(var_254_bool != 0) {

	Label_138:
		lshWaitForAnimEnd();
		var_255_string = var_3_string;
		if(var_255_string != 0) {
		} else {
			var_256_string = "";
			var_256_string = var_2_object;
			func_2621(var_256_string);
			goto Label_138;
	}
		PlayAnimation("all", "idle");

	Label_153:
		WaitForAnimEnd();
		var_269_string = var_3_string;
		if(var_269_string != 0) {
			goto Label_163;
		}
		PlayAnimation("all", "idle");
		goto Label_153;

	}
	goto Label_163;
	
Label_163:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_3153(var_52_bool, var_53_object, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0; var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0;
	func_3140(Obj());
	var_61_object = var_58_object;
	@@var_58_object:Find(var_54_int, var_59_object);
	var_66_bool = var_59_object == 0; //@nz
	if(var_66_bool != 0) {
		var_68_int = "Can't find diary parent with id: " + var_54_int;
		Trace(var_68_int);
		var_52_bool = 0;
		return 6;
	}
	@@var_59_object:AddChild(var_53_object);
	SendWorldWndMessage((int)7);
	@@var_53_object:GetCategory(var_60_int);
	SetDiarySection(var_60_int);
	var_52_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2901()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2391(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
	return 2;
}


func_1626(var_2_object, var_491_string)
{
	var_492_bool = 0;
	func_2791(var_492_bool);
	var_493_bool = var_492_bool == 0; //@nz
	if(var_493_bool != 0) {
		return 0;
	}
	var_494_bool = var_491_string == var_2_object;
	if(var_494_bool != 0) {
		return 0;
	}
	var_495_string = ""; var_496_bool = 0;
	var_491_string = var_495_string;
	var_498_bool = var_491_string == "";
	if(var_498_bool != 0) {
		var_496_bool = 0;
	} else {
		var_496_bool = 1;
	}
	func_2637(var_495_string, var_496_bool);
	var_2_object = var_491_string;
	return 0;
	
}


func_2907(var_84_object)
{
	var_85_object = Obj(); var_86_string = ""; var_87_float = 0;
	func_3181(Obj());
	var_88_object = var_85_object;
	func_3198(var_85_object, "pt_map_georg", (float)2);
	var_108_object = Obj();
	func_3181(var_108_object);
	@@var_84_object:ShowMap(var_108_object);
	return 0;
}


func_2652(var_159_bool, var_160_string)
{
	var_161_bool = 0; var_162_bool = 0;
	var_163_bool = 0;
	func_2791(var_163_bool);
	if(var_163_bool != 0) {
		lshHasSpeech(var_162_bool, var_160_string);
		var_164_bool = var_162_bool;
		if(var_164_bool != 0) {
			lshPlaySpeech(var_160_string);
			var_159_bool = 1;
			return 2;
		}
	}
	var_159_bool = 0;
	return 2;
}


func_2141(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_2396(var_64_bool, var_65_object, var_66_float)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0;
	@@var_65_object:GetPosition(var_77_cvector);
	@@var_65_object:GetEyesHeight(var_76_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	var_85_float = var_85_float + var_76_float;
	SetByIndex(var_77_cvector, 1) = var_85_float;
	GetPosition(var_78_cvector);
	GetEyesHeight(var_76_float);
	var_86_float = GetByIndex(var_78_cvector, 1);
	var_86_float = var_86_float + var_76_float;
	SetByIndex(var_78_cvector, 1) = var_86_float;
	var_79_cvector = var_77_cvector - var_78_cvector;
	var_87_float = GetByIndex(var_79_cvector, 1);
	SetByIndex(var_79_cvector, 1) = (float)0;
	var_88_int = var_79_cvector | var_79_cvector;
	var_89_float = sqrt(var_88_int);
	var_79_cvector = var_79_cvector / var_89_float;
	var_80_cvector = -var_79_cvector;
	var_90_float = var_79_cvector * var_66_float;
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	var_92_cvector = var_80_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2680(var_91_cvector, var_92_cvector);
	var_100_float = var_91_cvector * (int)25;
	var_101_int = var_90_float + var_100_float;
	var_81_cvector = var_101_int - CVector(0.0, 10.0, 0.0);
	var_82_cvector = var_78_cvector + var_81_cvector;
	IsOverrideActive(var_83_bool);
	var_103_bool = var_83_bool;
	if(var_103_bool != 0) {
		var_64_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_82_cvector, var_80_cvector, (bool)1);
	var_105_float = GetByIndex(var_81_cvector, 0);
	var_106_float = GetByIndex(var_81_cvector, 2);
	Rotate(var_105_float, var_106_float);
	var_107_bool = 0;
	func_2791(var_107_bool);
	if(var_107_bool != 0) {
	} else {
		HasAnimationTrack(var_84_bool, "head");
		var_109_bool = var_84_bool;
		if(var_109_bool == 0) goto Label_2459;
		LookAsyncCamera("head");
	}
Label_2459:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_64_bool = 1;
	return 18;
	
}


func_2146(var_34_bool)
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
	func_2364(var_41_float, var_42_object);
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


func_1122(var_0_object, var_389_int, var_390_object)
{
	var_392_object = Obj(); var_393_bool = 0; var_394_int = 0; var_395_bool = 0; var_396_object = Obj(); var_397_bool = 0; var_398_int = 0; var_399_bool = 0;
	var_0_object = var_390_object;
	var_400_bool = 0; var_401_object = Obj(); var_402_float = 0;
	var_390_object = var_401_object;
	func_2396(var_400_bool, var_401_object, (float)70.0);
	var_403_bool = var_400_bool == 0; //@nz
	if(var_403_bool != 0) {
		var_389_int = -2;
		return 8;
	}
	CreateDialog(var_396_object);
	var_404_int = 0;
	func_2785(var_404_int);
	@@var_396_object:SetNPCName(var_404_int);
	var_405_int = 0;
	func_2783(var_405_int);
	@@var_396_object:SetNPCDescription(var_405_int);
	var_406_string = "";
	func_2787(var_406_string);
	@@var_396_object:SetPhoto(var_406_string);
	var_407_string = "";
	func_2789(var_407_string);
	@@var_396_object:SetPhoto2(var_407_string);
	var_408_int = 0;
	func_3231(var_408_int);
	@@var_396_object:SetPlayerName(var_408_int);
	IsOverrideActive(var_397_bool);
	var_409_bool = var_397_bool;
	if(var_409_bool != 0) {
		var_389_int = -2;
		return 8;
	}
	DoDialog(var_396_object);
	var_410_bool = 0; var_411_object = Obj();
	func_2674(Obj());
	var_412_object = var_411_object;
	func_2483(var_410_bool, var_411_object);
	var_413_object = Obj(); var_414_object = Obj();
	var_390_object = var_413_object;
	var_396_object = var_414_object;
	TaskCall(5);
	func_1203(var_415_object, var_416_object, var_417_string, var_418_bool, var_413_object, var_414_object);
	TaskReturn();
	@@var_396_object:IsDialogEnd(var_399_bool);
	
Label_1185:
	var_456_bool = var_399_bool == 0; //@nz
	if(var_456_bool != 0) {
		sync();
		@@var_396_object:IsDialogEnd(var_399_bool);
		goto Label_1185;
	}
	var_390_object = Obj();
	func_2465();
	StopDialog(var_396_object);
	@@var_396_object:GetReturnValue((int)-1);
	var_398_int = var_389_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2667()
{
	var_29_bool = 0;
	func_2791(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2923(var_63_object)
{
	Trace("blackvaccine2 is given");
	var_66_object = Obj(); var_67_string = ""; var_68_int = 0;
	var_63_object = var_66_object;
	func_2726(var_66_object, "black_vaccine", (int)2);
	return 0;
}


func_3181(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj();
	GetMainOutdoorScene(var_41_object);
	var_43_bool = var_41_object == 0; //@ne
	if(var_43_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_42_object = 0;
		var_42_object = var_38_object;
		return 4;
	}
	@@var_41_object:GetMap(var_42_object);
	var_42_object = var_38_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1905(var_0_object, var_519_int, var_520_object)
{
	var_522_object = Obj(); var_523_bool = 0; var_524_int = 0; var_525_bool = 0; var_526_object = Obj(); var_527_bool = 0; var_528_int = 0; var_529_bool = 0;
	var_0_object = var_520_object;
	var_530_bool = 0; var_531_object = Obj(); var_532_float = 0;
	var_520_object = var_531_object;
	func_2396(var_530_bool, var_531_object, (float)70.0);
	var_533_bool = var_530_bool == 0; //@nz
	if(var_533_bool != 0) {
		var_519_int = -2;
		return 8;
	}
	CreateDialog(var_526_object);
	var_534_int = 0;
	func_2785(var_534_int);
	@@var_526_object:SetNPCName(var_534_int);
	var_535_int = 0;
	func_2783(var_535_int);
	@@var_526_object:SetNPCDescription(var_535_int);
	var_536_string = "";
	func_2787(var_536_string);
	@@var_526_object:SetPhoto(var_536_string);
	var_537_string = "";
	func_2789(var_537_string);
	@@var_526_object:SetPhoto2(var_537_string);
	var_538_int = 0;
	func_3231(var_538_int);
	@@var_526_object:SetPlayerName(var_538_int);
	IsOverrideActive(var_527_bool);
	var_539_bool = var_527_bool;
	if(var_539_bool != 0) {
		var_519_int = -2;
		return 8;
	}
	DoDialog(var_526_object);
	var_540_bool = 0; var_541_object = Obj();
	func_2674(Obj());
	var_542_object = var_541_object;
	func_2483(var_540_bool, var_541_object);
	var_543_object = Obj(); var_544_object = Obj();
	var_520_object = var_543_object;
	var_526_object = var_544_object;
	TaskCall(9);
	func_1986(var_545_object, var_546_object, var_547_string, var_548_bool, var_543_object, var_544_object);
	TaskReturn();
	@@var_526_object:IsDialogEnd(var_529_bool);
	
Label_1968:
	var_573_bool = var_529_bool == 0; //@nz
	if(var_573_bool != 0) {
		sync();
		@@var_526_object:IsDialogEnd(var_529_bool);
		goto Label_1968;
	}
	var_520_object = Obj();
	func_2465();
	StopDialog(var_526_object);
	@@var_526_object:GetReturnValue((int)-1);
	var_528_int = var_519_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2674(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj();
	self(var_129_object);
	var_129_object = var_127_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2934(var_222_bool)
{
	var_224_int = 0; var_225_string = "";
	func_2690(var_224_int, "k3q03");
	var_229_bool = var_224_int == (int)1;
	if(var_229_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_2168()
{
	var_577_float = 0; var_578_float = 0;
	rand(var_578_float, (int)8, (int)16);
	SetTimer((int)10, var_578_float);
	return 2;
}


func_2680(var_91_cvector, var_92_cvector)
{
	var_94_float = 0; var_95_float = 0;
	var_96_int = var_92_cvector | var_92_cvector;
	var_95_float = sqrt(var_96_int);
	var_97_float = 9.999999974752427e-07;
	var_98_bool = var_95_float < var_97_float;
	if(var_98_bool != 0) {
		var_91_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_91_cvector = var_92_cvector / var_95_float;
	return 2;
}


func_637(var_0_object, var_1_object, var_2_object, var_3_string, var_315_object, var_316_object)
{
	var_0_object = var_316_object;
	var_1_object = var_315_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_322_string = "";
		func_744(var_316_object, "Confusion");
		@@@var_0_object:SetMessage((int)525847);
		@@@var_0_object:ClearReplies();
		var_331_bool = 0;
		var_331_bool = 0;
		var_332_bool = 0; var_333_object = Obj();
		var_333_object = var_1_object;
		func_2946(var_333_object);
		if(var_332_bool != 0) {
			var_338_bool = 0; var_339_object = Obj();
			var_339_object = var_1_object;
			func_2958(var_338_bool, var_339_object);
			var_350_bool = var_338_bool == 0; //@nz
			if(var_350_bool != 0) {
				var_331_bool = 1;
			}
		}
		if(var_331_bool != 0) {
			@@@var_0_object:AddReply((int)525848, (int)27148, (int)27147);
		}
		var_354_bool = 0;
		var_354_bool = 0;
		var_355_bool = 0; var_356_object = Obj();
		var_356_object = var_1_object;
		func_2946(var_356_object);
		if(var_355_bool != 0) {
			var_357_bool = 0; var_358_object = Obj();
			var_358_object = var_1_object;
			func_2958(var_357_bool, var_358_object);
			if(var_357_bool != 0) {
				var_354_bool = 1;
			}
		}
		if(var_354_bool != 0) {
			@@@var_0_object:AddReply((int)525851, (int)27151, (int)27150);
		}
		var_362_bool = 0; var_363_object = Obj();
		var_363_object = var_1_object;
		func_2968(var_363_object);
		if(var_362_bool != 0) {
			@@@var_0_object:AddReply((int)525875, (int)27175, (int)27174);
		}
		@@@var_0_object:AddReply((int)525862, (int)-1, (int)27161);
		@@@var_0_object:AddReply((int)529118, (int)-1, (int)30563);
		goto Label_714;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x281";
	}
Label_714:
	var_377_bool = 0;
	func_2791(var_377_bool);
	if(var_377_bool != 0) {

	Label_718:
		lshWaitForAnimEnd();
		var_378_string = var_3_string;
		if(var_378_string != 0) {
		} else {
			var_379_string = "";
			var_379_string = var_2_object;
			func_2621(var_379_string);
			goto Label_718;
	}
		PlayAnimation("all", "idle");

	Label_733:
		WaitForAnimEnd();
		var_382_string = var_3_string;
		if(var_382_string != 0) {
			goto Label_743;
		}
		PlayAnimation("all", "idle");
		goto Label_733;
	}
	goto Label_743;
	
Label_743:
	return 0;
	
}


func_3198(var_85_object, var_86_string, var_87_float)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_object = Obj(); var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_object = Obj(); var_96_bool = 0;
	GetMainOutdoorScene(var_95_object);
	var_97_bool = var_95_object == 0; //@ne
	if(var_97_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_95_object:GetLocator(var_86_string, var_96_bool, var_93_cvector, var_94_cvector);
	var_99_bool = var_96_bool == 0; //@nz
	if(var_99_bool != 0) {
		var_101_int = "Warning: outdoor scene locator " + var_86_string;
		var_103_int = var_101_int + " doesnt exist";
		Trace(var_103_int);
	}
	@@var_95_object:GetMap(var_85_object);
	var_104_bool = var_85_object == 0; //@ne
	if(var_104_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_106_float = GetByIndex(var_93_cvector, 0);
	var_107_float = GetByIndex(var_93_cvector, 2);
	@@var_85_object:SetMapParams(var_106_float, var_107_float, var_87_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2177()
{
	KillTimer((int)10);
	return 0;
}


func_2690(var_224_int, var_225_string)
{
	var_226_int = 0; var_227_int = 0;
	GetVariable(var_225_string, var_227_int);
	var_227_int = var_224_int;
	return 2;
}


func_2946(var_332_bool)
{
	var_334_int = 0; var_335_string = "";
	func_2690(var_334_int, "k5q01");
	var_337_bool = var_334_int == (int)1;
	if(var_337_bool != 0) {
		var_332_bool = 1;
		return 0;
	}
	var_332_bool = 0;
	return 0;
}


func_2695(var_82_int, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj();
	CreateIntVector(var_85_object);
	@@var_85_object:add(var_82_int);
	@@var_85_object:add(var_83_int);
	SendWorldWndMessage((int)3, var_85_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2958(var_338_bool, var_339_object)
{
	var_340_bool = 0; var_341_object = Obj();
	var_339_object = var_341_object;
	func_3004(var_340_bool, var_341_object);
	if(var_340_bool != 0) {
		var_338_bool = 1;
		return 0;
	}
	var_338_bool = 0;
	return 0;
}


func_2707(var_71_object, var_72_object, var_73_int)
{
	var_74_int = 0; var_75_int = 0; var_76_bool = 0; var_77_int = 0; var_78_int = 0; var_79_bool = 0;
	@@var_72_object:GetItemID(var_77_int);
	GetInvItemProperty(var_78_int, var_77_int, "Category");
	@@var_71_object:AddItem(var_79_bool, var_72_object, var_78_int, var_73_int);
	var_81_bool = var_79_bool == 0; //@nz
	if(var_81_bool != 0) {
		@@var_71_object:DropItems(var_72_object, var_73_int);
	} else {
		var_82_int = 0; var_83_int = 0;
		var_77_int = var_82_int;
		var_73_int = var_83_int;
		func_2695(var_82_int, var_83_int);
	}
	return 6;
	
}


func_2968(var_362_bool)
{
	var_364_int = 0; var_365_string = "";
	func_2690(var_364_int, "k5q01");
	var_367_bool = var_364_int == (int)3;
	if(var_367_bool != 0) {
		var_362_bool = 1;
		return 0;
	}
	var_362_bool = 0;
	return 0;
}


func_3231(var_116_int)
{
	var_117_int = 0; var_118_int = 0;
	GetVariable("branch", var_118_int);
	var_121_bool = var_118_int == (int)0;
	if(var_121_bool != 0) {
		var_116_int = 1;
		return 2;
	EMIT "GOTO 0xcae";
	}
	var_123_bool = var_118_int == (int)1;
	if(var_123_bool != 0) {
		var_116_int = 2;
		return 2;
	}
	var_116_int = 3;
	return 2;
}


func_2465()
{
	var_282_bool = 0; var_283_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_285_bool = 0;
	func_2791(var_285_bool);
	if(var_285_bool != 0) {
	} else {
		HasAnimationTrack(var_283_bool, "head");
		var_287_bool = var_283_bool;
		if(var_287_bool == 0) goto Label_2482;
		UnlookAsync("head");
	}
Label_2482:
	return 2;
	
}


func_164(var_2_object, var_230_string)
{
	var_231_bool = 0;
	func_2791(var_231_bool);
	var_232_bool = var_231_bool == 0; //@nz
	if(var_232_bool != 0) {
		return 0;
	}
	var_233_bool = var_230_string == var_2_object;
	if(var_233_bool != 0) {
		return 0;
	}
	var_234_string = ""; var_235_bool = 0;
	var_230_string = var_234_string;
	var_237_bool = var_230_string == "";
	if(var_237_bool != 0) {
		var_235_bool = 0;
	} else {
		var_235_bool = 1;
	}
	func_2637(var_234_string, var_235_bool);
	var_2_object = var_230_string;
	return 0;
	
}


func_2980(var_436_bool)
{
	var_438_int = 0; var_439_string = "";
	func_2690(var_438_int, "k11q01");
	var_441_bool = var_438_int == (int)9;
	if(var_441_bool != 0) {
		var_436_bool = 1;
		return 0;
	}
	var_436_bool = 0;
	return 0;
}


func_2726(var_66_object, var_67_string, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj();
	CreateInvItem(var_70_object);
	@@var_70_object:SetItemName(var_67_string);
	var_71_object = Obj(); var_72_object = Obj(); var_73_int = 0;
	var_66_object = var_71_object;
	var_70_object = var_72_object;
	var_68_int = var_73_int;
	func_2707(var_71_object, var_72_object, var_73_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3248(var_44_object)
{
	var_45_bool = 0; var_46_int = 0;
	func_2753(var_45_bool, (int)3);
	if(var_45_bool != 0) {
		var_53_int = 0; var_54_object = Obj();
		var_44_object = var_54_object;
		TaskCall(0);
		func_0(var_55_object, var_53_int, var_54_object);
		TaskReturn();
		return 0;
	}
	var_289_bool = 0; var_290_int = 0;
	func_2753(var_289_bool, (int)5);
	if(var_289_bool != 0) {
		var_291_int = 0; var_292_object = Obj();
		var_44_object = var_292_object;
		TaskCall(2);
		func_556(var_293_object, var_291_int, var_292_object);
		TaskReturn();
		return 0;
	}
	var_387_bool = 0; var_388_int = 0;
	func_2753(var_387_bool, (int)11);
	if(var_387_bool != 0) {
		var_389_int = 0; var_390_object = Obj();
		var_44_object = var_390_object;
		TaskCall(4);
		func_1122(var_391_object, var_389_int, var_390_object);
		TaskReturn();
		return 0;
	}
	var_458_bool = 0; var_459_int = 0;
	func_2753(var_458_bool, (int)12);
	if(var_458_bool != 0) {
		var_460_int = 0; var_461_object = Obj();
		var_44_object = var_461_object;
		TaskCall(6);
		func_1482(var_462_object, var_460_int, var_461_object);
		TaskReturn();
		return 0;
	}
	var_519_int = 0; var_520_object = Obj();
	var_44_object = var_520_object;
	TaskCall(8);
	func_1905(var_521_object, var_519_int, var_520_object);
	TaskReturn();
	return 0;
}


func_2992(var_430_bool)
{
	var_432_int = 0; var_433_string = "";
	func_2690(var_432_int, "ook11Rubin1");
	var_435_bool = var_432_int == (int)0;
	if(var_435_bool != 0) {
		var_430_bool = 1;
		return 0;
	}
	var_430_bool = 0;
	return 0;
}


func_1203(var_0_object, var_1_object, var_2_object, var_3_string, var_413_object, var_414_object)
{
	var_0_object = var_414_object;
	var_1_object = var_413_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_420_string = "";
		func_1275(var_414_object, "Neutral");
		@@@var_0_object:SetMessage((int)527693);
		@@@var_0_object:ClearReplies();
		var_429_bool = 0;
		var_429_bool = 0;
		var_430_bool = 0; var_431_object = Obj();
		var_431_object = var_1_object;
		func_2992(var_431_object);
		if(var_430_bool != 0) {
			var_436_bool = 0; var_437_object = Obj();
			var_437_object = var_1_object;
			func_2980(var_437_object);
			if(var_436_bool != 0) {
				var_429_bool = 1;
			}
		}
		if(var_429_bool != 0) {
			@@@var_0_object:AddReply((int)527695, (int)29046, (int)29045);
		}
		@@@var_0_object:AddReply((int)527694, (int)-1, (int)29044);
		goto Label_1245;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4b7";
	}
Label_1245:
	var_448_bool = 0;
	func_2791(var_448_bool);
	if(var_448_bool != 0) {

	Label_1249:
		lshWaitForAnimEnd();
		var_449_string = var_3_string;
		if(var_449_string != 0) {
		} else {
			var_450_string = "";
			var_450_string = var_2_object;
			func_2621(var_450_string);
			goto Label_1249;
	}
		PlayAnimation("all", "idle");

	Label_1264:
		WaitForAnimEnd();
		var_453_string = var_3_string;
		if(var_453_string != 0) {
			goto Label_1274;
		}
		PlayAnimation("all", "idle");
		goto Label_1264;
	}
	goto Label_1274;
	
Label_1274:
	return 0;
	
}


func_2739(var_49_float)
{
	var_50_float = 0; var_51_float = 0;
	GetGameTime(var_51_float);
	var_51_float = var_49_float;
	return 2;
}


func_2483(var_125_bool, var_126_object)
{
	var_130_int = 0; var_131_int = 0; var_132_int = 0; var_133_int = 0;
	GetVariable("voice_common", var_132_int);
	var_135_int = var_132_int;
	if(var_135_int != 0) {
		var_136_bool = 0; var_137_object = Obj();
		var_126_object = var_137_object;
		func_2541(var_136_bool, var_137_object);
		var_166_bool = var_136_bool == 0; //@nz
		if(var_166_bool != 0) {
			var_167_bool = 0; var_168_object = Obj();
			var_126_object = var_168_object;
			func_2578(var_167_bool, var_168_object);
			var_197_bool = var_167_bool == 0; //@nz
			if(var_197_bool != 0) {
				var_125_bool = 0;
				return 4;
			}
		}
		irand(var_133_int, (int)2);
		var_199_int = var_133_int;
		if(var_199_int != 0) {
			var_202_int = var_132_int + (int)1;
			var_204_int = var_202_int % (int)3;
			SetVariable("voice_common", var_204_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_207_bool = 0; var_208_object = Obj();
		var_126_object = var_208_object;
		func_2578(var_207_bool, var_208_object);
		var_209_bool = var_207_bool == 0; //@nz
		if(var_209_bool != 0) {
			var_210_bool = 0; var_211_object = Obj();
			var_126_object = var_211_object;
			func_2541(var_210_bool, var_211_object);
			var_212_bool = var_210_bool == 0; //@nz
			if(var_212_bool != 0) {
				var_125_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2539;
	
Label_2539:
	var_125_bool = 1;
	return 4;
	
}


func_2744(var_47_int)
{
	var_48_float = 0; var_49_float = 0;
	GetGameTime(var_49_float);
	var_51_int = 0;
	var_51_int = var_49_float / (int)24;
	var_47_int = (int)1 + var_51_int;
	return 2;
}


func_3004(var_340_bool, var_341_object)
{
	var_342_int = 0; var_343_int = 0;
	@@var_341_object:GetItemCountOfType(var_343_int, "tvirin");
	var_346_bool = var_343_int < (int)3;
	if(var_346_bool != 0) {
		var_340_bool = 0;
		return 2;
	}
	@@var_341_object:GetItemCountOfType(var_343_int, "fresh_meat");
	var_349_bool = var_343_int < (int)3;
	if(var_349_bool != 0) {
		var_340_bool = 0;
		return 2;
	}
	var_340_bool = 1;
	return 2;
}


func_2753(var_45_bool, var_46_int)
{
	var_47_int = 0;
	func_2744(var_47_int);
	var_45_bool = var_47_int == var_46_int;
	return 0;
}


func_1986(var_0_object, var_1_object, var_2_object, var_3_string, var_543_object, var_544_object)
{
	var_0_object = var_544_object;
	var_1_object = var_543_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_550_string = "";
		func_2044(var_544_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_2014;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7c6";
	}
Label_2014:
	var_565_bool = 0;
	func_2791(var_565_bool);
	if(var_565_bool != 0) {

	Label_2018:
		lshWaitForAnimEnd();
		var_566_string = var_3_string;
		if(var_566_string != 0) {
		} else {
			var_567_string = "";
			var_567_string = var_2_object;
			func_2621(var_567_string);
			goto Label_2018;
	}
		PlayAnimation("all", "idle");

	Label_2033:
		WaitForAnimEnd();
		var_570_string = var_3_string;
		if(var_570_string != 0) {
			goto Label_2043;
		}
		PlayAnimation("all", "idle");
		goto Label_2033;
	}
	goto Label_2043;
	
Label_2043:
	return 0;
	
}


func_2759(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = "";
	var_54_int = var_51_int;
	if(var_54_int != 0) {
		"idle" = "idle" + var_51_int;
	}
	var_53_string = var_50_string;
	return 2;
}


func_1482(var_0_object, var_460_int, var_461_object)
{
	var_463_object = Obj(); var_464_bool = 0; var_465_int = 0; var_466_bool = 0; var_467_object = Obj(); var_468_bool = 0; var_469_int = 0; var_470_bool = 0;
	var_0_object = var_461_object;
	var_471_bool = 0; var_472_object = Obj(); var_473_float = 0;
	var_461_object = var_472_object;
	func_2396(var_471_bool, var_472_object, (float)70.0);
	var_474_bool = var_471_bool == 0; //@nz
	if(var_474_bool != 0) {
		var_460_int = -2;
		return 8;
	}
	CreateDialog(var_467_object);
	var_475_int = 0;
	func_2785(var_475_int);
	@@var_467_object:SetNPCName(var_475_int);
	var_476_int = 0;
	func_2783(var_476_int);
	@@var_467_object:SetNPCDescription(var_476_int);
	var_477_string = "";
	func_2787(var_477_string);
	@@var_467_object:SetPhoto(var_477_string);
	var_478_string = "";
	func_2789(var_478_string);
	@@var_467_object:SetPhoto2(var_478_string);
	var_479_int = 0;
	func_3231(var_479_int);
	@@var_467_object:SetPlayerName(var_479_int);
	IsOverrideActive(var_468_bool);
	var_480_bool = var_468_bool;
	if(var_480_bool != 0) {
		var_460_int = -2;
		return 8;
	}
	DoDialog(var_467_object);
	var_481_bool = 0; var_482_object = Obj();
	func_2674(Obj());
	var_483_object = var_482_object;
	func_2483(var_481_bool, var_482_object);
	var_484_object = Obj(); var_485_object = Obj();
	var_461_object = var_484_object;
	var_467_object = var_485_object;
	TaskCall(7);
	func_1563(var_486_object, var_487_object, var_488_string, var_489_bool, var_484_object, var_485_object);
	TaskReturn();
	@@var_467_object:IsDialogEnd(var_470_bool);
	
Label_1545:
	var_517_bool = var_470_bool == 0; //@nz
	if(var_517_bool != 0) {
		sync();
		@@var_467_object:IsDialogEnd(var_470_bool);
		goto Label_1545;
	}
	var_461_object = Obj();
	func_2465();
	StopDialog(var_467_object);
	@@var_467_object:GetReturnValue((int)-1);
	var_469_int = var_460_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2766(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0;
	var_47_int = 0;
	
Label_2768:
	var_50_string = ""; var_51_int = 0;
	var_47_int = var_51_int;
	func_2759(var_50_string, var_51_int);
	HasAnimation(var_48_bool, "all", var_50_string);
	var_55_bool = var_48_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
		var_47_int = var_47_int + (int)1;
		goto Label_2768;
	}
	var_47_int = var_44_int;
	return 4;
	
}


func_3023()
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateDiaryEntry(var_113_object, (int)498, (int)1, (int)528065);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_113_object = var_118_object;
	func_3153(var_117_bool, var_118_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3036()
{
	var_102_object = Obj(); var_103_object = Obj();
	CreateDiaryEntry(var_103_object, (int)497, (int)1, (int)528064);
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0;
	var_103_object = var_108_object;
	func_3153(var_107_bool, var_108_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2783(var_113_int)
{
	var_113_int = 515551;
	return 0;
}


func_2785(var_112_int)
{
	var_112_int = 502876;
	return 0;
}


func_2787(var_114_string)
{
	var_114_string = "ui/NPC_Rubin.png";
	return 0;
}


func_2789(var_115_string)
{
	var_115_string = "ui/NPC_Rubin_b.png";
	return 0;
}


func_2791(var_107_bool)
{
	var_107_bool = 1;
	return 0;
}


func_744(var_2_object, var_322_string)
{
	var_323_bool = 0;
	func_2791(var_323_bool);
	var_324_bool = var_323_bool == 0; //@nz
	if(var_324_bool != 0) {
		return 0;
	}
	var_325_bool = var_322_string == var_2_object;
	if(var_325_bool != 0) {
		return 0;
	}
	var_326_string = ""; var_327_bool = 0;
	var_322_string = var_326_string;
	var_329_bool = var_322_string == "";
	if(var_329_bool != 0) {
		var_327_bool = 0;
	} else {
		var_327_bool = 1;
	}
	func_2637(var_326_string, var_327_bool);
	var_2_object = var_322_string;
	return 0;
	
}


func_2793()
{
	SetVariable("k3q03", (int)1000);
	func_3101();
	return 0;
}


func_3049()
{
	var_92_object = Obj(); var_93_object = Obj();
	CreateDiaryEntry(var_93_object, (int)496, (int)1, (int)528063);
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0;
	var_93_object = var_98_object;
	func_3153(var_97_bool, var_98_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2541(var_136_bool, var_137_object)
{
	var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = "";
	var_143_string = "c";
	var_144_int = 0;
	
Label_2544:
	if((int)1 != 0) {
		var_150_int = var_144_int + (int)1;
		var_151_int = var_143_string + var_150_int;
		@@var_137_object:HasProperty(var_151_int, var_145_bool);
		var_152_bool = var_145_bool == 0; //@nz
		if(var_152_bool != 0) {
		} else {
			var_144_int = var_144_int + (int)1;
			goto Label_2544;
		}
	}
	var_153_bool = var_144_int == 0; //@nz
	if(var_153_bool != 0) {
		var_136_bool = 0;
		return 10;
	}
	var_146_int = 0;
	var_155_bool = var_144_int > (int)1;
	if(var_155_bool != 0) {
		irand(var_146_int, var_144_int);
	}
	var_157_int = var_146_int + (int)1;
	var_158_int = var_143_string + var_157_int;
	@@var_137_object:GetProperty(var_158_int, var_147_string);
	var_159_bool = 0; var_160_string = "";
	var_147_string = var_160_string;
	func_2652(var_159_bool, var_160_string);
	var_159_bool = var_136_bool;
	return 10;
	
}


func_2288()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0;
	WaitForAnimEnd();
	var_42_bool = 0;
	func_2391(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 12;
	}
	func_2766((int)0);
	var_44_int = var_36_int;
	var_37_int = 0;
	
Label_2302:
	var_57_bool = 0;
	var_57_bool = 0;
	var_59_bool = var_37_int < (int)5;
	if(var_59_bool != 0) {
		var_60_bool = 0;
		func_2391(var_60_bool);
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
				func_2759(var_71_string, var_72_int);
				PlayAnimation("all", var_71_string);
				WaitForAnimEnd(var_41_bool);
				var_73_bool = var_41_bool == 0; //@nz
				if(var_73_bool == 0) goto Label_2343;
				goto Label_2354;
		}
		Label_2343:
			var_64_bool = 0;
			func_2357(var_64_bool);
			var_65_bool = var_64_bool == 0; //@nz
			if(var_65_bool != 0) {
				goto Label_2354;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_2302;

		}
	}
Label_2354:
	ResetAAS();
	return 12;
	
}


func_2802()
{
	var_34_object = Obj(); var_35_object = Obj();
	SetVariable("k5q01", (int)2);
	func_3181(Obj());
	var_38_object = var_35_object;
	var_49_float = 0;
	func_2739(var_49_float);
	@@var_35_object:AddMark("k5q01RubinGotoGeorg", "pt_map_georg", (int)1, (int)515292, var_49_float);
	func_3127();
	return 2;
}
EMIT "Stack[-1] = 0";


func_3062()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)495, (int)1, (int)528062);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_3153(var_87_bool, var_88_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1275(var_2_object, var_420_string)
{
	var_421_bool = 0;
	func_2791(var_421_bool);
	var_422_bool = var_421_bool == 0; //@nz
	if(var_422_bool != 0) {
		return 0;
	}
	var_423_bool = var_420_string == var_2_object;
	if(var_423_bool != 0) {
		return 0;
	}
	var_424_string = ""; var_425_bool = 0;
	var_420_string = var_424_string;
	var_427_bool = var_420_string == "";
	if(var_427_bool != 0) {
		var_425_bool = 0;
	} else {
		var_425_bool = 1;
	}
	func_2637(var_424_string, var_425_bool);
	var_2_object = var_420_string;
	return 0;
	
}


func_2044(var_2_object, var_550_string)
{
	var_551_bool = 0;
	func_2791(var_551_bool);
	var_552_bool = var_551_bool == 0; //@nz
	if(var_552_bool != 0) {
		return 0;
	}
	var_553_bool = var_550_string == var_2_object;
	if(var_553_bool != 0) {
		return 0;
	}
	var_554_string = ""; var_555_bool = 0;
	var_550_string = var_554_string;
	var_557_bool = var_550_string == "";
	if(var_557_bool != 0) {
		var_555_bool = 0;
	} else {
		var_555_bool = 1;
	}
	func_2637(var_554_string, var_555_bool);
	var_2_object = var_550_string;
	return 0;
	
}


