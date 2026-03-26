// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Grin|W:Anger|W:Jeer|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|W:ui/NPC_Georg.png|W:ui/NPC_Georg_b.png|W:b8q03|W:b8q03GeorgGotoKaterina|W:pt_map_katerina|A:AddMark|W:oob8Georg1|W:oob8Georg2|W:playsound|W:givemoney|W:b8GeorgVisit|W:money3000 is given|W:b8q03MladVladIsVictim|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch
// @GLOBALS: 0:object:,1:bool:,2:bool:
// @RUN_OP: 0x637
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1d1 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x50f vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x60d vars=int,int
// @TASK_8: vars=cvector params=0
// @EVENT_7: op=0x683 vars=int
// @EVENT_6: op=0x6a9 vars=
// @EVENT_5: op=0x6b8 vars=
// @EVENT_45: op=0x6c5 vars=bool
// @EVENT_0: op=0x6d1 vars=object
// @PE: 0x51,0x8b,0xa1,0x133,0x1bb,0x1d1,0x4ba,0x4f9,0x50f,0x5bd,0x5f7,0x60d,0x683,0x6a9,0x6c5,0x8b9,0x8fb,0x901,0x907,0x90d,0x913,0x91c,0x925,0x92f,0x93b,0x947,0x95e,0x975,0xa00

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_2160();
		var_26_bool = var_21_bool == (int)19190;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_139(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518057);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518058, (int)32643, (int)19191);
			@@@var_0_object:AddReply((int)531316, (int)32643, (int)32642);
			return 0;
		}
		var_52_bool = var_21_bool == (int)32643;
		if(var_52_bool != 0) {
			var_53_string = "";
			func_139(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531318, (int)-1, (int)32644);
			@@@var_0_object:AddReply((int)531319, (int)-1, (int)32645);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_2271(var_61_bool);
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


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_2160();
		var_26_bool = var_22_cvector == (int)22664;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_2273();
		}
		var_79_bool = var_22_cvector == (int)22669;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_2273();
		}
		var_83_bool = var_22_cvector == (int)22684;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_2305();
		}
		var_89_bool = var_22_cvector == (int)25222;
		if(var_89_bool != 0) {
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_2323();
		}
		var_103_bool = var_22_cvector == (int)25223;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_2323();
		}
		var_107_bool = var_22_cvector == (int)25224;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_2323();
		}
		var_111_bool = var_22_cvector == (int)25219;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_2323();
		}
		var_115_bool = var_22_cvector == (int)25220;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_2323();
		}
		var_119_bool = var_22_cvector == (int)22687;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_2305();
		}
		var_123_bool = var_22_cvector == (int)22689;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_2311();
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_2341(var_129_object);
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_2332();
		}
		var_162_bool = var_22_cvector == (int)25228;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_2341(var_164_object);
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_2311();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_2332();
		}
		var_170_bool = var_22_cvector == (int)25229;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_2332();
		}
		var_174_bool = var_22_cvector == (int)25231;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_2332();
		}
		var_178_bool = var_21_bool == (int)22663;
		if(var_178_bool != 0) {
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_2351(var_180_object);
			if(var_179_bool != 0) {
				var_187_object = Obj(); var_188_object = Obj();
				var_187_object = var_1_object;
				var_188_object = var_0_object;
				func_2299();
				var_191_object = Obj(); var_192_object = Obj();
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_2317();
				var_195_string = "";
				func_443(var_22_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)521502);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523951, (int)25235, (int)25234);
				@@@var_0_object:AddReply((int)523957, (int)25241, (int)25240);
				return 0;
			}
			var_219_string = "";
			func_443(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521505);
			@@@var_0_object:ClearReplies();
			var_221_bool = 0; var_222_object = Obj();
			var_222_object = var_1_object;
			func_2363(var_222_object);
			if(var_221_bool != 0) {
				@@@var_0_object:AddReply((int)521506, (int)22668, (int)22667);
			}
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_2398(var_232_object);
			if(var_231_bool != 0) {
				var_242_bool = 0; var_243_object = Obj();
				var_243_object = var_1_object;
				func_2421(var_243_object);
				if(var_242_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)521523, (int)25213, (int)22684);
			}
			var_251_bool = 0;
			var_251_bool = 0;
			var_252_bool = 0; var_253_object = Obj();
			var_253_object = var_1_object;
			func_2375(var_253_object);
			if(var_252_bool != 0) {
				var_263_bool = 0; var_264_object = Obj();
				var_264_object = var_1_object;
				func_2421(var_264_object);
				if(var_263_bool != 0) {
					var_251_bool = 1;
				}
			}
			if(var_251_bool != 0) {
				@@@var_0_object:AddReply((int)521526, (int)22688, (int)22687);
			}
			@@@var_0_object:AddReply((int)521509, (int)-1, (int)22670);
			return 0;
		}
		var_272_bool = var_21_bool == (int)22688;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)521527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521528, (int)-1, (int)22689);
			@@@var_0_object:AddReply((int)523942, (int)25227, (int)25225);
			@@@var_0_object:AddReply((int)523943, (int)25230, (int)25226);
			return 0;
		}
		var_285_bool = var_21_bool == (int)25230;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523948, (int)-1, (int)25231);
			return 0;
		}
		var_292_bool = var_21_bool == (int)25227;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523944);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523945, (int)-1, (int)25228);
			@@@var_0_object:AddReply((int)523946, (int)-1, (int)25229);
			return 0;
		}
		var_302_bool = var_21_bool == (int)25213;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_443(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523931, (int)22685, (int)25214);
			@@@var_0_object:AddReply((int)523932, (int)25216, (int)25215);
			return 0;
		}
		var_312_bool = var_21_bool == (int)25216;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530662, (int)22685, (int)31958);
			return 0;
		}
		var_319_bool = var_21_bool == (int)22685;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)521524);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521525, (int)25221, (int)22686);
			@@@var_0_object:AddReply((int)523934, (int)25218, (int)25217);
			return 0;
		}
		var_329_bool = var_21_bool == (int)25218;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523936, (int)-1, (int)25219);
			@@@var_0_object:AddReply((int)523937, (int)-1, (int)25220);
			return 0;
		}
		var_339_bool = var_21_bool == (int)25221;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523939, (int)-1, (int)25222);
			@@@var_0_object:AddReply((int)523940, (int)-1, (int)25223);
			@@@var_0_object:AddReply((int)523941, (int)-1, (int)25224);
			return 0;
		}
		var_352_bool = var_21_bool == (int)22668;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_443(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521507);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523949, (int)25233, (int)25232);
			return 0;
		}
		var_359_bool = var_21_bool == (int)25233;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_443(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523950);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521508, (int)-1, (int)22669);
			return 0;
		}
		var_366_bool = var_21_bool == (int)25241;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_443(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523959, (int)25235, (int)25242);
			return 0;
		}
		var_373_bool = var_21_bool == (int)25235;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_443(var_22_cvector, "Anger");
			@@@var_0_object:SetMessage((int)523952);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523953, (int)25237, (int)25236);
			@@@var_0_object:AddReply((int)523960, (int)25245, (int)25244);
			return 0;
		}
		var_383_bool = var_21_bool == (int)25245;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_443(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523962, (int)25247, (int)25246);
			return 0;
		}
		var_390_bool = var_21_bool == (int)25247;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_443(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523963);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523964, (int)25237, (int)25248);
			return 0;
		}
		var_397_bool = var_21_bool == (int)25237;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_443(var_22_cvector, "Anger");
			@@@var_0_object:SetMessage((int)523954);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523955, (int)25239, (int)25238);
			return 0;
		}
		var_404_bool = var_21_bool == (int)25239;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_443(var_22_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)523956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523965, (int)25250, (int)25249);
			@@@var_0_object:AddReply((int)523970, (int)25261, (int)25254);
			return 0;
		}
		var_414_bool = var_21_bool == (int)25261;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_443(var_22_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)523974);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523975, (int)25250, (int)25262);
			return 0;
		}
		var_421_bool = var_21_bool == (int)25250;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523967, (int)25252, (int)25251);
			return 0;
		}
		var_428_bool = var_21_bool == (int)25252;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523971, (int)25256, (int)25255);
			@@@var_0_object:AddReply((int)523973, (int)25256, (int)25257);
			return 0;
		}
		var_438_bool = var_21_bool == (int)25256;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_443(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)523972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521503, (int)-1, (int)22664);
			@@@var_0_object:AddReply((int)521504, (int)-1, (int)22665);
			return 0;
		}
		var_3_string = true;
		var_447_bool = 0;
		func_2271(var_447_bool);
		if(var_447_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1d2";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_2160();
		var_26_bool = var_21_bool == (int)36906;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_1273(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_55_bool = var_21_bool == (int)36953;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_1273(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_65_bool = var_21_bool == (int)36957;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_1273(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_74_bool = 0;
		func_2271(var_74_bool);
		if(var_74_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x510";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	if((int)1 != 0) {
		func_2160();
		var_26_bool = var_21_int == (int)42563;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_1527(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_2271(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x60e";
	
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_23_bool = var_21_int == (int)10;
	if(var_23_bool != 0) {
		func_1663();
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = 0;
		func_1884(var_26_bool);
		if(var_26_bool != 0) {
			var_29_bool = 0;
			func_1632(var_29_bool);
			if(var_29_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_46_bool = 0;
			func_1612(var_46_bool);
			if(var_46_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				func_2167(Obj());
				var_67_object = var_66_object;
				func_2034(var_65_bool, var_66_object);
			}
		} else {
			func_1627(var_21_int);
			func_1654();
		}
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1845();
	func_1663();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0();
	func_1663();
	var_22_string = "";
	func_2114("Neutral");
	func_1654();
	return 0;
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		func_1654();
	} else {
		var_28_string = "";
		func_2114("Neutral");
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
		func_1845();
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_1875(var_25_bool, var_26_object);
		EventEnable(0);
		var_39_object = Obj();
		var_21_object = var_39_object;
		func_2560(var_39_object);
		var_516_string = "";
		func_2114("Neutral");
		func_1663();
		func_1654();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1598(var_20_cvector);
	return 0;
}


func_2560(var_39_object)
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
	func_2233(var_268_bool, (int)8);
	if(var_268_bool != 0) {
		var_271_int = 0; var_272_object = Obj();
		var_39_object = var_272_object;
		TaskCall(2);
		func_226(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	var_395_bool = 0;
	var_395_bool = 0;
	var_396_bool = 0; var_397_int = 0;
	func_2233(var_396_bool, (int)12);
	if(var_396_bool != 0) {
		var_398_bool = GlobalVars[2];
		var_399_bool = var_398_bool == 0; //@nz
		if(var_399_bool != 0) {
			var_395_bool = 1;
		}
	}
	if(var_395_bool != 0) {
		var_400_int = 0; var_401_object = Obj();
		var_39_object = var_401_object;
		TaskCall(4);
		func_1129(var_402_object, var_400_int, var_401_object);
		TaskReturn();
		var_459_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
		return 0;
	}
	var_460_int = 0; var_461_object = Obj();
	var_39_object = var_461_object;
	TaskCall(6);
	func_1388(var_462_object, var_460_int, var_461_object);
	TaskReturn();
	return 0;
}


func_2305()
{
	SetVariable("oob8Georg2", (int)1);
	return 0;
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0;
	var_0_object = var_43_object;
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0;
	var_43_object = var_54_object;
	func_1889(var_53_bool, var_54_object, (float)70.0);
	var_100_bool = var_53_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	CreateDialog(var_49_object);
	var_101_int = 0;
	func_2265(var_101_int);
	@@var_49_object:SetNPCName(var_101_int);
	var_102_int = 0;
	func_2263(var_102_int);
	@@var_49_object:SetNPCDescription(var_102_int);
	var_103_string = "";
	func_2267(var_103_string);
	@@var_49_object:SetPhoto(var_103_string);
	var_104_string = "";
	func_2269(var_104_string);
	@@var_49_object:SetPhoto2(var_104_string);
	var_105_int = 0;
	func_2543(var_105_int);
	@@var_49_object:SetPlayerName(var_105_int);
	IsOverrideActive(var_50_bool);
	var_113_bool = var_50_bool;
	if(var_113_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	DoDialog(var_49_object);
	var_114_bool = 0; var_115_object = Obj();
	func_2167(Obj());
	var_116_object = var_115_object;
	func_1976(var_114_bool, var_115_object);
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
	func_1958();
	StopDialog(var_49_object);
	@@var_49_object:GetReturnValue((int)-1);
	var_51_int = var_42_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2311()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_2317()
{
	SetVariable("b8GeorgVisit", (int)1);
	return 0;
}


func_2323()
{
	SetVariable("b8q03", (int)1000);
	func_2459();
	return 0;
}


func_2071(var_156_bool, var_157_object)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = "";
	var_169_int = 0;
	func_2224(var_169_int);
	var_175_int = "d" + var_169_int;
	var_163_string = var_175_int + "m";
	var_164_int = 0;
	
Label_2080:
	if((int)1 != 0) {
		var_179_int = var_164_int + (int)1;
		var_180_int = var_163_string + var_179_int;
		@@var_157_object:HasProperty(var_180_int, var_165_bool);
		var_181_bool = var_165_bool == 0; //@nz
		if(var_181_bool != 0) {
		} else {
			var_164_int = var_164_int + (int)1;
			goto Label_2080;
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
	func_2145(var_188_bool, var_189_string);
	var_188_bool = var_156_bool;
	return 10;
	
}


func_2332()
{
	SetVariable("b8q03", (int)1000);
	func_2472();
	return 0;
}


func_2341(var_128_object)
{
	Trace("money3000 is given");
	var_131_object = Obj(); var_132_int = 0;
	var_128_object = var_131_object;
	func_2200(var_131_object, (int)3000);
	return 0;
}


func_2351(var_302_bool)
{
	var_304_int = 0; var_305_string = "";
	func_2183(var_304_int, "oob8Georg1");
	var_309_bool = var_304_int == (int)0;
	if(var_309_bool != 0) {
		var_302_bool = 1;
		return 0;
	}
	var_302_bool = 0;
	return 0;
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object;
	var_1_object = var_295_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_302_bool = 0; var_303_object = Obj();
		var_303_object = var_1_object;
		func_2351(var_303_object);
		if(var_302_bool != 0) {
			var_310_object = Obj(); var_311_object = Obj();
			var_310_object = var_1_object;
			var_311_object = var_0_object;
			func_2299();
			var_314_object = Obj(); var_315_object = Obj();
			var_314_object = var_1_object;
			var_315_object = var_0_object;
			func_2317();
			var_318_string = "";
			func_443(var_296_object, "Neutral");
			@@@var_0_object:SetMessage((int)521502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523951, (int)25235, (int)25234);
			@@@var_0_object:AddReply((int)523957, (int)25241, (int)25240);
		} else {
				var_341_string = "";
				func_443(var_296_object, "Neutral");
				@@@var_0_object:SetMessage((int)521505);
				@@@var_0_object:ClearReplies();
				var_343_bool = 0; var_344_object = Obj();
				var_344_object = var_1_object;
				func_2363(var_344_object);
				if(var_343_bool != 0) {
					@@@var_0_object:AddReply((int)521506, (int)22668, (int)22667);
				}
				var_352_bool = 0;
				var_352_bool = 0;
				var_353_bool = 0; var_354_object = Obj();
				var_354_object = var_1_object;
				func_2398(var_354_object);
				if(var_353_bool != 0) {
					var_364_bool = 0; var_365_object = Obj();
					var_365_object = var_1_object;
					func_2421(var_365_object);
					if(var_364_bool != 0) {
						var_352_bool = 1;
					}
				}
				if(var_352_bool != 0) {
					@@@var_0_object:AddReply((int)521523, (int)25213, (int)22684);
				}
				var_373_bool = 0;
				var_373_bool = 0;
				var_374_bool = 0; var_375_object = Obj();
				var_375_object = var_1_object;
				func_2375(var_375_object);
				if(var_374_bool != 0) {
					var_385_bool = 0; var_386_object = Obj();
					var_386_object = var_1_object;
					func_2421(var_386_object);
					if(var_385_bool != 0) {
						var_373_bool = 1;
					}
				}
				if(var_373_bool != 0) {
					@@@var_0_object:AddReply((int)521526, (int)22688, (int)22687);
				}
				@@@var_0_object:AddReply((int)521509, (int)-1, (int)22670);
				goto Label_413;
		}
	}
Label_413:
	var_333_bool = 0;
	func_2271(var_333_bool);
	if(var_333_bool != 0) {

	Label_417:
		lshWaitForAnimEnd();
		var_334_string = var_3_string;
		if(var_334_string != 0) {
		} else {
			var_335_string = "";
			var_335_string = var_2_object;
			func_2114(var_335_string);
			goto Label_417;
	}
		PlayAnimation("all", "idle");

	Label_432:
		WaitForAnimEnd();
		var_338_string = var_3_string;
		if(var_338_string != 0) {
			goto Label_442;
		}
		PlayAnimation("all", "idle");
		goto Label_432;

	}
	goto Label_442;
	
Label_442:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x137";


func_1843(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_1845()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1850(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_2363(var_343_bool)
{
	var_345_int = 0; var_346_string = "";
	func_2183(var_345_int, "b8q03");
	var_348_bool = var_345_int == (int)0;
	if(var_348_bool != 0) {
		var_343_bool = 1;
		return 0;
	}
	var_343_bool = 0;
	return 0;
}


func_1598(var_0_object)
{
	var_22_bool = 0;
	func_1884(var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1607:
	func_1774();
	goto Label_1607;
}
EMIT "Return(); Pop(0)";


func_2114(var_242_string)
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


func_1858(var_135_object, var_136_string, var_137_int)
{
	var_138_int = 0; var_139_int = 0;
	@@var_135_object:GetProperty(var_136_string, var_139_int);
	var_140_int = var_139_int + var_137_int;
	@@var_135_object:SetProperty(var_136_string, var_140_int);
	return 2;
}


func_2375(var_374_bool)
{
	var_376_bool = 0;
	var_376_bool = 0;
	var_377_int = 0; var_378_string = "";
	func_2183(var_377_int, "b8q03");
	var_380_bool = var_377_int == (int)3;
	if(var_380_bool != 0) {
		var_381_int = 0; var_382_string = "";
		func_2183(var_381_int, "b8q03MladVladIsVictim");
		var_384_bool = var_381_int != (int)0;
		if(var_384_bool != 0) {
			var_376_bool = 1;
		}
	}
	if(var_376_bool != 0) {
		var_374_bool = 1;
		return 0;
	}
	var_374_bool = 0;
	return 0;
}


func_1865(var_29_bool, var_30_cvector)
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


func_1612(var_46_bool)
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
	func_1875(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_216_string = "";
		func_139(var_210_object, "Neutral");
		@@@var_0_object:SetMessage((int)518057);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518058, (int)32643, (int)19191);
		@@@var_0_object:AddReply((int)531316, (int)32643, (int)32642);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_240_bool = 0;
	func_2271(var_240_bool);
	if(var_240_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_241_string = var_3_string;
		if(var_241_string != 0) {
		} else {
			var_242_string = "";
			var_242_string = var_2_object;
			func_2114(var_242_string);
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


func_2130(var_220_string, var_221_bool)
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


func_1875(var_25_bool, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	@@var_26_object:GetPosition(var_28_cvector);
	var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	var_28_cvector = var_30_cvector;
	func_1865(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
	return 2;
}


func_1627(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_98_float, var_99_float);
	return 0;
}


func_1884(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0;
	IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
	return 2;
}


func_2398(var_353_bool)
{
	var_355_bool = 0;
	var_355_bool = 0;
	var_356_int = 0; var_357_string = "";
	func_2183(var_356_int, "b8q03");
	var_359_bool = var_356_int == (int)3;
	if(var_359_bool != 0) {
		var_360_int = 0; var_361_string = "";
		func_2183(var_360_int, "b8q03MladVladIsVictim");
		var_363_bool = var_360_int == (int)0;
		if(var_363_bool != 0) {
			var_355_bool = 1;
		}
	}
	if(var_355_bool != 0) {
		var_353_bool = 1;
		return 0;
	}
	var_353_bool = 0;
	return 0;
}


func_1632(var_29_bool)
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
	func_1850(var_36_float, var_37_object);
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


func_1889(var_53_bool, var_54_object, var_55_float)
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
	func_2173(var_80_cvector, var_81_cvector);
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
	func_2271(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		HasAnimationTrack(var_73_bool, "head");
		var_98_bool = var_73_bool;
		if(var_98_bool == 0) goto Label_1952;
		LookAsyncCamera("head");
	}
Label_1952:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_53_bool = 1;
	return 18;
	
}


func_2145(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0;
	var_152_bool = 0;
	func_2271(var_152_bool);
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


func_1129(var_0_object, var_400_int, var_401_object)
{
	var_403_object = Obj(); var_404_bool = 0; var_405_int = 0; var_406_bool = 0; var_407_object = Obj(); var_408_bool = 0; var_409_int = 0; var_410_bool = 0;
	var_0_object = var_401_object;
	var_411_bool = 0; var_412_object = Obj(); var_413_float = 0;
	var_401_object = var_412_object;
	func_1889(var_411_bool, var_412_object, (float)70.0);
	var_414_bool = var_411_bool == 0; //@nz
	if(var_414_bool != 0) {
		var_400_int = -2;
		return 8;
	}
	CreateDialog(var_407_object);
	var_415_int = 0;
	func_2265(var_415_int);
	@@var_407_object:SetNPCName(var_415_int);
	var_416_int = 0;
	func_2263(var_416_int);
	@@var_407_object:SetNPCDescription(var_416_int);
	var_417_string = "";
	func_2267(var_417_string);
	@@var_407_object:SetPhoto(var_417_string);
	var_418_string = "";
	func_2269(var_418_string);
	@@var_407_object:SetPhoto2(var_418_string);
	var_419_int = 0;
	func_2543(var_419_int);
	@@var_407_object:SetPlayerName(var_419_int);
	IsOverrideActive(var_408_bool);
	var_420_bool = var_408_bool;
	if(var_420_bool != 0) {
		var_400_int = -2;
		return 8;
	}
	DoDialog(var_407_object);
	var_421_bool = 0; var_422_object = Obj();
	func_2167(Obj());
	var_423_object = var_422_object;
	func_1976(var_421_bool, var_422_object);
	var_424_object = Obj(); var_425_object = Obj();
	var_401_object = var_424_object;
	var_407_object = var_425_object;
	TaskCall(5);
	func_1210(var_426_object, var_427_object, var_428_string, var_429_bool, var_424_object, var_425_object);
	TaskReturn();
	@@var_407_object:IsDialogEnd(var_410_bool);
	
Label_1192:
	var_457_bool = var_410_bool == 0; //@nz
	if(var_457_bool != 0) {
		sync();
		@@var_407_object:IsDialogEnd(var_410_bool);
		goto Label_1192;
	}
	var_401_object = Obj();
	func_1958();
	StopDialog(var_407_object);
	@@var_407_object:GetReturnValue((int)-1);
	var_409_int = var_400_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1388(var_0_object, var_460_int, var_461_object)
{
	var_463_object = Obj(); var_464_bool = 0; var_465_int = 0; var_466_bool = 0; var_467_object = Obj(); var_468_bool = 0; var_469_int = 0; var_470_bool = 0;
	var_0_object = var_461_object;
	var_471_bool = 0; var_472_object = Obj(); var_473_float = 0;
	var_461_object = var_472_object;
	func_1889(var_471_bool, var_472_object, (float)70.0);
	var_474_bool = var_471_bool == 0; //@nz
	if(var_474_bool != 0) {
		var_460_int = -2;
		return 8;
	}
	CreateDialog(var_467_object);
	var_475_int = 0;
	func_2265(var_475_int);
	@@var_467_object:SetNPCName(var_475_int);
	var_476_int = 0;
	func_2263(var_476_int);
	@@var_467_object:SetNPCDescription(var_476_int);
	var_477_string = "";
	func_2267(var_477_string);
	@@var_467_object:SetPhoto(var_477_string);
	var_478_string = "";
	func_2269(var_478_string);
	@@var_467_object:SetPhoto2(var_478_string);
	var_479_int = 0;
	func_2543(var_479_int);
	@@var_467_object:SetPlayerName(var_479_int);
	IsOverrideActive(var_468_bool);
	var_480_bool = var_468_bool;
	if(var_480_bool != 0) {
		var_460_int = -2;
		return 8;
	}
	DoDialog(var_467_object);
	var_481_bool = 0; var_482_object = Obj();
	func_2167(Obj());
	var_483_object = var_482_object;
	func_1976(var_481_bool, var_482_object);
	var_484_object = Obj(); var_485_object = Obj();
	var_461_object = var_484_object;
	var_467_object = var_485_object;
	TaskCall(7);
	func_1469(var_486_object, var_487_object, var_488_string, var_489_bool, var_484_object, var_485_object);
	TaskReturn();
	@@var_467_object:IsDialogEnd(var_470_bool);
	
Label_1451:
	var_514_bool = var_470_bool == 0; //@nz
	if(var_514_bool != 0) {
		sync();
		@@var_467_object:IsDialogEnd(var_470_bool);
		goto Label_1451;
	}
	var_461_object = Obj();
	func_1958();
	StopDialog(var_467_object);
	@@var_467_object:GetReturnValue((int)-1);
	var_469_int = var_460_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2160()
{
	var_24_bool = 0;
	func_2271(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2421(var_364_bool)
{
	var_366_int = 0; var_367_string = "";
	func_2183(var_366_int, "oob8Georg2");
	var_369_bool = var_366_int == (int)0;
	if(var_369_bool != 0) {
		var_364_bool = 1;
		return 0;
	}
	var_364_bool = 0;
	return 0;
}


func_1654()
{
	var_518_float = 0; var_519_float = 0;
	rand(var_519_float, (int)8, (int)16);
	SetTimer((int)10, var_519_float);
	return 2;
}


func_2167(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj();
	self(var_118_object);
	var_118_object = var_116_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2173(var_80_cvector, var_81_cvector)
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


func_1663()
{
	KillTimer((int)10);
	return 0;
}


func_2433()
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateDiaryEntry(var_48_object, (int)575, (int)2, (int)530655);
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0;
	var_48_object = var_53_object;
	func_2498(var_52_bool, var_53_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2183(var_304_int, var_305_string)
{
	var_306_int = 0; var_307_int = 0;
	GetVariable(var_305_string, var_307_int);
	var_307_int = var_304_int;
	return 2;
}


func_139(var_2_object, var_216_string)
{
	var_217_bool = 0;
	func_2271(var_217_bool);
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
	func_2130(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	return 0;
	
}


func_2188(var_144_int, var_145_int)
{
	var_146_object = Obj(); var_147_object = Obj();
	CreateIntVector(var_147_object);
	@@var_147_object:add(var_144_int);
	@@var_147_object:add(var_145_int);
	SendWorldWndMessage((int)3, var_147_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2446()
{
	var_70_object = Obj(); var_71_object = Obj();
	CreateDiaryEntry(var_71_object, (int)576, (int)2, (int)530656);
	var_75_bool = 0; var_76_object = Obj(); var_77_int = 0;
	var_71_object = var_76_object;
	func_2498(var_75_bool, var_76_object, (int)575);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2200(var_131_object, var_132_int)
{
	var_133_int = 0; var_134_int = 0;
	var_135_object = Obj(); var_136_string = ""; var_137_int = 0;
	var_131_object = var_135_object;
	var_132_int = var_137_int;
	func_1858(var_135_object, "money", var_137_int);
	var_142_bool = var_132_int > (int)0;
	if(var_142_bool != 0) {
		GetInvItemByName(var_134_int, "Money");
		var_144_int = 0; var_145_int = 0;
		var_134_int = var_144_int;
		var_132_int = var_145_int;
		func_2188(var_144_int, var_145_int);
	}
	return 2;
}


func_2459()
{
	var_94_object = Obj(); var_95_object = Obj();
	CreateDiaryEntry(var_95_object, (int)580, (int)2, (int)530660);
	var_99_bool = 0; var_100_object = Obj(); var_101_int = 0;
	var_95_object = var_100_object;
	func_2498(var_99_bool, var_100_object, (int)575);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1958()
{
	var_260_bool = 0; var_261_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_263_bool = 0;
	func_2271(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		HasAnimationTrack(var_261_bool, "head");
		var_265_bool = var_261_bool;
		if(var_265_bool == 0) goto Label_1975;
		UnlookAsync("head");
	}
Label_1975:
	return 2;
	
}


func_2472()
{
	var_153_object = Obj(); var_154_object = Obj();
	CreateDiaryEntry(var_154_object, (int)581, (int)2, (int)530661);
	var_158_bool = 0; var_159_object = Obj(); var_160_int = 0;
	var_154_object = var_159_object;
	func_2498(var_158_bool, var_159_object, (int)575);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2219(var_44_float)
{
	var_45_float = 0; var_46_float = 0;
	GetGameTime(var_46_float);
	var_46_float = var_44_float;
	return 2;
}


func_2224(var_169_int)
{
	var_170_float = 0; var_171_float = 0;
	GetGameTime(var_171_float);
	var_173_int = 0;
	var_173_int = var_171_float / (int)24;
	var_169_int = (int)1 + var_173_int;
	return 2;
}


func_2485(var_61_object)
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


func_1976(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0;
	GetVariable("voice_common", var_121_int);
	var_124_int = var_121_int;
	if(var_124_int != 0) {
		var_125_bool = 0; var_126_object = Obj();
		var_115_object = var_126_object;
		func_2034(var_125_bool, var_126_object);
		var_155_bool = var_125_bool == 0; //@nz
		if(var_155_bool != 0) {
			var_156_bool = 0; var_157_object = Obj();
			var_115_object = var_157_object;
			func_2071(var_156_bool, var_157_object);
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
		func_2071(var_201_bool, var_202_object);
		var_203_bool = var_201_bool == 0; //@nz
		if(var_203_bool != 0) {
			var_204_bool = 0; var_205_object = Obj();
			var_115_object = var_205_object;
			func_2034(var_204_bool, var_205_object);
			var_206_bool = var_204_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2032;
	
Label_2032:
	var_114_bool = 1;
	return 4;
	
}


func_2233(var_268_bool, var_269_int)
{
	var_270_int = 0;
	func_2224(var_270_int);
	var_268_bool = var_270_int == var_269_int;
	return 0;
}


func_1210(var_0_object, var_1_object, var_2_object, var_3_string, var_424_object, var_425_object)
{
	var_0_object = var_425_object;
	var_1_object = var_424_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_431_string = "";
		func_1273(var_425_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_1243;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4be";
	}
Label_1243:
	var_449_bool = 0;
	func_2271(var_449_bool);
	if(var_449_bool != 0) {

	Label_1247:
		lshWaitForAnimEnd();
		var_450_string = var_3_string;
		if(var_450_string != 0) {
		} else {
			var_451_string = "";
			var_451_string = var_2_object;
			func_2114(var_451_string);
			goto Label_1247;
	}
		PlayAnimation("all", "idle");

	Label_1262:
		WaitForAnimEnd();
		var_454_string = var_3_string;
		if(var_454_string != 0) {
			goto Label_1272;
		}
		PlayAnimation("all", "idle");
		goto Label_1262;
	}
	goto Label_1272;
	
Label_1272:
	return 0;
	
}


func_443(var_2_object, var_318_string)
{
	var_319_bool = 0;
	func_2271(var_319_bool);
	var_320_bool = var_319_bool == 0; //@nz
	if(var_320_bool != 0) {
		return 0;
	}
	var_321_bool = var_318_string == var_2_object;
	if(var_321_bool != 0) {
		return 0;
	}
	var_322_string = ""; var_323_bool = 0;
	var_318_string = var_322_string;
	var_325_bool = var_318_string == "";
	if(var_325_bool != 0) {
		var_323_bool = 0;
	} else {
		var_323_bool = 1;
	}
	func_2130(var_322_string, var_323_bool);
	var_2_object = var_318_string;
	return 0;
	
}


func_1469(var_0_object, var_1_object, var_2_object, var_3_string, var_484_object, var_485_object)
{
	var_0_object = var_485_object;
	var_1_object = var_484_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_491_string = "";
		func_1527(var_485_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_1497;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5c1";
	}
Label_1497:
	var_506_bool = 0;
	func_2271(var_506_bool);
	if(var_506_bool != 0) {

	Label_1501:
		lshWaitForAnimEnd();
		var_507_string = var_3_string;
		if(var_507_string != 0) {
		} else {
			var_508_string = "";
			var_508_string = var_2_object;
			func_2114(var_508_string);
			goto Label_1501;
	}
		PlayAnimation("all", "idle");

	Label_1516:
		WaitForAnimEnd();
		var_511_string = var_3_string;
		if(var_511_string != 0) {
			goto Label_1526;
		}
		PlayAnimation("all", "idle");
		goto Label_1516;
	}
	goto Label_1526;
	
Label_1526:
	return 0;
	
}


func_2239(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	var_50_int = var_47_int;
	if(var_50_int != 0) {
		"idle" = "idle" + var_47_int;
	}
	var_49_string = var_46_string;
	return 2;
}


func_2498(var_52_bool, var_53_object, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0; var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0;
	func_2485(Obj());
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


func_2246(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_43_int = 0;
	
Label_2248:
	var_46_string = ""; var_47_int = 0;
	var_43_int = var_47_int;
	func_2239(var_46_string, var_47_int);
	HasAnimation(var_44_bool, "all", var_46_string);
	var_51_bool = var_44_bool == 0; //@nz
	if(var_51_bool != 0) {
	} else {
		var_43_int = var_43_int + (int)1;
		goto Label_2248;
	}
	var_43_int = var_40_int;
	return 4;
	
}


func_2263(var_102_int)
{
	var_102_int = 515534;
	return 0;
}


func_2265(var_101_int)
{
	var_101_int = 502859;
	return 0;
}


func_2267(var_103_string)
{
	var_103_string = "ui/NPC_Georg.png";
	return 0;
}


func_2269(var_104_string)
{
	var_104_string = "ui/NPC_Georg_b.png";
	return 0;
}


func_2526(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj();
	GetMainOutdoorScene(var_36_object);
	var_38_bool = var_36_object == 0; //@ne
	if(var_38_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_37_object = 0;
		var_37_object = var_33_object;
		return 4;
	}
	@@var_36_object:GetMap(var_37_object);
	var_37_object = var_33_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2271(var_96_bool)
{
	var_96_bool = 1;
	return 0;
}


func_2273()
{
	var_29_object = Obj(); var_30_object = Obj();
	SetVariable("b8q03", (int)1);
	func_2526(Obj());
	var_33_object = var_30_object;
	var_44_float = 0;
	func_2219(var_44_float);
	@@var_30_object:AddMark("b8q03GeorgGotoKaterina", "pt_map_katerina", (int)0, (int)530663, var_44_float);
	func_2433();
	func_2446();
	return 2;
}
EMIT "Stack[-1] = 0";


func_226(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0;
	var_0_object = var_272_object;
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0;
	var_272_object = var_283_object;
	func_1889(var_282_bool, var_283_object, (float)70.0);
	var_285_bool = var_282_bool == 0; //@nz
	if(var_285_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	CreateDialog(var_278_object);
	var_286_int = 0;
	func_2265(var_286_int);
	@@var_278_object:SetNPCName(var_286_int);
	var_287_int = 0;
	func_2263(var_287_int);
	@@var_278_object:SetNPCDescription(var_287_int);
	var_288_string = "";
	func_2267(var_288_string);
	@@var_278_object:SetPhoto(var_288_string);
	var_289_string = "";
	func_2269(var_289_string);
	@@var_278_object:SetPhoto2(var_289_string);
	var_290_int = 0;
	func_2543(var_290_int);
	@@var_278_object:SetPlayerName(var_290_int);
	IsOverrideActive(var_279_bool);
	var_291_bool = var_279_bool;
	if(var_291_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	DoDialog(var_278_object);
	var_292_bool = 0; var_293_object = Obj();
	func_2167(Obj());
	var_294_object = var_293_object;
	func_1976(var_292_bool, var_293_object);
	var_295_object = Obj(); var_296_object = Obj();
	var_272_object = var_295_object;
	var_278_object = var_296_object;
	TaskCall(3);
	func_307(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object);
	TaskReturn();
	@@var_278_object:IsDialogEnd(var_281_bool);
	
Label_289:
	var_393_bool = var_281_bool == 0; //@nz
	if(var_393_bool != 0) {
		sync();
		@@var_278_object:IsDialogEnd(var_281_bool);
		goto Label_289;
	}
	var_272_object = Obj();
	func_1958();
	StopDialog(var_278_object);
	@@var_278_object:GetReturnValue((int)-1);
	var_280_int = var_271_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1774()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0;
	WaitForAnimEnd();
	var_38_bool = 0;
	func_1884(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 12;
	}
	func_2246((int)0);
	var_40_int = var_32_int;
	var_33_int = 0;
	
Label_1788:
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_33_int < (int)5;
	if(var_55_bool != 0) {
		var_56_bool = 0;
		func_1884(var_56_bool);
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
				func_2239(var_67_string, var_68_int);
				PlayAnimation("all", var_67_string);
				WaitForAnimEnd(var_37_bool);
				var_69_bool = var_37_bool == 0; //@nz
				if(var_69_bool == 0) goto Label_1829;
				goto Label_1840;
		}
		Label_1829:
			var_60_bool = 0;
			func_1843(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_1840;
			}
			ResetAAS();
			var_33_int = var_33_int + (int)1;
			goto Label_1788;

		}
	}
Label_1840:
	ResetAAS();
	return 12;
	
}


func_2543(var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	GetVariable("branch", var_107_int);
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x9fe";
	}
	var_112_bool = var_107_int == (int)1;
	if(var_112_bool != 0) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
	return 2;
}


func_2034(var_125_bool, var_126_object)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = "";
	var_132_string = "c";
	var_133_int = 0;
	
Label_2037:
	if((int)1 != 0) {
		var_139_int = var_133_int + (int)1;
		var_140_int = var_132_string + var_139_int;
		@@var_126_object:HasProperty(var_140_int, var_134_bool);
		var_141_bool = var_134_bool == 0; //@nz
		if(var_141_bool != 0) {
		} else {
			var_133_int = var_133_int + (int)1;
			goto Label_2037;
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
	func_2145(var_148_bool, var_149_string);
	var_148_bool = var_125_bool;
	return 10;
	
}


func_1527(var_2_object, var_491_string)
{
	var_492_bool = 0;
	func_2271(var_492_bool);
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
	func_2130(var_495_string, var_496_bool);
	var_2_object = var_491_string;
	return 0;
	
}


func_1273(var_2_object, var_431_string)
{
	var_432_bool = 0;
	func_2271(var_432_bool);
	var_433_bool = var_432_bool == 0; //@nz
	if(var_433_bool != 0) {
		return 0;
	}
	var_434_bool = var_431_string == var_2_object;
	if(var_434_bool != 0) {
		return 0;
	}
	var_435_string = ""; var_436_bool = 0;
	var_431_string = var_435_string;
	var_438_bool = var_431_string == "";
	if(var_438_bool != 0) {
		var_436_bool = 0;
	} else {
		var_436_bool = 1;
	}
	func_2130(var_435_string, var_436_bool);
	var_2_object = var_431_string;
	return 0;
	
}


func_2299()
{
	SetVariable("oob8Georg1", (int)1);
	return 0;
}


