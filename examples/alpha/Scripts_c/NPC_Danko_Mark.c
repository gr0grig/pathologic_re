// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,FindActor/2,Trigger/2,GetGameTime/1,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4,PlayMovie/1
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|W:ui/NPC_Mark.png|W:ood1Mark1|W:ood1Mark2|W:ood1Mark3|W:d1q01MarkAboutJulia|W:pt_map_julia|A:AddMark|W:d1q01MarkAboutLara|W:pt_map_lara|A:ShowMap|W:ood1Mark4|W:ood1Mark5|W:ood1Mark6|W:ood1Mark7|W:ood1Mark8|W:KnowJulia|W:d7q02|W:d7q02MarkGotoCemetery|W:pt_d7q02_corpse|W:d7q02MarkGotoAlexandr|W:pt_map_alexandr|W:quest_d7_02|W:place_corpse|W:KnowLara|A:SetReturnValue|W:KnowMark|W:ood3Mark1|W:d1q01|W:d1q01FirstGeorgVisit|W:KnowEva|W:KnowMaria|W:KnowKapella|W:KnowMyth|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry|W:Performance|W:NightMasks|W:.wmv
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
// @EVENT_11: op=0x292 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5f1 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6fd vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7f7 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8aa vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9c4 vars=int,int
// @PE: 0x23,0x29,0x70,0xaf,0xbf,0x189,0x282,0x292,0x5a7,0x5e1,0x5f1,0x69a,0x6ed,0x6fd,0x7b2,0x7e7,0x7f7,0x85b,0x89a,0x8aa,0x97f,0x9b4,0x9c4,0xa3a,0xa93,0xa9f,0xaa5,0xaab,0xaca,0xada,0xae0,0xae6,0xaec,0xaf2,0xaf8,0xb2a,0xb30,0xb35,0xb3b,0xb41,0xb4d,0xb59,0xb65,0xb71,0xb7d,0xb89,0xb95,0xba1,0xbad,0xbb9,0xbc3,0xbcd,0xbd9,0xbe5,0xbf1,0xbfd,0xc09,0xc15,0xc21,0xc2c,0xd17

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_object = Obj();
	var_35_bool = var_36_object;
	func_3351(var_36_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_bool = var_37_object;
	func_2545(var_36_bool, var_37_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_2640();
		var_40_bool = var_35_string == (int)492;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_2869();
			var_45_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)425, (int)494, (int)493);
			@@@var_0_object:AddReply((int)429, (int)498, (int)497);
			return 0;
		}
		var_68_bool = var_35_string == (int)498;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)431, (int)501, (int)499);
			@@@var_0_object:AddReply((int)432, (int)494, (int)500);
			return 0;
		}
		var_78_bool = var_35_string == (int)501;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)435, (int)-1, (int)503);
			@@@var_0_object:AddReply((int)434, (int)-1, (int)502);
			return 0;
		}
		var_88_bool = var_35_string == (int)494;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)427, (int)504, (int)495);
			@@@var_0_object:AddReply((int)438, (int)-1, (int)506);
			return 0;
		}
		var_98_bool = var_35_string == (int)504;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)437, (int)501, (int)505);
			@@@var_0_object:AddReply((int)439, (int)-1, (int)508);
			return 0;
		}
		var_3_string = true;
		var_107_bool = 0;
		func_2717(var_107_bool);
		if(var_107_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_2640();
		var_40_bool = var_36_bool == (int)6915;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_2719();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_2737();
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_2762(var_69_object);
		}
		var_95_bool = var_36_bool == (int)6916;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_2719();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_2737();
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_2762(var_101_object);
		}
		var_103_bool = var_36_bool == (int)6218;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_2725();
		}
		var_109_bool = var_36_bool == (int)6219;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_2725();
		}
		var_113_bool = var_36_bool == (int)6202;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_2731();
		}
		var_119_bool = var_36_bool == (int)6203;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_2731();
		}
		var_123_bool = var_36_bool == (int)6206;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_2731();
		}
		var_127_bool = var_36_bool == (int)6209;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_2731();
		}
		var_131_bool = var_36_bool == (int)6210;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_2731();
		}
		var_135_bool = var_36_bool == (int)8956;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_2778();
		}
		var_141_bool = var_36_bool == (int)9535;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_2784();
		}
		var_147_bool = var_36_bool == (int)9536;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_2790();
		}
		var_153_bool = var_36_bool == (int)9537;
		if(var_153_bool != 0) {
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_2796();
		}
		var_159_bool = var_36_bool == (int)9538;
		if(var_159_bool != 0) {
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_2802();
		}
		var_165_bool = var_35_string == (int)6192;
		if(var_165_bool != 0) {
			var_166_bool = 0;
			var_166_bool = 0;
			var_167_bool = 0; var_168_object = Obj();
			var_168_object = var_1_object;
			func_2881(var_168_object);
			if(var_167_bool != 0) {
				var_175_bool = 0; var_176_object = Obj();
				var_176_object = var_1_object;
				func_2917(var_176_object);
				var_181_bool = var_175_bool == 0; //@nz
				if(var_181_bool != 0) {
					var_166_bool = 1;
				}
			}
			if(var_166_bool != 0) {
				var_182_object = Obj(); var_183_object = Obj();
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_2858();
				var_186_object = Obj(); var_187_object = Obj();
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_2808();
				var_190_string = "";
				func_642(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5616);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5617, (int)6905, (int)6193);
				@@@var_0_object:AddReply((int)5645, (int)6906, (int)6224);
				return 0;
			}
			var_212_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8129);
			@@@var_0_object:ClearReplies();
			var_214_bool = 0;
			var_214_bool = 0;
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_object;
			func_2893(var_216_object);
			if(var_215_bool != 0) {
				var_221_bool = 0; var_222_object = Obj();
				var_222_object = var_1_object;
				func_2929(var_222_object);
				if(var_221_bool != 0) {
					var_214_bool = 1;
				}
			}
			if(var_214_bool != 0) {
				@@@var_0_object:AddReply((int)8130, (int)6213, (int)8953);
			}
			var_230_bool = 0;
			var_230_bool = 1;
			var_231_bool = 0;
			var_231_bool = 0;
			var_232_bool = 0; var_233_object = Obj();
			var_233_object = var_1_object;
			func_3011(var_232_bool, var_233_object);
			if(var_232_bool != 0) {
				var_247_bool = 0; var_248_object = Obj();
				var_248_object = var_1_object;
				func_2905(var_248_object);
				if(var_247_bool != 0) {
					var_231_bool = 1;
				}
			}
			if(var_231_bool != 1) {
				var_253_bool = 0;
				var_253_bool = 0;
				var_254_bool = 0; var_255_object = Obj();
				var_255_object = var_1_object;
				func_3001(var_254_bool, var_255_object);
				if(var_254_bool != 0) {
					var_261_bool = 0; var_262_object = Obj();
					var_262_object = var_1_object;
					func_2905(var_262_object);
					if(var_261_bool != 0) {
						var_253_bool = 1;
					}
				}
				if(var_253_bool != 1) {
					var_230_bool = 0;
				}
			}
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)8131, (int)6197, (int)8954);
			}
			var_266_bool = 0;
			var_266_bool = 0;
			var_267_bool = 0; var_268_object = Obj();
			var_268_object = var_1_object;
			func_3093(var_268_object);
			if(var_267_bool != 0) {
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_2941(var_274_object);
				if(var_273_bool != 0) {
					var_266_bool = 1;
				}
			}
			if(var_266_bool != 0) {
				@@@var_0_object:AddReply((int)8133, (int)-1, (int)8956);
			}
			var_282_bool = 0;
			var_282_bool = 0;
			var_283_bool = 0; var_284_object = Obj();
			var_284_object = var_1_object;
			func_3033(var_284_object);
			if(var_283_bool != 0) {
				var_289_bool = 0; var_290_object = Obj();
				var_290_object = var_1_object;
				func_2953(var_290_object);
				if(var_289_bool != 0) {
					var_282_bool = 1;
				}
			}
			if(var_282_bool != 0) {
				@@@var_0_object:AddReply((int)8135, (int)8982, (int)8958);
			}
			var_298_bool = 0;
			var_298_bool = 0;
			var_299_bool = 0; var_300_object = Obj();
			var_300_object = var_1_object;
			func_3045(var_300_object);
			if(var_299_bool != 0) {
				var_305_bool = 0; var_306_object = Obj();
				var_306_object = var_1_object;
				func_2965(var_306_object);
				if(var_305_bool != 0) {
					var_298_bool = 1;
				}
			}
			if(var_298_bool != 0) {
				@@@var_0_object:AddReply((int)8137, (int)8981, (int)8960);
			}
			var_314_bool = 0;
			var_314_bool = 0;
			var_315_bool = 0; var_316_object = Obj();
			var_316_object = var_1_object;
			func_3057(var_316_object);
			if(var_315_bool != 0) {
				var_321_bool = 0; var_322_object = Obj();
				var_322_object = var_1_object;
				func_2977(var_322_object);
				if(var_321_bool != 0) {
					var_314_bool = 1;
				}
			}
			if(var_314_bool != 0) {
				@@@var_0_object:AddReply((int)8140, (int)8980, (int)8963);
			}
			var_330_bool = 0;
			var_330_bool = 0;
			var_331_bool = 0; var_332_object = Obj();
			var_332_object = var_1_object;
			func_3081(var_332_object);
			if(var_331_bool != 0) {
				var_337_bool = 0; var_338_object = Obj();
				var_338_object = var_1_object;
				func_2989(var_338_object);
				if(var_337_bool != 0) {
					var_330_bool = 1;
				}
			}
			if(var_330_bool != 0) {
				@@@var_0_object:AddReply((int)8151, (int)8979, (int)8974);
			}
			@@@var_0_object:AddReply((int)9147, (int)-1, (int)10028);
			return 0;
		}
		var_350_bool = var_35_string == (int)8979;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8156);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8701, (int)-1, (int)9538);
			return 0;
		}
		var_357_bool = var_35_string == (int)8980;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8157);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8700, (int)-1, (int)9537);
			return 0;
		}
		var_364_bool = var_35_string == (int)8981;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8158);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8699, (int)-1, (int)9536);
			return 0;
		}
		var_371_bool = var_35_string == (int)8982;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8159);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8698, (int)-1, (int)9535);
			return 0;
		}
		var_378_bool = var_35_string == (int)6197;
		if(var_378_bool != 0) {
			var_379_bool = 0; var_380_object = Obj();
			var_380_object = var_1_object;
			func_2905(var_380_object);
			if(var_379_bool != 0) {
				var_381_string = "";
				func_642(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5621);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5622, (int)6199, (int)6198);
				@@@var_0_object:AddReply((int)5635, (int)6199, (int)6211);
				return 0;
			}
		}
		var_390_bool = var_35_string == (int)6199;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5623);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5624, (int)6201, (int)6200);
			@@@var_0_object:AddReply((int)5631, (int)6208, (int)6207);
			return 0;
		}
		var_400_bool = var_35_string == (int)6208;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5633, (int)-1, (int)6209);
			@@@var_0_object:AddReply((int)5634, (int)-1, (int)6210);
			return 0;
		}
		var_410_bool = var_35_string == (int)6201;
		if(var_410_bool != 0) {
			var_411_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5625);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5626, (int)-1, (int)6202);
			@@@var_0_object:AddReply((int)5627, (int)-1, (int)6203);
			@@@var_0_object:AddReply((int)5628, (int)6205, (int)6204);
			return 0;
		}
		var_423_bool = var_35_string == (int)6205;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5630, (int)-1, (int)6206);
			return 0;
		}
		var_430_bool = var_35_string == (int)6213;
		if(var_430_bool != 0) {
			var_431_bool = 0; var_432_object = Obj();
			var_432_object = var_1_object;
			func_2893(var_432_object);
			if(var_431_bool != 0) {
				var_433_string = "";
				func_642(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5636);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5637, (int)6215, (int)6214);
				@@@var_0_object:AddReply((int)5644, (int)6215, (int)6222);
				return 0;
			}
		}
		var_442_bool = var_35_string == (int)6215;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5639, (int)6217, (int)6216);
			@@@var_0_object:AddReply((int)5643, (int)6217, (int)6220);
			return 0;
		}
		var_452_bool = var_35_string == (int)6217;
		if(var_452_bool != 0) {
			var_453_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5640);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5641, (int)-1, (int)6218);
			@@@var_0_object:AddReply((int)5642, (int)-1, (int)6219);
			return 0;
		}
		var_462_bool = var_35_string == (int)6906;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6244, (int)6908, (int)6907);
			return 0;
		}
		var_469_bool = var_35_string == (int)6908;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6245);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6246, (int)6905, (int)6909);
			return 0;
		}
		var_476_bool = var_35_string == (int)6905;
		if(var_476_bool != 0) {
			var_477_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6242);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6247, (int)6912, (int)6911);
			return 0;
		}
		var_483_bool = var_35_string == (int)6912;
		if(var_483_bool != 0) {
			var_484_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6248);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6249, (int)6914, (int)6913);
			return 0;
		}
		var_490_bool = var_35_string == (int)6914;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_642(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6251, (int)-1, (int)6915);
			@@@var_0_object:AddReply((int)6252, (int)-1, (int)6916);
			return 0;
		}
		var_3_string = true;
		var_499_bool = 0;
		func_2717(var_499_bool);
		if(var_499_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x293";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_2640();
		var_40_bool = var_35_string == (int)10431;
		if(var_40_bool != 0) {
			var_41_string = "";
			func_1505(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9489);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9490, (int)10433, (int)10432);
			@@@var_0_object:AddReply((int)9499, (int)10433, (int)10441);
			return 0;
		}
		var_64_bool = var_35_string == (int)10433;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_1505(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9492, (int)10435, (int)10434);
			@@@var_0_object:AddReply((int)9496, (int)10439, (int)10438);
			return 0;
		}
		var_74_bool = var_35_string == (int)10439;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_1505(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9497);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9498, (int)-1, (int)10440);
			return 0;
		}
		var_81_bool = var_35_string == (int)10435;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_1505(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9493);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9494, (int)-1, (int)10436);
			@@@var_0_object:AddReply((int)9495, (int)-1, (int)10437);
			return 0;
		}
		var_3_string = true;
		var_90_bool = 0;
		func_2717(var_90_bool);
		if(var_90_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5f2";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_2640();
		var_40_bool = var_35_string == (int)11014;
		if(var_40_bool != 0) {
			var_41_bool = 0; var_42_object = Obj();
			var_42_object = var_1_object;
			func_3069(var_42_object);
			if(var_41_bool != 0) {
				var_49_object = Obj(); var_50_object = Obj();
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_2875();
				var_53_string = "";
				func_1773(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9993);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9994, (int)11016, (int)11015);
				@@@var_0_object:AddReply((int)10002, (int)11016, (int)11023);
				return 0;
			}
			var_75_string = "";
			func_1773(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15316);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15317, (int)-1, (int)16555);
			return 0;
		}
		var_81_bool = var_35_string == (int)11016;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_1773(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9995);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9996, (int)-1, (int)11017);
			@@@var_0_object:AddReply((int)9997, (int)-1, (int)11018);
			@@@var_0_object:AddReply((int)9998, (int)11020, (int)11019);
			return 0;
		}
		var_94_bool = var_35_string == (int)11020;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_1773(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10000, (int)-1, (int)11021);
			@@@var_0_object:AddReply((int)10001, (int)-1, (int)11022);
			return 0;
		}
		var_3_string = true;
		var_103_bool = 0;
		func_2717(var_103_bool);
		if(var_103_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6fe";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_2640();
		var_40_bool = var_35_string == (int)12066;
		if(var_40_bool != 0) {
			var_41_string = "";
			func_2023(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10918, (int)-1, (int)12067);
			return 0;
		}
		var_3_string = true;
		var_60_bool = 0;
		func_2717(var_60_bool);
		if(var_60_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7f8";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_2640();
		var_40_bool = var_36_bool == (int)14570;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_2814();
		}
		var_115_bool = var_35_string == (int)14547;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_2202(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13312);
			@@@var_0_object:ClearReplies();
			var_132_bool = 0; var_133_object = Obj();
			var_133_object = var_1_object;
			func_3021(var_133_object);
			if(var_132_bool != 0) {
				@@@var_0_object:AddReply((int)13314, (int)14550, (int)14549);
			}
			@@@var_0_object:AddReply((int)13313, (int)-1, (int)14548);
			return 0;
		}
		var_147_bool = var_35_string == (int)14550;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_2202(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13317, (int)14553, (int)14552);
			@@@var_0_object:AddReply((int)13316, (int)14555, (int)14551);
			return 0;
		}
		var_157_bool = var_35_string == (int)14553;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_2202(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13319, (int)14555, (int)14554);
			return 0;
		}
		var_164_bool = var_35_string == (int)14555;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_2202(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13335, (int)14567, (int)14566);
			return 0;
		}
		var_171_bool = var_35_string == (int)14567;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_2202(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13336);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13337, (int)14569, (int)14568);
			return 0;
		}
		var_178_bool = var_35_string == (int)14569;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_2202(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13338);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13339, (int)-1, (int)14570);
			return 0;
		}
		var_3_string = true;
		var_184_bool = 0;
		func_2717(var_184_bool);
		if(var_184_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8ab";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	if((int)1 != 0) {
		func_2640();
		var_40_bool = var_36_int == (int)15322;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_2864(var_42_object);
		}
		var_45_bool = var_35_int == (int)15321;
		if(var_45_bool != 0) {
			var_46_string = "";
			func_2484(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14085, (int)-1, (int)15322);
			return 0;
		}
		var_3_string = true;
		var_65_bool = 0;
		func_2717(var_65_bool);
		if(var_65_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9c5";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_3278();
	var_44_bool = 0;
	func_2557(var_44_bool);
	var_47_bool = var_44_bool == 0; //@nz
	if(var_47_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_48_string = "";
	func_2622("Neutral");
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


func_2562(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0;
	@@var_51_object:GetPosition(var_61_cvector);
	@@var_51_object:GetEyesHeight(var_60_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	var_68_float = var_68_float + var_60_float;
	SetByIndex(var_61_cvector, 1) = var_68_float;
	GetPosition(var_62_cvector);
	GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_62_cvector, 1);
	var_69_float = var_69_float + var_60_float;
	SetByIndex(var_62_cvector, 1) = var_69_float;
	var_63_cvector = var_61_cvector - var_62_cvector;
	var_70_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_71_int = var_63_cvector | var_63_cvector;
	var_72_float = sqrt(var_71_int);
	var_63_cvector = var_63_cvector / var_72_float;
	var_64_cvector = -var_63_cvector;
	var_74_float = var_63_cvector * (int)70;
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_76_cvector = var_64_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2647(var_75_cvector, var_76_cvector);
	var_84_float = var_75_cvector * (int)25;
	var_85_int = var_74_float + var_84_float;
	var_65_cvector = var_85_int - CVector(0.0, 10.0, 0.0);
	var_66_cvector = var_62_cvector + var_65_cvector;
	IsOverrideActive(var_67_bool);
	var_87_bool = var_67_bool;
	if(var_87_bool != 0) {
		var_50_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_66_cvector, var_64_cvector);
	var_88_float = GetByIndex(var_65_cvector, 0);
	var_89_float = GetByIndex(var_65_cvector, 2);
	Rotate(var_88_float, var_89_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_50_bool = 1;
	return 16;
}


func_3081(var_331_bool)
{
	var_333_int = 0; var_334_string = "";
	func_2657(var_333_int, "KnowKapella");
	var_336_bool = var_333_int == (int)1;
	if(var_336_bool != 0) {
		var_331_bool = 1;
		return 0;
	}
	var_331_bool = 0;
	return 0;
}


func_3340()
{
	var_227_int = 0; var_228_int = 0; var_229_int = 0; var_230_int = 0;
	func_3295((int)0);
	var_231_int = var_229_int;
	var_233_int = "Performance" + var_229_int;
	SetVariable(var_233_int, (int)1);
	return 4;
}


func_3093(var_267_bool)
{
	var_269_int = 0; var_270_string = "";
	func_2657(var_269_int, "KnowMyth");
	var_272_bool = var_269_int == (int)1;
	if(var_272_bool != 0) {
		var_267_bool = 1;
		return 0;
	}
	var_267_bool = 0;
	return 0;
}


func_3351(var_36_object)
{
	var_37_bool = GlobalVars[1];
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_39_int = 0; var_40_object = Obj();
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_145_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_146_bool = 0;
	func_3310(var_146_bool);
	if(var_146_bool != 0) {
		var_178_int = 0; var_179_object = Obj();
		var_36_object = var_179_object;
		TaskCall(14);
		func_2368(var_180_object, var_178_int, var_179_object);
		TaskReturn();
		var_223_int = 0;
		func_3295(var_223_int);
		var_224_int = "NightMasks" + var_223_int;
		var_226_int = var_224_int + ".wmv";
		PlayMovie(var_226_int);
		func_3340();
		return 0;
	}
	var_235_bool = 0; var_236_int = 0;
	func_2707(var_235_bool, (int)1);
	if(var_235_bool != 0) {
		var_238_int = 0; var_239_object = Obj();
		var_36_object = var_239_object;
		TaskCall(4);
		func_330(var_240_object, var_238_int, var_239_object);
		TaskReturn();
		return 0;
	}
	var_442_bool = 0; var_443_int = 0;
	func_2707(var_442_bool, (int)2);
	if(var_442_bool != 0) {
		var_444_int = 0; var_445_object = Obj();
		var_36_object = var_445_object;
		TaskCall(6);
		func_1384(var_446_object, var_444_int, var_445_object);
		TaskReturn();
		return 0;
	}
	var_491_bool = 0; var_492_int = 0;
	func_2707(var_491_bool, (int)3);
	if(var_491_bool != 0) {
		var_493_int = 0; var_494_object = Obj();
		var_36_object = var_494_object;
		TaskCall(8);
		func_1627(var_495_object, var_493_int, var_494_object);
		TaskReturn();
		return 0;
	}
	var_555_bool = 0; var_556_int = 0;
	func_2707(var_555_bool, (int)4);
	if(var_555_bool != 0) {
		var_557_int = 0; var_558_object = Obj();
		var_36_object = var_558_object;
		TaskCall(10);
		func_1907(var_559_object, var_557_int, var_558_object);
		TaskReturn();
		return 0;
	}
	var_601_bool = 0; var_602_int = 0;
	func_2707(var_601_bool, (int)7);
	if(var_601_bool != 0) {
		var_603_int = 0; var_604_object = Obj();
		var_36_object = var_604_object;
		TaskCall(12);
		func_2076(var_605_object, var_603_int, var_604_object);
		TaskReturn();
		return 0;
	}
	return 0;
}


func_2076(var_0_object, var_603_int, var_604_object)
{
	var_606_object = Obj(); var_607_bool = 0; var_608_int = 0; var_609_bool = 0; var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0;
	var_0_object = var_604_object;
	var_614_bool = 0; var_615_object = Obj();
	var_604_object = var_615_object;
	func_2562(var_614_bool, var_615_object);
	var_616_bool = var_614_bool == 0; //@nz
	if(var_616_bool != 0) {
		var_603_int = -2;
		return 8;
	}
	CreateDialog(var_610_object);
	var_617_int = 0;
	func_2713(var_617_int);
	@@var_610_object:SetNPCName(var_617_int);
	var_618_string = "";
	func_2715(var_618_string);
	@@var_610_object:SetPhoto(var_618_string);
	var_619_int = 0;
	func_3229(var_619_int);
	@@var_610_object:SetPlayerName(var_619_int);
	IsOverrideActive(var_611_bool);
	var_620_bool = var_611_bool;
	if(var_620_bool != 0) {
		var_603_int = -2;
		return 8;
	}
	DoDialog(var_610_object);
	var_621_object = Obj(); var_622_object = Obj();
	var_604_object = var_621_object;
	var_610_object = var_622_object;
	TaskCall(13);
	func_2139(var_623_object, var_624_object, var_625_string, var_626_bool, var_621_object, var_622_object);
	TaskReturn();
	@@var_610_object:IsDialogEnd(var_613_bool);
	
Label_2121:
	var_654_bool = var_613_bool == 0; //@nz
	if(var_654_bool != 0) {
		sync();
		@@var_610_object:IsDialogEnd(var_613_bool);
		goto Label_2121;
	}
	var_604_object = Obj();
	func_2618();
	StopDialog(var_610_object);
	@@var_610_object:GetReturnValue((int)-1);
	var_612_int = var_603_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3105(var_256_bool)
{
	var_258_int = 0;
	func_2699(var_258_int);
	var_260_bool = var_258_int >= (int)18;
	if(var_260_bool != 0) {
		var_256_bool = 1;
		return 0;
	}
	var_256_bool = 0;
	return 0;
}


func_2858()
{
	SetVariable("KnowLara", (int)1);
	return 0;
}


func_3116(var_234_bool)
{
	var_236_bool = 0;
	var_236_bool = 0;
	var_237_int = 0;
	func_2699(var_237_int);
	var_243_bool = var_237_int >= (int)12;
	if(var_243_bool != 0) {
		var_244_int = 0;
		func_2699(var_244_int);
		var_246_bool = var_244_int < (int)18;
		if(var_246_bool != 0) {
			var_236_bool = 1;
		}
	}
	if(var_236_bool != 0) {
		var_234_bool = 1;
		return 0;
	}
	var_234_bool = 0;
	return 0;
}


func_2864(var_42_object)
{
	@@var_42_object:SetReturnValue((int)1000);
	return 0;
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_0_object = var_40_object;
	var_50_bool = 0; var_51_object = Obj();
	var_40_object = var_51_object;
	func_2562(var_50_bool, var_51_object);
	var_90_bool = var_50_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	CreateDialog(var_46_object);
	var_91_int = 0;
	func_2713(var_91_int);
	@@var_46_object:SetNPCName(var_91_int);
	var_92_string = "";
	func_2715(var_92_string);
	@@var_46_object:SetPhoto(var_92_string);
	var_93_int = 0;
	func_3229(var_93_int);
	@@var_46_object:SetPlayerName(var_93_int);
	IsOverrideActive(var_47_bool);
	var_101_bool = var_47_bool;
	if(var_101_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	DoDialog(var_46_object);
	var_102_object = Obj(); var_103_object = Obj();
	var_40_object = var_102_object;
	var_46_object = var_103_object;
	TaskCall(3);
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	@@var_46_object:IsDialogEnd(var_49_bool);
	
Label_94:
	var_143_bool = var_49_bool == 0; //@nz
	if(var_143_bool != 0) {
		sync();
		@@var_46_object:IsDialogEnd(var_49_bool);
		goto Label_94;
	}
	var_40_object = Obj();
	func_2618();
	StopDialog(var_46_object);
	@@var_46_object:GetReturnValue((int)-1);
	var_48_int = var_39_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2869()
{
	SetVariable("KnowMark", (int)1);
	return 0;
}


func_2618()
{
	CameraSwitchToNormal();
	return 0;
}


func_2875()
{
	SetVariable("ood3Mark1", (int)1);
	return 0;
}


func_2622(var_48_string)
{
	var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0;
	var_54_int = "playing " + var_48_string;
	Trace(var_54_int);
	lshGetAnimTimes(var_48_string, var_51_float, var_52_float);
	lshPlayAnimation(var_51_float, var_52_float);
	var_56_int = "start: " + var_51_float;
	Trace(var_56_int);
	var_58_int = "end: " + var_52_float;
	Trace(var_58_int);
	return 4;
}


func_2368(var_0_object, var_178_int, var_179_object)
{
	var_181_object = Obj(); var_182_bool = 0; var_183_int = 0; var_184_bool = 0; var_185_object = Obj(); var_186_bool = 0; var_187_int = 0; var_188_bool = 0;
	var_0_object = var_179_object;
	var_189_bool = 0; var_190_object = Obj();
	var_179_object = var_190_object;
	func_2562(var_189_bool, var_190_object);
	var_191_bool = var_189_bool == 0; //@nz
	if(var_191_bool != 0) {
		var_178_int = -2;
		return 8;
	}
	CreateDialog(var_185_object);
	var_192_int = 0;
	func_2713(var_192_int);
	@@var_185_object:SetNPCName(var_192_int);
	var_193_string = "";
	func_2715(var_193_string);
	@@var_185_object:SetPhoto(var_193_string);
	var_194_int = 0;
	func_3229(var_194_int);
	@@var_185_object:SetPlayerName(var_194_int);
	IsOverrideActive(var_186_bool);
	var_195_bool = var_186_bool;
	if(var_195_bool != 0) {
		var_178_int = -2;
		return 8;
	}
	DoDialog(var_185_object);
	var_196_object = Obj(); var_197_object = Obj();
	var_179_object = var_196_object;
	var_185_object = var_197_object;
	TaskCall(15);
	func_2431(var_198_object, var_199_object, var_200_string, var_201_bool, var_196_object, var_197_object);
	TaskReturn();
	@@var_185_object:IsDialogEnd(var_188_bool);
	
Label_2413:
	var_220_bool = var_188_bool == 0; //@nz
	if(var_220_bool != 0) {
		sync();
		@@var_185_object:IsDialogEnd(var_188_bool);
		goto Label_2413;
	}
	var_179_object = Obj();
	func_2618();
	StopDialog(var_185_object);
	@@var_185_object:GetReturnValue((int)-1);
	var_187_int = var_178_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3137(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj();
	GetDiaryRoot(var_83_object);
	var_84_bool = var_83_object == 0; //@nz
	if(var_84_bool != 0) {
		Trace("Can't retrieve diary root");
		var_81_object = 0;
		return 2;
	}
	var_83_object = var_81_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2881(var_167_bool)
{
	var_169_int = 0; var_170_string = "";
	func_2657(var_169_int, "ood1Mark1");
	var_174_bool = var_169_int == (int)0;
	if(var_174_bool != 0) {
		var_167_bool = 1;
		return 0;
	}
	var_167_bool = 0;
	return 0;
}


func_2557(var_44_bool)
{
	var_45_bool = 0; var_46_bool = 0;
	IsLoaded(var_46_bool);
	var_46_bool = var_44_bool;
	return 2;
}


func_330(var_0_object, var_238_int, var_239_object)
{
	var_241_object = Obj(); var_242_bool = 0; var_243_int = 0; var_244_bool = 0; var_245_object = Obj(); var_246_bool = 0; var_247_int = 0; var_248_bool = 0;
	var_0_object = var_239_object;
	var_249_bool = 0; var_250_object = Obj();
	var_239_object = var_250_object;
	func_2562(var_249_bool, var_250_object);
	var_251_bool = var_249_bool == 0; //@nz
	if(var_251_bool != 0) {
		var_238_int = -2;
		return 8;
	}
	CreateDialog(var_245_object);
	var_252_int = 0;
	func_2713(var_252_int);
	@@var_245_object:SetNPCName(var_252_int);
	var_253_string = "";
	func_2715(var_253_string);
	@@var_245_object:SetPhoto(var_253_string);
	var_254_int = 0;
	func_3229(var_254_int);
	@@var_245_object:SetPlayerName(var_254_int);
	IsOverrideActive(var_246_bool);
	var_255_bool = var_246_bool;
	if(var_255_bool != 0) {
		var_238_int = -2;
		return 8;
	}
	DoDialog(var_245_object);
	var_256_object = Obj(); var_257_object = Obj();
	var_239_object = var_256_object;
	var_245_object = var_257_object;
	TaskCall(5);
	func_393(var_258_object, var_259_object, var_260_string, var_261_bool, var_256_object, var_257_object);
	TaskReturn();
	@@var_245_object:IsDialogEnd(var_248_bool);
	
Label_375:
	var_440_bool = var_248_bool == 0; //@nz
	if(var_440_bool != 0) {
		sync();
		@@var_245_object:IsDialogEnd(var_248_bool);
		goto Label_375;
	}
	var_239_object = Obj();
	func_2618();
	StopDialog(var_245_object);
	@@var_245_object:GetReturnValue((int)-1);
	var_247_int = var_238_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2893(var_215_bool)
{
	var_217_int = 0; var_218_string = "";
	func_2657(var_217_int, "ood1Mark2");
	var_220_bool = var_217_int == (int)0;
	if(var_220_bool != 0) {
		var_215_bool = 1;
		return 0;
	}
	var_215_bool = 0;
	return 0;
}


func_3150(var_72_bool, var_73_object, var_74_int)
{
	var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0;
	func_3137(Obj());
	var_81_object = var_78_object;
	@@var_78_object:Find(var_74_int, var_79_object);
	var_86_bool = var_79_object == 0; //@nz
	if(var_86_bool != 0) {
		var_88_int = "Can't find diary parent with id: " + var_74_int;
		Trace(var_88_int);
		var_72_bool = 0;
		return 6;
	}
	@@var_79_object:AddChild(var_73_object);
	SetVariable("player_diary", (int)1);
	@@var_73_object:GetCategory(var_80_int);
	SetDiarySection(var_80_int);
	var_72_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2640()
{
	var_38_bool = 0;
	func_2717(var_38_bool);
	if(var_38_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2647(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0;
	var_80_int = var_76_cvector | var_76_cvector;
	var_79_float = sqrt(var_80_int);
	var_81_float = 9.999999974752427e-07;
	var_82_bool = var_79_float < var_81_float;
	if(var_82_bool != 0) {
		var_75_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_75_cvector = var_76_cvector / var_79_float;
	return 2;
}


func_2905(var_247_bool)
{
	var_249_int = 0; var_250_string = "";
	func_2657(var_249_int, "ood1Mark3");
	var_252_bool = var_249_int == (int)0;
	if(var_252_bool != 0) {
		var_247_bool = 1;
		return 0;
	}
	var_247_bool = 0;
	return 0;
}


func_1627(var_0_object, var_493_int, var_494_object)
{
	var_496_object = Obj(); var_497_bool = 0; var_498_int = 0; var_499_bool = 0; var_500_object = Obj(); var_501_bool = 0; var_502_int = 0; var_503_bool = 0;
	var_0_object = var_494_object;
	var_504_bool = 0; var_505_object = Obj();
	var_494_object = var_505_object;
	func_2562(var_504_bool, var_505_object);
	var_506_bool = var_504_bool == 0; //@nz
	if(var_506_bool != 0) {
		var_493_int = -2;
		return 8;
	}
	CreateDialog(var_500_object);
	var_507_int = 0;
	func_2713(var_507_int);
	@@var_500_object:SetNPCName(var_507_int);
	var_508_string = "";
	func_2715(var_508_string);
	@@var_500_object:SetPhoto(var_508_string);
	var_509_int = 0;
	func_3229(var_509_int);
	@@var_500_object:SetPlayerName(var_509_int);
	IsOverrideActive(var_501_bool);
	var_510_bool = var_501_bool;
	if(var_510_bool != 0) {
		var_493_int = -2;
		return 8;
	}
	DoDialog(var_500_object);
	var_511_object = Obj(); var_512_object = Obj();
	var_494_object = var_511_object;
	var_500_object = var_512_object;
	TaskCall(9);
	func_1690(var_513_object, var_514_object, var_515_string, var_516_bool, var_511_object, var_512_object);
	TaskReturn();
	@@var_500_object:IsDialogEnd(var_503_bool);
	
Label_1672:
	var_553_bool = var_503_bool == 0; //@nz
	if(var_553_bool != 0) {
		sync();
		@@var_500_object:IsDialogEnd(var_503_bool);
		goto Label_1672;
	}
	var_494_object = Obj();
	func_2618();
	StopDialog(var_500_object);
	@@var_500_object:GetReturnValue((int)-1);
	var_502_int = var_493_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2139(var_0_object, var_1_object, var_2_object, var_3_object, var_621_object, var_622_object)
{
	var_0_object = var_622_object;
	var_1_object = var_621_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_628_string = "";
		func_2202(var_622_object, "Neutral");
		@@@var_0_object:SetMessage((int)13312);
		@@@var_0_object:ClearReplies();
		var_634_bool = 0; var_635_object = Obj();
		var_635_object = var_1_object;
		func_3021(var_635_object);
		if(var_634_bool != 0) {
			@@@var_0_object:AddReply((int)13314, (int)14550, (int)14549);
		}
		@@@var_0_object:AddReply((int)13313, (int)-1, (int)14548);
		goto Label_2172;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x85f";
	}
Label_2172:
	var_646_bool = 0;
	func_2717(var_646_bool);
	if(var_646_bool != 0) {

	Label_2176:
		lshWaitForAnimEnd();
		var_647_object = var_3_object;
		if(var_647_object != 0) {
		} else {
			var_648_string = "";
			var_648_string = var_2_object;
			func_2622(var_648_string);
			goto Label_2176;
	}
		PlayAnimation("all", "idle");

	Label_2191:
		WaitForAnimEnd();
		var_651_object = var_3_object;
		if(var_651_object != 0) {
			goto Label_2201;
		}
		PlayAnimation("all", "idle");
		goto Label_2191;
	}
	goto Label_2201;
	
Label_2201:
	return 0;
	
}


func_2657(var_134_int, var_135_string)
{
	var_136_int = 0; var_137_int = 0;
	GetVariable(var_135_string, var_137_int);
	var_137_int = var_134_int;
	return 2;
}


func_2917(var_175_bool)
{
	var_177_int = 0; var_178_string = "";
	func_2657(var_177_int, "d1q01");
	var_180_bool = var_177_int == (int)0;
	if(var_180_bool != 0) {
		var_175_bool = 1;
		return 0;
	}
	var_175_bool = 0;
	return 0;
}


func_2662(var_100_object, var_101_string)
{
	var_102_object = Obj(); var_103_object = Obj(); var_104_object = Obj(); var_105_object = Obj();
	GetMainOutdoorScene(var_104_object);
	var_107_int = var_101_string + ".bin";
	AddBlankActor(var_105_object, var_104_object, var_101_string, var_107_int);
	var_105_object = var_100_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1384(var_0_object, var_444_int, var_445_object)
{
	var_447_object = Obj(); var_448_bool = 0; var_449_int = 0; var_450_bool = 0; var_451_object = Obj(); var_452_bool = 0; var_453_int = 0; var_454_bool = 0;
	var_0_object = var_445_object;
	var_455_bool = 0; var_456_object = Obj();
	var_445_object = var_456_object;
	func_2562(var_455_bool, var_456_object);
	var_457_bool = var_455_bool == 0; //@nz
	if(var_457_bool != 0) {
		var_444_int = -2;
		return 8;
	}
	CreateDialog(var_451_object);
	var_458_int = 0;
	func_2713(var_458_int);
	@@var_451_object:SetNPCName(var_458_int);
	var_459_string = "";
	func_2715(var_459_string);
	@@var_451_object:SetPhoto(var_459_string);
	var_460_int = 0;
	func_3229(var_460_int);
	@@var_451_object:SetPlayerName(var_460_int);
	IsOverrideActive(var_452_bool);
	var_461_bool = var_452_bool;
	if(var_461_bool != 0) {
		var_444_int = -2;
		return 8;
	}
	DoDialog(var_451_object);
	var_462_object = Obj(); var_463_object = Obj();
	var_445_object = var_462_object;
	var_451_object = var_463_object;
	TaskCall(7);
	func_1447(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object);
	TaskReturn();
	@@var_451_object:IsDialogEnd(var_454_bool);
	
Label_1429:
	var_489_bool = var_454_bool == 0; //@nz
	if(var_489_bool != 0) {
		sync();
		@@var_451_object:IsDialogEnd(var_454_bool);
		goto Label_1429;
	}
	var_445_object = Obj();
	func_2618();
	StopDialog(var_451_object);
	@@var_451_object:GetReturnValue((int)-1);
	var_453_int = var_444_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3179(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj();
	GetMainOutdoorScene(var_50_object);
	var_52_bool = var_50_object == 0; //@ne
	if(var_52_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_51_object = 0;
		var_51_object = var_47_object;
		return 4;
	}
	@@var_50_object:GetMap(var_51_object);
	var_51_object = var_47_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object;
	var_1_object = var_102_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_109_object = Obj(); var_110_object = Obj();
		var_109_object = var_1_object;
		var_110_object = var_0_object;
		func_2869();
		var_113_string = "";
		func_175(var_103_object, "Neutral");
		@@@var_0_object:SetMessage((int)424);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)425, (int)494, (int)493);
		@@@var_0_object:AddReply((int)429, (int)498, (int)497);
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	var_135_bool = 0;
	func_2717(var_135_bool);
	if(var_135_bool != 0) {

	Label_149:
		lshWaitForAnimEnd();
		var_136_object = var_3_object;
		if(var_136_object != 0) {
		} else {
			var_137_string = "";
			var_137_string = var_2_object;
			func_2622(var_137_string);
			goto Label_149;
	}
		PlayAnimation("all", "idle");

	Label_164:
		WaitForAnimEnd();
		var_140_object = var_3_object;
		if(var_140_object != 0) {
			goto Label_174;
		}
		PlayAnimation("all", "idle");
		goto Label_164;
	}
	goto Label_174;
	
Label_174:
	return 0;
	
}


func_2673(var_108_bool, var_109_string, var_110_string)
{
	var_111_object = Obj(); var_112_object = Obj();
	FindActor(var_112_object, var_109_string);
	var_113_bool = var_112_object == 0; //@ne
	if(var_113_bool != 0) {
		var_108_bool = 0;
		return 2;
	}
	Trigger(var_112_object, var_110_string);
	var_108_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2929(var_221_bool)
{
	var_223_int = 0; var_224_string = "";
	func_2657(var_223_int, "d1q01FirstGeorgVisit");
	var_226_bool = var_223_int == (int)1;
	if(var_226_bool != 0) {
		var_221_bool = 1;
		return 0;
	}
	var_221_bool = 0;
	return 0;
}


func_1907(var_0_object, var_557_int, var_558_object)
{
	var_560_object = Obj(); var_561_bool = 0; var_562_int = 0; var_563_bool = 0; var_564_object = Obj(); var_565_bool = 0; var_566_int = 0; var_567_bool = 0;
	var_0_object = var_558_object;
	var_568_bool = 0; var_569_object = Obj();
	var_558_object = var_569_object;
	func_2562(var_568_bool, var_569_object);
	var_570_bool = var_568_bool == 0; //@nz
	if(var_570_bool != 0) {
		var_557_int = -2;
		return 8;
	}
	CreateDialog(var_564_object);
	var_571_int = 0;
	func_2713(var_571_int);
	@@var_564_object:SetNPCName(var_571_int);
	var_572_string = "";
	func_2715(var_572_string);
	@@var_564_object:SetPhoto(var_572_string);
	var_573_int = 0;
	func_3229(var_573_int);
	@@var_564_object:SetPlayerName(var_573_int);
	IsOverrideActive(var_565_bool);
	var_574_bool = var_565_bool;
	if(var_574_bool != 0) {
		var_557_int = -2;
		return 8;
	}
	DoDialog(var_564_object);
	var_575_object = Obj(); var_576_object = Obj();
	var_558_object = var_575_object;
	var_564_object = var_576_object;
	TaskCall(11);
	func_1970(var_577_object, var_578_object, var_579_string, var_580_bool, var_575_object, var_576_object);
	TaskReturn();
	@@var_564_object:IsDialogEnd(var_567_bool);
	
Label_1952:
	var_599_bool = var_567_bool == 0; //@nz
	if(var_599_bool != 0) {
		sync();
		@@var_564_object:IsDialogEnd(var_567_bool);
		goto Label_1952;
	}
	var_558_object = Obj();
	func_2618();
	StopDialog(var_564_object);
	@@var_564_object:GetReturnValue((int)-1);
	var_566_int = var_557_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3196(var_70_object, var_71_string, var_72_float)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_object = Obj(); var_77_bool = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_object = Obj(); var_81_bool = 0;
	GetMainOutdoorScene(var_80_object);
	var_82_bool = var_80_object == 0; //@ne
	if(var_82_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_80_object:GetLocator(var_71_string, var_81_bool, var_78_cvector, var_79_cvector);
	var_84_bool = var_81_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_86_int = "Warning: outdoor scene locator " + var_71_string;
		var_88_int = var_86_int + " doesnt exist";
		Trace(var_88_int);
	}
	@@var_80_object:GetMap(var_70_object);
	var_89_bool = var_70_object == 0; //@ne
	if(var_89_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_91_float = GetByIndex(var_78_cvector, 0);
	var_92_float = GetByIndex(var_78_cvector, 2);
	@@var_70_object:SetMapParams(var_91_float, var_92_float, var_72_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2685(var_58_float)
{
	var_59_float = 0; var_60_float = 0;
	GetGameTime(var_60_float);
	var_60_float = var_58_float;
	return 2;
}


func_2941(var_273_bool)
{
	var_275_int = 0; var_276_string = "";
	func_2657(var_275_int, "ood1Mark4");
	var_278_bool = var_275_int == (int)0;
	if(var_278_bool != 0) {
		var_273_bool = 1;
		return 0;
	}
	var_273_bool = 0;
	return 0;
}


func_2431(var_0_object, var_1_object, var_2_object, var_3_object, var_196_object, var_197_object)
{
	var_0_object = var_197_object;
	var_1_object = var_196_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_203_string = "";
		func_2484(var_197_object, "Neutral");
		@@@var_0_object:SetMessage((int)14084);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)14085, (int)-1, (int)15322);
		goto Label_2454;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x983";
	}
Label_2454:
	var_212_bool = 0;
	func_2717(var_212_bool);
	if(var_212_bool != 0) {

	Label_2458:
		lshWaitForAnimEnd();
		var_213_object = var_3_object;
		if(var_213_object != 0) {
		} else {
			var_214_string = "";
			var_214_string = var_2_object;
			func_2622(var_214_string);
			goto Label_2458;
	}
		PlayAnimation("all", "idle");

	Label_2473:
		WaitForAnimEnd();
		var_217_object = var_3_object;
		if(var_217_object != 0) {
			goto Label_2483;
		}
		PlayAnimation("all", "idle");
		goto Label_2473;
	}
	goto Label_2483;
	
Label_2483:
	return 0;
	
}


func_642(var_2_object, var_190_string)
{
	var_191_bool = 0;
	func_2717(var_191_bool);
	var_192_bool = var_191_bool == 0; //@nz
	if(var_192_bool != 0) {
		return 0;
	}
	var_193_bool = var_190_string == var_2_object;
	if(var_193_bool != 0) {
		return 0;
	}
	var_194_string = "";
	var_190_string = var_194_string;
	func_2622(var_194_string);
	var_2_object = var_190_string;
	return 0;
}


func_2690(var_165_int)
{
	var_166_float = 0; var_167_float = 0;
	GetGameTime(var_167_float);
	var_169_int = 0;
	var_169_int = var_167_float / (int)24;
	var_165_int = (int)1 + var_169_int;
	return 2;
}


func_393(var_0_object, var_1_object, var_2_object, var_3_object, var_256_object, var_257_object)
{
	var_0_object = var_257_object;
	var_1_object = var_256_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_263_bool = 0;
		var_263_bool = 0;
		var_264_bool = 0; var_265_object = Obj();
		var_265_object = var_1_object;
		func_2881(var_265_object);
		if(var_264_bool != 0) {
			var_272_bool = 0; var_273_object = Obj();
			var_273_object = var_1_object;
			func_2917(var_273_object);
			var_278_bool = var_272_bool == 0; //@nz
			if(var_278_bool != 0) {
				var_263_bool = 1;
			}
		}
		if(var_263_bool != 0) {
			var_279_object = Obj(); var_280_object = Obj();
			var_279_object = var_1_object;
			var_280_object = var_0_object;
			func_2858();
			var_283_object = Obj(); var_284_object = Obj();
			var_283_object = var_1_object;
			var_284_object = var_0_object;
			func_2808();
			var_287_string = "";
			func_642(var_257_object, "Neutral");
			@@@var_0_object:SetMessage((int)5616);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5617, (int)6905, (int)6193);
			@@@var_0_object:AddReply((int)5645, (int)6906, (int)6224);
		} else {
				var_307_string = "";
				func_642(var_257_object, "Neutral");
				@@@var_0_object:SetMessage((int)8129);
				@@@var_0_object:ClearReplies();
				var_309_bool = 0;
				var_309_bool = 0;
				var_310_bool = 0; var_311_object = Obj();
				var_311_object = var_1_object;
				func_2893(var_311_object);
				if(var_310_bool != 0) {
					var_316_bool = 0; var_317_object = Obj();
					var_317_object = var_1_object;
					func_2929(var_317_object);
					if(var_316_bool != 0) {
						var_309_bool = 1;
					}
				}
				if(var_309_bool != 0) {
					@@@var_0_object:AddReply((int)8130, (int)6213, (int)8953);
				}
				var_325_bool = 0;
				var_325_bool = 1;
				var_326_bool = 0;
				var_326_bool = 0;
				var_327_bool = 0; var_328_object = Obj();
				var_328_object = var_1_object;
				func_3011(var_327_bool, var_328_object);
				if(var_327_bool != 0) {
					var_338_bool = 0; var_339_object = Obj();
					var_339_object = var_1_object;
					func_2905(var_339_object);
					if(var_338_bool != 0) {
						var_326_bool = 1;
					}
				}
				if(var_326_bool != 1) {
					var_344_bool = 0;
					var_344_bool = 0;
					var_345_bool = 0; var_346_object = Obj();
					var_346_object = var_1_object;
					func_3001(var_345_bool, var_346_object);
					if(var_345_bool != 0) {
						var_352_bool = 0; var_353_object = Obj();
						var_353_object = var_1_object;
						func_2905(var_353_object);
						if(var_352_bool != 0) {
							var_344_bool = 1;
						}
					}
					if(var_344_bool != 1) {
						var_325_bool = 0;
					}
				}
				if(var_325_bool != 0) {
					@@@var_0_object:AddReply((int)8131, (int)6197, (int)8954);
				}
				var_357_bool = 0;
				var_357_bool = 0;
				var_358_bool = 0; var_359_object = Obj();
				var_359_object = var_1_object;
				func_3093(var_359_object);
				if(var_358_bool != 0) {
					var_364_bool = 0; var_365_object = Obj();
					var_365_object = var_1_object;
					func_2941(var_365_object);
					if(var_364_bool != 0) {
						var_357_bool = 1;
					}
				}
				if(var_357_bool != 0) {
					@@@var_0_object:AddReply((int)8133, (int)-1, (int)8956);
				}
				var_373_bool = 0;
				var_373_bool = 0;
				var_374_bool = 0; var_375_object = Obj();
				var_375_object = var_1_object;
				func_3033(var_375_object);
				if(var_374_bool != 0) {
					var_380_bool = 0; var_381_object = Obj();
					var_381_object = var_1_object;
					func_2953(var_381_object);
					if(var_380_bool != 0) {
						var_373_bool = 1;
					}
				}
				if(var_373_bool != 0) {
					@@@var_0_object:AddReply((int)8135, (int)8982, (int)8958);
				}
				var_389_bool = 0;
				var_389_bool = 0;
				var_390_bool = 0; var_391_object = Obj();
				var_391_object = var_1_object;
				func_3045(var_391_object);
				if(var_390_bool != 0) {
					var_396_bool = 0; var_397_object = Obj();
					var_397_object = var_1_object;
					func_2965(var_397_object);
					if(var_396_bool != 0) {
						var_389_bool = 1;
					}
				}
				if(var_389_bool != 0) {
					@@@var_0_object:AddReply((int)8137, (int)8981, (int)8960);
				}
				var_405_bool = 0;
				var_405_bool = 0;
				var_406_bool = 0; var_407_object = Obj();
				var_407_object = var_1_object;
				func_3057(var_407_object);
				if(var_406_bool != 0) {
					var_412_bool = 0; var_413_object = Obj();
					var_413_object = var_1_object;
					func_2977(var_413_object);
					if(var_412_bool != 0) {
						var_405_bool = 1;
					}
				}
				if(var_405_bool != 0) {
					@@@var_0_object:AddReply((int)8140, (int)8980, (int)8963);
				}
				var_421_bool = 0;
				var_421_bool = 0;
				var_422_bool = 0; var_423_object = Obj();
				var_423_object = var_1_object;
				func_3081(var_423_object);
				if(var_422_bool != 0) {
					var_428_bool = 0; var_429_object = Obj();
					var_429_object = var_1_object;
					func_2989(var_429_object);
					if(var_428_bool != 0) {
						var_421_bool = 1;
					}
				}
				if(var_421_bool != 0) {
					@@@var_0_object:AddReply((int)8151, (int)8979, (int)8974);
				}
				@@@var_0_object:AddReply((int)9147, (int)-1, (int)10028);
				goto Label_612;
		}
	}
Label_612:
	var_299_bool = 0;
	func_2717(var_299_bool);
	if(var_299_bool != 0) {

	Label_616:
		lshWaitForAnimEnd();
		var_300_object = var_3_object;
		if(var_300_object != 0) {
		} else {
			var_301_string = "";
			var_301_string = var_2_object;
			func_2622(var_301_string);
			goto Label_616;
	}
		PlayAnimation("all", "idle");

	Label_631:
		WaitForAnimEnd();
		var_304_object = var_3_object;
		if(var_304_object != 0) {
			goto Label_641;
		}
		PlayAnimation("all", "idle");
		goto Label_631;

	}
	goto Label_641;
	
Label_641:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x18d";


func_2953(var_289_bool)
{
	var_291_int = 0; var_292_string = "";
	func_2657(var_291_int, "ood1Mark5");
	var_294_bool = var_291_int == (int)0;
	if(var_294_bool != 0) {
		var_289_bool = 1;
		return 0;
	}
	var_289_bool = 0;
	return 0;
}


func_2699(var_237_int)
{
	var_238_float = 0; var_239_float = 0;
	GetGameTime(var_239_float);
	var_240_int = 0;
	var_239_float = var_240_int;
	var_237_int = var_240_int % (int)24;
	return 2;
}


func_2707(var_235_bool, var_236_int)
{
	var_237_int = 0;
	func_2690(var_237_int);
	var_235_bool = var_237_int == var_236_int;
	return 0;
}


func_2965(var_305_bool)
{
	var_307_int = 0; var_308_string = "";
	func_2657(var_307_int, "ood1Mark6");
	var_310_bool = var_307_int == (int)0;
	if(var_310_bool != 0) {
		var_305_bool = 1;
		return 0;
	}
	var_305_bool = 0;
	return 0;
}


func_2713(var_91_int)
{
	var_91_int = 2869;
	return 0;
}


func_1690(var_0_object, var_1_object, var_2_object, var_3_object, var_511_object, var_512_object)
{
	var_0_object = var_512_object;
	var_1_object = var_511_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_518_bool = 0; var_519_object = Obj();
		var_519_object = var_1_object;
		func_3069(var_519_object);
		if(var_518_bool != 0) {
			var_524_object = Obj(); var_525_object = Obj();
			var_524_object = var_1_object;
			var_525_object = var_0_object;
			func_2875();
			var_528_string = "";
			func_1773(var_512_object, "Neutral");
			@@@var_0_object:SetMessage((int)9993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9994, (int)11016, (int)11015);
			@@@var_0_object:AddReply((int)10002, (int)11016, (int)11023);
		} else {
				var_548_string = "";
				func_1773(var_512_object, "Neutral");
				@@@var_0_object:SetMessage((int)15316);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15317, (int)-1, (int)16555);
				goto Label_1743;
		}
	}
Label_1743:
	var_540_bool = 0;
	func_2717(var_540_bool);
	if(var_540_bool != 0) {

	Label_1747:
		lshWaitForAnimEnd();
		var_541_object = var_3_object;
		if(var_541_object != 0) {
		} else {
			var_542_string = "";
			var_542_string = var_2_object;
			func_2622(var_542_string);
			goto Label_1747;
	}
		PlayAnimation("all", "idle");

	Label_1762:
		WaitForAnimEnd();
		var_545_object = var_3_object;
		if(var_545_object != 0) {
			goto Label_1772;
		}
		PlayAnimation("all", "idle");
		goto Label_1762;

	}
	goto Label_1772;
	
Label_1772:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x69e";


func_2715(var_92_string)
{
	var_92_string = "ui/NPC_Mark.png";
	return 0;
}


func_2202(var_2_object, var_116_string)
{
	var_117_bool = 0;
	func_2717(var_117_bool);
	var_118_bool = var_117_bool == 0; //@nz
	if(var_118_bool != 0) {
		return 0;
	}
	var_119_bool = var_116_string == var_2_object;
	if(var_119_bool != 0) {
		return 0;
	}
	var_120_string = "";
	var_116_string = var_120_string;
	func_2622(var_120_string);
	var_2_object = var_116_string;
	return 0;
}


func_2717(var_38_bool)
{
	var_38_bool = 1;
	return 0;
}


func_3229(var_93_int)
{
	var_94_int = 0; var_95_int = 0;
	GetVariable("player", var_95_int);
	var_98_bool = var_95_int == (int)0;
	if(var_98_bool != 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0xcac";
	}
	var_100_bool = var_95_int == (int)1;
	if(var_100_bool != 0) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
	return 2;
}


func_2719()
{
	SetVariable("ood1Mark1", (int)1);
	return 0;
}


func_2977(var_321_bool)
{
	var_323_int = 0; var_324_string = "";
	func_2657(var_323_int, "ood1Mark7");
	var_326_bool = var_323_int == (int)0;
	if(var_326_bool != 0) {
		var_321_bool = 1;
		return 0;
	}
	var_321_bool = 0;
	return 0;
}


func_2725()
{
	SetVariable("ood1Mark2", (int)1);
	return 0;
}


func_1447(var_0_object, var_1_object, var_2_object, var_3_object, var_462_object, var_463_object)
{
	var_0_object = var_463_object;
	var_1_object = var_462_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_469_string = "";
		func_1505(var_463_object, "Neutral");
		@@@var_0_object:SetMessage((int)9489);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)9490, (int)10433, (int)10432);
		@@@var_0_object:AddReply((int)9499, (int)10433, (int)10441);
		goto Label_1475;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5ab";
	}
Label_1475:
	var_481_bool = 0;
	func_2717(var_481_bool);
	if(var_481_bool != 0) {

	Label_1479:
		lshWaitForAnimEnd();
		var_482_object = var_3_object;
		if(var_482_object != 0) {
		} else {
			var_483_string = "";
			var_483_string = var_2_object;
			func_2622(var_483_string);
			goto Label_1479;
	}
		PlayAnimation("all", "idle");

	Label_1494:
		WaitForAnimEnd();
		var_486_object = var_3_object;
		if(var_486_object != 0) {
			goto Label_1504;
		}
		PlayAnimation("all", "idle");
		goto Label_1494;
	}
	goto Label_1504;
	
Label_1504:
	return 0;
	
}


func_2731()
{
	SetVariable("ood1Mark3", (int)1);
	return 0;
}


func_2989(var_337_bool)
{
	var_339_int = 0; var_340_string = "";
	func_2657(var_339_int, "ood1Mark8");
	var_342_bool = var_339_int == (int)0;
	if(var_342_bool != 0) {
		var_337_bool = 1;
		return 0;
	}
	var_337_bool = 0;
	return 0;
}


func_3246()
{
	var_66_object = Obj(); var_67_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_67_object, (int)170, (int)0, (int)15422);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_67_object = var_73_object;
	func_3150(var_72_bool, var_73_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_175(var_2_object, var_45_string)
{
	var_46_bool = 0;
	func_2717(var_46_bool);
	var_47_bool = var_46_bool == 0; //@nz
	if(var_47_bool != 0) {
		return 0;
	}
	var_48_bool = var_45_string == var_2_object;
	if(var_48_bool != 0) {
		return 0;
	}
	var_49_string = "";
	var_45_string = var_49_string;
	func_2622(var_49_string);
	var_2_object = var_45_string;
	return 0;
}


func_2737()
{
	var_47_object = Obj(); var_48_object = Obj();
	func_3179(Obj());
	var_49_object = var_48_object;
	var_60_float = 0;
	func_2685(var_60_float);
	@@var_48_object:AddMark("d1q01MarkAboutJulia", "pt_map_julia", (int)1, (int)8647, var_60_float);
	var_67_float = 0;
	func_2685(var_67_float);
	@@var_48_object:AddMark("d1q01MarkAboutLara", "pt_map_lara", (int)1, (int)8646, var_67_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1970(var_0_object, var_1_object, var_2_object, var_3_object, var_575_object, var_576_object)
{
	var_0_object = var_576_object;
	var_1_object = var_575_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_582_string = "";
		func_2023(var_576_object, "Neutral");
		@@@var_0_object:SetMessage((int)10917);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)10918, (int)-1, (int)12067);
		goto Label_1993;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7b6";
	}
Label_1993:
	var_591_bool = 0;
	func_2717(var_591_bool);
	if(var_591_bool != 0) {

	Label_1997:
		lshWaitForAnimEnd();
		var_592_object = var_3_object;
		if(var_592_object != 0) {
		} else {
			var_593_string = "";
			var_593_string = var_2_object;
			func_2622(var_593_string);
			goto Label_1997;
	}
		PlayAnimation("all", "idle");

	Label_2012:
		WaitForAnimEnd();
		var_596_object = var_3_object;
		if(var_596_object != 0) {
			goto Label_2022;
		}
		PlayAnimation("all", "idle");
		goto Label_2012;
	}
	goto Label_2022;
	
Label_2022:
	return 0;
	
}


func_2484(var_2_object, var_46_string)
{
	var_47_bool = 0;
	func_2717(var_47_bool);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 0;
	}
	var_49_bool = var_46_string == var_2_object;
	if(var_49_bool != 0) {
		return 0;
	}
	var_50_string = "";
	var_46_string = var_50_string;
	func_2622(var_50_string);
	var_2_object = var_46_string;
	return 0;
}


func_3001(var_254_bool, var_255_object)
{
	var_256_bool = 0; var_257_object = Obj();
	var_255_object = var_257_object;
	func_3105(var_257_object);
	if(var_256_bool != 0) {
		var_254_bool = 1;
		return 0;
	}
	var_254_bool = 0;
	return 0;
}


func_3262()
{
	var_91_object = Obj(); var_92_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_92_object, (int)171, (int)0, (int)15423);
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0;
	var_92_object = var_98_object;
	func_3150(var_97_bool, var_98_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3011(var_232_bool, var_233_object)
{
	var_234_bool = 0; var_235_object = Obj();
	var_233_object = var_235_object;
	func_3116(var_235_object);
	if(var_234_bool != 0) {
		var_232_bool = 1;
		return 0;
	}
	var_232_bool = 0;
	return 0;
}


func_2762(var_69_object)
{
	var_70_object = Obj(); var_71_string = ""; var_72_float = 0;
	func_3179(Obj());
	var_73_object = var_70_object;
	func_3196(var_70_object, "pt_map_julia", (float)2);
	var_93_object = Obj();
	func_3179(var_93_object);
	@@var_69_object:ShowMap(var_93_object);
	return 0;
}


func_3021(var_132_bool)
{
	var_134_int = 0; var_135_string = "";
	func_2657(var_134_int, "d7q02");
	var_139_bool = var_134_int == (int)0;
	if(var_139_bool != 0) {
		var_132_bool = 1;
		return 0;
	}
	var_132_bool = 0;
	return 0;
}


func_3278()
{
	var_35_int = 0; var_36_int = 0;
	var_37_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_36_int = 1;
	
Label_3283:
	var_39_bool = var_36_int < (int)12;
	if(var_39_bool != 0) {
		var_41_int = "Performance" + var_36_int;
		SetVariable(var_41_int, (int)0);
		var_36_int = var_36_int + (int)1;
		goto Label_3283;
	}
	return 2;
}


func_3033(var_283_bool)
{
	var_285_int = 0; var_286_string = "";
	func_2657(var_285_int, "KnowEva");
	var_288_bool = var_285_int == (int)1;
	if(var_288_bool != 0) {
		var_283_bool = 1;
		return 0;
	}
	var_283_bool = 0;
	return 0;
}


func_2778()
{
	SetVariable("ood1Mark4", (int)1);
	return 0;
}


func_3295(var_162_int)
{
	var_163_int = 0; var_164_int = 0;
	func_2690((int)0);
	var_165_int = var_164_int;
	var_171_int = 0;
	func_2699(var_171_int);
	var_173_bool = var_171_int <= (int)6;
	if(var_173_bool != 0) {
		var_164_int = var_164_int - (int)1;
	}
	var_164_int = var_162_int;
	return 2;
}


func_2784()
{
	SetVariable("ood1Mark5", (int)1);
	return 0;
}


func_1505(var_2_object, var_41_string)
{
	var_42_bool = 0;
	func_2717(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 0;
	}
	var_44_bool = var_41_string == var_2_object;
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_string = "";
	var_41_string = var_45_string;
	func_2622(var_45_string);
	var_2_object = var_41_string;
	return 0;
}


func_3045(var_299_bool)
{
	var_301_int = 0; var_302_string = "";
	func_2657(var_301_int, "KnowJulia");
	var_304_bool = var_301_int == (int)1;
	if(var_304_bool != 0) {
		var_299_bool = 1;
		return 0;
	}
	var_299_bool = 0;
	return 0;
}


func_2790()
{
	SetVariable("ood1Mark6", (int)1);
	return 0;
}


func_2023(var_2_object, var_41_string)
{
	var_42_bool = 0;
	func_2717(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 0;
	}
	var_44_bool = var_41_string == var_2_object;
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_string = "";
	var_41_string = var_45_string;
	func_2622(var_45_string);
	var_2_object = var_41_string;
	return 0;
}


func_2796()
{
	SetVariable("ood1Mark7", (int)1);
	return 0;
}


func_1773(var_2_object, var_53_string)
{
	var_54_bool = 0;
	func_2717(var_54_bool);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		return 0;
	}
	var_56_bool = var_53_string == var_2_object;
	if(var_56_bool != 0) {
		return 0;
	}
	var_57_string = "";
	var_53_string = var_57_string;
	func_2622(var_57_string);
	var_2_object = var_53_string;
	return 0;
}


func_3310(var_146_bool)
{
	var_147_int = 0; var_148_int = 0; var_149_int = 0; var_150_int = 0;
	var_151_bool = 0;
	var_151_bool = 1;
	var_152_int = 0;
	func_2699(var_152_int);
	var_158_bool = var_152_int >= (int)23;
	if(var_158_bool != 1) {
		var_159_int = 0;
		func_2699(var_159_int);
		var_161_bool = var_159_int <= (int)6;
		if(var_161_bool != 1) {
			var_151_bool = 0;
		}
	}
	if(var_151_bool != 0) {
		func_3295((int)0);
		var_162_int = var_149_int;
		var_176_int = "Performance" + var_149_int;
		GetVariable(var_176_int, var_150_int);
		var_146_bool = var_150_int == (int)0;
		return 4;
	}
	var_146_bool = 0;
	return 4;
}


func_2545(var_36_bool, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0;
	@@var_37_object:GetPosition(var_42_cvector);
	GetPosition(var_43_cvector);
	var_44_cvector = var_42_cvector - var_43_cvector;
	var_46_float = GetByIndex(var_44_cvector, 0);
	var_47_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_46_float, var_47_float, var_45_bool);
	var_45_bool = var_36_bool;
	return 8;
}


func_2802()
{
	SetVariable("ood1Mark8", (int)1);
	return 0;
}


func_3057(var_315_bool)
{
	var_317_int = 0; var_318_string = "";
	func_2657(var_317_int, "KnowMaria");
	var_320_bool = var_317_int == (int)1;
	if(var_320_bool != 0) {
		var_315_bool = 1;
		return 0;
	}
	var_315_bool = 0;
	return 0;
}


func_2808()
{
	SetVariable("KnowJulia", (int)1);
	return 0;
}


func_3069(var_41_bool)
{
	var_43_int = 0; var_44_string = "";
	func_2657(var_43_int, "ood3Mark1");
	var_48_bool = var_43_int == (int)0;
	if(var_48_bool != 0) {
		var_41_bool = 1;
		return 0;
	}
	var_41_bool = 0;
	return 0;
}


func_2814()
{
	var_43_object = Obj(); var_44_object = Obj();
	SetVariable("d7q02", (int)1);
	func_3179(Obj());
	var_47_object = var_44_object;
	var_58_float = 0;
	func_2685(var_58_float);
	@@var_44_object:AddMark("d7q02MarkGotoCemetery", "pt_d7q02_corpse", (int)0, (int)15427, var_58_float);
	var_65_float = 0;
	func_2685(var_65_float);
	@@var_44_object:AddMark("d7q02MarkGotoAlexandr", "pt_map_alexandr", (int)0, (int)15428, var_65_float);
	func_3246();
	func_3262();
	var_100_object = Obj(); var_101_string = "";
	func_2662(var_100_object, "quest_d7_02");
	var_108_bool = 0; var_109_string = ""; var_110_string = "";
	func_2673(var_108_bool, "quest_d7_02", "place_corpse");
	return 2;
}
EMIT "Stack[-1] = 0";


