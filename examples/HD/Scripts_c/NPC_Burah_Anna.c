// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Fear|W:Rage|W:Adoration|W:Dream|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:Can't find lsh animation : |A:add|W:money|W:Money|W:ui/NPC_Anna.png|W:ui/NPC_Anna_b.png|W:b5q01_1|W:money10000 is given|W:playsound|W:givemoney|W:oob6Anna1|W:money3000 is given|W:b5q01TalkToVera|W:b5q01VeraDead|W:branch
// @GLOBALS: 0:object:,1:bool:,2:bool:
// @RUN_OP: 0x61a
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a4 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3b9 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4f2 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5f0 vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0x666 vars=int
// @EVENT_6: op=0x68c vars=
// @EVENT_5: op=0x69b vars=
// @EVENT_45: op=0x6a8 vars=bool
// @EVENT_0: op=0x6b4 vars=object
// @PE: 0x51,0x8b,0xa1,0x133,0x18e,0x1a4,0x364,0x3a3,0x3b9,0x49d,0x4dc,0x4f2,0x5a0,0x5da,0x5f0,0x666,0x68c,0x6a8,0x897,0x8bf,0x8c5,0x8cb,0x8d5,0x8db,0x8e1,0x8eb,0x8f7,0x903,0x90f,0x91b,0x938

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2131();
		var_31_bool = var_26_bool == (int)19130;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_139(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)517997);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517998, (int)29658, (int)19131);
			@@@var_0_object:AddReply((int)528292, (int)29658, (int)29657);
			return 0;
		}
		var_57_bool = var_26_bool == (int)29658;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_139(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528294, (int)-1, (int)29660);
			@@@var_0_object:AddReply((int)528295, (int)-1, (int)29661);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_2237(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2131();
		var_31_bool = var_27_cvector == (int)19739;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2239();
		}
		var_37_bool = var_27_cvector == (int)19745;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_object;
			func_2245();
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_2251(var_43_object);
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_2261();
		}
		var_68_bool = var_27_cvector == (int)19824;
		if(var_68_bool != 0) {
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_2245();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_2273(var_72_object);
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_2261();
		}
		var_79_bool = var_26_bool == (int)19738;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_398(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)518646);
			@@@var_0_object:ClearReplies();
			var_98_bool = 0;
			var_98_bool = 0;
			var_99_bool = 0; var_100_object = Obj();
			var_100_object = var_1_object;
			func_2295(var_100_object);
			if(var_99_bool != 0) {
				var_107_bool = 0; var_108_object = Obj();
				var_108_object = var_1_object;
				func_2319(var_108_object);
				if(var_107_bool != 0) {
					var_98_bool = 1;
				}
			}
			if(var_98_bool != 0) {
				@@@var_0_object:AddReply((int)518647, (int)19740, (int)19739);
			}
			var_116_bool = 0;
			var_116_bool = 0;
			var_117_bool = 0; var_118_object = Obj();
			var_118_object = var_1_object;
			func_2307(var_118_object);
			if(var_117_bool != 0) {
				var_123_bool = 0; var_124_object = Obj();
				var_124_object = var_1_object;
				func_2331(var_124_object);
				if(var_123_bool != 0) {
					var_116_bool = 1;
				}
			}
			if(var_116_bool != 0) {
				@@@var_0_object:AddReply((int)518651, (int)19744, (int)19743);
			}
			@@@var_0_object:AddReply((int)518654, (int)-1, (int)19746);
			return 0;
		}
		var_136_bool = var_26_bool == (int)19744;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_398(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)518652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518720, (int)19815, (int)19811);
			@@@var_0_object:AddReply((int)518722, (int)-1, (int)19813);
			@@@var_0_object:AddReply((int)518732, (int)-1, (int)19824);
			return 0;
		}
		var_149_bool = var_26_bool == (int)19815;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_398(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)518724);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518725, (int)19817, (int)19816);
			@@@var_0_object:AddReply((int)518727, (int)19819, (int)19818);
			return 0;
		}
		var_159_bool = var_26_bool == (int)19819;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_398(var_27_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)518728);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518729, (int)19817, (int)19820);
			return 0;
		}
		var_166_bool = var_26_bool == (int)19817;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_398(var_27_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)518726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518730, (int)-1, (int)19822);
			@@@var_0_object:AddReply((int)518653, (int)-1, (int)19745);
			return 0;
		}
		var_176_bool = var_26_bool == (int)19740;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_398(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)518648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518649, (int)19826, (int)19741);
			return 0;
		}
		var_183_bool = var_26_bool == (int)19826;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_398(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)518734);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518735, (int)19830, (int)19827);
			@@@var_0_object:AddReply((int)518736, (int)19829, (int)19828);
			var_192_bool = 0; var_193_object = Obj();
			var_193_object = var_1_object;
			func_2307(var_193_object);
			if(var_192_bool != 0) {
				@@@var_0_object:AddReply((int)531552, (int)19744, (int)32915);
			}
			return 0;
		}
		var_198_bool = var_26_bool == (int)19829;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_398(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)518737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528296, (int)29663, (int)29662);
			@@@var_0_object:AddReply((int)518742, (int)-1, (int)19834);
			return 0;
		}
		var_208_bool = var_26_bool == (int)29663;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_398(var_27_cvector, "Dream");
			@@@var_0_object:SetMessage((int)528297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518741, (int)19835, (int)19833);
			return 0;
		}
		var_215_bool = var_26_bool == (int)19835;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_398(var_27_cvector, "Dream");
			@@@var_0_object:SetMessage((int)518743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518744, (int)19837, (int)19836);
			return 0;
		}
		var_222_bool = var_26_bool == (int)19837;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_398(var_27_cvector, "Dream");
			@@@var_0_object:SetMessage((int)518745);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518746, (int)-1, (int)19838);
			@@@var_0_object:AddReply((int)518747, (int)-1, (int)19839);
			return 0;
		}
		var_232_bool = var_26_bool == (int)19830;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_398(var_27_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)518738);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518739, (int)-1, (int)19831);
			@@@var_0_object:AddReply((int)518740, (int)-1, (int)19832);
			return 0;
		}
		var_3_string = true;
		var_241_bool = 0;
		func_2237(var_241_bool);
		if(var_241_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2131();
		var_31_bool = var_27_cvector == (int)32175;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2267();
		}
		var_37_bool = var_26_bool == (int)32173;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_931(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530857);
			@@@var_0_object:ClearReplies();
			var_56_bool = 0; var_57_object = Obj();
			var_57_object = var_1_object;
			func_2283(var_57_object);
			if(var_56_bool != 0) {
				@@@var_0_object:AddReply((int)530859, (int)32176, (int)32175);
			}
			@@@var_0_object:AddReply((int)530858, (int)-1, (int)32174);
			return 0;
		}
		var_71_bool = var_26_bool == (int)32176;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_931(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)530860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530861, (int)32179, (int)32177);
			@@@var_0_object:AddReply((int)530862, (int)32185, (int)32178);
			return 0;
		}
		var_81_bool = var_26_bool == (int)32179;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_931(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)530863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530864, (int)32182, (int)32180);
			@@@var_0_object:AddReply((int)530865, (int)32185, (int)32181);
			return 0;
		}
		var_91_bool = var_26_bool == (int)32182;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_931(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)530866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530867, (int)32185, (int)32183);
			@@@var_0_object:AddReply((int)530868, (int)32185, (int)32184);
			return 0;
		}
		var_101_bool = var_26_bool == (int)32185;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_931(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)530870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530871, (int)-1, (int)32189);
			@@@var_0_object:AddReply((int)530872, (int)-1, (int)32190);
			return 0;
		}
		var_3_string = true;
		var_110_bool = 0;
		func_2237(var_110_bool);
		if(var_110_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3ba";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2131();
		var_31_bool = var_26_bool == (int)36971;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1244(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_60_bool = var_26_bool == (int)36973;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_1244(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_70_bool = var_26_bool == (int)36975;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_1244(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_79_bool = 0;
		func_2237(var_79_bool);
		if(var_79_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4f3";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_2131();
		var_31_bool = var_26_int == (int)42560;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1498(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_2237(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5f1";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_1634();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_1855(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_1603(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_1583(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_2138(Obj());
				var_72_object = var_71_object;
				func_2005(var_70_bool, var_71_object);
			}
		} else {
			func_1598(var_26_int);
			func_1625();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1816();
	func_1634();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_1634();
	var_27_string = "";
	func_2085("Neutral");
	func_1625();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_1625();
	} else {
		var_33_string = "";
		func_2085("Neutral");
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
		func_1816();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_1846(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_2360(var_44_object);
		var_548_string = "";
		func_2085("Neutral");
		func_1634();
		func_1625();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	var_26_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1569(var_25_cvector);
	return 0;
}


func_0(var_0_object, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0;
	var_0_object = var_48_object;
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0;
	var_48_object = var_59_object;
	func_1860(var_58_bool, var_59_object, (float)70.0);
	var_105_bool = var_58_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	CreateDialog(var_54_object);
	var_106_int = 0;
	func_2231(var_106_int);
	@@var_54_object:SetNPCName(var_106_int);
	var_107_int = 0;
	func_2229(var_107_int);
	@@var_54_object:SetNPCDescription(var_107_int);
	var_108_string = "";
	func_2233(var_108_string);
	@@var_54_object:SetPhoto(var_108_string);
	var_109_string = "";
	func_2235(var_109_string);
	@@var_54_object:SetPhoto2(var_109_string);
	var_110_int = 0;
	func_2343(var_110_int);
	@@var_54_object:SetPlayerName(var_110_int);
	IsOverrideActive(var_55_bool);
	var_118_bool = var_55_bool;
	if(var_118_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	DoDialog(var_54_object);
	var_119_bool = 0; var_120_object = Obj();
	func_2138(Obj());
	var_121_object = var_120_object;
	func_1947(var_119_bool, var_120_object);
	var_214_object = Obj(); var_215_object = Obj();
	var_48_object = var_214_object;
	var_54_object = var_215_object;
	TaskCall(1);
	func_81(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object);
	TaskReturn();
	@@var_54_object:IsDialogEnd(var_57_bool);
	
Label_63:
	var_263_bool = var_57_bool == 0; //@nz
	if(var_263_bool != 0) {
		sync();
		@@var_54_object:IsDialogEnd(var_57_bool);
		goto Label_63;
	}
	var_48_object = Obj();
	func_1929();
	StopDialog(var_54_object);
	@@var_54_object:GetReturnValue((int)-1);
	var_56_int = var_47_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2307(var_335_bool)
{
	var_337_int = 0; var_338_string = "";
	func_2154(var_337_int, "b5q01VeraDead");
	var_340_bool = var_337_int != (int)0;
	if(var_340_bool != 0) {
		var_335_bool = 1;
		return 0;
	}
	var_335_bool = 0;
	return 0;
}


func_2319(var_325_bool)
{
	var_327_int = 0; var_328_string = "";
	func_2154(var_327_int, "b5q01_1");
	var_330_bool = var_327_int == (int)0;
	if(var_330_bool != 0) {
		var_325_bool = 1;
		return 0;
	}
	var_325_bool = 0;
	return 0;
}


func_787(var_0_object, var_365_int, var_366_object)
{
	var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0;
	var_0_object = var_366_object;
	var_376_bool = 0; var_377_object = Obj(); var_378_float = 0;
	var_366_object = var_377_object;
	func_1860(var_376_bool, var_377_object, (float)70.0);
	var_379_bool = var_376_bool == 0; //@nz
	if(var_379_bool != 0) {
		var_365_int = -2;
		return 8;
	}
	CreateDialog(var_372_object);
	var_380_int = 0;
	func_2231(var_380_int);
	@@var_372_object:SetNPCName(var_380_int);
	var_381_int = 0;
	func_2229(var_381_int);
	@@var_372_object:SetNPCDescription(var_381_int);
	var_382_string = "";
	func_2233(var_382_string);
	@@var_372_object:SetPhoto(var_382_string);
	var_383_string = "";
	func_2235(var_383_string);
	@@var_372_object:SetPhoto2(var_383_string);
	var_384_int = 0;
	func_2343(var_384_int);
	@@var_372_object:SetPlayerName(var_384_int);
	IsOverrideActive(var_373_bool);
	var_385_bool = var_373_bool;
	if(var_385_bool != 0) {
		var_365_int = -2;
		return 8;
	}
	DoDialog(var_372_object);
	var_386_bool = 0; var_387_object = Obj();
	func_2138(Obj());
	var_388_object = var_387_object;
	func_1947(var_386_bool, var_387_object);
	var_389_object = Obj(); var_390_object = Obj();
	var_366_object = var_389_object;
	var_372_object = var_390_object;
	TaskCall(5);
	func_868(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object);
	TaskReturn();
	@@var_372_object:IsDialogEnd(var_375_bool);
	
Label_850:
	var_425_bool = var_375_bool == 0; //@nz
	if(var_425_bool != 0) {
		sync();
		@@var_372_object:IsDialogEnd(var_375_bool);
		goto Label_850;
	}
	var_366_object = Obj();
	func_1929();
	StopDialog(var_372_object);
	@@var_372_object:GetReturnValue((int)-1);
	var_374_int = var_365_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1814(var_65_bool)
{
	var_65_bool = 1;
	return 0;
}


func_1816()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2331(var_341_bool)
{
	var_343_int = 0; var_344_string = "";
	func_2154(var_343_int, "b5q01_1");
	var_346_bool = var_343_int == (int)1;
	if(var_346_bool != 0) {
		var_341_bool = 1;
		return 0;
	}
	var_341_bool = 0;
	return 0;
}


func_1821(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_1569(var_0_object)
{
	var_27_bool = 0;
	func_1855(var_27_bool);
	var_30_bool = var_27_bool == 0; //@nz
	if(var_30_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1578:
	func_1745();
	goto Label_1578;
}
EMIT "Return(); Pop(0)";


func_2085(var_247_string)
{
	var_248_bool = 0; var_249_float = 0; var_250_float = 0; var_251_bool = 0; var_252_float = 0; var_253_float = 0;
	lshHasAnimation(var_251_bool, var_247_string);
	var_254_bool = var_251_bool;
	if(var_254_bool != 0) {
		lshGetAnimTimes(var_247_string, var_252_float, var_253_float);
		lshPlayAnimation(var_252_float, var_253_float, (bool)0);
	} else {
		var_257_int = "Can't find lsh animation : " + var_247_string;
		Trace(var_257_int);
	}
	return 6;
	
}


func_1829(var_49_object, var_50_string, var_51_int)
{
	var_52_int = 0; var_53_int = 0;
	@@var_49_object:GetProperty(var_50_string, var_53_int);
	var_54_int = var_53_int + var_51_int;
	@@var_49_object:SetProperty(var_50_string, var_54_int);
	return 2;
}


func_2343(var_110_int)
{
	var_111_int = 0; var_112_int = 0;
	GetVariable("branch", var_112_int);
	var_115_bool = var_112_int == (int)0;
	if(var_115_bool != 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0x936";
	}
	var_117_bool = var_112_int == (int)1;
	if(var_117_bool != 0) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
	return 2;
}


func_1836(var_34_bool, var_35_cvector)
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


func_1583(var_51_bool)
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
	func_1846(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_300_object, var_301_object)
{
	var_0_object = var_301_object;
	var_1_object = var_300_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_307_string = "";
		func_398(var_301_object, "Fear");
		@@@var_0_object:SetMessage((int)518646);
		@@@var_0_object:ClearReplies();
		var_316_bool = 0;
		var_316_bool = 0;
		var_317_bool = 0; var_318_object = Obj();
		var_318_object = var_1_object;
		func_2295(var_318_object);
		if(var_317_bool != 0) {
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_2319(var_326_object);
			if(var_325_bool != 0) {
				var_316_bool = 1;
			}
		}
		if(var_316_bool != 0) {
			@@@var_0_object:AddReply((int)518647, (int)19740, (int)19739);
		}
		var_334_bool = 0;
		var_334_bool = 0;
		var_335_bool = 0; var_336_object = Obj();
		var_336_object = var_1_object;
		func_2307(var_336_object);
		if(var_335_bool != 0) {
			var_341_bool = 0; var_342_object = Obj();
			var_342_object = var_1_object;
			func_2331(var_342_object);
			if(var_341_bool != 0) {
				var_334_bool = 1;
			}
		}
		if(var_334_bool != 0) {
			@@@var_0_object:AddReply((int)518651, (int)19744, (int)19743);
		}
		@@@var_0_object:AddReply((int)518654, (int)-1, (int)19746);
		goto Label_368;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x137";
	}
Label_368:
	var_353_bool = 0;
	func_2237(var_353_bool);
	if(var_353_bool != 0) {

	Label_372:
		lshWaitForAnimEnd();
		var_354_string = var_3_string;
		if(var_354_string != 0) {
		} else {
			var_355_string = "";
			var_355_string = var_2_object;
			func_2085(var_355_string);
			goto Label_372;
	}
		PlayAnimation("all", "idle");

	Label_387:
		WaitForAnimEnd();
		var_358_string = var_3_string;
		if(var_358_string != 0) {
			goto Label_397;
		}
		PlayAnimation("all", "idle");
		goto Label_387;
	}
	goto Label_397;
	
Label_397:
	return 0;
	
}


func_2101(var_225_string, var_226_bool)
{
	var_229_bool = 0; var_230_float = 0; var_231_float = 0; var_232_bool = 0; var_233_float = 0; var_234_float = 0;
	lshHasAnimation(var_232_bool, var_225_string);
	var_235_bool = var_232_bool;
	if(var_235_bool != 0) {
		lshGetAnimTimes(var_225_string, var_233_float, var_234_float);
		lshPlayAnimation(var_233_float, var_234_float, var_226_bool);
	} else {
		var_237_int = "Can't find lsh animation : " + var_225_string;
		Trace(var_237_int);
	}
	return 6;
	
}


func_1846(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_1836(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_2360(var_44_object)
{
	var_45_bool = GlobalVars[1];
	var_46_bool = var_45_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_47_int = 0; var_48_object = Obj();
		var_44_object = var_48_object;
		TaskCall(0);
		func_0(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_272_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_273_bool = 0; var_274_int = 0;
	func_2199(var_273_bool, (int)5);
	if(var_273_bool != 0) {
		var_276_int = 0; var_277_object = Obj();
		var_44_object = var_277_object;
		TaskCall(2);
		func_226(var_278_object, var_276_int, var_277_object);
		TaskReturn();
		return 0;
	}
	var_363_bool = 0; var_364_int = 0;
	func_2199(var_363_bool, (int)6);
	if(var_363_bool != 0) {
		var_365_int = 0; var_366_object = Obj();
		var_44_object = var_366_object;
		TaskCall(4);
		func_787(var_367_object, var_365_int, var_366_object);
		TaskReturn();
		return 0;
	}
	var_427_bool = 0;
	var_427_bool = 0;
	var_428_bool = 0; var_429_int = 0;
	func_2199(var_428_bool, (int)12);
	if(var_428_bool != 0) {
		var_430_bool = GlobalVars[2];
		var_431_bool = var_430_bool == 0; //@nz
		if(var_431_bool != 0) {
			var_427_bool = 1;
		}
	}
	if(var_427_bool != 0) {
		var_432_int = 0; var_433_object = Obj();
		var_44_object = var_433_object;
		TaskCall(6);
		func_1100(var_434_object, var_432_int, var_433_object);
		TaskReturn();
		var_491_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
		return 0;
	}
	var_492_int = 0; var_493_object = Obj();
	var_44_object = var_493_object;
	TaskCall(8);
	func_1359(var_494_object, var_492_int, var_493_object);
	TaskReturn();
	return 0;
}


func_1598(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_1855(var_27_bool)
{
	var_28_bool = 0; var_29_bool = 0;
	IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
	return 2;
}


func_1603(var_34_bool)
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
	func_1821(var_41_float, var_42_object);
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


func_1860(var_58_bool, var_59_object, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0;
	@@var_59_object:GetPosition(var_71_cvector);
	@@var_59_object:GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	var_79_float = var_79_float + var_70_float;
	SetByIndex(var_71_cvector, 1) = var_79_float;
	GetPosition(var_72_cvector);
	GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	var_80_float = var_80_float + var_70_float;
	SetByIndex(var_72_cvector, 1) = var_80_float;
	var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_82_int = var_73_cvector | var_73_cvector;
	var_83_float = sqrt(var_82_int);
	var_73_cvector = var_73_cvector / var_83_float;
	var_74_cvector = -var_73_cvector;
	var_84_float = var_73_cvector * var_60_float;
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_86_cvector = var_74_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2144(var_85_cvector, var_86_cvector);
	var_94_float = var_85_cvector * (int)25;
	var_95_int = var_84_float + var_94_float;
	var_75_cvector = var_95_int - CVector(0.0, 10.0, 0.0);
	var_76_cvector = var_72_cvector + var_75_cvector;
	IsOverrideActive(var_77_bool);
	var_97_bool = var_77_bool;
	if(var_97_bool != 0) {
		var_58_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_76_cvector, var_74_cvector, (bool)1);
	var_99_float = GetByIndex(var_75_cvector, 0);
	var_100_float = GetByIndex(var_75_cvector, 2);
	Rotate(var_99_float, var_100_float);
	var_101_bool = 0;
	func_2237(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		HasAnimationTrack(var_78_bool, "head");
		var_103_bool = var_78_bool;
		if(var_103_bool == 0) goto Label_1923;
		LookAsyncCamera("head");
	}
Label_1923:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_58_bool = 1;
	return 18;
	
}


func_2116(var_153_bool, var_154_string)
{
	var_155_bool = 0; var_156_bool = 0;
	var_157_bool = 0;
	func_2237(var_157_bool);
	if(var_157_bool != 0) {
		lshHasSpeech(var_156_bool, var_154_string);
		var_158_bool = var_156_bool;
		if(var_158_bool != 0) {
			lshPlaySpeech(var_154_string);
			var_153_bool = 1;
			return 2;
		}
	}
	var_153_bool = 0;
	return 2;
}


func_1100(var_0_object, var_432_int, var_433_object)
{
	var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0; var_439_object = Obj(); var_440_bool = 0; var_441_int = 0; var_442_bool = 0;
	var_0_object = var_433_object;
	var_443_bool = 0; var_444_object = Obj(); var_445_float = 0;
	var_433_object = var_444_object;
	func_1860(var_443_bool, var_444_object, (float)70.0);
	var_446_bool = var_443_bool == 0; //@nz
	if(var_446_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	CreateDialog(var_439_object);
	var_447_int = 0;
	func_2231(var_447_int);
	@@var_439_object:SetNPCName(var_447_int);
	var_448_int = 0;
	func_2229(var_448_int);
	@@var_439_object:SetNPCDescription(var_448_int);
	var_449_string = "";
	func_2233(var_449_string);
	@@var_439_object:SetPhoto(var_449_string);
	var_450_string = "";
	func_2235(var_450_string);
	@@var_439_object:SetPhoto2(var_450_string);
	var_451_int = 0;
	func_2343(var_451_int);
	@@var_439_object:SetPlayerName(var_451_int);
	IsOverrideActive(var_440_bool);
	var_452_bool = var_440_bool;
	if(var_452_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	DoDialog(var_439_object);
	var_453_bool = 0; var_454_object = Obj();
	func_2138(Obj());
	var_455_object = var_454_object;
	func_1947(var_453_bool, var_454_object);
	var_456_object = Obj(); var_457_object = Obj();
	var_433_object = var_456_object;
	var_439_object = var_457_object;
	TaskCall(7);
	func_1181(var_458_object, var_459_object, var_460_string, var_461_bool, var_456_object, var_457_object);
	TaskReturn();
	@@var_439_object:IsDialogEnd(var_442_bool);
	
Label_1163:
	var_489_bool = var_442_bool == 0; //@nz
	if(var_489_bool != 0) {
		sync();
		@@var_439_object:IsDialogEnd(var_442_bool);
		goto Label_1163;
	}
	var_433_object = Obj();
	func_1929();
	StopDialog(var_439_object);
	@@var_439_object:GetReturnValue((int)-1);
	var_441_int = var_432_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1359(var_0_object, var_492_int, var_493_object)
{
	var_495_object = Obj(); var_496_bool = 0; var_497_int = 0; var_498_bool = 0; var_499_object = Obj(); var_500_bool = 0; var_501_int = 0; var_502_bool = 0;
	var_0_object = var_493_object;
	var_503_bool = 0; var_504_object = Obj(); var_505_float = 0;
	var_493_object = var_504_object;
	func_1860(var_503_bool, var_504_object, (float)70.0);
	var_506_bool = var_503_bool == 0; //@nz
	if(var_506_bool != 0) {
		var_492_int = -2;
		return 8;
	}
	CreateDialog(var_499_object);
	var_507_int = 0;
	func_2231(var_507_int);
	@@var_499_object:SetNPCName(var_507_int);
	var_508_int = 0;
	func_2229(var_508_int);
	@@var_499_object:SetNPCDescription(var_508_int);
	var_509_string = "";
	func_2233(var_509_string);
	@@var_499_object:SetPhoto(var_509_string);
	var_510_string = "";
	func_2235(var_510_string);
	@@var_499_object:SetPhoto2(var_510_string);
	var_511_int = 0;
	func_2343(var_511_int);
	@@var_499_object:SetPlayerName(var_511_int);
	IsOverrideActive(var_500_bool);
	var_512_bool = var_500_bool;
	if(var_512_bool != 0) {
		var_492_int = -2;
		return 8;
	}
	DoDialog(var_499_object);
	var_513_bool = 0; var_514_object = Obj();
	func_2138(Obj());
	var_515_object = var_514_object;
	func_1947(var_513_bool, var_514_object);
	var_516_object = Obj(); var_517_object = Obj();
	var_493_object = var_516_object;
	var_499_object = var_517_object;
	TaskCall(9);
	func_1440(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object);
	TaskReturn();
	@@var_499_object:IsDialogEnd(var_502_bool);
	
Label_1422:
	var_546_bool = var_502_bool == 0; //@nz
	if(var_546_bool != 0) {
		sync();
		@@var_499_object:IsDialogEnd(var_502_bool);
		goto Label_1422;
	}
	var_493_object = Obj();
	func_1929();
	StopDialog(var_499_object);
	@@var_499_object:GetReturnValue((int)-1);
	var_501_int = var_492_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_214_object, var_215_object)
{
	var_0_object = var_215_object;
	var_1_object = var_214_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_221_string = "";
		func_139(var_215_object, "Neutral");
		@@@var_0_object:SetMessage((int)517997);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)517998, (int)29658, (int)19131);
		@@@var_0_object:AddReply((int)528292, (int)29658, (int)29657);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_245_bool = 0;
	func_2237(var_245_bool);
	if(var_245_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_246_string = var_3_string;
		if(var_246_string != 0) {
		} else {
			var_247_string = "";
			var_247_string = var_2_object;
			func_2085(var_247_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_260_string = var_3_string;
		if(var_260_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_2131()
{
	var_29_bool = 0;
	func_2237(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1625()
{
	var_550_float = 0; var_551_float = 0;
	rand(var_551_float, (int)8, (int)16);
	SetTimer((int)10, var_551_float);
	return 2;
}


func_2138(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj();
	self(var_123_object);
	var_123_object = var_121_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2144(var_85_cvector, var_86_cvector)
{
	var_88_float = 0; var_89_float = 0;
	var_90_int = var_86_cvector | var_86_cvector;
	var_89_float = sqrt(var_90_int);
	var_91_float = 9.999999974752427e-07;
	var_92_bool = var_89_float < var_91_float;
	if(var_92_bool != 0) {
		var_85_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_85_cvector = var_86_cvector / var_89_float;
	return 2;
}


func_1634()
{
	KillTimer((int)10);
	return 0;
}


func_868(var_0_object, var_1_object, var_2_object, var_3_string, var_389_object, var_390_object)
{
	var_0_object = var_390_object;
	var_1_object = var_389_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_396_string = "";
		func_931(var_390_object, "Neutral");
		@@@var_0_object:SetMessage((int)530857);
		@@@var_0_object:ClearReplies();
		var_405_bool = 0; var_406_object = Obj();
		var_406_object = var_1_object;
		func_2283(var_406_object);
		if(var_405_bool != 0) {
			@@@var_0_object:AddReply((int)530859, (int)32176, (int)32175);
		}
		@@@var_0_object:AddReply((int)530858, (int)-1, (int)32174);
		goto Label_901;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x368";
	}
Label_901:
	var_417_bool = 0;
	func_2237(var_417_bool);
	if(var_417_bool != 0) {

	Label_905:
		lshWaitForAnimEnd();
		var_418_string = var_3_string;
		if(var_418_string != 0) {
		} else {
			var_419_string = "";
			var_419_string = var_2_object;
			func_2085(var_419_string);
			goto Label_905;
	}
		PlayAnimation("all", "idle");

	Label_920:
		WaitForAnimEnd();
		var_422_string = var_3_string;
		if(var_422_string != 0) {
			goto Label_930;
		}
		PlayAnimation("all", "idle");
		goto Label_920;
	}
	goto Label_930;
	
Label_930:
	return 0;
	
}


func_2154(var_319_int, var_320_string)
{
	var_321_int = 0; var_322_int = 0;
	GetVariable(var_320_string, var_322_int);
	var_322_int = var_319_int;
	return 2;
}


func_2159(var_58_int, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj();
	CreateIntVector(var_61_object);
	@@var_61_object:add(var_58_int);
	@@var_61_object:add(var_59_int);
	SendWorldWndMessage((int)3, var_61_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2171(var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0;
	var_49_object = Obj(); var_50_string = ""; var_51_int = 0;
	var_45_object = var_49_object;
	var_46_int = var_51_int;
	func_1829(var_49_object, "money", var_51_int);
	var_56_bool = var_46_int > (int)0;
	if(var_56_bool != 0) {
		GetInvItemByName(var_48_int, "Money");
		var_58_int = 0; var_59_int = 0;
		var_48_int = var_58_int;
		var_46_int = var_59_int;
		func_2159(var_58_int, var_59_int);
	}
	return 2;
}


func_1929()
{
	var_265_bool = 0; var_266_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_268_bool = 0;
	func_2237(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		HasAnimationTrack(var_266_bool, "head");
		var_270_bool = var_266_bool;
		if(var_270_bool == 0) goto Label_1946;
		UnlookAsync("head");
	}
Label_1946:
	return 2;
	
}


func_139(var_2_object, var_221_string)
{
	var_222_bool = 0;
	func_2237(var_222_bool);
	var_223_bool = var_222_bool == 0; //@nz
	if(var_223_bool != 0) {
		return 0;
	}
	var_224_bool = var_221_string == var_2_object;
	if(var_224_bool != 0) {
		return 0;
	}
	var_225_string = ""; var_226_bool = 0;
	var_221_string = var_225_string;
	var_228_bool = var_221_string == "";
	if(var_228_bool != 0) {
		var_226_bool = 0;
	} else {
		var_226_bool = 1;
	}
	func_2101(var_225_string, var_226_bool);
	var_2_object = var_221_string;
	return 0;
	
}


func_398(var_2_object, var_307_string)
{
	var_308_bool = 0;
	func_2237(var_308_bool);
	var_309_bool = var_308_bool == 0; //@nz
	if(var_309_bool != 0) {
		return 0;
	}
	var_310_bool = var_307_string == var_2_object;
	if(var_310_bool != 0) {
		return 0;
	}
	var_311_string = ""; var_312_bool = 0;
	var_307_string = var_311_string;
	var_314_bool = var_307_string == "";
	if(var_314_bool != 0) {
		var_312_bool = 0;
	} else {
		var_312_bool = 1;
	}
	func_2101(var_311_string, var_312_bool);
	var_2_object = var_307_string;
	return 0;
	
}


func_2190(var_174_int)
{
	var_175_float = 0; var_176_float = 0;
	GetGameTime(var_176_float);
	var_178_int = 0;
	var_178_int = var_176_float / (int)24;
	var_174_int = (int)1 + var_178_int;
	return 2;
}


func_2199(var_273_bool, var_274_int)
{
	var_275_int = 0;
	func_2190(var_275_int);
	var_273_bool = var_275_int == var_274_int;
	return 0;
}


func_1947(var_119_bool, var_120_object)
{
	var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0;
	GetVariable("voice_common", var_126_int);
	var_129_int = var_126_int;
	if(var_129_int != 0) {
		var_130_bool = 0; var_131_object = Obj();
		var_120_object = var_131_object;
		func_2005(var_130_bool, var_131_object);
		var_160_bool = var_130_bool == 0; //@nz
		if(var_160_bool != 0) {
			var_161_bool = 0; var_162_object = Obj();
			var_120_object = var_162_object;
			func_2042(var_161_bool, var_162_object);
			var_196_bool = var_161_bool == 0; //@nz
			if(var_196_bool != 0) {
				var_119_bool = 0;
				return 4;
			}
		}
		irand(var_127_int, (int)2);
		var_198_int = var_127_int;
		if(var_198_int != 0) {
			var_201_int = var_126_int + (int)1;
			var_203_int = var_201_int % (int)3;
			SetVariable("voice_common", var_203_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_206_bool = 0; var_207_object = Obj();
		var_120_object = var_207_object;
		func_2042(var_206_bool, var_207_object);
		var_208_bool = var_206_bool == 0; //@nz
		if(var_208_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_120_object = var_210_object;
			func_2005(var_209_bool, var_210_object);
			var_211_bool = var_209_bool == 0; //@nz
			if(var_211_bool != 0) {
				var_119_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2003;
	
Label_2003:
	var_119_bool = 1;
	return 4;
	
}


func_2205(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = "";
	var_55_int = var_52_int;
	if(var_55_int != 0) {
		"idle" = "idle" + var_52_int;
	}
	var_54_string = var_51_string;
	return 2;
}


func_1181(var_0_object, var_1_object, var_2_object, var_3_string, var_456_object, var_457_object)
{
	var_0_object = var_457_object;
	var_1_object = var_456_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_463_string = "";
		func_1244(var_457_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_1214;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4a1";
	}
Label_1214:
	var_481_bool = 0;
	func_2237(var_481_bool);
	if(var_481_bool != 0) {

	Label_1218:
		lshWaitForAnimEnd();
		var_482_string = var_3_string;
		if(var_482_string != 0) {
		} else {
			var_483_string = "";
			var_483_string = var_2_object;
			func_2085(var_483_string);
			goto Label_1218;
	}
		PlayAnimation("all", "idle");

	Label_1233:
		WaitForAnimEnd();
		var_486_string = var_3_string;
		if(var_486_string != 0) {
			goto Label_1243;
		}
		PlayAnimation("all", "idle");
		goto Label_1233;
	}
	goto Label_1243;
	
Label_1243:
	return 0;
	
}


func_1440(var_0_object, var_1_object, var_2_object, var_3_string, var_516_object, var_517_object)
{
	var_0_object = var_517_object;
	var_1_object = var_516_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_523_string = "";
		func_1498(var_517_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_1468;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5a4";
	}
Label_1468:
	var_538_bool = 0;
	func_2237(var_538_bool);
	if(var_538_bool != 0) {

	Label_1472:
		lshWaitForAnimEnd();
		var_539_string = var_3_string;
		if(var_539_string != 0) {
		} else {
			var_540_string = "";
			var_540_string = var_2_object;
			func_2085(var_540_string);
			goto Label_1472;
	}
		PlayAnimation("all", "idle");

	Label_1487:
		WaitForAnimEnd();
		var_543_string = var_3_string;
		if(var_543_string != 0) {
			goto Label_1497;
		}
		PlayAnimation("all", "idle");
		goto Label_1487;
	}
	goto Label_1497;
	
Label_1497:
	return 0;
	
}


func_931(var_2_object, var_396_string)
{
	var_397_bool = 0;
	func_2237(var_397_bool);
	var_398_bool = var_397_bool == 0; //@nz
	if(var_398_bool != 0) {
		return 0;
	}
	var_399_bool = var_396_string == var_2_object;
	if(var_399_bool != 0) {
		return 0;
	}
	var_400_string = ""; var_401_bool = 0;
	var_396_string = var_400_string;
	var_403_bool = var_396_string == "";
	if(var_403_bool != 0) {
		var_401_bool = 0;
	} else {
		var_401_bool = 1;
	}
	func_2101(var_400_string, var_401_bool);
	var_2_object = var_396_string;
	return 0;
	
}


func_2212(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_48_int = 0;
	
Label_2214:
	var_51_string = ""; var_52_int = 0;
	var_48_int = var_52_int;
	func_2205(var_51_string, var_52_int);
	HasAnimation(var_49_bool, "all", var_51_string);
	var_56_bool = var_49_bool == 0; //@nz
	if(var_56_bool != 0) {
	} else {
		var_48_int = var_48_int + (int)1;
		goto Label_2214;
	}
	var_48_int = var_45_int;
	return 4;
	
}


func_2229(var_107_int)
{
	var_107_int = 515530;
	return 0;
}


func_2231(var_106_int)
{
	var_106_int = 502856;
	return 0;
}


func_2233(var_108_string)
{
	var_108_string = "ui/NPC_Anna.png";
	return 0;
}


func_2235(var_109_string)
{
	var_109_string = "ui/NPC_Anna_b.png";
	return 0;
}


func_2237(var_101_bool)
{
	var_101_bool = 1;
	return 0;
}


func_2239()
{
	SetVariable("b5q01_1", (int)1);
	return 0;
}


func_2245()
{
	SetVariable("b5q01_1", (int)1000);
	return 0;
}


func_2251(var_42_object)
{
	Trace("money10000 is given");
	var_45_object = Obj(); var_46_int = 0;
	var_42_object = var_45_object;
	func_2171(var_45_object, (int)10000);
	return 0;
}


func_1745()
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0;
	WaitForAnimEnd();
	var_43_bool = 0;
	func_1855(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 12;
	}
	func_2212((int)0);
	var_45_int = var_37_int;
	var_38_int = 0;
	
Label_1759:
	var_58_bool = 0;
	var_58_bool = 0;
	var_60_bool = var_38_int < (int)5;
	if(var_60_bool != 0) {
		var_61_bool = 0;
		func_1855(var_61_bool);
		if(var_61_bool != 0) {
			var_58_bool = 1;
		}
	}
	if(var_58_bool != 0) {
		var_62_bool = var_37_int == 0; //@nz
		if(var_62_bool != 0) {
			Sleep((int)3, var_39_bool);
			var_64_bool = var_39_bool == 0; //@nz
			if(var_64_bool != 0) {
			} else {
		} else {
				irand(var_40_int, var_37_int);
				irand(var_41_int, (int)5);
				var_70_bool = var_41_int != (int)0;
				if(var_70_bool != 0) {
					var_40_int = 0;
				}
				var_72_string = ""; var_73_int = 0;
				var_40_int = var_73_int;
				func_2205(var_72_string, var_73_int);
				PlayAnimation("all", var_72_string);
				WaitForAnimEnd(var_42_bool);
				var_74_bool = var_42_bool == 0; //@nz
				if(var_74_bool == 0) goto Label_1800;
				goto Label_1811;
		}
		Label_1800:
			var_65_bool = 0;
			func_1814(var_65_bool);
			var_66_bool = var_65_bool == 0; //@nz
			if(var_66_bool != 0) {
				goto Label_1811;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_1759;

		}
	}
Label_1811:
	ResetAAS();
	return 12;
	
}


func_2261()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_2005(var_130_bool, var_131_object)
{
	var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = "";
	var_137_string = "c";
	var_138_int = 0;
	
Label_2008:
	if((int)1 != 0) {
		var_144_int = var_138_int + (int)1;
		var_145_int = var_137_string + var_144_int;
		@@var_131_object:HasProperty(var_145_int, var_139_bool);
		var_146_bool = var_139_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_138_int = var_138_int + (int)1;
			goto Label_2008;
		}
	}
	var_147_bool = var_138_int == 0; //@nz
	if(var_147_bool != 0) {
		var_130_bool = 0;
		return 10;
	}
	var_140_int = 0;
	var_149_bool = var_138_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_140_int, var_138_int);
	}
	var_151_int = var_140_int + (int)1;
	var_152_int = var_137_string + var_151_int;
	@@var_131_object:GetProperty(var_152_int, var_141_string);
	var_153_bool = 0; var_154_string = "";
	var_141_string = var_154_string;
	func_2116(var_153_bool, var_154_string);
	var_153_bool = var_130_bool;
	return 10;
	
}


func_1498(var_2_object, var_523_string)
{
	var_524_bool = 0;
	func_2237(var_524_bool);
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
	func_2101(var_527_string, var_528_bool);
	var_2_object = var_523_string;
	return 0;
	
}


func_2267()
{
	SetVariable("oob6Anna1", (int)1);
	return 0;
}


func_1244(var_2_object, var_463_string)
{
	var_464_bool = 0;
	func_2237(var_464_bool);
	var_465_bool = var_464_bool == 0; //@nz
	if(var_465_bool != 0) {
		return 0;
	}
	var_466_bool = var_463_string == var_2_object;
	if(var_466_bool != 0) {
		return 0;
	}
	var_467_string = ""; var_468_bool = 0;
	var_463_string = var_467_string;
	var_470_bool = var_463_string == "";
	if(var_470_bool != 0) {
		var_468_bool = 0;
	} else {
		var_468_bool = 1;
	}
	func_2101(var_467_string, var_468_bool);
	var_2_object = var_463_string;
	return 0;
	
}


func_2273(var_71_object)
{
	Trace("money3000 is given");
	var_74_object = Obj(); var_75_int = 0;
	var_71_object = var_74_object;
	func_2171(var_74_object, (int)3000);
	return 0;
}


func_226(var_0_object, var_276_int, var_277_object)
{
	var_279_object = Obj(); var_280_bool = 0; var_281_int = 0; var_282_bool = 0; var_283_object = Obj(); var_284_bool = 0; var_285_int = 0; var_286_bool = 0;
	var_0_object = var_277_object;
	var_287_bool = 0; var_288_object = Obj(); var_289_float = 0;
	var_277_object = var_288_object;
	func_1860(var_287_bool, var_288_object, (float)70.0);
	var_290_bool = var_287_bool == 0; //@nz
	if(var_290_bool != 0) {
		var_276_int = -2;
		return 8;
	}
	CreateDialog(var_283_object);
	var_291_int = 0;
	func_2231(var_291_int);
	@@var_283_object:SetNPCName(var_291_int);
	var_292_int = 0;
	func_2229(var_292_int);
	@@var_283_object:SetNPCDescription(var_292_int);
	var_293_string = "";
	func_2233(var_293_string);
	@@var_283_object:SetPhoto(var_293_string);
	var_294_string = "";
	func_2235(var_294_string);
	@@var_283_object:SetPhoto2(var_294_string);
	var_295_int = 0;
	func_2343(var_295_int);
	@@var_283_object:SetPlayerName(var_295_int);
	IsOverrideActive(var_284_bool);
	var_296_bool = var_284_bool;
	if(var_296_bool != 0) {
		var_276_int = -2;
		return 8;
	}
	DoDialog(var_283_object);
	var_297_bool = 0; var_298_object = Obj();
	func_2138(Obj());
	var_299_object = var_298_object;
	func_1947(var_297_bool, var_298_object);
	var_300_object = Obj(); var_301_object = Obj();
	var_277_object = var_300_object;
	var_283_object = var_301_object;
	TaskCall(3);
	func_307(var_302_object, var_303_object, var_304_string, var_305_bool, var_300_object, var_301_object);
	TaskReturn();
	@@var_283_object:IsDialogEnd(var_286_bool);
	
Label_289:
	var_361_bool = var_286_bool == 0; //@nz
	if(var_361_bool != 0) {
		sync();
		@@var_283_object:IsDialogEnd(var_286_bool);
		goto Label_289;
	}
	var_277_object = Obj();
	func_1929();
	StopDialog(var_283_object);
	@@var_283_object:GetReturnValue((int)-1);
	var_285_int = var_276_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2283(var_405_bool)
{
	var_407_int = 0; var_408_string = "";
	func_2154(var_407_int, "oob6Anna1");
	var_410_bool = var_407_int == (int)0;
	if(var_410_bool != 0) {
		var_405_bool = 1;
		return 0;
	}
	var_405_bool = 0;
	return 0;
}


func_2295(var_317_bool)
{
	var_319_int = 0; var_320_string = "";
	func_2154(var_319_int, "b5q01TalkToVera");
	var_324_bool = var_319_int == (int)1;
	if(var_324_bool != 0) {
		var_317_bool = 1;
		return 0;
	}
	var_317_bool = 0;
	return 0;
}


func_2042(var_161_bool, var_162_object)
{
	var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = "";
	var_174_int = 0;
	func_2190(var_174_int);
	var_180_int = "d" + var_174_int;
	var_168_string = var_180_int + "m";
	var_169_int = 0;
	
Label_2051:
	if((int)1 != 0) {
		var_184_int = var_169_int + (int)1;
		var_185_int = var_168_string + var_184_int;
		@@var_162_object:HasProperty(var_185_int, var_170_bool);
		var_186_bool = var_170_bool == 0; //@nz
		if(var_186_bool != 0) {
		} else {
			var_169_int = var_169_int + (int)1;
			goto Label_2051;
		}
	}
	var_187_bool = var_169_int == 0; //@nz
	if(var_187_bool != 0) {
		var_161_bool = 0;
		return 10;
	}
	var_171_int = 0;
	var_189_bool = var_169_int > (int)1;
	if(var_189_bool != 0) {
		irand(var_171_int, var_169_int);
	}
	var_191_int = var_171_int + (int)1;
	var_192_int = var_168_string + var_191_int;
	@@var_162_object:GetProperty(var_192_int, var_172_string);
	var_193_bool = 0; var_194_string = "";
	var_172_string = var_194_string;
	func_2116(var_193_bool, var_194_string);
	var_193_bool = var_161_bool;
	return 10;
	
}


