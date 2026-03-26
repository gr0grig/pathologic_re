// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Suffering|W:Penetrating|W:Grin|W:Fear|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Katerina.png|W:ui/NPC_Katerina_b.png|W:oob2Katerina1|W:oob2Katerina2|W:oob2Katerina3|W:b8q03|W:b8q03KaterinaGotoMat|W:pt_map_mat|A:AddMark|W:b10q01TalkKaterina|W:b10q01|W:b2q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch
// @GLOBALS: 0:object:,1:bool:,2:bool:
// @RUN_OP: 0x7ba
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1b2 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3af vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x511 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x692 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x790 vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0x806 vars=int
// @EVENT_6: op=0x82c vars=
// @EVENT_5: op=0x83b vars=
// @EVENT_45: op=0x848 vars=bool
// @EVENT_0: op=0x854 vars=object
// @PE: 0x51,0x8b,0xa1,0x11c,0x19c,0x1b2,0x355,0x399,0x3af,0x4b2,0x4fb,0x511,0x63d,0x67c,0x692,0x740,0x77a,0x790,0x806,0x82c,0x848,0xa16,0xa3e,0xa44,0xa4a,0xa67,0xa6d,0xa79,0xa85,0xa91,0xa9d,0xaa9,0xab5,0xb19

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2540();
		var_36_bool = var_31_bool == (int)19151;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518018);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518019, (int)-1, (int)19152);
			@@@var_0_object:AddReply((int)527797, (int)-1, (int)29130);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_2620(var_61_bool);
		if(var_61_bool != 0) {
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
		func_2540();
		var_36_bool = var_32_cvector == (int)21461;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_2628();
		}
		var_42_bool = var_32_cvector == (int)21464;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_2634();
		}
		var_48_bool = var_31_bool == (int)21440;
		if(var_48_bool != 0) {
			var_49_bool = 0;
			var_49_bool = 0;
			var_50_bool = 0; var_51_object = Obj();
			var_51_object = var_1_object;
			func_2705(var_51_object);
			var_58_bool = var_50_bool == 0; //@nz
			if(var_58_bool != 0) {
				var_59_bool = 0; var_60_object = Obj();
				var_60_object = var_1_object;
				func_2717(var_60_object);
				if(var_59_bool != 0) {
					var_49_bool = 1;
				}
			}
			if(var_49_bool != 0) {
				var_65_object = Obj(); var_66_object = Obj();
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_2622();
				var_69_string = "";
				func_412(var_32_cvector, "Suffering");
				@@@var_0_object:SetMessage((int)520248);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520249, (int)21442, (int)21441);
				return 0;
			}
			var_90_string = "";
			func_412(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520268);
			@@@var_0_object:ClearReplies();
			var_92_bool = 0;
			var_92_bool = 0;
			var_93_bool = 0; var_94_object = Obj();
			var_94_object = var_1_object;
			func_2717(var_94_object);
			var_95_bool = var_93_bool == 0; //@nz
			if(var_95_bool != 0) {
				var_96_bool = 0; var_97_object = Obj();
				var_97_object = var_1_object;
				func_2729(var_97_object);
				if(var_96_bool != 0) {
					var_92_bool = 1;
				}
			}
			if(var_92_bool != 0) {
				@@@var_0_object:AddReply((int)520269, (int)21462, (int)21461);
			}
			var_105_bool = 0;
			var_105_bool = 0;
			var_106_bool = 0; var_107_object = Obj();
			var_107_object = var_1_object;
			func_2717(var_107_object);
			var_108_bool = var_106_bool == 0; //@nz
			if(var_108_bool != 0) {
				var_109_bool = 0; var_110_object = Obj();
				var_110_object = var_1_object;
				func_2741(var_110_object);
				if(var_109_bool != 0) {
					var_105_bool = 1;
				}
			}
			if(var_105_bool != 0) {
				@@@var_0_object:AddReply((int)520272, (int)21465, (int)21464);
			}
			@@@var_0_object:AddReply((int)520277, (int)-1, (int)21469);
			return 0;
		}
		var_122_bool = var_31_bool == (int)21465;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_412(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)520273);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520274, (int)21467, (int)21466);
			return 0;
		}
		var_129_bool = var_31_bool == (int)21467;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_412(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)520275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520276, (int)-1, (int)21468);
			@@@var_0_object:AddReply((int)527804, (int)-1, (int)29140);
			return 0;
		}
		var_139_bool = var_31_bool == (int)21462;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_412(var_32_cvector, "Grin");
			@@@var_0_object:SetMessage((int)520270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520271, (int)-1, (int)21463);
			return 0;
		}
		var_146_bool = var_31_bool == (int)21442;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_412(var_32_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)520250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520251, (int)21444, (int)21443);
			@@@var_0_object:AddReply((int)520259, (int)21452, (int)21451);
			@@@var_0_object:AddReply((int)520265, (int)21458, (int)21457);
			return 0;
		}
		var_159_bool = var_31_bool == (int)21458;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_412(var_32_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)520266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527803, (int)21452, (int)29136);
			@@@var_0_object:AddReply((int)520267, (int)-1, (int)21459);
			return 0;
		}
		var_169_bool = var_31_bool == (int)21452;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_412(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)520260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520261, (int)21454, (int)21453);
			@@@var_0_object:AddReply((int)520264, (int)21454, (int)21456);
			return 0;
		}
		var_179_bool = var_31_bool == (int)21454;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_412(var_32_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)520262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520263, (int)-1, (int)21455);
			return 0;
		}
		var_186_bool = var_31_bool == (int)21444;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_412(var_32_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)520252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520253, (int)21446, (int)21445);
			@@@var_0_object:AddReply((int)520256, (int)21449, (int)21448);
			return 0;
		}
		var_196_bool = var_31_bool == (int)21449;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_412(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520257);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520258, (int)-1, (int)21450);
			return 0;
		}
		var_203_bool = var_31_bool == (int)21446;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_412(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)520254);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520255, (int)-1, (int)21447);
			return 0;
		}
		var_3_string = true;
		var_209_bool = 0;
		func_2620(var_209_bool);
		if(var_209_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1b3";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2540();
		var_36_bool = var_32_cvector == (int)22678;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_2640();
		}
		var_81_bool = var_31_bool == (int)22675;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_921(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)521514);
			@@@var_0_object:ClearReplies();
			var_100_bool = 0; var_101_object = Obj();
			var_101_object = var_1_object;
			func_2669(var_101_object);
			if(var_100_bool != 0) {
				@@@var_0_object:AddReply((int)521515, (int)22677, (int)22676);
			}
			@@@var_0_object:AddReply((int)521518, (int)-1, (int)22679);
			@@@var_0_object:AddReply((int)523976, (int)-1, (int)25264);
			return 0;
		}
		var_118_bool = var_31_bool == (int)22677;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_921(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)521516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523977, (int)25266, (int)25265);
			@@@var_0_object:AddReply((int)523981, (int)25270, (int)25269);
			return 0;
		}
		var_128_bool = var_31_bool == (int)25270;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_921(var_32_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)523982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523983, (int)25266, (int)25271);
			return 0;
		}
		var_135_bool = var_31_bool == (int)25266;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_921(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)523978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523979, (int)25268, (int)25267);
			return 0;
		}
		var_142_bool = var_31_bool == (int)25268;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_921(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)523980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523984, (int)25274, (int)25273);
			return 0;
		}
		var_149_bool = var_31_bool == (int)25274;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_921(var_32_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523986, (int)25276, (int)25275);
			@@@var_0_object:AddReply((int)523988, (int)25276, (int)25277);
			return 0;
		}
		var_159_bool = var_31_bool == (int)25276;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_921(var_32_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523987);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521517, (int)-1, (int)22678);
			return 0;
		}
		var_3_string = true;
		var_165_bool = 0;
		func_2620(var_165_bool);
		if(var_165_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3b0";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2540();
		var_36_bool = var_32_cvector == (int)23108;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_2663();
		}
		var_42_bool = var_32_cvector == (int)23687;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_2663();
		}
		var_46_bool = var_31_bool == (int)23104;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_1275(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521930);
			@@@var_0_object:ClearReplies();
			var_65_bool = 0;
			var_65_bool = 0;
			var_66_bool = 0; var_67_object = Obj();
			var_67_object = var_1_object;
			func_2681(var_67_object);
			if(var_66_bool != 0) {
				var_74_bool = 0; var_75_object = Obj();
				var_75_object = var_1_object;
				func_2693(var_75_object);
				var_80_bool = var_74_bool == 0; //@nz
				if(var_80_bool != 0) {
					var_65_bool = 1;
				}
			}
			if(var_65_bool != 0) {
				@@@var_0_object:AddReply((int)521931, (int)23673, (int)23105);
			}
			@@@var_0_object:AddReply((int)521932, (int)-1, (int)23106);
			return 0;
		}
		var_88_bool = var_31_bool == (int)23673;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_1275(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)522498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522501, (int)23677, (int)23676);
			@@@var_0_object:AddReply((int)522499, (int)23675, (int)23674);
			return 0;
		}
		var_98_bool = var_31_bool == (int)23675;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_1275(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)522500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522506, (int)23679, (int)23681);
			return 0;
		}
		var_105_bool = var_31_bool == (int)23679;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_1275(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)522504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522505, (int)23677, (int)23680);
			return 0;
		}
		var_112_bool = var_31_bool == (int)23677;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_1275(var_32_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)522502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522503, (int)23683, (int)23678);
			@@@var_0_object:AddReply((int)531516, (int)32868, (int)32871);
			return 0;
		}
		var_122_bool = var_31_bool == (int)23683;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_1275(var_32_cvector, "Grin");
			@@@var_0_object:SetMessage((int)522507);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522508, (int)23685, (int)23684);
			@@@var_0_object:AddReply((int)531513, (int)32868, (int)32867);
			return 0;
		}
		var_132_bool = var_31_bool == (int)32868;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_1275(var_32_cvector, "Grin");
			@@@var_0_object:SetMessage((int)531514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531515, (int)23685, (int)32869);
			return 0;
		}
		var_139_bool = var_31_bool == (int)23685;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_1275(var_32_cvector, "Grin");
			@@@var_0_object:SetMessage((int)522509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521934, (int)-1, (int)23108);
			@@@var_0_object:AddReply((int)522511, (int)-1, (int)23687);
			return 0;
		}
		var_3_string = true;
		var_148_bool = 0;
		func_2620(var_148_bool);
		if(var_148_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x512";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2540();
		var_36_bool = var_31_bool == (int)36971;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_1660(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_65_bool = var_31_bool == (int)36973;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_1660(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_75_bool = var_31_bool == (int)36975;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_1660(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_84_bool = 0;
		func_2620(var_84_bool);
		if(var_84_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x693";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_2540();
		var_36_bool = var_31_int == (int)42560;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_1914(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_2620(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x791";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_2050();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_2264(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_2019(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_1999(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_2547(Obj());
				var_77_object = var_76_object;
				func_2414(var_75_bool, var_76_object);
			}
		} else {
			func_2014(var_31_int);
			func_2041();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2232();
	func_2050();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_2050();
	var_32_string = "";
	func_2494("Neutral");
	func_2041();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_2041();
	} else {
		var_38_string = "";
		func_2494("Neutral");
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
		func_2232();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_2255(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_2841(var_49_object);
		var_645_string = "";
		func_2494("Neutral");
		func_2050();
		func_2041();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1985(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_0_object = var_53_object;
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0;
	var_53_object = var_64_object;
	func_2269(var_63_bool, var_64_object, (float)70.0);
	var_110_bool = var_63_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	CreateDialog(var_59_object);
	var_111_int = 0;
	func_2614(var_111_int);
	@@var_59_object:SetNPCName(var_111_int);
	var_112_int = 0;
	func_2612(var_112_int);
	@@var_59_object:SetNPCDescription(var_112_int);
	var_113_string = "";
	func_2616(var_113_string);
	@@var_59_object:SetPhoto(var_113_string);
	var_114_string = "";
	func_2618(var_114_string);
	@@var_59_object:SetPhoto2(var_114_string);
	var_115_int = 0;
	func_2824(var_115_int);
	@@var_59_object:SetPlayerName(var_115_int);
	IsOverrideActive(var_60_bool);
	var_123_bool = var_60_bool;
	if(var_123_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	DoDialog(var_59_object);
	var_124_bool = 0; var_125_object = Obj();
	func_2547(Obj());
	var_126_object = var_125_object;
	func_2356(var_124_bool, var_125_object);
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
	func_2338();
	StopDialog(var_59_object);
	@@var_59_object:GetReturnValue((int)-1);
	var_61_int = var_52_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2050()
{
	KillTimer((int)10);
	return 0;
}


func_2563(var_315_int, var_316_string)
{
	var_317_int = 0; var_318_int = 0;
	GetVariable(var_316_string, var_318_int);
	var_318_int = var_315_int;
	return 2;
}


func_772(var_0_object, var_387_int, var_388_object)
{
	var_390_object = Obj(); var_391_bool = 0; var_392_int = 0; var_393_bool = 0; var_394_object = Obj(); var_395_bool = 0; var_396_int = 0; var_397_bool = 0;
	var_0_object = var_388_object;
	var_398_bool = 0; var_399_object = Obj(); var_400_float = 0;
	var_388_object = var_399_object;
	func_2269(var_398_bool, var_399_object, (float)70.0);
	var_401_bool = var_398_bool == 0; //@nz
	if(var_401_bool != 0) {
		var_387_int = -2;
		return 8;
	}
	CreateDialog(var_394_object);
	var_402_int = 0;
	func_2614(var_402_int);
	@@var_394_object:SetNPCName(var_402_int);
	var_403_int = 0;
	func_2612(var_403_int);
	@@var_394_object:SetNPCDescription(var_403_int);
	var_404_string = "";
	func_2616(var_404_string);
	@@var_394_object:SetPhoto(var_404_string);
	var_405_string = "";
	func_2618(var_405_string);
	@@var_394_object:SetPhoto2(var_405_string);
	var_406_int = 0;
	func_2824(var_406_int);
	@@var_394_object:SetPlayerName(var_406_int);
	IsOverrideActive(var_395_bool);
	var_407_bool = var_395_bool;
	if(var_407_bool != 0) {
		var_387_int = -2;
		return 8;
	}
	DoDialog(var_394_object);
	var_408_bool = 0; var_409_object = Obj();
	func_2547(Obj());
	var_410_object = var_409_object;
	func_2356(var_408_bool, var_409_object);
	var_411_object = Obj(); var_412_object = Obj();
	var_388_object = var_411_object;
	var_394_object = var_412_object;
	TaskCall(5);
	func_853(var_413_object, var_414_object, var_415_string, var_416_bool, var_411_object, var_412_object);
	TaskReturn();
	@@var_394_object:IsDialogEnd(var_397_bool);
	
Label_835:
	var_450_bool = var_397_bool == 0; //@nz
	if(var_450_bool != 0) {
		sync();
		@@var_394_object:IsDialogEnd(var_397_bool);
		goto Label_835;
	}
	var_388_object = Obj();
	func_2338();
	StopDialog(var_394_object);
	@@var_394_object:GetReturnValue((int)-1);
	var_396_int = var_387_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2824(var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	GetVariable("branch", var_117_int);
	var_120_bool = var_117_int == (int)0;
	if(var_120_bool != 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xb17";
	}
	var_122_bool = var_117_int == (int)1;
	if(var_122_bool != 0) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
	return 2;
}


func_2568(var_54_float)
{
	var_55_float = 0; var_56_float = 0;
	GetGameTime(var_56_float);
	var_56_float = var_54_float;
	return 2;
}


func_2573(var_179_int)
{
	var_180_float = 0; var_181_float = 0;
	GetGameTime(var_181_float);
	var_183_int = 0;
	var_183_int = var_181_float / (int)24;
	var_179_int = (int)1 + var_183_int;
	return 2;
}


func_2582(var_278_bool, var_279_int)
{
	var_280_int = 0;
	func_2573(var_280_int);
	var_278_bool = var_280_int == var_279_int;
	return 0;
}


func_2841(var_49_object)
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
	func_2582(var_278_bool, (int)2);
	if(var_278_bool != 0) {
		var_281_int = 0; var_282_object = Obj();
		var_49_object = var_282_object;
		TaskCall(2);
		func_203(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	var_385_bool = 0; var_386_int = 0;
	func_2582(var_385_bool, (int)8);
	if(var_385_bool != 0) {
		var_387_int = 0; var_388_object = Obj();
		var_49_object = var_388_object;
		TaskCall(4);
		func_772(var_389_object, var_387_int, var_388_object);
		TaskReturn();
		return 0;
	}
	var_452_bool = 0; var_453_int = 0;
	func_2582(var_452_bool, (int)10);
	if(var_452_bool != 0) {
		var_454_int = 0; var_455_object = Obj();
		var_49_object = var_455_object;
		TaskCall(6);
		func_1121(var_456_object, var_454_int, var_455_object);
		TaskReturn();
		return 0;
	}
	var_524_bool = 0;
	var_524_bool = 0;
	var_525_bool = 0; var_526_int = 0;
	func_2582(var_525_bool, (int)12);
	if(var_525_bool != 0) {
		var_527_bool = GlobalVars[2];
		var_528_bool = var_527_bool == 0; //@nz
		if(var_528_bool != 0) {
			var_524_bool = 1;
		}
	}
	if(var_524_bool != 0) {
		var_529_int = 0; var_530_object = Obj();
		var_49_object = var_530_object;
		TaskCall(8);
		func_1516(var_531_object, var_529_int, var_530_object);
		TaskReturn();
		var_588_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
		return 0;
	}
	var_589_int = 0; var_590_object = Obj();
	var_49_object = var_590_object;
	TaskCall(10);
	func_1775(var_591_object, var_589_int, var_590_object);
	TaskReturn();
	return 0;
}


func_2588(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = "";
	var_60_int = var_57_int;
	if(var_60_int != 0) {
		"idle" = "idle" + var_57_int;
	}
	var_59_string = var_56_string;
	return 2;
}


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_312_bool = 0;
		var_312_bool = 0;
		var_313_bool = 0; var_314_object = Obj();
		var_314_object = var_1_object;
		func_2705(var_314_object);
		var_321_bool = var_313_bool == 0; //@nz
		if(var_321_bool != 0) {
			var_322_bool = 0; var_323_object = Obj();
			var_323_object = var_1_object;
			func_2717(var_323_object);
			if(var_322_bool != 0) {
				var_312_bool = 1;
			}
		}
		if(var_312_bool != 0) {
			var_328_object = Obj(); var_329_object = Obj();
			var_328_object = var_1_object;
			var_329_object = var_0_object;
			func_2622();
			var_332_string = "";
			func_412(var_306_object, "Suffering");
			@@@var_0_object:SetMessage((int)520248);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520249, (int)21442, (int)21441);
		} else {
				var_352_string = "";
				func_412(var_306_object, "Neutral");
				@@@var_0_object:SetMessage((int)520268);
				@@@var_0_object:ClearReplies();
				var_354_bool = 0;
				var_354_bool = 0;
				var_355_bool = 0; var_356_object = Obj();
				var_356_object = var_1_object;
				func_2717(var_356_object);
				var_357_bool = var_355_bool == 0; //@nz
				if(var_357_bool != 0) {
					var_358_bool = 0; var_359_object = Obj();
					var_359_object = var_1_object;
					func_2729(var_359_object);
					if(var_358_bool != 0) {
						var_354_bool = 1;
					}
				}
				if(var_354_bool != 0) {
					@@@var_0_object:AddReply((int)520269, (int)21462, (int)21461);
				}
				var_367_bool = 0;
				var_367_bool = 0;
				var_368_bool = 0; var_369_object = Obj();
				var_369_object = var_1_object;
				func_2717(var_369_object);
				var_370_bool = var_368_bool == 0; //@nz
				if(var_370_bool != 0) {
					var_371_bool = 0; var_372_object = Obj();
					var_372_object = var_1_object;
					func_2741(var_372_object);
					if(var_371_bool != 0) {
						var_367_bool = 1;
					}
				}
				if(var_367_bool != 0) {
					@@@var_0_object:AddReply((int)520272, (int)21465, (int)21464);
				}
				@@@var_0_object:AddReply((int)520277, (int)-1, (int)21469);
				goto Label_382;
		}
	}
Label_382:
	var_344_bool = 0;
	func_2620(var_344_bool);
	if(var_344_bool != 0) {

	Label_386:
		lshWaitForAnimEnd();
		var_345_string = var_3_string;
		if(var_345_string != 0) {
		} else {
			var_346_string = "";
			var_346_string = var_2_object;
			func_2494(var_346_string);
			goto Label_386;
	}
		PlayAnimation("all", "idle");

	Label_401:
		WaitForAnimEnd();
		var_349_string = var_3_string;
		if(var_349_string != 0) {
			goto Label_411;
		}
		PlayAnimation("all", "idle");
		goto Label_401;

	}
	goto Label_411;
	
Label_411:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x120";


func_2041()
{
	var_647_float = 0; var_648_float = 0;
	rand(var_648_float, (int)8, (int)16);
	SetTimer((int)10, var_648_float);
	return 2;
}


func_2338()
{
	var_270_bool = 0; var_271_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_273_bool = 0;
	func_2620(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		HasAnimationTrack(var_271_bool, "head");
		var_275_bool = var_271_bool;
		if(var_275_bool == 0) goto Label_2355;
		UnlookAsync("head");
	}
Label_2355:
	return 2;
	
}


func_2595(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_53_int = 0;
	
Label_2597:
	var_56_string = ""; var_57_int = 0;
	var_53_int = var_57_int;
	func_2588(var_56_string, var_57_int);
	HasAnimation(var_54_bool, "all", var_56_string);
	var_61_bool = var_54_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_53_int = var_53_int + (int)1;
		goto Label_2597;
	}
	var_53_int = var_50_int;
	return 4;
	
}


func_2612(var_112_int)
{
	var_112_int = 515539;
	return 0;
}


func_2356(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0;
	GetVariable("voice_common", var_131_int);
	var_134_int = var_131_int;
	if(var_134_int != 0) {
		var_135_bool = 0; var_136_object = Obj();
		var_125_object = var_136_object;
		func_2414(var_135_bool, var_136_object);
		var_165_bool = var_135_bool == 0; //@nz
		if(var_165_bool != 0) {
			var_166_bool = 0; var_167_object = Obj();
			var_125_object = var_167_object;
			func_2451(var_166_bool, var_167_object);
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
		func_2451(var_211_bool, var_212_object);
		var_213_bool = var_211_bool == 0; //@nz
		if(var_213_bool != 0) {
			var_214_bool = 0; var_215_object = Obj();
			var_125_object = var_215_object;
			func_2414(var_214_bool, var_215_object);
			var_216_bool = var_214_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_124_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2412;
	
Label_2412:
	var_124_bool = 1;
	return 4;
	
}


func_2614(var_111_int)
{
	var_111_int = 502864;
	return 0;
}


func_2616(var_113_string)
{
	var_113_string = "ui/NPC_Katerina.png";
	return 0;
}


func_2618(var_114_string)
{
	var_114_string = "ui/NPC_Katerina_b.png";
	return 0;
}


func_2620(var_106_bool)
{
	var_106_bool = 1;
	return 0;
}


func_1597(var_0_object, var_1_object, var_2_object, var_3_string, var_553_object, var_554_object)
{
	var_0_object = var_554_object;
	var_1_object = var_553_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_560_string = "";
		func_1660(var_554_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_1630;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x641";
	}
Label_1630:
	var_578_bool = 0;
	func_2620(var_578_bool);
	if(var_578_bool != 0) {

	Label_1634:
		lshWaitForAnimEnd();
		var_579_string = var_3_string;
		if(var_579_string != 0) {
		} else {
			var_580_string = "";
			var_580_string = var_2_object;
			func_2494(var_580_string);
			goto Label_1634;
	}
		PlayAnimation("all", "idle");

	Label_1649:
		WaitForAnimEnd();
		var_583_string = var_3_string;
		if(var_583_string != 0) {
			goto Label_1659;
		}
		PlayAnimation("all", "idle");
		goto Label_1649;
	}
	goto Label_1659;
	
Label_1659:
	return 0;
	
}


func_2622()
{
	SetVariable("oob2Katerina1", (int)1);
	return 0;
}


func_1856(var_0_object, var_1_object, var_2_object, var_3_string, var_613_object, var_614_object)
{
	var_0_object = var_614_object;
	var_1_object = var_613_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_620_string = "";
		func_1914(var_614_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_1884;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x744";
	}
Label_1884:
	var_635_bool = 0;
	func_2620(var_635_bool);
	if(var_635_bool != 0) {

	Label_1888:
		lshWaitForAnimEnd();
		var_636_string = var_3_string;
		if(var_636_string != 0) {
		} else {
			var_637_string = "";
			var_637_string = var_2_object;
			func_2494(var_637_string);
			goto Label_1888;
	}
		PlayAnimation("all", "idle");

	Label_1903:
		WaitForAnimEnd();
		var_640_string = var_3_string;
		if(var_640_string != 0) {
			goto Label_1913;
		}
		PlayAnimation("all", "idle");
		goto Label_1903;
	}
	goto Label_1913;
	
Label_1913:
	return 0;
	
}


func_2628()
{
	SetVariable("oob2Katerina2", (int)1);
	return 0;
}


func_2634()
{
	SetVariable("oob2Katerina3", (int)1);
	return 0;
}


func_2640()
{
	var_39_object = Obj(); var_40_object = Obj();
	SetVariable("b8q03", (int)2);
	func_2807(Obj());
	var_43_object = var_40_object;
	var_54_float = 0;
	func_2568(var_54_float);
	@@var_40_object:AddMark("b8q03KaterinaGotoMat", "pt_map_mat", (int)0, (int)530664, var_54_float);
	func_2753();
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
		@@@var_0_object:SetMessage((int)518018);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518019, (int)-1, (int)19152);
		@@@var_0_object:AddReply((int)527797, (int)-1, (int)29130);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_250_bool = 0;
	func_2620(var_250_bool);
	if(var_250_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
		} else {
			var_252_string = "";
			var_252_string = var_2_object;
			func_2494(var_252_string);
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


func_853(var_0_object, var_1_object, var_2_object, var_3_string, var_411_object, var_412_object)
{
	var_0_object = var_412_object;
	var_1_object = var_411_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_418_string = "";
		func_921(var_412_object, "Fear");
		@@@var_0_object:SetMessage((int)521514);
		@@@var_0_object:ClearReplies();
		var_427_bool = 0; var_428_object = Obj();
		var_428_object = var_1_object;
		func_2669(var_428_object);
		if(var_427_bool != 0) {
			@@@var_0_object:AddReply((int)521515, (int)22677, (int)22676);
		}
		@@@var_0_object:AddReply((int)521518, (int)-1, (int)22679);
		@@@var_0_object:AddReply((int)523976, (int)-1, (int)25264);
		goto Label_891;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x359";
	}
Label_891:
	var_442_bool = 0;
	func_2620(var_442_bool);
	if(var_442_bool != 0) {

	Label_895:
		lshWaitForAnimEnd();
		var_443_string = var_3_string;
		if(var_443_string != 0) {
		} else {
			var_444_string = "";
			var_444_string = var_2_object;
			func_2494(var_444_string);
			goto Label_895;
	}
		PlayAnimation("all", "idle");

	Label_910:
		WaitForAnimEnd();
		var_447_string = var_3_string;
		if(var_447_string != 0) {
			goto Label_920;
		}
		PlayAnimation("all", "idle");
		goto Label_910;
	}
	goto Label_920;
	
Label_920:
	return 0;
	
}


func_1121(var_0_object, var_454_int, var_455_object)
{
	var_457_object = Obj(); var_458_bool = 0; var_459_int = 0; var_460_bool = 0; var_461_object = Obj(); var_462_bool = 0; var_463_int = 0; var_464_bool = 0;
	var_0_object = var_455_object;
	var_465_bool = 0; var_466_object = Obj(); var_467_float = 0;
	var_455_object = var_466_object;
	func_2269(var_465_bool, var_466_object, (float)70.0);
	var_468_bool = var_465_bool == 0; //@nz
	if(var_468_bool != 0) {
		var_454_int = -2;
		return 8;
	}
	CreateDialog(var_461_object);
	var_469_int = 0;
	func_2614(var_469_int);
	@@var_461_object:SetNPCName(var_469_int);
	var_470_int = 0;
	func_2612(var_470_int);
	@@var_461_object:SetNPCDescription(var_470_int);
	var_471_string = "";
	func_2616(var_471_string);
	@@var_461_object:SetPhoto(var_471_string);
	var_472_string = "";
	func_2618(var_472_string);
	@@var_461_object:SetPhoto2(var_472_string);
	var_473_int = 0;
	func_2824(var_473_int);
	@@var_461_object:SetPlayerName(var_473_int);
	IsOverrideActive(var_462_bool);
	var_474_bool = var_462_bool;
	if(var_474_bool != 0) {
		var_454_int = -2;
		return 8;
	}
	DoDialog(var_461_object);
	var_475_bool = 0; var_476_object = Obj();
	func_2547(Obj());
	var_477_object = var_476_object;
	func_2356(var_475_bool, var_476_object);
	var_478_object = Obj(); var_479_object = Obj();
	var_455_object = var_478_object;
	var_461_object = var_479_object;
	TaskCall(7);
	func_1202(var_480_object, var_481_object, var_482_string, var_483_bool, var_478_object, var_479_object);
	TaskReturn();
	@@var_461_object:IsDialogEnd(var_464_bool);
	
Label_1184:
	var_522_bool = var_464_bool == 0; //@nz
	if(var_522_bool != 0) {
		sync();
		@@var_461_object:IsDialogEnd(var_464_bool);
		goto Label_1184;
	}
	var_455_object = Obj();
	func_2338();
	StopDialog(var_461_object);
	@@var_461_object:GetReturnValue((int)-1);
	var_463_int = var_454_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2663()
{
	SetVariable("b10q01TalkKaterina", (int)1);
	return 0;
}


func_2669(var_427_bool)
{
	var_429_int = 0; var_430_string = "";
	func_2563(var_429_int, "b8q03");
	var_432_bool = var_429_int == (int)1;
	if(var_432_bool != 0) {
		var_427_bool = 1;
		return 0;
	}
	var_427_bool = 0;
	return 0;
}


func_2414(var_135_bool, var_136_object)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = "";
	var_142_string = "c";
	var_143_int = 0;
	
Label_2417:
	if((int)1 != 0) {
		var_149_int = var_143_int + (int)1;
		var_150_int = var_142_string + var_149_int;
		@@var_136_object:HasProperty(var_150_int, var_144_bool);
		var_151_bool = var_144_bool == 0; //@nz
		if(var_151_bool != 0) {
		} else {
			var_143_int = var_143_int + (int)1;
			goto Label_2417;
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
	func_2525(var_158_bool, var_159_string);
	var_158_bool = var_135_bool;
	return 10;
	
}


func_2161()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	WaitForAnimEnd();
	var_48_bool = 0;
	func_2264(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 12;
	}
	func_2595((int)0);
	var_50_int = var_42_int;
	var_43_int = 0;
	
Label_2175:
	var_63_bool = 0;
	var_63_bool = 0;
	var_65_bool = var_43_int < (int)5;
	if(var_65_bool != 0) {
		var_66_bool = 0;
		func_2264(var_66_bool);
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
				func_2588(var_77_string, var_78_int);
				PlayAnimation("all", var_77_string);
				WaitForAnimEnd(var_47_bool);
				var_79_bool = var_47_bool == 0; //@nz
				if(var_79_bool == 0) goto Label_2216;
				goto Label_2227;
		}
		Label_2216:
			var_70_bool = 0;
			func_2230(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_2227;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_2175;

		}
	}
Label_2227:
	ResetAAS();
	return 12;
	
}


func_2681(var_495_bool)
{
	var_497_int = 0; var_498_string = "";
	func_2563(var_497_int, "b10q01");
	var_500_bool = var_497_int == (int)4;
	if(var_500_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_495_bool = 0;
	return 0;
}


func_1914(var_2_object, var_620_string)
{
	var_621_bool = 0;
	func_2620(var_621_bool);
	var_622_bool = var_621_bool == 0; //@nz
	if(var_622_bool != 0) {
		return 0;
	}
	var_623_bool = var_620_string == var_2_object;
	if(var_623_bool != 0) {
		return 0;
	}
	var_624_string = ""; var_625_bool = 0;
	var_620_string = var_624_string;
	var_627_bool = var_620_string == "";
	if(var_627_bool != 0) {
		var_625_bool = 0;
	} else {
		var_625_bool = 1;
	}
	func_2510(var_624_string, var_625_bool);
	var_2_object = var_620_string;
	return 0;
	
}


func_1660(var_2_object, var_560_string)
{
	var_561_bool = 0;
	func_2620(var_561_bool);
	var_562_bool = var_561_bool == 0; //@nz
	if(var_562_bool != 0) {
		return 0;
	}
	var_563_bool = var_560_string == var_2_object;
	if(var_563_bool != 0) {
		return 0;
	}
	var_564_string = ""; var_565_bool = 0;
	var_560_string = var_564_string;
	var_567_bool = var_560_string == "";
	if(var_567_bool != 0) {
		var_565_bool = 0;
	} else {
		var_565_bool = 1;
	}
	func_2510(var_564_string, var_565_bool);
	var_2_object = var_560_string;
	return 0;
	
}


func_2693(var_501_bool)
{
	var_503_int = 0; var_504_string = "";
	func_2563(var_503_int, "b10q01TalkKaterina");
	var_506_bool = var_503_int == (int)1;
	if(var_506_bool != 0) {
		var_501_bool = 1;
		return 0;
	}
	var_501_bool = 0;
	return 0;
}


func_139(var_2_object, var_226_string)
{
	var_227_bool = 0;
	func_2620(var_227_bool);
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
	func_2510(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	return 0;
	
}


func_2705(var_313_bool)
{
	var_315_int = 0; var_316_string = "";
	func_2563(var_315_int, "b2q01");
	var_320_bool = var_315_int == (int)0;
	if(var_320_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_2451(var_166_bool, var_167_object)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = "";
	var_179_int = 0;
	func_2573(var_179_int);
	var_185_int = "d" + var_179_int;
	var_173_string = var_185_int + "m";
	var_174_int = 0;
	
Label_2460:
	if((int)1 != 0) {
		var_189_int = var_174_int + (int)1;
		var_190_int = var_173_string + var_189_int;
		@@var_167_object:HasProperty(var_190_int, var_175_bool);
		var_191_bool = var_175_bool == 0; //@nz
		if(var_191_bool != 0) {
		} else {
			var_174_int = var_174_int + (int)1;
			goto Label_2460;
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
	func_2525(var_198_bool, var_199_string);
	var_198_bool = var_166_bool;
	return 10;
	
}


func_921(var_2_object, var_418_string)
{
	var_419_bool = 0;
	func_2620(var_419_bool);
	var_420_bool = var_419_bool == 0; //@nz
	if(var_420_bool != 0) {
		return 0;
	}
	var_421_bool = var_418_string == var_2_object;
	if(var_421_bool != 0) {
		return 0;
	}
	var_422_string = ""; var_423_bool = 0;
	var_418_string = var_422_string;
	var_425_bool = var_418_string == "";
	if(var_425_bool != 0) {
		var_423_bool = 0;
	} else {
		var_423_bool = 1;
	}
	func_2510(var_422_string, var_423_bool);
	var_2_object = var_418_string;
	return 0;
	
}


func_412(var_2_object, var_332_string)
{
	var_333_bool = 0;
	func_2620(var_333_bool);
	var_334_bool = var_333_bool == 0; //@nz
	if(var_334_bool != 0) {
		return 0;
	}
	var_335_bool = var_332_string == var_2_object;
	if(var_335_bool != 0) {
		return 0;
	}
	var_336_string = ""; var_337_bool = 0;
	var_332_string = var_336_string;
	var_339_bool = var_332_string == "";
	if(var_339_bool != 0) {
		var_337_bool = 0;
	} else {
		var_337_bool = 1;
	}
	func_2510(var_336_string, var_337_bool);
	var_2_object = var_332_string;
	return 0;
	
}


func_2717(var_322_bool)
{
	var_324_int = 0; var_325_string = "";
	func_2563(var_324_int, "oob2Katerina1");
	var_327_bool = var_324_int == (int)0;
	if(var_327_bool != 0) {
		var_322_bool = 1;
		return 0;
	}
	var_322_bool = 0;
	return 0;
}


func_2729(var_358_bool)
{
	var_360_int = 0; var_361_string = "";
	func_2563(var_360_int, "oob2Katerina2");
	var_363_bool = var_360_int == (int)0;
	if(var_363_bool != 0) {
		var_358_bool = 1;
		return 0;
	}
	var_358_bool = 0;
	return 0;
}


func_1202(var_0_object, var_1_object, var_2_object, var_3_string, var_478_object, var_479_object)
{
	var_0_object = var_479_object;
	var_1_object = var_478_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_485_string = "";
		func_1275(var_479_object, "Neutral");
		@@@var_0_object:SetMessage((int)521930);
		@@@var_0_object:ClearReplies();
		var_494_bool = 0;
		var_494_bool = 0;
		var_495_bool = 0; var_496_object = Obj();
		var_496_object = var_1_object;
		func_2681(var_496_object);
		if(var_495_bool != 0) {
			var_501_bool = 0; var_502_object = Obj();
			var_502_object = var_1_object;
			func_2693(var_502_object);
			var_507_bool = var_501_bool == 0; //@nz
			if(var_507_bool != 0) {
				var_494_bool = 1;
			}
		}
		if(var_494_bool != 0) {
			@@@var_0_object:AddReply((int)521931, (int)23673, (int)23105);
		}
		@@@var_0_object:AddReply((int)521932, (int)-1, (int)23106);
		goto Label_1245;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4b6";
	}
Label_1245:
	var_514_bool = 0;
	func_2620(var_514_bool);
	if(var_514_bool != 0) {

	Label_1249:
		lshWaitForAnimEnd();
		var_515_string = var_3_string;
		if(var_515_string != 0) {
		} else {
			var_516_string = "";
			var_516_string = var_2_object;
			func_2494(var_516_string);
			goto Label_1249;
	}
		PlayAnimation("all", "idle");

	Label_1264:
		WaitForAnimEnd();
		var_519_string = var_3_string;
		if(var_519_string != 0) {
			goto Label_1274;
		}
		PlayAnimation("all", "idle");
		goto Label_1264;
	}
	goto Label_1274;
	
Label_1274:
	return 0;
	
}


func_2741(var_371_bool)
{
	var_373_int = 0; var_374_string = "";
	func_2563(var_373_int, "oob2Katerina3");
	var_376_bool = var_373_int == (int)0;
	if(var_376_bool != 0) {
		var_371_bool = 1;
		return 0;
	}
	var_371_bool = 0;
	return 0;
}


func_2230(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_2232()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2237(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_2494(var_252_string)
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


func_1985(var_0_object)
{
	var_32_bool = 0;
	func_2264(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1994:
	func_2161();
	goto Label_1994;
}
EMIT "Return(); Pop(0)";


func_2753()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)577, (int)2, (int)530657);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_2779(var_62_bool, var_63_object, (int)575);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2245(var_39_bool, var_40_cvector)
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


func_203(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0;
	var_0_object = var_282_object;
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0;
	var_282_object = var_293_object;
	func_2269(var_292_bool, var_293_object, (float)70.0);
	var_295_bool = var_292_bool == 0; //@nz
	if(var_295_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	CreateDialog(var_288_object);
	var_296_int = 0;
	func_2614(var_296_int);
	@@var_288_object:SetNPCName(var_296_int);
	var_297_int = 0;
	func_2612(var_297_int);
	@@var_288_object:SetNPCDescription(var_297_int);
	var_298_string = "";
	func_2616(var_298_string);
	@@var_288_object:SetPhoto(var_298_string);
	var_299_string = "";
	func_2618(var_299_string);
	@@var_288_object:SetPhoto2(var_299_string);
	var_300_int = 0;
	func_2824(var_300_int);
	@@var_288_object:SetPlayerName(var_300_int);
	IsOverrideActive(var_289_bool);
	var_301_bool = var_289_bool;
	if(var_301_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	DoDialog(var_288_object);
	var_302_bool = 0; var_303_object = Obj();
	func_2547(Obj());
	var_304_object = var_303_object;
	func_2356(var_302_bool, var_303_object);
	var_305_object = Obj(); var_306_object = Obj();
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(3);
	func_284(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	@@var_288_object:IsDialogEnd(var_291_bool);
	
Label_266:
	var_383_bool = var_291_bool == 0; //@nz
	if(var_383_bool != 0) {
		sync();
		@@var_288_object:IsDialogEnd(var_291_bool);
		goto Label_266;
	}
	var_282_object = Obj();
	func_2338();
	StopDialog(var_288_object);
	@@var_288_object:GetReturnValue((int)-1);
	var_290_int = var_281_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2510(var_230_string, var_231_bool)
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


func_2255(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_2245(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_1999(var_56_bool)
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
	func_2255(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2766(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj();
	GetDiaryRoot(var_73_object);
	var_74_bool = var_73_object == 0; //@nz
	if(var_74_bool != 0) {
		Trace("Can't retrieve diary root");
		var_71_object = 0;
		return 2;
	}
	var_73_object = var_71_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2264(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_2779(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0;
	func_2766(Obj());
	var_71_object = var_68_object;
	@@var_68_object:Find(var_64_int, var_69_object);
	var_76_bool = var_69_object == 0; //@nz
	if(var_76_bool != 0) {
		var_78_int = "Can't find diary parent with id: " + var_64_int;
		Trace(var_78_int);
		var_62_bool = 0;
		return 6;
	}
	@@var_69_object:AddChild(var_63_object);
	SendWorldWndMessage((int)7);
	@@var_63_object:GetCategory(var_70_int);
	SetDiarySection(var_70_int);
	var_62_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2269(var_63_bool, var_64_object, var_65_float)
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
	func_2553(var_90_cvector, var_91_cvector);
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
	func_2620(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		HasAnimationTrack(var_83_bool, "head");
		var_108_bool = var_83_bool;
		if(var_108_bool == 0) goto Label_2332;
		LookAsyncCamera("head");
	}
Label_2332:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_63_bool = 1;
	return 18;
	
}


func_2014(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_2525(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0;
	var_162_bool = 0;
	func_2620(var_162_bool);
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


func_2019(var_39_bool)
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
	func_2237(var_46_float, var_47_object);
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


func_2540()
{
	var_34_bool = 0;
	func_2620(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1516(var_0_object, var_529_int, var_530_object)
{
	var_532_object = Obj(); var_533_bool = 0; var_534_int = 0; var_535_bool = 0; var_536_object = Obj(); var_537_bool = 0; var_538_int = 0; var_539_bool = 0;
	var_0_object = var_530_object;
	var_540_bool = 0; var_541_object = Obj(); var_542_float = 0;
	var_530_object = var_541_object;
	func_2269(var_540_bool, var_541_object, (float)70.0);
	var_543_bool = var_540_bool == 0; //@nz
	if(var_543_bool != 0) {
		var_529_int = -2;
		return 8;
	}
	CreateDialog(var_536_object);
	var_544_int = 0;
	func_2614(var_544_int);
	@@var_536_object:SetNPCName(var_544_int);
	var_545_int = 0;
	func_2612(var_545_int);
	@@var_536_object:SetNPCDescription(var_545_int);
	var_546_string = "";
	func_2616(var_546_string);
	@@var_536_object:SetPhoto(var_546_string);
	var_547_string = "";
	func_2618(var_547_string);
	@@var_536_object:SetPhoto2(var_547_string);
	var_548_int = 0;
	func_2824(var_548_int);
	@@var_536_object:SetPlayerName(var_548_int);
	IsOverrideActive(var_537_bool);
	var_549_bool = var_537_bool;
	if(var_549_bool != 0) {
		var_529_int = -2;
		return 8;
	}
	DoDialog(var_536_object);
	var_550_bool = 0; var_551_object = Obj();
	func_2547(Obj());
	var_552_object = var_551_object;
	func_2356(var_550_bool, var_551_object);
	var_553_object = Obj(); var_554_object = Obj();
	var_530_object = var_553_object;
	var_536_object = var_554_object;
	TaskCall(9);
	func_1597(var_555_object, var_556_object, var_557_string, var_558_bool, var_553_object, var_554_object);
	TaskReturn();
	@@var_536_object:IsDialogEnd(var_539_bool);
	
Label_1579:
	var_586_bool = var_539_bool == 0; //@nz
	if(var_586_bool != 0) {
		sync();
		@@var_536_object:IsDialogEnd(var_539_bool);
		goto Label_1579;
	}
	var_530_object = Obj();
	func_2338();
	StopDialog(var_536_object);
	@@var_536_object:GetReturnValue((int)-1);
	var_538_int = var_529_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1775(var_0_object, var_589_int, var_590_object)
{
	var_592_object = Obj(); var_593_bool = 0; var_594_int = 0; var_595_bool = 0; var_596_object = Obj(); var_597_bool = 0; var_598_int = 0; var_599_bool = 0;
	var_0_object = var_590_object;
	var_600_bool = 0; var_601_object = Obj(); var_602_float = 0;
	var_590_object = var_601_object;
	func_2269(var_600_bool, var_601_object, (float)70.0);
	var_603_bool = var_600_bool == 0; //@nz
	if(var_603_bool != 0) {
		var_589_int = -2;
		return 8;
	}
	CreateDialog(var_596_object);
	var_604_int = 0;
	func_2614(var_604_int);
	@@var_596_object:SetNPCName(var_604_int);
	var_605_int = 0;
	func_2612(var_605_int);
	@@var_596_object:SetNPCDescription(var_605_int);
	var_606_string = "";
	func_2616(var_606_string);
	@@var_596_object:SetPhoto(var_606_string);
	var_607_string = "";
	func_2618(var_607_string);
	@@var_596_object:SetPhoto2(var_607_string);
	var_608_int = 0;
	func_2824(var_608_int);
	@@var_596_object:SetPlayerName(var_608_int);
	IsOverrideActive(var_597_bool);
	var_609_bool = var_597_bool;
	if(var_609_bool != 0) {
		var_589_int = -2;
		return 8;
	}
	DoDialog(var_596_object);
	var_610_bool = 0; var_611_object = Obj();
	func_2547(Obj());
	var_612_object = var_611_object;
	func_2356(var_610_bool, var_611_object);
	var_613_object = Obj(); var_614_object = Obj();
	var_590_object = var_613_object;
	var_596_object = var_614_object;
	TaskCall(11);
	func_1856(var_615_object, var_616_object, var_617_string, var_618_bool, var_613_object, var_614_object);
	TaskReturn();
	@@var_596_object:IsDialogEnd(var_599_bool);
	
Label_1838:
	var_643_bool = var_599_bool == 0; //@nz
	if(var_643_bool != 0) {
		sync();
		@@var_596_object:IsDialogEnd(var_599_bool);
		goto Label_1838;
	}
	var_590_object = Obj();
	func_2338();
	StopDialog(var_596_object);
	@@var_596_object:GetReturnValue((int)-1);
	var_598_int = var_589_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2547(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj();
	self(var_128_object);
	var_128_object = var_126_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2807(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj();
	GetMainOutdoorScene(var_46_object);
	var_48_bool = var_46_object == 0; //@ne
	if(var_48_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_47_object = 0;
		var_47_object = var_43_object;
		return 4;
	}
	@@var_46_object:GetMap(var_47_object);
	var_47_object = var_43_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2553(var_90_cvector, var_91_cvector)
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


func_1275(var_2_object, var_485_string)
{
	var_486_bool = 0;
	func_2620(var_486_bool);
	var_487_bool = var_486_bool == 0; //@nz
	if(var_487_bool != 0) {
		return 0;
	}
	var_488_bool = var_485_string == var_2_object;
	if(var_488_bool != 0) {
		return 0;
	}
	var_489_string = ""; var_490_bool = 0;
	var_485_string = var_489_string;
	var_492_bool = var_485_string == "";
	if(var_492_bool != 0) {
		var_490_bool = 0;
	} else {
		var_490_bool = 1;
	}
	func_2510(var_489_string, var_490_bool);
	var_2_object = var_485_string;
	return 0;
	
}


