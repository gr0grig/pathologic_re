// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Fear|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Love|W:Neutral|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Eva.png|W:ui/NPC_Eva_b.png|W:oob1Eva1|W:oob2Eva1|W:oob9Eva1|W:b9q01|W:quest_b9_01|W:place_mdoberman|W:init_factory|W:oob1Eva2|W:b1q01BakWillBeAt18|W:pt_map_eva|A:AddMark|W:playsound|W:giveitem|W:rifle ammo30 is given|W:rifle_ammo|W:mapmark|W:b9q01DankoAmmo|W:b1q01GrifToldAboutDanko|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:mt_eva
// @GLOBALS: 0:object:
// @RUN_OP: 0x671
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1ff vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x394 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4a5 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x647 vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0x6ba vars=int
// @EVENT_6: op=0x6e0 vars=
// @EVENT_5: op=0x6ef vars=
// @EVENT_45: op=0x6fc vars=bool
// @EVENT_0: op=0x708 vars=object
// @PE: 0x51,0x90,0xa6,0x173,0x1e9,0x1ff,0x344,0x37e,0x394,0x43d,0x48f,0x4a5,0x5f7,0x631,0x647,0x671,0x6ba,0x6e0,0x6fc,0x8d9,0x915,0x964,0x98c,0x992,0x998,0x99e,0x9b1,0x9b8,0x9ce,0x9d4,0x9df,0x9e6,0x9ec,0x9f8,0xa04,0xa10,0xa1c,0xa28,0xa32,0xa3c,0xa48,0xa54,0xa69

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2242();
		var_31_bool = var_27_cvector == (int)20612;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2450();
		}
		var_37_bool = var_26_bool == (int)19387;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_144(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)518278);
			@@@var_0_object:ClearReplies();
			var_56_bool = 0; var_57_object = Obj();
			var_57_object = var_1_object;
			func_2632(var_57_object);
			if(var_56_bool != 0) {
				@@@var_0_object:AddReply((int)519444, (int)20613, (int)20612);
			}
			@@@var_0_object:AddReply((int)518279, (int)-1, (int)19388);
			return 0;
		}
		var_71_bool = var_26_bool == (int)20613;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_144(var_27_cvector, "Love");
			@@@var_0_object:SetMessage((int)519445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519446, (int)20615, (int)20614);
			@@@var_0_object:AddReply((int)519450, (int)20620, (int)20618);
			return 0;
		}
		var_81_bool = var_26_bool == (int)20615;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_144(var_27_cvector, "Love");
			@@@var_0_object:SetMessage((int)519447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519451, (int)20620, (int)20619);
			@@@var_0_object:AddReply((int)519453, (int)20620, (int)20622);
			return 0;
		}
		var_91_bool = var_26_bool == (int)20620;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_144(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519448, (int)-1, (int)20616);
			@@@var_0_object:AddReply((int)519449, (int)-1, (int)20617);
			return 0;
		}
		var_3_string = true;
		var_100_bool = 0;
		func_2442(var_100_bool);
		if(var_100_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2242();
		var_31_bool = var_27_cvector == (int)21396;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2444();
		}
		var_37_bool = var_27_cvector == (int)21403;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_object;
			func_2488();
		}
		var_43_bool = var_27_cvector == (int)21405;
		if(var_43_bool != 0) {
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_2527(var_45_object);
		}
		var_85_bool = var_27_cvector == (int)26115;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_2494();
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_2534();
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_2481(var_109_object);
		}
		var_114_bool = var_27_cvector == (int)21406;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_2494();
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_2534();
		}
		var_120_bool = var_26_bool == (int)21395;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_489(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)520203);
			@@@var_0_object:ClearReplies();
			var_139_bool = 0; var_140_object = Obj();
			var_140_object = var_1_object;
			func_2620(var_140_object);
			if(var_139_bool != 0) {
				@@@var_0_object:AddReply((int)520204, (int)21397, (int)21396);
			}
			var_150_bool = 0;
			var_150_bool = 1;
			var_151_bool = 0;
			var_151_bool = 0;
			var_152_bool = 0;
			var_152_bool = 0;
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_2576(var_154_object);
			if(var_153_bool != 0) {
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_2610(var_159_bool, var_160_object);
				if(var_159_bool != 0) {
					var_152_bool = 1;
				}
			}
			if(var_152_bool != 0) {
				var_174_bool = 0; var_175_object = Obj();
				var_175_object = var_1_object;
				func_2588(var_175_object);
				if(var_174_bool != 0) {
					var_151_bool = 1;
				}
			}
			if(var_151_bool != 1) {
				var_180_bool = 0;
				var_180_bool = 0;
				var_181_bool = 0;
				var_181_bool = 0;
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_object;
				func_2600(var_182_bool, var_183_object);
				if(var_182_bool != 0) {
					var_193_bool = 0; var_194_object = Obj();
					var_194_object = var_1_object;
					func_2576(var_194_object);
					if(var_193_bool != 0) {
						var_181_bool = 1;
					}
				}
				if(var_181_bool != 0) {
					var_195_bool = 0; var_196_object = Obj();
					var_196_object = var_1_object;
					func_2588(var_196_object);
					if(var_195_bool != 0) {
						var_180_bool = 1;
					}
				}
				if(var_180_bool != 1) {
					var_150_bool = 0;
				}
			}
			if(var_150_bool != 0) {
				@@@var_0_object:AddReply((int)520211, (int)21404, (int)21403);
			}
			@@@var_0_object:AddReply((int)520215, (int)-1, (int)21407);
			return 0;
		}
		var_204_bool = var_26_bool == (int)21404;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_489(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)520212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520213, (int)26114, (int)21405);
			@@@var_0_object:AddReply((int)520214, (int)-1, (int)21406);
			return 0;
		}
		var_214_bool = var_26_bool == (int)26114;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_489(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)524804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524805, (int)-1, (int)26115);
			return 0;
		}
		var_221_bool = var_26_bool == (int)21397;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_489(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)520205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520206, (int)21399, (int)21398);
			@@@var_0_object:AddReply((int)520210, (int)-1, (int)21402);
			return 0;
		}
		var_231_bool = var_26_bool == (int)21399;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_489(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)520207);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520208, (int)-1, (int)21400);
			@@@var_0_object:AddReply((int)520209, (int)-1, (int)21401);
			return 0;
		}
		var_3_string = true;
		var_240_bool = 0;
		func_2442(var_240_bool);
		if(var_240_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x200";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2242();
		var_31_bool = var_26_bool == (int)21927;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_894(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)520716);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520717, (int)21929, (int)21928);
			@@@var_0_object:AddReply((int)520721, (int)21933, (int)21932);
			return 0;
		}
		var_57_bool = var_26_bool == (int)21933;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_894(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)520722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520723, (int)-1, (int)21934);
			@@@var_0_object:AddReply((int)520724, (int)-1, (int)21935);
			return 0;
		}
		var_67_bool = var_26_bool == (int)21929;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_894(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)520718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520719, (int)-1, (int)21930);
			@@@var_0_object:AddReply((int)520720, (int)-1, (int)21931);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_2442(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x395";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2242();
		var_31_bool = var_27_cvector == (int)23411;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2462();
		}
		var_69_bool = var_27_cvector == (int)23412;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_2462();
		}
		var_73_bool = var_27_cvector == (int)22716;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_2462();
		}
		var_77_bool = var_27_cvector == (int)22776;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_2456();
		}
		var_83_bool = var_27_cvector == (int)22778;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_2510();
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_2516(var_89_object);
		}
		var_113_bool = var_26_bool == (int)22713;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_1167(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521552);
			@@@var_0_object:ClearReplies();
			var_132_bool = 0; var_133_object = Obj();
			var_133_object = var_1_object;
			func_2540(var_133_object);
			if(var_132_bool != 0) {
				@@@var_0_object:AddReply((int)521553, (int)22715, (int)22714);
			}
			var_143_bool = 0;
			var_143_bool = 0;
			var_144_bool = 0; var_145_object = Obj();
			var_145_object = var_1_object;
			func_2552(var_145_object);
			if(var_144_bool != 0) {
				var_150_bool = 0; var_151_object = Obj();
				var_151_object = var_1_object;
				func_2564(var_151_object);
				if(var_150_bool != 0) {
					var_143_bool = 1;
				}
			}
			if(var_143_bool != 0) {
				@@@var_0_object:AddReply((int)521609, (int)22777, (int)22776);
			}
			@@@var_0_object:AddReply((int)521556, (int)-1, (int)22717);
			return 0;
		}
		var_163_bool = var_26_bool == (int)22777;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_1167(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)521610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522261, (int)23414, (int)23413);
			return 0;
		}
		var_170_bool = var_26_bool == (int)23414;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_1167(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)522262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522263, (int)23418, (int)23415);
			@@@var_0_object:AddReply((int)522264, (int)23417, (int)23416);
			return 0;
		}
		var_180_bool = var_26_bool == (int)23417;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_1167(var_27_cvector, "Love");
			@@@var_0_object:SetMessage((int)522265);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522269, (int)23418, (int)23421);
			@@@var_0_object:AddReply((int)522271, (int)-1, (int)23423);
			return 0;
		}
		var_190_bool = var_26_bool == (int)23418;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_1167(var_27_cvector, "Love");
			@@@var_0_object:SetMessage((int)522266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522267, (int)23420, (int)23419);
			return 0;
		}
		var_197_bool = var_26_bool == (int)23420;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_1167(var_27_cvector, "Love");
			@@@var_0_object:SetMessage((int)522268);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521611, (int)-1, (int)22778);
			return 0;
		}
		var_204_bool = var_26_bool == (int)22715;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_1167(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)521554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522257, (int)23410, (int)23409);
			@@@var_0_object:AddReply((int)521555, (int)-1, (int)22716);
			return 0;
		}
		var_214_bool = var_26_bool == (int)23410;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_1167(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)522258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522259, (int)-1, (int)23411);
			@@@var_0_object:AddReply((int)522260, (int)-1, (int)23412);
			return 0;
		}
		var_3_string = true;
		var_223_bool = 0;
		func_2442(var_223_bool);
		if(var_223_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4a6";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_2242();
		var_31_bool = var_26_int == (int)42560;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1585(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_2442(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x648";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_1718();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_1966(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_1687(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_1667(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_2249(Obj());
				var_72_object = var_71_object;
				func_2116(var_70_bool, var_71_object);
			}
		} else {
			func_1682(var_26_int);
			func_1709();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1900();
	func_1718();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_1718();
	var_27_string = "";
	func_2196("Neutral");
	func_1709();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_1709();
	} else {
		var_33_string = "";
		func_2196("Neutral");
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
		func_1900();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_1957(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_2774(var_44_object);
		var_593_string = "";
		func_2196("Neutral");
		func_1718();
		func_1709();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1653(var_25_cvector);
	return 0;
}


func_0(var_0_object, var_395_int, var_396_object)
{
	var_398_object = Obj(); var_399_bool = 0; var_400_int = 0; var_401_bool = 0; var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0;
	var_0_object = var_396_object;
	var_406_bool = 0; var_407_object = Obj(); var_408_float = 0;
	var_396_object = var_407_object;
	func_1971(var_406_bool, var_407_object, (float)70.0);
	var_409_bool = var_406_bool == 0; //@nz
	if(var_409_bool != 0) {
		var_395_int = -2;
		return 8;
	}
	CreateDialog(var_402_object);
	var_410_int = 0;
	func_2436(var_410_int);
	@@var_402_object:SetNPCName(var_410_int);
	var_411_int = 0;
	func_2434(var_411_int);
	@@var_402_object:SetNPCDescription(var_411_int);
	var_412_string = "";
	func_2438(var_412_string);
	@@var_402_object:SetPhoto(var_412_string);
	var_413_string = "";
	func_2440(var_413_string);
	@@var_402_object:SetPhoto2(var_413_string);
	var_414_int = 0;
	func_2757(var_414_int);
	@@var_402_object:SetPlayerName(var_414_int);
	IsOverrideActive(var_403_bool);
	var_415_bool = var_403_bool;
	if(var_415_bool != 0) {
		var_395_int = -2;
		return 8;
	}
	DoDialog(var_402_object);
	var_416_bool = 0; var_417_object = Obj();
	func_2249(Obj());
	var_418_object = var_417_object;
	func_2058(var_416_bool, var_417_object);
	var_419_object = Obj(); var_420_object = Obj();
	var_396_object = var_419_object;
	var_402_object = var_420_object;
	TaskCall(1);
	func_81(var_421_object, var_422_object, var_423_string, var_424_bool, var_419_object, var_420_object);
	TaskReturn();
	@@var_402_object:IsDialogEnd(var_405_bool);
	
Label_63:
	var_455_bool = var_405_bool == 0; //@nz
	if(var_455_bool != 0) {
		sync();
		@@var_402_object:IsDialogEnd(var_405_bool);
		goto Label_63;
	}
	var_396_object = Obj();
	func_2040();
	StopDialog(var_402_object);
	@@var_402_object:GetReturnValue((int)-1);
	var_404_int = var_395_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2564(var_515_bool)
{
	var_517_int = 0; var_518_string = "";
	func_2276(var_517_int, "b9q01DankoAmmo");
	var_520_bool = var_517_int != (int)0;
	if(var_520_bool != 0) {
		var_515_bool = 1;
		return 0;
	}
	var_515_bool = 0;
	return 0;
}


func_2312(var_91_object, var_92_string, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj();
	CreateInvItem(var_95_object);
	@@var_95_object:SetItemName(var_92_string);
	var_96_object = Obj(); var_97_object = Obj(); var_98_int = 0;
	var_91_object = var_96_object;
	var_95_object = var_97_object;
	var_93_int = var_98_int;
	func_2293(var_96_object, var_97_object, var_98_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2058(var_121_bool, var_122_object)
{
	var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0;
	GetVariable("voice_common", var_128_int);
	var_131_int = var_128_int;
	if(var_131_int != 0) {
		var_132_bool = 0; var_133_object = Obj();
		var_122_object = var_133_object;
		func_2116(var_132_bool, var_133_object);
		var_162_bool = var_132_bool == 0; //@nz
		if(var_162_bool != 0) {
			var_163_bool = 0; var_164_object = Obj();
			var_122_object = var_164_object;
			func_2153(var_163_bool, var_164_object);
			var_198_bool = var_163_bool == 0; //@nz
			if(var_198_bool != 0) {
				var_121_bool = 0;
				return 4;
			}
		}
		irand(var_129_int, (int)2);
		var_200_int = var_129_int;
		if(var_200_int != 0) {
			var_203_int = var_128_int + (int)1;
			var_205_int = var_203_int % (int)3;
			SetVariable("voice_common", var_205_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_208_bool = 0; var_209_object = Obj();
		var_122_object = var_209_object;
		func_2153(var_208_bool, var_209_object);
		var_210_bool = var_208_bool == 0; //@nz
		if(var_210_bool != 0) {
			var_211_bool = 0; var_212_object = Obj();
			var_122_object = var_212_object;
			func_2116(var_211_bool, var_212_object);
			var_213_bool = var_211_bool == 0; //@nz
			if(var_213_bool != 0) {
				var_121_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2114;
	
Label_2114:
	var_121_bool = 1;
	return 4;
	
}


func_2576(var_333_bool)
{
	var_335_int = 0; var_336_string = "";
	func_2276(var_335_int, "oob1Eva2");
	var_338_bool = var_335_int == (int)0;
	if(var_338_bool != 0) {
		var_333_bool = 1;
		return 0;
	}
	var_333_bool = 0;
	return 0;
}


func_2325(var_46_bool, var_47_object, var_48_float)
{
	var_49_bool = var_47_object == 0; //@nz
	if(var_49_bool != 0) {
		var_46_bool = 0;
		return 0;
	}
	var_51_bool = var_48_float > (int)0;
	if(var_51_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_82_bool = var_48_float < (int)0;
		if(var_82_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2346;
		}
		var_46_bool = 0;
		return 0;
	}
Label_2346:
	var_53_float = 0;
	var_48_float = var_53_float;
	func_2360(var_53_float);
	var_57_bool = 0; var_58_object = Obj(); var_59_string = ""; var_60_float = 0; var_61_float = 0; var_62_float = 0;
	var_47_object = var_58_object;
	var_48_float = var_60_float;
	func_1925(var_57_bool, var_58_object, "reputation", var_60_float, (float)0, (float)1);
	var_46_bool = 1;
	return 0;
	
}


func_2040()
{
	var_267_bool = 0; var_268_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_270_bool = 0;
	func_2442(var_270_bool);
	if(var_270_bool != 0) {
	} else {
		HasAnimationTrack(var_268_bool, "head");
		var_272_bool = var_268_bool;
		if(var_272_bool == 0) goto Label_2057;
		UnlookAsync("head");
	}
Label_2057:
	return 2;
	
}


func_2588(var_354_bool)
{
	var_356_int = 0; var_357_string = "";
	func_2276(var_356_int, "b1q01GrifToldAboutDanko");
	var_359_bool = var_356_int != (int)0;
	if(var_359_bool != 0) {
		var_354_bool = 1;
		return 0;
	}
	var_354_bool = 0;
	return 0;
}


func_290(var_0_object, var_279_int, var_280_object)
{
	var_282_object = Obj(); var_283_bool = 0; var_284_int = 0; var_285_bool = 0; var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0;
	var_0_object = var_280_object;
	var_290_bool = 0; var_291_object = Obj(); var_292_float = 0;
	var_280_object = var_291_object;
	func_1971(var_290_bool, var_291_object, (float)70.0);
	var_293_bool = var_290_bool == 0; //@nz
	if(var_293_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	CreateDialog(var_286_object);
	var_294_int = 0;
	func_2436(var_294_int);
	@@var_286_object:SetNPCName(var_294_int);
	var_295_int = 0;
	func_2434(var_295_int);
	@@var_286_object:SetNPCDescription(var_295_int);
	var_296_string = "";
	func_2438(var_296_string);
	@@var_286_object:SetPhoto(var_296_string);
	var_297_string = "";
	func_2440(var_297_string);
	@@var_286_object:SetPhoto2(var_297_string);
	var_298_int = 0;
	func_2757(var_298_int);
	@@var_286_object:SetPlayerName(var_298_int);
	IsOverrideActive(var_287_bool);
	var_299_bool = var_287_bool;
	if(var_299_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	DoDialog(var_286_object);
	var_300_bool = 0; var_301_object = Obj();
	func_2249(Obj());
	var_302_object = var_301_object;
	func_2058(var_300_bool, var_301_object);
	var_303_object = Obj(); var_304_object = Obj();
	var_280_object = var_303_object;
	var_286_object = var_304_object;
	TaskCall(3);
	func_371(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object);
	TaskReturn();
	@@var_286_object:IsDialogEnd(var_289_bool);
	
Label_353:
	var_391_bool = var_289_bool == 0; //@nz
	if(var_391_bool != 0) {
		sync();
		@@var_286_object:IsDialogEnd(var_289_bool);
		goto Label_353;
	}
	var_280_object = Obj();
	func_2040();
	StopDialog(var_286_object);
	@@var_286_object:GetReturnValue((int)-1);
	var_288_int = var_279_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1829()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0;
	WaitForAnimEnd();
	var_42_bool = 0;
	func_1966(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 12;
	}
	func_2417((int)0);
	var_44_int = var_36_int;
	var_37_int = 0;
	
Label_1843:
	var_57_bool = 0;
	var_57_bool = 0;
	var_59_bool = var_37_int < (int)5;
	if(var_59_bool != 0) {
		var_60_bool = 0;
		func_1966(var_60_bool);
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
				func_2410(var_71_string, var_72_int);
				PlayAnimation("all", var_71_string);
				WaitForAnimEnd(var_41_bool);
				var_73_bool = var_41_bool == 0; //@nz
				if(var_73_bool == 0) goto Label_1884;
				goto Label_1895;
		}
		Label_1884:
			var_64_bool = 0;
			func_1898(var_64_bool);
			var_65_bool = var_64_bool == 0; //@nz
			if(var_65_bool != 0) {
				goto Label_1895;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_1843;

		}
	}
Label_1895:
	ResetAAS();
	return 12;
	
}


func_2600(var_362_bool, var_363_object)
{
	var_364_bool = 0; var_365_object = Obj();
	var_363_object = var_365_object;
	func_2644(var_365_object);
	if(var_364_bool != 0) {
		var_362_bool = 1;
		return 0;
	}
	var_362_bool = 0;
	return 0;
}


func_1585(var_2_object, var_568_string)
{
	var_569_bool = 0;
	func_2442(var_569_bool);
	var_570_bool = var_569_bool == 0; //@nz
	if(var_570_bool != 0) {
		return 0;
	}
	var_571_bool = var_568_string == var_2_object;
	if(var_571_bool != 0) {
		return 0;
	}
	var_572_string = ""; var_573_bool = 0;
	var_568_string = var_572_string;
	var_575_bool = var_568_string == "";
	if(var_575_bool != 0) {
		var_573_bool = 0;
	} else {
		var_573_bool = 1;
	}
	func_2212(var_572_string, var_573_bool);
	var_2_object = var_568_string;
	return 0;
	
}


func_2610(var_339_bool, var_340_object)
{
	var_341_bool = 0; var_342_object = Obj();
	var_340_object = var_342_object;
	func_2665(var_342_object);
	if(var_341_bool != 0) {
		var_339_bool = 1;
		return 0;
	}
	var_339_bool = 0;
	return 0;
}


func_2360(var_53_float)
{
	var_54_object = Obj(); var_55_object = Obj();
	CreateFloatVector(var_55_object);
	@@var_55_object:add(var_53_float);
	SendWorldWndMessage((int)16, var_55_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2620(var_319_bool)
{
	var_321_int = 0; var_322_string = "";
	func_2276(var_321_int, "oob1Eva1");
	var_326_bool = var_321_int == (int)0;
	if(var_326_bool != 0) {
		var_319_bool = 1;
		return 0;
	}
	var_319_bool = 0;
	return 0;
}


func_1085(var_0_object, var_1_object, var_2_object, var_3_string, var_483_object, var_484_object)
{
	var_0_object = var_484_object;
	var_1_object = var_483_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_490_string = "";
		func_1167(var_484_object, "Neutral");
		@@@var_0_object:SetMessage((int)521552);
		@@@var_0_object:ClearReplies();
		var_499_bool = 0; var_500_object = Obj();
		var_500_object = var_1_object;
		func_2540(var_500_object);
		if(var_499_bool != 0) {
			@@@var_0_object:AddReply((int)521553, (int)22715, (int)22714);
		}
		var_508_bool = 0;
		var_508_bool = 0;
		var_509_bool = 0; var_510_object = Obj();
		var_510_object = var_1_object;
		func_2552(var_510_object);
		if(var_509_bool != 0) {
			var_515_bool = 0; var_516_object = Obj();
			var_516_object = var_1_object;
			func_2564(var_516_object);
			if(var_515_bool != 0) {
				var_508_bool = 1;
			}
		}
		if(var_508_bool != 0) {
			@@@var_0_object:AddReply((int)521609, (int)22777, (int)22776);
		}
		@@@var_0_object:AddReply((int)521556, (int)-1, (int)22717);
		goto Label_1137;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x441";
	}
Label_1137:
	var_527_bool = 0;
	func_2442(var_527_bool);
	if(var_527_bool != 0) {

	Label_1141:
		lshWaitForAnimEnd();
		var_528_string = var_3_string;
		if(var_528_string != 0) {
		} else {
			var_529_string = "";
			var_529_string = var_2_object;
			func_2196(var_529_string);
			goto Label_1141;
	}
		PlayAnimation("all", "idle");

	Label_1156:
		WaitForAnimEnd();
		var_532_string = var_3_string;
		if(var_532_string != 0) {
			goto Label_1166;
		}
		PlayAnimation("all", "idle");
		goto Label_1156;
	}
	goto Label_1166;
	
Label_1166:
	return 0;
	
}


func_2370(var_59_bool, var_60_string, var_61_string)
{
	var_62_object = Obj(); var_63_object = Obj();
	FindActor(var_63_object, var_60_string);
	var_64_bool = var_63_object == 0; //@ne
	if(var_64_bool != 0) {
		var_59_bool = 0;
		return 2;
	}
	Trigger(var_63_object, var_61_string);
	var_59_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2116(var_132_bool, var_133_object)
{
	var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = ""; var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = "";
	var_139_string = "c";
	var_140_int = 0;
	
Label_2119:
	if((int)1 != 0) {
		var_146_int = var_140_int + (int)1;
		var_147_int = var_139_string + var_146_int;
		@@var_133_object:HasProperty(var_147_int, var_141_bool);
		var_148_bool = var_141_bool == 0; //@nz
		if(var_148_bool != 0) {
		} else {
			var_140_int = var_140_int + (int)1;
			goto Label_2119;
		}
	}
	var_149_bool = var_140_int == 0; //@nz
	if(var_149_bool != 0) {
		var_132_bool = 0;
		return 10;
	}
	var_142_int = 0;
	var_151_bool = var_140_int > (int)1;
	if(var_151_bool != 0) {
		irand(var_142_int, var_140_int);
	}
	var_153_int = var_142_int + (int)1;
	var_154_int = var_139_string + var_153_int;
	@@var_133_object:GetProperty(var_154_int, var_143_string);
	var_155_bool = 0; var_156_string = "";
	var_143_string = var_156_string;
	func_2227(var_155_bool, var_156_string);
	var_155_bool = var_132_bool;
	return 10;
	
}


func_836(var_0_object, var_1_object, var_2_object, var_3_string, var_216_object, var_217_object)
{
	var_0_object = var_217_object;
	var_1_object = var_216_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_223_string = "";
		func_894(var_217_object, "Fear");
		@@@var_0_object:SetMessage((int)520716);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520717, (int)21929, (int)21928);
		@@@var_0_object:AddReply((int)520721, (int)21933, (int)21932);
		goto Label_864;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x348";
	}
Label_864:
	var_247_bool = 0;
	func_2442(var_247_bool);
	if(var_247_bool != 0) {

	Label_868:
		lshWaitForAnimEnd();
		var_248_string = var_3_string;
		if(var_248_string != 0) {
		} else {
			var_249_string = "";
			var_249_string = var_2_object;
			func_2196(var_249_string);
			goto Label_868;
	}
		PlayAnimation("all", "idle");

	Label_883:
		WaitForAnimEnd();
		var_262_string = var_3_string;
		if(var_262_string != 0) {
			goto Label_893;
		}
		PlayAnimation("all", "idle");
		goto Label_883;
	}
	goto Label_893;
	
Label_893:
	return 0;
	
}


func_2632(var_435_bool)
{
	var_437_int = 0; var_438_string = "";
	func_2276(var_437_int, "oob2Eva1");
	var_440_bool = var_437_int == (int)0;
	if(var_440_bool != 0) {
		var_435_bool = 1;
		return 0;
	}
	var_435_bool = 0;
	return 0;
}


func_2382(var_101_float)
{
	var_102_float = 0; var_103_float = 0;
	GetGameTime(var_103_float);
	var_103_float = var_101_float;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_419_object, var_420_object)
{
	var_0_object = var_420_object;
	var_1_object = var_419_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_426_string = "";
		func_144(var_420_object, "Fear");
		@@@var_0_object:SetMessage((int)518278);
		@@@var_0_object:ClearReplies();
		var_435_bool = 0; var_436_object = Obj();
		var_436_object = var_1_object;
		func_2632(var_436_object);
		if(var_435_bool != 0) {
			@@@var_0_object:AddReply((int)519444, (int)20613, (int)20612);
		}
		@@@var_0_object:AddReply((int)518279, (int)-1, (int)19388);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_447_bool = 0;
	func_2442(var_447_bool);
	if(var_447_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_448_string = var_3_string;
		if(var_448_string != 0) {
		} else {
			var_449_string = "";
			var_449_string = var_2_object;
			func_2196(var_449_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_452_string = var_3_string;
		if(var_452_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_2387(var_176_int)
{
	var_177_float = 0; var_178_float = 0;
	GetGameTime(var_178_float);
	var_180_int = 0;
	var_180_int = var_178_float / (int)24;
	var_176_int = (int)1 + var_180_int;
	return 2;
}


func_2644(var_364_bool)
{
	var_366_bool = 0;
	var_366_bool = 0;
	var_367_int = 0;
	func_2396(var_367_int);
	var_369_bool = var_367_int >= (int)12;
	if(var_369_bool != 0) {
		var_370_int = 0;
		func_2396(var_370_int);
		var_372_bool = var_370_int < (int)18;
		if(var_372_bool != 0) {
			var_366_bool = 1;
		}
	}
	if(var_366_bool != 0) {
		var_364_bool = 1;
		return 0;
	}
	var_364_bool = 0;
	return 0;
}


func_2396(var_344_int)
{
	var_345_float = 0; var_346_float = 0;
	GetGameTime(var_346_float);
	var_347_int = 0;
	var_346_float = var_347_int;
	var_344_int = var_347_int % (int)24;
	return 2;
}


func_2404(var_276_bool, var_277_int)
{
	var_278_int = 0;
	func_2387(var_278_int);
	var_276_bool = var_278_int == var_277_int;
	return 0;
}


func_2153(var_163_bool, var_164_object)
{
	var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = "";
	var_176_int = 0;
	func_2387(var_176_int);
	var_182_int = "d" + var_176_int;
	var_170_string = var_182_int + "m";
	var_171_int = 0;
	
Label_2162:
	if((int)1 != 0) {
		var_186_int = var_171_int + (int)1;
		var_187_int = var_170_string + var_186_int;
		@@var_164_object:HasProperty(var_187_int, var_172_bool);
		var_188_bool = var_172_bool == 0; //@nz
		if(var_188_bool != 0) {
		} else {
			var_171_int = var_171_int + (int)1;
			goto Label_2162;
		}
	}
	var_189_bool = var_171_int == 0; //@nz
	if(var_189_bool != 0) {
		var_163_bool = 0;
		return 10;
	}
	var_173_int = 0;
	var_191_bool = var_171_int > (int)1;
	if(var_191_bool != 0) {
		irand(var_173_int, var_171_int);
	}
	var_193_int = var_173_int + (int)1;
	var_194_int = var_170_string + var_193_int;
	@@var_164_object:GetProperty(var_194_int, var_174_string);
	var_195_bool = 0; var_196_string = "";
	var_174_string = var_196_string;
	func_2227(var_195_bool, var_196_string);
	var_195_bool = var_163_bool;
	return 10;
	
}


func_2665(var_341_bool)
{
	var_343_bool = 0;
	var_343_bool = 0;
	var_344_int = 0;
	func_2396(var_344_int);
	var_350_bool = var_344_int >= (int)0;
	if(var_350_bool != 0) {
		var_351_int = 0;
		func_2396(var_351_int);
		var_353_bool = var_351_int < (int)12;
		if(var_353_bool != 0) {
			var_343_bool = 1;
		}
	}
	if(var_343_bool != 0) {
		var_341_bool = 1;
		return 0;
	}
	var_341_bool = 0;
	return 0;
}


func_2410(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = "";
	var_54_int = var_51_int;
	if(var_54_int != 0) {
		"idle" = "idle" + var_51_int;
	}
	var_53_string = var_50_string;
	return 2;
}


func_1898(var_64_bool)
{
	var_64_bool = 1;
	return 0;
}


func_1900()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1905(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_2417(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0;
	var_47_int = 0;
	
Label_2419:
	var_50_string = ""; var_51_int = 0;
	var_47_int = var_51_int;
	func_2410(var_50_string, var_51_int);
	HasAnimation(var_48_bool, "all", var_50_string);
	var_55_bool = var_48_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
		var_47_int = var_47_int + (int)1;
		goto Label_2419;
	}
	var_47_int = var_44_int;
	return 4;
	
}


func_371(var_0_object, var_1_object, var_2_object, var_3_string, var_303_object, var_304_object)
{
	var_0_object = var_304_object;
	var_1_object = var_303_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_310_string = "";
		func_489(var_304_object, "Fear");
		@@@var_0_object:SetMessage((int)520203);
		@@@var_0_object:ClearReplies();
		var_319_bool = 0; var_320_object = Obj();
		var_320_object = var_1_object;
		func_2620(var_320_object);
		if(var_319_bool != 0) {
			@@@var_0_object:AddReply((int)520204, (int)21397, (int)21396);
		}
		var_330_bool = 0;
		var_330_bool = 1;
		var_331_bool = 0;
		var_331_bool = 0;
		var_332_bool = 0;
		var_332_bool = 0;
		var_333_bool = 0; var_334_object = Obj();
		var_334_object = var_1_object;
		func_2576(var_334_object);
		if(var_333_bool != 0) {
			var_339_bool = 0; var_340_object = Obj();
			var_340_object = var_1_object;
			func_2610(var_339_bool, var_340_object);
			if(var_339_bool != 0) {
				var_332_bool = 1;
			}
		}
		if(var_332_bool != 0) {
			var_354_bool = 0; var_355_object = Obj();
			var_355_object = var_1_object;
			func_2588(var_355_object);
			if(var_354_bool != 0) {
				var_331_bool = 1;
			}
		}
		if(var_331_bool != 1) {
			var_360_bool = 0;
			var_360_bool = 0;
			var_361_bool = 0;
			var_361_bool = 0;
			var_362_bool = 0; var_363_object = Obj();
			var_363_object = var_1_object;
			func_2600(var_362_bool, var_363_object);
			if(var_362_bool != 0) {
				var_373_bool = 0; var_374_object = Obj();
				var_374_object = var_1_object;
				func_2576(var_374_object);
				if(var_373_bool != 0) {
					var_361_bool = 1;
				}
			}
			if(var_361_bool != 0) {
				var_375_bool = 0; var_376_object = Obj();
				var_376_object = var_1_object;
				func_2588(var_376_object);
				if(var_375_bool != 0) {
					var_360_bool = 1;
				}
			}
			if(var_360_bool != 1) {
				var_330_bool = 0;
			}
		}
		if(var_330_bool != 0) {
			@@@var_0_object:AddReply((int)520211, (int)21404, (int)21403);
		}
		@@@var_0_object:AddReply((int)520215, (int)-1, (int)21407);
		goto Label_459;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x177";
	}
Label_459:
	var_383_bool = 0;
	func_2442(var_383_bool);
	if(var_383_bool != 0) {

	Label_463:
		lshWaitForAnimEnd();
		var_384_string = var_3_string;
		if(var_384_string != 0) {
		} else {
			var_385_string = "";
			var_385_string = var_2_object;
			func_2196(var_385_string);
			goto Label_463;
	}
		PlayAnimation("all", "idle");

	Label_478:
		WaitForAnimEnd();
		var_388_string = var_3_string;
		if(var_388_string != 0) {
			goto Label_488;
		}
		PlayAnimation("all", "idle");
		goto Label_478;
	}
	goto Label_488;
	
Label_488:
	return 0;
	
}


func_1653(var_0_object)
{
	var_26_bool = 0;
	func_1966(var_26_bool);
	var_29_bool = var_26_bool == 0; //@nz
	if(var_29_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1662:
	func_1829();
	goto Label_1662;
}
EMIT "Return(); Pop(0)";


func_1913(var_65_bool, var_66_object, var_67_string)
{
	var_68_bool = 0; var_69_bool = 0;
	var_72_bool = IsFuncExist(var_66_object, "HasProperty", (int)2);
	var_73_bool = var_72_bool == 0; //@nz
	if(var_73_bool != 0) {
		var_65_bool = 0;
		return 2;
	}
	@@var_66_object:HasProperty(var_67_string, var_69_bool);
	var_69_bool = var_65_bool;
	return 2;
}


func_2686()
{
	var_36_object = Obj(); var_37_object = Obj();
	CreateDiaryEntry(var_37_object, (int)299, (int)1, (int)521614);
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0;
	var_37_object = var_42_object;
	func_2712(var_41_bool, var_42_object, (int)297);
	return 2;
}
EMIT "Stack[-1] = 0";


func_894(var_2_object, var_223_string)
{
	var_224_bool = 0;
	func_2442(var_224_bool);
	var_225_bool = var_224_bool == 0; //@nz
	if(var_225_bool != 0) {
		return 0;
	}
	var_226_bool = var_223_string == var_2_object;
	if(var_226_bool != 0) {
		return 0;
	}
	var_227_string = ""; var_228_bool = 0;
	var_223_string = var_227_string;
	var_230_bool = var_223_string == "";
	if(var_230_bool != 0) {
		var_228_bool = 0;
	} else {
		var_228_bool = 1;
	}
	func_2212(var_227_string, var_228_bool);
	var_2_object = var_223_string;
	return 0;
	
}


func_2434(var_109_int)
{
	var_109_int = 515533;
	return 0;
}


func_1667(var_51_bool)
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
	func_1957(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2436(var_108_int)
{
	var_108_int = 502858;
	return 0;
}


func_1925(var_57_bool, var_58_object, var_59_string, var_60_float, var_61_float, var_62_float)
{
	var_63_float = 0; var_64_float = 0;
	var_65_bool = 0; var_66_object = Obj(); var_67_string = "";
	var_58_object = var_66_object;
	var_59_string = var_67_string;
	func_1913(var_65_bool, var_66_object, var_67_string);
	var_74_bool = var_65_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_57_bool = 0;
		return 2;
	}
	@@var_58_object:GetProperty(var_59_string, var_64_float);
	var_75_float = 0; var_76_float = 0; var_77_float = 0; var_78_float = 0;
	var_76_float = var_64_float + var_60_float;
	var_61_float = var_77_float;
	var_62_float = var_78_float;
	func_2265(var_75_float, var_76_float, var_77_float, var_78_float);
	@@var_58_object:SetProperty(var_59_string, var_75_float);
	var_57_bool = 1;
	return 2;
}


func_2438(var_110_string)
{
	var_110_string = "ui/NPC_Eva.png";
	return 0;
}


func_2440(var_111_string)
{
	var_111_string = "ui/NPC_Eva_b.png";
	return 0;
}


func_2442(var_103_bool)
{
	var_103_bool = 1;
	return 0;
}


func_2699(var_50_object)
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


func_2444()
{
	SetVariable("oob1Eva1", (int)1);
	return 0;
}


func_1167(var_2_object, var_490_string)
{
	var_491_bool = 0;
	func_2442(var_491_bool);
	var_492_bool = var_491_bool == 0; //@nz
	if(var_492_bool != 0) {
		return 0;
	}
	var_493_bool = var_490_string == var_2_object;
	if(var_493_bool != 0) {
		return 0;
	}
	var_494_string = ""; var_495_bool = 0;
	var_490_string = var_494_string;
	var_497_bool = var_490_string == "";
	if(var_497_bool != 0) {
		var_495_bool = 0;
	} else {
		var_495_bool = 1;
	}
	func_2212(var_494_string, var_495_bool);
	var_2_object = var_490_string;
	return 0;
	
}


func_144(var_2_object, var_426_string)
{
	var_427_bool = 0;
	func_2442(var_427_bool);
	var_428_bool = var_427_bool == 0; //@nz
	if(var_428_bool != 0) {
		return 0;
	}
	var_429_bool = var_426_string == var_2_object;
	if(var_429_bool != 0) {
		return 0;
	}
	var_430_string = ""; var_431_bool = 0;
	var_426_string = var_430_string;
	var_433_bool = var_426_string == "";
	if(var_433_bool != 0) {
		var_431_bool = 0;
	} else {
		var_431_bool = 1;
	}
	func_2212(var_430_string, var_431_bool);
	var_2_object = var_426_string;
	return 0;
	
}


func_1682(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_2450()
{
	SetVariable("oob2Eva1", (int)1);
	return 0;
}


func_2196(var_249_string)
{
	var_250_bool = 0; var_251_float = 0; var_252_float = 0; var_253_bool = 0; var_254_float = 0; var_255_float = 0;
	lshHasAnimation(var_253_bool, var_249_string);
	var_256_bool = var_253_bool;
	if(var_256_bool != 0) {
		lshGetAnimTimes(var_249_string, var_254_float, var_255_float);
		lshPlayAnimation(var_254_float, var_255_float, (bool)0);
	} else {
		var_259_int = "Can't find lsh animation : " + var_249_string;
		Trace(var_259_int);
	}
	return 6;
	
}


func_1687(var_34_bool)
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
	func_1905(var_41_float, var_42_object);
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


func_2712(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0;
	func_2699(Obj());
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


func_2456()
{
	SetVariable("oob9Eva1", (int)1);
	return 0;
}


func_1947(var_34_bool, var_35_cvector)
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


func_2462()
{
	SetVariable("b9q01", (int)2);
	func_2686();
	var_59_bool = 0; var_60_string = ""; var_61_string = "";
	func_2370(var_59_bool, "quest_b9_01", "place_mdoberman");
	var_65_bool = 0; var_66_string = ""; var_67_string = "";
	func_2370(var_65_bool, "quest_b9_01", "init_factory");
	return 0;
}


func_2212(var_227_string, var_228_bool)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0;
	lshHasAnimation(var_234_bool, var_227_string);
	var_237_bool = var_234_bool;
	if(var_237_bool != 0) {
		lshGetAnimTimes(var_227_string, var_235_float, var_236_float);
		lshPlayAnimation(var_235_float, var_236_float, var_228_bool);
	} else {
		var_239_int = "Can't find lsh animation : " + var_227_string;
		Trace(var_239_int);
	}
	return 6;
	
}


func_1957(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_1947(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_1446(var_0_object, var_537_int, var_538_object)
{
	var_540_object = Obj(); var_541_bool = 0; var_542_int = 0; var_543_bool = 0; var_544_object = Obj(); var_545_bool = 0; var_546_int = 0; var_547_bool = 0;
	var_0_object = var_538_object;
	var_548_bool = 0; var_549_object = Obj(); var_550_float = 0;
	var_538_object = var_549_object;
	func_1971(var_548_bool, var_549_object, (float)70.0);
	var_551_bool = var_548_bool == 0; //@nz
	if(var_551_bool != 0) {
		var_537_int = -2;
		return 8;
	}
	CreateDialog(var_544_object);
	var_552_int = 0;
	func_2436(var_552_int);
	@@var_544_object:SetNPCName(var_552_int);
	var_553_int = 0;
	func_2434(var_553_int);
	@@var_544_object:SetNPCDescription(var_553_int);
	var_554_string = "";
	func_2438(var_554_string);
	@@var_544_object:SetPhoto(var_554_string);
	var_555_string = "";
	func_2440(var_555_string);
	@@var_544_object:SetPhoto2(var_555_string);
	var_556_int = 0;
	func_2757(var_556_int);
	@@var_544_object:SetPlayerName(var_556_int);
	IsOverrideActive(var_545_bool);
	var_557_bool = var_545_bool;
	if(var_557_bool != 0) {
		var_537_int = -2;
		return 8;
	}
	DoDialog(var_544_object);
	var_558_bool = 0; var_559_object = Obj();
	func_2249(Obj());
	var_560_object = var_559_object;
	func_2058(var_558_bool, var_559_object);
	var_561_object = Obj(); var_562_object = Obj();
	var_538_object = var_561_object;
	var_544_object = var_562_object;
	TaskCall(9);
	func_1527(var_563_object, var_564_object, var_565_string, var_566_bool, var_561_object, var_562_object);
	TaskReturn();
	@@var_544_object:IsDialogEnd(var_547_bool);
	
Label_1509:
	var_591_bool = var_547_bool == 0; //@nz
	if(var_591_bool != 0) {
		sync();
		@@var_544_object:IsDialogEnd(var_547_bool);
		goto Label_1509;
	}
	var_538_object = Obj();
	func_2040();
	StopDialog(var_544_object);
	@@var_544_object:GetReturnValue((int)-1);
	var_546_int = var_537_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1709()
{
	var_595_float = 0; var_596_float = 0;
	rand(var_596_float, (int)8, (int)16);
	SetTimer((int)10, var_596_float);
	return 2;
}


func_1966(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
	return 2;
}


func_2481(var_108_object)
{
	var_110_bool = 0; var_111_object = Obj(); var_112_float = 0;
	var_108_object = var_111_object;
	func_2325(var_110_bool, var_111_object, (float)-0.05000000074505806);
	return 0;
}


func_2227(var_155_bool, var_156_string)
{
	var_157_bool = 0; var_158_bool = 0;
	var_159_bool = 0;
	func_2442(var_159_bool);
	if(var_159_bool != 0) {
		lshHasSpeech(var_158_bool, var_156_string);
		var_160_bool = var_158_bool;
		if(var_160_bool != 0) {
			lshPlaySpeech(var_156_string);
			var_155_bool = 1;
			return 2;
		}
	}
	var_155_bool = 0;
	return 2;
}


func_2740(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj();
	GetMainOutdoorScene(var_93_object);
	var_95_bool = var_93_object == 0; //@ne
	if(var_95_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_94_object = 0;
		var_94_object = var_90_object;
		return 4;
	}
	@@var_93_object:GetMap(var_94_object);
	var_94_object = var_90_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1971(var_60_bool, var_61_object, var_62_float)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0;
	@@var_61_object:GetPosition(var_73_cvector);
	@@var_61_object:GetEyesHeight(var_72_float);
	var_81_float = GetByIndex(var_73_cvector, 1);
	var_81_float = var_81_float + var_72_float;
	SetByIndex(var_73_cvector, 1) = var_81_float;
	GetPosition(var_74_cvector);
	GetEyesHeight(var_72_float);
	var_82_float = GetByIndex(var_74_cvector, 1);
	var_82_float = var_82_float + var_72_float;
	SetByIndex(var_74_cvector, 1) = var_82_float;
	var_75_cvector = var_73_cvector - var_74_cvector;
	var_83_float = GetByIndex(var_75_cvector, 1);
	SetByIndex(var_75_cvector, 1) = (float)0;
	var_84_int = var_75_cvector | var_75_cvector;
	var_85_float = sqrt(var_84_int);
	var_75_cvector = var_75_cvector / var_85_float;
	var_76_cvector = -var_75_cvector;
	var_86_float = var_75_cvector * var_62_float;
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0);
	var_88_cvector = var_76_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2255(var_87_cvector, var_88_cvector);
	var_96_float = var_87_cvector * (int)25;
	var_97_int = var_86_float + var_96_float;
	var_77_cvector = var_97_int - CVector(0.0, 10.0, 0.0);
	var_78_cvector = var_74_cvector + var_77_cvector;
	IsOverrideActive(var_79_bool);
	var_99_bool = var_79_bool;
	if(var_99_bool != 0) {
		var_60_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_78_cvector, var_76_cvector, (bool)1);
	var_101_float = GetByIndex(var_77_cvector, 0);
	var_102_float = GetByIndex(var_77_cvector, 2);
	Rotate(var_101_float, var_102_float);
	var_103_bool = 0;
	func_2442(var_103_bool);
	if(var_103_bool != 0) {
	} else {
		HasAnimationTrack(var_80_bool, "head");
		var_105_bool = var_80_bool;
		if(var_105_bool == 0) goto Label_2034;
		LookAsyncCamera("head");
	}
Label_2034:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_60_bool = 1;
	return 18;
	
}


func_1718()
{
	KillTimer((int)10);
	return 0;
}


func_2488()
{
	SetVariable("oob1Eva2", (int)1);
	return 0;
}


func_2494()
{
	var_88_object = Obj(); var_89_object = Obj();
	func_2740(Obj());
	var_90_object = var_89_object;
	var_101_float = 0;
	func_2382(var_101_float);
	@@var_89_object:AddMark("b1q01BakWillBeAt18", "pt_map_eva", (int)3, (int)524806, var_101_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2242()
{
	var_29_bool = 0;
	func_2442(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2757(var_112_int)
{
	var_113_int = 0; var_114_int = 0;
	GetVariable("branch", var_114_int);
	var_117_bool = var_114_int == (int)0;
	if(var_117_bool != 0) {
		var_112_int = 1;
		return 2;
	EMIT "GOTO 0xad4";
	}
	var_119_bool = var_114_int == (int)1;
	if(var_119_bool != 0) {
		var_112_int = 2;
		return 2;
	}
	var_112_int = 3;
	return 2;
}


func_2249(var_123_object)
{
	var_124_object = Obj(); var_125_object = Obj();
	self(var_125_object);
	var_125_object = var_123_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2510()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2255(var_87_cvector, var_88_cvector)
{
	var_90_float = 0; var_91_float = 0;
	var_92_int = var_88_cvector | var_88_cvector;
	var_91_float = sqrt(var_92_int);
	var_93_float = 9.999999974752427e-07;
	var_94_bool = var_91_float < var_93_float;
	if(var_94_bool != 0) {
		var_87_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_87_cvector = var_88_cvector / var_91_float;
	return 2;
}


func_2516(var_88_object)
{
	Trace("rifle ammo30 is given");
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0;
	var_88_object = var_91_object;
	func_2312(var_91_object, "rifle_ammo", (int)30);
	return 0;
}


func_2774(var_44_object)
{
	var_45_int = 0; var_46_int = 0;
	GetVariable("mt_eva", var_46_int);
	var_48_bool = var_46_int == 0; //@nz
	if(var_48_bool != 0) {
		var_49_int = 0; var_50_object = Obj();
		var_44_object = var_50_object;
		TaskCall(4);
		func_755(var_51_object, var_49_int, var_50_object);
		TaskReturn();
		SetVariable("mt_eva", (int)1);
	}
	var_276_bool = 0; var_277_int = 0;
	func_2404(var_276_bool, (int)1);
	if(var_276_bool != 0) {
		var_279_int = 0; var_280_object = Obj();
		var_44_object = var_280_object;
		TaskCall(2);
		func_290(var_281_object, var_279_int, var_280_object);
		TaskReturn();
		return 2;
	}
	var_393_bool = 0; var_394_int = 0;
	func_2404(var_393_bool, (int)2);
	if(var_393_bool != 0) {
		var_395_int = 0; var_396_object = Obj();
		var_44_object = var_396_object;
		TaskCall(0);
		func_0(var_397_object, var_395_int, var_396_object);
		TaskReturn();
		return 2;
	}
	var_457_bool = 0; var_458_int = 0;
	func_2404(var_457_bool, (int)9);
	if(var_457_bool != 0) {
		var_459_int = 0; var_460_object = Obj();
		var_44_object = var_460_object;
		TaskCall(6);
		func_1004(var_461_object, var_459_int, var_460_object);
		TaskReturn();
		return 2;
	}
	var_537_int = 0; var_538_object = Obj();
	var_44_object = var_538_object;
	TaskCall(8);
	func_1446(var_539_object, var_537_int, var_538_object);
	TaskReturn();
	return 2;
}


func_2265(var_75_float, var_76_float, var_77_float, var_78_float)
{
	var_79_bool = var_76_float < var_77_float;
	if(var_79_bool != 0) {
		var_77_float = var_75_float;
		return 0;
	}
	var_80_bool = var_76_float > var_78_float;
	if(var_80_bool != 0) {
		var_78_float = var_75_float;
		return 0;
	}
	var_76_float = var_75_float;
	return 0;
}


func_2527(var_44_object)
{
	var_46_bool = 0; var_47_object = Obj(); var_48_float = 0;
	var_44_object = var_47_object;
	func_2325(var_46_bool, var_47_object, (float)-0.019999999552965164);
	return 0;
}


func_2276(var_321_int, var_322_string)
{
	var_323_int = 0; var_324_int = 0;
	GetVariable(var_322_string, var_324_int);
	var_324_int = var_321_int;
	return 2;
}


func_2534()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_2281(var_107_int, var_108_int)
{
	var_109_object = Obj(); var_110_object = Obj();
	CreateIntVector(var_110_object);
	@@var_110_object:add(var_107_int);
	@@var_110_object:add(var_108_int);
	SendWorldWndMessage((int)3, var_110_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_489(var_2_object, var_310_string)
{
	var_311_bool = 0;
	func_2442(var_311_bool);
	var_312_bool = var_311_bool == 0; //@nz
	if(var_312_bool != 0) {
		return 0;
	}
	var_313_bool = var_310_string == var_2_object;
	if(var_313_bool != 0) {
		return 0;
	}
	var_314_string = ""; var_315_bool = 0;
	var_310_string = var_314_string;
	var_317_bool = var_310_string == "";
	if(var_317_bool != 0) {
		var_315_bool = 0;
	} else {
		var_315_bool = 1;
	}
	func_2212(var_314_string, var_315_bool);
	var_2_object = var_310_string;
	return 0;
	
}


func_2540(var_499_bool)
{
	var_501_int = 0; var_502_string = "";
	func_2276(var_501_int, "b9q01");
	var_504_bool = var_501_int == (int)1;
	if(var_504_bool != 0) {
		var_499_bool = 1;
		return 0;
	}
	var_499_bool = 0;
	return 0;
}


func_1004(var_0_object, var_459_int, var_460_object)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0;
	var_0_object = var_460_object;
	var_470_bool = 0; var_471_object = Obj(); var_472_float = 0;
	var_460_object = var_471_object;
	func_1971(var_470_bool, var_471_object, (float)70.0);
	var_473_bool = var_470_bool == 0; //@nz
	if(var_473_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	CreateDialog(var_466_object);
	var_474_int = 0;
	func_2436(var_474_int);
	@@var_466_object:SetNPCName(var_474_int);
	var_475_int = 0;
	func_2434(var_475_int);
	@@var_466_object:SetNPCDescription(var_475_int);
	var_476_string = "";
	func_2438(var_476_string);
	@@var_466_object:SetPhoto(var_476_string);
	var_477_string = "";
	func_2440(var_477_string);
	@@var_466_object:SetPhoto2(var_477_string);
	var_478_int = 0;
	func_2757(var_478_int);
	@@var_466_object:SetPlayerName(var_478_int);
	IsOverrideActive(var_467_bool);
	var_479_bool = var_467_bool;
	if(var_479_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	DoDialog(var_466_object);
	var_480_bool = 0; var_481_object = Obj();
	func_2249(Obj());
	var_482_object = var_481_object;
	func_2058(var_480_bool, var_481_object);
	var_483_object = Obj(); var_484_object = Obj();
	var_460_object = var_483_object;
	var_466_object = var_484_object;
	TaskCall(7);
	func_1085(var_485_object, var_486_object, var_487_string, var_488_bool, var_483_object, var_484_object);
	TaskReturn();
	@@var_466_object:IsDialogEnd(var_469_bool);
	
Label_1067:
	var_535_bool = var_469_bool == 0; //@nz
	if(var_535_bool != 0) {
		sync();
		@@var_466_object:IsDialogEnd(var_469_bool);
		goto Label_1067;
	}
	var_460_object = Obj();
	func_2040();
	StopDialog(var_466_object);
	@@var_466_object:GetReturnValue((int)-1);
	var_468_int = var_459_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_755(var_0_object, var_49_int, var_50_object)
{
	var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0;
	var_0_object = var_50_object;
	var_60_bool = 0; var_61_object = Obj(); var_62_float = 0;
	var_50_object = var_61_object;
	func_1971(var_60_bool, var_61_object, (float)70.0);
	var_107_bool = var_60_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	CreateDialog(var_56_object);
	var_108_int = 0;
	func_2436(var_108_int);
	@@var_56_object:SetNPCName(var_108_int);
	var_109_int = 0;
	func_2434(var_109_int);
	@@var_56_object:SetNPCDescription(var_109_int);
	var_110_string = "";
	func_2438(var_110_string);
	@@var_56_object:SetPhoto(var_110_string);
	var_111_string = "";
	func_2440(var_111_string);
	@@var_56_object:SetPhoto2(var_111_string);
	var_112_int = 0;
	func_2757(var_112_int);
	@@var_56_object:SetPlayerName(var_112_int);
	IsOverrideActive(var_57_bool);
	var_120_bool = var_57_bool;
	if(var_120_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	DoDialog(var_56_object);
	var_121_bool = 0; var_122_object = Obj();
	func_2249(Obj());
	var_123_object = var_122_object;
	func_2058(var_121_bool, var_122_object);
	var_216_object = Obj(); var_217_object = Obj();
	var_50_object = var_216_object;
	var_56_object = var_217_object;
	TaskCall(5);
	func_836(var_218_object, var_219_object, var_220_string, var_221_bool, var_216_object, var_217_object);
	TaskReturn();
	@@var_56_object:IsDialogEnd(var_59_bool);
	
Label_818:
	var_265_bool = var_59_bool == 0; //@nz
	if(var_265_bool != 0) {
		sync();
		@@var_56_object:IsDialogEnd(var_59_bool);
		goto Label_818;
	}
	var_50_object = Obj();
	func_2040();
	StopDialog(var_56_object);
	@@var_56_object:GetReturnValue((int)-1);
	var_58_int = var_49_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2293(var_96_object, var_97_object, var_98_int)
{
	var_99_int = 0; var_100_int = 0; var_101_bool = 0; var_102_int = 0; var_103_int = 0; var_104_bool = 0;
	@@var_97_object:GetItemID(var_102_int);
	GetInvItemProperty(var_103_int, var_102_int, "Category");
	@@var_96_object:AddItem(var_104_bool, var_97_object, var_103_int, var_98_int);
	var_106_bool = var_104_bool == 0; //@nz
	if(var_106_bool != 0) {
		@@var_96_object:DropItems(var_97_object, var_98_int);
	} else {
		var_107_int = 0; var_108_int = 0;
		var_102_int = var_107_int;
		var_98_int = var_108_int;
		func_2281(var_107_int, var_108_int);
	}
	return 6;
	
}


func_1527(var_0_object, var_1_object, var_2_object, var_3_string, var_561_object, var_562_object)
{
	var_0_object = var_562_object;
	var_1_object = var_561_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_568_string = "";
		func_1585(var_562_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_1555;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5fb";
	}
Label_1555:
	var_583_bool = 0;
	func_2442(var_583_bool);
	if(var_583_bool != 0) {

	Label_1559:
		lshWaitForAnimEnd();
		var_584_string = var_3_string;
		if(var_584_string != 0) {
		} else {
			var_585_string = "";
			var_585_string = var_2_object;
			func_2196(var_585_string);
			goto Label_1559;
	}
		PlayAnimation("all", "idle");

	Label_1574:
		WaitForAnimEnd();
		var_588_string = var_3_string;
		if(var_588_string != 0) {
			goto Label_1584;
		}
		PlayAnimation("all", "idle");
		goto Label_1574;
	}
	goto Label_1584;
	
Label_1584:
	return 0;
	
}


func_2552(var_509_bool)
{
	var_511_int = 0; var_512_string = "";
	func_2276(var_511_int, "oob9Eva1");
	var_514_bool = var_511_int == (int)0;
	if(var_514_bool != 0) {
		var_509_bool = 1;
		return 0;
	}
	var_509_bool = 0;
	return 0;
}


