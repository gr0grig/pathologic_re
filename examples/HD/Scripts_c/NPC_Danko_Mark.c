// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Declaim|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Shyness|W:Rage|W:Neutral|W:Gasp|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|W:ui/NPC_Mark.png|W:ui/NPC_Mark_b.png|W:pt_map_uprava_admin|A:ShowMap|W:quest_d8_04|W:completed|W:ood10Mark1|W:d10MarkVisit|W:d10q03|W:quest_d10_03|W:d10q03MarkGotoBlock|A:AddMark|W:ood2Mark1|W:fail|W:d7q02|W:d7q02MarkGotoCemetery|W:pt_d7q02_corpse|W:d7q02MarkGotoAlexandr|W:pt_map_alexandr|W:quest_d7_02|W:place_corpse|W:KnowMark|W:d8q04|W:d7BurahLetter|W:d7q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_mark
// @GLOBALS: 0:object:
// @RUN_OP: 0xae3
// @RUN_TASK: 16
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1d7 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2ea vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3d0 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x543 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x756 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x992 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab9 vars=int,int
// @TASK_16: vars=cvector params=0
// @EVENT_7: op=0xb2c vars=int
// @EVENT_6: op=0xb52 vars=
// @EVENT_5: op=0xb61 vars=
// @EVENT_45: op=0xb6e vars=bool
// @EVENT_0: op=0xb7a vars=object
// @PE: 0x51,0x90,0xa6,0x182,0x1c1,0x1d7,0x29f,0x2d4,0x2ea,0x360,0x3ba,0x3d0,0x4e9,0x52d,0x543,0x6de,0x740,0x756,0x93d,0x97c,0x992,0xa69,0xaa3,0xab9,0xae3,0xb2c,0xb52,0xb6e,0xd79,0xda1,0xdb1,0xdbb,0xdc1,0xdc7,0xdee,0xdf4,0xe35,0xe3b,0xe47,0xe53,0xe5f,0xe6b,0xe77,0xe83

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3353();
		var_46_bool = var_41_bool == (int)492;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_3637();
			var_51_string = "";
			func_144(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)500424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500425, (int)494, (int)493);
			@@@var_0_object:AddReply((int)500429, (int)498, (int)497);
			return 0;
		}
		var_76_bool = var_41_bool == (int)498;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_144(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)500430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500431, (int)501, (int)499);
			@@@var_0_object:AddReply((int)500432, (int)494, (int)500);
			return 0;
		}
		var_86_bool = var_41_bool == (int)501;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_144(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)500433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500435, (int)-1, (int)503);
			@@@var_0_object:AddReply((int)500434, (int)-1, (int)502);
			return 0;
		}
		var_96_bool = var_41_bool == (int)494;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_144(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)500426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500427, (int)504, (int)495);
			@@@var_0_object:AddReply((int)500438, (int)-1, (int)506);
			return 0;
		}
		var_106_bool = var_41_bool == (int)504;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_144(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)500436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500437, (int)501, (int)505);
			@@@var_0_object:AddReply((int)500439, (int)-1, (int)508);
			return 0;
		}
		var_3_string = true;
		var_115_bool = 0;
		func_3487(var_115_bool);
		if(var_115_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3353();
		var_46_bool = var_42_cvector == (int)10432;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_3566();
		}
		var_52_bool = var_41_bool == (int)10431;
		if(var_52_bool != 0) {
			var_53_string = "";
			func_449(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)509489);
			@@@var_0_object:ClearReplies();
			var_71_bool = 0; var_72_object = Obj();
			var_72_object = var_1_object;
			func_3679(var_72_object);
			if(var_71_bool != 0) {
				@@@var_0_object:AddReply((int)509490, (int)10433, (int)10432);
			}
			@@@var_0_object:AddReply((int)509499, (int)-1, (int)10441);
			return 0;
		}
		var_86_bool = var_41_bool == (int)10433;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_449(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)509491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509492, (int)10435, (int)10434);
			@@@var_0_object:AddReply((int)509496, (int)10439, (int)10438);
			return 0;
		}
		var_96_bool = var_41_bool == (int)10439;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_449(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)509497);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509498, (int)-1, (int)10440);
			return 0;
		}
		var_103_bool = var_41_bool == (int)10435;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_449(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)509493);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509494, (int)-1, (int)10436);
			@@@var_0_object:AddReply((int)509495, (int)-1, (int)10437);
			return 0;
		}
		var_3_string = true;
		var_112_bool = 0;
		func_3487(var_112_bool);
		if(var_112_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1d8";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3353();
		var_46_bool = var_41_bool == (int)12066;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_724(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510918, (int)-1, (int)12067);
			return 0;
		}
		var_3_string = true;
		var_68_bool = 0;
		func_3487(var_68_bool);
		if(var_68_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2eb";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3353();
		var_46_bool = var_42_cvector == (int)14570;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_3593();
		}
		var_118_bool = var_42_cvector == (int)44071;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_3593();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_3582(var_122_object);
		}
		var_146_bool = var_41_bool == (int)14547;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_954(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513312);
			@@@var_0_object:ClearReplies();
			var_165_bool = 0;
			var_165_bool = 1;
			var_166_bool = 0;
			var_166_bool = 0;
			var_167_bool = 0; var_168_object = Obj();
			var_168_object = var_1_object;
			func_3715(var_168_object);
			if(var_167_bool != 0) {
				var_175_bool = 0; var_176_object = Obj();
				var_176_object = var_1_object;
				func_3703(var_176_object);
				if(var_175_bool != 0) {
					var_166_bool = 1;
				}
			}
			if(var_166_bool != 1) {
				var_181_bool = 0;
				var_181_bool = 0;
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_object;
				func_3715(var_183_object);
				if(var_182_bool != 0) {
					var_184_bool = 0; var_185_object = Obj();
					var_185_object = var_1_object;
					func_3691(var_185_object);
					if(var_184_bool != 0) {
						var_181_bool = 1;
					}
				}
				if(var_181_bool != 1) {
					var_165_bool = 0;
				}
			}
			if(var_165_bool != 0) {
				@@@var_0_object:AddReply((int)513314, (int)14550, (int)14549);
			}
			@@@var_0_object:AddReply((int)513313, (int)-1, (int)14548);
			return 0;
		}
		var_197_bool = var_41_bool == (int)14550;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_954(var_42_cvector, "Gasp");
			@@@var_0_object:SetMessage((int)513315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513317, (int)14553, (int)14552);
			@@@var_0_object:AddReply((int)513316, (int)14555, (int)14551);
			return 0;
		}
		var_207_bool = var_41_bool == (int)14553;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_954(var_42_cvector, "Gasp");
			@@@var_0_object:SetMessage((int)513318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513319, (int)14555, (int)14554);
			@@@var_0_object:AddReply((int)541849, (int)14555, (int)44069);
			return 0;
		}
		var_217_bool = var_41_bool == (int)14555;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_954(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)513320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513335, (int)14567, (int)14566);
			return 0;
		}
		var_224_bool = var_41_bool == (int)14567;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_954(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)513336);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513337, (int)14569, (int)14568);
			return 0;
		}
		var_231_bool = var_41_bool == (int)14569;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_954(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)513338);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513339, (int)-1, (int)14570);
			@@@var_0_object:AddReply((int)541850, (int)-1, (int)44071);
			return 0;
		}
		var_3_string = true;
		var_240_bool = 0;
		func_3487(var_240_bool);
		if(var_240_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3d1";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3353();
		var_46_bool = var_42_cvector == (int)34848;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_3505();
		}
		var_79_bool = var_42_cvector == (int)37812;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_3505();
		}
		var_83_bool = var_42_cvector == (int)37815;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_3505();
		}
		var_87_bool = var_42_cvector == (int)37814;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_3505();
		}
		var_91_bool = var_42_cvector == (int)37797;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_3505();
		}
		var_95_bool = var_41_bool == (int)34845;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_1325(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)533341);
			@@@var_0_object:ClearReplies();
			var_114_bool = 0; var_115_object = Obj();
			var_115_object = var_1_object;
			func_3643(var_115_object);
			if(var_114_bool != 0) {
				@@@var_0_object:AddReply((int)533342, (int)34847, (int)34846);
			}
			@@@var_0_object:AddReply((int)533345, (int)-1, (int)34849);
			@@@var_0_object:AddReply((int)536042, (int)-1, (int)37783);
			return 0;
		}
		var_132_bool = var_41_bool == (int)34847;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_1325(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)533343);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536043, (int)37790, (int)37784);
			@@@var_0_object:AddReply((int)536053, (int)37795, (int)37794);
			return 0;
		}
		var_142_bool = var_41_bool == (int)37795;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_1325(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)536054);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536055, (int)37789, (int)37796);
			@@@var_0_object:AddReply((int)536056, (int)-1, (int)37797);
			return 0;
		}
		var_152_bool = var_41_bool == (int)37790;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_1325(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)536049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536050, (int)37792, (int)37791);
			return 0;
		}
		var_159_bool = var_41_bool == (int)37792;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_1325(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)536051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536052, (int)37785, (int)37793);
			return 0;
		}
		var_166_bool = var_41_bool == (int)37785;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_1325(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536044);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536045, (int)37787, (int)37786);
			@@@var_0_object:AddReply((int)536057, (int)37799, (int)37798);
			return 0;
		}
		var_176_bool = var_41_bool == (int)37799;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_1325(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)536058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536059, (int)37803, (int)37800);
			@@@var_0_object:AddReply((int)536063, (int)37807, (int)37806);
			return 0;
		}
		var_186_bool = var_41_bool == (int)37807;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_1325(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)536064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536065, (int)37809, (int)37808);
			return 0;
		}
		var_193_bool = var_41_bool == (int)37809;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_1325(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)536066);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536067, (int)37803, (int)37811);
			@@@var_0_object:AddReply((int)536069, (int)-1, (int)37814);
			return 0;
		}
		var_203_bool = var_41_bool == (int)37787;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_1325(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536047, (int)37803, (int)37788);
			@@@var_0_object:AddReply((int)536060, (int)37803, (int)37802);
			return 0;
		}
		var_213_bool = var_41_bool == (int)37803;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_1325(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)536061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536062, (int)37789, (int)37804);
			@@@var_0_object:AddReply((int)536070, (int)-1, (int)37815);
			return 0;
		}
		var_223_bool = var_41_bool == (int)37789;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_1325(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)536048);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533344, (int)-1, (int)34848);
			@@@var_0_object:AddReply((int)536068, (int)-1, (int)37812);
			return 0;
		}
		var_3_string = true;
		var_232_bool = 0;
		func_3487(var_232_bool);
		if(var_232_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x544";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3353();
		var_46_bool = var_42_cvector == (int)35715;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_3527();
		}
		var_91_bool = var_42_cvector == (int)35737;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_3543();
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_3489(var_121_object);
		}
		var_147_bool = var_42_cvector == (int)38334;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_3572();
		}
		var_165_bool = var_42_cvector == (int)38333;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_3572();
		}
		var_169_bool = var_41_bool == (int)35714;
		if(var_169_bool != 0) {
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_3655(var_171_object);
			if(var_170_bool != 0) {
				var_178_object = Obj(); var_179_object = Obj();
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_3515();
				var_182_object = Obj(); var_183_object = Obj();
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_3521();
				var_186_string = "";
				func_1856(var_42_cvector, "Rage");
				@@@var_0_object:SetMessage((int)534127);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)536495, (int)38296, (int)38295);
				@@@var_0_object:AddReply((int)536508, (int)38310, (int)38309);
				return 0;
			}
			var_210_string = "";
			func_1856(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534129);
			@@@var_0_object:ClearReplies();
			var_212_bool = 0; var_213_object = Obj();
			var_213_object = var_1_object;
			func_3667(var_213_object);
			if(var_212_bool != 0) {
				@@@var_0_object:AddReply((int)534146, (int)38315, (int)35733);
			}
			@@@var_0_object:AddReply((int)534130, (int)-1, (int)35717);
			return 0;
		}
		var_225_bool = var_41_bool == (int)38315;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_1856(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536513, (int)38317, (int)38316);
			@@@var_0_object:AddReply((int)536516, (int)38317, (int)38319);
			return 0;
		}
		var_235_bool = var_41_bool == (int)38317;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_1856(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)536514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536515, (int)35734, (int)38318);
			@@@var_0_object:AddReply((int)536517, (int)35734, (int)38321);
			return 0;
		}
		var_245_bool = var_41_bool == (int)35734;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_1856(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)534147);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536518, (int)38324, (int)38323);
			@@@var_0_object:AddReply((int)536524, (int)38330, (int)38329);
			@@@var_0_object:AddReply((int)536522, (int)38328, (int)38327);
			return 0;
		}
		var_258_bool = var_41_bool == (int)38328;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_1856(var_42_cvector, "Gasp");
			@@@var_0_object:SetMessage((int)536523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536526, (int)38330, (int)38331);
			return 0;
		}
		var_265_bool = var_41_bool == (int)38330;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_1856(var_42_cvector, "Gasp");
			@@@var_0_object:SetMessage((int)536525);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536529, (int)38324, (int)38335);
			return 0;
		}
		var_272_bool = var_41_bool == (int)38324;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_1856(var_42_cvector, "Shyness");
			@@@var_0_object:SetMessage((int)536519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536520, (int)38326, (int)38325);
			@@@var_0_object:AddReply((int)536527, (int)-1, (int)38333);
			return 0;
		}
		var_282_bool = var_41_bool == (int)38326;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_1856(var_42_cvector, "Gasp");
			@@@var_0_object:SetMessage((int)536521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534148, (int)35736, (int)35735);
			@@@var_0_object:AddReply((int)536528, (int)-1, (int)38334);
			return 0;
		}
		var_292_bool = var_41_bool == (int)35736;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_1856(var_42_cvector, "Gasp");
			@@@var_0_object:SetMessage((int)534149);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534150, (int)-1, (int)35737);
			return 0;
		}
		var_299_bool = var_41_bool == (int)38310;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_1856(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536510, (int)38298, (int)38311);
			return 0;
		}
		var_306_bool = var_41_bool == (int)38296;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_1856(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536497, (int)38298, (int)38297);
			return 0;
		}
		var_313_bool = var_41_bool == (int)38298;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_1856(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)536498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536499, (int)38300, (int)38299);
			return 0;
		}
		var_320_bool = var_41_bool == (int)38300;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_1856(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)536500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536501, (int)38302, (int)38301);
			@@@var_0_object:AddReply((int)536511, (int)38304, (int)38313);
			return 0;
		}
		var_330_bool = var_41_bool == (int)38302;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_1856(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536503, (int)38304, (int)38303);
			return 0;
		}
		var_337_bool = var_41_bool == (int)38304;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_1856(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534128, (int)-1, (int)35715);
			return 0;
		}
		var_3_string = true;
		var_343_bool = 0;
		func_3487(var_343_bool);
		if(var_343_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x757";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3353();
		var_46_bool = var_41_bool == (int)37366;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_2428(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)535680);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535681, (int)42137, (int)37367);
			@@@var_0_object:AddReply((int)540004, (int)-1, (int)41975);
			@@@var_0_object:AddReply((int)540218, (int)-1, (int)42198);
			return 0;
		}
		var_75_bool = var_41_bool == (int)42137;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_2428(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)540162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540163, (int)42140, (int)42138);
			@@@var_0_object:AddReply((int)540164, (int)42140, (int)42139);
			return 0;
		}
		var_85_bool = var_41_bool == (int)42140;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_2428(var_42_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)540165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540166, (int)42144, (int)42142);
			@@@var_0_object:AddReply((int)540167, (int)42144, (int)42143);
			return 0;
		}
		var_95_bool = var_41_bool == (int)42144;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_2428(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)540168);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540169, (int)42147, (int)42146);
			return 0;
		}
		var_102_bool = var_41_bool == (int)42147;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_2428(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)540170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540171, (int)-1, (int)42148);
			@@@var_0_object:AddReply((int)540172, (int)-1, (int)42149);
			return 0;
		}
		var_3_string = true;
		var_111_bool = 0;
		func_3487(var_111_bool);
		if(var_111_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x993";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	if((int)1 != 0) {
		func_3353();
		var_46_bool = var_41_int == (int)42551;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_2723(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_71_bool = 0;
		func_3487(var_71_bool);
		if(var_71_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaba";
	
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_43_bool = var_41_int == (int)10;
	if(var_43_bool != 0) {
		func_2856();
		var_45_bool = 0;
		var_45_bool = 0;
		var_46_bool = 0;
		func_3077(var_46_bool);
		if(var_46_bool != 0) {
			var_49_bool = 0;
			func_2825(var_49_bool);
			if(var_49_bool != 0) {
				var_45_bool = 1;
			}
		}
		if(var_45_bool != 0) {
			var_66_bool = 0;
			func_2805(var_66_bool);
			if(var_66_bool != 0) {
				var_85_bool = 0; var_86_object = Obj();
				func_3360(Obj());
				var_87_object = var_86_object;
				func_3227(var_85_bool, var_86_object);
			}
		} else {
			func_2820(var_41_int);
			func_2847();
		}
	}
	return 0;
	
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_3038();
	func_2856();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0();
	func_2856();
	var_42_string = "";
	func_3307("Neutral");
	func_2847();
	return 0;
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool;
	if(var_42_bool != 0) {
		func_2847();
	} else {
		var_48_string = "";
		func_3307("Neutral");
	}
	return 0;
	
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	IsOverrideActive(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		EventDisable(0);
		func_3038();
		var_45_bool = 0; var_46_object = Obj();
		var_41_object = var_46_object;
		func_3068(var_45_bool, var_46_object);
		EventEnable(0);
		var_59_object = Obj();
		var_41_object = var_59_object;
		func_3926(var_59_object);
		var_770_string = "";
		func_3307("Neutral");
		func_2856();
		func_2847();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_2791(var_40_cvector);
	return 0;
}


func_0(var_0_object, var_64_int, var_65_object)
{
	var_67_object = Obj(); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; var_71_object = Obj(); var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	var_0_object = var_65_object;
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0;
	var_65_object = var_76_object;
	func_3082(var_75_bool, var_76_object, (float)70.0);
	var_122_bool = var_75_bool == 0; //@nz
	if(var_122_bool != 0) {
		var_64_int = -2;
		return 8;
	}
	CreateDialog(var_71_object);
	var_123_int = 0;
	func_3481(var_123_int);
	@@var_71_object:SetNPCName(var_123_int);
	var_124_int = 0;
	func_3479(var_124_int);
	@@var_71_object:SetNPCDescription(var_124_int);
	var_125_string = "";
	func_3483(var_125_string);
	@@var_71_object:SetPhoto(var_125_string);
	var_126_string = "";
	func_3485(var_126_string);
	@@var_71_object:SetPhoto2(var_126_string);
	var_127_int = 0;
	func_3909(var_127_int);
	@@var_71_object:SetPlayerName(var_127_int);
	IsOverrideActive(var_72_bool);
	var_135_bool = var_72_bool;
	if(var_135_bool != 0) {
		var_64_int = -2;
		return 8;
	}
	DoDialog(var_71_object);
	var_136_bool = 0; var_137_object = Obj();
	func_3360(Obj());
	var_138_object = var_137_object;
	func_3169(var_136_bool, var_137_object);
	var_231_object = Obj(); var_232_object = Obj();
	var_65_object = var_231_object;
	var_71_object = var_232_object;
	TaskCall(1);
	func_81(var_233_object, var_234_object, var_235_string, var_236_bool, var_231_object, var_232_object);
	TaskReturn();
	@@var_71_object:IsDialogEnd(var_74_bool);
	
Label_63:
	var_284_bool = var_74_bool == 0; //@nz
	if(var_284_bool != 0) {
		sync();
		@@var_71_object:IsDialogEnd(var_74_bool);
		goto Label_63;
	}
	var_65_object = Obj();
	func_3151();
	StopDialog(var_71_object);
	@@var_71_object:GetReturnValue((int)-1);
	var_73_int = var_64_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2820(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_118_float, var_119_float);
	return 0;
}


func_3077(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0;
	IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
	return 2;
}


func_3593()
{
	var_49_object = Obj(); var_50_object = Obj();
	SetVariable("d7q02", (int)1);
	func_3859(Obj());
	var_53_object = var_50_object;
	var_64_float = 0;
	func_3435(var_64_float);
	@@var_50_object:AddMark("d7q02MarkGotoCemetery", "pt_d7q02_corpse", (int)0, (int)515427, var_64_float);
	var_71_float = 0;
	func_3435(var_71_float);
	@@var_50_object:AddMark("d7q02MarkGotoAlexandr", "pt_map_alexandr", (int)0, (int)515428, var_71_float);
	func_3779();
	func_3792();
	var_103_object = Obj(); var_104_string = "";
	func_3381(var_103_object, "quest_d7_02");
	var_111_bool = 0; var_112_string = ""; var_113_string = "";
	func_3423(var_111_bool, "quest_d7_02", "place_corpse");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3082(var_75_bool, var_76_object, var_77_float)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0;
	@@var_76_object:GetPosition(var_88_cvector);
	@@var_76_object:GetEyesHeight(var_87_float);
	var_96_float = GetByIndex(var_88_cvector, 1);
	var_96_float = var_96_float + var_87_float;
	SetByIndex(var_88_cvector, 1) = var_96_float;
	GetPosition(var_89_cvector);
	GetEyesHeight(var_87_float);
	var_97_float = GetByIndex(var_89_cvector, 1);
	var_97_float = var_97_float + var_87_float;
	SetByIndex(var_89_cvector, 1) = var_97_float;
	var_90_cvector = var_88_cvector - var_89_cvector;
	var_98_float = GetByIndex(var_90_cvector, 1);
	SetByIndex(var_90_cvector, 1) = (float)0;
	var_99_int = var_90_cvector | var_90_cvector;
	var_100_float = sqrt(var_99_int);
	var_90_cvector = var_90_cvector / var_100_float;
	var_91_cvector = -var_90_cvector;
	var_101_float = var_90_cvector * var_77_float;
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	var_103_cvector = var_91_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3366(var_102_cvector, var_103_cvector);
	var_111_float = var_102_cvector * (int)25;
	var_112_int = var_101_float + var_111_float;
	var_92_cvector = var_112_int - CVector(0.0, 10.0, 0.0);
	var_93_cvector = var_89_cvector + var_92_cvector;
	IsOverrideActive(var_94_bool);
	var_114_bool = var_94_bool;
	if(var_114_bool != 0) {
		var_75_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_93_cvector, var_91_cvector, (bool)1);
	var_116_float = GetByIndex(var_92_cvector, 0);
	var_117_float = GetByIndex(var_92_cvector, 2);
	Rotate(var_116_float, var_117_float);
	var_118_bool = 0;
	func_3487(var_118_bool);
	if(var_118_bool != 0) {
	} else {
		HasAnimationTrack(var_95_bool, "head");
		var_120_bool = var_95_bool;
		if(var_120_bool == 0) goto Label_3145;
		LookAsyncCamera("head");
	}
Label_3145:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_75_bool = 1;
	return 18;
	
}


func_2825(var_49_bool)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0;
	FindActor(var_52_object, "player");
	var_55_bool = var_52_object == 0; //@nz
	if(var_55_bool != 0) {
		var_49_bool = 0;
		return 4;
	}
	var_56_float = 0; var_57_object = Obj();
	var_52_object = var_57_object;
	func_3043(var_56_float, var_57_object);
	var_65_bool = var_56_float > (float)90000.0;
	if(var_65_bool != 0) {
		var_49_bool = 0;
		return 4;
	}
	CanSee(var_53_bool, var_52_object);
	var_53_bool = var_49_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_3338(var_170_bool, var_171_string)
{
	var_172_bool = 0; var_173_bool = 0;
	var_174_bool = 0;
	func_3487(var_174_bool);
	if(var_174_bool != 0) {
		lshHasSpeech(var_173_bool, var_171_string);
		var_175_bool = var_173_bool;
		if(var_175_bool != 0) {
			lshPlaySpeech(var_171_string);
			var_170_bool = 1;
			return 2;
		}
	}
	var_170_bool = 0;
	return 2;
}


func_783(var_0_object, var_421_int, var_422_object)
{
	var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0; var_428_object = Obj(); var_429_bool = 0; var_430_int = 0; var_431_bool = 0;
	var_0_object = var_422_object;
	var_432_bool = 0; var_433_object = Obj(); var_434_float = 0;
	var_422_object = var_433_object;
	func_3082(var_432_bool, var_433_object, (float)70.0);
	var_435_bool = var_432_bool == 0; //@nz
	if(var_435_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	CreateDialog(var_428_object);
	var_436_int = 0;
	func_3481(var_436_int);
	@@var_428_object:SetNPCName(var_436_int);
	var_437_int = 0;
	func_3479(var_437_int);
	@@var_428_object:SetNPCDescription(var_437_int);
	var_438_string = "";
	func_3483(var_438_string);
	@@var_428_object:SetPhoto(var_438_string);
	var_439_string = "";
	func_3485(var_439_string);
	@@var_428_object:SetPhoto2(var_439_string);
	var_440_int = 0;
	func_3909(var_440_int);
	@@var_428_object:SetPlayerName(var_440_int);
	IsOverrideActive(var_429_bool);
	var_441_bool = var_429_bool;
	if(var_441_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	DoDialog(var_428_object);
	var_442_bool = 0; var_443_object = Obj();
	func_3360(Obj());
	var_444_object = var_443_object;
	func_3169(var_442_bool, var_443_object);
	var_445_object = Obj(); var_446_object = Obj();
	var_422_object = var_445_object;
	var_428_object = var_446_object;
	TaskCall(7);
	func_864(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object);
	TaskReturn();
	@@var_428_object:IsDialogEnd(var_431_bool);
	
Label_846:
	var_498_bool = var_431_bool == 0; //@nz
	if(var_498_bool != 0) {
		sync();
		@@var_428_object:IsDialogEnd(var_431_bool);
		goto Label_846;
	}
	var_422_object = Obj();
	func_3151();
	StopDialog(var_428_object);
	@@var_428_object:GetReturnValue((int)-1);
	var_430_int = var_421_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3859(var_98_object)
{
	var_99_object = Obj(); var_100_object = Obj(); var_101_object = Obj(); var_102_object = Obj();
	GetMainOutdoorScene(var_101_object);
	var_103_bool = var_101_object == 0; //@ne
	if(var_103_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_102_object = 0;
		var_102_object = var_98_object;
		return 4;
	}
	@@var_101_object:GetMap(var_102_object);
	var_102_object = var_98_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2584(var_0_object, var_714_int, var_715_object)
{
	var_717_object = Obj(); var_718_bool = 0; var_719_int = 0; var_720_bool = 0; var_721_object = Obj(); var_722_bool = 0; var_723_int = 0; var_724_bool = 0;
	var_0_object = var_715_object;
	var_725_bool = 0; var_726_object = Obj(); var_727_float = 0;
	var_715_object = var_726_object;
	func_3082(var_725_bool, var_726_object, (float)70.0);
	var_728_bool = var_725_bool == 0; //@nz
	if(var_728_bool != 0) {
		var_714_int = -2;
		return 8;
	}
	CreateDialog(var_721_object);
	var_729_int = 0;
	func_3481(var_729_int);
	@@var_721_object:SetNPCName(var_729_int);
	var_730_int = 0;
	func_3479(var_730_int);
	@@var_721_object:SetNPCDescription(var_730_int);
	var_731_string = "";
	func_3483(var_731_string);
	@@var_721_object:SetPhoto(var_731_string);
	var_732_string = "";
	func_3485(var_732_string);
	@@var_721_object:SetPhoto2(var_732_string);
	var_733_int = 0;
	func_3909(var_733_int);
	@@var_721_object:SetPlayerName(var_733_int);
	IsOverrideActive(var_722_bool);
	var_734_bool = var_722_bool;
	if(var_734_bool != 0) {
		var_714_int = -2;
		return 8;
	}
	DoDialog(var_721_object);
	var_735_bool = 0; var_736_object = Obj();
	func_3360(Obj());
	var_737_object = var_736_object;
	func_3169(var_735_bool, var_736_object);
	var_738_object = Obj(); var_739_object = Obj();
	var_715_object = var_738_object;
	var_721_object = var_739_object;
	TaskCall(15);
	func_2665(var_740_object, var_741_object, var_742_string, var_743_bool, var_738_object, var_739_object);
	TaskReturn();
	@@var_721_object:IsDialogEnd(var_724_bool);
	
Label_2647:
	var_768_bool = var_724_bool == 0; //@nz
	if(var_768_bool != 0) {
		sync();
		@@var_721_object:IsDialogEnd(var_724_bool);
		goto Label_2647;
	}
	var_715_object = Obj();
	func_3151();
	StopDialog(var_721_object);
	@@var_721_object:GetReturnValue((int)-1);
	var_723_int = var_714_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3353()
{
	var_44_bool = 0;
	func_3487(var_44_bool);
	if(var_44_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2847()
{
	var_772_float = 0; var_773_float = 0;
	rand(var_773_float, (int)8, (int)16);
	SetTimer((int)10, var_773_float);
	return 2;
}


func_3360(var_138_object)
{
	var_139_object = Obj(); var_140_object = Obj();
	self(var_140_object);
	var_140_object = var_138_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3876(var_122_object, var_123_string, var_124_float)
{
	var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0; var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_object = Obj(); var_133_bool = 0;
	GetMainOutdoorScene(var_132_object);
	var_134_bool = var_132_object == 0; //@ne
	if(var_134_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_132_object:GetLocator(var_123_string, var_133_bool, var_130_cvector, var_131_cvector);
	var_136_bool = var_133_bool == 0; //@nz
	if(var_136_bool != 0) {
		var_138_int = "Warning: outdoor scene locator " + var_123_string;
		var_140_int = var_138_int + " doesnt exist";
		Trace(var_140_int);
	}
	@@var_132_object:GetMap(var_122_object);
	var_141_bool = var_122_object == 0; //@ne
	if(var_141_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_143_float = GetByIndex(var_130_cvector, 0);
	var_144_float = GetByIndex(var_130_cvector, 2);
	@@var_122_object:SetMapParams(var_143_float, var_144_float, var_124_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3366(var_102_cvector, var_103_cvector)
{
	var_105_float = 0; var_106_float = 0;
	var_107_int = var_103_cvector | var_103_cvector;
	var_106_float = sqrt(var_107_int);
	var_108_float = 9.999999974752427e-07;
	var_109_bool = var_106_float < var_108_float;
	if(var_109_bool != 0) {
		var_102_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_102_cvector = var_103_cvector / var_106_float;
	return 2;
}


func_2856()
{
	KillTimer((int)10);
	return 0;
}


func_1325(var_2_object, var_533_string)
{
	var_534_bool = 0;
	func_3487(var_534_bool);
	var_535_bool = var_534_bool == 0; //@nz
	if(var_535_bool != 0) {
		return 0;
	}
	var_536_bool = var_533_string == var_2_object;
	if(var_536_bool != 0) {
		return 0;
	}
	var_537_string = ""; var_538_bool = 0;
	var_533_string = var_537_string;
	var_540_bool = var_533_string == "";
	if(var_540_bool != 0) {
		var_538_bool = 0;
	} else {
		var_538_bool = 1;
	}
	func_3323(var_537_string, var_538_bool);
	var_2_object = var_533_string;
	return 0;
	
}


func_3376(var_342_int, var_343_string)
{
	var_344_int = 0; var_345_int = 0;
	GetVariable(var_343_string, var_345_int);
	var_345_int = var_342_int;
	return 2;
}


func_305(var_0_object, var_300_int, var_301_object)
{
	var_303_object = Obj(); var_304_bool = 0; var_305_int = 0; var_306_bool = 0; var_307_object = Obj(); var_308_bool = 0; var_309_int = 0; var_310_bool = 0;
	var_0_object = var_301_object;
	var_311_bool = 0; var_312_object = Obj(); var_313_float = 0;
	var_301_object = var_312_object;
	func_3082(var_311_bool, var_312_object, (float)70.0);
	var_314_bool = var_311_bool == 0; //@nz
	if(var_314_bool != 0) {
		var_300_int = -2;
		return 8;
	}
	CreateDialog(var_307_object);
	var_315_int = 0;
	func_3481(var_315_int);
	@@var_307_object:SetNPCName(var_315_int);
	var_316_int = 0;
	func_3479(var_316_int);
	@@var_307_object:SetNPCDescription(var_316_int);
	var_317_string = "";
	func_3483(var_317_string);
	@@var_307_object:SetPhoto(var_317_string);
	var_318_string = "";
	func_3485(var_318_string);
	@@var_307_object:SetPhoto2(var_318_string);
	var_319_int = 0;
	func_3909(var_319_int);
	@@var_307_object:SetPlayerName(var_319_int);
	IsOverrideActive(var_308_bool);
	var_320_bool = var_308_bool;
	if(var_320_bool != 0) {
		var_300_int = -2;
		return 8;
	}
	DoDialog(var_307_object);
	var_321_bool = 0; var_322_object = Obj();
	func_3360(Obj());
	var_323_object = var_322_object;
	func_3169(var_321_bool, var_322_object);
	var_324_object = Obj(); var_325_object = Obj();
	var_301_object = var_324_object;
	var_307_object = var_325_object;
	TaskCall(3);
	func_386(var_326_object, var_327_object, var_328_string, var_329_bool, var_324_object, var_325_object);
	TaskReturn();
	@@var_307_object:IsDialogEnd(var_310_bool);
	
Label_368:
	var_362_bool = var_310_bool == 0; //@nz
	if(var_362_bool != 0) {
		sync();
		@@var_307_object:IsDialogEnd(var_310_bool);
		goto Label_368;
	}
	var_301_object = Obj();
	func_3151();
	StopDialog(var_307_object);
	@@var_307_object:GetReturnValue((int)-1);
	var_309_int = var_300_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3637()
{
	SetVariable("KnowMark", (int)1);
	return 0;
}


func_3381(var_82_object, var_83_string)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj();
	GetMainOutdoorScene(var_86_object);
	var_89_int = var_83_string + ".bin";
	AddBlankActor(var_87_object, var_86_object, var_83_string, var_89_int);
	var_87_object = var_82_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3643(var_542_bool)
{
	var_544_int = 0; var_545_string = "";
	func_3376(var_544_int, "d8q04");
	var_547_bool = var_544_int == (int)3;
	if(var_547_bool != 0) {
		var_542_bool = 1;
		return 0;
	}
	var_542_bool = 0;
	return 0;
}


func_2365(var_0_object, var_1_object, var_2_object, var_3_string, var_679_object, var_680_object)
{
	var_0_object = var_680_object;
	var_1_object = var_679_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_686_string = "";
		func_2428(var_680_object, "Declaim");
		@@@var_0_object:SetMessage((int)535680);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535681, (int)42137, (int)37367);
		@@@var_0_object:AddReply((int)540004, (int)-1, (int)41975);
		@@@var_0_object:AddReply((int)540218, (int)-1, (int)42198);
		goto Label_2398;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x941";
	}
Label_2398:
	var_704_bool = 0;
	func_3487(var_704_bool);
	if(var_704_bool != 0) {

	Label_2402:
		lshWaitForAnimEnd();
		var_705_string = var_3_string;
		if(var_705_string != 0) {
		} else {
			var_706_string = "";
			var_706_string = var_2_object;
			func_3307(var_706_string);
			goto Label_2402;
	}
		PlayAnimation("all", "idle");

	Label_2417:
		WaitForAnimEnd();
		var_709_string = var_3_string;
		if(var_709_string != 0) {
			goto Label_2427;
		}
		PlayAnimation("all", "idle");
		goto Label_2417;
	}
	goto Label_2427;
	
Label_2427:
	return 0;
	
}


func_1856(var_2_object, var_614_string)
{
	var_615_bool = 0;
	func_3487(var_615_bool);
	var_616_bool = var_615_bool == 0; //@nz
	if(var_616_bool != 0) {
		return 0;
	}
	var_617_bool = var_614_string == var_2_object;
	if(var_617_bool != 0) {
		return 0;
	}
	var_618_string = ""; var_619_bool = 0;
	var_614_string = var_618_string;
	var_621_bool = var_614_string == "";
	if(var_621_bool != 0) {
		var_619_bool = 0;
	} else {
		var_619_bool = 1;
	}
	func_3323(var_618_string, var_619_bool);
	var_2_object = var_614_string;
	return 0;
	
}


func_3392(var_140_int, var_141_int)
{
	var_142_object = Obj(); var_143_object = Obj();
	CreateIntVector(var_143_object);
	@@var_143_object:add(var_140_int);
	@@var_143_object:add(var_141_int);
	SendWorldWndMessage((int)3, var_143_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3909(var_127_int)
{
	var_128_int = 0; var_129_int = 0;
	GetVariable("branch", var_129_int);
	var_132_bool = var_129_int == (int)0;
	if(var_132_bool != 0) {
		var_127_int = 1;
		return 2;
	EMIT "GOTO 0xf54";
	}
	var_134_bool = var_129_int == (int)1;
	if(var_134_bool != 0) {
		var_127_int = 2;
		return 2;
	}
	var_127_int = 3;
	return 2;
}


func_3655(var_600_bool)
{
	var_602_int = 0; var_603_string = "";
	func_3376(var_602_int, "ood10Mark1");
	var_605_bool = var_602_int == (int)0;
	if(var_605_bool != 0) {
		var_600_bool = 1;
		return 0;
	}
	var_600_bool = 0;
	return 0;
}


func_3404(var_126_object, var_127_int)
{
	var_129_int = 0; var_130_int = 0;
	var_131_object = Obj(); var_132_string = ""; var_133_int = 0;
	var_126_object = var_131_object;
	var_127_int = var_133_int;
	func_3051(var_131_object, "money", var_133_int);
	var_138_bool = var_127_int > (int)0;
	if(var_138_bool != 0) {
		GetInvItemByName(var_130_int, "Money");
		var_140_int = 0; var_141_int = 0;
		var_130_int = var_140_int;
		var_127_int = var_141_int;
		func_3392(var_140_int, var_141_int);
	}
	return 2;
}


func_590(var_0_object, var_366_int, var_367_object)
{
	var_369_object = Obj(); var_370_bool = 0; var_371_int = 0; var_372_bool = 0; var_373_object = Obj(); var_374_bool = 0; var_375_int = 0; var_376_bool = 0;
	var_0_object = var_367_object;
	var_377_bool = 0; var_378_object = Obj(); var_379_float = 0;
	var_367_object = var_378_object;
	func_3082(var_377_bool, var_378_object, (float)70.0);
	var_380_bool = var_377_bool == 0; //@nz
	if(var_380_bool != 0) {
		var_366_int = -2;
		return 8;
	}
	CreateDialog(var_373_object);
	var_381_int = 0;
	func_3481(var_381_int);
	@@var_373_object:SetNPCName(var_381_int);
	var_382_int = 0;
	func_3479(var_382_int);
	@@var_373_object:SetNPCDescription(var_382_int);
	var_383_string = "";
	func_3483(var_383_string);
	@@var_373_object:SetPhoto(var_383_string);
	var_384_string = "";
	func_3485(var_384_string);
	@@var_373_object:SetPhoto2(var_384_string);
	var_385_int = 0;
	func_3909(var_385_int);
	@@var_373_object:SetPlayerName(var_385_int);
	IsOverrideActive(var_374_bool);
	var_386_bool = var_374_bool;
	if(var_386_bool != 0) {
		var_366_int = -2;
		return 8;
	}
	DoDialog(var_373_object);
	var_387_bool = 0; var_388_object = Obj();
	func_3360(Obj());
	var_389_object = var_388_object;
	func_3169(var_387_bool, var_388_object);
	var_390_object = Obj(); var_391_object = Obj();
	var_367_object = var_390_object;
	var_373_object = var_391_object;
	TaskCall(5);
	func_671(var_392_object, var_393_object, var_394_string, var_395_bool, var_390_object, var_391_object);
	TaskReturn();
	@@var_373_object:IsDialogEnd(var_376_bool);
	
Label_653:
	var_417_bool = var_376_bool == 0; //@nz
	if(var_417_bool != 0) {
		sync();
		@@var_373_object:IsDialogEnd(var_376_bool);
		goto Label_653;
	}
	var_367_object = Obj();
	func_3151();
	StopDialog(var_373_object);
	@@var_373_object:GetReturnValue((int)-1);
	var_375_int = var_366_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3151()
{
	var_286_bool = 0; var_287_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_289_bool = 0;
	func_3487(var_289_bool);
	if(var_289_bool != 0) {
	} else {
		HasAnimationTrack(var_287_bool, "head");
		var_291_bool = var_287_bool;
		if(var_291_bool == 0) goto Label_3168;
		UnlookAsync("head");
	}
Label_3168:
	return 2;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_231_object, var_232_object)
{
	var_0_object = var_232_object;
	var_1_object = var_231_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_238_object = Obj(); var_239_object = Obj();
		var_238_object = var_1_object;
		var_239_object = var_0_object;
		func_3637();
		var_242_string = "";
		func_144(var_232_object, "Declaim");
		@@@var_0_object:SetMessage((int)500424);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500425, (int)494, (int)493);
		@@@var_0_object:AddReply((int)500429, (int)498, (int)497);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_266_bool = 0;
	func_3487(var_266_bool);
	if(var_266_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_267_string = var_3_string;
		if(var_267_string != 0) {
		} else {
			var_268_string = "";
			var_268_string = var_2_object;
			func_3307(var_268_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_281_string = var_3_string;
		if(var_281_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_3667(var_639_bool)
{
	var_641_int = 0; var_642_string = "";
	func_3376(var_641_int, "d10q03");
	var_644_bool = var_641_int == (int)2;
	if(var_644_bool != 0) {
		var_639_bool = 1;
		return 0;
	}
	var_639_bool = 0;
	return 0;
}


func_3926(var_59_object)
{
	var_60_int = 0; var_61_int = 0;
	GetVariable("mt_mark", var_61_int);
	var_63_bool = var_61_int == 0; //@nz
	if(var_63_bool != 0) {
		var_64_int = 0; var_65_object = Obj();
		var_59_object = var_65_object;
		TaskCall(0);
		func_0(var_66_object, var_64_int, var_65_object);
		TaskReturn();
		SetVariable("mt_mark", (int)1);
	}
	var_295_bool = 0; var_296_int = 0;
	func_3449(var_295_bool, (int)1);
	if(var_295_bool != 0) {
		return 2;
	}
	var_298_bool = 0; var_299_int = 0;
	func_3449(var_298_bool, (int)2);
	if(var_298_bool != 0) {
		var_300_int = 0; var_301_object = Obj();
		var_59_object = var_301_object;
		TaskCall(2);
		func_305(var_302_object, var_300_int, var_301_object);
		TaskReturn();
		return 2;
	}
	var_364_bool = 0; var_365_int = 0;
	func_3449(var_364_bool, (int)4);
	if(var_364_bool != 0) {
		var_366_int = 0; var_367_object = Obj();
		var_59_object = var_367_object;
		TaskCall(4);
		func_590(var_368_object, var_366_int, var_367_object);
		TaskReturn();
		return 2;
	}
	var_419_bool = 0; var_420_int = 0;
	func_3449(var_419_bool, (int)7);
	if(var_419_bool != 0) {
		var_421_int = 0; var_422_object = Obj();
		var_59_object = var_422_object;
		TaskCall(6);
		func_783(var_423_object, var_421_int, var_422_object);
		TaskReturn();
		return 2;
	}
	var_500_bool = 0; var_501_int = 0;
	func_3449(var_500_bool, (int)8);
	if(var_500_bool != 0) {
		var_502_int = 0; var_503_object = Obj();
		var_59_object = var_503_object;
		TaskCall(8);
		func_1176(var_504_object, var_502_int, var_503_object);
		TaskReturn();
		return 2;
	}
	var_567_bool = 0; var_568_int = 0;
	func_3449(var_567_bool, (int)10);
	if(var_567_bool != 0) {
		var_569_int = 0; var_570_object = Obj();
		var_59_object = var_570_object;
		TaskCall(10);
		func_1677(var_571_object, var_569_int, var_570_object);
		TaskReturn();
		return 2;
	}
	var_653_bool = 0; var_654_int = 0;
	func_3449(var_653_bool, (int)12);
	if(var_653_bool != 0) {
		var_655_int = 0; var_656_object = Obj();
		var_59_object = var_656_object;
		TaskCall(12);
		func_2284(var_657_object, var_655_int, var_656_object);
		TaskReturn();
		return 2;
	}
	var_714_int = 0; var_715_object = Obj();
	var_59_object = var_715_object;
	TaskCall(14);
	func_2584(var_716_object, var_714_int, var_715_object);
	TaskReturn();
	return 2;
}


func_3679(var_340_bool)
{
	var_342_int = 0; var_343_string = "";
	func_3376(var_342_int, "ood2Mark1");
	var_347_bool = var_342_int == (int)0;
	if(var_347_bool != 0) {
		var_340_bool = 1;
		return 0;
	}
	var_340_bool = 0;
	return 0;
}


func_3423(var_158_bool, var_159_string, var_160_string)
{
	var_161_object = Obj(); var_162_object = Obj();
	FindActor(var_162_object, var_159_string);
	var_163_bool = var_162_object == 0; //@ne
	if(var_163_bool != 0) {
		var_158_bool = 0;
		return 2;
	}
	Trigger(var_162_object, var_160_string);
	var_158_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3169(var_136_bool, var_137_object)
{
	var_141_int = 0; var_142_int = 0; var_143_int = 0; var_144_int = 0;
	GetVariable("voice_common", var_143_int);
	var_146_int = var_143_int;
	if(var_146_int != 0) {
		var_147_bool = 0; var_148_object = Obj();
		var_137_object = var_148_object;
		func_3227(var_147_bool, var_148_object);
		var_177_bool = var_147_bool == 0; //@nz
		if(var_177_bool != 0) {
			var_178_bool = 0; var_179_object = Obj();
			var_137_object = var_179_object;
			func_3264(var_178_bool, var_179_object);
			var_213_bool = var_178_bool == 0; //@nz
			if(var_213_bool != 0) {
				var_136_bool = 0;
				return 4;
			}
		}
		irand(var_144_int, (int)2);
		var_215_int = var_144_int;
		if(var_215_int != 0) {
			var_218_int = var_143_int + (int)1;
			var_220_int = var_218_int % (int)3;
			SetVariable("voice_common", var_220_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_223_bool = 0; var_224_object = Obj();
		var_137_object = var_224_object;
		func_3264(var_223_bool, var_224_object);
		var_225_bool = var_223_bool == 0; //@nz
		if(var_225_bool != 0) {
			var_226_bool = 0; var_227_object = Obj();
			var_137_object = var_227_object;
			func_3227(var_226_bool, var_227_object);
			var_228_bool = var_226_bool == 0; //@nz
			if(var_228_bool != 0) {
				var_136_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3225;
	
Label_3225:
	var_136_bool = 1;
	return 4;
	
}


func_864(var_0_object, var_1_object, var_2_object, var_3_string, var_445_object, var_446_object)
{
	var_0_object = var_446_object;
	var_1_object = var_445_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_452_string = "";
		func_954(var_446_object, "Neutral");
		@@@var_0_object:SetMessage((int)513312);
		@@@var_0_object:ClearReplies();
		var_461_bool = 0;
		var_461_bool = 1;
		var_462_bool = 0;
		var_462_bool = 0;
		var_463_bool = 0; var_464_object = Obj();
		var_464_object = var_1_object;
		func_3715(var_464_object);
		if(var_463_bool != 0) {
			var_469_bool = 0; var_470_object = Obj();
			var_470_object = var_1_object;
			func_3703(var_470_object);
			if(var_469_bool != 0) {
				var_462_bool = 1;
			}
		}
		if(var_462_bool != 1) {
			var_475_bool = 0;
			var_475_bool = 0;
			var_476_bool = 0; var_477_object = Obj();
			var_477_object = var_1_object;
			func_3715(var_477_object);
			if(var_476_bool != 0) {
				var_478_bool = 0; var_479_object = Obj();
				var_479_object = var_1_object;
				func_3691(var_479_object);
				if(var_478_bool != 0) {
					var_475_bool = 1;
				}
			}
			if(var_475_bool != 1) {
				var_461_bool = 0;
			}
		}
		if(var_461_bool != 0) {
			@@@var_0_object:AddReply((int)513314, (int)14550, (int)14549);
		}
		@@@var_0_object:AddReply((int)513313, (int)-1, (int)14548);
		goto Label_924;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x364";
	}
Label_924:
	var_490_bool = 0;
	func_3487(var_490_bool);
	if(var_490_bool != 0) {

	Label_928:
		lshWaitForAnimEnd();
		var_491_string = var_3_string;
		if(var_491_string != 0) {
		} else {
			var_492_string = "";
			var_492_string = var_2_object;
			func_3307(var_492_string);
			goto Label_928;
	}
		PlayAnimation("all", "idle");

	Label_943:
		WaitForAnimEnd();
		var_495_string = var_3_string;
		if(var_495_string != 0) {
			goto Label_953;
		}
		PlayAnimation("all", "idle");
		goto Label_943;
	}
	goto Label_953;
	
Label_953:
	return 0;
	
}


func_2665(var_0_object, var_1_object, var_2_object, var_3_string, var_738_object, var_739_object)
{
	var_0_object = var_739_object;
	var_1_object = var_738_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_745_string = "";
		func_2723(var_739_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_2693;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa6d";
	}
Label_2693:
	var_760_bool = 0;
	func_3487(var_760_bool);
	if(var_760_bool != 0) {

	Label_2697:
		lshWaitForAnimEnd();
		var_761_string = var_3_string;
		if(var_761_string != 0) {
		} else {
			var_762_string = "";
			var_762_string = var_2_object;
			func_3307(var_762_string);
			goto Label_2697;
	}
		PlayAnimation("all", "idle");

	Label_2712:
		WaitForAnimEnd();
		var_765_string = var_3_string;
		if(var_765_string != 0) {
			goto Label_2722;
		}
		PlayAnimation("all", "idle");
		goto Label_2712;
	}
	goto Label_2722;
	
Label_2722:
	return 0;
	
}


func_3691(var_478_bool)
{
	var_480_int = 0; var_481_string = "";
	func_3376(var_480_int, "d7BurahLetter");
	var_483_bool = var_480_int != (int)0;
	if(var_483_bool != 0) {
		var_478_bool = 1;
		return 0;
	}
	var_478_bool = 0;
	return 0;
}


func_3435(var_109_float)
{
	var_110_float = 0; var_111_float = 0;
	GetGameTime(var_111_float);
	var_111_float = var_109_float;
	return 2;
}


func_3440(var_191_int)
{
	var_192_float = 0; var_193_float = 0;
	GetGameTime(var_193_float);
	var_195_int = 0;
	var_195_int = var_193_float / (int)24;
	var_191_int = (int)1 + var_195_int;
	return 2;
}


func_3703(var_469_bool)
{
	var_471_int = 0; var_472_string = "";
	func_3376(var_471_int, "d7q01");
	var_474_bool = var_471_int == (int)2;
	if(var_474_bool != 0) {
		var_469_bool = 1;
		return 0;
	}
	var_469_bool = 0;
	return 0;
}


func_3449(var_295_bool, var_296_int)
{
	var_297_int = 0;
	func_3440(var_297_int);
	var_295_bool = var_297_int == var_296_int;
	return 0;
}


func_2428(var_2_object, var_686_string)
{
	var_687_bool = 0;
	func_3487(var_687_bool);
	var_688_bool = var_687_bool == 0; //@nz
	if(var_688_bool != 0) {
		return 0;
	}
	var_689_bool = var_686_string == var_2_object;
	if(var_689_bool != 0) {
		return 0;
	}
	var_690_string = ""; var_691_bool = 0;
	var_686_string = var_690_string;
	var_693_bool = var_686_string == "";
	if(var_693_bool != 0) {
		var_691_bool = 0;
	} else {
		var_691_bool = 1;
	}
	func_3323(var_690_string, var_691_bool);
	var_2_object = var_686_string;
	return 0;
	
}


func_3455(var_65_string, var_66_int)
{
	var_67_string = ""; var_68_string = "";
	var_69_int = var_66_int;
	if(var_69_int != 0) {
		"idle" = "idle" + var_66_int;
	}
	var_68_string = var_65_string;
	return 2;
}


func_386(var_0_object, var_1_object, var_2_object, var_3_string, var_324_object, var_325_object)
{
	var_0_object = var_325_object;
	var_1_object = var_324_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_331_string = "";
		func_449(var_325_object, "Rage");
		@@@var_0_object:SetMessage((int)509489);
		@@@var_0_object:ClearReplies();
		var_340_bool = 0; var_341_object = Obj();
		var_341_object = var_1_object;
		func_3679(var_341_object);
		if(var_340_bool != 0) {
			@@@var_0_object:AddReply((int)509490, (int)10433, (int)10432);
		}
		@@@var_0_object:AddReply((int)509499, (int)-1, (int)10441);
		goto Label_419;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x186";
	}
Label_419:
	var_354_bool = 0;
	func_3487(var_354_bool);
	if(var_354_bool != 0) {

	Label_423:
		lshWaitForAnimEnd();
		var_355_string = var_3_string;
		if(var_355_string != 0) {
		} else {
			var_356_string = "";
			var_356_string = var_2_object;
			func_3307(var_356_string);
			goto Label_423;
	}
		PlayAnimation("all", "idle");

	Label_438:
		WaitForAnimEnd();
		var_359_string = var_3_string;
		if(var_359_string != 0) {
			goto Label_448;
		}
		PlayAnimation("all", "idle");
		goto Label_438;
	}
	goto Label_448;
	
Label_448:
	return 0;
	
}


func_3715(var_463_bool)
{
	var_465_int = 0; var_466_string = "";
	func_3376(var_465_int, "d7q02");
	var_468_bool = var_465_int == (int)0;
	if(var_468_bool != 0) {
		var_463_bool = 1;
		return 0;
	}
	var_463_bool = 0;
	return 0;
}


func_3462(var_59_int)
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0;
	var_62_int = 0;
	
Label_3464:
	var_65_string = ""; var_66_int = 0;
	var_62_int = var_66_int;
	func_3455(var_65_string, var_66_int);
	HasAnimation(var_63_bool, "all", var_65_string);
	var_70_bool = var_63_bool == 0; //@nz
	if(var_70_bool != 0) {
	} else {
		var_62_int = var_62_int + (int)1;
		goto Label_3464;
	}
	var_62_int = var_59_int;
	return 4;
	
}


func_1677(var_0_object, var_569_int, var_570_object)
{
	var_572_object = Obj(); var_573_bool = 0; var_574_int = 0; var_575_bool = 0; var_576_object = Obj(); var_577_bool = 0; var_578_int = 0; var_579_bool = 0;
	var_0_object = var_570_object;
	var_580_bool = 0; var_581_object = Obj(); var_582_float = 0;
	var_570_object = var_581_object;
	func_3082(var_580_bool, var_581_object, (float)70.0);
	var_583_bool = var_580_bool == 0; //@nz
	if(var_583_bool != 0) {
		var_569_int = -2;
		return 8;
	}
	CreateDialog(var_576_object);
	var_584_int = 0;
	func_3481(var_584_int);
	@@var_576_object:SetNPCName(var_584_int);
	var_585_int = 0;
	func_3479(var_585_int);
	@@var_576_object:SetNPCDescription(var_585_int);
	var_586_string = "";
	func_3483(var_586_string);
	@@var_576_object:SetPhoto(var_586_string);
	var_587_string = "";
	func_3485(var_587_string);
	@@var_576_object:SetPhoto2(var_587_string);
	var_588_int = 0;
	func_3909(var_588_int);
	@@var_576_object:SetPlayerName(var_588_int);
	IsOverrideActive(var_577_bool);
	var_589_bool = var_577_bool;
	if(var_589_bool != 0) {
		var_569_int = -2;
		return 8;
	}
	DoDialog(var_576_object);
	var_590_bool = 0; var_591_object = Obj();
	func_3360(Obj());
	var_592_object = var_591_object;
	func_3169(var_590_bool, var_591_object);
	var_593_object = Obj(); var_594_object = Obj();
	var_570_object = var_593_object;
	var_576_object = var_594_object;
	TaskCall(11);
	func_1758(var_595_object, var_596_object, var_597_string, var_598_bool, var_593_object, var_594_object);
	TaskReturn();
	@@var_576_object:IsDialogEnd(var_579_bool);
	
Label_1740:
	var_651_bool = var_579_bool == 0; //@nz
	if(var_651_bool != 0) {
		sync();
		@@var_576_object:IsDialogEnd(var_579_bool);
		goto Label_1740;
	}
	var_570_object = Obj();
	func_3151();
	StopDialog(var_576_object);
	@@var_576_object:GetReturnValue((int)-1);
	var_578_int = var_569_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3727()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)672, (int)2, (int)534157);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_3831(var_56_bool, var_57_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_144(var_2_object, var_242_string)
{
	var_243_bool = 0;
	func_3487(var_243_bool);
	var_244_bool = var_243_bool == 0; //@nz
	if(var_244_bool != 0) {
		return 0;
	}
	var_245_bool = var_242_string == var_2_object;
	if(var_245_bool != 0) {
		return 0;
	}
	var_246_string = ""; var_247_bool = 0;
	var_242_string = var_246_string;
	var_249_bool = var_242_string == "";
	if(var_249_bool != 0) {
		var_247_bool = 0;
	} else {
		var_247_bool = 1;
	}
	func_3323(var_246_string, var_247_bool);
	var_2_object = var_242_string;
	return 0;
	
}


func_3479(var_124_int)
{
	var_124_int = 515544;
	return 0;
}


func_1176(var_0_object, var_502_int, var_503_object)
{
	var_505_object = Obj(); var_506_bool = 0; var_507_int = 0; var_508_bool = 0; var_509_object = Obj(); var_510_bool = 0; var_511_int = 0; var_512_bool = 0;
	var_0_object = var_503_object;
	var_513_bool = 0; var_514_object = Obj(); var_515_float = 0;
	var_503_object = var_514_object;
	func_3082(var_513_bool, var_514_object, (float)70.0);
	var_516_bool = var_513_bool == 0; //@nz
	if(var_516_bool != 0) {
		var_502_int = -2;
		return 8;
	}
	CreateDialog(var_509_object);
	var_517_int = 0;
	func_3481(var_517_int);
	@@var_509_object:SetNPCName(var_517_int);
	var_518_int = 0;
	func_3479(var_518_int);
	@@var_509_object:SetNPCDescription(var_518_int);
	var_519_string = "";
	func_3483(var_519_string);
	@@var_509_object:SetPhoto(var_519_string);
	var_520_string = "";
	func_3485(var_520_string);
	@@var_509_object:SetPhoto2(var_520_string);
	var_521_int = 0;
	func_3909(var_521_int);
	@@var_509_object:SetPlayerName(var_521_int);
	IsOverrideActive(var_510_bool);
	var_522_bool = var_510_bool;
	if(var_522_bool != 0) {
		var_502_int = -2;
		return 8;
	}
	DoDialog(var_509_object);
	var_523_bool = 0; var_524_object = Obj();
	func_3360(Obj());
	var_525_object = var_524_object;
	func_3169(var_523_bool, var_524_object);
	var_526_object = Obj(); var_527_object = Obj();
	var_503_object = var_526_object;
	var_509_object = var_527_object;
	TaskCall(9);
	func_1257(var_528_object, var_529_object, var_530_string, var_531_bool, var_526_object, var_527_object);
	TaskReturn();
	@@var_509_object:IsDialogEnd(var_512_bool);
	
Label_1239:
	var_565_bool = var_512_bool == 0; //@nz
	if(var_565_bool != 0) {
		sync();
		@@var_509_object:IsDialogEnd(var_512_bool);
		goto Label_1239;
	}
	var_503_object = Obj();
	func_3151();
	StopDialog(var_509_object);
	@@var_509_object:GetReturnValue((int)-1);
	var_511_int = var_502_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2967()
{
	var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0;
	WaitForAnimEnd();
	var_57_bool = 0;
	func_3077(var_57_bool);
	var_58_bool = var_57_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 12;
	}
	func_3462((int)0);
	var_59_int = var_51_int;
	var_52_int = 0;
	
Label_2981:
	var_72_bool = 0;
	var_72_bool = 0;
	var_74_bool = var_52_int < (int)5;
	if(var_74_bool != 0) {
		var_75_bool = 0;
		func_3077(var_75_bool);
		if(var_75_bool != 0) {
			var_72_bool = 1;
		}
	}
	if(var_72_bool != 0) {
		var_76_bool = var_51_int == 0; //@nz
		if(var_76_bool != 0) {
			Sleep((int)3, var_53_bool);
			var_78_bool = var_53_bool == 0; //@nz
			if(var_78_bool != 0) {
			} else {
		} else {
				irand(var_54_int, var_51_int);
				irand(var_55_int, (int)5);
				var_84_bool = var_55_int != (int)0;
				if(var_84_bool != 0) {
					var_54_int = 0;
				}
				var_86_string = ""; var_87_int = 0;
				var_54_int = var_87_int;
				func_3455(var_86_string, var_87_int);
				PlayAnimation("all", var_86_string);
				WaitForAnimEnd(var_56_bool);
				var_88_bool = var_56_bool == 0; //@nz
				if(var_88_bool == 0) goto Label_3022;
				goto Label_3033;
		}
		Label_3022:
			var_79_bool = 0;
			func_3036(var_79_bool);
			var_80_bool = var_79_bool == 0; //@nz
			if(var_80_bool != 0) {
				goto Label_3033;
			}
			ResetAAS();
			var_52_int = var_52_int + (int)1;
			goto Label_2981;

		}
	}
Label_3033:
	ResetAAS();
	return 12;
	
}


func_3481(var_123_int)
{
	var_123_int = 502869;
	return 0;
}


func_3227(var_147_bool, var_148_object)
{
	var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = ""; var_154_string = ""; var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_string = "";
	var_154_string = "c";
	var_155_int = 0;
	
Label_3230:
	if((int)1 != 0) {
		var_161_int = var_155_int + (int)1;
		var_162_int = var_154_string + var_161_int;
		@@var_148_object:HasProperty(var_162_int, var_156_bool);
		var_163_bool = var_156_bool == 0; //@nz
		if(var_163_bool != 0) {
		} else {
			var_155_int = var_155_int + (int)1;
			goto Label_3230;
		}
	}
	var_164_bool = var_155_int == 0; //@nz
	if(var_164_bool != 0) {
		var_147_bool = 0;
		return 10;
	}
	var_157_int = 0;
	var_166_bool = var_155_int > (int)1;
	if(var_166_bool != 0) {
		irand(var_157_int, var_155_int);
	}
	var_168_int = var_157_int + (int)1;
	var_169_int = var_154_string + var_168_int;
	@@var_148_object:GetProperty(var_169_int, var_158_string);
	var_170_bool = 0; var_171_string = "";
	var_158_string = var_171_string;
	func_3338(var_170_bool, var_171_string);
	var_170_bool = var_147_bool;
	return 10;
	
}


func_3740()
{
	var_150_object = Obj(); var_151_object = Obj();
	CreateDiaryEntry(var_151_object, (int)763, (int)2, (int)540030);
	var_155_bool = 0; var_156_object = Obj(); var_157_int = 0;
	var_151_object = var_156_object;
	func_3831(var_155_bool, var_156_object, (int)672);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3483(var_125_string)
{
	var_125_string = "ui/NPC_Mark.png";
	return 0;
}


func_3485(var_126_string)
{
	var_126_string = "ui/NPC_Mark_b.png";
	return 0;
}


func_671(var_0_object, var_1_object, var_2_object, var_3_string, var_390_object, var_391_object)
{
	var_0_object = var_391_object;
	var_1_object = var_390_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_397_string = "";
		func_724(var_391_object, "Neutral");
		@@@var_0_object:SetMessage((int)510917);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)510918, (int)-1, (int)12067);
		goto Label_694;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2a3";
	}
Label_694:
	var_409_bool = 0;
	func_3487(var_409_bool);
	if(var_409_bool != 0) {

	Label_698:
		lshWaitForAnimEnd();
		var_410_string = var_3_string;
		if(var_410_string != 0) {
		} else {
			var_411_string = "";
			var_411_string = var_2_object;
			func_3307(var_411_string);
			goto Label_698;
	}
		PlayAnimation("all", "idle");

	Label_713:
		WaitForAnimEnd();
		var_414_string = var_3_string;
		if(var_414_string != 0) {
			goto Label_723;
		}
		PlayAnimation("all", "idle");
		goto Label_713;
	}
	goto Label_723;
	
Label_723:
	return 0;
	
}


func_3487(var_118_bool)
{
	var_118_bool = 1;
	return 0;
}


func_3489(var_121_object)
{
	var_122_object = Obj(); var_123_string = ""; var_124_float = 0;
	func_3859(Obj());
	var_125_object = var_122_object;
	func_3876(var_122_object, "pt_map_uprava_admin", (float)2);
	var_145_object = Obj();
	func_3859(var_145_object);
	@@var_121_object:ShowMap(var_145_object);
	return 0;
}


func_2723(var_2_object, var_745_string)
{
	var_746_bool = 0;
	func_3487(var_746_bool);
	var_747_bool = var_746_bool == 0; //@nz
	if(var_747_bool != 0) {
		return 0;
	}
	var_748_bool = var_745_string == var_2_object;
	if(var_748_bool != 0) {
		return 0;
	}
	var_749_string = ""; var_750_bool = 0;
	var_745_string = var_749_string;
	var_752_bool = var_745_string == "";
	if(var_752_bool != 0) {
		var_750_bool = 0;
	} else {
		var_750_bool = 1;
	}
	func_3323(var_749_string, var_750_bool);
	var_2_object = var_745_string;
	return 0;
	
}


func_3753()
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateDiaryEntry(var_113_object, (int)675, (int)2, (int)534160);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_113_object = var_118_object;
	func_3831(var_117_bool, var_118_object, (int)672);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3505()
{
	func_3805();
	var_72_bool = 0; var_73_string = ""; var_74_string = "";
	func_3423(var_72_bool, "quest_d8_04", "completed");
	return 0;
}


func_3766()
{
	var_74_object = Obj(); var_75_object = Obj();
	CreateDiaryEntry(var_75_object, (int)673, (int)2, (int)534158);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_75_object = var_80_object;
	func_3831(var_79_bool, var_80_object, (int)672);
	return 2;
}
EMIT "Stack[-1] = 0";


func_954(var_2_object, var_452_string)
{
	var_453_bool = 0;
	func_3487(var_453_bool);
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
	func_3323(var_456_string, var_457_bool);
	var_2_object = var_452_string;
	return 0;
	
}


func_3515()
{
	SetVariable("ood10Mark1", (int)1);
	return 0;
}


func_3264(var_178_bool, var_179_object)
{
	var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = "";
	var_191_int = 0;
	func_3440(var_191_int);
	var_197_int = "d" + var_191_int;
	var_185_string = var_197_int + "m";
	var_186_int = 0;
	
Label_3273:
	if((int)1 != 0) {
		var_201_int = var_186_int + (int)1;
		var_202_int = var_185_string + var_201_int;
		@@var_179_object:HasProperty(var_202_int, var_187_bool);
		var_203_bool = var_187_bool == 0; //@nz
		if(var_203_bool != 0) {
		} else {
			var_186_int = var_186_int + (int)1;
			goto Label_3273;
		}
	}
	var_204_bool = var_186_int == 0; //@nz
	if(var_204_bool != 0) {
		var_178_bool = 0;
		return 10;
	}
	var_188_int = 0;
	var_206_bool = var_186_int > (int)1;
	if(var_206_bool != 0) {
		irand(var_188_int, var_186_int);
	}
	var_208_int = var_188_int + (int)1;
	var_209_int = var_185_string + var_208_int;
	@@var_179_object:GetProperty(var_209_int, var_189_string);
	var_210_bool = 0; var_211_string = "";
	var_189_string = var_211_string;
	func_3338(var_210_bool, var_211_string);
	var_210_bool = var_178_bool;
	return 10;
	
}


func_449(var_2_object, var_331_string)
{
	var_332_bool = 0;
	func_3487(var_332_bool);
	var_333_bool = var_332_bool == 0; //@nz
	if(var_333_bool != 0) {
		return 0;
	}
	var_334_bool = var_331_string == var_2_object;
	if(var_334_bool != 0) {
		return 0;
	}
	var_335_string = ""; var_336_bool = 0;
	var_331_string = var_335_string;
	var_338_bool = var_331_string == "";
	if(var_338_bool != 0) {
		var_336_bool = 0;
	} else {
		var_336_bool = 1;
	}
	func_3323(var_335_string, var_336_bool);
	var_2_object = var_331_string;
	return 0;
	
}


func_3521()
{
	SetVariable("d10MarkVisit", (int)1);
	return 0;
}


func_3779()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)170, (int)2, (int)515422);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_3831(var_77_bool, var_78_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3527()
{
	SetVariable("d10q03", (int)1);
	func_3727();
	func_3766();
	var_82_object = Obj(); var_83_string = "";
	func_3381(var_82_object, "quest_d10_03");
	return 0;
}


func_3792()
{
	var_95_object = Obj(); var_96_object = Obj();
	CreateDiaryEntry(var_96_object, (int)171, (int)2, (int)515423);
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0;
	var_96_object = var_101_object;
	func_3831(var_100_bool, var_101_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_724(var_2_object, var_397_string)
{
	var_398_bool = 0;
	func_3487(var_398_bool);
	var_399_bool = var_398_bool == 0; //@nz
	if(var_399_bool != 0) {
		return 0;
	}
	var_400_bool = var_397_string == var_2_object;
	if(var_400_bool != 0) {
		return 0;
	}
	var_401_string = ""; var_402_bool = 0;
	var_397_string = var_401_string;
	var_404_bool = var_397_string == "";
	if(var_404_bool != 0) {
		var_402_bool = 0;
	} else {
		var_402_bool = 1;
	}
	func_3323(var_401_string, var_402_bool);
	var_2_object = var_397_string;
	return 0;
	
}


func_3543()
{
	var_94_object = Obj(); var_95_object = Obj();
	SetVariable("d10q03", (int)3);
	func_3859(Obj());
	var_98_object = var_95_object;
	var_109_float = 0;
	func_3435(var_109_float);
	@@var_95_object:AddMark("d10q03MarkGotoBlock", "pt_map_uprava_admin", (int)0, (int)515301, var_109_float);
	func_3753();
	return 2;
}
EMIT "Stack[-1] = 0";


func_3036(var_79_bool)
{
	var_79_bool = 1;
	return 0;
}


func_3805()
{
	var_49_object = Obj(); var_50_object = Obj();
	CreateDiaryEntry(var_50_object, (int)653, (int)2, (int)533366);
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0;
	var_50_object = var_55_object;
	func_3831(var_54_bool, var_55_object, (int)649);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1758(var_0_object, var_1_object, var_2_object, var_3_string, var_593_object, var_594_object)
{
	var_0_object = var_594_object;
	var_1_object = var_593_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_600_bool = 0; var_601_object = Obj();
		var_601_object = var_1_object;
		func_3655(var_601_object);
		if(var_600_bool != 0) {
			var_606_object = Obj(); var_607_object = Obj();
			var_606_object = var_1_object;
			var_607_object = var_0_object;
			func_3515();
			var_610_object = Obj(); var_611_object = Obj();
			var_610_object = var_1_object;
			var_611_object = var_0_object;
			func_3521();
			var_614_string = "";
			func_1856(var_594_object, "Rage");
			@@@var_0_object:SetMessage((int)534127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536495, (int)38296, (int)38295);
			@@@var_0_object:AddReply((int)536508, (int)38310, (int)38309);
		} else {
				var_637_string = "";
				func_1856(var_594_object, "Neutral");
				@@@var_0_object:SetMessage((int)534129);
				@@@var_0_object:ClearReplies();
				var_639_bool = 0; var_640_object = Obj();
				var_640_object = var_1_object;
				func_3667(var_640_object);
				if(var_639_bool != 0) {
					@@@var_0_object:AddReply((int)534146, (int)38315, (int)35733);
				}
				@@@var_0_object:AddReply((int)534130, (int)-1, (int)35717);
				goto Label_1826;
		}
	}
Label_1826:
	var_629_bool = 0;
	func_3487(var_629_bool);
	if(var_629_bool != 0) {

	Label_1830:
		lshWaitForAnimEnd();
		var_630_string = var_3_string;
		if(var_630_string != 0) {
		} else {
			var_631_string = "";
			var_631_string = var_2_object;
			func_3307(var_631_string);
			goto Label_1830;
	}
		PlayAnimation("all", "idle");

	Label_1845:
		WaitForAnimEnd();
		var_634_string = var_3_string;
		if(var_634_string != 0) {
			goto Label_1855;
		}
		PlayAnimation("all", "idle");
		goto Label_1845;

	}
	goto Label_1855;
	
Label_1855:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x6e2";


func_3038()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3043(var_56_float, var_57_object)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	GetPosition(var_61_cvector);
	@@var_57_object:GetPosition(var_62_cvector);
	var_63_cvector = var_62_cvector - var_61_cvector;
	var_56_float = var_63_cvector | var_63_cvector;
	return 6;
}


func_2791(var_0_object)
{
	var_41_bool = 0;
	func_3077(var_41_bool);
	var_44_bool = var_41_bool == 0; //@nz
	if(var_44_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2800:
	func_2967();
	goto Label_2800;
}
EMIT "Return(); Pop(0)";


func_1257(var_0_object, var_1_object, var_2_object, var_3_string, var_526_object, var_527_object)
{
	var_0_object = var_527_object;
	var_1_object = var_526_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_533_string = "";
		func_1325(var_527_object, "Declaim");
		@@@var_0_object:SetMessage((int)533341);
		@@@var_0_object:ClearReplies();
		var_542_bool = 0; var_543_object = Obj();
		var_543_object = var_1_object;
		func_3643(var_543_object);
		if(var_542_bool != 0) {
			@@@var_0_object:AddReply((int)533342, (int)34847, (int)34846);
		}
		@@@var_0_object:AddReply((int)533345, (int)-1, (int)34849);
		@@@var_0_object:AddReply((int)536042, (int)-1, (int)37783);
		goto Label_1295;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4ed";
	}
Label_1295:
	var_557_bool = 0;
	func_3487(var_557_bool);
	if(var_557_bool != 0) {

	Label_1299:
		lshWaitForAnimEnd();
		var_558_string = var_3_string;
		if(var_558_string != 0) {
		} else {
			var_559_string = "";
			var_559_string = var_2_object;
			func_3307(var_559_string);
			goto Label_1299;
	}
		PlayAnimation("all", "idle");

	Label_1314:
		WaitForAnimEnd();
		var_562_string = var_3_string;
		if(var_562_string != 0) {
			goto Label_1324;
		}
		PlayAnimation("all", "idle");
		goto Label_1314;
	}
	goto Label_1324;
	
Label_1324:
	return 0;
	
}


func_3818(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj();
	GetDiaryRoot(var_67_object);
	var_68_bool = var_67_object == 0; //@nz
	if(var_68_bool != 0) {
		Trace("Can't retrieve diary root");
		var_65_object = 0;
		return 2;
	}
	var_67_object = var_65_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3307(var_268_string)
{
	var_269_bool = 0; var_270_float = 0; var_271_float = 0; var_272_bool = 0; var_273_float = 0; var_274_float = 0;
	lshHasAnimation(var_272_bool, var_268_string);
	var_275_bool = var_272_bool;
	if(var_275_bool != 0) {
		lshGetAnimTimes(var_268_string, var_273_float, var_274_float);
		lshPlayAnimation(var_273_float, var_274_float, (bool)0);
	} else {
		var_278_int = "Can't find lsh animation : " + var_268_string;
		Trace(var_278_int);
	}
	return 6;
	
}


func_2284(var_0_object, var_655_int, var_656_object)
{
	var_658_object = Obj(); var_659_bool = 0; var_660_int = 0; var_661_bool = 0; var_662_object = Obj(); var_663_bool = 0; var_664_int = 0; var_665_bool = 0;
	var_0_object = var_656_object;
	var_666_bool = 0; var_667_object = Obj(); var_668_float = 0;
	var_656_object = var_667_object;
	func_3082(var_666_bool, var_667_object, (float)70.0);
	var_669_bool = var_666_bool == 0; //@nz
	if(var_669_bool != 0) {
		var_655_int = -2;
		return 8;
	}
	CreateDialog(var_662_object);
	var_670_int = 0;
	func_3481(var_670_int);
	@@var_662_object:SetNPCName(var_670_int);
	var_671_int = 0;
	func_3479(var_671_int);
	@@var_662_object:SetNPCDescription(var_671_int);
	var_672_string = "";
	func_3483(var_672_string);
	@@var_662_object:SetPhoto(var_672_string);
	var_673_string = "";
	func_3485(var_673_string);
	@@var_662_object:SetPhoto2(var_673_string);
	var_674_int = 0;
	func_3909(var_674_int);
	@@var_662_object:SetPlayerName(var_674_int);
	IsOverrideActive(var_663_bool);
	var_675_bool = var_663_bool;
	if(var_675_bool != 0) {
		var_655_int = -2;
		return 8;
	}
	DoDialog(var_662_object);
	var_676_bool = 0; var_677_object = Obj();
	func_3360(Obj());
	var_678_object = var_677_object;
	func_3169(var_676_bool, var_677_object);
	var_679_object = Obj(); var_680_object = Obj();
	var_656_object = var_679_object;
	var_662_object = var_680_object;
	TaskCall(13);
	func_2365(var_681_object, var_682_object, var_683_string, var_684_bool, var_679_object, var_680_object);
	TaskReturn();
	@@var_662_object:IsDialogEnd(var_665_bool);
	
Label_2347:
	var_712_bool = var_665_bool == 0; //@nz
	if(var_712_bool != 0) {
		sync();
		@@var_662_object:IsDialogEnd(var_665_bool);
		goto Label_2347;
	}
	var_656_object = Obj();
	func_3151();
	StopDialog(var_662_object);
	@@var_662_object:GetReturnValue((int)-1);
	var_664_int = var_655_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3051(var_131_object, var_132_string, var_133_int)
{
	var_134_int = 0; var_135_int = 0;
	@@var_131_object:GetProperty(var_132_string, var_135_int);
	var_136_int = var_135_int + var_133_int;
	@@var_131_object:SetProperty(var_132_string, var_136_int);
	return 2;
}


func_3566()
{
	SetVariable("ood2Mark1", (int)1);
	return 0;
}


func_3058(var_49_bool, var_50_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0;
	GetPosition(var_54_cvector);
	var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
	return 6;
}


func_3572()
{
	func_3740();
	var_158_bool = 0; var_159_string = ""; var_160_string = "";
	func_3423(var_158_bool, "quest_d10_03", "fail");
	return 0;
}


func_2805(var_66_bool)
{
	var_67_object = Obj(); var_68_object = Obj();
	FindActor(var_68_object, "player");
	var_70_bool = var_68_object == 0; //@nz
	if(var_70_bool != 0) {
		var_66_bool = 0;
		return 2;
	}
	var_71_bool = 0; var_72_object = Obj();
	var_68_object = var_72_object;
	func_3068(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3831(var_56_bool, var_57_object, var_58_int)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0;
	func_3818(Obj());
	var_65_object = var_62_object;
	@@var_62_object:Find(var_58_int, var_63_object);
	var_70_bool = var_63_object == 0; //@nz
	if(var_70_bool != 0) {
		var_72_int = "Can't find diary parent with id: " + var_58_int;
		Trace(var_72_int);
		var_56_bool = 0;
		return 6;
	}
	@@var_63_object:AddChild(var_57_object);
	SendWorldWndMessage((int)7);
	@@var_57_object:GetCategory(var_64_int);
	SetDiarySection(var_64_int);
	var_56_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3323(var_246_string, var_247_bool)
{
	var_250_bool = 0; var_251_float = 0; var_252_float = 0; var_253_bool = 0; var_254_float = 0; var_255_float = 0;
	lshHasAnimation(var_253_bool, var_246_string);
	var_256_bool = var_253_bool;
	if(var_256_bool != 0) {
		lshGetAnimTimes(var_246_string, var_254_float, var_255_float);
		lshPlayAnimation(var_254_float, var_255_float, var_247_bool);
	} else {
		var_258_int = "Can't find lsh animation : " + var_246_string;
		Trace(var_258_int);
	}
	return 6;
	
}


func_3068(var_45_bool, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	@@var_46_object:GetPosition(var_48_cvector);
	var_49_bool = 0; var_50_cvector = CVector(0,0,0);
	var_48_cvector = var_50_cvector;
	func_3058(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
	return 2;
}


func_3582(var_121_object)
{
	var_123_int = 0; var_124_int = 0;
	irand(var_124_int, (int)15);
	var_126_object = Obj(); var_127_int = 0;
	var_121_object = var_126_object;
	var_127_int = var_124_int + (int)5;
	func_3404(var_126_object, var_127_int);
	return 2;
}


