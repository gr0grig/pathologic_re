// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Petr.png|W:playsound|W:giveitem|W:KnowTvirin|W:ood2Petr1|W:ood2Petr2|W:ood2Petr3|W:d2q02|W:d2q02PetrRefusedSelf|W:pt_map_petr|A:AddMark|W:d2q02PetrGotoAndrei|W:pt_map_andrei|W:d2q02PetrGotoAndreiSelf|W:ood1Petr1|W:ood1Petr2|W:ood1Petr3|W:ood1Petr4|W:ood1Petr5|W:ood1Petr6|W:ood1Petr7|W:ood1Petr8|W:KnowPetr|W:KnowMistresses|W:KnowNina|W:d7q02|W:d7q02BirdBalahon|W:d7q02AlexandrGotoPetr|A:FindMark|A:Remove|W:d7q02MarkGotoAlexandr|W:d7q02MarkGotoCemetery|W:quest_d7_02|W:completed|W:ood7Petr1|W:birdmask is given|W:bird_mask|W:ood11Petr1|W:ood11Petr2|W:ood3Petr1|W:KnowMyth|W:d1q01FirstGeorgVisit|W:KnowViktor|W:KnowAnna|W:KnowEva|W:KnowGrif|W:d11q01|W:KnowMaria|W:KnowPredictions|W:KnowMnogogrannik|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry
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
// @EVENT_11: op=0x280 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6d8 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9e5 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb27 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd2e vars=int,int
// @PE: 0x23,0x29,0x70,0xaf,0xbf,0x191,0x270,0x280,0x628,0x6c8,0x6d8,0x982,0x9d5,0x9e5,0xab1,0xb17,0xb27,0xcae,0xd1e,0xd2e,0xef4,0xf5c,0xf71,0xf77,0xf7d,0xf83,0xf89,0xfc6,0xfcc,0xfd2,0xfd8,0xfde,0xfe4,0xfea,0xff0,0xff6,0xffc,0x1002,0x1008,0x1011,0x1043,0x1049,0x1054,0x105a,0x1060,0x1066,0x106c,0x1078,0x1084,0x1090,0x109c,0x10a8,0x10b4,0x10c0,0x10cc,0x10d8,0x10e4,0x10f0,0x10fc,0x1108,0x1114,0x1120,0x112c,0x1138,0x1142,0x114c,0x1158,0x1164,0x1170,0x117c,0x1188,0x1194,0x11a0,0x11ac,0x11b8,0x11c4,0x11d0,0x11dc,0x11e8,0x11f4,0x11ff,0x12a4

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_object = Obj();
	var_30_bool = var_31_object;
	func_4772(var_31_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_bool = var_32_object;
	func_3755(var_31_bool, var_32_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3850();
		var_35_bool = var_30_string == (int)205;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4086();
			var_40_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)171, (int)210, (int)206);
			@@@var_0_object:AddReply((int)172, (int)209, (int)207);
			return 0;
		}
		var_63_bool = var_30_string == (int)209;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)174);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)178, (int)218, (int)213);
			return 0;
		}
		var_70_bool = var_30_string == (int)210;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)176, (int)215, (int)211);
			@@@var_0_object:AddReply((int)177, (int)214, (int)212);
			return 0;
		}
		var_80_bool = var_30_string == (int)214;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)181, (int)218, (int)216);
			return 0;
		}
		var_87_bool = var_30_string == (int)215;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)182, (int)218, (int)217);
			return 0;
		}
		var_94_bool = var_30_string == (int)218;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)184, (int)-1, (int)221);
			@@@var_0_object:AddReply((int)185, (int)-1, (int)222);
			return 0;
		}
		var_3_string = true;
		var_103_bool = 0;
		func_3951(var_103_bool);
		if(var_103_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3850();
		var_35_bool = var_31_bool == (int)6364;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4038();
		}
		var_41_bool = var_31_bool == (int)6361;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4038();
		}
		var_45_bool = var_31_bool == (int)6365;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_4038();
		}
		var_49_bool = var_31_bool == (int)6372;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_4044();
		}
		var_55_bool = var_31_bool == (int)6373;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_4044();
		}
		var_59_bool = var_31_bool == (int)6383;
		if(var_59_bool != 0) {
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_4050();
		}
		var_65_bool = var_31_bool == (int)6384;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_4050();
		}
		var_69_bool = var_31_bool == (int)6385;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_4050();
		}
		var_73_bool = var_31_bool == (int)9428;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_4056();
		}
		var_79_bool = var_31_bool == (int)9429;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_4056();
		}
		var_83_bool = var_31_bool == (int)9434;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_4062();
		}
		var_89_bool = var_31_bool == (int)9435;
		if(var_89_bool != 0) {
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_4062();
		}
		var_93_bool = var_31_bool == (int)9440;
		if(var_93_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_4068();
		}
		var_99_bool = var_31_bool == (int)9447;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_4074();
		}
		var_105_bool = var_31_bool == (int)9450;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_4080();
		}
		var_111_bool = var_30_string == (int)9141;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8318);
			@@@var_0_object:ClearReplies();
			var_128_bool = 0;
			var_128_bool = 0;
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_4300(var_130_object);
			if(var_129_bool != 0) {
				var_137_bool = 0; var_138_object = Obj();
				var_138_object = var_1_object;
				func_4204(var_138_object);
				if(var_137_bool != 0) {
					var_128_bool = 1;
				}
			}
			if(var_128_bool != 0) {
				@@@var_0_object:AddReply((int)8319, (int)6356, (int)9142);
			}
			var_146_bool = 0;
			var_146_bool = 1;
			var_147_bool = 0;
			var_147_bool = 0;
			var_148_bool = 0; var_149_object = Obj();
			var_149_object = var_1_object;
			func_4408(var_148_bool, var_149_object);
			if(var_148_bool != 0) {
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_4312(var_160_object);
				if(var_159_bool != 0) {
					var_147_bool = 1;
				}
			}
			if(var_147_bool != 1) {
				var_165_bool = 0;
				var_165_bool = 0;
				var_166_bool = 0; var_167_object = Obj();
				var_167_object = var_1_object;
				func_4418(var_166_bool, var_167_object);
				if(var_166_bool != 0) {
					var_177_bool = 0; var_178_object = Obj();
					var_178_object = var_1_object;
					func_4312(var_178_object);
					if(var_177_bool != 0) {
						var_165_bool = 1;
					}
				}
				if(var_165_bool != 1) {
					var_146_bool = 0;
				}
			}
			if(var_146_bool != 0) {
				@@@var_0_object:AddReply((int)8320, (int)6369, (int)9143);
			}
			var_182_bool = 0;
			var_182_bool = 0;
			var_183_bool = 0; var_184_object = Obj();
			var_184_object = var_1_object;
			func_4572(var_184_object);
			if(var_183_bool != 0) {
				var_189_bool = 0; var_190_object = Obj();
				var_190_object = var_1_object;
				func_4324(var_190_object);
				if(var_189_bool != 0) {
					var_182_bool = 1;
				}
			}
			if(var_182_bool != 0) {
				@@@var_0_object:AddReply((int)8322, (int)6376, (int)9145);
			}
			var_198_bool = 0;
			var_198_bool = 0;
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_4476(var_200_object);
			if(var_199_bool != 0) {
				var_205_bool = 0; var_206_object = Obj();
				var_206_object = var_1_object;
				func_4336(var_206_object);
				if(var_205_bool != 0) {
					var_198_bool = 1;
				}
			}
			if(var_198_bool != 0) {
				@@@var_0_object:AddReply((int)8324, (int)9417, (int)9147);
			}
			var_214_bool = 0;
			var_214_bool = 0;
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_object;
			func_4464(var_216_object);
			if(var_215_bool != 0) {
				var_221_bool = 0; var_222_object = Obj();
				var_222_object = var_1_object;
				func_4348(var_222_object);
				if(var_221_bool != 0) {
					var_214_bool = 1;
				}
			}
			if(var_214_bool != 0) {
				@@@var_0_object:AddReply((int)8327, (int)9169, (int)9150);
			}
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_4548(var_232_object);
			if(var_231_bool != 0) {
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_4360(var_238_object);
				if(var_237_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)8329, (int)9170, (int)9152);
			}
			var_246_bool = 0;
			var_246_bool = 0;
			var_247_bool = 0; var_248_object = Obj();
			var_248_object = var_1_object;
			func_4396(var_248_object);
			if(var_247_bool != 0) {
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_4372(var_254_object);
				if(var_253_bool != 0) {
					var_246_bool = 1;
				}
			}
			if(var_246_bool != 0) {
				@@@var_0_object:AddReply((int)8334, (int)9171, (int)9157);
			}
			var_262_bool = 0;
			var_262_bool = 0;
			var_263_bool = 0; var_264_object = Obj();
			var_264_object = var_1_object;
			func_4488(var_264_object);
			if(var_263_bool != 0) {
				var_269_bool = 0; var_270_object = Obj();
				var_270_object = var_1_object;
				func_4384(var_270_object);
				if(var_269_bool != 0) {
					var_262_bool = 1;
				}
			}
			if(var_262_bool != 0) {
				@@@var_0_object:AddReply((int)8337, (int)9172, (int)9160);
			}
			@@@var_0_object:AddReply((int)8724, (int)-1, (int)9561);
			return 0;
		}
		var_282_bool = var_30_string == (int)9172;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8349);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8601, (int)9449, (int)9448);
			return 0;
		}
		var_289_bool = var_30_string == (int)9449;
		if(var_289_bool != 0) {
			var_290_object = Obj(); var_291_object = Obj();
			var_290_object = var_1_object;
			var_291_object = var_0_object;
			func_3959();
			var_294_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8602);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8603, (int)-1, (int)9450);
			return 0;
		}
		var_300_bool = var_30_string == (int)9171;
		if(var_300_bool != 0) {
			var_301_object = Obj(); var_302_object = Obj();
			var_301_object = var_1_object;
			var_302_object = var_0_object;
			func_4098();
			var_305_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8595, (int)9443, (int)9441);
			@@@var_0_object:AddReply((int)8596, (int)9444, (int)9442);
			return 0;
		}
		var_314_bool = var_30_string == (int)9444;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8598);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8599, (int)9443, (int)9445);
			return 0;
		}
		var_321_bool = var_30_string == (int)9443;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8597);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8600, (int)-1, (int)9447);
			return 0;
		}
		var_328_bool = var_30_string == (int)9170;
		if(var_328_bool != 0) {
			var_329_object = Obj(); var_330_object = Obj();
			var_329_object = var_1_object;
			var_330_object = var_0_object;
			func_4098();
			var_331_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8347);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8591, (int)9437, (int)9436);
			@@@var_0_object:AddReply((int)8593, (int)9437, (int)9438);
			return 0;
		}
		var_340_bool = var_30_string == (int)9437;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8592);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8594, (int)-1, (int)9440);
			return 0;
		}
		var_347_bool = var_30_string == (int)9169;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8346);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8585, (int)9431, (int)9430);
			return 0;
		}
		var_354_bool = var_30_string == (int)9431;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8587, (int)9433, (int)9432);
			return 0;
		}
		var_361_bool = var_30_string == (int)9433;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8588);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8589, (int)-1, (int)9434);
			@@@var_0_object:AddReply((int)8590, (int)-1, (int)9435);
			return 0;
		}
		var_371_bool = var_30_string == (int)9417;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8573);
			@@@var_0_object:ClearReplies();
			var_374_bool = 0; var_375_object = Obj();
			var_375_object = var_1_object;
			func_4584(var_375_object);
			var_380_bool = var_374_bool == 0; //@nz
			if(var_380_bool != 0) {
				@@@var_0_object:AddReply((int)8574, (int)9419, (int)9418);
			}
			@@@var_0_object:AddReply((int)8576, (int)9421, (int)9420);
			return 0;
		}
		var_388_bool = var_30_string == (int)9421;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8578, (int)9424, (int)9422);
			return 0;
		}
		var_395_bool = var_30_string == (int)9419;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8579, (int)9424, (int)9423);
			return 0;
		}
		var_402_bool = var_30_string == (int)9424;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8580);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8581, (int)9427, (int)9426);
			return 0;
		}
		var_409_bool = var_30_string == (int)9427;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8582);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8583, (int)-1, (int)9428);
			@@@var_0_object:AddReply((int)8584, (int)-1, (int)9429);
			return 0;
		}
		var_419_bool = var_30_string == (int)6376;
		if(var_419_bool != 0) {
			var_420_object = Obj(); var_421_object = Obj();
			var_420_object = var_1_object;
			var_421_object = var_0_object;
			func_4198();
			var_424_object = Obj(); var_425_object = Obj();
			var_424_object = var_1_object;
			var_425_object = var_0_object;
			func_4092();
			var_428_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5788);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5789, (int)6378, (int)6377);
			@@@var_0_object:AddReply((int)5798, (int)6378, (int)6386);
			return 0;
		}
		var_437_bool = var_30_string == (int)6378;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5790);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5791, (int)6380, (int)6379);
			@@@var_0_object:AddReply((int)5797, (int)-1, (int)6385);
			return 0;
		}
		var_447_bool = var_30_string == (int)6380;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5792);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5793, (int)6382, (int)6381);
			@@@var_0_object:AddReply((int)5796, (int)-1, (int)6384);
			return 0;
		}
		var_457_bool = var_30_string == (int)6382;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5794);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5795, (int)-1, (int)6383);
			return 0;
		}
		var_464_bool = var_30_string == (int)6369;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5782);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5783, (int)6371, (int)6370);
			@@@var_0_object:AddReply((int)5787, (int)6371, (int)6374);
			return 0;
		}
		var_474_bool = var_30_string == (int)6371;
		if(var_474_bool != 0) {
			var_475_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5785, (int)-1, (int)6372);
			@@@var_0_object:AddReply((int)5786, (int)-1, (int)6373);
			return 0;
		}
		var_484_bool = var_30_string == (int)6356;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5771);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5772, (int)6358, (int)6357);
			@@@var_0_object:AddReply((int)5781, (int)6358, (int)6367);
			return 0;
		}
		var_494_bool = var_30_string == (int)6358;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5774, (int)6360, (int)6359);
			@@@var_0_object:AddReply((int)5780, (int)6360, (int)6365);
			return 0;
		}
		var_504_bool = var_30_string == (int)6360;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5777, (int)6363, (int)6362);
			@@@var_0_object:AddReply((int)5776, (int)-1, (int)6361);
			return 0;
		}
		var_514_bool = var_30_string == (int)6363;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_624(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5779, (int)-1, (int)6364);
			return 0;
		}
		var_3_string = true;
		var_520_bool = 0;
		func_3951(var_520_bool);
		if(var_520_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x281";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3850();
		var_35_bool = var_31_bool == (int)8221;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_3965();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_3983();
		}
		var_86_bool = var_31_bool == (int)8222;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_3965();
		}
		var_90_bool = var_31_bool == (int)8210;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_3971();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_4006();
		}
		var_122_bool = var_31_bool == (int)8201;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_3977();
		}
		var_128_bool = var_30_string == (int)7583;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6877);
			@@@var_0_object:ClearReplies();
			var_145_bool = 0;
			var_145_bool = 0;
			var_146_bool = 0; var_147_object = Obj();
			var_147_object = var_1_object;
			func_4216(var_147_object);
			if(var_146_bool != 0) {
				var_154_bool = 0; var_155_object = Obj();
				var_155_object = var_1_object;
				func_4264(var_155_object);
				if(var_154_bool != 0) {
					var_145_bool = 1;
				}
			}
			if(var_145_bool != 0) {
				@@@var_0_object:AddReply((int)6878, (int)7585, (int)7584);
			}
			var_163_bool = 0;
			var_163_bool = 0;
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_4228(var_165_object);
			if(var_164_bool != 0) {
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_4288(var_171_object);
				if(var_170_bool != 0) {
					var_163_bool = 1;
				}
			}
			if(var_163_bool != 0) {
				@@@var_0_object:AddReply((int)7431, (int)8203, (int)8202);
			}
			var_179_bool = 0;
			var_179_bool = 0;
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_object;
			func_4240(var_181_object);
			if(var_180_bool != 0) {
				var_186_bool = 0; var_187_object = Obj();
				var_187_object = var_1_object;
				func_4252(var_187_object);
				if(var_186_bool != 0) {
					var_179_bool = 1;
				}
			}
			if(var_179_bool != 0) {
				@@@var_0_object:AddReply((int)6884, (int)7591, (int)7590);
			}
			@@@var_0_object:AddReply((int)7529, (int)-1, (int)8311);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0x6c8";
		EMIT "Pop(1)";
		EMIT "Push((int) 9408)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9409)";
		EMIT "Push((int) 10339)";
		EMIT "Push((int) 10338)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9418)";
		EMIT "Push((int) 10339)";
		EMIT "Push((int) 10348)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9419)";
		EMIT "Push((int) 10351)";
		EMIT "Push((int) 10350)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0x6c8";
		EMIT "Pop(1)";
		EMIT "Push((int) 9422)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9423)";
		EMIT "Push((int) 10356)";
		EMIT "Push((int) 10355)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9432)";
		EMIT "Push((int) 10366)";
		EMIT "Push((int) 10365)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9435)";
		EMIT "Push((int) 10370)";
		EMIT "Push((int) 10369)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_199_bool = var_30_string == (int)10370;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9437, (int)10356, (int)10371);
			return 0;
		}
		var_206_bool = var_30_string == (int)10366;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9434, (int)10356, (int)10367);
			return 0;
		}
		var_213_bool = var_30_string == (int)10356;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9425, (int)10358, (int)10357);
			@@@var_0_object:AddReply((int)9429, (int)10362, (int)10361);
			return 0;
		}
		var_223_bool = var_30_string == (int)10362;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9431, (int)10358, (int)10363);
			return 0;
		}
		var_230_bool = var_30_string == (int)10358;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9427, (int)-1, (int)10359);
			@@@var_0_object:AddReply((int)9428, (int)-1, (int)10360);
			return 0;
		}
		var_240_bool = var_30_string == (int)10351;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9420);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9421, (int)10339, (int)10352);
			return 0;
		}
		var_247_bool = var_30_string == (int)10339;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9410);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9411, (int)10341, (int)10340);
			@@@var_0_object:AddReply((int)9417, (int)-1, (int)10347);
			return 0;
		}
		var_257_bool = var_30_string == (int)10341;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9412);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9413, (int)10343, (int)10342);
			@@@var_0_object:AddReply((int)9416, (int)10343, (int)10345);
			return 0;
		}
		var_267_bool = var_30_string == (int)10343;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9414);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9415, (int)-1, (int)10344);
			return 0;
		}
		var_274_bool = var_30_string == (int)7591;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7430, (int)-1, (int)8201);
			return 0;
		}
		var_281_bool = var_30_string == (int)8203;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7432);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7433, (int)8205, (int)8204);
			return 0;
		}
		var_288_bool = var_30_string == (int)8205;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6882, (int)7589, (int)7588);
			return 0;
		}
		var_295_bool = var_30_string == (int)7589;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6883);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7435, (int)8207, (int)8206);
			@@@var_0_object:AddReply((int)7440, (int)8207, (int)8211);
			return 0;
		}
		var_305_bool = var_30_string == (int)8207;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7437, (int)8209, (int)8208);
			@@@var_0_object:AddReply((int)7441, (int)8209, (int)8213);
			return 0;
		}
		var_315_bool = var_30_string == (int)8209;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7438);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7439, (int)-1, (int)8210);
			return 0;
		}
		var_322_bool = var_30_string == (int)7585;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6879);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6880, (int)7587, (int)7586);
			@@@var_0_object:AddReply((int)7450, (int)8216, (int)8223);
			return 0;
		}
		var_332_bool = var_30_string == (int)7587;
		if(var_332_bool != 0) {
			var_333_object = Obj(); var_334_object = Obj();
			var_333_object = var_1_object;
			var_334_object = var_0_object;
			func_3959();
			var_337_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7442, (int)8216, (int)8215);
			@@@var_0_object:AddReply((int)7451, (int)8226, (int)8225);
			return 0;
		}
		var_346_bool = var_30_string == (int)8226;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7453, (int)8216, (int)8227);
			return 0;
		}
		var_353_bool = var_30_string == (int)8216;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7443);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7444, (int)8218, (int)8217);
			return 0;
		}
		var_360_bool = var_30_string == (int)8218;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7446, (int)8220, (int)8219);
			var_366_bool = 0; var_367_object = Obj();
			var_367_object = var_1_object;
			func_4276(var_367_object);
			if(var_366_bool != 0) {
				@@@var_0_object:AddReply((int)7449, (int)-1, (int)8222);
			}
			return 0;
		}
		var_376_bool = var_30_string == (int)8220;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_1736(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7448, (int)-1, (int)8221);
			return 0;
		}
		var_3_string = true;
		var_382_bool = 0;
		func_3951(var_382_bool);
		if(var_382_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6d9";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3850();
		var_35_bool = var_30_string == (int)11052;
		if(var_35_bool != 0) {
			var_36_bool = 0; var_37_object = Obj();
			var_37_object = var_1_object;
			func_4560(var_37_object);
			if(var_36_bool != 0) {
				var_44_object = Obj(); var_45_object = Obj();
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_4192();
				var_48_string = "";
				func_2517(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)10030);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10031, (int)11054, (int)11053);
				@@@var_0_object:AddReply((int)10039, (int)11063, (int)11062);
				return 0;
			}
			var_70_string = "";
			func_2517(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15308);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15309, (int)-1, (int)16547);
			return 0;
		}
		var_76_bool = var_30_string == (int)11063;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_2517(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10041, (int)-1, (int)11064);
			@@@var_0_object:AddReply((int)10042, (int)11056, (int)11065);
			return 0;
		}
		var_86_bool = var_30_string == (int)11054;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_2517(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10033, (int)11056, (int)11055);
			@@@var_0_object:AddReply((int)10038, (int)11056, (int)11060);
			return 0;
		}
		var_96_bool = var_30_string == (int)11056;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_2517(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10035, (int)-1, (int)11057);
			@@@var_0_object:AddReply((int)10036, (int)-1, (int)11058);
			@@@var_0_object:AddReply((int)10037, (int)-1, (int)11059);
			return 0;
		}
		var_3_string = true;
		var_108_bool = 0;
		func_3951(var_108_bool);
		if(var_108_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9e6";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3850();
		var_35_bool = var_31_bool == (int)14602;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4163();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4104();
		}
		var_70_bool = var_31_bool == (int)14605;
		if(var_70_bool != 0) {
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_4163();
		}
		var_74_bool = var_31_bool == (int)14608;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_4104();
		}
		var_78_bool = var_31_bool == (int)14626;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_4113();
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_4119();
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_4169(var_124_object);
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_3953();
		}
		var_147_bool = var_30_string == (int)14585;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13353);
			@@@var_0_object:ClearReplies();
			var_164_bool = 0;
			var_164_bool = 0;
			var_165_bool = 0; var_166_object = Obj();
			var_166_object = var_1_object;
			func_4440(var_166_object);
			if(var_165_bool != 0) {
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_object;
				func_4428(var_172_object);
				if(var_171_bool != 0) {
					var_164_bool = 1;
				}
			}
			if(var_164_bool != 0) {
				@@@var_0_object:AddReply((int)13355, (int)14598, (int)14587);
			}
			var_180_bool = 0;
			var_180_bool = 0;
			var_181_bool = 0; var_182_object = Obj();
			var_182_object = var_1_object;
			func_4440(var_182_object);
			var_183_bool = var_181_bool == 0; //@nz
			if(var_183_bool != 0) {
				var_184_bool = 0; var_185_object = Obj();
				var_185_object = var_1_object;
				func_4428(var_185_object);
				if(var_184_bool != 0) {
					var_180_bool = 1;
				}
			}
			if(var_180_bool != 0) {
				@@@var_0_object:AddReply((int)13374, (int)14607, (int)14606);
			}
			var_189_bool = 0; var_190_object = Obj();
			var_190_object = var_1_object;
			func_4452(var_190_object);
			if(var_189_bool != 0) {
				@@@var_0_object:AddReply((int)13390, (int)14625, (int)14624);
			}
			@@@var_0_object:AddReply((int)13354, (int)-1, (int)14586);
			return 0;
		}
		var_202_bool = var_30_string == (int)14625;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13392, (int)-1, (int)14626);
			return 0;
		}
		var_209_bool = var_30_string == (int)14607;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13375);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13376, (int)-1, (int)14608);
			return 0;
		}
		var_216_bool = var_30_string == (int)14598;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13367, (int)14588, (int)14599);
			return 0;
		}
		var_223_bool = var_30_string == (int)14588;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13357, (int)14590, (int)14589);
			return 0;
		}
		var_230_bool = var_30_string == (int)14590;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13358);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13359, (int)14592, (int)14591);
			return 0;
		}
		var_237_bool = var_30_string == (int)14592;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13361, (int)14594, (int)14593);
			return 0;
		}
		var_244_bool = var_30_string == (int)14594;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13364, (int)14597, (int)14596);
			@@@var_0_object:AddReply((int)13363, (int)-1, (int)14595);
			return 0;
		}
		var_254_bool = var_30_string == (int)14597;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13368, (int)14601, (int)14600);
			@@@var_0_object:AddReply((int)13371, (int)14604, (int)14603);
			return 0;
		}
		var_264_bool = var_30_string == (int)14604;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13372);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13373, (int)-1, (int)14605);
			return 0;
		}
		var_271_bool = var_30_string == (int)14601;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_2839(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13370, (int)-1, (int)14602);
			return 0;
		}
		var_3_string = true;
		var_277_bool = 0;
		func_3951(var_277_bool);
		if(var_277_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb28";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	if((int)1 != 0) {
		func_3850();
		var_35_bool = var_31_int == (int)15708;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4186();
		}
		var_41_bool = var_30_int == (int)15693;
		if(var_41_bool != 0) {
			var_42_bool = 0;
			var_42_bool = 0;
			var_43_bool = 0; var_44_object = Obj();
			var_44_object = var_1_object;
			func_4500(var_44_object);
			if(var_43_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				var_52_object = var_1_object;
				func_4512(var_52_object);
				if(var_51_bool != 0) {
					var_42_bool = 1;
				}
			}
			if(var_42_bool != 0) {
				var_57_object = Obj(); var_58_object = Obj();
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_4180();
				var_61_string = "";
				func_3358(var_31_int, "Neutral");
				@@@var_0_object:SetMessage((int)14462);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14463, (int)15695, (int)15694);
				@@@var_0_object:AddReply((int)14473, (int)15695, (int)15705);
				return 0;
			}
			var_83_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14474);
			@@@var_0_object:ClearReplies();
			var_85_bool = 0; var_86_object = Obj();
			var_86_object = var_1_object;
			func_4536(var_86_object);
			if(var_85_bool != 0) {
				@@@var_0_object:AddReply((int)14475, (int)15709, (int)15708);
			}
			@@@var_0_object:AddReply((int)14500, (int)-1, (int)15736);
			var_97_bool = 0; var_98_object = Obj();
			var_98_object = var_1_object;
			func_4524(var_98_object);
			if(var_97_bool != 0) {
				@@@var_0_object:AddReply((int)14501, (int)-1, (int)15737);
			}
			return 0;
		}
		var_107_bool = var_30_int == (int)15709;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14477, (int)15711, (int)15710);
			@@@var_0_object:AddReply((int)14499, (int)15711, (int)15734);
			return 0;
		}
		var_117_bool = var_30_int == (int)15711;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14479, (int)15713, (int)15712);
			@@@var_0_object:AddReply((int)14494, (int)15729, (int)15728);
			return 0;
		}
		var_127_bool = var_30_int == (int)15729;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14496, (int)15731, (int)15730);
			return 0;
		}
		var_134_bool = var_30_int == (int)15731;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14497);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14498, (int)15713, (int)15732);
			return 0;
		}
		var_141_bool = var_30_int == (int)15713;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14480);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14481, (int)15715, (int)15714);
			return 0;
		}
		var_148_bool = var_30_int == (int)15715;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14483, (int)15717, (int)15716);
			return 0;
		}
		var_155_bool = var_30_int == (int)15717;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14484);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14485, (int)15719, (int)15718);
			return 0;
		}
		var_162_bool = var_30_int == (int)15719;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14486);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14487, (int)15721, (int)15720);
			@@@var_0_object:AddReply((int)14491, (int)15725, (int)15724);
			return 0;
		}
		var_172_bool = var_30_int == (int)15725;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14493, (int)15721, (int)15726);
			return 0;
		}
		var_179_bool = var_30_int == (int)15721;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14488);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14489, (int)-1, (int)15722);
			@@@var_0_object:AddReply((int)14490, (int)-1, (int)15723);
			return 0;
		}
		var_189_bool = var_30_int == (int)15695;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14465, (int)15697, (int)15696);
			return 0;
		}
		var_196_bool = var_30_int == (int)15697;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14466);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14467, (int)15699, (int)15698);
			return 0;
		}
		var_203_bool = var_30_int == (int)15699;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14468);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14469, (int)15701, (int)15700);
			@@@var_0_object:AddReply((int)14472, (int)15701, (int)15703);
			return 0;
		}
		var_213_bool = var_30_int == (int)15701;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_3358(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)14470);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14471, (int)-1, (int)15702);
			return 0;
		}
		var_3_string = true;
		var_219_bool = 0;
		func_3951(var_219_bool);
		if(var_219_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd2f";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_4768();
	var_31_bool = 0;
	func_3767(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_35_string = "";
	func_3832("Neutral");
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


func_4098()
{
	SetVariable("KnowNina", (int)1);
	return 0;
}


func_4104()
{
	SetVariable("d7q02", (int)2);
	func_4736();
	return 0;
}


func_4360(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_3867(var_239_int, "ood1Petr6");
	var_242_bool = var_239_int == (int)0;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_3850()
{
	var_33_bool = 0;
	func_3951(var_33_bool);
	if(var_33_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4113()
{
	SetVariable("d7q02", (int)4);
	return 0;
}


func_3857(var_70_cvector, var_71_cvector)
{
	var_73_float = 0; var_74_float = 0;
	var_75_int = var_71_cvector | var_71_cvector;
	var_74_float = sqrt(var_75_int);
	var_76_float = 9.999999974752427e-07;
	var_77_bool = var_74_float < var_76_float;
	if(var_77_bool != 0) {
		var_70_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_70_cvector = var_71_cvector / var_74_float;
	return 2;
}


func_4628(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj();
	GetDiaryRoot(var_61_object);
	var_62_bool = var_61_object == 0; //@nz
	if(var_62_bool != 0) {
		Trace("Can't retrieve diary root");
		var_59_object = 0;
		return 2;
	}
	var_61_object = var_59_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4372(var_253_bool)
{
	var_255_int = 0; var_256_string = "";
	func_3867(var_255_int, "ood1Petr7");
	var_258_bool = var_255_int == (int)0;
	if(var_258_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_4119()
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj(); var_88_object = Obj();
	var_89_int = 0; var_90_string = "";
	func_3867(var_89_int, "d7q02BirdBalahon");
	var_94_bool = var_89_int != (int)0;
	if(var_94_bool != 0) {
		func_4670(Obj());
		var_95_object = var_87_object;
		@@var_87_object:FindMark(var_88_object, "d7q02AlexandrGotoPetr");
		var_103_object = var_88_object;
		if(var_103_object != 0) {
			@@var_88_object:Remove();
		}
		@@var_87_object:FindMark(var_88_object, "d7q02MarkGotoAlexandr");
		var_105_object = var_88_object;
		if(var_105_object != 0) {
			@@var_88_object:Remove();
		}
		@@var_87_object:FindMark(var_88_object, "d7q02MarkGotoCemetery");
		var_107_object = var_88_object;
		if(var_107_object != 0) {
			@@var_88_object:Remove();
		}
		func_4752();
		var_117_bool = 0; var_118_string = ""; var_119_string = "";
		func_3898(var_117_bool, "quest_d7_02", "completed");
		var_88_object = 0;
		var_87_object = 0;
	}
	return 4;
}


func_2839(var_2_object, var_148_string)
{
	var_149_bool = 0;
	func_3951(var_149_bool);
	var_150_bool = var_149_bool == 0; //@nz
	if(var_150_bool != 0) {
		return 0;
	}
	var_151_bool = var_148_string == var_2_object;
	if(var_151_bool != 0) {
		return 0;
	}
	var_152_string = "";
	var_148_string = var_152_string;
	func_3832(var_152_string);
	var_2_object = var_148_string;
	return 0;
}


func_3867(var_45_int, var_46_string)
{
	var_47_int = 0; var_48_int = 0;
	GetVariable(var_46_string, var_48_int);
	var_48_int = var_45_int;
	return 2;
}


func_3358(var_2_object, var_61_string)
{
	var_62_bool = 0;
	func_3951(var_62_bool);
	var_63_bool = var_62_bool == 0; //@nz
	if(var_63_bool != 0) {
		return 0;
	}
	var_64_bool = var_61_string == var_2_object;
	if(var_64_bool != 0) {
		return 0;
	}
	var_65_string = "";
	var_61_string = var_65_string;
	func_3832(var_65_string);
	var_2_object = var_61_string;
	return 0;
}


func_4384(var_269_bool)
{
	var_271_int = 0; var_272_string = "";
	func_3867(var_271_int, "ood1Petr8");
	var_274_bool = var_271_int == (int)0;
	if(var_274_bool != 0) {
		var_269_bool = 1;
		return 0;
	}
	var_269_bool = 0;
	return 0;
}


func_4641(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	func_4628(Obj());
	var_59_object = var_56_object;
	@@var_56_object:Find(var_52_int, var_57_object);
	var_64_bool = var_57_object == 0; //@nz
	if(var_64_bool != 0) {
		var_66_int = "Can't find diary parent with id: " + var_52_int;
		Trace(var_66_int);
		var_50_bool = 0;
		return 6;
	}
	@@var_57_object:AddChild(var_51_object);
	SetVariable("player_diary", (int)1);
	@@var_51_object:GetCategory(var_58_int);
	SetDiarySection(var_58_int);
	var_50_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3872(var_131_object, var_132_object, var_133_int)
{
	var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_int = 0; var_139_bool = 0;
	@@var_132_object:GetItemID(var_137_int);
	GetInvItemProperty(var_138_int, var_137_int, "Category");
	@@var_131_object:AddItem(var_139_bool, var_132_object, var_138_int, var_133_int);
	var_141_bool = var_139_bool == 0; //@nz
	if(var_141_bool != 0) {
		@@var_131_object:DropItems(var_132_object, var_133_int);
	}
	return 6;
}


func_1576(var_0_object, var_1_object, var_2_object, var_3_object, var_363_object, var_364_object)
{
	var_0_object = var_364_object;
	var_1_object = var_363_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_370_string = "";
		func_1736(var_364_object, "Neutral");
		@@@var_0_object:SetMessage((int)6877);
		@@@var_0_object:ClearReplies();
		var_376_bool = 0;
		var_376_bool = 0;
		var_377_bool = 0; var_378_object = Obj();
		var_378_object = var_1_object;
		func_4216(var_378_object);
		if(var_377_bool != 0) {
			var_383_bool = 0; var_384_object = Obj();
			var_384_object = var_1_object;
			func_4264(var_384_object);
			if(var_383_bool != 0) {
				var_376_bool = 1;
			}
		}
		if(var_376_bool != 0) {
			@@@var_0_object:AddReply((int)6878, (int)7585, (int)7584);
		}
		var_392_bool = 0;
		var_392_bool = 0;
		var_393_bool = 0; var_394_object = Obj();
		var_394_object = var_1_object;
		func_4228(var_394_object);
		if(var_393_bool != 0) {
			var_399_bool = 0; var_400_object = Obj();
			var_400_object = var_1_object;
			func_4288(var_400_object);
			if(var_399_bool != 0) {
				var_392_bool = 1;
			}
		}
		if(var_392_bool != 0) {
			@@@var_0_object:AddReply((int)7431, (int)8203, (int)8202);
		}
		var_408_bool = 0;
		var_408_bool = 0;
		var_409_bool = 0; var_410_object = Obj();
		var_410_object = var_1_object;
		func_4240(var_410_object);
		if(var_409_bool != 0) {
			var_415_bool = 0; var_416_object = Obj();
			var_416_object = var_1_object;
			func_4252(var_416_object);
			if(var_415_bool != 0) {
				var_408_bool = 1;
			}
		}
		if(var_408_bool != 0) {
			@@@var_0_object:AddReply((int)6884, (int)7591, (int)7590);
		}
		@@@var_0_object:AddReply((int)7529, (int)-1, (int)8311);
		goto Label_1706;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x6c8";
	EMIT "Pop(1)";
	EMIT "Push((int) 9408)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9409)";
	EMIT "Push((int) 10339)";
	EMIT "Push((int) 10338)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9418)";
	EMIT "Push((int) 10339)";
	EMIT "Push((int) 10348)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9419)";
	EMIT "Push((int) 10351)";
	EMIT "Push((int) 10350)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0x6aa";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x6c8";
	EMIT "Pop(1)";
	EMIT "Push((int) 9422)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9423)";
	EMIT "Push((int) 10356)";
	EMIT "Push((int) 10355)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9432)";
	EMIT "Push((int) 10366)";
	EMIT "Push((int) 10365)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9435)";
	EMIT "Push((int) 10370)";
	EMIT "Push((int) 10369)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0x6aa";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62c";
	}
Label_1706:
	var_427_bool = 0;
	func_3951(var_427_bool);
	if(var_427_bool != 0) {

	Label_1710:
		lshWaitForAnimEnd();
		var_428_object = var_3_object;
		if(var_428_object != 0) {
		} else {
			var_429_string = "";
			var_429_string = var_2_object;
			func_3832(var_429_string);
			goto Label_1710;
	}
		PlayAnimation("all", "idle");

	Label_1725:
		WaitForAnimEnd();
		var_432_object = var_3_object;
		if(var_432_object != 0) {
			goto Label_1735;
		}
		PlayAnimation("all", "idle");
		goto Label_1725;
	}
	goto Label_1735;
	
Label_1735:
	return 0;
	
}


func_4396(var_247_bool)
{
	var_249_int = 0; var_250_string = "";
	func_3867(var_249_int, "KnowViktor");
	var_252_bool = var_249_int == (int)1;
	if(var_252_bool != 0) {
		var_247_bool = 1;
		return 0;
	}
	var_247_bool = 0;
	return 0;
}


func_3885(var_126_object, var_127_string, var_128_int)
{
	var_129_object = Obj(); var_130_object = Obj();
	CreateInvItem(var_130_object);
	@@var_130_object:SetItemName(var_127_string);
	var_131_object = Obj(); var_132_object = Obj(); var_133_int = 0;
	var_126_object = var_131_object;
	var_130_object = var_132_object;
	var_128_int = var_133_int;
	func_3872(var_131_object, var_132_object, var_133_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_49(var_0_object, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_0_object = var_35_object;
	var_45_bool = 0; var_46_object = Obj();
	var_35_object = var_46_object;
	func_3772(var_45_bool, var_46_object);
	var_85_bool = var_45_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	CreateDialog(var_41_object);
	var_86_int = 0;
	func_3947(var_86_int);
	@@var_41_object:SetNPCName(var_86_int);
	var_87_string = "";
	func_3949(var_87_string);
	@@var_41_object:SetPhoto(var_87_string);
	var_88_int = 0;
	func_4687(var_88_int);
	@@var_41_object:SetPlayerName(var_88_int);
	IsOverrideActive(var_42_bool);
	var_96_bool = var_42_bool;
	if(var_96_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	DoDialog(var_41_object);
	var_97_object = Obj(); var_98_object = Obj();
	var_35_object = var_97_object;
	var_41_object = var_98_object;
	TaskCall(3);
	func_112(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	@@var_41_object:IsDialogEnd(var_44_bool);
	
Label_94:
	var_138_bool = var_44_bool == 0; //@nz
	if(var_138_bool != 0) {
		sync();
		@@var_41_object:IsDialogEnd(var_44_bool);
		goto Label_94;
	}
	var_35_object = Obj();
	func_3828();
	StopDialog(var_41_object);
	@@var_41_object:GetReturnValue((int)-1);
	var_43_int = var_34_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4408(var_148_bool, var_149_object)
{
	var_150_bool = 0; var_151_object = Obj();
	var_149_object = var_151_object;
	func_4596(var_151_object);
	if(var_150_bool != 0) {
		var_148_bool = 1;
		return 0;
	}
	var_148_bool = 0;
	return 0;
}


func_3898(var_117_bool, var_118_string, var_119_string)
{
	var_120_object = Obj(); var_121_object = Obj();
	FindActor(var_121_object, var_118_string);
	var_122_bool = var_121_object == 0; //@ne
	if(var_122_bool != 0) {
		var_117_bool = 0;
		return 2;
	}
	Trigger(var_121_object, var_119_string);
	var_117_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4670(var_95_object)
{
	var_96_object = Obj(); var_97_object = Obj(); var_98_object = Obj(); var_99_object = Obj();
	GetMainOutdoorScene(var_98_object);
	var_100_bool = var_98_object == 0; //@ne
	if(var_100_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_99_object = 0;
		var_99_object = var_95_object;
		return 4;
	}
	@@var_98_object:GetMap(var_99_object);
	var_99_object = var_95_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4418(var_166_bool, var_167_object)
{
	var_168_bool = 0; var_169_object = Obj();
	var_167_object = var_169_object;
	func_4607(var_169_object);
	if(var_168_bool != 0) {
		var_166_bool = 1;
		return 0;
	}
	var_166_bool = 0;
	return 0;
}


func_4163()
{
	SetVariable("ood7Petr1", (int)1);
	return 0;
}


func_2371(var_0_object, var_439_int, var_440_object)
{
	var_442_object = Obj(); var_443_bool = 0; var_444_int = 0; var_445_bool = 0; var_446_object = Obj(); var_447_bool = 0; var_448_int = 0; var_449_bool = 0;
	var_0_object = var_440_object;
	var_450_bool = 0; var_451_object = Obj();
	var_440_object = var_451_object;
	func_3772(var_450_bool, var_451_object);
	var_452_bool = var_450_bool == 0; //@nz
	if(var_452_bool != 0) {
		var_439_int = -2;
		return 8;
	}
	CreateDialog(var_446_object);
	var_453_int = 0;
	func_3947(var_453_int);
	@@var_446_object:SetNPCName(var_453_int);
	var_454_string = "";
	func_3949(var_454_string);
	@@var_446_object:SetPhoto(var_454_string);
	var_455_int = 0;
	func_4687(var_455_int);
	@@var_446_object:SetPlayerName(var_455_int);
	IsOverrideActive(var_447_bool);
	var_456_bool = var_447_bool;
	if(var_456_bool != 0) {
		var_439_int = -2;
		return 8;
	}
	DoDialog(var_446_object);
	var_457_object = Obj(); var_458_object = Obj();
	var_440_object = var_457_object;
	var_446_object = var_458_object;
	TaskCall(9);
	func_2434(var_459_object, var_460_object, var_461_string, var_462_bool, var_457_object, var_458_object);
	TaskReturn();
	@@var_446_object:IsDialogEnd(var_449_bool);
	
Label_2416:
	var_499_bool = var_449_bool == 0; //@nz
	if(var_499_bool != 0) {
		sync();
		@@var_446_object:IsDialogEnd(var_449_bool);
		goto Label_2416;
	}
	var_440_object = Obj();
	func_3828();
	StopDialog(var_446_object);
	@@var_446_object:GetReturnValue((int)-1);
	var_448_int = var_439_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3910(var_57_float)
{
	var_58_float = 0; var_59_float = 0;
	GetGameTime(var_59_float);
	var_59_float = var_57_float;
	return 2;
}


func_4169(var_123_object)
{
	Trace("birdmask is given");
	var_126_object = Obj(); var_127_string = ""; var_128_int = 0;
	var_123_object = var_126_object;
	func_3885(var_126_object, "bird_mask", (int)1);
	return 0;
}


func_3915(var_143_int)
{
	var_144_float = 0; var_145_float = 0;
	GetGameTime(var_145_float);
	var_147_int = 0;
	var_147_int = var_145_float / (int)24;
	var_143_int = (int)1 + var_147_int;
	return 2;
}


func_4428(var_171_bool)
{
	var_173_int = 0; var_174_string = "";
	func_3867(var_173_int, "d7q02");
	var_176_bool = var_173_int == (int)1;
	if(var_176_bool != 0) {
		var_171_bool = 1;
		return 0;
	}
	var_171_bool = 0;
	return 0;
}


func_4687(var_88_int)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable("player", var_90_int);
	var_93_bool = var_90_int == (int)0;
	if(var_93_bool != 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0x125e";
	}
	var_95_bool = var_90_int == (int)1;
	if(var_95_bool != 0) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
	return 2;
}


func_338(var_0_object, var_149_int, var_150_object)
{
	var_152_object = Obj(); var_153_bool = 0; var_154_int = 0; var_155_bool = 0; var_156_object = Obj(); var_157_bool = 0; var_158_int = 0; var_159_bool = 0;
	var_0_object = var_150_object;
	var_160_bool = 0; var_161_object = Obj();
	var_150_object = var_161_object;
	func_3772(var_160_bool, var_161_object);
	var_162_bool = var_160_bool == 0; //@nz
	if(var_162_bool != 0) {
		var_149_int = -2;
		return 8;
	}
	CreateDialog(var_156_object);
	var_163_int = 0;
	func_3947(var_163_int);
	@@var_156_object:SetNPCName(var_163_int);
	var_164_string = "";
	func_3949(var_164_string);
	@@var_156_object:SetPhoto(var_164_string);
	var_165_int = 0;
	func_4687(var_165_int);
	@@var_156_object:SetPlayerName(var_165_int);
	IsOverrideActive(var_157_bool);
	var_166_bool = var_157_bool;
	if(var_166_bool != 0) {
		var_149_int = -2;
		return 8;
	}
	DoDialog(var_156_object);
	var_167_object = Obj(); var_168_object = Obj();
	var_150_object = var_167_object;
	var_156_object = var_168_object;
	TaskCall(5);
	func_401(var_169_object, var_170_object, var_171_string, var_172_bool, var_167_object, var_168_object);
	TaskReturn();
	@@var_156_object:IsDialogEnd(var_159_bool);
	
Label_383:
	var_341_bool = var_159_bool == 0; //@nz
	if(var_341_bool != 0) {
		sync();
		@@var_156_object:IsDialogEnd(var_159_bool);
		goto Label_383;
	}
	var_150_object = Obj();
	func_3828();
	StopDialog(var_156_object);
	@@var_156_object:GetReturnValue((int)-1);
	var_158_int = var_149_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4180()
{
	SetVariable("ood11Petr1", (int)1);
	return 0;
}


func_3924(var_152_int)
{
	var_153_float = 0; var_154_float = 0;
	GetGameTime(var_154_float);
	var_155_int = 0;
	var_154_float = var_155_int;
	var_152_int = var_155_int % (int)24;
	return 2;
}


func_4440(var_165_bool)
{
	var_167_int = 0; var_168_string = "";
	func_3867(var_167_int, "ood7Petr1");
	var_170_bool = var_167_int == (int)0;
	if(var_170_bool != 0) {
		var_165_bool = 1;
		return 0;
	}
	var_165_bool = 0;
	return 0;
}


func_4186()
{
	SetVariable("ood11Petr2", (int)1);
	return 0;
}


func_3932(var_141_bool, var_142_int)
{
	var_143_int = 0;
	func_3915(var_143_int);
	var_141_bool = var_143_int == var_142_int;
	return 0;
}


func_4192()
{
	SetVariable("ood3Petr1", (int)1);
	return 0;
}


func_4704()
{
	var_60_object = Obj(); var_61_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_61_object, (int)130, (int)2, (int)15267);
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0;
	var_61_object = var_67_object;
	func_4641(var_66_bool, var_67_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3938(var_670_bool)
{
	var_671_bool = 0; var_672_bool = 0;
	var_673_string = "";
	func_3832("No");
	lshWaitForAnimEnd(var_672_bool);
	var_672_bool = var_670_bool;
	return 2;
}


func_4452(var_189_bool)
{
	var_191_int = 0; var_192_string = "";
	func_3867(var_191_int, "d7q02");
	var_194_bool = var_191_int == (int)3;
	if(var_194_bool != 0) {
		var_189_bool = 1;
		return 0;
	}
	var_189_bool = 0;
	return 0;
}


func_4198()
{
	SetVariable("KnowMyth", (int)1);
	return 0;
}


func_3947(var_86_int)
{
	var_86_int = 2875;
	return 0;
}


func_4204(var_137_bool)
{
	var_139_int = 0; var_140_string = "";
	func_3867(var_139_int, "d1q01FirstGeorgVisit");
	var_142_bool = var_139_int == (int)1;
	if(var_142_bool != 0) {
		var_137_bool = 1;
		return 0;
	}
	var_137_bool = 0;
	return 0;
}


func_3949(var_87_string)
{
	var_87_string = "ui/NPC_Petr.png";
	return 0;
}


func_4092()
{
	SetVariable("KnowMistresses", (int)1);
	return 0;
}


func_3183(var_0_object, var_583_int, var_584_object)
{
	var_586_object = Obj(); var_587_bool = 0; var_588_int = 0; var_589_bool = 0; var_590_object = Obj(); var_591_bool = 0; var_592_int = 0; var_593_bool = 0;
	var_0_object = var_584_object;
	var_594_bool = 0; var_595_object = Obj();
	var_584_object = var_595_object;
	func_3772(var_594_bool, var_595_object);
	var_596_bool = var_594_bool == 0; //@nz
	if(var_596_bool != 0) {
		var_583_int = -2;
		return 8;
	}
	CreateDialog(var_590_object);
	var_597_int = 0;
	func_3947(var_597_int);
	@@var_590_object:SetNPCName(var_597_int);
	var_598_string = "";
	func_3949(var_598_string);
	@@var_590_object:SetPhoto(var_598_string);
	var_599_int = 0;
	func_4687(var_599_int);
	@@var_590_object:SetPlayerName(var_599_int);
	IsOverrideActive(var_591_bool);
	var_600_bool = var_591_bool;
	if(var_600_bool != 0) {
		var_583_int = -2;
		return 8;
	}
	DoDialog(var_590_object);
	var_601_object = Obj(); var_602_object = Obj();
	var_584_object = var_601_object;
	var_590_object = var_602_object;
	TaskCall(13);
	func_3246(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object);
	TaskReturn();
	@@var_590_object:IsDialogEnd(var_593_bool);
	
Label_3228:
	var_668_bool = var_593_bool == 0; //@nz
	if(var_668_bool != 0) {
		sync();
		@@var_590_object:IsDialogEnd(var_593_bool);
		goto Label_3228;
	}
	var_584_object = Obj();
	func_3828();
	StopDialog(var_590_object);
	@@var_590_object:GetReturnValue((int)-1);
	var_592_int = var_583_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_97_object, var_98_object)
{
	var_0_object = var_98_object;
	var_1_object = var_97_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_104_object = Obj(); var_105_object = Obj();
		var_104_object = var_1_object;
		var_105_object = var_0_object;
		func_4086();
		var_108_string = "";
		func_175(var_98_object, "Neutral");
		@@@var_0_object:SetMessage((int)170);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)171, (int)210, (int)206);
		@@@var_0_object:AddReply((int)172, (int)209, (int)207);
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	var_130_bool = 0;
	func_3951(var_130_bool);
	if(var_130_bool != 0) {

	Label_149:
		lshWaitForAnimEnd();
		var_131_object = var_3_object;
		if(var_131_object != 0) {
		} else {
			var_132_string = "";
			var_132_string = var_2_object;
			func_3832(var_132_string);
			goto Label_149;
	}
		PlayAnimation("all", "idle");

	Label_164:
		WaitForAnimEnd();
		var_135_object = var_3_object;
		if(var_135_object != 0) {
			goto Label_174;
		}
		PlayAnimation("all", "idle");
		goto Label_164;
	}
	goto Label_174;
	
Label_174:
	return 0;
	
}


func_624(var_2_object, var_112_string)
{
	var_113_bool = 0;
	func_3951(var_113_bool);
	var_114_bool = var_113_bool == 0; //@nz
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_bool = var_112_string == var_2_object;
	if(var_115_bool != 0) {
		return 0;
	}
	var_116_string = "";
	var_112_string = var_116_string;
	func_3832(var_116_string);
	var_2_object = var_112_string;
	return 0;
}


func_4720()
{
	var_112_object = Obj(); var_113_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_113_object, (int)131, (int)2, (int)15268);
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0;
	var_113_object = var_119_object;
	func_4641(var_118_bool, var_119_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2674(var_0_object, var_503_int, var_504_object)
{
	var_506_object = Obj(); var_507_bool = 0; var_508_int = 0; var_509_bool = 0; var_510_object = Obj(); var_511_bool = 0; var_512_int = 0; var_513_bool = 0;
	var_0_object = var_504_object;
	var_514_bool = 0; var_515_object = Obj();
	var_504_object = var_515_object;
	func_3772(var_514_bool, var_515_object);
	var_516_bool = var_514_bool == 0; //@nz
	if(var_516_bool != 0) {
		var_503_int = -2;
		return 8;
	}
	CreateDialog(var_510_object);
	var_517_int = 0;
	func_3947(var_517_int);
	@@var_510_object:SetNPCName(var_517_int);
	var_518_string = "";
	func_3949(var_518_string);
	@@var_510_object:SetPhoto(var_518_string);
	var_519_int = 0;
	func_4687(var_519_int);
	@@var_510_object:SetPlayerName(var_519_int);
	IsOverrideActive(var_511_bool);
	var_520_bool = var_511_bool;
	if(var_520_bool != 0) {
		var_503_int = -2;
		return 8;
	}
	DoDialog(var_510_object);
	var_521_object = Obj(); var_522_object = Obj();
	var_504_object = var_521_object;
	var_510_object = var_522_object;
	TaskCall(11);
	func_2737(var_523_object, var_524_object, var_525_string, var_526_bool, var_521_object, var_522_object);
	TaskReturn();
	@@var_510_object:IsDialogEnd(var_513_bool);
	
Label_2719:
	var_579_bool = var_513_bool == 0; //@nz
	if(var_579_bool != 0) {
		sync();
		@@var_510_object:IsDialogEnd(var_513_bool);
		goto Label_2719;
	}
	var_504_object = Obj();
	func_3828();
	StopDialog(var_510_object);
	@@var_510_object:GetReturnValue((int)-1);
	var_512_int = var_503_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3951(var_33_bool)
{
	var_33_bool = 1;
	return 0;
}


func_4464(var_215_bool)
{
	var_217_int = 0; var_218_string = "";
	func_3867(var_217_int, "KnowAnna");
	var_220_bool = var_217_int == (int)1;
	if(var_220_bool != 0) {
		var_215_bool = 1;
		return 0;
	}
	var_215_bool = 0;
	return 0;
}


func_3953()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3959()
{
	SetVariable("KnowTvirin", (int)1);
	return 0;
}


func_4216(var_146_bool)
{
	var_148_int = 0; var_149_string = "";
	func_3867(var_148_int, "ood2Petr1");
	var_153_bool = var_148_int == (int)0;
	if(var_153_bool != 0) {
		var_146_bool = 1;
		return 0;
	}
	var_146_bool = 0;
	return 0;
}


func_4476(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_3867(var_201_int, "KnowEva");
	var_204_bool = var_201_int == (int)1;
	if(var_204_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_3965()
{
	SetVariable("ood2Petr1", (int)1);
	return 0;
}


func_4736()
{
	var_44_object = Obj(); var_45_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_45_object, (int)173, (int)0, (int)15425);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_45_object = var_51_object;
	func_4641(var_50_bool, var_51_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2434(var_0_object, var_1_object, var_2_object, var_3_object, var_457_object, var_458_object)
{
	var_0_object = var_458_object;
	var_1_object = var_457_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_464_bool = 0; var_465_object = Obj();
		var_465_object = var_1_object;
		func_4560(var_465_object);
		if(var_464_bool != 0) {
			var_470_object = Obj(); var_471_object = Obj();
			var_470_object = var_1_object;
			var_471_object = var_0_object;
			func_4192();
			var_474_string = "";
			func_2517(var_458_object, "Neutral");
			@@@var_0_object:SetMessage((int)10030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10031, (int)11054, (int)11053);
			@@@var_0_object:AddReply((int)10039, (int)11063, (int)11062);
		} else {
				var_494_string = "";
				func_2517(var_458_object, "Neutral");
				@@@var_0_object:SetMessage((int)15308);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15309, (int)-1, (int)16547);
				goto Label_2487;
		}
	}
Label_2487:
	var_486_bool = 0;
	func_3951(var_486_bool);
	if(var_486_bool != 0) {

	Label_2491:
		lshWaitForAnimEnd();
		var_487_object = var_3_object;
		if(var_487_object != 0) {
		} else {
			var_488_string = "";
			var_488_string = var_2_object;
			func_3832(var_488_string);
			goto Label_2491;
	}
		PlayAnimation("all", "idle");

	Label_2506:
		WaitForAnimEnd();
		var_491_object = var_3_object;
		if(var_491_object != 0) {
			goto Label_2516;
		}
		PlayAnimation("all", "idle");
		goto Label_2506;

	}
	goto Label_2516;
	
Label_2516:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x986";


func_3971()
{
	SetVariable("ood2Petr2", (int)1);
	return 0;
}


func_4228(var_164_bool)
{
	var_166_int = 0; var_167_string = "";
	func_3867(var_166_int, "ood2Petr2");
	var_169_bool = var_166_int == (int)0;
	if(var_169_bool != 0) {
		var_164_bool = 1;
		return 0;
	}
	var_164_bool = 0;
	return 0;
}


func_4488(var_263_bool)
{
	var_265_int = 0; var_266_string = "";
	func_3867(var_265_int, "KnowGrif");
	var_268_bool = var_265_int == (int)1;
	if(var_268_bool != 0) {
		var_263_bool = 1;
		return 0;
	}
	var_263_bool = 0;
	return 0;
}


func_3977()
{
	SetVariable("ood2Petr3", (int)1);
	return 0;
}


func_3983()
{
	var_42_object = Obj(); var_43_object = Obj();
	SetVariable("d2q02", (int)3);
	func_4670(Obj());
	var_46_object = var_43_object;
	var_57_float = 0;
	func_3910(var_57_float);
	@@var_43_object:AddMark("d2q02PetrRefusedSelf", "pt_map_petr", (int)0, (int)15280, var_57_float);
	func_4704();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4240(var_180_bool)
{
	var_182_int = 0; var_183_string = "";
	func_3867(var_182_int, "ood2Petr3");
	var_185_bool = var_182_int == (int)0;
	if(var_185_bool != 0) {
		var_180_bool = 1;
		return 0;
	}
	var_180_bool = 0;
	return 0;
}


func_4752()
{
	var_108_object = Obj(); var_109_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_109_object, (int)174, (int)0, (int)15426);
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0;
	var_109_object = var_115_object;
	func_4641(var_114_bool, var_115_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_401(var_0_object, var_1_object, var_2_object, var_3_object, var_167_object, var_168_object)
{
	var_0_object = var_168_object;
	var_1_object = var_167_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_174_string = "";
		func_624(var_168_object, "Neutral");
		@@@var_0_object:SetMessage((int)8318);
		@@@var_0_object:ClearReplies();
		var_180_bool = 0;
		var_180_bool = 0;
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_4300(var_182_object);
		if(var_181_bool != 0) {
			var_189_bool = 0; var_190_object = Obj();
			var_190_object = var_1_object;
			func_4204(var_190_object);
			if(var_189_bool != 0) {
				var_180_bool = 1;
			}
		}
		if(var_180_bool != 0) {
			@@@var_0_object:AddReply((int)8319, (int)6356, (int)9142);
		}
		var_198_bool = 0;
		var_198_bool = 1;
		var_199_bool = 0;
		var_199_bool = 0;
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_4408(var_200_bool, var_201_object);
		if(var_200_bool != 0) {
			var_211_bool = 0; var_212_object = Obj();
			var_212_object = var_1_object;
			func_4312(var_212_object);
			if(var_211_bool != 0) {
				var_199_bool = 1;
			}
		}
		if(var_199_bool != 1) {
			var_217_bool = 0;
			var_217_bool = 0;
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_4418(var_218_bool, var_219_object);
			if(var_218_bool != 0) {
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_1_object;
				func_4312(var_230_object);
				if(var_229_bool != 0) {
					var_217_bool = 1;
				}
			}
			if(var_217_bool != 1) {
				var_198_bool = 0;
			}
		}
		if(var_198_bool != 0) {
			@@@var_0_object:AddReply((int)8320, (int)6369, (int)9143);
		}
		var_234_bool = 0;
		var_234_bool = 0;
		var_235_bool = 0; var_236_object = Obj();
		var_236_object = var_1_object;
		func_4572(var_236_object);
		if(var_235_bool != 0) {
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_4324(var_242_object);
			if(var_241_bool != 0) {
				var_234_bool = 1;
			}
		}
		if(var_234_bool != 0) {
			@@@var_0_object:AddReply((int)8322, (int)6376, (int)9145);
		}
		var_250_bool = 0;
		var_250_bool = 0;
		var_251_bool = 0; var_252_object = Obj();
		var_252_object = var_1_object;
		func_4476(var_252_object);
		if(var_251_bool != 0) {
			var_257_bool = 0; var_258_object = Obj();
			var_258_object = var_1_object;
			func_4336(var_258_object);
			if(var_257_bool != 0) {
				var_250_bool = 1;
			}
		}
		if(var_250_bool != 0) {
			@@@var_0_object:AddReply((int)8324, (int)9417, (int)9147);
		}
		var_266_bool = 0;
		var_266_bool = 0;
		var_267_bool = 0; var_268_object = Obj();
		var_268_object = var_1_object;
		func_4464(var_268_object);
		if(var_267_bool != 0) {
			var_273_bool = 0; var_274_object = Obj();
			var_274_object = var_1_object;
			func_4348(var_274_object);
			if(var_273_bool != 0) {
				var_266_bool = 1;
			}
		}
		if(var_266_bool != 0) {
			@@@var_0_object:AddReply((int)8327, (int)9169, (int)9150);
		}
		var_282_bool = 0;
		var_282_bool = 0;
		var_283_bool = 0; var_284_object = Obj();
		var_284_object = var_1_object;
		func_4548(var_284_object);
		if(var_283_bool != 0) {
			var_289_bool = 0; var_290_object = Obj();
			var_290_object = var_1_object;
			func_4360(var_290_object);
			if(var_289_bool != 0) {
				var_282_bool = 1;
			}
		}
		if(var_282_bool != 0) {
			@@@var_0_object:AddReply((int)8329, (int)9170, (int)9152);
		}
		var_298_bool = 0;
		var_298_bool = 0;
		var_299_bool = 0; var_300_object = Obj();
		var_300_object = var_1_object;
		func_4396(var_300_object);
		if(var_299_bool != 0) {
			var_305_bool = 0; var_306_object = Obj();
			var_306_object = var_1_object;
			func_4372(var_306_object);
			if(var_305_bool != 0) {
				var_298_bool = 1;
			}
		}
		if(var_298_bool != 0) {
			@@@var_0_object:AddReply((int)8334, (int)9171, (int)9157);
		}
		var_314_bool = 0;
		var_314_bool = 0;
		var_315_bool = 0; var_316_object = Obj();
		var_316_object = var_1_object;
		func_4488(var_316_object);
		if(var_315_bool != 0) {
			var_321_bool = 0; var_322_object = Obj();
			var_322_object = var_1_object;
			func_4384(var_322_object);
			if(var_321_bool != 0) {
				var_314_bool = 1;
			}
		}
		if(var_314_bool != 0) {
			@@@var_0_object:AddReply((int)8337, (int)9172, (int)9160);
		}
		@@@var_0_object:AddReply((int)8724, (int)-1, (int)9561);
		goto Label_594;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x195";
	}
Label_594:
	var_333_bool = 0;
	func_3951(var_333_bool);
	if(var_333_bool != 0) {

	Label_598:
		lshWaitForAnimEnd();
		var_334_object = var_3_object;
		if(var_334_object != 0) {
		} else {
			var_335_string = "";
			var_335_string = var_2_object;
			func_3832(var_335_string);
			goto Label_598;
	}
		PlayAnimation("all", "idle");

	Label_613:
		WaitForAnimEnd();
		var_338_object = var_3_object;
		if(var_338_object != 0) {
			goto Label_623;
		}
		PlayAnimation("all", "idle");
		goto Label_613;
	}
	goto Label_623;
	
Label_623:
	return 0;
	
}


func_4500(var_43_bool)
{
	var_45_int = 0; var_46_string = "";
	func_3867(var_45_int, "d11q01");
	var_50_bool = var_45_int == (int)1;
	if(var_50_bool != 0) {
		var_43_bool = 1;
		return 0;
	}
	var_43_bool = 0;
	return 0;
}


func_4252(var_186_bool)
{
	var_188_int = 0; var_189_string = "";
	func_3867(var_188_int, "d2q02");
	var_191_bool = var_188_int == (int)1000;
	if(var_191_bool != 0) {
		var_186_bool = 1;
		return 0;
	}
	var_186_bool = 0;
	return 0;
}


func_4768()
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_4512(var_51_bool)
{
	var_53_int = 0; var_54_string = "";
	func_3867(var_53_int, "ood11Petr1");
	var_56_bool = var_53_int == (int)0;
	if(var_56_bool != 0) {
		var_51_bool = 1;
		return 0;
	}
	var_51_bool = 0;
	return 0;
}


func_4772(var_31_object)
{
	var_32_bool = GlobalVars[1];
	var_33_bool = var_32_bool == 0; //@nz
	if(var_33_bool != 0) {
		var_34_int = 0; var_35_object = Obj();
		var_31_object = var_35_object;
		TaskCall(2);
		func_49(var_36_object, var_34_int, var_35_object);
		TaskReturn();
		var_140_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_141_bool = 0; var_142_int = 0;
	func_3932(var_141_bool, (int)1);
	if(var_141_bool != 0) {
		var_149_int = 0; var_150_object = Obj();
		var_31_object = var_150_object;
		TaskCall(4);
		func_338(var_151_object, var_149_int, var_150_object);
		TaskReturn();
	}
	var_343_bool = 0; var_344_int = 0;
	func_3932(var_343_bool, (int)2);
	if(var_343_bool != 0) {
		var_345_int = 0; var_346_object = Obj();
		var_31_object = var_346_object;
		TaskCall(6);
		func_1513(var_347_object, var_345_int, var_346_object);
		TaskReturn();
		return 0;
	}
	var_437_bool = 0; var_438_int = 0;
	func_3932(var_437_bool, (int)3);
	if(var_437_bool != 0) {
		var_439_int = 0; var_440_object = Obj();
		var_31_object = var_440_object;
		TaskCall(8);
		func_2371(var_441_object, var_439_int, var_440_object);
		TaskReturn();
		return 0;
	}
	var_501_bool = 0; var_502_int = 0;
	func_3932(var_501_bool, (int)7);
	if(var_501_bool != 0) {
		var_503_int = 0; var_504_object = Obj();
		var_31_object = var_504_object;
		TaskCall(10);
		func_2674(var_505_object, var_503_int, var_504_object);
		TaskReturn();
		return 0;
	}
	var_581_bool = 0; var_582_int = 0;
	func_3932(var_581_bool, (int)11);
	if(var_581_bool != 0) {
		var_583_int = 0; var_584_object = Obj();
		var_31_object = var_584_object;
		TaskCall(12);
		func_3183(var_585_object, var_583_int, var_584_object);
		TaskReturn();
		return 0;
	}
	func_3938((bool)0);
	return 0;
}


func_4006()
{
	var_97_object = Obj(); var_98_object = Obj();
	SetVariable("d2q02", (int)5);
	func_4670(Obj());
	var_101_object = var_98_object;
	var_106_float = 0;
	func_3910(var_106_float);
	@@var_98_object:AddMark("d2q02PetrGotoAndrei", "pt_map_andrei", (int)0, (int)15276, var_106_float);
	var_111_float = 0;
	func_3910(var_111_float);
	@@var_98_object:AddMark("d2q02PetrGotoAndreiSelf", "pt_map_petr", (int)0, (int)15281, var_111_float);
	func_4720();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4264(var_154_bool)
{
	var_156_int = 0; var_157_string = "";
	func_3867(var_156_int, "d2q02");
	var_159_bool = var_156_int == (int)2;
	if(var_159_bool != 0) {
		var_154_bool = 1;
		return 0;
	}
	var_154_bool = 0;
	return 0;
}


func_3755(var_31_bool, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0;
	@@var_32_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	var_39_cvector = var_37_cvector - var_38_cvector;
	var_41_float = GetByIndex(var_39_cvector, 0);
	var_42_float = GetByIndex(var_39_cvector, 2);
	Rotate(var_41_float, var_42_float, var_40_bool);
	var_40_bool = var_31_bool;
	return 8;
}


func_4524(var_97_bool)
{
	var_99_int = 0; var_100_string = "";
	func_3867(var_99_int, "d11q01");
	var_102_bool = var_99_int == (int)1000;
	if(var_102_bool != 0) {
		var_97_bool = 1;
		return 0;
	}
	var_97_bool = 0;
	return 0;
}


func_3246(var_0_object, var_1_object, var_2_object, var_3_object, var_601_object, var_602_object)
{
	var_0_object = var_602_object;
	var_1_object = var_601_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_608_bool = 0;
		var_608_bool = 0;
		var_609_bool = 0; var_610_object = Obj();
		var_610_object = var_1_object;
		func_4500(var_610_object);
		if(var_609_bool != 0) {
			var_615_bool = 0; var_616_object = Obj();
			var_616_object = var_1_object;
			func_4512(var_616_object);
			if(var_615_bool != 0) {
				var_608_bool = 1;
			}
		}
		if(var_608_bool != 0) {
			var_621_object = Obj(); var_622_object = Obj();
			var_621_object = var_1_object;
			var_622_object = var_0_object;
			func_4180();
			var_625_string = "";
			func_3358(var_602_object, "Neutral");
			@@@var_0_object:SetMessage((int)14462);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14463, (int)15695, (int)15694);
			@@@var_0_object:AddReply((int)14473, (int)15695, (int)15705);
		} else {
				var_645_string = "";
				func_3358(var_602_object, "Neutral");
				@@@var_0_object:SetMessage((int)14474);
				@@@var_0_object:ClearReplies();
				var_647_bool = 0; var_648_object = Obj();
				var_648_object = var_1_object;
				func_4536(var_648_object);
				if(var_647_bool != 0) {
					@@@var_0_object:AddReply((int)14475, (int)15709, (int)15708);
				}
				@@@var_0_object:AddReply((int)14500, (int)-1, (int)15736);
				var_659_bool = 0; var_660_object = Obj();
				var_660_object = var_1_object;
				func_4524(var_660_object);
				if(var_659_bool != 0) {
					@@@var_0_object:AddReply((int)14501, (int)-1, (int)15737);
				}
				goto Label_3328;
		}
	}
Label_3328:
	var_637_bool = 0;
	func_3951(var_637_bool);
	if(var_637_bool != 0) {

	Label_3332:
		lshWaitForAnimEnd();
		var_638_object = var_3_object;
		if(var_638_object != 0) {
		} else {
			var_639_string = "";
			var_639_string = var_2_object;
			func_3832(var_639_string);
			goto Label_3332;
	}
		PlayAnimation("all", "idle");

	Label_3347:
		WaitForAnimEnd();
		var_642_object = var_3_object;
		if(var_642_object != 0) {
			goto Label_3357;
		}
		PlayAnimation("all", "idle");
		goto Label_3347;

	}
	goto Label_3357;
	
Label_3357:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xcb2";


func_175(var_2_object, var_40_string)
{
	var_41_bool = 0;
	func_3951(var_41_bool);
	var_42_bool = var_41_bool == 0; //@nz
	if(var_42_bool != 0) {
		return 0;
	}
	var_43_bool = var_40_string == var_2_object;
	if(var_43_bool != 0) {
		return 0;
	}
	var_44_string = "";
	var_40_string = var_44_string;
	func_3832(var_44_string);
	var_2_object = var_40_string;
	return 0;
}


func_2737(var_0_object, var_1_object, var_2_object, var_3_object, var_521_object, var_522_object)
{
	var_0_object = var_522_object;
	var_1_object = var_521_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_528_string = "";
		func_2839(var_522_object, "Neutral");
		@@@var_0_object:SetMessage((int)13353);
		@@@var_0_object:ClearReplies();
		var_534_bool = 0;
		var_534_bool = 0;
		var_535_bool = 0; var_536_object = Obj();
		var_536_object = var_1_object;
		func_4440(var_536_object);
		if(var_535_bool != 0) {
			var_541_bool = 0; var_542_object = Obj();
			var_542_object = var_1_object;
			func_4428(var_542_object);
			if(var_541_bool != 0) {
				var_534_bool = 1;
			}
		}
		if(var_534_bool != 0) {
			@@@var_0_object:AddReply((int)13355, (int)14598, (int)14587);
		}
		var_550_bool = 0;
		var_550_bool = 0;
		var_551_bool = 0; var_552_object = Obj();
		var_552_object = var_1_object;
		func_4440(var_552_object);
		var_553_bool = var_551_bool == 0; //@nz
		if(var_553_bool != 0) {
			var_554_bool = 0; var_555_object = Obj();
			var_555_object = var_1_object;
			func_4428(var_555_object);
			if(var_554_bool != 0) {
				var_550_bool = 1;
			}
		}
		if(var_550_bool != 0) {
			@@@var_0_object:AddReply((int)13374, (int)14607, (int)14606);
		}
		var_559_bool = 0; var_560_object = Obj();
		var_560_object = var_1_object;
		func_4452(var_560_object);
		if(var_559_bool != 0) {
			@@@var_0_object:AddReply((int)13390, (int)14625, (int)14624);
		}
		@@@var_0_object:AddReply((int)13354, (int)-1, (int)14586);
		goto Label_2809;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xab5";
	}
Label_2809:
	var_571_bool = 0;
	func_3951(var_571_bool);
	if(var_571_bool != 0) {

	Label_2813:
		lshWaitForAnimEnd();
		var_572_object = var_3_object;
		if(var_572_object != 0) {
		} else {
			var_573_string = "";
			var_573_string = var_2_object;
			func_3832(var_573_string);
			goto Label_2813;
	}
		PlayAnimation("all", "idle");

	Label_2828:
		WaitForAnimEnd();
		var_576_object = var_3_object;
		if(var_576_object != 0) {
			goto Label_2838;
		}
		PlayAnimation("all", "idle");
		goto Label_2828;
	}
	goto Label_2838;
	
Label_2838:
	return 0;
	
}


func_4276(var_366_bool)
{
	var_368_int = 0; var_369_string = "";
	func_3867(var_368_int, "d2q02");
	var_371_bool = var_368_int == (int)3;
	if(var_371_bool != 0) {
		var_366_bool = 1;
		return 0;
	}
	var_366_bool = 0;
	return 0;
}


func_3767(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_4536(var_85_bool)
{
	var_87_int = 0; var_88_string = "";
	func_3867(var_87_int, "ood11Petr2");
	var_90_bool = var_87_int == (int)0;
	if(var_90_bool != 0) {
		var_85_bool = 1;
		return 0;
	}
	var_85_bool = 0;
	return 0;
}


func_3772(var_45_bool, var_46_object)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0;
	@@var_46_object:GetPosition(var_56_cvector);
	@@var_46_object:GetEyesHeight(var_55_float);
	var_63_float = GetByIndex(var_56_cvector, 1);
	var_63_float = var_63_float + var_55_float;
	SetByIndex(var_56_cvector, 1) = var_63_float;
	GetPosition(var_57_cvector);
	GetEyesHeight(var_55_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	var_64_float = var_64_float + var_55_float;
	SetByIndex(var_57_cvector, 1) = var_64_float;
	var_58_cvector = var_56_cvector - var_57_cvector;
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (float)0;
	var_66_int = var_58_cvector | var_58_cvector;
	var_67_float = sqrt(var_66_int);
	var_58_cvector = var_58_cvector / var_67_float;
	var_59_cvector = -var_58_cvector;
	var_69_float = var_58_cvector * (int)70;
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_71_cvector = var_59_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3857(var_70_cvector, var_71_cvector);
	var_79_float = var_70_cvector * (int)25;
	var_80_int = var_69_float + var_79_float;
	var_60_cvector = var_80_int - CVector(0.0, 10.0, 0.0);
	var_61_cvector = var_57_cvector + var_60_cvector;
	IsOverrideActive(var_62_bool);
	var_82_bool = var_62_bool;
	if(var_82_bool != 0) {
		var_45_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_61_cvector, var_59_cvector);
	var_83_float = GetByIndex(var_60_cvector, 0);
	var_84_float = GetByIndex(var_60_cvector, 2);
	Rotate(var_83_float, var_84_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_45_bool = 1;
	return 16;
}


func_4288(var_170_bool)
{
	var_172_int = 0; var_173_string = "";
	func_3867(var_172_int, "d2q02");
	var_175_bool = var_172_int == (int)4;
	if(var_175_bool != 0) {
		var_170_bool = 1;
		return 0;
	}
	var_170_bool = 0;
	return 0;
}


func_4548(var_231_bool)
{
	var_233_int = 0; var_234_string = "";
	func_3867(var_233_int, "KnowMaria");
	var_236_bool = var_233_int == (int)1;
	if(var_236_bool != 0) {
		var_231_bool = 1;
		return 0;
	}
	var_231_bool = 0;
	return 0;
}


func_4038()
{
	SetVariable("ood1Petr1", (int)1);
	return 0;
}


func_1736(var_2_object, var_129_string)
{
	var_130_bool = 0;
	func_3951(var_130_bool);
	var_131_bool = var_130_bool == 0; //@nz
	if(var_131_bool != 0) {
		return 0;
	}
	var_132_bool = var_129_string == var_2_object;
	if(var_132_bool != 0) {
		return 0;
	}
	var_133_string = "";
	var_129_string = var_133_string;
	func_3832(var_133_string);
	var_2_object = var_129_string;
	return 0;
}


func_4300(var_129_bool)
{
	var_131_int = 0; var_132_string = "";
	func_3867(var_131_int, "ood1Petr1");
	var_136_bool = var_131_int == (int)0;
	if(var_136_bool != 0) {
		var_129_bool = 1;
		return 0;
	}
	var_129_bool = 0;
	return 0;
}


func_4044()
{
	SetVariable("ood1Petr2", (int)1);
	return 0;
}


func_4560(var_36_bool)
{
	var_38_int = 0; var_39_string = "";
	func_3867(var_38_int, "ood3Petr1");
	var_43_bool = var_38_int == (int)0;
	if(var_43_bool != 0) {
		var_36_bool = 1;
		return 0;
	}
	var_36_bool = 0;
	return 0;
}


func_4050()
{
	SetVariable("ood1Petr3", (int)1);
	return 0;
}


func_2517(var_2_object, var_48_string)
{
	var_49_bool = 0;
	func_3951(var_49_bool);
	var_50_bool = var_49_bool == 0; //@nz
	if(var_50_bool != 0) {
		return 0;
	}
	var_51_bool = var_48_string == var_2_object;
	if(var_51_bool != 0) {
		return 0;
	}
	var_52_string = "";
	var_48_string = var_52_string;
	func_3832(var_52_string);
	var_2_object = var_48_string;
	return 0;
}


func_4312(var_159_bool)
{
	var_161_int = 0; var_162_string = "";
	func_3867(var_161_int, "ood1Petr2");
	var_164_bool = var_161_int == (int)0;
	if(var_164_bool != 0) {
		var_159_bool = 1;
		return 0;
	}
	var_159_bool = 0;
	return 0;
}


func_4056()
{
	SetVariable("ood1Petr4", (int)1);
	return 0;
}


func_4572(var_183_bool)
{
	var_185_int = 0; var_186_string = "";
	func_3867(var_185_int, "KnowPredictions");
	var_188_bool = var_185_int == (int)1;
	if(var_188_bool != 0) {
		var_183_bool = 1;
		return 0;
	}
	var_183_bool = 0;
	return 0;
}


func_4062()
{
	SetVariable("ood1Petr5", (int)1);
	return 0;
}


func_4324(var_189_bool)
{
	var_191_int = 0; var_192_string = "";
	func_3867(var_191_int, "ood1Petr3");
	var_194_bool = var_191_int == (int)0;
	if(var_194_bool != 0) {
		var_189_bool = 1;
		return 0;
	}
	var_189_bool = 0;
	return 0;
}


func_4068()
{
	SetVariable("ood1Petr6", (int)1);
	return 0;
}


func_4584(var_374_bool)
{
	var_376_int = 0; var_377_string = "";
	func_3867(var_376_int, "KnowMnogogrannik");
	var_379_bool = var_376_int == (int)1;
	if(var_379_bool != 0) {
		var_374_bool = 1;
		return 0;
	}
	var_374_bool = 0;
	return 0;
}


func_1513(var_0_object, var_345_int, var_346_object)
{
	var_348_object = Obj(); var_349_bool = 0; var_350_int = 0; var_351_bool = 0; var_352_object = Obj(); var_353_bool = 0; var_354_int = 0; var_355_bool = 0;
	var_0_object = var_346_object;
	var_356_bool = 0; var_357_object = Obj();
	var_346_object = var_357_object;
	func_3772(var_356_bool, var_357_object);
	var_358_bool = var_356_bool == 0; //@nz
	if(var_358_bool != 0) {
		var_345_int = -2;
		return 8;
	}
	CreateDialog(var_352_object);
	var_359_int = 0;
	func_3947(var_359_int);
	@@var_352_object:SetNPCName(var_359_int);
	var_360_string = "";
	func_3949(var_360_string);
	@@var_352_object:SetPhoto(var_360_string);
	var_361_int = 0;
	func_4687(var_361_int);
	@@var_352_object:SetPlayerName(var_361_int);
	IsOverrideActive(var_353_bool);
	var_362_bool = var_353_bool;
	if(var_362_bool != 0) {
		var_345_int = -2;
		return 8;
	}
	DoDialog(var_352_object);
	var_363_object = Obj(); var_364_object = Obj();
	var_346_object = var_363_object;
	var_352_object = var_364_object;
	TaskCall(7);
	func_1576(var_365_object, var_366_object, var_367_string, var_368_bool, var_363_object, var_364_object);
	TaskReturn();
	@@var_352_object:IsDialogEnd(var_355_bool);
	
Label_1558:
	var_435_bool = var_355_bool == 0; //@nz
	if(var_435_bool != 0) {
		sync();
		@@var_352_object:IsDialogEnd(var_355_bool);
		goto Label_1558;
	}
	var_346_object = Obj();
	func_3828();
	StopDialog(var_352_object);
	@@var_352_object:GetReturnValue((int)-1);
	var_354_int = var_345_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4074()
{
	SetVariable("ood1Petr7", (int)1);
	return 0;
}


func_4336(var_205_bool)
{
	var_207_int = 0; var_208_string = "";
	func_3867(var_207_int, "ood1Petr4");
	var_210_bool = var_207_int == (int)0;
	if(var_210_bool != 0) {
		var_205_bool = 1;
		return 0;
	}
	var_205_bool = 0;
	return 0;
}


func_4080()
{
	SetVariable("ood1Petr8", (int)1);
	return 0;
}


func_3828()
{
	CameraSwitchToNormal();
	return 0;
}


func_4596(var_150_bool)
{
	var_152_int = 0;
	func_3924(var_152_int);
	var_158_bool = var_152_int >= (int)18;
	if(var_158_bool != 0) {
		var_150_bool = 1;
		return 0;
	}
	var_150_bool = 0;
	return 0;
}


func_4086()
{
	SetVariable("KnowPetr", (int)1);
	return 0;
}


func_3832(var_35_string)
{
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0;
	var_41_int = "playing " + var_35_string;
	Trace(var_41_int);
	lshGetAnimTimes(var_35_string, var_38_float, var_39_float);
	lshPlayAnimation(var_38_float, var_39_float);
	var_43_int = "start: " + var_38_float;
	Trace(var_43_int);
	var_45_int = "end: " + var_39_float;
	Trace(var_45_int);
	return 4;
}


func_4348(var_221_bool)
{
	var_223_int = 0; var_224_string = "";
	func_3867(var_223_int, "ood1Petr5");
	var_226_bool = var_223_int == (int)0;
	if(var_226_bool != 0) {
		var_221_bool = 1;
		return 0;
	}
	var_221_bool = 0;
	return 0;
}


func_4607(var_168_bool)
{
	var_170_bool = 0;
	var_170_bool = 0;
	var_171_int = 0;
	func_3924(var_171_int);
	var_173_bool = var_171_int >= (int)12;
	if(var_173_bool != 0) {
		var_174_int = 0;
		func_3924(var_174_int);
		var_176_bool = var_174_int < (int)18;
		if(var_176_bool != 0) {
			var_170_bool = 1;
		}
	}
	if(var_170_bool != 0) {
		var_168_bool = 1;
		return 0;
	}
	var_168_bool = 0;
	return 0;
}


