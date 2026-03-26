// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Oracle|W:Refusal|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Starshina.png|W:ui/NPC_Starshina_b.png|W:k8q01|W:ook11Starshina1|W:k11q01|W:quest_k11_01|W:place_burah|W:ook11Starshina2|W:fail|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x6af
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x18a vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3c3 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x63b vars=int,int
// @TASK_8: vars=cvector params=0
// @EVENT_7: op=0x6fb vars=int
// @EVENT_6: op=0x721 vars=
// @EVENT_5: op=0x730 vars=
// @EVENT_45: op=0x73d vars=bool
// @EVENT_0: op=0x749 vars=object
// @PE: 0x51,0x8b,0xa1,0x11c,0x174,0x18a,0x327,0x3ad,0x3c3,0x5e6,0x625,0x63b,0x6fb,0x721,0x73d,0x912,0x93a,0x943,0x94c,0x952,0x960,0x966,0x970,0x97c,0x988,0x994,0x9a0,0x9ac,0xa26

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_2273();
		var_26_bool = var_21_bool == (int)26884;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_139(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525528);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525529, (int)-1, (int)26885);
			@@@var_0_object:AddReply((int)529271, (int)-1, (int)30724);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_2360(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_2273();
		var_26_bool = var_22_cvector == (int)27712;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_2362();
		}
		var_55_bool = var_22_cvector == (int)27732;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_2371();
		}
		var_69_bool = var_22_cvector == (int)27734;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_2371();
		}
		var_73_bool = var_21_bool == (int)27705;
		if(var_73_bool != 0) {
			var_74_bool = 0; var_75_object = Obj();
			var_75_object = var_1_object;
			func_2416(var_75_object);
			if(var_74_bool != 0) {
				var_82_string = "";
				func_372(var_22_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526430);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526431, (int)27707, (int)27706);
				@@@var_0_object:AddReply((int)529003, (int)30441, (int)30440);
				return 0;
			}
			var_106_string = "";
			func_372(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526438);
			@@@var_0_object:ClearReplies();
			var_108_bool = 0; var_109_object = Obj();
			var_109_object = var_1_object;
			func_2428(var_109_object);
			if(var_108_bool != 0) {
				@@@var_0_object:AddReply((int)526450, (int)27726, (int)27725);
			}
			@@@var_0_object:AddReply((int)526439, (int)-1, (int)27714);
			return 0;
		}
		var_121_bool = var_21_bool == (int)27726;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_372(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526451);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526452, (int)30435, (int)27727);
			@@@var_0_object:AddReply((int)528997, (int)30435, (int)30434);
			return 0;
		}
		var_131_bool = var_21_bool == (int)30435;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_372(var_22_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)528998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528999, (int)27728, (int)30436);
			return 0;
		}
		var_138_bool = var_21_bool == (int)27728;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_372(var_22_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)526453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526454, (int)27731, (int)27729);
			@@@var_0_object:AddReply((int)526455, (int)27733, (int)27730);
			return 0;
		}
		var_148_bool = var_21_bool == (int)27733;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_372(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526458);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526459, (int)-1, (int)27734);
			return 0;
		}
		var_155_bool = var_21_bool == (int)27731;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_372(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526456);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529001, (int)30439, (int)30438);
			return 0;
		}
		var_162_bool = var_21_bool == (int)30439;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_372(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526457, (int)-1, (int)27732);
			return 0;
		}
		var_169_bool = var_21_bool == (int)30441;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_372(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529004);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529005, (int)27707, (int)30442);
			@@@var_0_object:AddReply((int)529006, (int)30445, (int)30444);
			return 0;
		}
		var_179_bool = var_21_bool == (int)30445;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_372(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529007);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529008, (int)27707, (int)30446);
			return 0;
		}
		var_186_bool = var_21_bool == (int)27707;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_372(var_22_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)526432);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526433, (int)27709, (int)27708);
			return 0;
		}
		var_193_bool = var_21_bool == (int)27709;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_372(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526435, (int)27711, (int)27710);
			@@@var_0_object:AddReply((int)529009, (int)27711, (int)30448);
			return 0;
		}
		var_203_bool = var_21_bool == (int)27711;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_372(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529010, (int)30450, (int)30449);
			return 0;
		}
		var_210_bool = var_21_bool == (int)30450;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_372(var_22_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)529011);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526437, (int)-1, (int)27712);
			return 0;
		}
		var_3_string = true;
		var_216_bool = 0;
		func_2360(var_216_bool);
		if(var_216_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x18b";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_2273();
		var_26_bool = var_22_cvector == (int)28709;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_2386();
		}
		var_61_bool = var_22_cvector == (int)28711;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_2406();
		}
		var_76_bool = var_22_cvector == (int)28669;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_2386();
		}
		var_80_bool = var_22_cvector == (int)28696;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_2400();
		}
		var_86_bool = var_21_bool == (int)28699;
		if(var_86_bool != 0) {
			var_87_bool = 0;
			var_87_bool = 0;
			var_88_bool = 0; var_89_object = Obj();
			var_89_object = var_1_object;
			func_2440(var_89_object);
			if(var_88_bool != 0) {
				var_96_bool = 0; var_97_object = Obj();
				var_97_object = var_1_object;
				func_2452(var_97_object);
				if(var_96_bool != 0) {
					var_87_bool = 1;
				}
			}
			if(var_87_bool != 0) {
				var_102_object = Obj(); var_103_object = Obj();
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_2380();
				var_106_string = "";
				func_941(var_22_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)527376);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527379, (int)28703, (int)28702);
				return 0;
			}
			var_127_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527212);
			@@@var_0_object:ClearReplies();
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_2440(var_130_object);
			if(var_129_bool != 0) {
				@@@var_0_object:AddReply((int)527339, (int)28658, (int)28657);
			}
			var_134_bool = 0;
			var_134_bool = 1;
			var_135_bool = 0;
			var_135_bool = 0;
			var_136_bool = 0; var_137_object = Obj();
			var_137_object = var_1_object;
			func_2476(var_137_object);
			if(var_136_bool != 0) {
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_2440(var_143_object);
				if(var_142_bool != 0) {
					var_135_bool = 1;
				}
			}
			if(var_135_bool != 1) {
				var_144_bool = 0;
				var_144_bool = 0;
				var_145_bool = 0; var_146_object = Obj();
				var_146_object = var_1_object;
				func_2464(var_146_object);
				if(var_145_bool != 0) {
					var_151_bool = 0; var_152_object = Obj();
					var_152_object = var_1_object;
					func_2476(var_152_object);
					if(var_151_bool != 0) {
						var_144_bool = 1;
					}
				}
				if(var_144_bool != 1) {
					var_134_bool = 0;
				}
			}
			if(var_134_bool != 0) {
				@@@var_0_object:AddReply((int)527373, (int)28707, (int)28696);
			}
			@@@var_0_object:AddReply((int)527218, (int)-1, (int)28526);
			return 0;
		}
		var_160_bool = var_21_bool == (int)28707;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_941(var_22_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)527383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527384, (int)28697, (int)28708);
			return 0;
		}
		var_167_bool = var_21_bool == (int)28697;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_941(var_22_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)527374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527375, (int)28522, (int)28698);
			return 0;
		}
		var_174_bool = var_21_bool == (int)28522;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527215, (int)28524, (int)28523);
			return 0;
		}
		var_181_bool = var_21_bool == (int)28524;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527217, (int)-1, (int)28525);
			return 0;
		}
		var_188_bool = var_21_bool == (int)28658;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527340);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527355, (int)28675, (int)28674);
			return 0;
		}
		var_195_bool = var_21_bool == (int)28675;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527341, (int)28660, (int)28659);
			@@@var_0_object:AddReply((int)527352, (int)28671, (int)28670);
			return 0;
		}
		var_205_bool = var_21_bool == (int)28671;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527354, (int)28662, (int)28672);
			return 0;
		}
		var_212_bool = var_21_bool == (int)28660;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527342);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527343, (int)28662, (int)28661);
			return 0;
		}
		var_219_bool = var_21_bool == (int)28662;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527344);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527345, (int)28664, (int)28663);
			return 0;
		}
		var_226_bool = var_21_bool == (int)28664;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_941(var_22_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)527346);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527347, (int)28666, (int)28665);
			return 0;
		}
		var_233_bool = var_21_bool == (int)28666;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_941(var_22_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)527348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527349, (int)28668, (int)28667);
			return 0;
		}
		var_240_bool = var_21_bool == (int)28668;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_941(var_22_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)527350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527351, (int)-1, (int)28669);
			return 0;
		}
		var_247_bool = var_21_bool == (int)28703;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527213, (int)28693, (int)28521);
			return 0;
		}
		var_254_bool = var_21_bool == (int)28693;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527370);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527371, (int)28700, (int)28694);
			return 0;
		}
		var_261_bool = var_21_bool == (int)28700;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_941(var_22_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)527377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527378, (int)28695, (int)28701);
			return 0;
		}
		var_268_bool = var_21_bool == (int)28695;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_941(var_22_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)527372);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527381, (int)28706, (int)28704);
			return 0;
		}
		var_275_bool = var_21_bool == (int)28706;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_941(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527382);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527385, (int)-1, (int)28709);
			@@@var_0_object:AddReply((int)527387, (int)-1, (int)28711);
			return 0;
		}
		var_3_string = true;
		var_284_bool = 0;
		func_2360(var_284_bool);
		if(var_284_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3c4";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	if((int)1 != 0) {
		func_2273();
		var_26_bool = var_21_int == (int)41258;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_1573(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542623, (int)45026, (int)45025);
			@@@var_0_object:AddReply((int)542622, (int)-1, (int)45024);
			@@@var_0_object:AddReply((int)539316, (int)-1, (int)41259);
			return 0;
		}
		var_55_bool = var_21_int == (int)45026;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_1573(var_22_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)542624);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542629, (int)45032, (int)45031);
			@@@var_0_object:AddReply((int)542625, (int)45028, (int)45027);
			return 0;
		}
		var_65_bool = var_21_int == (int)45028;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_1573(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542627, (int)-1, (int)45029);
			@@@var_0_object:AddReply((int)542628, (int)-1, (int)45030);
			return 0;
		}
		var_75_bool = var_21_int == (int)45032;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_1573(var_22_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)542630);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542631, (int)-1, (int)45033);
			@@@var_0_object:AddReply((int)542632, (int)-1, (int)45034);
			return 0;
		}
		var_3_string = true;
		var_84_bool = 0;
		func_2360(var_84_bool);
		if(var_84_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x63c";
	
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_23_bool = var_21_int == (int)10;
	if(var_23_bool != 0) {
		func_1783();
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = 0;
		func_1997(var_26_bool);
		if(var_26_bool != 0) {
			var_29_bool = 0;
			func_1752(var_29_bool);
			if(var_29_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_46_bool = 0;
			func_1732(var_46_bool);
			if(var_46_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				func_2280(Obj());
				var_67_object = var_66_object;
				func_2147(var_65_bool, var_66_object);
			}
		} else {
			func_1747(var_21_int);
			func_1774();
		}
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1965();
	func_1783();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0();
	func_1783();
	var_22_string = "";
	func_2227("Neutral");
	func_1774();
	return 0;
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		func_1774();
	} else {
		var_28_string = "";
		func_2227("Neutral");
	}
	return 0;
	
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsOverrideActive(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		EventDisable(0);
		func_1965();
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_1988(var_25_bool, var_26_object);
		EventEnable(0);
		var_39_object = Obj();
		var_21_object = var_39_object;
		func_2598(var_39_object);
		var_514_string = "";
		func_2227("Neutral");
		func_1783();
		func_1774();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1718(var_20_cvector);
	return 0;
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0;
	var_0_object = var_43_object;
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0;
	var_43_object = var_54_object;
	func_2002(var_53_bool, var_54_object, (float)130.0);
	var_100_bool = var_53_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	CreateDialog(var_49_object);
	var_101_int = 0;
	func_2354(var_101_int);
	@@var_49_object:SetNPCName(var_101_int);
	var_102_int = 0;
	func_2352(var_102_int);
	@@var_49_object:SetNPCDescription(var_102_int);
	var_103_string = "";
	func_2356(var_103_string);
	@@var_49_object:SetPhoto(var_103_string);
	var_104_string = "";
	func_2358(var_104_string);
	@@var_49_object:SetPhoto2(var_104_string);
	var_105_int = 0;
	func_2581(var_105_int);
	@@var_49_object:SetPlayerName(var_105_int);
	IsOverrideActive(var_50_bool);
	var_113_bool = var_50_bool;
	if(var_113_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	DoDialog(var_49_object);
	var_114_bool = 0; var_115_object = Obj();
	func_2280(Obj());
	var_116_object = var_115_object;
	func_2089(var_114_bool, var_115_object);
	var_209_object = Obj(); var_210_object = Obj();
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(1);
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	@@var_49_object:IsDialogEnd(var_52_bool);
	
Label_63:
	var_258_bool = var_52_bool == 0; //@nz
	if(var_258_bool != 0) {
		sync();
		@@var_49_object:IsDialogEnd(var_52_bool);
		goto Label_63;
	}
	var_43_object = Obj();
	func_2071();
	StopDialog(var_49_object);
	@@var_49_object:GetReturnValue((int)-1);
	var_51_int = var_42_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2313(var_169_int)
{
	var_170_float = 0; var_171_float = 0;
	GetGameTime(var_171_float);
	var_173_int = 0;
	var_173_int = var_171_float / (int)24;
	var_169_int = (int)1 + var_173_int;
	return 2;
}


func_2322(var_268_bool, var_269_int)
{
	var_270_int = 0;
	func_2313(var_270_int);
	var_268_bool = var_270_int == var_269_int;
	return 0;
}


func_2581(var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	GetVariable("branch", var_107_int);
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0xa24";
	}
	var_112_bool = var_107_int == (int)1;
	if(var_112_bool != 0) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
	return 2;
}


func_2071()
{
	var_260_bool = 0; var_261_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_263_bool = 0;
	func_2360(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		HasAnimationTrack(var_261_bool, "head");
		var_265_bool = var_261_bool;
		if(var_265_bool == 0) goto Label_2088;
		UnlookAsync("head");
	}
Label_2088:
	return 2;
	
}


func_2328(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	var_50_int = var_47_int;
	if(var_50_int != 0) {
		"idle" = "idle" + var_47_int;
	}
	var_49_string = var_46_string;
	return 2;
}


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object;
	var_1_object = var_295_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_302_bool = 0; var_303_object = Obj();
		var_303_object = var_1_object;
		func_2416(var_303_object);
		if(var_302_bool != 0) {
			var_310_string = "";
			func_372(var_296_object, "Neutral");
			@@@var_0_object:SetMessage((int)526430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526431, (int)27707, (int)27706);
			@@@var_0_object:AddReply((int)529003, (int)30441, (int)30440);
		} else {
				var_333_string = "";
				func_372(var_296_object, "Neutral");
				@@@var_0_object:SetMessage((int)526438);
				@@@var_0_object:ClearReplies();
				var_335_bool = 0; var_336_object = Obj();
				var_336_object = var_1_object;
				func_2428(var_336_object);
				if(var_335_bool != 0) {
					@@@var_0_object:AddReply((int)526450, (int)27726, (int)27725);
				}
				@@@var_0_object:AddReply((int)526439, (int)-1, (int)27714);
				goto Label_342;
		}
	}
Label_342:
	var_325_bool = 0;
	func_2360(var_325_bool);
	if(var_325_bool != 0) {

	Label_346:
		lshWaitForAnimEnd();
		var_326_string = var_3_string;
		if(var_326_string != 0) {
		} else {
			var_327_string = "";
			var_327_string = var_2_object;
			func_2227(var_327_string);
			goto Label_346;
	}
		PlayAnimation("all", "idle");

	Label_361:
		WaitForAnimEnd();
		var_330_string = var_3_string;
		if(var_330_string != 0) {
			goto Label_371;
		}
		PlayAnimation("all", "idle");
		goto Label_361;

	}
	goto Label_371;
	
Label_371:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x120";


func_2335(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_43_int = 0;
	
Label_2337:
	var_46_string = ""; var_47_int = 0;
	var_43_int = var_47_int;
	func_2328(var_46_string, var_47_int);
	HasAnimation(var_44_bool, "all", var_46_string);
	var_51_bool = var_44_bool == 0; //@nz
	if(var_51_bool != 0) {
	} else {
		var_43_int = var_43_int + (int)1;
		goto Label_2337;
	}
	var_43_int = var_40_int;
	return 4;
	
}


func_1573(var_2_object, var_486_string)
{
	var_487_bool = 0;
	func_2360(var_487_bool);
	var_488_bool = var_487_bool == 0; //@nz
	if(var_488_bool != 0) {
		return 0;
	}
	var_489_bool = var_486_string == var_2_object;
	if(var_489_bool != 0) {
		return 0;
	}
	var_490_string = ""; var_491_bool = 0;
	var_486_string = var_490_string;
	var_493_bool = var_486_string == "";
	if(var_493_bool != 0) {
		var_491_bool = 0;
	} else {
		var_491_bool = 1;
	}
	func_2243(var_490_string, var_491_bool);
	var_2_object = var_486_string;
	return 0;
	
}


func_2598(var_39_object)
{
	var_40_bool = GlobalVars[1];
	var_41_bool = var_40_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_42_int = 0; var_43_object = Obj();
		var_39_object = var_43_object;
		TaskCall(0);
		func_0(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_267_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_268_bool = 0; var_269_int = 0;
	func_2322(var_268_bool, (int)8);
	if(var_268_bool != 0) {
		var_271_int = 0; var_272_object = Obj();
		var_39_object = var_272_object;
		TaskCall(2);
		func_203(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	var_349_bool = 0; var_350_int = 0;
	func_2322(var_349_bool, (int)11);
	if(var_349_bool != 0) {
		var_351_int = 0; var_352_object = Obj();
		var_39_object = var_352_object;
		TaskCall(4);
		func_726(var_353_object, var_351_int, var_352_object);
		TaskReturn();
		return 0;
	}
	var_453_bool = 0; var_454_int = 0;
	func_2322(var_453_bool, (int)12);
	if(var_453_bool != 0) {
		var_455_int = 0; var_456_object = Obj();
		var_39_object = var_456_object;
		TaskCall(6);
		func_1429(var_457_object, var_455_int, var_456_object);
		TaskReturn();
		return 0;
	}
	return 0;
}


func_807(var_0_object, var_1_object, var_2_object, var_3_string, var_375_object, var_376_object)
{
	var_0_object = var_376_object;
	var_1_object = var_375_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_382_bool = 0;
		var_382_bool = 0;
		var_383_bool = 0; var_384_object = Obj();
		var_384_object = var_1_object;
		func_2440(var_384_object);
		if(var_383_bool != 0) {
			var_389_bool = 0; var_390_object = Obj();
			var_390_object = var_1_object;
			func_2452(var_390_object);
			if(var_389_bool != 0) {
				var_382_bool = 1;
			}
		}
		if(var_382_bool != 0) {
			var_395_object = Obj(); var_396_object = Obj();
			var_395_object = var_1_object;
			var_396_object = var_0_object;
			func_2380();
			var_399_string = "";
			func_941(var_376_object, "Neutral");
			@@@var_0_object:SetMessage((int)527376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527379, (int)28703, (int)28702);
		} else {
				var_419_string = "";
				func_941(var_376_object, "Neutral");
				@@@var_0_object:SetMessage((int)527212);
				@@@var_0_object:ClearReplies();
				var_421_bool = 0; var_422_object = Obj();
				var_422_object = var_1_object;
				func_2440(var_422_object);
				if(var_421_bool != 0) {
					@@@var_0_object:AddReply((int)527339, (int)28658, (int)28657);
				}
				var_426_bool = 0;
				var_426_bool = 1;
				var_427_bool = 0;
				var_427_bool = 0;
				var_428_bool = 0; var_429_object = Obj();
				var_429_object = var_1_object;
				func_2476(var_429_object);
				if(var_428_bool != 0) {
					var_434_bool = 0; var_435_object = Obj();
					var_435_object = var_1_object;
					func_2440(var_435_object);
					if(var_434_bool != 0) {
						var_427_bool = 1;
					}
				}
				if(var_427_bool != 1) {
					var_436_bool = 0;
					var_436_bool = 0;
					var_437_bool = 0; var_438_object = Obj();
					var_438_object = var_1_object;
					func_2464(var_438_object);
					if(var_437_bool != 0) {
						var_443_bool = 0; var_444_object = Obj();
						var_444_object = var_1_object;
						func_2476(var_444_object);
						if(var_443_bool != 0) {
							var_436_bool = 1;
						}
					}
					if(var_436_bool != 1) {
						var_426_bool = 0;
					}
				}
				if(var_426_bool != 0) {
					@@@var_0_object:AddReply((int)527373, (int)28707, (int)28696);
				}
				@@@var_0_object:AddReply((int)527218, (int)-1, (int)28526);
				goto Label_911;
		}
	}
Label_911:
	var_411_bool = 0;
	func_2360(var_411_bool);
	if(var_411_bool != 0) {

	Label_915:
		lshWaitForAnimEnd();
		var_412_string = var_3_string;
		if(var_412_string != 0) {
		} else {
			var_413_string = "";
			var_413_string = var_2_object;
			func_2227(var_413_string);
			goto Label_915;
	}
		PlayAnimation("all", "idle");

	Label_930:
		WaitForAnimEnd();
		var_416_string = var_3_string;
		if(var_416_string != 0) {
			goto Label_940;
		}
		PlayAnimation("all", "idle");
		goto Label_930;

	}
	goto Label_940;
	
Label_940:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x32b";


func_2089(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0;
	GetVariable("voice_common", var_121_int);
	var_124_int = var_121_int;
	if(var_124_int != 0) {
		var_125_bool = 0; var_126_object = Obj();
		var_115_object = var_126_object;
		func_2147(var_125_bool, var_126_object);
		var_155_bool = var_125_bool == 0; //@nz
		if(var_155_bool != 0) {
			var_156_bool = 0; var_157_object = Obj();
			var_115_object = var_157_object;
			func_2184(var_156_bool, var_157_object);
			var_191_bool = var_156_bool == 0; //@nz
			if(var_191_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		irand(var_122_int, (int)2);
		var_193_int = var_122_int;
		if(var_193_int != 0) {
			var_196_int = var_121_int + (int)1;
			var_198_int = var_196_int % (int)3;
			SetVariable("voice_common", var_198_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_201_bool = 0; var_202_object = Obj();
		var_115_object = var_202_object;
		func_2184(var_201_bool, var_202_object);
		var_203_bool = var_201_bool == 0; //@nz
		if(var_203_bool != 0) {
			var_204_bool = 0; var_205_object = Obj();
			var_115_object = var_205_object;
			func_2147(var_204_bool, var_205_object);
			var_206_bool = var_204_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2145;
	
Label_2145:
	var_114_bool = 1;
	return 4;
	
}


func_2352(var_102_int)
{
	var_102_int = 515553;
	return 0;
}


func_2354(var_101_int)
{
	var_101_int = 502878;
	return 0;
}


func_2356(var_103_string)
{
	var_103_string = "ui/NPC_Starshina.png";
	return 0;
}


func_2358(var_104_string)
{
	var_104_string = "ui/NPC_Starshina_b.png";
	return 0;
}


func_2360(var_96_bool)
{
	var_96_bool = 1;
	return 0;
}


func_2362()
{
	SetVariable("k8q01", (int)5);
	func_2527();
	return 0;
}


func_2371()
{
	SetVariable("k8q01", (int)7);
	func_2514();
	return 0;
}


func_2380()
{
	SetVariable("ook11Starshina1", (int)1);
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_216_string = "";
		func_139(var_210_object, "Neutral");
		@@@var_0_object:SetMessage((int)525528);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525529, (int)-1, (int)26885);
		@@@var_0_object:AddReply((int)529271, (int)-1, (int)30724);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_240_bool = 0;
	func_2360(var_240_bool);
	if(var_240_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_241_string = var_3_string;
		if(var_241_string != 0) {
		} else {
			var_242_string = "";
			var_242_string = var_2_object;
			func_2227(var_242_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_255_string = var_3_string;
		if(var_255_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_2386()
{
	SetVariable("k11q01", (int)6);
	func_2501();
	var_54_bool = 0; var_55_string = ""; var_56_string = "";
	func_2301(var_54_bool, "quest_k11_01", "place_burah");
	return 0;
}


func_2400()
{
	SetVariable("ook11Starshina2", (int)1);
	return 0;
}


func_2147(var_125_bool, var_126_object)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = "";
	var_132_string = "c";
	var_133_int = 0;
	
Label_2150:
	if((int)1 != 0) {
		var_139_int = var_133_int + (int)1;
		var_140_int = var_132_string + var_139_int;
		@@var_126_object:HasProperty(var_140_int, var_134_bool);
		var_141_bool = var_134_bool == 0; //@nz
		if(var_141_bool != 0) {
		} else {
			var_133_int = var_133_int + (int)1;
			goto Label_2150;
		}
	}
	var_142_bool = var_133_int == 0; //@nz
	if(var_142_bool != 0) {
		var_125_bool = 0;
		return 10;
	}
	var_135_int = 0;
	var_144_bool = var_133_int > (int)1;
	if(var_144_bool != 0) {
		irand(var_135_int, var_133_int);
	}
	var_146_int = var_135_int + (int)1;
	var_147_int = var_132_string + var_146_int;
	@@var_126_object:GetProperty(var_147_int, var_136_string);
	var_148_bool = 0; var_149_string = "";
	var_136_string = var_149_string;
	func_2258(var_148_bool, var_149_string);
	var_148_bool = var_125_bool;
	return 10;
	
}


func_2406()
{
	func_2488();
	var_72_bool = 0; var_73_string = ""; var_74_string = "";
	func_2301(var_72_bool, "quest_k11_01", "fail");
	return 0;
}


func_1894()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0;
	WaitForAnimEnd();
	var_38_bool = 0;
	func_1997(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 12;
	}
	func_2335((int)0);
	var_40_int = var_32_int;
	var_33_int = 0;
	
Label_1908:
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_33_int < (int)5;
	if(var_55_bool != 0) {
		var_56_bool = 0;
		func_1997(var_56_bool);
		if(var_56_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		var_57_bool = var_32_int == 0; //@nz
		if(var_57_bool != 0) {
			Sleep((int)3, var_34_bool);
			var_59_bool = var_34_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
		} else {
				irand(var_35_int, var_32_int);
				irand(var_36_int, (int)5);
				var_65_bool = var_36_int != (int)0;
				if(var_65_bool != 0) {
					var_35_int = 0;
				}
				var_67_string = ""; var_68_int = 0;
				var_35_int = var_68_int;
				func_2328(var_67_string, var_68_int);
				PlayAnimation("all", var_67_string);
				WaitForAnimEnd(var_37_bool);
				var_69_bool = var_37_bool == 0; //@nz
				if(var_69_bool == 0) goto Label_1949;
				goto Label_1960;
		}
		Label_1949:
			var_60_bool = 0;
			func_1963(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_1960;
			}
			ResetAAS();
			var_33_int = var_33_int + (int)1;
			goto Label_1908;

		}
	}
Label_1960:
	ResetAAS();
	return 12;
	
}


func_2416(var_302_bool)
{
	var_304_int = 0; var_305_string = "";
	func_2296(var_304_int, "k8q01");
	var_309_bool = var_304_int == (int)4;
	if(var_309_bool != 0) {
		var_302_bool = 1;
		return 0;
	}
	var_302_bool = 0;
	return 0;
}


func_372(var_2_object, var_310_string)
{
	var_311_bool = 0;
	func_2360(var_311_bool);
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
	func_2243(var_314_string, var_315_bool);
	var_2_object = var_310_string;
	return 0;
	
}


func_2428(var_335_bool)
{
	var_337_int = 0; var_338_string = "";
	func_2296(var_337_int, "k8q01");
	var_340_bool = var_337_int == (int)6;
	if(var_340_bool != 0) {
		var_335_bool = 1;
		return 0;
	}
	var_335_bool = 0;
	return 0;
}


func_2184(var_156_bool, var_157_object)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = "";
	var_169_int = 0;
	func_2313(var_169_int);
	var_175_int = "d" + var_169_int;
	var_163_string = var_175_int + "m";
	var_164_int = 0;
	
Label_2193:
	if((int)1 != 0) {
		var_179_int = var_164_int + (int)1;
		var_180_int = var_163_string + var_179_int;
		@@var_157_object:HasProperty(var_180_int, var_165_bool);
		var_181_bool = var_165_bool == 0; //@nz
		if(var_181_bool != 0) {
		} else {
			var_164_int = var_164_int + (int)1;
			goto Label_2193;
		}
	}
	var_182_bool = var_164_int == 0; //@nz
	if(var_182_bool != 0) {
		var_156_bool = 0;
		return 10;
	}
	var_166_int = 0;
	var_184_bool = var_164_int > (int)1;
	if(var_184_bool != 0) {
		irand(var_166_int, var_164_int);
	}
	var_186_int = var_166_int + (int)1;
	var_187_int = var_163_string + var_186_int;
	@@var_157_object:GetProperty(var_187_int, var_167_string);
	var_188_bool = 0; var_189_string = "";
	var_167_string = var_189_string;
	func_2258(var_188_bool, var_189_string);
	var_188_bool = var_156_bool;
	return 10;
	
}


func_2440(var_383_bool)
{
	var_385_int = 0; var_386_string = "";
	func_2296(var_385_int, "k11q01");
	var_388_bool = var_385_int == (int)5;
	if(var_388_bool != 0) {
		var_383_bool = 1;
		return 0;
	}
	var_383_bool = 0;
	return 0;
}


func_139(var_2_object, var_216_string)
{
	var_217_bool = 0;
	func_2360(var_217_bool);
	var_218_bool = var_217_bool == 0; //@nz
	if(var_218_bool != 0) {
		return 0;
	}
	var_219_bool = var_216_string == var_2_object;
	if(var_219_bool != 0) {
		return 0;
	}
	var_220_string = ""; var_221_bool = 0;
	var_216_string = var_220_string;
	var_223_bool = var_216_string == "";
	if(var_223_bool != 0) {
		var_221_bool = 0;
	} else {
		var_221_bool = 1;
	}
	func_2243(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	return 0;
	
}


func_2452(var_389_bool)
{
	var_391_int = 0; var_392_string = "";
	func_2296(var_391_int, "ook11Starshina1");
	var_394_bool = var_391_int == (int)0;
	if(var_394_bool != 0) {
		var_389_bool = 1;
		return 0;
	}
	var_389_bool = 0;
	return 0;
}


func_1429(var_0_object, var_455_int, var_456_object)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_int = 0; var_461_bool = 0; var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0;
	var_0_object = var_456_object;
	var_466_bool = 0; var_467_object = Obj(); var_468_float = 0;
	var_456_object = var_467_object;
	func_2002(var_466_bool, var_467_object, (float)130.0);
	var_469_bool = var_466_bool == 0; //@nz
	if(var_469_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	CreateDialog(var_462_object);
	var_470_int = 0;
	func_2354(var_470_int);
	@@var_462_object:SetNPCName(var_470_int);
	var_471_int = 0;
	func_2352(var_471_int);
	@@var_462_object:SetNPCDescription(var_471_int);
	var_472_string = "";
	func_2356(var_472_string);
	@@var_462_object:SetPhoto(var_472_string);
	var_473_string = "";
	func_2358(var_473_string);
	@@var_462_object:SetPhoto2(var_473_string);
	var_474_int = 0;
	func_2581(var_474_int);
	@@var_462_object:SetPlayerName(var_474_int);
	IsOverrideActive(var_463_bool);
	var_475_bool = var_463_bool;
	if(var_475_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	DoDialog(var_462_object);
	var_476_bool = 0; var_477_object = Obj();
	func_2280(Obj());
	var_478_object = var_477_object;
	func_2089(var_476_bool, var_477_object);
	var_479_object = Obj(); var_480_object = Obj();
	var_456_object = var_479_object;
	var_462_object = var_480_object;
	TaskCall(7);
	func_1510(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object);
	TaskReturn();
	@@var_462_object:IsDialogEnd(var_465_bool);
	
Label_1492:
	var_512_bool = var_465_bool == 0; //@nz
	if(var_512_bool != 0) {
		sync();
		@@var_462_object:IsDialogEnd(var_465_bool);
		goto Label_1492;
	}
	var_456_object = Obj();
	func_2071();
	StopDialog(var_462_object);
	@@var_462_object:GetReturnValue((int)-1);
	var_464_int = var_455_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2464(var_437_bool)
{
	var_439_int = 0; var_440_string = "";
	func_2296(var_439_int, "k11q01");
	var_442_bool = var_439_int == (int)6;
	if(var_442_bool != 0) {
		var_437_bool = 1;
		return 0;
	}
	var_437_bool = 0;
	return 0;
}


func_1963(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_2476(var_428_bool)
{
	var_430_int = 0; var_431_string = "";
	func_2296(var_430_int, "ook11Starshina2");
	var_433_bool = var_430_int == (int)0;
	if(var_433_bool != 0) {
		var_428_bool = 1;
		return 0;
	}
	var_428_bool = 0;
	return 0;
}


func_941(var_2_object, var_399_string)
{
	var_400_bool = 0;
	func_2360(var_400_bool);
	var_401_bool = var_400_bool == 0; //@nz
	if(var_401_bool != 0) {
		return 0;
	}
	var_402_bool = var_399_string == var_2_object;
	if(var_402_bool != 0) {
		return 0;
	}
	var_403_string = ""; var_404_bool = 0;
	var_399_string = var_403_string;
	var_406_bool = var_399_string == "";
	if(var_406_bool != 0) {
		var_404_bool = 0;
	} else {
		var_404_bool = 1;
	}
	func_2243(var_403_string, var_404_bool);
	var_2_object = var_399_string;
	return 0;
	
}


func_1965()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1970(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_2227(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0;
	lshHasAnimation(var_246_bool, var_242_string);
	var_249_bool = var_246_bool;
	if(var_249_bool != 0) {
		lshGetAnimTimes(var_242_string, var_247_float, var_248_float);
		lshPlayAnimation(var_247_float, var_248_float, (bool)0);
	} else {
		var_252_int = "Can't find lsh animation : " + var_242_string;
		Trace(var_252_int);
	}
	return 6;
	
}


func_1718(var_0_object)
{
	var_22_bool = 0;
	func_1997(var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1727:
	func_1894();
	goto Label_1727;
}
EMIT "Return(); Pop(0)";


func_2488()
{
	var_64_object = Obj(); var_65_object = Obj();
	CreateDiaryEntry(var_65_object, (int)788, (int)1, (int)542507);
	var_69_bool = 0; var_70_object = Obj(); var_71_int = 0;
	var_65_object = var_70_object;
	func_2553(var_69_bool, var_70_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1978(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0;
	GetPosition(var_34_cvector);
	var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
	return 6;
}


func_2243(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0;
	lshHasAnimation(var_227_bool, var_220_string);
	var_230_bool = var_227_bool;
	if(var_230_bool != 0) {
		lshGetAnimTimes(var_220_string, var_228_float, var_229_float);
		lshPlayAnimation(var_228_float, var_229_float, var_221_bool);
	} else {
		var_232_int = "Can't find lsh animation : " + var_220_string;
		Trace(var_232_int);
	}
	return 6;
	
}


func_1988(var_25_bool, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	@@var_26_object:GetPosition(var_28_cvector);
	var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	var_28_cvector = var_30_cvector;
	func_1978(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
	return 2;
}


func_1732(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj();
	FindActor(var_48_object, "player");
	var_50_bool = var_48_object == 0; //@nz
	if(var_50_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj();
	var_48_object = var_52_object;
	func_1988(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2501()
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateDiaryEntry(var_32_object, (int)489, (int)1, (int)528056);
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0;
	var_32_object = var_37_object;
	func_2553(var_36_bool, var_37_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_203(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0;
	var_0_object = var_272_object;
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0;
	var_272_object = var_283_object;
	func_2002(var_282_bool, var_283_object, (float)130.0);
	var_285_bool = var_282_bool == 0; //@nz
	if(var_285_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	CreateDialog(var_278_object);
	var_286_int = 0;
	func_2354(var_286_int);
	@@var_278_object:SetNPCName(var_286_int);
	var_287_int = 0;
	func_2352(var_287_int);
	@@var_278_object:SetNPCDescription(var_287_int);
	var_288_string = "";
	func_2356(var_288_string);
	@@var_278_object:SetPhoto(var_288_string);
	var_289_string = "";
	func_2358(var_289_string);
	@@var_278_object:SetPhoto2(var_289_string);
	var_290_int = 0;
	func_2581(var_290_int);
	@@var_278_object:SetPlayerName(var_290_int);
	IsOverrideActive(var_279_bool);
	var_291_bool = var_279_bool;
	if(var_291_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	DoDialog(var_278_object);
	var_292_bool = 0; var_293_object = Obj();
	func_2280(Obj());
	var_294_object = var_293_object;
	func_2089(var_292_bool, var_293_object);
	var_295_object = Obj(); var_296_object = Obj();
	var_272_object = var_295_object;
	var_278_object = var_296_object;
	TaskCall(3);
	func_284(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object);
	TaskReturn();
	@@var_278_object:IsDialogEnd(var_281_bool);
	
Label_266:
	var_347_bool = var_281_bool == 0; //@nz
	if(var_347_bool != 0) {
		sync();
		@@var_278_object:IsDialogEnd(var_281_bool);
		goto Label_266;
	}
	var_272_object = Obj();
	func_2071();
	StopDialog(var_278_object);
	@@var_278_object:GetReturnValue((int)-1);
	var_280_int = var_271_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1997(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0;
	IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
	return 2;
}


func_2002(var_53_bool, var_54_object, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0;
	@@var_54_object:GetPosition(var_66_cvector);
	@@var_54_object:GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	var_74_float = var_74_float + var_65_float;
	SetByIndex(var_66_cvector, 1) = var_74_float;
	GetPosition(var_67_cvector);
	GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_65_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_77_int = var_68_cvector | var_68_cvector;
	var_78_float = sqrt(var_77_int);
	var_68_cvector = var_68_cvector / var_78_float;
	var_69_cvector = -var_68_cvector;
	var_79_float = var_68_cvector * var_55_float;
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_81_cvector = var_69_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2286(var_80_cvector, var_81_cvector);
	var_89_float = var_80_cvector * (int)25;
	var_90_int = var_79_float + var_89_float;
	var_70_cvector = var_90_int - CVector(0.0, 10.0, 0.0);
	var_71_cvector = var_67_cvector + var_70_cvector;
	IsOverrideActive(var_72_bool);
	var_92_bool = var_72_bool;
	if(var_92_bool != 0) {
		var_53_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_71_cvector, var_69_cvector, (bool)1);
	var_94_float = GetByIndex(var_70_cvector, 0);
	var_95_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_94_float, var_95_float);
	var_96_bool = 0;
	func_2360(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		HasAnimationTrack(var_73_bool, "head");
		var_98_bool = var_73_bool;
		if(var_98_bool == 0) goto Label_2065;
		LookAsyncCamera("head");
	}
Label_2065:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_53_bool = 1;
	return 18;
	
}


func_1747(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_98_float, var_99_float);
	return 0;
}


func_2258(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0;
	var_152_bool = 0;
	func_2360(var_152_bool);
	if(var_152_bool != 0) {
		lshHasSpeech(var_151_bool, var_149_string);
		var_153_bool = var_151_bool;
		if(var_153_bool != 0) {
			lshPlaySpeech(var_149_string);
			var_148_bool = 1;
			return 2;
		}
	}
	var_148_bool = 0;
	return 2;
}


func_2514()
{
	var_60_object = Obj(); var_61_object = Obj();
	CreateDiaryEntry(var_61_object, (int)445, (int)1, (int)526470);
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0;
	var_61_object = var_66_object;
	func_2553(var_65_bool, var_66_object, (int)438);
	return 2;
}
EMIT "Stack[-1] = 0";


func_726(var_0_object, var_351_int, var_352_object)
{
	var_354_object = Obj(); var_355_bool = 0; var_356_int = 0; var_357_bool = 0; var_358_object = Obj(); var_359_bool = 0; var_360_int = 0; var_361_bool = 0;
	var_0_object = var_352_object;
	var_362_bool = 0; var_363_object = Obj(); var_364_float = 0;
	var_352_object = var_363_object;
	func_2002(var_362_bool, var_363_object, (float)130.0);
	var_365_bool = var_362_bool == 0; //@nz
	if(var_365_bool != 0) {
		var_351_int = -2;
		return 8;
	}
	CreateDialog(var_358_object);
	var_366_int = 0;
	func_2354(var_366_int);
	@@var_358_object:SetNPCName(var_366_int);
	var_367_int = 0;
	func_2352(var_367_int);
	@@var_358_object:SetNPCDescription(var_367_int);
	var_368_string = "";
	func_2356(var_368_string);
	@@var_358_object:SetPhoto(var_368_string);
	var_369_string = "";
	func_2358(var_369_string);
	@@var_358_object:SetPhoto2(var_369_string);
	var_370_int = 0;
	func_2581(var_370_int);
	@@var_358_object:SetPlayerName(var_370_int);
	IsOverrideActive(var_359_bool);
	var_371_bool = var_359_bool;
	if(var_371_bool != 0) {
		var_351_int = -2;
		return 8;
	}
	DoDialog(var_358_object);
	var_372_bool = 0; var_373_object = Obj();
	func_2280(Obj());
	var_374_object = var_373_object;
	func_2089(var_372_bool, var_373_object);
	var_375_object = Obj(); var_376_object = Obj();
	var_352_object = var_375_object;
	var_358_object = var_376_object;
	TaskCall(5);
	func_807(var_377_object, var_378_object, var_379_string, var_380_bool, var_375_object, var_376_object);
	TaskReturn();
	@@var_358_object:IsDialogEnd(var_361_bool);
	
Label_789:
	var_451_bool = var_361_bool == 0; //@nz
	if(var_451_bool != 0) {
		sync();
		@@var_358_object:IsDialogEnd(var_361_bool);
		goto Label_789;
	}
	var_352_object = Obj();
	func_2071();
	StopDialog(var_358_object);
	@@var_358_object:GetReturnValue((int)-1);
	var_360_int = var_351_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1752(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0;
	FindActor(var_32_object, "player");
	var_35_bool = var_32_object == 0; //@nz
	if(var_35_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_36_float = 0; var_37_object = Obj();
	var_32_object = var_37_object;
	func_1970(var_36_float, var_37_object);
	var_45_bool = var_36_float > (float)90000.0;
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	CanSee(var_33_bool, var_32_object);
	var_33_bool = var_29_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2527()
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateDiaryEntry(var_32_object, (int)443, (int)1, (int)526468);
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0;
	var_32_object = var_37_object;
	func_2553(var_36_bool, var_37_object, (int)438);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2273()
{
	var_24_bool = 0;
	func_2360(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1510(var_0_object, var_1_object, var_2_object, var_3_string, var_479_object, var_480_object)
{
	var_0_object = var_480_object;
	var_1_object = var_479_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_486_string = "";
		func_1573(var_480_object, "Neutral");
		@@@var_0_object:SetMessage((int)539315);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)542623, (int)45026, (int)45025);
		@@@var_0_object:AddReply((int)542622, (int)-1, (int)45024);
		@@@var_0_object:AddReply((int)539316, (int)-1, (int)41259);
		goto Label_1543;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5ea";
	}
Label_1543:
	var_504_bool = 0;
	func_2360(var_504_bool);
	if(var_504_bool != 0) {

	Label_1547:
		lshWaitForAnimEnd();
		var_505_string = var_3_string;
		if(var_505_string != 0) {
		} else {
			var_506_string = "";
			var_506_string = var_2_object;
			func_2227(var_506_string);
			goto Label_1547;
	}
		PlayAnimation("all", "idle");

	Label_1562:
		WaitForAnimEnd();
		var_509_string = var_3_string;
		if(var_509_string != 0) {
			goto Label_1572;
		}
		PlayAnimation("all", "idle");
		goto Label_1562;
	}
	goto Label_1572;
	
Label_1572:
	return 0;
	
}


func_2280(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj();
	self(var_118_object);
	var_118_object = var_116_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2540(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	GetDiaryRoot(var_47_object);
	var_48_bool = var_47_object == 0; //@nz
	if(var_48_bool != 0) {
		Trace("Can't retrieve diary root");
		var_45_object = 0;
		return 2;
	}
	var_47_object = var_45_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1774()
{
	var_516_float = 0; var_517_float = 0;
	rand(var_517_float, (int)8, (int)16);
	SetTimer((int)10, var_517_float);
	return 2;
}


func_2286(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0;
	var_85_int = var_81_cvector | var_81_cvector;
	var_84_float = sqrt(var_85_int);
	var_86_float = 9.999999974752427e-07;
	var_87_bool = var_84_float < var_86_float;
	if(var_87_bool != 0) {
		var_80_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_80_cvector = var_81_cvector / var_84_float;
	return 2;
}


func_1783()
{
	KillTimer((int)10);
	return 0;
}


func_2296(var_304_int, var_305_string)
{
	var_306_int = 0; var_307_int = 0;
	GetVariable(var_305_string, var_307_int);
	var_307_int = var_304_int;
	return 2;
}


func_2553(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0;
	func_2540(Obj());
	var_45_object = var_42_object;
	@@var_42_object:Find(var_38_int, var_43_object);
	var_50_bool = var_43_object == 0; //@nz
	if(var_50_bool != 0) {
		var_52_int = "Can't find diary parent with id: " + var_38_int;
		Trace(var_52_int);
		var_36_bool = 0;
		return 6;
	}
	@@var_43_object:AddChild(var_37_object);
	SendWorldWndMessage((int)7);
	@@var_37_object:GetCategory(var_44_int);
	SetDiarySection(var_44_int);
	var_36_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2301(var_54_bool, var_55_string, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj();
	FindActor(var_58_object, var_55_string);
	var_59_bool = var_58_object == 0; //@ne
	if(var_59_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	Trigger(var_58_object, var_56_string);
	var_54_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


