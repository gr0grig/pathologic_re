// @IMPORTS: Hold/0,StopGroup0/0,sync/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,GetPosition/1,GetDirection/1,SetPosition/1,SetDirection/1,LockAnimation/3,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,FindActor/2,Trigger/2,GetGameTime/1,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Anger|W:Confusion|W:Fear|W:Surprise|W:icot_viktor_NPC_Trigger|W:stand|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:ui/NPC_Viktor.png|W:ui/NPC_Viktor_b.png|W:b7q01|W:b7q01DankoGotoSobor|W:pt_map_aglaja|A:AddMark|W:quest_b7_01|W:place_aglaja|W:oob6Viktor1|W:b6q03ViktorGotoMaria|W:pt_map_maria|W:cot_maria@door1|W:b6ViktorVisit|W:playsound|W:mapmark|W:b6q03NinaTalk|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch
// @GLOBALS: 0:object:,1:bool:,2:bool:
// @RUN_OP: 0x64f
// @RUN_TASK: 11
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xae vars=int,int
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1bb vars=int,int
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x395 vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x527 vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0x625 vars=int,int
// @TASK_11: vars=bool,cvector,cvector params=0
// @EVENT_26: op=0x656 vars=string
// @EVENT_6: op=0x68f vars=
// @EVENT_0: op=0x698 vars=object
// @PE: 0x5e,0x98,0xae,0x157,0x1a5,0x1bb,0x322,0x37f,0x395,0x4d2,0x511,0x527,0x5d5,0x60f,0x625,0x656,0x818,0x844,0x85a,0x861,0x867,0x86d,0x879,0x885,0x8e9

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	if((int)1 != 0) {
		func_2001();
		var_33_bool = var_28_cvector == (int)19184;
		if(var_33_bool != 0) {
			var_34_string = "";
			func_152(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518052, (int)29827, (int)19185);
			@@@var_0_object:AddReply((int)528440, (int)-1, (int)29826);
			return 0;
		}
		var_59_bool = var_28_cvector == (int)29827;
		if(var_59_bool != 0) {
			var_60_string = "";
			func_152(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528441);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528442, (int)29830, (int)29828);
			@@@var_0_object:AddReply((int)528443, (int)-1, (int)29829);
			return 0;
		}
		var_69_bool = var_28_cvector == (int)29830;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_152(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528445, (int)-1, (int)29831);
			@@@var_0_object:AddReply((int)528446, (int)-1, (int)29832);
			return 0;
		}
		var_3_string = true;
		var_78_bool = 0;
		func_2086(var_78_bool);
		if(var_78_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaf";
	
}


task_4_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	if((int)1 != 0) {
		func_2001();
		var_33_bool = var_29_cvector == (int)22234;
		if(var_33_bool != 0) {
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_object;
			func_2088();
		}
		var_84_bool = var_28_cvector == (int)22233;
		if(var_84_bool != 0) {
			var_85_bool = 0; var_86_object = Obj();
			var_86_object = var_1_object;
			func_2181(var_86_object);
			if(var_85_bool != 0) {
				var_93_string = "";
				func_421(var_29_cvector, "Anger");
				@@@var_0_object:SetMessage((int)521037);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528490, (int)29880, (int)29879);
				@@@var_0_object:AddReply((int)528510, (int)29882, (int)29899);
				return 0;
			}
			var_117_string = "";
			func_421(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521039);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521040, (int)-1, (int)22236);
			return 0;
		}
		var_123_bool = var_28_cvector == (int)29880;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_421(var_29_cvector, "Anger");
			@@@var_0_object:SetMessage((int)528491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528492, (int)29882, (int)29881);
			return 0;
		}
		var_130_bool = var_28_cvector == (int)29882;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_421(var_29_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528493);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528494, (int)29884, (int)29883);
			@@@var_0_object:AddReply((int)528511, (int)29902, (int)29901);
			return 0;
		}
		var_140_bool = var_28_cvector == (int)29902;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_421(var_29_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528513, (int)29904, (int)29903);
			return 0;
		}
		var_147_bool = var_28_cvector == (int)29904;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_421(var_29_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528515, (int)29886, (int)29905);
			return 0;
		}
		var_154_bool = var_28_cvector == (int)29884;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_421(var_29_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528496, (int)29886, (int)29885);
			return 0;
		}
		var_161_bool = var_28_cvector == (int)29886;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_421(var_29_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528497);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528498, (int)29888, (int)29887);
			return 0;
		}
		var_168_bool = var_28_cvector == (int)29888;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_421(var_29_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528499);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528500, (int)29890, (int)29889);
			return 0;
		}
		var_175_bool = var_28_cvector == (int)29890;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_421(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528501);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528504, (int)29894, (int)29893);
			@@@var_0_object:AddReply((int)528517, (int)29896, (int)29908);
			return 0;
		}
		var_185_bool = var_28_cvector == (int)29894;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_421(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528505);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528506, (int)29896, (int)29895);
			return 0;
		}
		var_192_bool = var_28_cvector == (int)29896;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_421(var_29_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)528507);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528508, (int)29898, (int)29897);
			return 0;
		}
		var_199_bool = var_28_cvector == (int)29898;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_421(var_29_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)528509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521038, (int)-1, (int)22234);
			return 0;
		}
		var_3_string = true;
		var_205_bool = 0;
		func_2086(var_205_bool);
		if(var_205_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1bc";
	
}


task_6_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	if((int)1 != 0) {
		func_2001();
		var_33_bool = var_29_cvector == (int)22516;
		if(var_33_bool != 0) {
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_object;
			func_2122();
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_2151();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_2138();
		}
		var_69_bool = var_29_cvector == (int)29846;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_2122();
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_2151();
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_2138();
		}
		var_77_bool = var_29_cvector == (int)22515;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_2122();
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_2151();
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_2138();
		}
		var_85_bool = var_28_cvector == (int)22514;
		if(var_85_bool != 0) {
			var_86_bool = 0;
			var_86_bool = 0;
			var_87_bool = 0; var_88_object = Obj();
			var_88_object = var_1_object;
			func_2157(var_88_object);
			var_95_bool = var_87_bool == 0; //@nz
			if(var_95_bool != 0) {
				var_96_bool = 0; var_97_object = Obj();
				var_97_object = var_1_object;
				func_2169(var_97_object);
				if(var_96_bool != 0) {
					var_86_bool = 1;
				}
			}
			if(var_86_bool != 0) {
				var_102_object = Obj(); var_103_object = Obj();
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_2116();
				var_106_object = Obj(); var_107_object = Obj();
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_2145();
				var_110_string = "";
				func_895(var_29_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)521320);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528448, (int)29835, (int)29834);
				return 0;
			}
			var_131_string = "";
			func_895(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521324, (int)-1, (int)22518);
			return 0;
		}
		var_137_bool = var_28_cvector == (int)29835;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_895(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528450, (int)29837, (int)29836);
			return 0;
		}
		var_144_bool = var_28_cvector == (int)29837;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_895(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528451);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528452, (int)29840, (int)29838);
			@@@var_0_object:AddReply((int)528453, (int)29840, (int)29839);
			return 0;
		}
		var_154_bool = var_28_cvector == (int)29840;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_895(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528454);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528455, (int)29842, (int)29841);
			@@@var_0_object:AddReply((int)521321, (int)-1, (int)22515);
			return 0;
		}
		var_164_bool = var_28_cvector == (int)29842;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_895(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528456);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528457, (int)29845, (int)29844);
			return 0;
		}
		var_171_bool = var_28_cvector == (int)29845;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_895(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528458);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521322, (int)-1, (int)22516);
			@@@var_0_object:AddReply((int)528459, (int)-1, (int)29846);
			return 0;
		}
		var_3_string = true;
		var_180_bool = 0;
		func_2086(var_180_bool);
		if(var_180_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x396";
	
}


task_8_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	if((int)1 != 0) {
		func_2001();
		var_33_bool = var_28_cvector == (int)36906;
		if(var_33_bool != 0) {
			var_34_string = "";
			func_1297(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_62_bool = var_28_cvector == (int)36953;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_1297(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_72_bool = var_28_cvector == (int)36957;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_1297(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_81_bool = 0;
		func_2086(var_81_bool);
		if(var_81_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x528";
	
}


task_10_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_bool, var_28_cvector, var_29_cvector)
{
	if((int)1 != 0) {
		func_2001();
		var_33_bool = var_28_cvector == (int)42563;
		if(var_33_bool != 0) {
			var_34_string = "";
			func_1551(var_29_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_58_bool = 0;
		func_2086(var_58_bool);
		if(var_58_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x626";
	
}


task_11_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector, var_28_string)
{
	var_30_bool = var_28_string == "icot_viktor_NPC_Trigger";
	if(var_30_bool != 0) {
		func_1669(var_28_string);
	}
	return 0;
}


task_11_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	func_1658(var_25_bool, var_26_cvector, var_27_cvector);
	return 0;
}


task_11_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector, var_28_object)
{
	var_29_bool = 0; var_30_bool = 0;
	var_31_object = var_0_object;
	if(var_31_object != 0) {
		IsOverrideActive(var_30_bool);
		var_32_bool = var_30_bool == 0; //@nz
		if(var_32_bool != 0) {
			EventDisable(0);
			var_33_bool = 0; var_34_object = Obj();
			var_28_object = var_34_object;
			func_1716(var_33_bool, var_34_object);
			EventEnable(0);
			var_47_object = Obj();
			var_28_object = var_47_object;
			func_2281(var_47_object);
		}
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector)
{
	var_28_bool = GlobalVars[1];
	GlobalVars[1] = (bool)1;
	func_1630(var_25_bool, var_26_cvector, var_27_cvector);
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_33_bool = 0;
	func_1725(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool == 1) goto Label_0;
	return 0;
}


func_1153(var_0_object, var_435_int, var_436_object)
{
	var_438_object = Obj(); var_439_bool = 0; var_440_int = 0; var_441_bool = 0; var_442_object = Obj(); var_443_bool = 0; var_444_int = 0; var_445_bool = 0;
	var_0_object = var_436_object;
	var_446_bool = 0; var_447_object = Obj(); var_448_float = 0;
	var_436_object = var_447_object;
	func_1730(var_446_bool, var_447_object, (float)70.0);
	var_449_bool = var_446_bool == 0; //@nz
	if(var_449_bool != 0) {
		var_435_int = -2;
		return 8;
	}
	CreateDialog(var_442_object);
	var_450_int = 0;
	func_2080(var_450_int);
	@@var_442_object:SetNPCName(var_450_int);
	var_451_int = 0;
	func_2078(var_451_int);
	@@var_442_object:SetNPCDescription(var_451_int);
	var_452_string = "";
	func_2082(var_452_string);
	@@var_442_object:SetPhoto(var_452_string);
	var_453_string = "";
	func_2084(var_453_string);
	@@var_442_object:SetPhoto2(var_453_string);
	var_454_int = 0;
	func_2264(var_454_int);
	@@var_442_object:SetPlayerName(var_454_int);
	IsOverrideActive(var_443_bool);
	var_455_bool = var_443_bool;
	if(var_455_bool != 0) {
		var_435_int = -2;
		return 8;
	}
	DoDialog(var_442_object);
	var_456_bool = 0; var_457_object = Obj();
	func_2008(Obj());
	var_458_object = var_457_object;
	func_1817(var_456_bool, var_457_object);
	var_459_object = Obj(); var_460_object = Obj();
	var_436_object = var_459_object;
	var_442_object = var_460_object;
	TaskCall(8);
	func_1234(var_461_object, var_462_object, var_463_string, var_464_bool, var_459_object, var_460_object);
	TaskReturn();
	@@var_442_object:IsDialogEnd(var_445_bool);
	
Label_1216:
	var_492_bool = var_445_bool == 0; //@nz
	if(var_492_bool != 0) {
		sync();
		@@var_442_object:IsDialogEnd(var_445_bool);
		goto Label_1216;
	}
	var_436_object = Obj();
	func_1799();
	StopDialog(var_442_object);
	@@var_442_object:GetReturnValue((int)-1);
	var_444_int = var_435_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1412(var_0_object, var_495_int, var_496_object)
{
	var_498_object = Obj(); var_499_bool = 0; var_500_int = 0; var_501_bool = 0; var_502_object = Obj(); var_503_bool = 0; var_504_int = 0; var_505_bool = 0;
	var_0_object = var_496_object;
	var_506_bool = 0; var_507_object = Obj(); var_508_float = 0;
	var_496_object = var_507_object;
	func_1730(var_506_bool, var_507_object, (float)70.0);
	var_509_bool = var_506_bool == 0; //@nz
	if(var_509_bool != 0) {
		var_495_int = -2;
		return 8;
	}
	CreateDialog(var_502_object);
	var_510_int = 0;
	func_2080(var_510_int);
	@@var_502_object:SetNPCName(var_510_int);
	var_511_int = 0;
	func_2078(var_511_int);
	@@var_502_object:SetNPCDescription(var_511_int);
	var_512_string = "";
	func_2082(var_512_string);
	@@var_502_object:SetPhoto(var_512_string);
	var_513_string = "";
	func_2084(var_513_string);
	@@var_502_object:SetPhoto2(var_513_string);
	var_514_int = 0;
	func_2264(var_514_int);
	@@var_502_object:SetPlayerName(var_514_int);
	IsOverrideActive(var_503_bool);
	var_515_bool = var_503_bool;
	if(var_515_bool != 0) {
		var_495_int = -2;
		return 8;
	}
	DoDialog(var_502_object);
	var_516_bool = 0; var_517_object = Obj();
	func_2008(Obj());
	var_518_object = var_517_object;
	func_1817(var_516_bool, var_517_object);
	var_519_object = Obj(); var_520_object = Obj();
	var_496_object = var_519_object;
	var_502_object = var_520_object;
	TaskCall(10);
	func_1493(var_521_object, var_522_object, var_523_string, var_524_bool, var_519_object, var_520_object);
	TaskReturn();
	@@var_502_object:IsDialogEnd(var_505_bool);
	
Label_1475:
	var_549_bool = var_505_bool == 0; //@nz
	if(var_549_bool != 0) {
		sync();
		@@var_502_object:IsDialogEnd(var_505_bool);
		goto Label_1475;
	}
	var_496_object = Obj();
	func_1799();
	StopDialog(var_502_object);
	@@var_502_object:GetReturnValue((int)-1);
	var_504_int = var_495_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2181(var_394_bool)
{
	var_396_int = 0; var_397_string = "";
	func_2024(var_396_int, "b7q01");
	var_399_bool = var_396_int == (int)5;
	if(var_399_bool != 0) {
		var_394_bool = 1;
		return 0;
	}
	var_394_bool = 0;
	return 0;
}


func_1669(var_0_object)
{
	var_31_bool = var_0_object == 0; //@nz
	if(var_31_bool != 0) {
		var_0_object = true;
		PlayAnimation("all", "stand");
		WaitForAnimEnd();
	}
	return 0;
}


func_1799()
{
	var_268_bool = 0; var_269_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_271_bool = 0;
	func_2086(var_271_bool);
	if(var_271_bool != 0) {
	} else {
		HasAnimationTrack(var_269_bool, "head");
		var_273_bool = var_269_bool;
		if(var_273_bool == 0) goto Label_1816;
		UnlookAsync("head");
	}
Label_1816:
	return 2;
	
}


func_262(var_0_object, var_363_int, var_364_object)
{
	var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_object = Obj(); var_371_bool = 0; var_372_int = 0; var_373_bool = 0;
	var_0_object = var_364_object;
	var_374_bool = 0; var_375_object = Obj(); var_376_float = 0;
	var_364_object = var_375_object;
	func_1730(var_374_bool, var_375_object, (float)70.0);
	var_377_bool = var_374_bool == 0; //@nz
	if(var_377_bool != 0) {
		var_363_int = -2;
		return 8;
	}
	CreateDialog(var_370_object);
	var_378_int = 0;
	func_2080(var_378_int);
	@@var_370_object:SetNPCName(var_378_int);
	var_379_int = 0;
	func_2078(var_379_int);
	@@var_370_object:SetNPCDescription(var_379_int);
	var_380_string = "";
	func_2082(var_380_string);
	@@var_370_object:SetPhoto(var_380_string);
	var_381_string = "";
	func_2084(var_381_string);
	@@var_370_object:SetPhoto2(var_381_string);
	var_382_int = 0;
	func_2264(var_382_int);
	@@var_370_object:SetPlayerName(var_382_int);
	IsOverrideActive(var_371_bool);
	var_383_bool = var_371_bool;
	if(var_383_bool != 0) {
		var_363_int = -2;
		return 8;
	}
	DoDialog(var_370_object);
	var_384_bool = 0; var_385_object = Obj();
	func_2008(Obj());
	var_386_object = var_385_object;
	func_1817(var_384_bool, var_385_object);
	var_387_object = Obj(); var_388_object = Obj();
	var_364_object = var_387_object;
	var_370_object = var_388_object;
	TaskCall(4);
	func_343(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object);
	TaskReturn();
	@@var_370_object:IsDialogEnd(var_373_bool);
	
Label_325:
	var_428_bool = var_373_bool == 0; //@nz
	if(var_428_bool != 0) {
		sync();
		@@var_370_object:IsDialogEnd(var_373_bool);
		goto Label_325;
	}
	var_364_object = Obj();
	func_1799();
	StopDialog(var_370_object);
	@@var_370_object:GetReturnValue((int)-1);
	var_372_int = var_363_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2058(var_49_float)
{
	var_50_float = 0; var_51_float = 0;
	GetGameTime(var_51_float);
	var_51_float = var_49_float;
	return 2;
}


func_13(var_0_object, var_50_int, var_51_object)
{
	var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0;
	var_0_object = var_51_object;
	var_61_bool = 0; var_62_object = Obj(); var_63_float = 0;
	var_51_object = var_62_object;
	func_1730(var_61_bool, var_62_object, (float)70.0);
	var_108_bool = var_61_bool == 0; //@nz
	if(var_108_bool != 0) {
		var_50_int = -2;
		return 8;
	}
	CreateDialog(var_57_object);
	var_109_int = 0;
	func_2080(var_109_int);
	@@var_57_object:SetNPCName(var_109_int);
	var_110_int = 0;
	func_2078(var_110_int);
	@@var_57_object:SetNPCDescription(var_110_int);
	var_111_string = "";
	func_2082(var_111_string);
	@@var_57_object:SetPhoto(var_111_string);
	var_112_string = "";
	func_2084(var_112_string);
	@@var_57_object:SetPhoto2(var_112_string);
	var_113_int = 0;
	func_2264(var_113_int);
	@@var_57_object:SetPlayerName(var_113_int);
	IsOverrideActive(var_58_bool);
	var_121_bool = var_58_bool;
	if(var_121_bool != 0) {
		var_50_int = -2;
		return 8;
	}
	DoDialog(var_57_object);
	var_122_bool = 0; var_123_object = Obj();
	func_2008(Obj());
	var_124_object = var_123_object;
	func_1817(var_122_bool, var_123_object);
	var_217_object = Obj(); var_218_object = Obj();
	var_51_object = var_217_object;
	var_57_object = var_218_object;
	TaskCall(2);
	func_94(var_219_object, var_220_object, var_221_string, var_222_bool, var_217_object, var_218_object);
	TaskReturn();
	@@var_57_object:IsDialogEnd(var_60_bool);
	
Label_76:
	var_266_bool = var_60_bool == 0; //@nz
	if(var_266_bool != 0) {
		sync();
		@@var_57_object:IsDialogEnd(var_60_bool);
		goto Label_76;
	}
	var_51_object = Obj();
	func_1799();
	StopDialog(var_57_object);
	@@var_57_object:GetReturnValue((int)-1);
	var_59_int = var_50_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1551(var_2_object, var_526_string)
{
	var_527_bool = 0;
	func_2086(var_527_bool);
	var_528_bool = var_527_bool == 0; //@nz
	if(var_528_bool != 0) {
		return 0;
	}
	var_529_bool = var_526_string == var_2_object;
	if(var_529_bool != 0) {
		return 0;
	}
	var_530_string = ""; var_531_bool = 0;
	var_526_string = var_530_string;
	var_533_bool = var_526_string == "";
	if(var_533_bool != 0) {
		var_531_bool = 0;
	} else {
		var_531_bool = 1;
	}
	func_1971(var_530_string, var_531_bool);
	var_2_object = var_526_string;
	return 0;
	
}


func_2063(var_177_int)
{
	var_178_float = 0; var_179_float = 0;
	GetGameTime(var_179_float);
	var_181_int = 0;
	var_181_int = var_179_float / (int)24;
	var_177_int = (int)1 + var_181_int;
	return 2;
}


func_1297(var_2_object, var_466_string)
{
	var_467_bool = 0;
	func_2086(var_467_bool);
	var_468_bool = var_467_bool == 0; //@nz
	if(var_468_bool != 0) {
		return 0;
	}
	var_469_bool = var_466_string == var_2_object;
	if(var_469_bool != 0) {
		return 0;
	}
	var_470_string = ""; var_471_bool = 0;
	var_466_string = var_470_string;
	var_473_bool = var_466_string == "";
	if(var_473_bool != 0) {
		var_471_bool = 0;
	} else {
		var_471_bool = 1;
	}
	func_1971(var_470_string, var_471_bool);
	var_2_object = var_466_string;
	return 0;
	
}


func_2193()
{
	var_54_object = Obj(); var_55_object = Obj();
	CreateDiaryEntry(var_55_object, (int)262, (int)1, (int)521035);
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0;
	var_55_object = var_60_object;
	func_2219(var_59_bool, var_60_object, (int)253);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2072(var_276_bool, var_277_int)
{
	var_278_int = 0;
	func_2063(var_278_int);
	var_276_bool = var_278_int == var_277_int;
	return 0;
}


func_152(var_2_object, var_224_string)
{
	var_225_bool = 0;
	func_2086(var_225_bool);
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
	func_1971(var_228_string, var_229_bool);
	var_2_object = var_224_string;
	return 0;
	
}


func_1817(var_122_bool, var_123_object)
{
	var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0;
	GetVariable("voice_common", var_129_int);
	var_132_int = var_129_int;
	if(var_132_int != 0) {
		var_133_bool = 0; var_134_object = Obj();
		var_123_object = var_134_object;
		func_1875(var_133_bool, var_134_object);
		var_163_bool = var_133_bool == 0; //@nz
		if(var_163_bool != 0) {
			var_164_bool = 0; var_165_object = Obj();
			var_123_object = var_165_object;
			func_1912(var_164_bool, var_165_object);
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
		func_1912(var_209_bool, var_210_object);
		var_211_bool = var_209_bool == 0; //@nz
		if(var_211_bool != 0) {
			var_212_bool = 0; var_213_object = Obj();
			var_123_object = var_213_object;
			func_1875(var_212_bool, var_213_object);
			var_214_bool = var_212_bool == 0; //@nz
			if(var_214_bool != 0) {
				var_122_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1873;
	
Label_1873:
	var_122_bool = 1;
	return 4;
	
}


func_2206(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj();
	GetDiaryRoot(var_70_object);
	var_71_bool = var_70_object == 0; //@nz
	if(var_71_bool != 0) {
		Trace("Can't retrieve diary root");
		var_68_object = 0;
		return 2;
	}
	var_70_object = var_68_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2078(var_110_int)
{
	var_110_int = 515554;
	return 0;
}


func_2080(var_109_int)
{
	var_109_int = 502879;
	return 0;
}


func_2082(var_111_string)
{
	var_111_string = "ui/NPC_Viktor.png";
	return 0;
}


func_1955(var_38_string)
{
	var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_bool = 0; var_43_float = 0; var_44_float = 0;
	lshHasAnimation(var_42_bool, var_38_string);
	var_45_bool = var_42_bool;
	if(var_45_bool != 0) {
		lshGetAnimTimes(var_38_string, var_43_float, var_44_float);
		lshPlayAnimation(var_43_float, var_44_float, (bool)0);
	} else {
		var_48_int = "Can't find lsh animation : " + var_38_string;
		Trace(var_48_int);
	}
	return 6;
	
}


func_2084(var_112_string)
{
	var_112_string = "ui/NPC_Viktor_b.png";
	return 0;
}


func_421(var_2_object, var_400_string)
{
	var_401_bool = 0;
	func_2086(var_401_bool);
	var_402_bool = var_401_bool == 0; //@nz
	if(var_402_bool != 0) {
		return 0;
	}
	var_403_bool = var_400_string == var_2_object;
	if(var_403_bool != 0) {
		return 0;
	}
	var_404_string = ""; var_405_bool = 0;
	var_400_string = var_404_string;
	var_407_bool = var_400_string == "";
	if(var_407_bool != 0) {
		var_405_bool = 0;
	} else {
		var_405_bool = 1;
	}
	func_1971(var_404_string, var_405_bool);
	var_2_object = var_400_string;
	return 0;
	
}


func_2086(var_104_bool)
{
	var_104_bool = 1;
	return 0;
}


func_802(var_0_object, var_1_object, var_2_object, var_3_string, var_303_object, var_304_object)
{
	var_0_object = var_304_object;
	var_1_object = var_303_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_310_bool = 0;
		var_310_bool = 0;
		var_311_bool = 0; var_312_object = Obj();
		var_312_object = var_1_object;
		func_2157(var_312_object);
		var_319_bool = var_311_bool == 0; //@nz
		if(var_319_bool != 0) {
			var_320_bool = 0; var_321_object = Obj();
			var_321_object = var_1_object;
			func_2169(var_321_object);
			if(var_320_bool != 0) {
				var_310_bool = 1;
			}
		}
		if(var_310_bool != 0) {
			var_326_object = Obj(); var_327_object = Obj();
			var_326_object = var_1_object;
			var_327_object = var_0_object;
			func_2116();
			var_330_object = Obj(); var_331_object = Obj();
			var_330_object = var_1_object;
			var_331_object = var_0_object;
			func_2145();
			var_334_string = "";
			func_895(var_304_object, "Neutral");
			@@@var_0_object:SetMessage((int)521320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528448, (int)29835, (int)29834);
		} else {
				var_354_string = "";
				func_895(var_304_object, "Neutral");
				@@@var_0_object:SetMessage((int)521323);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521324, (int)-1, (int)22518);
				goto Label_865;
		}
	}
Label_865:
	var_346_bool = 0;
	func_2086(var_346_bool);
	if(var_346_bool != 0) {

	Label_869:
		lshWaitForAnimEnd();
		var_347_string = var_3_string;
		if(var_347_string != 0) {
		} else {
			var_348_string = "";
			var_348_string = var_2_object;
			func_1955(var_348_string);
			goto Label_869;
	}
		PlayAnimation("all", "idle");

	Label_884:
		WaitForAnimEnd();
		var_351_string = var_3_string;
		if(var_351_string != 0) {
			goto Label_894;
		}
		PlayAnimation("all", "idle");
		goto Label_884;

	}
	goto Label_894;
	
Label_894:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x326";


func_2088()
{
	var_36_object = Obj(); var_37_object = Obj();
	SetVariable("b7q01", (int)6);
	func_2247(Obj());
	var_40_object = var_37_object;
	var_51_float = 0;
	func_2058(var_51_float);
	@@var_37_object:AddMark("b7q01DankoGotoSobor", "pt_map_aglaja", (int)1, (int)521021, var_51_float);
	func_2193();
	var_77_bool = 0; var_78_string = ""; var_79_string = "";
	func_2046(var_77_bool, "quest_b7_01", "place_aglaja");
	return 2;
}
EMIT "Stack[-1] = 0";


func_1706(var_37_bool, var_38_cvector)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0;
	GetPosition(var_42_cvector);
	var_43_cvector = var_38_cvector - var_42_cvector;
	var_45_float = GetByIndex(var_43_cvector, 0);
	var_46_float = GetByIndex(var_43_cvector, 2);
	Rotate(var_45_float, var_46_float, var_44_bool);
	var_44_bool = var_37_bool;
	return 6;
}


func_2219(var_59_bool, var_60_object, var_61_int)
{
	var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0;
	func_2206(Obj());
	var_68_object = var_65_object;
	@@var_65_object:Find(var_61_int, var_66_object);
	var_73_bool = var_66_object == 0; //@nz
	if(var_73_bool != 0) {
		var_75_int = "Can't find diary parent with id: " + var_61_int;
		Trace(var_75_int);
		var_59_bool = 0;
		return 6;
	}
	@@var_66_object:AddChild(var_60_object);
	SendWorldWndMessage((int)7);
	@@var_60_object:GetCategory(var_67_int);
	SetDiarySection(var_67_int);
	var_59_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1971(var_228_string, var_229_bool)
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


func_1716(var_33_bool, var_34_object)
{
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0);
	@@var_34_object:GetPosition(var_36_cvector);
	var_37_bool = 0; var_38_cvector = CVector(0,0,0);
	var_36_cvector = var_38_cvector;
	func_1706(var_37_bool, var_38_cvector);
	var_37_bool = var_33_bool;
	return 2;
}


func_1725(var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0;
	IsLoaded(var_31_bool);
	var_31_bool = var_29_bool;
	return 2;
}


func_1730(var_61_bool, var_62_object, var_63_float)
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
	func_2014(var_88_cvector, var_89_cvector);
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
	func_2086(var_104_bool);
	if(var_104_bool != 0) {
	} else {
		HasAnimationTrack(var_81_bool, "head");
		var_106_bool = var_81_bool;
		if(var_106_bool == 0) goto Label_1793;
		LookAsyncCamera("head");
	}
Label_1793:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_61_bool = 1;
	return 18;
	
}


func_1986(var_156_bool, var_157_string)
{
	var_158_bool = 0; var_159_bool = 0;
	var_160_bool = 0;
	func_2086(var_160_bool);
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


func_2116()
{
	SetVariable("oob6Viktor1", (int)1);
	return 0;
}


func_2247(var_38_object)
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


func_2122()
{
	var_36_object = Obj(); var_37_object = Obj();
	func_2247(Obj());
	var_38_object = var_37_object;
	var_49_float = 0;
	func_2058(var_49_float);
	@@var_37_object:AddMark("b6q03ViktorGotoMaria", "pt_map_maria", (int)3, (int)521341, var_49_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2001()
{
	var_31_bool = 0;
	func_2086(var_31_bool);
	if(var_31_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1234(var_0_object, var_1_object, var_2_object, var_3_string, var_459_object, var_460_object)
{
	var_0_object = var_460_object;
	var_1_object = var_459_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_466_string = "";
		func_1297(var_460_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_1267;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4d6";
	}
Label_1267:
	var_484_bool = 0;
	func_2086(var_484_bool);
	if(var_484_bool != 0) {

	Label_1271:
		lshWaitForAnimEnd();
		var_485_string = var_3_string;
		if(var_485_string != 0) {
		} else {
			var_486_string = "";
			var_486_string = var_2_object;
			func_1955(var_486_string);
			goto Label_1271;
	}
		PlayAnimation("all", "idle");

	Label_1286:
		WaitForAnimEnd();
		var_489_string = var_3_string;
		if(var_489_string != 0) {
			goto Label_1296;
		}
		PlayAnimation("all", "idle");
		goto Label_1286;
	}
	goto Label_1296;
	
Label_1296:
	return 0;
	
}


func_1875(var_133_bool, var_134_object)
{
	var_135_string = ""; var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_string = ""; var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = "";
	var_140_string = "c";
	var_141_int = 0;
	
Label_1878:
	if((int)1 != 0) {
		var_147_int = var_141_int + (int)1;
		var_148_int = var_140_string + var_147_int;
		@@var_134_object:HasProperty(var_148_int, var_142_bool);
		var_149_bool = var_142_bool == 0; //@nz
		if(var_149_bool != 0) {
		} else {
			var_141_int = var_141_int + (int)1;
			goto Label_1878;
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
	func_1986(var_156_bool, var_157_string);
	var_156_bool = var_133_bool;
	return 10;
	
}


func_721(var_0_object, var_279_int, var_280_object)
{
	var_282_object = Obj(); var_283_bool = 0; var_284_int = 0; var_285_bool = 0; var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0;
	var_0_object = var_280_object;
	var_290_bool = 0; var_291_object = Obj(); var_292_float = 0;
	var_280_object = var_291_object;
	func_1730(var_290_bool, var_291_object, (float)70.0);
	var_293_bool = var_290_bool == 0; //@nz
	if(var_293_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	CreateDialog(var_286_object);
	var_294_int = 0;
	func_2080(var_294_int);
	@@var_286_object:SetNPCName(var_294_int);
	var_295_int = 0;
	func_2078(var_295_int);
	@@var_286_object:SetNPCDescription(var_295_int);
	var_296_string = "";
	func_2082(var_296_string);
	@@var_286_object:SetPhoto(var_296_string);
	var_297_string = "";
	func_2084(var_297_string);
	@@var_286_object:SetPhoto2(var_297_string);
	var_298_int = 0;
	func_2264(var_298_int);
	@@var_286_object:SetPlayerName(var_298_int);
	IsOverrideActive(var_287_bool);
	var_299_bool = var_287_bool;
	if(var_299_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	DoDialog(var_286_object);
	var_300_bool = 0; var_301_object = Obj();
	func_2008(Obj());
	var_302_object = var_301_object;
	func_1817(var_300_bool, var_301_object);
	var_303_object = Obj(); var_304_object = Obj();
	var_280_object = var_303_object;
	var_286_object = var_304_object;
	TaskCall(6);
	func_802(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object);
	TaskReturn();
	@@var_286_object:IsDialogEnd(var_289_bool);
	
Label_784:
	var_359_bool = var_289_bool == 0; //@nz
	if(var_359_bool != 0) {
		sync();
		@@var_286_object:IsDialogEnd(var_289_bool);
		goto Label_784;
	}
	var_280_object = Obj();
	func_1799();
	StopDialog(var_286_object);
	@@var_286_object:GetReturnValue((int)-1);
	var_288_int = var_279_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1493(var_0_object, var_1_object, var_2_object, var_3_string, var_519_object, var_520_object)
{
	var_0_object = var_520_object;
	var_1_object = var_519_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_526_string = "";
		func_1551(var_520_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_1521;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5d9";
	}
Label_1521:
	var_541_bool = 0;
	func_2086(var_541_bool);
	if(var_541_bool != 0) {

	Label_1525:
		lshWaitForAnimEnd();
		var_542_string = var_3_string;
		if(var_542_string != 0) {
		} else {
			var_543_string = "";
			var_543_string = var_2_object;
			func_1955(var_543_string);
			goto Label_1525;
	}
		PlayAnimation("all", "idle");

	Label_1540:
		WaitForAnimEnd();
		var_546_string = var_3_string;
		if(var_546_string != 0) {
			goto Label_1550;
		}
		PlayAnimation("all", "idle");
		goto Label_1540;
	}
	goto Label_1550;
	
Label_1550:
	return 0;
	
}


func_343(var_0_object, var_1_object, var_2_object, var_3_string, var_387_object, var_388_object)
{
	var_0_object = var_388_object;
	var_1_object = var_387_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_394_bool = 0; var_395_object = Obj();
		var_395_object = var_1_object;
		func_2181(var_395_object);
		if(var_394_bool != 0) {
			var_400_string = "";
			func_421(var_388_object, "Anger");
			@@@var_0_object:SetMessage((int)521037);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528490, (int)29880, (int)29879);
			@@@var_0_object:AddReply((int)528510, (int)29882, (int)29899);
		} else {
				var_423_string = "";
				func_421(var_388_object, "Neutral");
				@@@var_0_object:SetMessage((int)521039);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521040, (int)-1, (int)22236);
				goto Label_391;
		}
	}
Label_391:
	var_415_bool = 0;
	func_2086(var_415_bool);
	if(var_415_bool != 0) {

	Label_395:
		lshWaitForAnimEnd();
		var_416_string = var_3_string;
		if(var_416_string != 0) {
		} else {
			var_417_string = "";
			var_417_string = var_2_object;
			func_1955(var_417_string);
			goto Label_395;
	}
		PlayAnimation("all", "idle");

	Label_410:
		WaitForAnimEnd();
		var_420_string = var_3_string;
		if(var_420_string != 0) {
			goto Label_420;
		}
		PlayAnimation("all", "idle");
		goto Label_410;

	}
	goto Label_420;
	
Label_420:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x15b";


func_2008(var_124_object)
{
	var_125_object = Obj(); var_126_object = Obj();
	self(var_126_object);
	var_126_object = var_124_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2264(var_113_int)
{
	var_114_int = 0; var_115_int = 0;
	GetVariable("branch", var_115_int);
	var_118_bool = var_115_int == (int)0;
	if(var_118_bool != 0) {
		var_113_int = 1;
		return 2;
	EMIT "GOTO 0x8e7";
	}
	var_120_bool = var_115_int == (int)1;
	if(var_120_bool != 0) {
		var_113_int = 2;
		return 2;
	}
	var_113_int = 3;
	return 2;
}


func_2138()
{
	var_58_string = ""; var_59_bool = 0;
	func_2029("cot_maria@door1", (bool)0);
	return 0;
}


func_94(var_0_object, var_1_object, var_2_object, var_3_string, var_217_object, var_218_object)
{
	var_0_object = var_218_object;
	var_1_object = var_217_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_224_string = "";
		func_152(var_218_object, "Neutral");
		@@@var_0_object:SetMessage((int)518051);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518052, (int)29827, (int)19185);
		@@@var_0_object:AddReply((int)528440, (int)-1, (int)29826);
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	var_248_bool = 0;
	func_2086(var_248_bool);
	if(var_248_bool != 0) {

	Label_126:
		lshWaitForAnimEnd();
		var_249_string = var_3_string;
		if(var_249_string != 0) {
		} else {
			var_250_string = "";
			var_250_string = var_2_object;
			func_1955(var_250_string);
			goto Label_126;
	}
		PlayAnimation("all", "idle");

	Label_141:
		WaitForAnimEnd();
		var_263_string = var_3_string;
		if(var_263_string != 0) {
			goto Label_151;
		}
		PlayAnimation("all", "idle");
		goto Label_141;
	}
	goto Label_151;
	
Label_151:
	return 0;
	
}


func_1630(var_0_object, var_1_object, var_2_object)
{
	GetPosition(var_1_object);
	GetDirection(var_2_object);
	var_0_object = false;
	var_29_bool = 0;
	func_1725(var_29_bool);
	var_32_bool = var_29_bool == 0; //@nz
	if(var_32_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
		func_1658(var_25_bool, var_26_cvector, var_27_cvector);
	}
Label_1648:
	var_38_string = "";
	func_1955("Neutral");
	lshWaitForAnimEnd();
	goto Label_1648;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_2014(var_88_cvector, var_89_cvector)
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


func_2145()
{
	SetVariable("b6ViktorVisit", (int)1);
	return 0;
}


func_2151()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_2024(var_313_int, var_314_string)
{
	var_315_int = 0; var_316_int = 0;
	GetVariable(var_314_string, var_316_int);
	var_316_int = var_313_int;
	return 2;
}


func_2281(var_47_object)
{
	var_48_bool = GlobalVars[1];
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_50_int = 0; var_51_object = Obj();
		var_47_object = var_51_object;
		TaskCall(1);
		func_13(var_52_object, var_50_int, var_51_object);
		TaskReturn();
		var_275_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_276_bool = 0; var_277_int = 0;
	func_2072(var_276_bool, (int)6);
	if(var_276_bool != 0) {
		var_279_int = 0; var_280_object = Obj();
		var_47_object = var_280_object;
		TaskCall(5);
		func_721(var_281_object, var_279_int, var_280_object);
		TaskReturn();
		return 0;
	}
	var_361_bool = 0; var_362_int = 0;
	func_2072(var_361_bool, (int)7);
	if(var_361_bool != 0) {
		var_363_int = 0; var_364_object = Obj();
		var_47_object = var_364_object;
		TaskCall(3);
		func_262(var_365_object, var_363_int, var_364_object);
		TaskReturn();
		return 0;
	}
	var_430_bool = 0;
	var_430_bool = 0;
	var_431_bool = 0; var_432_int = 0;
	func_2072(var_431_bool, (int)12);
	if(var_431_bool != 0) {
		var_433_bool = GlobalVars[2];
		var_434_bool = var_433_bool == 0; //@nz
		if(var_434_bool != 0) {
			var_430_bool = 1;
		}
	}
	if(var_430_bool != 0) {
		var_435_int = 0; var_436_object = Obj();
		var_47_object = var_436_object;
		TaskCall(7);
		func_1153(var_437_object, var_435_int, var_436_object);
		TaskReturn();
		var_494_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
		return 0;
	}
	var_495_int = 0; var_496_object = Obj();
	var_47_object = var_496_object;
	TaskCall(9);
	func_1412(var_497_object, var_495_int, var_496_object);
	TaskReturn();
	return 0;
}


func_2157(var_311_bool)
{
	var_313_int = 0; var_314_string = "";
	func_2024(var_313_int, "b6q03NinaTalk");
	var_318_bool = var_313_int != (int)0;
	if(var_318_bool != 0) {
		var_311_bool = 1;
		return 0;
	}
	var_311_bool = 0;
	return 0;
}


func_2029(var_58_string, var_59_bool)
{
	var_60_object = Obj(); var_61_object = Obj();
	FindActor(var_61_object, var_58_string);
	var_62_bool = var_61_object == 0; //@nz
	if(var_62_bool != 0) {
		var_64_int = "Door " + var_58_string;
		var_66_int = var_64_int + " not found";
		Trace(var_66_int);
	} else {
		@@var_61_object:SetProperty("locked", var_59_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_1912(var_164_bool, var_165_object)
{
	var_166_string = ""; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_string = ""; var_171_string = ""; var_172_int = 0; var_173_bool = 0; var_174_int = 0; var_175_string = "";
	var_177_int = 0;
	func_2063(var_177_int);
	var_183_int = "d" + var_177_int;
	var_171_string = var_183_int + "m";
	var_172_int = 0;
	
Label_1921:
	if((int)1 != 0) {
		var_187_int = var_172_int + (int)1;
		var_188_int = var_171_string + var_187_int;
		@@var_165_object:HasProperty(var_188_int, var_173_bool);
		var_189_bool = var_173_bool == 0; //@nz
		if(var_189_bool != 0) {
		} else {
			var_172_int = var_172_int + (int)1;
			goto Label_1921;
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
	func_1986(var_196_bool, var_197_string);
	var_196_bool = var_164_bool;
	return 10;
	
}


func_2169(var_320_bool)
{
	var_322_int = 0; var_323_string = "";
	func_2024(var_322_int, "oob6Viktor1");
	var_325_bool = var_322_int == (int)0;
	if(var_325_bool != 0) {
		var_320_bool = 1;
		return 0;
	}
	var_320_bool = 0;
	return 0;
}


func_1658(var_0_object, var_1_object, var_2_object)
{
	SetPosition(var_1_object);
	SetDirection(var_2_object);
	var_0_object = false;
	LockAnimation("all", "stand", (int)0);
	return 0;
}


func_2046(var_77_bool, var_78_string, var_79_string)
{
	var_80_object = Obj(); var_81_object = Obj();
	FindActor(var_81_object, var_78_string);
	var_82_bool = var_81_object == 0; //@ne
	if(var_82_bool != 0) {
		var_77_bool = 0;
		return 2;
	}
	Trigger(var_81_object, var_79_string);
	var_77_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_895(var_2_object, var_334_string)
{
	var_335_bool = 0;
	func_2086(var_335_bool);
	var_336_bool = var_335_bool == 0; //@nz
	if(var_336_bool != 0) {
		return 0;
	}
	var_337_bool = var_334_string == var_2_object;
	if(var_337_bool != 0) {
		return 0;
	}
	var_338_string = ""; var_339_bool = 0;
	var_334_string = var_338_string;
	var_341_bool = var_334_string == "";
	if(var_341_bool != 0) {
		var_339_bool = 0;
	} else {
		var_339_bool = 1;
	}
	func_1971(var_338_string, var_339_bool);
	var_2_object = var_334_string;
	return 0;
	
}


