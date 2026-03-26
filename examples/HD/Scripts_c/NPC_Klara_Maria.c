// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Mysterious|W:Angry|W:Rage|W:Staring|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Maria.png|W:ui/NPC_Maria_b.png|W:pt_map_eva|A:ShowMap|W:money 4000 is given|W:k1q02|W:ook3Maria1|W:ook4Maria1|W:k7q01|W:k10q01|W:quest_k10_01|W:place_soldiers|W:playsound|W:givemoney|W:feromicin2 is given|W:feromicin|W:k5q04|W:k5q04MariaGotoDanko|A:AddMark|W:ook8Maria1|W:ook8Maria2|W:ook9Maria1|W:ook9Maria2|W:ook10Maria1|W:ook10Maria2|W:ook3Maria2|W:feromicin is given|W:morfin is given|W:morfin|W:neomicin is given|W:neomicin|W:k3q03|W:k4q02|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:k2system_danko_day|W:k2system_danko_state
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xf49
// @RUN_TASK: 22
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xba vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x214 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x30e vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4c8 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x61f vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7af vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x954 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa5c vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc27 vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdd1 vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf1f vars=int,int
// @TASK_22: vars=cvector params=0
// @EVENT_7: op=0xf95 vars=int
// @EVENT_6: op=0xfbb vars=
// @EVENT_5: op=0xfca vars=
// @EVENT_45: op=0xfd7 vars=bool
// @EVENT_0: op=0xfe3 vars=object
// @PE: 0x51,0xa4,0xba,0x1c4,0x1fe,0x214,0x2a6,0x2f8,0x30e,0x451,0x4b2,0x4c8,0x5ca,0x609,0x61f,0x71d,0x799,0x7af,0x8ff,0x93e,0x954,0xa02,0xa46,0xa5c,0xba4,0xc11,0xc27,0xd4e,0xdbb,0xdd1,0xecf,0xf09,0xf1f,0xf95,0xfbb,0xfd7,0x11bb,0x120a,0x1251,0x1279,0x1289,0x1293,0x129a,0x12a3,0x12a9,0x12af,0x12b8,0x12c6,0x12cc,0x12ee,0x12f3,0x12f9,0x12ff,0x1305,0x130b,0x1311,0x1338,0x133e,0x1345,0x134c,0x1353,0x135e,0x1369,0x1374,0x1380,0x138c,0x1398,0x13a4,0x13b0,0x13bc,0x13c8,0x13d4,0x13de,0x13e8,0x13f2,0x13fe,0x140a,0x1416,0x1422,0x142e,0x143a,0x1446,0x144c,0x1452,0x152a

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_57_cvector == (int)26084;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_4762();
		}
		var_90_bool = var_56_bool == (int)26083;
		if(var_90_bool != 0) {
			var_91_bool = 0; var_92_object = Obj();
			var_92_object = var_1_object;
			func_4980(var_92_object);
			if(var_91_bool != 0) {
				var_99_string = "";
				func_164(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)524759);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526896, (int)28184, (int)28183);
				@@@var_0_object:AddReply((int)526903, (int)28184, (int)28191);
				return 0;
			}
			var_123_string = "";
			func_164(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526893, (int)-1, (int)28180);
			@@@var_0_object:AddReply((int)542280, (int)-1, (int)44625);
			return 0;
		}
		var_132_bool = var_56_bool == (int)28184;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_164(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)526897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526894, (int)28185, (int)28181);
			@@@var_0_object:AddReply((int)526904, (int)28194, (int)28193);
			return 0;
		}
		var_142_bool = var_56_bool == (int)28194;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_164(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)526905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526906, (int)28185, (int)28195);
			@@@var_0_object:AddReply((int)526907, (int)28187, (int)28197);
			return 0;
		}
		var_152_bool = var_56_bool == (int)28185;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_164(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526898);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526899, (int)28187, (int)28186);
			@@@var_0_object:AddReply((int)526908, (int)28182, (int)28199);
			return 0;
		}
		var_162_bool = var_56_bool == (int)28187;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_164(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526901, (int)28182, (int)28188);
			@@@var_0_object:AddReply((int)526902, (int)28182, (int)28189);
			return 0;
		}
		var_172_bool = var_56_bool == (int)28182;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_164(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)526895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524760, (int)-1, (int)26084);
			return 0;
		}
		var_3_string = true;
		var_178_bool = 0;
		func_4727(var_178_bool);
		if(var_178_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_56_bool == (int)26857;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_510(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525501);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525502, (int)27545, (int)26858);
			@@@var_0_object:AddReply((int)526269, (int)27545, (int)27544);
			return 0;
		}
		var_87_bool = var_56_bool == (int)27545;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_510(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526271, (int)-1, (int)27546);
			@@@var_0_object:AddReply((int)526272, (int)-1, (int)27547);
			return 0;
		}
		var_3_string = true;
		var_96_bool = 0;
		func_4727(var_96_bool);
		if(var_96_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x215";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_57_cvector == (int)26955;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_4771();
		}
		var_67_bool = var_57_cvector == (int)26959;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_4933(var_69_object);
		}
		var_109_bool = var_57_cvector == (int)42741;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_4933(var_111_object);
		}
		var_113_bool = var_57_cvector == (int)42736;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_4920();
		}
		var_119_bool = var_57_cvector == (int)42745;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_4926(var_121_object);
		}
		var_126_bool = var_57_cvector == (int)42746;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_4926(var_128_object);
		}
		var_130_bool = var_56_bool == (int)26954;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_760(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525607);
			@@@var_0_object:ClearReplies();
			var_149_bool = 0;
			var_149_bool = 0;
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_4992(var_151_object);
			if(var_150_bool != 0) {
				var_158_bool = 0; var_159_object = Obj();
				var_159_object = var_1_object;
				func_5004(var_159_object);
				if(var_158_bool != 0) {
					var_149_bool = 1;
				}
			}
			if(var_149_bool != 0) {
				@@@var_0_object:AddReply((int)525608, (int)26956, (int)26955);
			}
			var_167_bool = 0; var_168_object = Obj();
			var_168_object = var_1_object;
			func_5178(var_168_object);
			if(var_167_bool != 0) {
				@@@var_0_object:AddReply((int)540700, (int)42737, (int)42736);
			}
			@@@var_0_object:AddReply((int)525613, (int)-1, (int)26960);
			return 0;
		}
		var_180_bool = var_56_bool == (int)42737;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_760(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)540701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540702, (int)42740, (int)42738);
			@@@var_0_object:AddReply((int)540703, (int)-1, (int)42739);
			return 0;
		}
		var_190_bool = var_56_bool == (int)42740;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_760(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540704);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540706, (int)42744, (int)42742);
			@@@var_0_object:AddReply((int)540707, (int)-1, (int)42743);
			return 0;
		}
		var_200_bool = var_56_bool == (int)42744;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_760(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)540708);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540709, (int)-1, (int)42745);
			@@@var_0_object:AddReply((int)540710, (int)-1, (int)42746);
			return 0;
		}
		var_210_bool = var_56_bool == (int)26956;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_760(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)525609);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525610, (int)26958, (int)26957);
			@@@var_0_object:AddReply((int)540705, (int)-1, (int)42741);
			return 0;
		}
		var_220_bool = var_56_bool == (int)26958;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_760(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)525611);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529340, (int)30796, (int)30795);
			return 0;
		}
		var_227_bool = var_56_bool == (int)30796;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_760(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)529341);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525612, (int)-1, (int)26959);
			return 0;
		}
		var_3_string = true;
		var_233_bool = 0;
		func_4727(var_233_bool);
		if(var_233_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x30f";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_57_cvector == (int)27069;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_4926(var_63_object);
		}
		var_103_bool = var_57_cvector == (int)27070;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_4940(var_105_object);
		}
		var_110_bool = var_57_cvector == (int)42750;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_4940(var_112_object);
		}
		var_114_bool = var_57_cvector == (int)42753;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_4933(var_116_object);
		}
		var_121_bool = var_56_bool == (int)27068;
		if(var_121_bool != 0) {
			var_122_bool = 0;
			var_122_bool = 0;
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_5016(var_124_object);
			if(var_123_bool != 0) {
				var_131_bool = 0; var_132_object = Obj();
				var_132_object = var_1_object;
				func_5028(var_132_object);
				if(var_131_bool != 0) {
					var_122_bool = 1;
				}
			}
			if(var_122_bool != 0) {
				var_137_object = Obj(); var_138_object = Obj();
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_4777();
				var_141_string = "";
				func_1202(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525756);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540712, (int)42749, (int)42748);
				@@@var_0_object:AddReply((int)540717, (int)-1, (int)42753);
				return 0;
			}
			var_165_string = "";
			func_1202(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525760, (int)-1, (int)27072);
			@@@var_0_object:AddReply((int)540711, (int)-1, (int)42747);
			return 0;
		}
		var_174_bool = var_56_bool == (int)42749;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_1202(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540713);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529233, (int)30688, (int)30687);
			@@@var_0_object:AddReply((int)540714, (int)-1, (int)42750);
			return 0;
		}
		var_184_bool = var_56_bool == (int)30688;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_1202(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529234);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540715, (int)42752, (int)42751);
			return 0;
		}
		var_191_bool = var_56_bool == (int)42752;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_1202(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)540716);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525757, (int)-1, (int)27069);
			@@@var_0_object:AddReply((int)525758, (int)-1, (int)27070);
			return 0;
		}
		var_3_string = true;
		var_200_bool = 0;
		func_4727(var_200_bool);
		if(var_200_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4c9";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_57_cvector == (int)27476;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_4783();
		}
		var_90_bool = var_56_bool == (int)27473;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_1545(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526192);
			@@@var_0_object:ClearReplies();
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_5040(var_110_object);
			if(var_109_bool != 0) {
				@@@var_0_object:AddReply((int)526193, (int)30159, (int)27474);
			}
			@@@var_0_object:AddReply((int)526196, (int)-1, (int)27477);
			return 0;
		}
		var_124_bool = var_56_bool == (int)30159;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_1545(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528735);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528736, (int)30161, (int)30160);
			@@@var_0_object:AddReply((int)528745, (int)30163, (int)30169);
			return 0;
		}
		var_134_bool = var_56_bool == (int)30161;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_1545(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528738, (int)30163, (int)30162);
			return 0;
		}
		var_141_bool = var_56_bool == (int)30163;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_1545(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528740, (int)30165, (int)30164);
			return 0;
		}
		var_148_bool = var_56_bool == (int)30165;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_1545(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)528741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528742, (int)30167, (int)30166);
			return 0;
		}
		var_155_bool = var_56_bool == (int)30167;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_1545(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)528743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528744, (int)27475, (int)30168);
			@@@var_0_object:AddReply((int)528746, (int)27475, (int)30171);
			return 0;
		}
		var_165_bool = var_56_bool == (int)27475;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_1545(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526195, (int)-1, (int)27476);
			return 0;
		}
		var_3_string = true;
		var_171_bool = 0;
		func_4727(var_171_bool);
		if(var_171_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x620";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_57_cvector == (int)28242;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_4792();
		}
		var_96_bool = var_57_cvector == (int)41804;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_4875();
		}
		var_102_bool = var_57_cvector == (int)41807;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_4881();
		}
		var_108_bool = var_57_cvector == (int)41809;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_4846();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_4909(var_120_object);
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_4806();
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_4812(var_148_object);
		}
		var_169_bool = var_56_bool == (int)28239;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_1945(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)526947);
			@@@var_0_object:ClearReplies();
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_5052(var_189_object);
			if(var_188_bool != 0) {
				@@@var_0_object:AddReply((int)526948, (int)28241, (int)28240);
			}
			var_199_bool = 0;
			var_199_bool = 0;
			var_200_bool = 0;
			var_200_bool = 0;
			var_201_bool = 0; var_202_object = Obj();
			var_202_object = var_1_object;
			func_5076(var_201_bool, var_202_object);
			if(var_201_bool != 0) {
				var_216_bool = 0; var_217_object = Obj();
				var_217_object = var_1_object;
				func_5086(var_216_bool, var_217_object);
				if(var_216_bool != 0) {
					var_200_bool = 1;
				}
			}
			if(var_200_bool != 0) {
				var_230_bool = 0; var_231_object = Obj();
				var_231_object = var_1_object;
				func_5154(var_231_object);
				if(var_230_bool != 0) {
					var_199_bool = 1;
				}
			}
			if(var_199_bool != 0) {
				@@@var_0_object:AddReply((int)539852, (int)41805, (int)41804);
			}
			var_239_bool = 0;
			var_239_bool = 0;
			var_240_bool = 0;
			var_240_bool = 0;
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_5076(var_241_bool, var_242_object);
			if(var_241_bool != 0) {
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_5096(var_243_bool, var_244_object);
				if(var_243_bool != 0) {
					var_240_bool = 1;
				}
			}
			if(var_240_bool != 0) {
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_object;
				func_5166(var_251_object);
				if(var_250_bool != 0) {
					var_239_bool = 1;
				}
			}
			if(var_239_bool != 0) {
				@@@var_0_object:AddReply((int)539855, (int)41808, (int)41807);
			}
			@@@var_0_object:AddReply((int)526951, (int)-1, (int)28243);
			@@@var_0_object:AddReply((int)528006, (int)-1, (int)29366);
			return 0;
		}
		var_266_bool = var_56_bool == (int)41808;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_1945(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539856);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539857, (int)-1, (int)41809);
			return 0;
		}
		var_273_bool = var_56_bool == (int)41805;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_1945(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)539853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539854, (int)-1, (int)41806);
			return 0;
		}
		var_280_bool = var_56_bool == (int)28241;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_1945(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)526949);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528007, (int)29368, (int)29367);
			@@@var_0_object:AddReply((int)528011, (int)29368, (int)29371);
			return 0;
		}
		var_290_bool = var_56_bool == (int)29368;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_1945(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)528008);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528009, (int)29370, (int)29369);
			@@@var_0_object:AddReply((int)528012, (int)29370, (int)29373);
			return 0;
		}
		var_300_bool = var_56_bool == (int)29370;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_1945(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)528010);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526950, (int)-1, (int)28242);
			return 0;
		}
		var_3_string = true;
		var_306_bool = 0;
		func_4727(var_306_bool);
		if(var_306_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7b0";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_56_bool == (int)36906;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_2366(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_90_bool = var_56_bool == (int)36953;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_2366(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_100_bool = var_56_bool == (int)36957;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_2366(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_109_bool = 0;
		func_4727(var_109_bool);
		if(var_109_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x955";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_57_cvector == (int)41363;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_4823();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_4729(var_106_object);
		}
		var_132_bool = var_57_cvector == (int)42772;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_4823();
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_4729(var_136_object);
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_4745(var_138_object);
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_4806();
		}
		var_163_bool = var_57_cvector == (int)42754;
		if(var_163_bool != 0) {
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_4755(var_165_object);
		}
		var_205_bool = var_56_bool == (int)41356;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_2630(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539425);
			@@@var_0_object:ClearReplies();
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_5064(var_225_object);
			if(var_224_bool != 0) {
				@@@var_0_object:AddReply((int)539426, (int)42755, (int)41357);
			}
			@@@var_0_object:AddReply((int)539433, (int)-1, (int)41364);
			@@@var_0_object:AddReply((int)540718, (int)-1, (int)42754);
			return 0;
		}
		var_242_bool = var_56_bool == (int)42755;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_2630(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)540719);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540720, (int)41358, (int)42756);
			@@@var_0_object:AddReply((int)540723, (int)42760, (int)42759);
			return 0;
		}
		var_252_bool = var_56_bool == (int)42760;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_2630(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)540724);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540725, (int)41360, (int)42761);
			@@@var_0_object:AddReply((int)540726, (int)42763, (int)42762);
			return 0;
		}
		var_262_bool = var_56_bool == (int)42763;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_2630(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)540727);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540728, (int)41360, (int)42764);
			@@@var_0_object:AddReply((int)540729, (int)41360, (int)42765);
			return 0;
		}
		var_272_bool = var_56_bool == (int)41358;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_2630(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)539427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539428, (int)41360, (int)41359);
			return 0;
		}
		var_279_bool = var_56_bool == (int)41360;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_2630(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539430, (int)41362, (int)41361);
			@@@var_0_object:AddReply((int)540730, (int)41362, (int)42767);
			return 0;
		}
		var_289_bool = var_56_bool == (int)41362;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_2630(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539432, (int)-1, (int)41363);
			@@@var_0_object:AddReply((int)540731, (int)42771, (int)42768);
			return 0;
		}
		var_299_bool = var_56_bool == (int)42771;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_2630(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540734);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540735, (int)-1, (int)42772);
			return 0;
		}
		var_3_string = true;
		var_305_bool = 0;
		func_4727(var_305_bool);
		if(var_305_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5d";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_57_cvector == (int)41781;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_4851();
		}
		var_67_bool = var_57_cvector == (int)41784;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_4857();
		}
		var_73_bool = var_57_cvector == (int)41786;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_4846();
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_4887(var_100_object);
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_4947(var_124_object);
		}
		var_145_bool = var_56_bool == (int)41780;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_3089(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539828);
			@@@var_0_object:ClearReplies();
			var_164_bool = 0;
			var_164_bool = 0;
			var_165_bool = 0;
			var_165_bool = 0;
			var_166_bool = 0; var_167_object = Obj();
			var_167_object = var_1_object;
			func_5076(var_166_bool, var_167_object);
			if(var_166_bool != 0) {
				var_181_bool = 0; var_182_object = Obj();
				var_182_object = var_1_object;
				func_5086(var_181_bool, var_182_object);
				if(var_181_bool != 0) {
					var_165_bool = 1;
				}
			}
			if(var_165_bool != 0) {
				var_195_bool = 0; var_196_object = Obj();
				var_196_object = var_1_object;
				func_5106(var_196_object);
				if(var_195_bool != 0) {
					var_164_bool = 1;
				}
			}
			if(var_164_bool != 0) {
				@@@var_0_object:AddReply((int)539829, (int)41782, (int)41781);
			}
			var_206_bool = 0;
			var_206_bool = 0;
			var_207_bool = 0;
			var_207_bool = 0;
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_5076(var_208_bool, var_209_object);
			if(var_208_bool != 0) {
				var_210_bool = 0; var_211_object = Obj();
				var_211_object = var_1_object;
				func_5096(var_210_bool, var_211_object);
				if(var_210_bool != 0) {
					var_207_bool = 1;
				}
			}
			if(var_207_bool != 0) {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_object;
				func_5118(var_218_object);
				if(var_217_bool != 0) {
					var_206_bool = 1;
				}
			}
			if(var_206_bool != 0) {
				@@@var_0_object:AddReply((int)539832, (int)41785, (int)41784);
			}
			@@@var_0_object:AddReply((int)539838, (int)-1, (int)41790);
			return 0;
		}
		var_230_bool = var_56_bool == (int)41785;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_3089(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542518, (int)44912, (int)44911);
			@@@var_0_object:AddReply((int)542520, (int)44912, (int)44913);
			return 0;
		}
		var_240_bool = var_56_bool == (int)44912;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_3089(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)542519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539834, (int)-1, (int)41786);
			return 0;
		}
		var_247_bool = var_56_bool == (int)41782;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_3089(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542521, (int)44916, (int)44915);
			@@@var_0_object:AddReply((int)542524, (int)-1, (int)44918);
			return 0;
		}
		var_257_bool = var_56_bool == (int)44916;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_3089(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)542522);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539831, (int)-1, (int)41783);
			@@@var_0_object:AddReply((int)542523, (int)-1, (int)44917);
			return 0;
		}
		var_3_string = true;
		var_266_bool = 0;
		func_4727(var_266_bool);
		if(var_266_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc28";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_57_cvector == (int)41793;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_4863();
		}
		var_67_bool = var_57_cvector == (int)41796;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_4869();
		}
		var_73_bool = var_57_cvector == (int)41798;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_4846();
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_4898(var_100_object);
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_4806();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_4958(var_128_object);
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_4969(var_149_object);
		}
		var_155_bool = var_56_bool == (int)41792;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_3515(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)539840);
			@@@var_0_object:ClearReplies();
			var_174_bool = 0;
			var_174_bool = 0;
			var_175_bool = 0;
			var_175_bool = 0;
			var_176_bool = 0; var_177_object = Obj();
			var_177_object = var_1_object;
			func_5076(var_176_bool, var_177_object);
			if(var_176_bool != 0) {
				var_191_bool = 0; var_192_object = Obj();
				var_192_object = var_1_object;
				func_5086(var_191_bool, var_192_object);
				if(var_191_bool != 0) {
					var_175_bool = 1;
				}
			}
			if(var_175_bool != 0) {
				var_205_bool = 0; var_206_object = Obj();
				var_206_object = var_1_object;
				func_5130(var_206_object);
				if(var_205_bool != 0) {
					var_174_bool = 1;
				}
			}
			if(var_174_bool != 0) {
				@@@var_0_object:AddReply((int)539841, (int)41794, (int)41793);
			}
			var_216_bool = 0;
			var_216_bool = 0;
			var_217_bool = 0;
			var_217_bool = 0;
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_5076(var_218_bool, var_219_object);
			if(var_218_bool != 0) {
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_5096(var_220_bool, var_221_object);
				if(var_220_bool != 0) {
					var_217_bool = 1;
				}
			}
			if(var_217_bool != 0) {
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_1_object;
				func_5142(var_228_object);
				if(var_227_bool != 0) {
					var_216_bool = 1;
				}
			}
			if(var_216_bool != 0) {
				@@@var_0_object:AddReply((int)539844, (int)41797, (int)41796);
			}
			@@@var_0_object:AddReply((int)539850, (int)-1, (int)41802);
			return 0;
		}
		var_240_bool = var_56_bool == (int)41797;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_3515(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539846, (int)-1, (int)41798);
			return 0;
		}
		var_247_bool = var_56_bool == (int)41794;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_3515(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539842);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539843, (int)-1, (int)41795);
			return 0;
		}
		var_3_string = true;
		var_253_bool = 0;
		func_4727(var_253_bool);
		if(var_253_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdd2";
	
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	if((int)1 != 0) {
		func_4516();
		var_61_bool = var_56_int == (int)42548;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_3849(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_4727(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf20";
	
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_58_bool = var_56_int == (int)10;
	if(var_58_bool != 0) {
		func_3985();
		var_60_bool = 0;
		var_60_bool = 0;
		var_61_bool = 0;
		func_4240(var_61_bool);
		if(var_61_bool != 0) {
			var_64_bool = 0;
			func_3954(var_64_bool);
			if(var_64_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool != 0) {
			var_81_bool = 0;
			func_3934(var_81_bool);
			if(var_81_bool != 0) {
				var_100_bool = 0; var_101_object = Obj();
				func_4523(Obj());
				var_102_object = var_101_object;
				func_4390(var_100_bool, var_101_object);
			}
		} else {
			func_3949(var_56_int);
			func_3976();
		}
	}
	return 0;
	
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_4167();
	func_3985();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0();
	func_3985();
	var_57_string = "";
	func_4470("Neutral");
	func_3976();
	return 0;
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool;
	if(var_57_bool != 0) {
		func_3976();
	} else {
		var_63_string = "";
		func_4470("Neutral");
	}
	return 0;
	
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0;
	IsOverrideActive(var_58_bool);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		EventDisable(0);
		func_4167();
		var_60_bool = 0; var_61_object = Obj();
		var_56_object = var_61_object;
		func_4231(var_60_bool, var_61_object);
		EventEnable(0);
		var_74_object = Obj();
		var_56_object = var_74_object;
		func_5418(var_74_object);
		var_1081_string = "";
		func_4470("Neutral");
		func_3985();
		func_3976();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_3920(var_55_cvector);
	return 0;
}


func_4096()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0;
	WaitForAnimEnd();
	var_73_bool = 0;
	func_4240(var_73_bool);
	var_74_bool = var_73_bool == 0; //@nz
	if(var_74_bool != 0) {
		return 12;
	}
	func_4702((int)0);
	var_75_int = var_67_int;
	var_68_int = 0;
	
Label_4110:
	var_88_bool = 0;
	var_88_bool = 0;
	var_90_bool = var_68_int < (int)5;
	if(var_90_bool != 0) {
		var_91_bool = 0;
		func_4240(var_91_bool);
		if(var_91_bool != 0) {
			var_88_bool = 1;
		}
	}
	if(var_88_bool != 0) {
		var_92_bool = var_67_int == 0; //@nz
		if(var_92_bool != 0) {
			Sleep((int)3, var_69_bool);
			var_94_bool = var_69_bool == 0; //@nz
			if(var_94_bool != 0) {
			} else {
		} else {
				irand(var_70_int, var_67_int);
				irand(var_71_int, (int)5);
				var_100_bool = var_71_int != (int)0;
				if(var_100_bool != 0) {
					var_70_int = 0;
				}
				var_102_string = ""; var_103_int = 0;
				var_70_int = var_103_int;
				func_4695(var_102_string, var_103_int);
				PlayAnimation("all", var_102_string);
				WaitForAnimEnd(var_72_bool);
				var_104_bool = var_72_bool == 0; //@nz
				if(var_104_bool == 0) goto Label_4151;
				goto Label_4162;
		}
		Label_4151:
			var_95_bool = 0;
			func_4165(var_95_bool);
			var_96_bool = var_95_bool == 0; //@nz
			if(var_96_bool != 0) {
				goto Label_4162;
			}
			ResetAAS();
			var_68_int = var_68_int + (int)1;
			goto Label_4110;

		}
	}
Label_4162:
	ResetAAS();
	return 12;
	
}


func_0(var_0_object, var_306_int, var_307_object)
{
	var_309_object = Obj(); var_310_bool = 0; var_311_int = 0; var_312_bool = 0; var_313_object = Obj(); var_314_bool = 0; var_315_int = 0; var_316_bool = 0;
	var_0_object = var_307_object;
	var_317_bool = 0; var_318_object = Obj(); var_319_float = 0;
	var_307_object = var_318_object;
	func_4245(var_317_bool, var_318_object, (float)70.0);
	var_320_bool = var_317_bool == 0; //@nz
	if(var_320_bool != 0) {
		var_306_int = -2;
		return 8;
	}
	CreateDialog(var_313_object);
	var_321_int = 0;
	func_4721(var_321_int);
	@@var_313_object:SetNPCName(var_321_int);
	var_322_int = 0;
	func_4719(var_322_int);
	@@var_313_object:SetNPCDescription(var_322_int);
	var_323_string = "";
	func_4723(var_323_string);
	@@var_313_object:SetPhoto(var_323_string);
	var_324_string = "";
	func_4725(var_324_string);
	@@var_313_object:SetPhoto2(var_324_string);
	var_325_int = 0;
	func_5364(var_325_int);
	@@var_313_object:SetPlayerName(var_325_int);
	IsOverrideActive(var_314_bool);
	var_326_bool = var_314_bool;
	if(var_326_bool != 0) {
		var_306_int = -2;
		return 8;
	}
	DoDialog(var_313_object);
	var_327_bool = 0; var_328_object = Obj();
	func_4523(Obj());
	var_329_object = var_328_object;
	func_4332(var_327_bool, var_328_object);
	var_330_object = Obj(); var_331_object = Obj();
	var_307_object = var_330_object;
	var_313_object = var_331_object;
	TaskCall(1);
	func_81(var_332_object, var_333_object, var_334_string, var_335_bool, var_330_object, var_331_object);
	TaskReturn();
	@@var_313_object:IsDialogEnd(var_316_bool);
	
Label_63:
	var_376_bool = var_316_bool == 0; //@nz
	if(var_376_bool != 0) {
		sync();
		@@var_313_object:IsDialogEnd(var_316_bool);
		goto Label_63;
	}
	var_307_object = Obj();
	func_4314();
	StopDialog(var_313_object);
	@@var_313_object:GetReturnValue((int)-1);
	var_315_int = var_306_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2562(var_0_object, var_1_object, var_2_object, var_3_string, var_567_object, var_568_object)
{
	var_0_object = var_568_object;
	var_1_object = var_567_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_574_string = "";
		func_2630(var_568_object, "Neutral");
		@@@var_0_object:SetMessage((int)539425);
		@@@var_0_object:ClearReplies();
		var_583_bool = 0; var_584_object = Obj();
		var_584_object = var_1_object;
		func_5064(var_584_object);
		if(var_583_bool != 0) {
			@@@var_0_object:AddReply((int)539426, (int)42755, (int)41357);
		}
		@@@var_0_object:AddReply((int)539433, (int)-1, (int)41364);
		@@@var_0_object:AddReply((int)540718, (int)-1, (int)42754);
		goto Label_2600;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa06";
	}
Label_2600:
	var_598_bool = 0;
	func_4727(var_598_bool);
	if(var_598_bool != 0) {

	Label_2604:
		lshWaitForAnimEnd();
		var_599_string = var_3_string;
		if(var_599_string != 0) {
		} else {
			var_600_string = "";
			var_600_string = var_2_object;
			func_4470(var_600_string);
			goto Label_2604;
	}
		PlayAnimation("all", "idle");

	Label_2619:
		WaitForAnimEnd();
		var_603_string = var_3_string;
		if(var_603_string != 0) {
			goto Label_2629;
		}
		PlayAnimation("all", "idle");
		goto Label_2619;
	}
	goto Label_2629;
	
Label_2629:
	return 0;
	
}


func_1024(var_0_object, var_460_int, var_461_object)
{
	var_463_object = Obj(); var_464_bool = 0; var_465_int = 0; var_466_bool = 0; var_467_object = Obj(); var_468_bool = 0; var_469_int = 0; var_470_bool = 0;
	var_0_object = var_461_object;
	var_471_bool = 0; var_472_object = Obj(); var_473_float = 0;
	var_461_object = var_472_object;
	func_4245(var_471_bool, var_472_object, (float)70.0);
	var_474_bool = var_471_bool == 0; //@nz
	if(var_474_bool != 0) {
		var_460_int = -2;
		return 8;
	}
	CreateDialog(var_467_object);
	var_475_int = 0;
	func_4721(var_475_int);
	@@var_467_object:SetNPCName(var_475_int);
	var_476_int = 0;
	func_4719(var_476_int);
	@@var_467_object:SetNPCDescription(var_476_int);
	var_477_string = "";
	func_4723(var_477_string);
	@@var_467_object:SetPhoto(var_477_string);
	var_478_string = "";
	func_4725(var_478_string);
	@@var_467_object:SetPhoto2(var_478_string);
	var_479_int = 0;
	func_5364(var_479_int);
	@@var_467_object:SetPlayerName(var_479_int);
	IsOverrideActive(var_468_bool);
	var_480_bool = var_468_bool;
	if(var_480_bool != 0) {
		var_460_int = -2;
		return 8;
	}
	DoDialog(var_467_object);
	var_481_bool = 0; var_482_object = Obj();
	func_4523(Obj());
	var_483_object = var_482_object;
	func_4332(var_481_bool, var_482_object);
	var_484_object = Obj(); var_485_object = Obj();
	var_461_object = var_484_object;
	var_467_object = var_485_object;
	TaskCall(7);
	func_1105(var_486_object, var_487_object, var_488_string, var_489_bool, var_484_object, var_485_object);
	TaskReturn();
	@@var_467_object:IsDialogEnd(var_470_bool);
	
Label_1087:
	var_539_bool = var_470_bool == 0; //@nz
	if(var_539_bool != 0) {
		sync();
		@@var_467_object:IsDialogEnd(var_470_bool);
		goto Label_1087;
	}
	var_461_object = Obj();
	func_4314();
	StopDialog(var_467_object);
	@@var_467_object:GetReturnValue((int)-1);
	var_469_int = var_460_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1545(var_2_object, var_641_string)
{
	var_642_bool = 0;
	func_4727(var_642_bool);
	var_643_bool = var_642_bool == 0; //@nz
	if(var_643_bool != 0) {
		return 0;
	}
	var_644_bool = var_641_string == var_2_object;
	if(var_644_bool != 0) {
		return 0;
	}
	var_645_string = ""; var_646_bool = 0;
	var_641_string = var_645_string;
	var_648_bool = var_641_string == "";
	if(var_648_bool != 0) {
		var_646_bool = 0;
	} else {
		var_646_bool = 1;
	}
	func_4486(var_645_string, var_646_bool);
	var_2_object = var_641_string;
	return 0;
	
}


func_5130(var_830_bool)
{
	var_832_int = 0; var_833_string = "";
	func_4550(var_832_int, "ook9Maria1");
	var_835_bool = var_832_int == (int)0;
	if(var_835_bool != 0) {
		var_830_bool = 1;
		return 0;
	}
	var_830_bool = 0;
	return 0;
}


func_4618(var_166_bool, var_167_object, var_168_float)
{
	var_169_bool = var_167_object == 0; //@nz
	if(var_169_bool != 0) {
		var_166_bool = 0;
		return 0;
	}
	var_171_bool = var_168_float > (int)0;
	if(var_171_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_202_bool = var_168_float < (int)0;
		if(var_202_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_4639;
		}
		var_166_bool = 0;
		return 0;
	}
Label_4639:
	var_173_float = 0;
	var_168_float = var_173_float;
	func_4653(var_173_float);
	var_177_bool = 0; var_178_object = Obj(); var_179_string = ""; var_180_float = 0; var_181_float = 0; var_182_float = 0;
	var_167_object = var_178_object;
	var_168_float = var_180_float;
	func_4192(var_177_bool, var_178_object, "reputation", var_180_float, (float)0, (float)1);
	var_166_bool = 1;
	return 0;
	
}


func_3089(var_2_object, var_705_string)
{
	var_706_bool = 0;
	func_4727(var_706_bool);
	var_707_bool = var_706_bool == 0; //@nz
	if(var_707_bool != 0) {
		return 0;
	}
	var_708_bool = var_705_string == var_2_object;
	if(var_708_bool != 0) {
		return 0;
	}
	var_709_string = ""; var_710_bool = 0;
	var_705_string = var_709_string;
	var_712_bool = var_705_string == "";
	if(var_712_bool != 0) {
		var_710_bool = 0;
	} else {
		var_710_bool = 1;
	}
	func_4486(var_709_string, var_710_bool);
	var_2_object = var_705_string;
	return 0;
	
}


func_5142(var_845_bool)
{
	var_847_int = 0; var_848_string = "";
	func_4550(var_847_int, "ook9Maria2");
	var_850_bool = var_847_int == (int)0;
	if(var_850_bool != 0) {
		var_845_bool = 1;
		return 0;
	}
	var_845_bool = 0;
	return 0;
}


func_5154(var_924_bool)
{
	var_926_int = 0; var_927_string = "";
	func_4550(var_926_int, "ook10Maria1");
	var_929_bool = var_926_int == (int)0;
	if(var_929_bool != 0) {
		var_924_bool = 1;
		return 0;
	}
	var_924_bool = 0;
	return 0;
}


func_4653(var_173_float)
{
	var_174_object = Obj(); var_175_object = Obj();
	CreateFloatVector(var_175_object);
	@@var_175_object:add(var_173_float);
	SendWorldWndMessage((int)16, var_175_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5166(var_939_bool)
{
	var_941_int = 0; var_942_string = "";
	func_4550(var_941_int, "ook10Maria2");
	var_944_bool = var_941_int == (int)0;
	if(var_944_bool != 0) {
		var_939_bool = 1;
		return 0;
	}
	var_939_bool = 0;
	return 0;
}


func_4663(var_89_bool, var_90_string, var_91_string)
{
	var_92_object = Obj(); var_93_object = Obj();
	FindActor(var_93_object, var_90_string);
	var_94_bool = var_93_object == 0; //@ne
	if(var_94_bool != 0) {
		var_89_bool = 0;
		return 2;
	}
	Trigger(var_93_object, var_91_string);
	var_89_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5178(var_436_bool)
{
	var_438_int = 0; var_439_string = "";
	func_4550(var_438_int, "ook3Maria2");
	var_441_bool = var_438_int == (int)0;
	if(var_441_bool != 0) {
		var_436_bool = 1;
		return 0;
	}
	var_436_bool = 0;
	return 0;
}


func_4675(var_79_float)
{
	var_80_float = 0; var_81_float = 0;
	GetGameTime(var_81_float);
	var_81_float = var_79_float;
	return 2;
}


func_4165(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_2630(var_2_object, var_574_string)
{
	var_575_bool = 0;
	func_4727(var_575_bool);
	var_576_bool = var_575_bool == 0; //@nz
	if(var_576_bool != 0) {
		return 0;
	}
	var_577_bool = var_574_string == var_2_object;
	if(var_577_bool != 0) {
		return 0;
	}
	var_578_string = ""; var_579_bool = 0;
	var_574_string = var_578_string;
	var_581_bool = var_574_string == "";
	if(var_581_bool != 0) {
		var_579_bool = 0;
	} else {
		var_579_bool = 1;
	}
	func_4486(var_578_string, var_579_bool);
	var_2_object = var_574_string;
	return 0;
	
}


func_4167()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4680(var_204_int)
{
	var_205_float = 0; var_206_float = 0;
	GetGameTime(var_206_float);
	var_208_int = 0;
	var_208_int = var_206_float / (int)24;
	var_204_int = (int)1 + var_208_int;
	return 2;
}


func_5190(var_718_bool)
{
	func_5398((bool)0);
	var_720_bool = var_718_bool;
	return 0;
}


func_4172(var_71_float, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetPosition(var_76_cvector);
	@@var_72_object:GetPosition(var_77_cvector);
	var_78_cvector = var_77_cvector - var_76_cvector;
	var_71_float = var_78_cvector | var_78_cvector;
	return 6;
}


func_5196(var_728_bool)
{
	func_5412((bool)0);
	var_730_bool = var_728_bool;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_330_object, var_331_object)
{
	var_0_object = var_331_object;
	var_1_object = var_330_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_337_bool = 0; var_338_object = Obj();
		var_338_object = var_1_object;
		func_4980(var_338_object);
		if(var_337_bool != 0) {
			var_345_string = "";
			func_164(var_331_object, "Neutral");
			@@@var_0_object:SetMessage((int)524759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526896, (int)28184, (int)28183);
			@@@var_0_object:AddReply((int)526903, (int)28184, (int)28191);
		} else {
				var_368_string = "";
				func_164(var_331_object, "Neutral");
				@@@var_0_object:SetMessage((int)524761);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526893, (int)-1, (int)28180);
				@@@var_0_object:AddReply((int)542280, (int)-1, (int)44625);
				goto Label_134;
		}
	}
Label_134:
	var_360_bool = 0;
	func_4727(var_360_bool);
	if(var_360_bool != 0) {

	Label_138:
		lshWaitForAnimEnd();
		var_361_string = var_3_string;
		if(var_361_string != 0) {
		} else {
			var_362_string = "";
			var_362_string = var_2_object;
			func_4470(var_362_string);
			goto Label_138;
	}
		PlayAnimation("all", "idle");

	Label_153:
		WaitForAnimEnd();
		var_365_string = var_3_string;
		if(var_365_string != 0) {
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


func_1105(var_0_object, var_1_object, var_2_object, var_3_string, var_484_object, var_485_object)
{
	var_0_object = var_485_object;
	var_1_object = var_484_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_491_bool = 0;
		var_491_bool = 0;
		var_492_bool = 0; var_493_object = Obj();
		var_493_object = var_1_object;
		func_5016(var_493_object);
		if(var_492_bool != 0) {
			var_498_bool = 0; var_499_object = Obj();
			var_499_object = var_1_object;
			func_5028(var_499_object);
			if(var_498_bool != 0) {
				var_491_bool = 1;
			}
		}
		if(var_491_bool != 0) {
			var_504_object = Obj(); var_505_object = Obj();
			var_504_object = var_1_object;
			var_505_object = var_0_object;
			func_4777();
			var_508_string = "";
			func_1202(var_485_object, "Neutral");
			@@@var_0_object:SetMessage((int)525756);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540712, (int)42749, (int)42748);
			@@@var_0_object:AddReply((int)540717, (int)-1, (int)42753);
		} else {
				var_531_string = "";
				func_1202(var_485_object, "Neutral");
				@@@var_0_object:SetMessage((int)525759);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525760, (int)-1, (int)27072);
				@@@var_0_object:AddReply((int)540711, (int)-1, (int)42747);
				goto Label_1172;
		}
	}
Label_1172:
	var_523_bool = 0;
	func_4727(var_523_bool);
	if(var_523_bool != 0) {

	Label_1176:
		lshWaitForAnimEnd();
		var_524_string = var_3_string;
		if(var_524_string != 0) {
		} else {
			var_525_string = "";
			var_525_string = var_2_object;
			func_4470(var_525_string);
			goto Label_1176;
	}
		PlayAnimation("all", "idle");

	Label_1191:
		WaitForAnimEnd();
		var_528_string = var_3_string;
		if(var_528_string != 0) {
			goto Label_1201;
		}
		PlayAnimation("all", "idle");
		goto Label_1191;

	}
	goto Label_1201;
	
Label_1201:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x455";


func_5202(var_755_bool)
{
	func_5406((bool)0);
	var_757_bool = var_755_bool;
	return 0;
}


func_4180(var_185_bool, var_186_object, var_187_string)
{
	var_188_bool = 0; var_189_bool = 0;
	var_192_bool = IsFuncExist(var_186_object, "HasProperty", (int)2);
	var_193_bool = var_192_bool == 0; //@nz
	if(var_193_bool != 0) {
		var_185_bool = 0;
		return 2;
	}
	@@var_186_object:HasProperty(var_187_string, var_189_bool);
	var_189_bool = var_185_bool;
	return 2;
}


func_4689(var_303_bool, var_304_int)
{
	var_305_int = 0;
	func_4680(var_305_int);
	var_303_bool = var_305_int == var_304_int;
	return 0;
}


func_597(var_0_object, var_380_int, var_381_object)
{
	var_383_object = Obj(); var_384_bool = 0; var_385_int = 0; var_386_bool = 0; var_387_object = Obj(); var_388_bool = 0; var_389_int = 0; var_390_bool = 0;
	var_0_object = var_381_object;
	var_391_bool = 0; var_392_object = Obj(); var_393_float = 0;
	var_381_object = var_392_object;
	func_4245(var_391_bool, var_392_object, (float)70.0);
	var_394_bool = var_391_bool == 0; //@nz
	if(var_394_bool != 0) {
		var_380_int = -2;
		return 8;
	}
	CreateDialog(var_387_object);
	var_395_int = 0;
	func_4721(var_395_int);
	@@var_387_object:SetNPCName(var_395_int);
	var_396_int = 0;
	func_4719(var_396_int);
	@@var_387_object:SetNPCDescription(var_396_int);
	var_397_string = "";
	func_4723(var_397_string);
	@@var_387_object:SetPhoto(var_397_string);
	var_398_string = "";
	func_4725(var_398_string);
	@@var_387_object:SetPhoto2(var_398_string);
	var_399_int = 0;
	func_5364(var_399_int);
	@@var_387_object:SetPlayerName(var_399_int);
	IsOverrideActive(var_388_bool);
	var_400_bool = var_388_bool;
	if(var_400_bool != 0) {
		var_380_int = -2;
		return 8;
	}
	DoDialog(var_387_object);
	var_401_bool = 0; var_402_object = Obj();
	func_4523(Obj());
	var_403_object = var_402_object;
	func_4332(var_401_bool, var_402_object);
	var_404_object = Obj(); var_405_object = Obj();
	var_381_object = var_404_object;
	var_387_object = var_405_object;
	TaskCall(5);
	func_678(var_406_object, var_407_object, var_408_string, var_409_bool, var_404_object, var_405_object);
	TaskReturn();
	@@var_387_object:IsDialogEnd(var_390_bool);
	
Label_660:
	var_456_bool = var_390_bool == 0; //@nz
	if(var_456_bool != 0) {
		sync();
		@@var_387_object:IsDialogEnd(var_390_bool);
		goto Label_660;
	}
	var_381_object = Obj();
	func_4314();
	StopDialog(var_387_object);
	@@var_387_object:GetReturnValue((int)-1);
	var_389_int = var_380_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4695(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = "";
	var_85_int = var_82_int;
	if(var_85_int != 0) {
		"idle" = "idle" + var_82_int;
	}
	var_84_string = var_81_string;
	return 2;
}


func_5208()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)449, (int)1, (int)527007);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_5286(var_71_bool, var_72_object, (int)447);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4702(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0;
	var_78_int = 0;
	
Label_4704:
	var_81_string = ""; var_82_int = 0;
	var_78_int = var_82_int;
	func_4695(var_81_string, var_82_int);
	HasAnimation(var_79_bool, "all", var_81_string);
	var_86_bool = var_79_bool == 0; //@nz
	if(var_86_bool != 0) {
	} else {
		var_78_int = var_78_int + (int)1;
		goto Label_4704;
	}
	var_78_int = var_75_int;
	return 4;
	
}


func_4192(var_177_bool, var_178_object, var_179_string, var_180_float, var_181_float, var_182_float)
{
	var_183_float = 0; var_184_float = 0;
	var_185_bool = 0; var_186_object = Obj(); var_187_string = "";
	var_178_object = var_186_object;
	var_179_string = var_187_string;
	func_4180(var_185_bool, var_186_object, var_187_string);
	var_194_bool = var_185_bool == 0; //@nz
	if(var_194_bool != 0) {
		var_177_bool = 0;
		return 2;
	}
	@@var_178_object:GetProperty(var_179_string, var_184_float);
	var_195_float = 0; var_196_float = 0; var_197_float = 0; var_198_float = 0;
	var_196_float = var_184_float + var_180_float;
	var_181_float = var_197_float;
	var_182_float = var_198_float;
	func_4539(var_195_float, var_196_float, var_197_float, var_198_float);
	@@var_178_object:SetProperty(var_179_string, var_195_float);
	var_177_bool = 1;
	return 2;
}


func_5221()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)330, (int)2, (int)524775);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_5286(var_71_bool, var_72_object, (int)326);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4719(var_137_int)
{
	var_137_int = 515543;
	return 0;
}


func_4721(var_136_int)
{
	var_136_int = 502868;
	return 0;
}


func_5234()
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateDiaryEntry(var_77_object, (int)762, (int)2, (int)539747);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_77_object = var_82_object;
	func_5286(var_81_bool, var_82_object, (int)757);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4723(var_138_string)
{
	var_138_string = "ui/NPC_Maria.png";
	return 0;
}


func_4725(var_139_string)
{
	var_139_string = "ui/NPC_Maria_b.png";
	return 0;
}


func_4214(var_109_object, var_110_string, var_111_int)
{
	var_112_int = 0; var_113_int = 0;
	@@var_109_object:GetProperty(var_110_string, var_113_int);
	var_114_int = var_113_int + var_111_int;
	@@var_109_object:SetProperty(var_110_string, var_114_int);
	return 2;
}


func_4727(var_131_bool)
{
	var_131_bool = 1;
	return 0;
}


func_4729(var_106_object)
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0;
	func_5314(Obj());
	var_110_object = var_107_object;
	func_5331(var_107_object, "pt_map_eva", (float)2);
	var_130_object = Obj();
	func_5314(var_130_object);
	@@var_106_object:ShowMap(var_130_object);
	return 0;
}


func_4221(var_64_bool, var_65_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0;
	GetPosition(var_69_cvector);
	var_70_cvector = var_65_cvector - var_69_cvector;
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_72_float, var_73_float, var_71_bool);
	var_71_bool = var_64_bool;
	return 6;
}


func_3710(var_0_object, var_1025_int, var_1026_object)
{
	var_1028_object = Obj(); var_1029_bool = 0; var_1030_int = 0; var_1031_bool = 0; var_1032_object = Obj(); var_1033_bool = 0; var_1034_int = 0; var_1035_bool = 0;
	var_0_object = var_1026_object;
	var_1036_bool = 0; var_1037_object = Obj(); var_1038_float = 0;
	var_1026_object = var_1037_object;
	func_4245(var_1036_bool, var_1037_object, (float)70.0);
	var_1039_bool = var_1036_bool == 0; //@nz
	if(var_1039_bool != 0) {
		var_1025_int = -2;
		return 8;
	}
	CreateDialog(var_1032_object);
	var_1040_int = 0;
	func_4721(var_1040_int);
	@@var_1032_object:SetNPCName(var_1040_int);
	var_1041_int = 0;
	func_4719(var_1041_int);
	@@var_1032_object:SetNPCDescription(var_1041_int);
	var_1042_string = "";
	func_4723(var_1042_string);
	@@var_1032_object:SetPhoto(var_1042_string);
	var_1043_string = "";
	func_4725(var_1043_string);
	@@var_1032_object:SetPhoto2(var_1043_string);
	var_1044_int = 0;
	func_5364(var_1044_int);
	@@var_1032_object:SetPlayerName(var_1044_int);
	IsOverrideActive(var_1033_bool);
	var_1045_bool = var_1033_bool;
	if(var_1045_bool != 0) {
		var_1025_int = -2;
		return 8;
	}
	DoDialog(var_1032_object);
	var_1046_bool = 0; var_1047_object = Obj();
	func_4523(Obj());
	var_1048_object = var_1047_object;
	func_4332(var_1046_bool, var_1047_object);
	var_1049_object = Obj(); var_1050_object = Obj();
	var_1026_object = var_1049_object;
	var_1032_object = var_1050_object;
	TaskCall(21);
	func_3791(var_1051_object, var_1052_object, var_1053_string, var_1054_bool, var_1049_object, var_1050_object);
	TaskReturn();
	@@var_1032_object:IsDialogEnd(var_1035_bool);
	
Label_3773:
	var_1079_bool = var_1035_bool == 0; //@nz
	if(var_1079_bool != 0) {
		sync();
		@@var_1032_object:IsDialogEnd(var_1035_bool);
		goto Label_3773;
	}
	var_1026_object = Obj();
	func_4314();
	StopDialog(var_1032_object);
	@@var_1032_object:GetReturnValue((int)-1);
	var_1034_int = var_1025_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5247()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)742, (int)2, (int)539459);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_5286(var_87_bool, var_88_object, (int)740);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4231(var_60_bool, var_61_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	@@var_61_object:GetPosition(var_63_cvector);
	var_64_bool = 0; var_65_cvector = CVector(0,0,0);
	var_63_cvector = var_65_cvector;
	func_4221(var_64_bool, var_65_cvector);
	var_64_bool = var_60_bool;
	return 2;
}


func_4745(var_137_object)
{
	Trace("money 4000 is given");
	var_140_object = Obj(); var_141_int = 0;
	var_137_object = var_140_object;
	func_4567(var_140_object, (int)4000);
	return 0;
}


func_5260()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)425, (int)1, (int)526224);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_5286(var_71_bool, var_72_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4240(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0;
	IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
	return 2;
}


func_4755(var_164_object)
{
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0;
	var_164_object = var_167_object;
	func_4618(var_166_bool, var_167_object, (float)-0.05000000074505806);
	return 0;
}


func_4245(var_88_bool, var_89_object, var_90_float)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0;
	@@var_89_object:GetPosition(var_101_cvector);
	@@var_89_object:GetEyesHeight(var_100_float);
	var_109_float = GetByIndex(var_101_cvector, 1);
	var_109_float = var_109_float + var_100_float;
	SetByIndex(var_101_cvector, 1) = var_109_float;
	GetPosition(var_102_cvector);
	GetEyesHeight(var_100_float);
	var_110_float = GetByIndex(var_102_cvector, 1);
	var_110_float = var_110_float + var_100_float;
	SetByIndex(var_102_cvector, 1) = var_110_float;
	var_103_cvector = var_101_cvector - var_102_cvector;
	var_111_float = GetByIndex(var_103_cvector, 1);
	SetByIndex(var_103_cvector, 1) = (float)0;
	var_112_int = var_103_cvector | var_103_cvector;
	var_113_float = sqrt(var_112_int);
	var_103_cvector = var_103_cvector / var_113_float;
	var_104_cvector = -var_103_cvector;
	var_114_float = var_103_cvector * var_90_float;
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0);
	var_116_cvector = var_104_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4529(var_115_cvector, var_116_cvector);
	var_124_float = var_115_cvector * (int)25;
	var_125_int = var_114_float + var_124_float;
	var_105_cvector = var_125_int - CVector(0.0, 10.0, 0.0);
	var_106_cvector = var_102_cvector + var_105_cvector;
	IsOverrideActive(var_107_bool);
	var_127_bool = var_107_bool;
	if(var_127_bool != 0) {
		var_88_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_106_cvector, var_104_cvector, (bool)1);
	var_129_float = GetByIndex(var_105_cvector, 0);
	var_130_float = GetByIndex(var_105_cvector, 2);
	Rotate(var_129_float, var_130_float);
	var_131_bool = 0;
	func_4727(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		HasAnimationTrack(var_108_bool, "head");
		var_133_bool = var_108_bool;
		if(var_133_bool == 0) goto Label_4308;
		LookAsyncCamera("head");
	}
Label_4308:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_88_bool = 1;
	return 18;
	
}


func_5118(var_760_bool)
{
	var_762_int = 0; var_763_string = "";
	func_4550(var_762_int, "ook8Maria2");
	var_765_bool = var_762_int == (int)0;
	if(var_765_bool != 0) {
		var_760_bool = 1;
		return 0;
	}
	var_760_bool = 0;
	return 0;
}


func_5273(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj();
	GetDiaryRoot(var_92_object);
	var_93_bool = var_92_object == 0; //@nz
	if(var_93_bool != 0) {
		Trace("Can't retrieve diary root");
		var_90_object = 0;
		return 2;
	}
	var_92_object = var_90_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4762()
{
	SetVariable("k1q02", (int)4);
	func_5221();
	return 0;
}


func_4771()
{
	SetVariable("ook3Maria1", (int)1);
	return 0;
}


func_164(var_2_object, var_345_string)
{
	var_346_bool = 0;
	func_4727(var_346_bool);
	var_347_bool = var_346_bool == 0; //@nz
	if(var_347_bool != 0) {
		return 0;
	}
	var_348_bool = var_345_string == var_2_object;
	if(var_348_bool != 0) {
		return 0;
	}
	var_349_string = ""; var_350_bool = 0;
	var_345_string = var_349_string;
	var_352_bool = var_345_string == "";
	if(var_352_bool != 0) {
		var_350_bool = 0;
	} else {
		var_350_bool = 1;
	}
	func_4486(var_349_string, var_350_bool);
	var_2_object = var_345_string;
	return 0;
	
}


func_678(var_0_object, var_1_object, var_2_object, var_3_string, var_404_object, var_405_object)
{
	var_0_object = var_405_object;
	var_1_object = var_404_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_411_string = "";
		func_760(var_405_object, "Neutral");
		@@@var_0_object:SetMessage((int)525607);
		@@@var_0_object:ClearReplies();
		var_420_bool = 0;
		var_420_bool = 0;
		var_421_bool = 0; var_422_object = Obj();
		var_422_object = var_1_object;
		func_4992(var_422_object);
		if(var_421_bool != 0) {
			var_427_bool = 0; var_428_object = Obj();
			var_428_object = var_1_object;
			func_5004(var_428_object);
			if(var_427_bool != 0) {
				var_420_bool = 1;
			}
		}
		if(var_420_bool != 0) {
			@@@var_0_object:AddReply((int)525608, (int)26956, (int)26955);
		}
		var_436_bool = 0; var_437_object = Obj();
		var_437_object = var_1_object;
		func_5178(var_437_object);
		if(var_436_bool != 0) {
			@@@var_0_object:AddReply((int)540700, (int)42737, (int)42736);
		}
		@@@var_0_object:AddReply((int)525613, (int)-1, (int)26960);
		goto Label_730;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2aa";
	}
Label_730:
	var_448_bool = 0;
	func_4727(var_448_bool);
	if(var_448_bool != 0) {

	Label_734:
		lshWaitForAnimEnd();
		var_449_string = var_3_string;
		if(var_449_string != 0) {
		} else {
			var_450_string = "";
			var_450_string = var_2_object;
			func_4470(var_450_string);
			goto Label_734;
	}
		PlayAnimation("all", "idle");

	Label_749:
		WaitForAnimEnd();
		var_453_string = var_3_string;
		if(var_453_string != 0) {
			goto Label_759;
		}
		PlayAnimation("all", "idle");
		goto Label_749;
	}
	goto Label_759;
	
Label_759:
	return 0;
	
}


func_5286(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0;
	func_5273(Obj());
	var_90_object = var_87_object;
	@@var_87_object:Find(var_83_int, var_88_object);
	var_95_bool = var_88_object == 0; //@nz
	if(var_95_bool != 0) {
		var_97_int = "Can't find diary parent with id: " + var_83_int;
		Trace(var_97_int);
		var_81_bool = 0;
		return 6;
	}
	@@var_88_object:AddChild(var_82_object);
	SendWorldWndMessage((int)7);
	@@var_82_object:GetCategory(var_89_int);
	SetDiarySection(var_89_int);
	var_81_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4777()
{
	SetVariable("ook4Maria1", (int)1);
	return 0;
}


func_2222(var_0_object, var_966_int, var_967_object)
{
	var_969_object = Obj(); var_970_bool = 0; var_971_int = 0; var_972_bool = 0; var_973_object = Obj(); var_974_bool = 0; var_975_int = 0; var_976_bool = 0;
	var_0_object = var_967_object;
	var_977_bool = 0; var_978_object = Obj(); var_979_float = 0;
	var_967_object = var_978_object;
	func_4245(var_977_bool, var_978_object, (float)70.0);
	var_980_bool = var_977_bool == 0; //@nz
	if(var_980_bool != 0) {
		var_966_int = -2;
		return 8;
	}
	CreateDialog(var_973_object);
	var_981_int = 0;
	func_4721(var_981_int);
	@@var_973_object:SetNPCName(var_981_int);
	var_982_int = 0;
	func_4719(var_982_int);
	@@var_973_object:SetNPCDescription(var_982_int);
	var_983_string = "";
	func_4723(var_983_string);
	@@var_973_object:SetPhoto(var_983_string);
	var_984_string = "";
	func_4725(var_984_string);
	@@var_973_object:SetPhoto2(var_984_string);
	var_985_int = 0;
	func_5364(var_985_int);
	@@var_973_object:SetPlayerName(var_985_int);
	IsOverrideActive(var_974_bool);
	var_986_bool = var_974_bool;
	if(var_986_bool != 0) {
		var_966_int = -2;
		return 8;
	}
	DoDialog(var_973_object);
	var_987_bool = 0; var_988_object = Obj();
	func_4523(Obj());
	var_989_object = var_988_object;
	func_4332(var_987_bool, var_988_object);
	var_990_object = Obj(); var_991_object = Obj();
	var_967_object = var_990_object;
	var_973_object = var_991_object;
	TaskCall(13);
	func_2303(var_992_object, var_993_object, var_994_string, var_995_bool, var_990_object, var_991_object);
	TaskReturn();
	@@var_973_object:IsDialogEnd(var_976_bool);
	
Label_2285:
	var_1023_bool = var_976_bool == 0; //@nz
	if(var_1023_bool != 0) {
		sync();
		@@var_973_object:IsDialogEnd(var_976_bool);
		goto Label_2285;
	}
	var_967_object = Obj();
	func_4314();
	StopDialog(var_973_object);
	@@var_973_object:GetReturnValue((int)-1);
	var_975_int = var_966_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4783()
{
	SetVariable("k7q01", (int)7);
	func_5260();
	return 0;
}


func_1202(var_2_object, var_508_string)
{
	var_509_bool = 0;
	func_4727(var_509_bool);
	var_510_bool = var_509_bool == 0; //@nz
	if(var_510_bool != 0) {
		return 0;
	}
	var_511_bool = var_508_string == var_2_object;
	if(var_511_bool != 0) {
		return 0;
	}
	var_512_string = ""; var_513_bool = 0;
	var_508_string = var_512_string;
	var_515_bool = var_508_string == "";
	if(var_515_bool != 0) {
		var_513_bool = 0;
	} else {
		var_513_bool = 1;
	}
	func_4486(var_512_string, var_513_bool);
	var_2_object = var_508_string;
	return 0;
	
}


func_4792()
{
	SetVariable("k10q01", (int)2);
	func_5208();
	var_89_bool = 0; var_90_string = ""; var_91_string = "";
	func_4663(var_89_bool, "quest_k10_01", "place_soldiers");
	return 0;
}


func_5314(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); var_72_object = Obj();
	GetMainOutdoorScene(var_71_object);
	var_73_bool = var_71_object == 0; //@ne
	if(var_73_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_72_object = 0;
		var_72_object = var_68_object;
		return 4;
	}
	@@var_71_object:GetMap(var_72_object);
	var_72_object = var_68_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4806()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_4812(var_147_object)
{
	Trace("feromicin2 is given");
	var_150_object = Obj(); var_151_string = ""; var_152_int = 0;
	var_147_object = var_150_object;
	func_4605(var_150_object, "feromicin", (int)2);
	return 0;
}


func_1740(var_0_object, var_869_int, var_870_object)
{
	var_872_object = Obj(); var_873_bool = 0; var_874_int = 0; var_875_bool = 0; var_876_object = Obj(); var_877_bool = 0; var_878_int = 0; var_879_bool = 0;
	var_0_object = var_870_object;
	var_880_bool = 0; var_881_object = Obj(); var_882_float = 0;
	var_870_object = var_881_object;
	func_4245(var_880_bool, var_881_object, (float)70.0);
	var_883_bool = var_880_bool == 0; //@nz
	if(var_883_bool != 0) {
		var_869_int = -2;
		return 8;
	}
	CreateDialog(var_876_object);
	var_884_int = 0;
	func_4721(var_884_int);
	@@var_876_object:SetNPCName(var_884_int);
	var_885_int = 0;
	func_4719(var_885_int);
	@@var_876_object:SetNPCDescription(var_885_int);
	var_886_string = "";
	func_4723(var_886_string);
	@@var_876_object:SetPhoto(var_886_string);
	var_887_string = "";
	func_4725(var_887_string);
	@@var_876_object:SetPhoto2(var_887_string);
	var_888_int = 0;
	func_5364(var_888_int);
	@@var_876_object:SetPlayerName(var_888_int);
	IsOverrideActive(var_877_bool);
	var_889_bool = var_877_bool;
	if(var_889_bool != 0) {
		var_869_int = -2;
		return 8;
	}
	DoDialog(var_876_object);
	var_890_bool = 0; var_891_object = Obj();
	func_4523(Obj());
	var_892_object = var_891_object;
	func_4332(var_890_bool, var_891_object);
	var_893_object = Obj(); var_894_object = Obj();
	var_870_object = var_893_object;
	var_876_object = var_894_object;
	TaskCall(11);
	func_1821(var_895_object, var_896_object, var_897_string, var_898_bool, var_893_object, var_894_object);
	TaskReturn();
	@@var_876_object:IsDialogEnd(var_879_bool);
	
Label_1803:
	var_962_bool = var_879_bool == 0; //@nz
	if(var_962_bool != 0) {
		sync();
		@@var_876_object:IsDialogEnd(var_879_bool);
		goto Label_1803;
	}
	var_870_object = Obj();
	func_4314();
	StopDialog(var_876_object);
	@@var_876_object:GetReturnValue((int)-1);
	var_878_int = var_869_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3791(var_0_object, var_1_object, var_2_object, var_3_string, var_1049_object, var_1050_object)
{
	var_0_object = var_1050_object;
	var_1_object = var_1049_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1056_string = "";
		func_3849(var_1050_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_3819;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xed3";
	}
Label_3819:
	var_1071_bool = 0;
	func_4727(var_1071_bool);
	if(var_1071_bool != 0) {

	Label_3823:
		lshWaitForAnimEnd();
		var_1072_string = var_3_string;
		if(var_1072_string != 0) {
		} else {
			var_1073_string = "";
			var_1073_string = var_2_object;
			func_4470(var_1073_string);
			goto Label_3823;
	}
		PlayAnimation("all", "idle");

	Label_3838:
		WaitForAnimEnd();
		var_1076_string = var_3_string;
		if(var_1076_string != 0) {
			goto Label_3848;
		}
		PlayAnimation("all", "idle");
		goto Label_3838;
	}
	goto Label_3848;
	
Label_3848:
	return 0;
	
}


func_5331(var_107_object, var_108_string, var_109_float)
{
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_object = Obj(); var_118_bool = 0;
	GetMainOutdoorScene(var_117_object);
	var_119_bool = var_117_object == 0; //@ne
	if(var_119_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_117_object:GetLocator(var_108_string, var_118_bool, var_115_cvector, var_116_cvector);
	var_121_bool = var_118_bool == 0; //@nz
	if(var_121_bool != 0) {
		var_123_int = "Warning: outdoor scene locator " + var_108_string;
		var_125_int = var_123_int + " doesnt exist";
		Trace(var_125_int);
	}
	@@var_117_object:GetMap(var_107_object);
	var_126_bool = var_107_object == 0; //@ne
	if(var_126_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_128_float = GetByIndex(var_115_cvector, 0);
	var_129_float = GetByIndex(var_115_cvector, 2);
	@@var_107_object:SetMapParams(var_128_float, var_129_float, var_109_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4823()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k5q04", (int)2);
	func_5314(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_4675(var_79_float);
	@@var_65_object:AddMark("k5q04MariaGotoDanko", "pt_map_eva", (int)0, (int)515279, var_79_float);
	func_5247();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4314()
{
	var_295_bool = 0; var_296_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_298_bool = 0;
	func_4727(var_298_bool);
	if(var_298_bool != 0) {
	} else {
		HasAnimationTrack(var_296_bool, "head");
		var_300_bool = var_296_bool;
		if(var_300_bool == 0) goto Label_4331;
		UnlookAsync("head");
	}
Label_4331:
	return 2;
	
}


func_4332(var_149_bool, var_150_object)
{
	var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0;
	GetVariable("voice_common", var_156_int);
	var_159_int = var_156_int;
	if(var_159_int != 0) {
		var_160_bool = 0; var_161_object = Obj();
		var_150_object = var_161_object;
		func_4390(var_160_bool, var_161_object);
		var_190_bool = var_160_bool == 0; //@nz
		if(var_190_bool != 0) {
			var_191_bool = 0; var_192_object = Obj();
			var_150_object = var_192_object;
			func_4427(var_191_bool, var_192_object);
			var_226_bool = var_191_bool == 0; //@nz
			if(var_226_bool != 0) {
				var_149_bool = 0;
				return 4;
			}
		}
		irand(var_157_int, (int)2);
		var_228_int = var_157_int;
		if(var_228_int != 0) {
			var_231_int = var_156_int + (int)1;
			var_233_int = var_231_int % (int)3;
			SetVariable("voice_common", var_233_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_236_bool = 0; var_237_object = Obj();
		var_150_object = var_237_object;
		func_4427(var_236_bool, var_237_object);
		var_238_bool = var_236_bool == 0; //@nz
		if(var_238_bool != 0) {
			var_239_bool = 0; var_240_object = Obj();
			var_150_object = var_240_object;
			func_4390(var_239_bool, var_240_object);
			var_241_bool = var_239_bool == 0; //@nz
			if(var_241_bool != 0) {
				var_149_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4388;
	
Label_4388:
	var_149_bool = 1;
	return 4;
	
}


func_4846()
{
	func_5234();
	return 0;
}


func_4851()
{
	SetVariable("ook8Maria1", (int)1);
	return 0;
}


func_5364(var_140_int)
{
	var_141_int = 0; var_142_int = 0;
	GetVariable("branch", var_142_int);
	var_145_bool = var_142_int == (int)0;
	if(var_145_bool != 0) {
		var_140_int = 1;
		return 2;
	EMIT "GOTO 0x1503";
	}
	var_147_bool = var_142_int == (int)1;
	if(var_147_bool != 0) {
		var_140_int = 2;
		return 2;
	}
	var_140_int = 3;
	return 2;
}


func_760(var_2_object, var_411_string)
{
	var_412_bool = 0;
	func_4727(var_412_bool);
	var_413_bool = var_412_bool == 0; //@nz
	if(var_413_bool != 0) {
		return 0;
	}
	var_414_bool = var_411_string == var_2_object;
	if(var_414_bool != 0) {
		return 0;
	}
	var_415_string = ""; var_416_bool = 0;
	var_411_string = var_415_string;
	var_418_bool = var_411_string == "";
	if(var_418_bool != 0) {
		var_416_bool = 0;
	} else {
		var_416_bool = 1;
	}
	func_4486(var_415_string, var_416_bool);
	var_2_object = var_411_string;
	return 0;
	
}


func_4857()
{
	SetVariable("ook8Maria2", (int)1);
	return 0;
}


func_3325(var_0_object, var_784_int, var_785_object)
{
	var_787_object = Obj(); var_788_bool = 0; var_789_int = 0; var_790_bool = 0; var_791_object = Obj(); var_792_bool = 0; var_793_int = 0; var_794_bool = 0;
	var_0_object = var_785_object;
	var_795_bool = 0; var_796_object = Obj(); var_797_float = 0;
	var_785_object = var_796_object;
	func_4245(var_795_bool, var_796_object, (float)70.0);
	var_798_bool = var_795_bool == 0; //@nz
	if(var_798_bool != 0) {
		var_784_int = -2;
		return 8;
	}
	CreateDialog(var_791_object);
	var_799_int = 0;
	func_4721(var_799_int);
	@@var_791_object:SetNPCName(var_799_int);
	var_800_int = 0;
	func_4719(var_800_int);
	@@var_791_object:SetNPCDescription(var_800_int);
	var_801_string = "";
	func_4723(var_801_string);
	@@var_791_object:SetPhoto(var_801_string);
	var_802_string = "";
	func_4725(var_802_string);
	@@var_791_object:SetPhoto2(var_802_string);
	var_803_int = 0;
	func_5364(var_803_int);
	@@var_791_object:SetPlayerName(var_803_int);
	IsOverrideActive(var_792_bool);
	var_804_bool = var_792_bool;
	if(var_804_bool != 0) {
		var_784_int = -2;
		return 8;
	}
	DoDialog(var_791_object);
	var_805_bool = 0; var_806_object = Obj();
	func_4523(Obj());
	var_807_object = var_806_object;
	func_4332(var_805_bool, var_806_object);
	var_808_object = Obj(); var_809_object = Obj();
	var_785_object = var_808_object;
	var_791_object = var_809_object;
	TaskCall(19);
	func_3406(var_810_object, var_811_object, var_812_string, var_813_bool, var_808_object, var_809_object);
	TaskReturn();
	@@var_791_object:IsDialogEnd(var_794_bool);
	
Label_3388:
	var_865_bool = var_794_bool == 0; //@nz
	if(var_865_bool != 0) {
		sync();
		@@var_791_object:IsDialogEnd(var_794_bool);
		goto Label_3388;
	}
	var_785_object = Obj();
	func_4314();
	StopDialog(var_791_object);
	@@var_791_object:GetReturnValue((int)-1);
	var_793_int = var_784_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4863()
{
	SetVariable("ook9Maria1", (int)1);
	return 0;
}


func_2303(var_0_object, var_1_object, var_2_object, var_3_string, var_990_object, var_991_object)
{
	var_0_object = var_991_object;
	var_1_object = var_990_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_997_string = "";
		func_2366(var_991_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_2336;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x903";
	}
Label_2336:
	var_1015_bool = 0;
	func_4727(var_1015_bool);
	if(var_1015_bool != 0) {

	Label_2340:
		lshWaitForAnimEnd();
		var_1016_string = var_3_string;
		if(var_1016_string != 0) {
		} else {
			var_1017_string = "";
			var_1017_string = var_2_object;
			func_4470(var_1017_string);
			goto Label_2340;
	}
		PlayAnimation("all", "idle");

	Label_2355:
		WaitForAnimEnd();
		var_1020_string = var_3_string;
		if(var_1020_string != 0) {
			goto Label_2365;
		}
		PlayAnimation("all", "idle");
		goto Label_2355;
	}
	goto Label_2365;
	
Label_2365:
	return 0;
	
}


func_4869()
{
	SetVariable("ook9Maria2", (int)1);
	return 0;
}


func_5381(var_722_int)
{
	var_723_int = 0; var_724_int = 0;
	GetVariable("k2system_danko_day", var_724_int);
	var_724_int = var_722_int;
	return 2;
}


func_3849(var_2_object, var_1056_string)
{
	var_1057_bool = 0;
	func_4727(var_1057_bool);
	var_1058_bool = var_1057_bool == 0; //@nz
	if(var_1058_bool != 0) {
		return 0;
	}
	var_1059_bool = var_1056_string == var_2_object;
	if(var_1059_bool != 0) {
		return 0;
	}
	var_1060_string = ""; var_1061_bool = 0;
	var_1056_string = var_1060_string;
	var_1063_bool = var_1056_string == "";
	if(var_1063_bool != 0) {
		var_1061_bool = 0;
	} else {
		var_1061_bool = 1;
	}
	func_4486(var_1060_string, var_1061_bool);
	var_2_object = var_1056_string;
	return 0;
	
}


func_4875()
{
	SetVariable("ook10Maria1", (int)1);
	return 0;
}


func_5387(var_731_int)
{
	var_732_int = 0; var_733_int = 0; var_734_int = 0; var_735_int = 0;
	func_5381((int)0);
	var_736_int = var_734_int;
	var_738_int = "k2system_danko_state" + var_734_int;
	GetVariable(var_738_int, var_735_int);
	var_735_int = var_731_int;
	return 4;
}


func_4881()
{
	SetVariable("ook10Maria2", (int)1);
	return 0;
}


func_5398(var_720_bool)
{
	var_721_int = 0;
	func_4680(var_721_int);
	var_722_int = 0;
	func_5381(var_722_int);
	var_720_bool = var_721_int == var_722_int;
	return 0;
}


func_4887(var_99_object)
{
	var_101_int = 0; var_102_int = 0;
	irand(var_102_int, (int)1000);
	var_104_object = Obj(); var_105_int = 0;
	var_99_object = var_104_object;
	var_105_int = var_102_int + (int)2000;
	func_4567(var_104_object, var_105_int);
	return 2;
}


func_1821(var_0_object, var_1_object, var_2_object, var_3_string, var_893_object, var_894_object)
{
	var_0_object = var_894_object;
	var_1_object = var_893_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_900_string = "";
		func_1945(var_894_object, "Mysterious");
		@@@var_0_object:SetMessage((int)526947);
		@@@var_0_object:ClearReplies();
		var_909_bool = 0; var_910_object = Obj();
		var_910_object = var_1_object;
		func_5052(var_910_object);
		if(var_909_bool != 0) {
			@@@var_0_object:AddReply((int)526948, (int)28241, (int)28240);
		}
		var_918_bool = 0;
		var_918_bool = 0;
		var_919_bool = 0;
		var_919_bool = 0;
		var_920_bool = 0; var_921_object = Obj();
		var_921_object = var_1_object;
		func_5076(var_920_bool, var_921_object);
		if(var_920_bool != 0) {
			var_922_bool = 0; var_923_object = Obj();
			var_923_object = var_1_object;
			func_5086(var_922_bool, var_923_object);
			if(var_922_bool != 0) {
				var_919_bool = 1;
			}
		}
		if(var_919_bool != 0) {
			var_924_bool = 0; var_925_object = Obj();
			var_925_object = var_1_object;
			func_5154(var_925_object);
			if(var_924_bool != 0) {
				var_918_bool = 1;
			}
		}
		if(var_918_bool != 0) {
			@@@var_0_object:AddReply((int)539852, (int)41805, (int)41804);
		}
		var_933_bool = 0;
		var_933_bool = 0;
		var_934_bool = 0;
		var_934_bool = 0;
		var_935_bool = 0; var_936_object = Obj();
		var_936_object = var_1_object;
		func_5076(var_935_bool, var_936_object);
		if(var_935_bool != 0) {
			var_937_bool = 0; var_938_object = Obj();
			var_938_object = var_1_object;
			func_5096(var_937_bool, var_938_object);
			if(var_937_bool != 0) {
				var_934_bool = 1;
			}
		}
		if(var_934_bool != 0) {
			var_939_bool = 0; var_940_object = Obj();
			var_940_object = var_1_object;
			func_5166(var_940_object);
			if(var_939_bool != 0) {
				var_933_bool = 1;
			}
		}
		if(var_933_bool != 0) {
			@@@var_0_object:AddReply((int)539855, (int)41808, (int)41807);
		}
		@@@var_0_object:AddReply((int)526951, (int)-1, (int)28243);
		@@@var_0_object:AddReply((int)528006, (int)-1, (int)29366);
		goto Label_1915;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x721";
	}
Label_1915:
	var_954_bool = 0;
	func_4727(var_954_bool);
	if(var_954_bool != 0) {

	Label_1919:
		lshWaitForAnimEnd();
		var_955_string = var_3_string;
		if(var_955_string != 0) {
		} else {
			var_956_string = "";
			var_956_string = var_2_object;
			func_4470(var_956_string);
			goto Label_1919;
	}
		PlayAnimation("all", "idle");

	Label_1934:
		WaitForAnimEnd();
		var_959_string = var_3_string;
		if(var_959_string != 0) {
			goto Label_1944;
		}
		PlayAnimation("all", "idle");
		goto Label_1934;
	}
	goto Label_1944;
	
Label_1944:
	return 0;
	
}


func_5406(var_757_bool)
{
	var_758_int = 0;
	func_5387(var_758_int);
	var_757_bool = var_758_int == (int)2;
	return 0;
}


func_4898(var_99_object)
{
	var_101_int = 0; var_102_int = 0;
	irand(var_102_int, (int)1000);
	var_104_object = Obj(); var_105_int = 0;
	var_99_object = var_104_object;
	var_105_int = var_102_int + (int)3000;
	func_4567(var_104_object, var_105_int);
	return 2;
}


func_5412(var_730_bool)
{
	var_731_int = 0;
	func_5387(var_731_int);
	var_730_bool = var_731_int == (int)0;
	return 0;
}


func_4390(var_160_bool, var_161_object)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = "";
	var_167_string = "c";
	var_168_int = 0;
	
Label_4393:
	if((int)1 != 0) {
		var_174_int = var_168_int + (int)1;
		var_175_int = var_167_string + var_174_int;
		@@var_161_object:HasProperty(var_175_int, var_169_bool);
		var_176_bool = var_169_bool == 0; //@nz
		if(var_176_bool != 0) {
		} else {
			var_168_int = var_168_int + (int)1;
			goto Label_4393;
		}
	}
	var_177_bool = var_168_int == 0; //@nz
	if(var_177_bool != 0) {
		var_160_bool = 0;
		return 10;
	}
	var_170_int = 0;
	var_179_bool = var_168_int > (int)1;
	if(var_179_bool != 0) {
		irand(var_170_int, var_168_int);
	}
	var_181_int = var_170_int + (int)1;
	var_182_int = var_167_string + var_181_int;
	@@var_161_object:GetProperty(var_182_int, var_171_string);
	var_183_bool = 0; var_184_string = "";
	var_171_string = var_184_string;
	func_4501(var_183_bool, var_184_string);
	var_183_bool = var_160_bool;
	return 10;
	
}


func_5418(var_74_object)
{
	var_75_bool = GlobalVars[1];
	var_76_bool = var_75_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_77_int = 0; var_78_object = Obj();
		var_74_object = var_78_object;
		TaskCall(2);
		func_371(var_79_object, var_77_int, var_78_object);
		TaskReturn();
		var_302_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_303_bool = 0; var_304_int = 0;
	func_4689(var_303_bool, (int)1);
	if(var_303_bool != 0) {
		var_306_int = 0; var_307_object = Obj();
		var_74_object = var_307_object;
		TaskCall(0);
		func_0(var_308_object, var_306_int, var_307_object);
		TaskReturn();
		return 0;
	}
	var_378_bool = 0; var_379_int = 0;
	func_4689(var_378_bool, (int)3);
	if(var_378_bool != 0) {
		var_380_int = 0; var_381_object = Obj();
		var_74_object = var_381_object;
		TaskCall(4);
		func_597(var_382_object, var_380_int, var_381_object);
		TaskReturn();
		return 0;
	}
	var_458_bool = 0; var_459_int = 0;
	func_4689(var_458_bool, (int)4);
	if(var_458_bool != 0) {
		var_460_int = 0; var_461_object = Obj();
		var_74_object = var_461_object;
		TaskCall(6);
		func_1024(var_462_object, var_460_int, var_461_object);
		TaskReturn();
		return 0;
	}
	var_541_bool = 0; var_542_int = 0;
	func_4689(var_541_bool, (int)5);
	if(var_541_bool != 0) {
		var_543_int = 0; var_544_object = Obj();
		var_74_object = var_544_object;
		TaskCall(14);
		func_2481(var_545_object, var_543_int, var_544_object);
		TaskReturn();
		return 0;
	}
	var_608_bool = 0; var_609_int = 0;
	func_4689(var_608_bool, (int)7);
	if(var_608_bool != 0) {
		var_610_int = 0; var_611_object = Obj();
		var_74_object = var_611_object;
		TaskCall(8);
		func_1401(var_612_object, var_610_int, var_611_object);
		TaskReturn();
		return 0;
	}
	var_672_bool = 0; var_673_int = 0;
	func_4689(var_672_bool, (int)8);
	if(var_672_bool != 0) {
		var_674_int = 0; var_675_object = Obj();
		var_74_object = var_675_object;
		TaskCall(16);
		func_2899(var_676_object, var_674_int, var_675_object);
		TaskReturn();
		return 0;
	}
	var_782_bool = 0; var_783_int = 0;
	func_4689(var_782_bool, (int)9);
	if(var_782_bool != 0) {
		var_784_int = 0; var_785_object = Obj();
		var_74_object = var_785_object;
		TaskCall(18);
		func_3325(var_786_object, var_784_int, var_785_object);
		TaskReturn();
		return 0;
	}
	var_867_bool = 0; var_868_int = 0;
	func_4689(var_867_bool, (int)10);
	if(var_867_bool != 0) {
		var_869_int = 0; var_870_object = Obj();
		var_74_object = var_870_object;
		TaskCall(10);
		func_1740(var_871_object, var_869_int, var_870_object);
		TaskReturn();
		return 0;
	}
	var_964_bool = 0; var_965_int = 0;
	func_4689(var_964_bool, (int)12);
	if(var_964_bool != 0) {
		var_966_int = 0; var_967_object = Obj();
		var_74_object = var_967_object;
		TaskCall(12);
		func_2222(var_968_object, var_966_int, var_967_object);
		TaskReturn();
		return 0;
	}
	var_1025_int = 0; var_1026_object = Obj();
	var_74_object = var_1026_object;
	TaskCall(20);
	func_3710(var_1027_object, var_1025_int, var_1026_object);
	TaskReturn();
	return 0;
}


func_4909(var_119_object)
{
	var_121_int = 0; var_122_int = 0;
	irand(var_122_int, (int)1000);
	var_124_object = Obj(); var_125_int = 0;
	var_119_object = var_124_object;
	var_125_int = var_122_int + (int)4000;
	func_4567(var_124_object, var_125_int);
	return 2;
}


func_4920()
{
	SetVariable("ook3Maria2", (int)1);
	return 0;
}


func_4926(var_62_object)
{
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0;
	var_62_object = var_65_object;
	func_4618(var_64_bool, var_65_object, (float)0.10000000149011612);
	return 0;
}


func_2366(var_2_object, var_997_string)
{
	var_998_bool = 0;
	func_4727(var_998_bool);
	var_999_bool = var_998_bool == 0; //@nz
	if(var_999_bool != 0) {
		return 0;
	}
	var_1000_bool = var_997_string == var_2_object;
	if(var_1000_bool != 0) {
		return 0;
	}
	var_1001_string = ""; var_1002_bool = 0;
	var_997_string = var_1001_string;
	var_1004_bool = var_997_string == "";
	if(var_1004_bool != 0) {
		var_1002_bool = 0;
	} else {
		var_1002_bool = 1;
	}
	func_4486(var_1001_string, var_1002_bool);
	var_2_object = var_997_string;
	return 0;
	
}


func_4933(var_115_object)
{
	var_117_bool = 0; var_118_object = Obj(); var_119_float = 0;
	var_115_object = var_118_object;
	func_4618(var_117_bool, var_118_object, (float)-0.10000000149011612);
	return 0;
}


func_4427(var_191_bool, var_192_object)
{
	var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; var_198_string = ""; var_199_int = 0; var_200_bool = 0; var_201_int = 0; var_202_string = "";
	var_204_int = 0;
	func_4680(var_204_int);
	var_210_int = "d" + var_204_int;
	var_198_string = var_210_int + "m";
	var_199_int = 0;
	
Label_4436:
	if((int)1 != 0) {
		var_214_int = var_199_int + (int)1;
		var_215_int = var_198_string + var_214_int;
		@@var_192_object:HasProperty(var_215_int, var_200_bool);
		var_216_bool = var_200_bool == 0; //@nz
		if(var_216_bool != 0) {
		} else {
			var_199_int = var_199_int + (int)1;
			goto Label_4436;
		}
	}
	var_217_bool = var_199_int == 0; //@nz
	if(var_217_bool != 0) {
		var_191_bool = 0;
		return 10;
	}
	var_201_int = 0;
	var_219_bool = var_199_int > (int)1;
	if(var_219_bool != 0) {
		irand(var_201_int, var_199_int);
	}
	var_221_int = var_201_int + (int)1;
	var_222_int = var_198_string + var_221_int;
	@@var_192_object:GetProperty(var_222_int, var_202_string);
	var_223_bool = 0; var_224_string = "";
	var_202_string = var_224_string;
	func_4501(var_223_bool, var_224_string);
	var_223_bool = var_191_bool;
	return 10;
	
}


func_4940(var_104_object)
{
	var_106_bool = 0; var_107_object = Obj(); var_108_float = 0;
	var_104_object = var_107_object;
	func_4618(var_106_bool, var_107_object, (float)-0.30000001192092896);
	return 0;
}


func_3406(var_0_object, var_1_object, var_2_object, var_3_string, var_808_object, var_809_object)
{
	var_0_object = var_809_object;
	var_1_object = var_808_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_815_string = "";
		func_3515(var_809_object, "Mysterious");
		@@@var_0_object:SetMessage((int)539840);
		@@@var_0_object:ClearReplies();
		var_824_bool = 0;
		var_824_bool = 0;
		var_825_bool = 0;
		var_825_bool = 0;
		var_826_bool = 0; var_827_object = Obj();
		var_827_object = var_1_object;
		func_5076(var_826_bool, var_827_object);
		if(var_826_bool != 0) {
			var_828_bool = 0; var_829_object = Obj();
			var_829_object = var_1_object;
			func_5086(var_828_bool, var_829_object);
			if(var_828_bool != 0) {
				var_825_bool = 1;
			}
		}
		if(var_825_bool != 0) {
			var_830_bool = 0; var_831_object = Obj();
			var_831_object = var_1_object;
			func_5130(var_831_object);
			if(var_830_bool != 0) {
				var_824_bool = 1;
			}
		}
		if(var_824_bool != 0) {
			@@@var_0_object:AddReply((int)539841, (int)41794, (int)41793);
		}
		var_839_bool = 0;
		var_839_bool = 0;
		var_840_bool = 0;
		var_840_bool = 0;
		var_841_bool = 0; var_842_object = Obj();
		var_842_object = var_1_object;
		func_5076(var_841_bool, var_842_object);
		if(var_841_bool != 0) {
			var_843_bool = 0; var_844_object = Obj();
			var_844_object = var_1_object;
			func_5096(var_843_bool, var_844_object);
			if(var_843_bool != 0) {
				var_840_bool = 1;
			}
		}
		if(var_840_bool != 0) {
			var_845_bool = 0; var_846_object = Obj();
			var_846_object = var_1_object;
			func_5142(var_846_object);
			if(var_845_bool != 0) {
				var_839_bool = 1;
			}
		}
		if(var_839_bool != 0) {
			@@@var_0_object:AddReply((int)539844, (int)41797, (int)41796);
		}
		@@@var_0_object:AddReply((int)539850, (int)-1, (int)41802);
		goto Label_3485;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd52";
	}
Label_3485:
	var_857_bool = 0;
	func_4727(var_857_bool);
	if(var_857_bool != 0) {

	Label_3489:
		lshWaitForAnimEnd();
		var_858_string = var_3_string;
		if(var_858_string != 0) {
		} else {
			var_859_string = "";
			var_859_string = var_2_object;
			func_4470(var_859_string);
			goto Label_3489;
	}
		PlayAnimation("all", "idle");

	Label_3504:
		WaitForAnimEnd();
		var_862_string = var_3_string;
		if(var_862_string != 0) {
			goto Label_3514;
		}
		PlayAnimation("all", "idle");
		goto Label_3504;
	}
	goto Label_3514;
	
Label_3514:
	return 0;
	
}


func_3920(var_0_object)
{
	var_57_bool = 0;
	func_4240(var_57_bool);
	var_60_bool = var_57_bool == 0; //@nz
	if(var_60_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_3929:
	func_4096();
	goto Label_3929;
}
EMIT "Return(); Pop(0)";


func_4947(var_123_object)
{
	Trace("feromicin is given");
	var_126_object = Obj(); var_127_string = ""; var_128_int = 0;
	var_123_object = var_126_object;
	func_4605(var_126_object, "feromicin", (int)1);
	return 0;
}


func_2899(var_0_object, var_674_int, var_675_object)
{
	var_677_object = Obj(); var_678_bool = 0; var_679_int = 0; var_680_bool = 0; var_681_object = Obj(); var_682_bool = 0; var_683_int = 0; var_684_bool = 0;
	var_0_object = var_675_object;
	var_685_bool = 0; var_686_object = Obj(); var_687_float = 0;
	var_675_object = var_686_object;
	func_4245(var_685_bool, var_686_object, (float)70.0);
	var_688_bool = var_685_bool == 0; //@nz
	if(var_688_bool != 0) {
		var_674_int = -2;
		return 8;
	}
	CreateDialog(var_681_object);
	var_689_int = 0;
	func_4721(var_689_int);
	@@var_681_object:SetNPCName(var_689_int);
	var_690_int = 0;
	func_4719(var_690_int);
	@@var_681_object:SetNPCDescription(var_690_int);
	var_691_string = "";
	func_4723(var_691_string);
	@@var_681_object:SetPhoto(var_691_string);
	var_692_string = "";
	func_4725(var_692_string);
	@@var_681_object:SetPhoto2(var_692_string);
	var_693_int = 0;
	func_5364(var_693_int);
	@@var_681_object:SetPlayerName(var_693_int);
	IsOverrideActive(var_682_bool);
	var_694_bool = var_682_bool;
	if(var_694_bool != 0) {
		var_674_int = -2;
		return 8;
	}
	DoDialog(var_681_object);
	var_695_bool = 0; var_696_object = Obj();
	func_4523(Obj());
	var_697_object = var_696_object;
	func_4332(var_695_bool, var_696_object);
	var_698_object = Obj(); var_699_object = Obj();
	var_675_object = var_698_object;
	var_681_object = var_699_object;
	TaskCall(17);
	func_2980(var_700_object, var_701_object, var_702_string, var_703_bool, var_698_object, var_699_object);
	TaskReturn();
	@@var_681_object:IsDialogEnd(var_684_bool);
	
Label_2962:
	var_780_bool = var_684_bool == 0; //@nz
	if(var_780_bool != 0) {
		sync();
		@@var_681_object:IsDialogEnd(var_684_bool);
		goto Label_2962;
	}
	var_675_object = Obj();
	func_4314();
	StopDialog(var_681_object);
	@@var_681_object:GetReturnValue((int)-1);
	var_683_int = var_674_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4958(var_127_object)
{
	Trace("morfin is given");
	var_130_object = Obj(); var_131_string = ""; var_132_int = 0;
	var_127_object = var_130_object;
	func_4605(var_130_object, "morfin", (int)1);
	return 0;
}


func_3934(var_81_bool)
{
	var_82_object = Obj(); var_83_object = Obj();
	FindActor(var_83_object, "player");
	var_85_bool = var_83_object == 0; //@nz
	if(var_85_bool != 0) {
		var_81_bool = 0;
		return 2;
	}
	var_86_bool = 0; var_87_object = Obj();
	var_83_object = var_87_object;
	func_4231(var_86_bool, var_87_object);
	var_86_bool = var_81_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4969(var_148_object)
{
	Trace("neomicin is given");
	var_151_object = Obj(); var_152_string = ""; var_153_int = 0;
	var_148_object = var_151_object;
	func_4605(var_151_object, "neomicin", (int)1);
	return 0;
}


func_3949(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0);
	var_134_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_133_float, var_134_float);
	return 0;
}


func_3954(var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0;
	FindActor(var_67_object, "player");
	var_70_bool = var_67_object == 0; //@nz
	if(var_70_bool != 0) {
		var_64_bool = 0;
		return 4;
	}
	var_71_float = 0; var_72_object = Obj();
	var_67_object = var_72_object;
	func_4172(var_71_float, var_72_object);
	var_80_bool = var_71_float > (float)90000.0;
	if(var_80_bool != 0) {
		var_64_bool = 0;
		return 4;
	}
	CanSee(var_68_bool, var_67_object);
	var_68_bool = var_64_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_371(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0;
	var_0_object = var_78_object;
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0;
	var_78_object = var_89_object;
	func_4245(var_88_bool, var_89_object, (float)70.0);
	var_135_bool = var_88_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	CreateDialog(var_84_object);
	var_136_int = 0;
	func_4721(var_136_int);
	@@var_84_object:SetNPCName(var_136_int);
	var_137_int = 0;
	func_4719(var_137_int);
	@@var_84_object:SetNPCDescription(var_137_int);
	var_138_string = "";
	func_4723(var_138_string);
	@@var_84_object:SetPhoto(var_138_string);
	var_139_string = "";
	func_4725(var_139_string);
	@@var_84_object:SetPhoto2(var_139_string);
	var_140_int = 0;
	func_5364(var_140_int);
	@@var_84_object:SetPlayerName(var_140_int);
	IsOverrideActive(var_85_bool);
	var_148_bool = var_85_bool;
	if(var_148_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	DoDialog(var_84_object);
	var_149_bool = 0; var_150_object = Obj();
	func_4523(Obj());
	var_151_object = var_150_object;
	func_4332(var_149_bool, var_150_object);
	var_244_object = Obj(); var_245_object = Obj();
	var_78_object = var_244_object;
	var_84_object = var_245_object;
	TaskCall(3);
	func_452(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object);
	TaskReturn();
	@@var_84_object:IsDialogEnd(var_87_bool);
	
Label_434:
	var_293_bool = var_87_bool == 0; //@nz
	if(var_293_bool != 0) {
		sync();
		@@var_84_object:IsDialogEnd(var_87_bool);
		goto Label_434;
	}
	var_78_object = Obj();
	func_4314();
	StopDialog(var_84_object);
	@@var_84_object:GetReturnValue((int)-1);
	var_86_int = var_77_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4980(var_337_bool)
{
	var_339_int = 0; var_340_string = "";
	func_4550(var_339_int, "k1q02");
	var_344_bool = var_339_int == (int)3;
	if(var_344_bool != 0) {
		var_337_bool = 1;
		return 0;
	}
	var_337_bool = 0;
	return 0;
}


func_4470(var_277_string)
{
	var_278_bool = 0; var_279_float = 0; var_280_float = 0; var_281_bool = 0; var_282_float = 0; var_283_float = 0;
	lshHasAnimation(var_281_bool, var_277_string);
	var_284_bool = var_281_bool;
	if(var_284_bool != 0) {
		lshGetAnimTimes(var_277_string, var_282_float, var_283_float);
		lshPlayAnimation(var_282_float, var_283_float, (bool)0);
	} else {
		var_287_int = "Can't find lsh animation : " + var_277_string;
		Trace(var_287_int);
	}
	return 6;
	
}


func_1401(var_0_object, var_610_int, var_611_object)
{
	var_613_object = Obj(); var_614_bool = 0; var_615_int = 0; var_616_bool = 0; var_617_object = Obj(); var_618_bool = 0; var_619_int = 0; var_620_bool = 0;
	var_0_object = var_611_object;
	var_621_bool = 0; var_622_object = Obj(); var_623_float = 0;
	var_611_object = var_622_object;
	func_4245(var_621_bool, var_622_object, (float)70.0);
	var_624_bool = var_621_bool == 0; //@nz
	if(var_624_bool != 0) {
		var_610_int = -2;
		return 8;
	}
	CreateDialog(var_617_object);
	var_625_int = 0;
	func_4721(var_625_int);
	@@var_617_object:SetNPCName(var_625_int);
	var_626_int = 0;
	func_4719(var_626_int);
	@@var_617_object:SetNPCDescription(var_626_int);
	var_627_string = "";
	func_4723(var_627_string);
	@@var_617_object:SetPhoto(var_627_string);
	var_628_string = "";
	func_4725(var_628_string);
	@@var_617_object:SetPhoto2(var_628_string);
	var_629_int = 0;
	func_5364(var_629_int);
	@@var_617_object:SetPlayerName(var_629_int);
	IsOverrideActive(var_618_bool);
	var_630_bool = var_618_bool;
	if(var_630_bool != 0) {
		var_610_int = -2;
		return 8;
	}
	DoDialog(var_617_object);
	var_631_bool = 0; var_632_object = Obj();
	func_4523(Obj());
	var_633_object = var_632_object;
	func_4332(var_631_bool, var_632_object);
	var_634_object = Obj(); var_635_object = Obj();
	var_611_object = var_634_object;
	var_617_object = var_635_object;
	TaskCall(9);
	func_1482(var_636_object, var_637_object, var_638_string, var_639_bool, var_634_object, var_635_object);
	TaskReturn();
	@@var_617_object:IsDialogEnd(var_620_bool);
	
Label_1464:
	var_670_bool = var_620_bool == 0; //@nz
	if(var_670_bool != 0) {
		sync();
		@@var_617_object:IsDialogEnd(var_620_bool);
		goto Label_1464;
	}
	var_611_object = Obj();
	func_4314();
	StopDialog(var_617_object);
	@@var_617_object:GetReturnValue((int)-1);
	var_619_int = var_610_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4992(var_421_bool)
{
	var_423_int = 0; var_424_string = "";
	func_4550(var_423_int, "k3q03");
	var_426_bool = var_423_int == (int)1000;
	if(var_426_bool != 0) {
		var_421_bool = 1;
		return 0;
	}
	var_421_bool = 0;
	return 0;
}


func_4486(var_255_string, var_256_bool)
{
	var_259_bool = 0; var_260_float = 0; var_261_float = 0; var_262_bool = 0; var_263_float = 0; var_264_float = 0;
	lshHasAnimation(var_262_bool, var_255_string);
	var_265_bool = var_262_bool;
	if(var_265_bool != 0) {
		lshGetAnimTimes(var_255_string, var_263_float, var_264_float);
		lshPlayAnimation(var_263_float, var_264_float, var_256_bool);
	} else {
		var_267_int = "Can't find lsh animation : " + var_255_string;
		Trace(var_267_int);
	}
	return 6;
	
}


func_3976()
{
	var_1083_float = 0; var_1084_float = 0;
	rand(var_1084_float, (int)8, (int)16);
	SetTimer((int)10, var_1084_float);
	return 2;
}


func_5004(var_427_bool)
{
	var_429_int = 0; var_430_string = "";
	func_4550(var_429_int, "ook3Maria1");
	var_432_bool = var_429_int == (int)0;
	if(var_432_bool != 0) {
		var_427_bool = 1;
		return 0;
	}
	var_427_bool = 0;
	return 0;
}


func_3985()
{
	KillTimer((int)10);
	return 0;
}


func_4501(var_183_bool, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0;
	var_187_bool = 0;
	func_4727(var_187_bool);
	if(var_187_bool != 0) {
		lshHasSpeech(var_186_bool, var_184_string);
		var_188_bool = var_186_bool;
		if(var_188_bool != 0) {
			lshPlaySpeech(var_184_string);
			var_183_bool = 1;
			return 2;
		}
	}
	var_183_bool = 0;
	return 2;
}


func_5016(var_492_bool)
{
	var_494_int = 0; var_495_string = "";
	func_4550(var_494_int, "k4q02");
	var_497_bool = var_494_int == (int)1;
	if(var_497_bool != 0) {
		var_492_bool = 1;
		return 0;
	}
	var_492_bool = 0;
	return 0;
}


func_1945(var_2_object, var_900_string)
{
	var_901_bool = 0;
	func_4727(var_901_bool);
	var_902_bool = var_901_bool == 0; //@nz
	if(var_902_bool != 0) {
		return 0;
	}
	var_903_bool = var_900_string == var_2_object;
	if(var_903_bool != 0) {
		return 0;
	}
	var_904_string = ""; var_905_bool = 0;
	var_900_string = var_904_string;
	var_907_bool = var_900_string == "";
	if(var_907_bool != 0) {
		var_905_bool = 0;
	} else {
		var_905_bool = 1;
	}
	func_4486(var_904_string, var_905_bool);
	var_2_object = var_900_string;
	return 0;
	
}


func_4516()
{
	var_59_bool = 0;
	func_4727(var_59_bool);
	if(var_59_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5028(var_498_bool)
{
	var_500_int = 0; var_501_string = "";
	func_4550(var_500_int, "ook4Maria1");
	var_503_bool = var_500_int == (int)0;
	if(var_503_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_498_bool = 0;
	return 0;
}


func_2980(var_0_object, var_1_object, var_2_object, var_3_string, var_698_object, var_699_object)
{
	var_0_object = var_699_object;
	var_1_object = var_698_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_705_string = "";
		func_3089(var_699_object, "Neutral");
		@@@var_0_object:SetMessage((int)539828);
		@@@var_0_object:ClearReplies();
		var_714_bool = 0;
		var_714_bool = 0;
		var_715_bool = 0;
		var_715_bool = 0;
		var_716_bool = 0; var_717_object = Obj();
		var_717_object = var_1_object;
		func_5076(var_716_bool, var_717_object);
		if(var_716_bool != 0) {
			var_726_bool = 0; var_727_object = Obj();
			var_727_object = var_1_object;
			func_5086(var_726_bool, var_727_object);
			if(var_726_bool != 0) {
				var_715_bool = 1;
			}
		}
		if(var_715_bool != 0) {
			var_740_bool = 0; var_741_object = Obj();
			var_741_object = var_1_object;
			func_5106(var_741_object);
			if(var_740_bool != 0) {
				var_714_bool = 1;
			}
		}
		if(var_714_bool != 0) {
			@@@var_0_object:AddReply((int)539829, (int)41782, (int)41781);
		}
		var_749_bool = 0;
		var_749_bool = 0;
		var_750_bool = 0;
		var_750_bool = 0;
		var_751_bool = 0; var_752_object = Obj();
		var_752_object = var_1_object;
		func_5076(var_751_bool, var_752_object);
		if(var_751_bool != 0) {
			var_753_bool = 0; var_754_object = Obj();
			var_754_object = var_1_object;
			func_5096(var_753_bool, var_754_object);
			if(var_753_bool != 0) {
				var_750_bool = 1;
			}
		}
		if(var_750_bool != 0) {
			var_760_bool = 0; var_761_object = Obj();
			var_761_object = var_1_object;
			func_5118(var_761_object);
			if(var_760_bool != 0) {
				var_749_bool = 1;
			}
		}
		if(var_749_bool != 0) {
			@@@var_0_object:AddReply((int)539832, (int)41785, (int)41784);
		}
		@@@var_0_object:AddReply((int)539838, (int)-1, (int)41790);
		goto Label_3059;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xba8";
	}
Label_3059:
	var_772_bool = 0;
	func_4727(var_772_bool);
	if(var_772_bool != 0) {

	Label_3063:
		lshWaitForAnimEnd();
		var_773_string = var_3_string;
		if(var_773_string != 0) {
		} else {
			var_774_string = "";
			var_774_string = var_2_object;
			func_4470(var_774_string);
			goto Label_3063;
	}
		PlayAnimation("all", "idle");

	Label_3078:
		WaitForAnimEnd();
		var_777_string = var_3_string;
		if(var_777_string != 0) {
			goto Label_3088;
		}
		PlayAnimation("all", "idle");
		goto Label_3078;
	}
	goto Label_3088;
	
Label_3088:
	return 0;
	
}


func_4523(var_151_object)
{
	var_152_object = Obj(); var_153_object = Obj();
	self(var_153_object);
	var_153_object = var_151_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5040(var_650_bool)
{
	var_652_int = 0; var_653_string = "";
	func_4550(var_652_int, "k7q01");
	var_655_bool = var_652_int == (int)6;
	if(var_655_bool != 0) {
		var_650_bool = 1;
		return 0;
	}
	var_650_bool = 0;
	return 0;
}


func_4529(var_115_cvector, var_116_cvector)
{
	var_118_float = 0; var_119_float = 0;
	var_120_int = var_116_cvector | var_116_cvector;
	var_119_float = sqrt(var_120_int);
	var_121_float = 9.999999974752427e-07;
	var_122_bool = var_119_float < var_121_float;
	if(var_122_bool != 0) {
		var_115_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_115_cvector = var_116_cvector / var_119_float;
	return 2;
}


func_2481(var_0_object, var_543_int, var_544_object)
{
	var_546_object = Obj(); var_547_bool = 0; var_548_int = 0; var_549_bool = 0; var_550_object = Obj(); var_551_bool = 0; var_552_int = 0; var_553_bool = 0;
	var_0_object = var_544_object;
	var_554_bool = 0; var_555_object = Obj(); var_556_float = 0;
	var_544_object = var_555_object;
	func_4245(var_554_bool, var_555_object, (float)70.0);
	var_557_bool = var_554_bool == 0; //@nz
	if(var_557_bool != 0) {
		var_543_int = -2;
		return 8;
	}
	CreateDialog(var_550_object);
	var_558_int = 0;
	func_4721(var_558_int);
	@@var_550_object:SetNPCName(var_558_int);
	var_559_int = 0;
	func_4719(var_559_int);
	@@var_550_object:SetNPCDescription(var_559_int);
	var_560_string = "";
	func_4723(var_560_string);
	@@var_550_object:SetPhoto(var_560_string);
	var_561_string = "";
	func_4725(var_561_string);
	@@var_550_object:SetPhoto2(var_561_string);
	var_562_int = 0;
	func_5364(var_562_int);
	@@var_550_object:SetPlayerName(var_562_int);
	IsOverrideActive(var_551_bool);
	var_563_bool = var_551_bool;
	if(var_563_bool != 0) {
		var_543_int = -2;
		return 8;
	}
	DoDialog(var_550_object);
	var_564_bool = 0; var_565_object = Obj();
	func_4523(Obj());
	var_566_object = var_565_object;
	func_4332(var_564_bool, var_565_object);
	var_567_object = Obj(); var_568_object = Obj();
	var_544_object = var_567_object;
	var_550_object = var_568_object;
	TaskCall(15);
	func_2562(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object);
	TaskReturn();
	@@var_550_object:IsDialogEnd(var_553_bool);
	
Label_2544:
	var_606_bool = var_553_bool == 0; //@nz
	if(var_606_bool != 0) {
		sync();
		@@var_550_object:IsDialogEnd(var_553_bool);
		goto Label_2544;
	}
	var_544_object = Obj();
	func_4314();
	StopDialog(var_550_object);
	@@var_550_object:GetReturnValue((int)-1);
	var_552_int = var_543_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3515(var_2_object, var_815_string)
{
	var_816_bool = 0;
	func_4727(var_816_bool);
	var_817_bool = var_816_bool == 0; //@nz
	if(var_817_bool != 0) {
		return 0;
	}
	var_818_bool = var_815_string == var_2_object;
	if(var_818_bool != 0) {
		return 0;
	}
	var_819_string = ""; var_820_bool = 0;
	var_815_string = var_819_string;
	var_822_bool = var_815_string == "";
	if(var_822_bool != 0) {
		var_820_bool = 0;
	} else {
		var_820_bool = 1;
	}
	func_4486(var_819_string, var_820_bool);
	var_2_object = var_815_string;
	return 0;
	
}


func_5052(var_909_bool)
{
	var_911_int = 0; var_912_string = "";
	func_4550(var_911_int, "k10q01");
	var_914_bool = var_911_int == (int)1;
	if(var_914_bool != 0) {
		var_909_bool = 1;
		return 0;
	}
	var_909_bool = 0;
	return 0;
}


func_4539(var_195_float, var_196_float, var_197_float, var_198_float)
{
	var_199_bool = var_196_float < var_197_float;
	if(var_199_bool != 0) {
		var_197_float = var_195_float;
		return 0;
	}
	var_200_bool = var_196_float > var_198_float;
	if(var_200_bool != 0) {
		var_198_float = var_195_float;
		return 0;
	}
	var_196_float = var_195_float;
	return 0;
}


func_452(var_0_object, var_1_object, var_2_object, var_3_string, var_244_object, var_245_object)
{
	var_0_object = var_245_object;
	var_1_object = var_244_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_251_string = "";
		func_510(var_245_object, "Neutral");
		@@@var_0_object:SetMessage((int)525501);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525502, (int)27545, (int)26858);
		@@@var_0_object:AddReply((int)526269, (int)27545, (int)27544);
		goto Label_480;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1c8";
	}
Label_480:
	var_275_bool = 0;
	func_4727(var_275_bool);
	if(var_275_bool != 0) {

	Label_484:
		lshWaitForAnimEnd();
		var_276_string = var_3_string;
		if(var_276_string != 0) {
		} else {
			var_277_string = "";
			var_277_string = var_2_object;
			func_4470(var_277_string);
			goto Label_484;
	}
		PlayAnimation("all", "idle");

	Label_499:
		WaitForAnimEnd();
		var_290_string = var_3_string;
		if(var_290_string != 0) {
			goto Label_509;
		}
		PlayAnimation("all", "idle");
		goto Label_499;
	}
	goto Label_509;
	
Label_509:
	return 0;
	
}


func_4550(var_339_int, var_340_string)
{
	var_341_int = 0; var_342_int = 0;
	GetVariable(var_340_string, var_342_int);
	var_342_int = var_339_int;
	return 2;
}


func_5064(var_583_bool)
{
	var_585_int = 0; var_586_string = "";
	func_4550(var_585_int, "k5q04");
	var_588_bool = var_585_int == (int)1;
	if(var_588_bool != 0) {
		var_583_bool = 1;
		return 0;
	}
	var_583_bool = 0;
	return 0;
}


func_1482(var_0_object, var_1_object, var_2_object, var_3_string, var_634_object, var_635_object)
{
	var_0_object = var_635_object;
	var_1_object = var_634_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_641_string = "";
		func_1545(var_635_object, "Neutral");
		@@@var_0_object:SetMessage((int)526192);
		@@@var_0_object:ClearReplies();
		var_650_bool = 0; var_651_object = Obj();
		var_651_object = var_1_object;
		func_5040(var_651_object);
		if(var_650_bool != 0) {
			@@@var_0_object:AddReply((int)526193, (int)30159, (int)27474);
		}
		@@@var_0_object:AddReply((int)526196, (int)-1, (int)27477);
		goto Label_1515;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5ce";
	}
Label_1515:
	var_662_bool = 0;
	func_4727(var_662_bool);
	if(var_662_bool != 0) {

	Label_1519:
		lshWaitForAnimEnd();
		var_663_string = var_3_string;
		if(var_663_string != 0) {
		} else {
			var_664_string = "";
			var_664_string = var_2_object;
			func_4470(var_664_string);
			goto Label_1519;
	}
		PlayAnimation("all", "idle");

	Label_1534:
		WaitForAnimEnd();
		var_667_string = var_3_string;
		if(var_667_string != 0) {
			goto Label_1544;
		}
		PlayAnimation("all", "idle");
		goto Label_1534;
	}
	goto Label_1544;
	
Label_1544:
	return 0;
	
}


func_4555(var_118_int, var_119_int)
{
	var_120_object = Obj(); var_121_object = Obj();
	CreateIntVector(var_121_object);
	@@var_121_object:add(var_118_int);
	@@var_121_object:add(var_119_int);
	SendWorldWndMessage((int)3, var_121_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5076(var_716_bool, var_717_object)
{
	var_718_bool = 0; var_719_object = Obj();
	var_717_object = var_719_object;
	func_5190(var_719_object);
	if(var_718_bool != 0) {
		var_716_bool = 1;
		return 0;
	}
	var_716_bool = 0;
	return 0;
}


func_4567(var_104_object, var_105_int)
{
	var_107_int = 0; var_108_int = 0;
	var_109_object = Obj(); var_110_string = ""; var_111_int = 0;
	var_104_object = var_109_object;
	var_105_int = var_111_int;
	func_4214(var_109_object, "money", var_111_int);
	var_116_bool = var_105_int > (int)0;
	if(var_116_bool != 0) {
		GetInvItemByName(var_108_int, "Money");
		var_118_int = 0; var_119_int = 0;
		var_108_int = var_118_int;
		var_105_int = var_119_int;
		func_4555(var_118_int, var_119_int);
	}
	return 2;
}


func_5086(var_726_bool, var_727_object)
{
	var_728_bool = 0; var_729_object = Obj();
	var_727_object = var_729_object;
	func_5196(var_729_object);
	if(var_728_bool != 0) {
		var_726_bool = 1;
		return 0;
	}
	var_726_bool = 0;
	return 0;
}


func_5096(var_753_bool, var_754_object)
{
	var_755_bool = 0; var_756_object = Obj();
	var_754_object = var_756_object;
	func_5202(var_756_object);
	if(var_755_bool != 0) {
		var_753_bool = 1;
		return 0;
	}
	var_753_bool = 0;
	return 0;
}


func_4586(var_135_object, var_136_object, var_137_int)
{
	var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0;
	@@var_136_object:GetItemID(var_141_int);
	GetInvItemProperty(var_142_int, var_141_int, "Category");
	@@var_135_object:AddItem(var_143_bool, var_136_object, var_142_int, var_137_int);
	var_145_bool = var_143_bool == 0; //@nz
	if(var_145_bool != 0) {
		@@var_135_object:DropItems(var_136_object, var_137_int);
	} else {
		var_146_int = 0; var_147_int = 0;
		var_141_int = var_146_int;
		var_137_int = var_147_int;
		func_4555(var_146_int, var_147_int);
	}
	return 6;
	
}


func_5106(var_740_bool)
{
	var_742_int = 0; var_743_string = "";
	func_4550(var_742_int, "ook8Maria1");
	var_745_bool = var_742_int == (int)0;
	if(var_745_bool != 0) {
		var_740_bool = 1;
		return 0;
	}
	var_740_bool = 0;
	return 0;
}


func_4605(var_130_object, var_131_string, var_132_int)
{
	var_133_object = Obj(); var_134_object = Obj();
	CreateInvItem(var_134_object);
	@@var_134_object:SetItemName(var_131_string);
	var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0;
	var_130_object = var_135_object;
	var_134_object = var_136_object;
	var_132_int = var_137_int;
	func_4586(var_135_object, var_136_object, var_137_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_510(var_2_object, var_251_string)
{
	var_252_bool = 0;
	func_4727(var_252_bool);
	var_253_bool = var_252_bool == 0; //@nz
	if(var_253_bool != 0) {
		return 0;
	}
	var_254_bool = var_251_string == var_2_object;
	if(var_254_bool != 0) {
		return 0;
	}
	var_255_string = ""; var_256_bool = 0;
	var_251_string = var_255_string;
	var_258_bool = var_251_string == "";
	if(var_258_bool != 0) {
		var_256_bool = 0;
	} else {
		var_256_bool = 1;
	}
	func_4486(var_255_string, var_256_bool);
	var_2_object = var_251_string;
	return 0;
	
}


