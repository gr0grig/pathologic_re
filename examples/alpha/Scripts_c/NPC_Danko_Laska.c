// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Laska.png|W:d1q02AnnaGotoLaska|A:FindMark|A:Remove|W:d1q02ViktorGotoAnna|W:quest_d1_02|W:completed|W:lockpick1time is given|W:lockpick|W:uses|A:SetProperty|W:playsound|W:giveitem|W:ood1Laska4|W:ood1Laska5|W:ood1Laska6|W:ood1Laska7|W:powder is given|W:powder|W:ood6Laska1|W:d6q01|W:d6q01LaskaGotoAlbinos|W:pt_d6q03_albinos|A:AddMark|W:quest_d6_01|W:albinos_klara|W:eva_klara|W:KnowLaska|W:ood1Laska1|W:ood3Laska1|W:ood1Laska2|W:ood1Laska3|W:d1q01FirstGeorgVisit|W:d1q02|W:d6q03AlbinosKilled|W:KnowKaterina|W:KnowMaria|W:KnowMishka|W:KnowOspina|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x1d vars=
// @EVENT_0: op=0x23 vars=object
// @EVENT_10: op=0x29 vars=object
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbf vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x27c vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x66d vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x795 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8bc vars=int,int
// @PE: 0x23,0x29,0x70,0xaf,0xbf,0x16d,0x26c,0x27c,0x623,0x65d,0x66d,0x732,0x785,0x795,0x864,0x8ac,0x8bc,0xa13,0xa7b,0xac7,0xacd,0xad3,0xad9,0xadf,0xae5,0xaf0,0xb12,0xb1d,0xb23,0xb29,0xb2f,0xb35,0xb3b,0xb47,0xb53,0xb5f,0xb6b,0xb77,0xb83,0xb8d,0xb97,0xba1,0xbad,0xbb9,0xbc5,0xbd1,0xbdd,0xbe9,0xbf5,0xc01,0xc0d,0xc19,0xc25,0xc30,0xc45,0xcdb

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool)
{
	var_26_object = Obj();
	var_25_bool = var_26_object;
	func_3291(var_26_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj();
	var_25_bool = var_27_object;
	func_2506(var_26_bool, var_27_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	if((int)1 != 0) {
		func_2601();
		var_30_bool = var_25_string == (int)429;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_2845();
			var_35_string = "";
			func_175(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)370);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)371, (int)432, (int)430);
			@@@var_0_object:AddReply((int)372, (int)437, (int)431);
			return 0;
		}
		var_58_bool = var_25_string == (int)437;
		if(var_58_bool != 0) {
			var_59_string = "";
			func_175(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)378, (int)432, (int)438);
			return 0;
		}
		var_65_bool = var_25_string == (int)432;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_175(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)374, (int)435, (int)433);
			@@@var_0_object:AddReply((int)375, (int)435, (int)434);
			return 0;
		}
		var_75_bool = var_25_string == (int)435;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_175(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)381, (int)-1, (int)442);
			@@@var_0_object:AddReply((int)379, (int)-1, (int)440);
			return 0;
		}
		var_3_string = true;
		var_84_bool = 0;
		func_2702(var_84_bool);
		if(var_84_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	if((int)1 != 0) {
		func_2601();
		var_30_bool = var_26_bool == (int)5562;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_2851();
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_2704();
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_2759();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_2738(var_96_object);
		}
		var_115_bool = var_26_bool == (int)5563;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_2851();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_2704();
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_2759();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_2738(var_123_object);
		}
		var_125_bool = var_26_bool == (int)5564;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_2851();
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_2704();
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_2759();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_2738(var_133_object);
		}
		var_135_bool = var_26_bool == (int)5591;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_2851();
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_2704();
		}
		var_141_bool = var_26_bool == (int)5617;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_2863();
		}
		var_147_bool = var_26_bool == (int)5613;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_2863();
		}
		var_151_bool = var_26_bool == (int)5597;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_2869();
		}
		var_157_bool = var_26_bool == (int)5598;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_2869();
		}
		var_161_bool = var_26_bool == (int)5599;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_2869();
		}
		var_165_bool = var_26_bool == (int)5606;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_2869();
		}
		var_169_bool = var_26_bool == (int)9530;
		if(var_169_bool != 0) {
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_2765();
		}
		var_175_bool = var_26_bool == (int)9531;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_2771();
		}
		var_181_bool = var_26_bool == (int)9532;
		if(var_181_bool != 0) {
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_2777();
		}
		var_187_bool = var_26_bool == (int)9533;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_2783();
		}
		var_193_bool = var_25_string == (int)5553;
		if(var_193_bool != 0) {
			var_194_bool = 0;
			var_194_bool = 0;
			var_195_bool = 0; var_196_object = Obj();
			var_196_object = var_1_object;
			func_3073(var_196_object);
			if(var_195_bool != 0) {
				var_203_bool = 0; var_204_object = Obj();
				var_204_object = var_1_object;
				func_2887(var_204_object);
				if(var_203_bool != 0) {
					var_194_bool = 1;
				}
			}
			if(var_194_bool != 0) {
				var_209_string = "";
				func_620(var_26_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5050);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5051, (int)5555, (int)5554);
				@@@var_0_object:AddReply((int)5073, (int)5582, (int)5581);
				return 0;
			}
			var_231_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8066);
			@@@var_0_object:ClearReplies();
			var_233_bool = 0;
			var_233_bool = 1;
			var_234_bool = 0;
			var_234_bool = 0;
			var_235_bool = 0;
			var_235_bool = 0;
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_2957(var_236_bool, var_237_object);
			if(var_236_bool != 0) {
				var_251_bool = 0; var_252_object = Obj();
				var_252_object = var_1_object;
				func_3085(var_252_object);
				if(var_251_bool != 0) {
					var_235_bool = 1;
				}
			}
			if(var_235_bool != 0) {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_2875(var_258_object);
				if(var_257_bool != 0) {
					var_234_bool = 1;
				}
			}
			if(var_234_bool != 1) {
				var_263_bool = 0;
				var_263_bool = 0;
				var_264_bool = 0;
				var_264_bool = 0;
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_2967(var_265_bool, var_266_object);
				if(var_265_bool != 0) {
					var_276_bool = 0; var_277_object = Obj();
					var_277_object = var_1_object;
					func_3085(var_277_object);
					if(var_276_bool != 0) {
						var_264_bool = 1;
					}
				}
				if(var_264_bool != 0) {
					var_278_bool = 0; var_279_object = Obj();
					var_279_object = var_1_object;
					func_2875(var_279_object);
					if(var_278_bool != 0) {
						var_263_bool = 1;
					}
				}
				if(var_263_bool != 1) {
					var_233_bool = 0;
				}
			}
			if(var_233_bool != 0) {
				@@@var_0_object:AddReply((int)8067, (int)5607, (int)8890);
			}
			var_283_bool = 0;
			var_283_bool = 1;
			var_284_bool = 0;
			var_284_bool = 0;
			var_285_bool = 0; var_286_object = Obj();
			var_286_object = var_1_object;
			func_2967(var_285_bool, var_286_object);
			if(var_285_bool != 0) {
				var_287_bool = 0; var_288_object = Obj();
				var_288_object = var_1_object;
				func_3097(var_288_object);
				if(var_287_bool != 0) {
					var_284_bool = 1;
				}
			}
			if(var_284_bool != 1) {
				var_293_bool = 0;
				var_293_bool = 0;
				var_294_bool = 0; var_295_object = Obj();
				var_295_object = var_1_object;
				func_2947(var_294_bool, var_295_object);
				if(var_294_bool != 0) {
					var_301_bool = 0; var_302_object = Obj();
					var_302_object = var_1_object;
					func_3097(var_302_object);
					if(var_301_bool != 0) {
						var_293_bool = 1;
					}
				}
				if(var_293_bool != 1) {
					var_283_bool = 0;
				}
			}
			if(var_283_bool != 0) {
				@@@var_0_object:AddReply((int)8068, (int)5592, (int)8891);
			}
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_3061(var_308_object);
			if(var_307_bool != 0) {
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_2899(var_314_object);
				if(var_313_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)8076, (int)8916, (int)8899);
			}
			var_322_bool = 0;
			var_322_bool = 0;
			var_323_bool = 0; var_324_object = Obj();
			var_324_object = var_1_object;
			func_3025(var_324_object);
			if(var_323_bool != 0) {
				var_329_bool = 0; var_330_object = Obj();
				var_330_object = var_1_object;
				func_2911(var_330_object);
				if(var_329_bool != 0) {
					var_322_bool = 1;
				}
			}
			if(var_322_bool != 0) {
				@@@var_0_object:AddReply((int)8077, (int)8917, (int)8900);
			}
			var_338_bool = 0;
			var_338_bool = 0;
			var_339_bool = 0; var_340_object = Obj();
			var_340_object = var_1_object;
			func_3013(var_340_object);
			if(var_339_bool != 0) {
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_2923(var_346_object);
				if(var_345_bool != 0) {
					var_338_bool = 1;
				}
			}
			if(var_338_bool != 0) {
				@@@var_0_object:AddReply((int)8078, (int)8918, (int)8901);
			}
			var_354_bool = 0;
			var_354_bool = 0;
			var_355_bool = 0; var_356_object = Obj();
			var_356_object = var_1_object;
			func_3037(var_356_object);
			if(var_355_bool != 0) {
				var_361_bool = 0; var_362_object = Obj();
				var_362_object = var_1_object;
				func_2935(var_362_object);
				if(var_361_bool != 0) {
					var_354_bool = 1;
				}
			}
			if(var_354_bool != 0) {
				@@@var_0_object:AddReply((int)8090, (int)8919, (int)8913);
			}
			@@@var_0_object:AddReply((int)8697, (int)-1, (int)9534);
			return 0;
		}
		var_374_bool = var_25_string == (int)8919;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8096);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8696, (int)-1, (int)9533);
			return 0;
		}
		var_381_bool = var_25_string == (int)8918;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8095);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8695, (int)-1, (int)9532);
			return 0;
		}
		var_388_bool = var_25_string == (int)8917;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8694, (int)-1, (int)9531);
			return 0;
		}
		var_395_bool = var_25_string == (int)8916;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8693, (int)-1, (int)9530);
			return 0;
		}
		var_402_bool = var_25_string == (int)5592;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5082);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5083, (int)5594, (int)5593);
			@@@var_0_object:AddReply((int)5091, (int)5603, (int)5602);
			return 0;
		}
		var_412_bool = var_25_string == (int)5603;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5093, (int)5596, (int)5604);
			@@@var_0_object:AddReply((int)5094, (int)-1, (int)5606);
			return 0;
		}
		var_422_bool = var_25_string == (int)5594;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5085, (int)5596, (int)5595);
			@@@var_0_object:AddReply((int)5090, (int)5596, (int)5600);
			return 0;
		}
		var_432_bool = var_25_string == (int)5596;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5087, (int)-1, (int)5597);
			@@@var_0_object:AddReply((int)5088, (int)-1, (int)5598);
			@@@var_0_object:AddReply((int)5089, (int)-1, (int)5599);
			return 0;
		}
		var_445_bool = var_25_string == (int)5607;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5095);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5096, (int)5609, (int)5608);
			@@@var_0_object:AddReply((int)5102, (int)5609, (int)5614);
			return 0;
		}
		var_455_bool = var_25_string == (int)5609;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5097);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5098, (int)5616, (int)5610);
			@@@var_0_object:AddReply((int)5099, (int)5612, (int)5611);
			return 0;
		}
		var_465_bool = var_25_string == (int)5612;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5101, (int)-1, (int)5613);
			return 0;
		}
		var_472_bool = var_25_string == (int)5616;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5103);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5104, (int)-1, (int)5617);
			return 0;
		}
		var_479_bool = var_25_string == (int)5582;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5075, (int)5584, (int)5583);
			@@@var_0_object:AddReply((int)5078, (int)5588, (int)5587);
			return 0;
		}
		var_489_bool = var_25_string == (int)5588;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5080, (int)5557, (int)5589);
			@@@var_0_object:AddReply((int)5081, (int)-1, (int)5591);
			return 0;
		}
		var_499_bool = var_25_string == (int)5584;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5077, (int)5555, (int)5585);
			return 0;
		}
		var_506_bool = var_25_string == (int)5555;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5053, (int)5557, (int)5556);
			@@@var_0_object:AddReply((int)5069, (int)5576, (int)5575);
			return 0;
		}
		var_516_bool = var_25_string == (int)5576;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5071, (int)5557, (int)5577);
			@@@var_0_object:AddReply((int)5072, (int)5557, (int)5579);
			return 0;
		}
		var_526_bool = var_25_string == (int)5557;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5054);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5055, (int)5559, (int)5558);
			return 0;
		}
		var_533_bool = var_25_string == (int)5559;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5057, (int)5561, (int)5560);
			@@@var_0_object:AddReply((int)5062, (int)5566, (int)5565);
			return 0;
		}
		var_543_bool = var_25_string == (int)5566;
		if(var_543_bool != 0) {
			var_544_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5064, (int)5561, (int)5567);
			@@@var_0_object:AddReply((int)5065, (int)5570, (int)5569);
			return 0;
		}
		var_553_bool = var_25_string == (int)5570;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5066);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5067, (int)5561, (int)5571);
			return 0;
		}
		var_560_bool = var_25_string == (int)5561;
		if(var_560_bool != 0) {
			var_561_string = "";
			func_620(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5059, (int)-1, (int)5562);
			@@@var_0_object:AddReply((int)5060, (int)-1, (int)5563);
			@@@var_0_object:AddReply((int)5061, (int)-1, (int)5564);
			return 0;
		}
		var_3_string = true;
		var_572_bool = 0;
		func_2702(var_572_bool);
		if(var_572_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x27d";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	if((int)1 != 0) {
		func_2601();
		var_30_bool = var_25_string == (int)10415;
		if(var_30_bool != 0) {
			var_31_string = "";
			func_1629(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9473);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9474, (int)10417, (int)10416);
			@@@var_0_object:AddReply((int)9487, (int)-1, (int)10429);
			return 0;
		}
		var_54_bool = var_25_string == (int)10417;
		if(var_54_bool != 0) {
			var_55_string = "";
			func_1629(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9475);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9476, (int)10419, (int)10418);
			@@@var_0_object:AddReply((int)9481, (int)10424, (int)10423);
			return 0;
		}
		var_64_bool = var_25_string == (int)10424;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_1629(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9483, (int)10426, (int)10425);
			return 0;
		}
		var_71_bool = var_25_string == (int)10426;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_1629(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9484);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9485, (int)-1, (int)10427);
			@@@var_0_object:AddReply((int)9486, (int)-1, (int)10428);
			return 0;
		}
		var_81_bool = var_25_string == (int)10419;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_1629(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9478, (int)-1, (int)10420);
			@@@var_0_object:AddReply((int)9479, (int)-1, (int)10421);
			@@@var_0_object:AddReply((int)9480, (int)-1, (int)10422);
			return 0;
		}
		var_3_string = true;
		var_93_bool = 0;
		func_2702(var_93_bool);
		if(var_93_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x66e";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	if((int)1 != 0) {
		func_2601();
		var_30_bool = var_26_bool == (int)10976;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_2789(var_32_object);
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_2759();
		}
		var_55_bool = var_25_string == (int)10968;
		if(var_55_bool != 0) {
			var_56_bool = 0; var_57_object = Obj();
			var_57_object = var_1_object;
			func_3049(var_57_object);
			if(var_56_bool != 0) {
				var_64_object = Obj(); var_65_object = Obj();
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_2857();
				var_68_string = "";
				func_1925(var_26_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9951);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9952, (int)10970, (int)10969);
				@@@var_0_object:AddReply((int)9961, (int)10970, (int)10978);
				return 0;
			}
			var_90_string = "";
			func_1925(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15315, (int)-1, (int)16553);
			return 0;
		}
		var_96_bool = var_25_string == (int)10970;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_1925(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9953);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9954, (int)-1, (int)10971);
			@@@var_0_object:AddReply((int)9955, (int)10973, (int)10972);
			return 0;
		}
		var_106_bool = var_25_string == (int)10973;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_1925(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9957, (int)10975, (int)10974);
			return 0;
		}
		var_113_bool = var_25_string == (int)10975;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_1925(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9959, (int)-1, (int)10976);
			@@@var_0_object:AddReply((int)9960, (int)-1, (int)10977);
			return 0;
		}
		var_3_string = true;
		var_122_bool = 0;
		func_2702(var_122_bool);
		if(var_122_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x796";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int)
{
	if((int)1 != 0) {
		func_2601();
		var_30_bool = var_26_int == (int)14233;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_2800();
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_2834();
		}
		var_46_bool = var_26_int == (int)14234;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_2800();
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_2834();
		}
		var_52_bool = var_26_int == (int)14027;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_2800();
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_2806();
		}
		var_104_bool = var_26_int == (int)14026;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_2800();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_2806();
		}
		var_110_bool = var_25_int == (int)14015;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_2220(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)12815);
			@@@var_0_object:ClearReplies();
			var_127_bool = 0;
			var_127_bool = 0;
			var_128_bool = 0; var_129_object = Obj();
			var_129_object = var_1_object;
			func_2989(var_129_object);
			if(var_128_bool != 0) {
				var_136_bool = 0; var_137_object = Obj();
				var_137_object = var_1_object;
				func_3001(var_137_object);
				if(var_136_bool != 0) {
					var_127_bool = 1;
				}
			}
			if(var_127_bool != 0) {
				@@@var_0_object:AddReply((int)12816, (int)14017, (int)14016);
			}
			@@@var_0_object:AddReply((int)12828, (int)-1, (int)14028);
			return 0;
		}
		var_149_bool = var_25_int == (int)14017;
		if(var_149_bool != 0) {
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_2977(var_151_object);
			var_156_bool = var_150_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_157_string = "";
				func_2220(var_26_int, "Neutral");
				@@@var_0_object:SetMessage((int)12817);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13022, (int)14230, (int)14229);
				return 0;
			}
			var_162_bool = 0; var_163_object = Obj();
			var_163_object = var_1_object;
			func_2977(var_163_object);
			if(var_162_bool != 0) {
				var_164_string = "";
				func_2220(var_26_int, "Neutral");
				@@@var_0_object:SetMessage((int)13021);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12818, (int)14019, (int)14018);
				return 0;
			}
		}
		var_170_bool = var_25_int == (int)14019;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_2220(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)12819);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12820, (int)14021, (int)14020);
			return 0;
		}
		var_177_bool = var_25_int == (int)14021;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_2220(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)12821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12822, (int)14023, (int)14022);
			return 0;
		}
		var_184_bool = var_25_int == (int)14023;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_2220(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)12823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12824, (int)14025, (int)14024);
			@@@var_0_object:AddReply((int)12826, (int)-1, (int)14026);
			return 0;
		}
		var_194_bool = var_25_int == (int)14025;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_2220(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)12825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12827, (int)-1, (int)14027);
			return 0;
		}
		var_201_bool = var_25_int == (int)14230;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_2220(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)13023);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13024, (int)14232, (int)14231);
			@@@var_0_object:AddReply((int)13027, (int)-1, (int)14234);
			return 0;
		}
		var_211_bool = var_25_int == (int)14232;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_2220(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)13025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13026, (int)-1, (int)14233);
			return 0;
		}
		var_3_string = true;
		var_217_bool = 0;
		func_2702(var_217_bool);
		if(var_217_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8bd";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	func_3287();
	var_26_bool = 0;
	func_2518(var_26_bool);
	var_29_bool = var_26_bool == 0; //@nz
	if(var_29_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_30_string = "";
	func_2583("Neutral");
	lshWaitForAnimEnd();
	goto Label_19;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_3073(var_195_bool)
{
	var_197_int = 0; var_198_string = "";
	func_2618(var_197_int, "ood1Laska1");
	var_202_bool = var_197_int == (int)0;
	if(var_202_bool != 0) {
		var_195_bool = 1;
		return 0;
	}
	var_195_bool = 0;
	return 0;
}


func_3085(var_251_bool)
{
	var_253_int = 0; var_254_string = "";
	func_2618(var_253_int, "ood1Laska2");
	var_256_bool = var_253_int == (int)0;
	if(var_256_bool != 0) {
		var_251_bool = 1;
		return 0;
	}
	var_251_bool = 0;
	return 0;
}


func_2834()
{
	SetVariable("d6q01", (int)4);
	var_39_bool = 0; var_40_string = ""; var_41_string = "";
	func_2649(var_39_bool, "quest_d6_01", "eva_klara");
	return 0;
}


func_2579()
{
	CameraSwitchToNormal();
	return 0;
}


func_2583(var_30_string)
{
	var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0;
	var_36_int = "playing " + var_30_string;
	Trace(var_36_int);
	lshGetAnimTimes(var_30_string, var_33_float, var_34_float);
	lshPlayAnimation(var_33_float, var_34_float);
	var_38_int = "start: " + var_33_float;
	Trace(var_38_int);
	var_40_int = "end: " + var_34_float;
	Trace(var_40_int);
	return 4;
}


func_3097(var_287_bool)
{
	var_289_int = 0; var_290_string = "";
	func_2618(var_289_int, "ood1Laska3");
	var_292_bool = var_289_int == (int)0;
	if(var_292_bool != 0) {
		var_287_bool = 1;
		return 0;
	}
	var_287_bool = 0;
	return 0;
}


func_2845()
{
	SetVariable("KnowLaska", (int)1);
	return 0;
}


func_1571(var_0_object, var_1_object, var_2_object, var_3_object, var_368_object, var_369_object)
{
	var_0_object = var_369_object;
	var_1_object = var_368_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_375_string = "";
		func_1629(var_369_object, "Neutral");
		@@@var_0_object:SetMessage((int)9473);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)9474, (int)10417, (int)10416);
		@@@var_0_object:AddReply((int)9487, (int)-1, (int)10429);
		goto Label_1599;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x627";
	}
Label_1599:
	var_387_bool = 0;
	func_2702(var_387_bool);
	if(var_387_bool != 0) {

	Label_1603:
		lshWaitForAnimEnd();
		var_388_object = var_3_object;
		if(var_388_object != 0) {
		} else {
			var_389_string = "";
			var_389_string = var_2_object;
			func_2583(var_389_string);
			goto Label_1603;
	}
		PlayAnimation("all", "idle");

	Label_1618:
		WaitForAnimEnd();
		var_392_object = var_3_object;
		if(var_392_object != 0) {
			goto Label_1628;
		}
		PlayAnimation("all", "idle");
		goto Label_1618;
	}
	goto Label_1628;
	
Label_1628:
	return 0;
	
}


func_2851()
{
	SetVariable("ood1Laska1", (int)1);
	return 0;
}


func_3109(var_296_bool)
{
	var_298_int = 0;
	func_2675(var_298_int);
	var_300_bool = var_298_int >= (int)18;
	if(var_300_bool != 0) {
		var_296_bool = 1;
		return 0;
	}
	var_296_bool = 0;
	return 0;
}


func_2085(var_0_object, var_463_int, var_464_object)
{
	var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0; var_470_object = Obj(); var_471_bool = 0; var_472_int = 0; var_473_bool = 0;
	var_0_object = var_464_object;
	var_474_bool = 0; var_475_object = Obj();
	var_464_object = var_475_object;
	func_2523(var_474_bool, var_475_object);
	var_476_bool = var_474_bool == 0; //@nz
	if(var_476_bool != 0) {
		var_463_int = -2;
		return 8;
	}
	CreateDialog(var_470_object);
	var_477_int = 0;
	func_2698(var_477_int);
	@@var_470_object:SetNPCName(var_477_int);
	var_478_string = "";
	func_2700(var_478_string);
	@@var_470_object:SetPhoto(var_478_string);
	var_479_int = 0;
	func_3238(var_479_int);
	@@var_470_object:SetPlayerName(var_479_int);
	IsOverrideActive(var_471_bool);
	var_480_bool = var_471_bool;
	if(var_480_bool != 0) {
		var_463_int = -2;
		return 8;
	}
	DoDialog(var_470_object);
	var_481_object = Obj(); var_482_object = Obj();
	var_464_object = var_481_object;
	var_470_object = var_482_object;
	TaskCall(11);
	func_2148(var_483_object, var_484_object, var_485_string, var_486_bool, var_481_object, var_482_object);
	TaskReturn();
	@@var_470_object:IsDialogEnd(var_473_bool);
	
Label_2130:
	var_521_bool = var_473_bool == 0; //@nz
	if(var_521_bool != 0) {
		sync();
		@@var_470_object:IsDialogEnd(var_473_bool);
		goto Label_2130;
	}
	var_464_object = Obj();
	func_2579();
	StopDialog(var_470_object);
	@@var_470_object:GetReturnValue((int)-1);
	var_472_int = var_463_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2601()
{
	var_28_bool = 0;
	func_2702(var_28_bool);
	if(var_28_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2857()
{
	SetVariable("ood3Laska1", (int)1);
	return 0;
}


func_302(var_0_object, var_144_int, var_145_object)
{
	var_147_object = Obj(); var_148_bool = 0; var_149_int = 0; var_150_bool = 0; var_151_object = Obj(); var_152_bool = 0; var_153_int = 0; var_154_bool = 0;
	var_0_object = var_145_object;
	var_155_bool = 0; var_156_object = Obj();
	var_145_object = var_156_object;
	func_2523(var_155_bool, var_156_object);
	var_157_bool = var_155_bool == 0; //@nz
	if(var_157_bool != 0) {
		var_144_int = -2;
		return 8;
	}
	CreateDialog(var_151_object);
	var_158_int = 0;
	func_2698(var_158_int);
	@@var_151_object:SetNPCName(var_158_int);
	var_159_string = "";
	func_2700(var_159_string);
	@@var_151_object:SetPhoto(var_159_string);
	var_160_int = 0;
	func_3238(var_160_int);
	@@var_151_object:SetPlayerName(var_160_int);
	IsOverrideActive(var_152_bool);
	var_161_bool = var_152_bool;
	if(var_161_bool != 0) {
		var_144_int = -2;
		return 8;
	}
	DoDialog(var_151_object);
	var_162_object = Obj(); var_163_object = Obj();
	var_145_object = var_162_object;
	var_151_object = var_163_object;
	TaskCall(5);
	func_365(var_164_object, var_165_object, var_166_string, var_167_bool, var_162_object, var_163_object);
	TaskReturn();
	@@var_151_object:IsDialogEnd(var_154_bool);
	
Label_347:
	var_346_bool = var_154_bool == 0; //@nz
	if(var_346_bool != 0) {
		sync();
		@@var_151_object:IsDialogEnd(var_154_bool);
		goto Label_347;
	}
	var_145_object = Obj();
	func_2579();
	StopDialog(var_151_object);
	@@var_151_object:GetReturnValue((int)-1);
	var_153_int = var_144_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2863()
{
	SetVariable("ood1Laska2", (int)1);
	return 0;
}


func_2608(var_65_cvector, var_66_cvector)
{
	var_68_float = 0; var_69_float = 0;
	var_70_int = var_66_cvector | var_66_cvector;
	var_69_float = sqrt(var_70_int);
	var_71_float = 9.999999974752427e-07;
	var_72_bool = var_69_float < var_71_float;
	if(var_72_bool != 0) {
		var_65_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_65_cvector = var_66_cvector / var_69_float;
	return 2;
}


func_3120(var_238_bool)
{
	var_240_bool = 0;
	var_240_bool = 0;
	var_241_int = 0;
	func_2675(var_241_int);
	var_247_bool = var_241_int >= (int)0;
	if(var_247_bool != 0) {
		var_248_int = 0;
		func_2675(var_248_int);
		var_250_bool = var_248_int < (int)6;
		if(var_250_bool != 0) {
			var_240_bool = 1;
		}
	}
	if(var_240_bool != 0) {
		var_238_bool = 1;
		return 0;
	}
	var_238_bool = 0;
	return 0;
}


func_49(var_0_object, var_29_int, var_30_object)
{
	var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_0_object = var_30_object;
	var_40_bool = 0; var_41_object = Obj();
	var_30_object = var_41_object;
	func_2523(var_40_bool, var_41_object);
	var_80_bool = var_40_bool == 0; //@nz
	if(var_80_bool != 0) {
		var_29_int = -2;
		return 8;
	}
	CreateDialog(var_36_object);
	var_81_int = 0;
	func_2698(var_81_int);
	@@var_36_object:SetNPCName(var_81_int);
	var_82_string = "";
	func_2700(var_82_string);
	@@var_36_object:SetPhoto(var_82_string);
	var_83_int = 0;
	func_3238(var_83_int);
	@@var_36_object:SetPlayerName(var_83_int);
	IsOverrideActive(var_37_bool);
	var_91_bool = var_37_bool;
	if(var_91_bool != 0) {
		var_29_int = -2;
		return 8;
	}
	DoDialog(var_36_object);
	var_92_object = Obj(); var_93_object = Obj();
	var_30_object = var_92_object;
	var_36_object = var_93_object;
	TaskCall(3);
	func_112(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object);
	TaskReturn();
	@@var_36_object:IsDialogEnd(var_39_bool);
	
Label_94:
	var_133_bool = var_39_bool == 0; //@nz
	if(var_133_bool != 0) {
		sync();
		@@var_36_object:IsDialogEnd(var_39_bool);
		goto Label_94;
	}
	var_30_object = Obj();
	func_2579();
	StopDialog(var_36_object);
	@@var_36_object:GetReturnValue((int)-1);
	var_38_int = var_29_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1842(var_0_object, var_1_object, var_2_object, var_3_object, var_417_object, var_418_object)
{
	var_0_object = var_418_object;
	var_1_object = var_417_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_424_bool = 0; var_425_object = Obj();
		var_425_object = var_1_object;
		func_3049(var_425_object);
		if(var_424_bool != 0) {
			var_430_object = Obj(); var_431_object = Obj();
			var_430_object = var_1_object;
			var_431_object = var_0_object;
			func_2857();
			var_434_string = "";
			func_1925(var_418_object, "Neutral");
			@@@var_0_object:SetMessage((int)9951);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9952, (int)10970, (int)10969);
			@@@var_0_object:AddReply((int)9961, (int)10970, (int)10978);
		} else {
				var_454_string = "";
				func_1925(var_418_object, "Neutral");
				@@@var_0_object:SetMessage((int)15314);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15315, (int)-1, (int)16553);
				goto Label_1895;
		}
	}
Label_1895:
	var_446_bool = 0;
	func_2702(var_446_bool);
	if(var_446_bool != 0) {

	Label_1899:
		lshWaitForAnimEnd();
		var_447_object = var_3_object;
		if(var_447_object != 0) {
		} else {
			var_448_string = "";
			var_448_string = var_2_object;
			func_2583(var_448_string);
			goto Label_1899;
	}
		PlayAnimation("all", "idle");

	Label_1914:
		WaitForAnimEnd();
		var_451_object = var_3_object;
		if(var_451_object != 0) {
			goto Label_1924;
		}
		PlayAnimation("all", "idle");
		goto Label_1914;

	}
	goto Label_1924;
	
Label_1924:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x736";


func_2869()
{
	SetVariable("ood1Laska3", (int)1);
	return 0;
}


func_2618(var_130_int, var_131_string)
{
	var_132_int = 0; var_133_int = 0;
	GetVariable(var_131_string, var_133_int);
	var_133_int = var_130_int;
	return 2;
}


func_2875(var_257_bool)
{
	var_259_int = 0; var_260_string = "";
	func_2618(var_259_int, "d1q01FirstGeorgVisit");
	var_262_bool = var_259_int == (int)1;
	if(var_262_bool != 0) {
		var_257_bool = 1;
		return 0;
	}
	var_257_bool = 0;
	return 0;
}


func_2623(var_39_object, var_40_object, var_41_int)
{
	var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	@@var_40_object:GetItemID(var_45_int);
	GetInvItemProperty(var_46_int, var_45_int, "Category");
	@@var_39_object:AddItem(var_47_bool, var_40_object, var_46_int, var_41_int);
	var_49_bool = var_47_bool == 0; //@nz
	if(var_49_bool != 0) {
		@@var_39_object:DropItems(var_40_object, var_41_int);
	}
	return 6;
}


func_3141(var_267_bool)
{
	var_269_bool = 0;
	var_269_bool = 0;
	var_270_int = 0;
	func_2675(var_270_int);
	var_272_bool = var_270_int >= (int)12;
	if(var_272_bool != 0) {
		var_273_int = 0;
		func_2675(var_273_int);
		var_275_bool = var_273_int < (int)18;
		if(var_275_bool != 0) {
			var_269_bool = 1;
		}
	}
	if(var_269_bool != 0) {
		var_267_bool = 1;
		return 0;
	}
	var_267_bool = 0;
	return 0;
}


func_2887(var_203_bool)
{
	var_205_int = 0; var_206_string = "";
	func_2618(var_205_int, "d1q02");
	var_208_bool = var_205_int == (int)2;
	if(var_208_bool != 0) {
		var_203_bool = 1;
		return 0;
	}
	var_203_bool = 0;
	return 0;
}


func_2636(var_34_object, var_35_string, var_36_int)
{
	var_37_object = Obj(); var_38_object = Obj();
	CreateInvItem(var_38_object);
	@@var_38_object:SetItemName(var_35_string);
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0;
	var_34_object = var_39_object;
	var_38_object = var_40_object;
	var_36_int = var_41_int;
	func_2623(var_39_object, var_40_object, var_41_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2899(var_313_bool)
{
	var_315_int = 0; var_316_string = "";
	func_2618(var_315_int, "ood1Laska4");
	var_318_bool = var_315_int == (int)0;
	if(var_318_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_2649(var_39_bool, var_40_string, var_41_string)
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


func_3162(var_90_object)
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


func_1629(var_2_object, var_31_string)
{
	var_32_bool = 0;
	func_2702(var_32_bool);
	var_33_bool = var_32_bool == 0; //@nz
	if(var_33_bool != 0) {
		return 0;
	}
	var_34_bool = var_31_string == var_2_object;
	if(var_34_bool != 0) {
		return 0;
	}
	var_35_string = "";
	var_31_string = var_35_string;
	func_2583(var_35_string);
	var_2_object = var_31_string;
	return 0;
}


func_2911(var_329_bool)
{
	var_331_int = 0; var_332_string = "";
	func_2618(var_331_int, "ood1Laska5");
	var_334_bool = var_331_int == (int)0;
	if(var_334_bool != 0) {
		var_329_bool = 1;
		return 0;
	}
	var_329_bool = 0;
	return 0;
}


func_2148(var_0_object, var_1_object, var_2_object, var_3_object, var_481_object, var_482_object)
{
	var_0_object = var_482_object;
	var_1_object = var_481_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_488_string = "";
		func_2220(var_482_object, "Neutral");
		@@@var_0_object:SetMessage((int)12815);
		@@@var_0_object:ClearReplies();
		var_494_bool = 0;
		var_494_bool = 0;
		var_495_bool = 0; var_496_object = Obj();
		var_496_object = var_1_object;
		func_2989(var_496_object);
		if(var_495_bool != 0) {
			var_501_bool = 0; var_502_object = Obj();
			var_502_object = var_1_object;
			func_3001(var_502_object);
			if(var_501_bool != 0) {
				var_494_bool = 1;
			}
		}
		if(var_494_bool != 0) {
			@@@var_0_object:AddReply((int)12816, (int)14017, (int)14016);
		}
		@@@var_0_object:AddReply((int)12828, (int)-1, (int)14028);
		goto Label_2190;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x868";
	}
Label_2190:
	var_513_bool = 0;
	func_2702(var_513_bool);
	if(var_513_bool != 0) {

	Label_2194:
		lshWaitForAnimEnd();
		var_514_object = var_3_object;
		if(var_514_object != 0) {
		} else {
			var_515_string = "";
			var_515_string = var_2_object;
			func_2583(var_515_string);
			goto Label_2194;
	}
		PlayAnimation("all", "idle");

	Label_2209:
		WaitForAnimEnd();
		var_518_object = var_3_object;
		if(var_518_object != 0) {
			goto Label_2219;
		}
		PlayAnimation("all", "idle");
		goto Label_2209;
	}
	goto Label_2219;
	
Label_2219:
	return 0;
	
}


func_2661(var_72_float)
{
	var_73_float = 0; var_74_float = 0;
	GetGameTime(var_74_float);
	var_74_float = var_72_float;
	return 2;
}


func_3175(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0;
	func_3162(Obj());
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
	SetVariable("player_diary", (int)1);
	@@var_82_object:GetCategory(var_89_int);
	SetDiarySection(var_89_int);
	var_81_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2666(var_138_int)
{
	var_139_float = 0; var_140_float = 0;
	GetGameTime(var_140_float);
	var_142_int = 0;
	var_142_int = var_140_float / (int)24;
	var_138_int = (int)1 + var_142_int;
	return 2;
}


func_2923(var_345_bool)
{
	var_347_int = 0; var_348_string = "";
	func_2618(var_347_int, "ood1Laska6");
	var_350_bool = var_347_int == (int)0;
	if(var_350_bool != 0) {
		var_345_bool = 1;
		return 0;
	}
	var_345_bool = 0;
	return 0;
}


func_620(var_2_object, var_209_string)
{
	var_210_bool = 0;
	func_2702(var_210_bool);
	var_211_bool = var_210_bool == 0; //@nz
	if(var_211_bool != 0) {
		return 0;
	}
	var_212_bool = var_209_string == var_2_object;
	if(var_212_bool != 0) {
		return 0;
	}
	var_213_string = "";
	var_209_string = var_213_string;
	func_2583(var_213_string);
	var_2_object = var_209_string;
	return 0;
}


func_365(var_0_object, var_1_object, var_2_object, var_3_object, var_162_object, var_163_object)
{
	var_0_object = var_163_object;
	var_1_object = var_162_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_169_bool = 0;
		var_169_bool = 0;
		var_170_bool = 0; var_171_object = Obj();
		var_171_object = var_1_object;
		func_3073(var_171_object);
		if(var_170_bool != 0) {
			var_178_bool = 0; var_179_object = Obj();
			var_179_object = var_1_object;
			func_2887(var_179_object);
			if(var_178_bool != 0) {
				var_169_bool = 1;
			}
		}
		if(var_169_bool != 0) {
			var_184_string = "";
			func_620(var_163_object, "Neutral");
			@@@var_0_object:SetMessage((int)5050);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5051, (int)5555, (int)5554);
			@@@var_0_object:AddReply((int)5073, (int)5582, (int)5581);
		} else {
				var_204_string = "";
				func_620(var_163_object, "Neutral");
				@@@var_0_object:SetMessage((int)8066);
				@@@var_0_object:ClearReplies();
				var_206_bool = 0;
				var_206_bool = 1;
				var_207_bool = 0;
				var_207_bool = 0;
				var_208_bool = 0;
				var_208_bool = 0;
				var_209_bool = 0; var_210_object = Obj();
				var_210_object = var_1_object;
				func_2957(var_209_bool, var_210_object);
				if(var_209_bool != 0) {
					var_224_bool = 0; var_225_object = Obj();
					var_225_object = var_1_object;
					func_3085(var_225_object);
					if(var_224_bool != 0) {
						var_208_bool = 1;
					}
				}
				if(var_208_bool != 0) {
					var_230_bool = 0; var_231_object = Obj();
					var_231_object = var_1_object;
					func_2875(var_231_object);
					if(var_230_bool != 0) {
						var_207_bool = 1;
					}
				}
				if(var_207_bool != 1) {
					var_236_bool = 0;
					var_236_bool = 0;
					var_237_bool = 0;
					var_237_bool = 0;
					var_238_bool = 0; var_239_object = Obj();
					var_239_object = var_1_object;
					func_2967(var_238_bool, var_239_object);
					if(var_238_bool != 0) {
						var_249_bool = 0; var_250_object = Obj();
						var_250_object = var_1_object;
						func_3085(var_250_object);
						if(var_249_bool != 0) {
							var_237_bool = 1;
						}
					}
					if(var_237_bool != 0) {
						var_251_bool = 0; var_252_object = Obj();
						var_252_object = var_1_object;
						func_2875(var_252_object);
						if(var_251_bool != 0) {
							var_236_bool = 1;
						}
					}
					if(var_236_bool != 1) {
						var_206_bool = 0;
					}
				}
				if(var_206_bool != 0) {
					@@@var_0_object:AddReply((int)8067, (int)5607, (int)8890);
				}
				var_256_bool = 0;
				var_256_bool = 1;
				var_257_bool = 0;
				var_257_bool = 0;
				var_258_bool = 0; var_259_object = Obj();
				var_259_object = var_1_object;
				func_2967(var_258_bool, var_259_object);
				if(var_258_bool != 0) {
					var_260_bool = 0; var_261_object = Obj();
					var_261_object = var_1_object;
					func_3097(var_261_object);
					if(var_260_bool != 0) {
						var_257_bool = 1;
					}
				}
				if(var_257_bool != 1) {
					var_266_bool = 0;
					var_266_bool = 0;
					var_267_bool = 0; var_268_object = Obj();
					var_268_object = var_1_object;
					func_2947(var_267_bool, var_268_object);
					if(var_267_bool != 0) {
						var_274_bool = 0; var_275_object = Obj();
						var_275_object = var_1_object;
						func_3097(var_275_object);
						if(var_274_bool != 0) {
							var_266_bool = 1;
						}
					}
					if(var_266_bool != 1) {
						var_256_bool = 0;
					}
				}
				if(var_256_bool != 0) {
					@@@var_0_object:AddReply((int)8068, (int)5592, (int)8891);
				}
				var_279_bool = 0;
				var_279_bool = 0;
				var_280_bool = 0; var_281_object = Obj();
				var_281_object = var_1_object;
				func_3061(var_281_object);
				if(var_280_bool != 0) {
					var_286_bool = 0; var_287_object = Obj();
					var_287_object = var_1_object;
					func_2899(var_287_object);
					if(var_286_bool != 0) {
						var_279_bool = 1;
					}
				}
				if(var_279_bool != 0) {
					@@@var_0_object:AddReply((int)8076, (int)8916, (int)8899);
				}
				var_295_bool = 0;
				var_295_bool = 0;
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_3025(var_297_object);
				if(var_296_bool != 0) {
					var_302_bool = 0; var_303_object = Obj();
					var_303_object = var_1_object;
					func_2911(var_303_object);
					if(var_302_bool != 0) {
						var_295_bool = 1;
					}
				}
				if(var_295_bool != 0) {
					@@@var_0_object:AddReply((int)8077, (int)8917, (int)8900);
				}
				var_311_bool = 0;
				var_311_bool = 0;
				var_312_bool = 0; var_313_object = Obj();
				var_313_object = var_1_object;
				func_3013(var_313_object);
				if(var_312_bool != 0) {
					var_318_bool = 0; var_319_object = Obj();
					var_319_object = var_1_object;
					func_2923(var_319_object);
					if(var_318_bool != 0) {
						var_311_bool = 1;
					}
				}
				if(var_311_bool != 0) {
					@@@var_0_object:AddReply((int)8078, (int)8918, (int)8901);
				}
				var_327_bool = 0;
				var_327_bool = 0;
				var_328_bool = 0; var_329_object = Obj();
				var_329_object = var_1_object;
				func_3037(var_329_object);
				if(var_328_bool != 0) {
					var_334_bool = 0; var_335_object = Obj();
					var_335_object = var_1_object;
					func_2935(var_335_object);
					if(var_334_bool != 0) {
						var_327_bool = 1;
					}
				}
				if(var_327_bool != 0) {
					@@@var_0_object:AddReply((int)8090, (int)8919, (int)8913);
				}
				@@@var_0_object:AddReply((int)8697, (int)-1, (int)9534);
				goto Label_590;
		}
	}
Label_590:
	var_196_bool = 0;
	func_2702(var_196_bool);
	if(var_196_bool != 0) {

	Label_594:
		lshWaitForAnimEnd();
		var_197_object = var_3_object;
		if(var_197_object != 0) {
		} else {
			var_198_string = "";
			var_198_string = var_2_object;
			func_2583(var_198_string);
			goto Label_594;
	}
		PlayAnimation("all", "idle");

	Label_609:
		WaitForAnimEnd();
		var_201_object = var_3_object;
		if(var_201_object != 0) {
			goto Label_619;
		}
		PlayAnimation("all", "idle");
		goto Label_609;

	}
	goto Label_619;
	
Label_619:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x171";


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_92_object, var_93_object)
{
	var_0_object = var_93_object;
	var_1_object = var_92_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_99_object = Obj(); var_100_object = Obj();
		var_99_object = var_1_object;
		var_100_object = var_0_object;
		func_2845();
		var_103_string = "";
		func_175(var_93_object, "Neutral");
		@@@var_0_object:SetMessage((int)370);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)371, (int)432, (int)430);
		@@@var_0_object:AddReply((int)372, (int)437, (int)431);
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	var_125_bool = 0;
	func_2702(var_125_bool);
	if(var_125_bool != 0) {

	Label_149:
		lshWaitForAnimEnd();
		var_126_object = var_3_object;
		if(var_126_object != 0) {
		} else {
			var_127_string = "";
			var_127_string = var_2_object;
			func_2583(var_127_string);
			goto Label_149;
	}
		PlayAnimation("all", "idle");

	Label_164:
		WaitForAnimEnd();
		var_130_object = var_3_object;
		if(var_130_object != 0) {
			goto Label_174;
		}
		PlayAnimation("all", "idle");
		goto Label_164;
	}
	goto Label_174;
	
Label_174:
	return 0;
	
}


func_2675(var_241_int)
{
	var_242_float = 0; var_243_float = 0;
	GetGameTime(var_243_float);
	var_244_int = 0;
	var_243_float = var_244_int;
	var_241_int = var_244_int % (int)24;
	return 2;
}


func_2935(var_361_bool)
{
	var_363_int = 0; var_364_string = "";
	func_2618(var_363_int, "ood1Laska7");
	var_366_bool = var_363_int == (int)0;
	if(var_366_bool != 0) {
		var_361_bool = 1;
		return 0;
	}
	var_361_bool = 0;
	return 0;
}


func_2683(var_136_bool, var_137_int)
{
	var_138_int = 0;
	func_2666(var_138_int);
	var_136_bool = var_138_int == var_137_int;
	return 0;
}


func_2689(var_523_bool)
{
	var_524_bool = 0; var_525_bool = 0;
	var_526_string = "";
	func_2583("No");
	lshWaitForAnimEnd(var_525_bool);
	var_525_bool = var_523_bool;
	return 2;
}


func_2947(var_294_bool, var_295_object)
{
	var_296_bool = 0; var_297_object = Obj();
	var_295_object = var_297_object;
	func_3109(var_297_object);
	if(var_296_bool != 0) {
		var_294_bool = 1;
		return 0;
	}
	var_294_bool = 0;
	return 0;
}


func_3204(var_77_bool, var_78_int)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj();
	func_3162(Obj());
	var_83_object = var_81_object;
	@@var_81_object:Find(var_78_int, var_82_object);
	var_84_bool = var_82_object == 0; //@nz
	if(var_84_bool != 0) {
		var_77_bool = 0;
		return 4;
	}
	@@var_82_object:Remove();
	var_77_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1925(var_2_object, var_68_string)
{
	var_69_bool = 0;
	func_2702(var_69_bool);
	var_70_bool = var_69_bool == 0; //@nz
	if(var_70_bool != 0) {
		return 0;
	}
	var_71_bool = var_68_string == var_2_object;
	if(var_71_bool != 0) {
		return 0;
	}
	var_72_string = "";
	var_68_string = var_72_string;
	func_2583(var_72_string);
	var_2_object = var_68_string;
	return 0;
}


func_2698(var_81_int)
{
	var_81_int = 2867;
	return 0;
}


func_2700(var_82_string)
{
	var_82_string = "ui/NPC_Laska.png";
	return 0;
}


func_2957(var_236_bool, var_237_object)
{
	var_238_bool = 0; var_239_object = Obj();
	var_237_object = var_239_object;
	func_3120(var_239_object);
	if(var_238_bool != 0) {
		var_236_bool = 1;
		return 0;
	}
	var_236_bool = 0;
	return 0;
}


func_2702(var_28_bool)
{
	var_28_bool = 1;
	return 0;
}


func_2704()
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj();
	func_3221(Obj());
	var_41_object = var_39_object;
	@@var_39_object:FindMark(var_40_object, "d1q02AnnaGotoLaska");
	var_49_object = var_40_object;
	if(var_49_object != 0) {
		@@var_40_object:Remove();
	}
	@@var_39_object:FindMark(var_40_object, "d1q02ViktorGotoAnna");
	var_51_object = var_40_object;
	if(var_51_object != 0) {
		@@var_40_object:Remove();
	}
	func_3255();
	var_77_bool = 0; var_78_int = 0;
	func_3204(var_77_bool, (int)35);
	var_85_bool = 0; var_86_string = ""; var_87_string = "";
	func_2649(var_85_bool, "quest_d1_02", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3221(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); var_64_object = Obj(); var_65_object = Obj();
	GetMainOutdoorScene(var_64_object);
	var_66_bool = var_64_object == 0; //@ne
	if(var_66_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_65_object = 0;
		var_65_object = var_61_object;
		return 4;
	}
	@@var_64_object:GetMap(var_65_object);
	var_65_object = var_61_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2967(var_265_bool, var_266_object)
{
	var_267_bool = 0; var_268_object = Obj();
	var_266_object = var_268_object;
	func_3141(var_268_object);
	if(var_267_bool != 0) {
		var_265_bool = 1;
		return 0;
	}
	var_265_bool = 0;
	return 0;
}


func_2977(var_150_bool)
{
	var_152_int = 0; var_153_string = "";
	func_2618(var_152_int, "d6q03AlbinosKilled");
	var_155_bool = var_152_int == (int)1;
	if(var_155_bool != 0) {
		var_150_bool = 1;
		return 0;
	}
	var_150_bool = 0;
	return 0;
}


func_3238(var_83_int)
{
	var_84_int = 0; var_85_int = 0;
	GetVariable("player", var_85_int);
	var_88_bool = var_85_int == (int)0;
	if(var_88_bool != 0) {
		var_83_int = 200001;
		return 2;
	EMIT "GOTO 0xcb5";
	}
	var_90_bool = var_85_int == (int)1;
	if(var_90_bool != 0) {
		var_83_int = 200002;
		return 2;
	}
	var_83_int = 200003;
	return 2;
}


func_2220(var_2_object, var_111_string)
{
	var_112_bool = 0;
	func_2702(var_112_bool);
	var_113_bool = var_112_bool == 0; //@nz
	if(var_113_bool != 0) {
		return 0;
	}
	var_114_bool = var_111_string == var_2_object;
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_string = "";
	var_111_string = var_115_string;
	func_2583(var_115_string);
	var_2_object = var_111_string;
	return 0;
}


func_2989(var_128_bool)
{
	var_130_int = 0; var_131_string = "";
	func_2618(var_130_int, "d6q01");
	var_135_bool = var_130_int == (int)2;
	if(var_135_bool != 0) {
		var_128_bool = 1;
		return 0;
	}
	var_128_bool = 0;
	return 0;
}


func_175(var_2_object, var_35_string)
{
	var_36_bool = 0;
	func_2702(var_36_bool);
	var_37_bool = var_36_bool == 0; //@nz
	if(var_37_bool != 0) {
		return 0;
	}
	var_38_bool = var_35_string == var_2_object;
	if(var_38_bool != 0) {
		return 0;
	}
	var_39_string = "";
	var_35_string = var_39_string;
	func_2583(var_39_string);
	var_2_object = var_35_string;
	return 0;
}


func_2738(var_95_object)
{
	var_97_object = Obj(); var_98_object = Obj();
	Trace("lockpick1time is given");
	CreateInvItem(var_98_object);
	@@var_98_object:SetItemName("lockpick");
	@@var_98_object:SetProperty("uses", (int)1);
	var_103_object = Obj(); var_104_object = Obj(); var_105_int = 0;
	var_95_object = var_103_object;
	var_98_object = var_104_object;
	func_2623(var_103_object, var_104_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3255()
{
	var_52_object = Obj(); var_53_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_53_object, (int)36, (int)2, (int)12118);
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0;
	var_53_object = var_59_object;
	func_3175(var_58_bool, var_59_object, (int)7);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3001(var_136_bool)
{
	var_138_int = 0; var_139_string = "";
	func_2618(var_138_int, "ood6Laska1");
	var_141_bool = var_138_int == (int)0;
	if(var_141_bool != 0) {
		var_136_bool = 1;
		return 0;
	}
	var_136_bool = 0;
	return 0;
}


func_3013(var_339_bool)
{
	var_341_int = 0; var_342_string = "";
	func_2618(var_341_int, "KnowKaterina");
	var_344_bool = var_341_int == (int)1;
	if(var_344_bool != 0) {
		var_339_bool = 1;
		return 0;
	}
	var_339_bool = 0;
	return 0;
}


func_2759()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3271()
{
	var_75_object = Obj(); var_76_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_76_object, (int)117, (int)1, (int)13740);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_76_object = var_82_object;
	func_3175(var_81_bool, var_82_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2506(var_26_bool, var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0;
	@@var_27_object:GetPosition(var_32_cvector);
	GetPosition(var_33_cvector);
	var_34_cvector = var_32_cvector - var_33_cvector;
	var_36_float = GetByIndex(var_34_cvector, 0);
	var_37_float = GetByIndex(var_34_cvector, 2);
	Rotate(var_36_float, var_37_float, var_35_bool);
	var_35_bool = var_26_bool;
	return 8;
}


func_2765()
{
	SetVariable("ood1Laska4", (int)1);
	return 0;
}


func_3025(var_323_bool)
{
	var_325_int = 0; var_326_string = "";
	func_2618(var_325_int, "KnowMaria");
	var_328_bool = var_325_int == (int)1;
	if(var_328_bool != 0) {
		var_323_bool = 1;
		return 0;
	}
	var_323_bool = 0;
	return 0;
}


func_2771()
{
	SetVariable("ood1Laska5", (int)1);
	return 0;
}


func_2518(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
	return 2;
}


func_3287()
{
	var_25_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_2777()
{
	SetVariable("ood1Laska6", (int)1);
	return 0;
}


func_3291(var_26_object)
{
	var_27_bool = GlobalVars[1];
	var_28_bool = var_27_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_29_int = 0; var_30_object = Obj();
		var_26_object = var_30_object;
		TaskCall(2);
		func_49(var_31_object, var_29_int, var_30_object);
		TaskReturn();
		var_135_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_136_bool = 0; var_137_int = 0;
	func_2683(var_136_bool, (int)1);
	if(var_136_bool != 0) {
		var_144_int = 0; var_145_object = Obj();
		var_26_object = var_145_object;
		TaskCall(4);
		func_302(var_146_object, var_144_int, var_145_object);
		TaskReturn();
		return 0;
	}
	var_348_bool = 0; var_349_int = 0;
	func_2683(var_348_bool, (int)2);
	if(var_348_bool != 0) {
		var_350_int = 0; var_351_object = Obj();
		var_26_object = var_351_object;
		TaskCall(6);
		func_1508(var_352_object, var_350_int, var_351_object);
		TaskReturn();
		return 0;
	}
	var_397_bool = 0; var_398_int = 0;
	func_2683(var_397_bool, (int)3);
	if(var_397_bool != 0) {
		var_399_int = 0; var_400_object = Obj();
		var_26_object = var_400_object;
		TaskCall(8);
		func_1779(var_401_object, var_399_int, var_400_object);
		TaskReturn();
		return 0;
	}
	var_461_bool = 0; var_462_int = 0;
	func_2683(var_461_bool, (int)6);
	if(var_461_bool != 0) {
		var_463_int = 0; var_464_object = Obj();
		var_26_object = var_464_object;
		TaskCall(10);
		func_2085(var_465_object, var_463_int, var_464_object);
		TaskReturn();
		return 0;
	}
	func_2689((bool)0);
	return 0;
}


func_2523(var_40_bool, var_41_object)
{
	var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0;
	@@var_41_object:GetPosition(var_51_cvector);
	@@var_41_object:GetEyesHeight(var_50_float);
	var_58_float = GetByIndex(var_51_cvector, 1);
	var_58_float = var_58_float + var_50_float;
	SetByIndex(var_51_cvector, 1) = var_58_float;
	GetPosition(var_52_cvector);
	GetEyesHeight(var_50_float);
	var_59_float = GetByIndex(var_52_cvector, 1);
	var_59_float = var_59_float + var_50_float;
	SetByIndex(var_52_cvector, 1) = var_59_float;
	var_53_cvector = var_51_cvector - var_52_cvector;
	var_60_float = GetByIndex(var_53_cvector, 1);
	SetByIndex(var_53_cvector, 1) = (float)0;
	var_61_int = var_53_cvector | var_53_cvector;
	var_62_float = sqrt(var_61_int);
	var_53_cvector = var_53_cvector / var_62_float;
	var_54_cvector = -var_53_cvector;
	var_64_float = var_53_cvector * (int)70;
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	var_66_cvector = var_54_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2608(var_65_cvector, var_66_cvector);
	var_74_float = var_65_cvector * (int)25;
	var_75_int = var_64_float + var_74_float;
	var_55_cvector = var_75_int - CVector(0.0, 10.0, 0.0);
	var_56_cvector = var_52_cvector + var_55_cvector;
	IsOverrideActive(var_57_bool);
	var_77_bool = var_57_bool;
	if(var_77_bool != 0) {
		var_40_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_56_cvector, var_54_cvector);
	var_78_float = GetByIndex(var_55_cvector, 0);
	var_79_float = GetByIndex(var_55_cvector, 2);
	Rotate(var_78_float, var_79_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_40_bool = 1;
	return 16;
}


func_3037(var_355_bool)
{
	var_357_int = 0; var_358_string = "";
	func_2618(var_357_int, "KnowMishka");
	var_360_bool = var_357_int == (int)1;
	if(var_360_bool != 0) {
		var_355_bool = 1;
		return 0;
	}
	var_355_bool = 0;
	return 0;
}


func_2783()
{
	SetVariable("ood1Laska7", (int)1);
	return 0;
}


func_1508(var_0_object, var_350_int, var_351_object)
{
	var_353_object = Obj(); var_354_bool = 0; var_355_int = 0; var_356_bool = 0; var_357_object = Obj(); var_358_bool = 0; var_359_int = 0; var_360_bool = 0;
	var_0_object = var_351_object;
	var_361_bool = 0; var_362_object = Obj();
	var_351_object = var_362_object;
	func_2523(var_361_bool, var_362_object);
	var_363_bool = var_361_bool == 0; //@nz
	if(var_363_bool != 0) {
		var_350_int = -2;
		return 8;
	}
	CreateDialog(var_357_object);
	var_364_int = 0;
	func_2698(var_364_int);
	@@var_357_object:SetNPCName(var_364_int);
	var_365_string = "";
	func_2700(var_365_string);
	@@var_357_object:SetPhoto(var_365_string);
	var_366_int = 0;
	func_3238(var_366_int);
	@@var_357_object:SetPlayerName(var_366_int);
	IsOverrideActive(var_358_bool);
	var_367_bool = var_358_bool;
	if(var_367_bool != 0) {
		var_350_int = -2;
		return 8;
	}
	DoDialog(var_357_object);
	var_368_object = Obj(); var_369_object = Obj();
	var_351_object = var_368_object;
	var_357_object = var_369_object;
	TaskCall(7);
	func_1571(var_370_object, var_371_object, var_372_string, var_373_bool, var_368_object, var_369_object);
	TaskReturn();
	@@var_357_object:IsDialogEnd(var_360_bool);
	
Label_1553:
	var_395_bool = var_360_bool == 0; //@nz
	if(var_395_bool != 0) {
		sync();
		@@var_357_object:IsDialogEnd(var_360_bool);
		goto Label_1553;
	}
	var_351_object = Obj();
	func_2579();
	StopDialog(var_357_object);
	@@var_357_object:GetReturnValue((int)-1);
	var_359_int = var_350_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2789(var_31_object)
{
	Trace("powder is given");
	var_34_object = Obj(); var_35_string = ""; var_36_int = 0;
	var_31_object = var_34_object;
	func_2636(var_34_object, "powder", (int)1);
	return 0;
}


func_3049(var_56_bool)
{
	var_58_int = 0; var_59_string = "";
	func_2618(var_58_int, "ood3Laska1");
	var_63_bool = var_58_int == (int)0;
	if(var_63_bool != 0) {
		var_56_bool = 1;
		return 0;
	}
	var_56_bool = 0;
	return 0;
}


func_2800()
{
	SetVariable("ood6Laska1", (int)1);
	return 0;
}


func_1779(var_0_object, var_399_int, var_400_object)
{
	var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0; var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0;
	var_0_object = var_400_object;
	var_410_bool = 0; var_411_object = Obj();
	var_400_object = var_411_object;
	func_2523(var_410_bool, var_411_object);
	var_412_bool = var_410_bool == 0; //@nz
	if(var_412_bool != 0) {
		var_399_int = -2;
		return 8;
	}
	CreateDialog(var_406_object);
	var_413_int = 0;
	func_2698(var_413_int);
	@@var_406_object:SetNPCName(var_413_int);
	var_414_string = "";
	func_2700(var_414_string);
	@@var_406_object:SetPhoto(var_414_string);
	var_415_int = 0;
	func_3238(var_415_int);
	@@var_406_object:SetPlayerName(var_415_int);
	IsOverrideActive(var_407_bool);
	var_416_bool = var_407_bool;
	if(var_416_bool != 0) {
		var_399_int = -2;
		return 8;
	}
	DoDialog(var_406_object);
	var_417_object = Obj(); var_418_object = Obj();
	var_400_object = var_417_object;
	var_406_object = var_418_object;
	TaskCall(9);
	func_1842(var_419_object, var_420_object, var_421_string, var_422_bool, var_417_object, var_418_object);
	TaskReturn();
	@@var_406_object:IsDialogEnd(var_409_bool);
	
Label_1824:
	var_459_bool = var_409_bool == 0; //@nz
	if(var_459_bool != 0) {
		sync();
		@@var_406_object:IsDialogEnd(var_409_bool);
		goto Label_1824;
	}
	var_400_object = Obj();
	func_2579();
	StopDialog(var_406_object);
	@@var_406_object:GetReturnValue((int)-1);
	var_408_int = var_399_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3061(var_307_bool)
{
	var_309_int = 0; var_310_string = "";
	func_2618(var_309_int, "KnowOspina");
	var_312_bool = var_309_int == (int)1;
	if(var_312_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_2806()
{
	var_57_object = Obj(); var_58_object = Obj();
	SetVariable("d6q01", (int)3);
	func_3221(Obj());
	var_61_object = var_58_object;
	var_72_float = 0;
	func_2661(var_72_float);
	@@var_58_object:AddMark("d6q01LaskaGotoAlbinos", "pt_d6q03_albinos", (int)1, (int)15400, var_72_float);
	func_3271();
	var_100_bool = 0; var_101_string = ""; var_102_string = "";
	func_2649(var_100_bool, "quest_d6_01", "albinos_klara");
	return 2;
}
EMIT "Stack[-1] = 0";


