// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,FindActor/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,GetMainOutdoorScene/1
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:Door |W: not found|W:locked|A:SetProperty|W:No|W:warehouse_rubin@door1|W:ood1Notkin1|W:ood1Notkin2|W:ood1NotkinMQ1|W:KnowTwoSouls|W:pt_map_rubin|A:ShowMap|W:d1q01NotkinAboutRubin|A:AddMark|W:KnowNotkin|W:ood1Notkin3|W:ood1Notkin4|W:ood1Notkin5|W:ood1Notkin6|W:ood1Notkin7|W:ood3Notkin1|W:ood4Notkin1|W:KnowEpidemic|W:d1q01|W:d1q01FirstGeorgVisit|W:d4q03|W:KnowMark|W:KnowGrif|W:KnowMishka|W:KnowSpi4ka|W:KnowKapella|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:ui/NPC_Notkin.png
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
// @EVENT_11: op=0x272 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4de vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x67e vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a7 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xae2 vars=int,int
// @PE: 0x23,0x29,0x70,0xaf,0xbf,0x196,0x262,0x272,0x470,0x4ce,0x4de,0x5f8,0x66e,0x67e,0x93f,0x997,0x9a7,0xa78,0xad2,0xae2,0xbe6,0xc38,0xc47,0xc4e,0xc54,0xc5a,0xc60,0xc62,0xc64,0xc6a,0xc8a,0xc90,0xc96,0xc9c,0xca2,0xca8,0xcae,0xcb4,0xcba,0xcc6,0xcd2,0xcde,0xcea,0xcf6,0xd02,0xd0e,0xd13,0xd18,0xd22,0xd2e,0xd38,0xd44,0xd50,0xd5c,0xd68,0xd74,0xd80,0xd8c,0xd98,0xda4,0xdb0,0xdbc,0xdc8,0xdd4,0xddf,0xe41

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
	func_3649(var_31_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_bool = var_32_object;
	func_2973(var_31_bool, var_32_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3068();
		var_35_bool = var_30_string == (int)243;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_3210();
			var_40_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)207, (int)256, (int)245);
			@@@var_0_object:AddReply((int)206, (int)246, (int)244);
			return 0;
		}
		var_63_bool = var_30_string == (int)246;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)209, (int)249, (int)247);
			@@@var_0_object:AddReply((int)210, (int)250, (int)248);
			return 0;
		}
		var_73_bool = var_30_string == (int)250;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)215, (int)249, (int)253);
			return 0;
		}
		var_80_bool = var_30_string == (int)249;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_3172();
			var_85_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)211);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)213, (int)252, (int)251);
			return 0;
		}
		var_91_bool = var_30_string == (int)252;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)216, (int)-1, (int)255);
			return 0;
		}
		var_98_bool = var_30_string == (int)256;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_175(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)218, (int)-1, (int)257);
			@@@var_0_object:AddReply((int)219, (int)-1, (int)258);
			return 0;
		}
		var_3_string = true;
		var_107_bool = 0;
		func_3643(var_107_bool);
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


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3068();
		var_35_bool = var_31_bool == (int)9079;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_3150();
		}
		var_41_bool = var_31_bool == (int)9080;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3156();
		}
		var_47_bool = var_31_bool == (int)6268;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3150();
		}
		var_51_bool = var_31_bool == (int)9096;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_3216();
		}
		var_57_bool = var_31_bool == (int)9097;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_3222();
		}
		var_63_bool = var_31_bool == (int)9100;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_3228();
		}
		var_69_bool = var_31_bool == (int)9102;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_3234();
		}
		var_75_bool = var_31_bool == (int)9103;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_3240();
		}
		var_81_bool = var_30_string == (int)9078;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8255);
			@@@var_0_object:ClearReplies();
			var_98_bool = 0;
			var_98_bool = 0;
			var_99_bool = 0; var_100_object = Obj();
			var_100_object = var_1_object;
			func_3330(var_100_object);
			if(var_99_bool != 0) {
				var_107_bool = 0; var_108_object = Obj();
				var_108_object = var_1_object;
				func_3270(var_108_object);
				if(var_107_bool != 0) {
					var_98_bool = 1;
				}
			}
			if(var_98_bool != 0) {
				@@@var_0_object:AddReply((int)8256, (int)6255, (int)9079);
			}
			var_116_bool = 0;
			var_116_bool = 1;
			var_117_bool = 0;
			var_117_bool = 0;
			var_118_bool = 0; var_119_object = Obj();
			var_119_object = var_1_object;
			func_3374(var_118_bool, var_119_object);
			if(var_118_bool != 0) {
				var_133_bool = 0; var_134_object = Obj();
				var_134_object = var_1_object;
				func_3282(var_134_object);
				if(var_133_bool != 0) {
					var_117_bool = 1;
				}
			}
			if(var_117_bool != 1) {
				var_139_bool = 0;
				var_139_bool = 0;
				var_140_bool = 0; var_141_object = Obj();
				var_141_object = var_1_object;
				func_3352(var_140_bool, var_141_object);
				if(var_140_bool != 0) {
					var_147_bool = 0; var_148_object = Obj();
					var_148_object = var_1_object;
					func_3282(var_148_object);
					if(var_147_bool != 0) {
						var_139_bool = 1;
					}
				}
				if(var_139_bool != 1) {
					var_116_bool = 0;
				}
			}
			if(var_116_bool != 0) {
				@@@var_0_object:AddReply((int)8257, (int)6264, (int)9080);
			}
			var_152_bool = 0;
			var_152_bool = 0;
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_3384(var_154_object);
			if(var_153_bool != 0) {
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_3408(var_160_object);
				if(var_159_bool != 0) {
					var_152_bool = 1;
				}
			}
			if(var_152_bool != 0) {
				@@@var_0_object:AddReply((int)8273, (int)9105, (int)9096);
			}
			var_168_bool = 0;
			var_168_bool = 0;
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_3396(var_170_object);
			if(var_169_bool != 0) {
				var_175_bool = 0; var_176_object = Obj();
				var_176_object = var_1_object;
				func_3420(var_176_object);
				if(var_175_bool != 0) {
					var_168_bool = 1;
				}
			}
			if(var_168_bool != 0) {
				@@@var_0_object:AddReply((int)8274, (int)9106, (int)9097);
			}
			var_184_bool = 0;
			var_184_bool = 0;
			var_185_bool = 0; var_186_object = Obj();
			var_186_object = var_1_object;
			func_3528(var_186_object);
			if(var_185_bool != 0) {
				var_191_bool = 0; var_192_object = Obj();
				var_192_object = var_1_object;
				func_3432(var_192_object);
				if(var_191_bool != 0) {
					var_184_bool = 1;
				}
			}
			if(var_184_bool != 0) {
				@@@var_0_object:AddReply((int)8277, (int)9107, (int)9100);
			}
			var_200_bool = 0;
			var_200_bool = 0;
			var_201_bool = 0; var_202_object = Obj();
			var_202_object = var_1_object;
			func_3468(var_202_object);
			if(var_201_bool != 0) {
				var_207_bool = 0; var_208_object = Obj();
				var_208_object = var_1_object;
				func_3444(var_208_object);
				if(var_207_bool != 0) {
					var_200_bool = 1;
				}
			}
			if(var_200_bool != 0) {
				@@@var_0_object:AddReply((int)8279, (int)9108, (int)9102);
			}
			var_216_bool = 0;
			var_216_bool = 0;
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_3516(var_218_object);
			if(var_217_bool != 0) {
				var_223_bool = 0; var_224_object = Obj();
				var_224_object = var_1_object;
				func_3456(var_224_object);
				if(var_223_bool != 0) {
					var_216_bool = 1;
				}
			}
			if(var_216_bool != 0) {
				@@@var_0_object:AddReply((int)8280, (int)9109, (int)9103);
			}
			@@@var_0_object:AddReply((int)15221, (int)-1, (int)16498);
			return 0;
		}
		var_236_bool = var_30_string == (int)9109;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15222, (int)-1, (int)16499);
			return 0;
		}
		var_243_bool = var_30_string == (int)9108;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15223, (int)-1, (int)16500);
			return 0;
		}
		var_250_bool = var_30_string == (int)9107;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15224, (int)-1, (int)16501);
			return 0;
		}
		var_257_bool = var_30_string == (int)9106;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8283);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15225, (int)-1, (int)16502);
			return 0;
		}
		var_264_bool = var_30_string == (int)9105;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15226, (int)-1, (int)16503);
			return 0;
		}
		var_271_bool = var_30_string == (int)6264;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5683, (int)6266, (int)6265);
			@@@var_0_object:AddReply((int)5686, (int)-1, (int)6268);
			return 0;
		}
		var_281_bool = var_30_string == (int)6266;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5685, (int)-1, (int)6267);
			return 0;
		}
		var_288_bool = var_30_string == (int)6255;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5675, (int)6257, (int)6256);
			@@@var_0_object:AddReply((int)5681, (int)6257, (int)6262);
			return 0;
		}
		var_298_bool = var_30_string == (int)6257;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5677, (int)6259, (int)6258);
			return 0;
		}
		var_305_bool = var_30_string == (int)6259;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_610(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5679, (int)-1, (int)6260);
			@@@var_0_object:AddReply((int)5680, (int)-1, (int)6261);
			return 0;
		}
		var_3_string = true;
		var_314_bool = 0;
		func_3643(var_314_bool);
		if(var_314_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x273";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3068();
		var_35_bool = var_31_bool == (int)6858;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_3162();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_3143();
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_3194();
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_3178(var_71_object);
		}
		var_97_bool = var_31_bool == (int)6860;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_3162();
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_3143();
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_3194();
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_3178(var_105_object);
		}
		var_107_bool = var_30_string == (int)6270;
		if(var_107_bool != 0) {
			var_108_bool = 0;
			var_108_bool = 0;
			var_109_bool = 0;
			var_109_bool = 0;
			var_110_bool = 0; var_111_object = Obj();
			var_111_object = var_1_object;
			func_3294(var_111_object);
			if(var_110_bool != 0) {
				var_118_bool = 0; var_119_object = Obj();
				var_119_object = var_1_object;
				func_3318(var_119_object);
				var_124_bool = var_118_bool == 0; //@nz
				if(var_124_bool != 0) {
					var_109_bool = 1;
				}
			}
			if(var_109_bool != 0) {
				var_125_bool = 0; var_126_object = Obj();
				var_126_object = var_1_object;
				func_3306(var_126_object);
				var_131_bool = var_125_bool == 0; //@nz
				if(var_131_bool != 0) {
					var_108_bool = 1;
				}
			}
			if(var_108_bool != 0) {
				var_132_string = "";
				func_1230(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5688);
				@@@var_0_object:ClearReplies();
				var_148_bool = 0; var_149_object = Obj();
				var_149_object = var_1_object;
				func_3258(var_149_object);
				var_154_bool = var_148_bool == 0; //@nz
				if(var_154_bool != 0) {
					@@@var_0_object:AddReply((int)6198, (int)6852, (int)6851);
				}
				var_158_bool = 0; var_159_object = Obj();
				var_159_object = var_1_object;
				func_3258(var_159_object);
				if(var_158_bool != 0) {
					@@@var_0_object:AddReply((int)5689, (int)6272, (int)6271);
				}
				return 0;
			}
		}
		var_164_bool = var_30_string == (int)6272;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_1230(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5691, (int)6274, (int)6273);
			return 0;
		}
		var_171_bool = var_30_string == (int)6274;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_1230(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5692);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6203, (int)6857, (int)6856);
			return 0;
		}
		var_178_bool = var_30_string == (int)6852;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_1230(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6200, (int)6854, (int)6853);
			return 0;
		}
		var_185_bool = var_30_string == (int)6854;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_1230(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6201);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6202, (int)6857, (int)6855);
			return 0;
		}
		var_192_bool = var_30_string == (int)6857;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_1230(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6204);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6205, (int)-1, (int)6858);
			@@@var_0_object:AddReply((int)6206, (int)-1, (int)6860);
			return 0;
		}
		var_3_string = true;
		var_201_bool = 0;
		func_3643(var_201_bool);
		if(var_201_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4df";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3068();
		var_35_bool = var_31_bool == (int)8255;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_3170();
		}
		var_39_bool = var_31_bool == (int)8256;
		if(var_39_bool != 0) {
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_3170();
		}
		var_43_bool = var_31_bool == (int)8263;
		if(var_43_bool != 0) {
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_3170();
		}
		var_47_bool = var_31_bool == (int)8264;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3170();
		}
		var_51_bool = var_31_bool == (int)8242;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_3168();
		}
		var_55_bool = var_31_bool == (int)8243;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_3168();
		}
		var_59_bool = var_31_bool == (int)8234;
		if(var_59_bool != 0) {
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_3168();
		}
		var_63_bool = var_31_bool == (int)8237;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_3168();
		}
		var_67_bool = var_30_string == (int)8248;
		if(var_67_bool != 0) {
			var_68_bool = 0; var_69_object = Obj();
			var_69_object = var_1_object;
			func_3347(var_69_object);
			if(var_68_bool != 0) {
				var_70_string = "";
				func_1646(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)7472);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)7473, (int)8250, (int)8249);
				@@@var_0_object:AddReply((int)7488, (int)8252, (int)8265);
				return 0;
			}
			var_92_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6943);
			@@@var_0_object:ClearReplies();
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_3342(var_95_object);
			if(var_94_bool != 0) {
				@@@var_0_object:AddReply((int)6944, (int)7651, (int)7650);
			}
			@@@var_0_object:AddReply((int)7464, (int)8240, (int)8239);
			@@@var_0_object:AddReply((int)7504, (int)8267, (int)8285);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0x66e";
		EMIT "Pop(1)";
		EMIT "Push((int) 9377)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9378)";
		EMIT "Push((int) 10304)";
		EMIT "Push((int) 10303)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9388)";
		EMIT "Push((int) 10304)";
		EMIT "Push((int) 10315)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9389)";
		EMIT "Push((int) 10318)";
		EMIT "Push((int) 10317)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_106_bool = var_30_string == (int)10318;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9390);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9391, (int)-1, (int)10319);
			return 0;
		}
		var_113_bool = var_30_string == (int)10304;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9380, (int)10306, (int)10305);
			@@@var_0_object:AddReply((int)9387, (int)10306, (int)10313);
			return 0;
		}
		var_123_bool = var_30_string == (int)10306;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9382, (int)10308, (int)10307);
			@@@var_0_object:AddReply((int)9386, (int)10308, (int)10311);
			return 0;
		}
		var_133_bool = var_30_string == (int)10308;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9384, (int)-1, (int)10309);
			@@@var_0_object:AddReply((int)9385, (int)-1, (int)10310);
			return 0;
		}
		var_143_bool = var_30_string == (int)8267;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7489);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7490, (int)8269, (int)8268);
			@@@var_0_object:AddReply((int)7500, (int)8269, (int)8280);
			@@@var_0_object:AddReply((int)7501, (int)8283, (int)8282);
			return 0;
		}
		var_156_bool = var_30_string == (int)8283;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7503, (int)-1, (int)8284);
			return 0;
		}
		var_163_bool = var_30_string == (int)8269;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7492, (int)8271, (int)8270);
			@@@var_0_object:AddReply((int)7499, (int)8271, (int)8278);
			return 0;
		}
		var_173_bool = var_30_string == (int)8271;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7493);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7494, (int)8273, (int)8272);
			@@@var_0_object:AddReply((int)7498, (int)8273, (int)8276);
			return 0;
		}
		var_183_bool = var_30_string == (int)8273;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7496, (int)-1, (int)8274);
			@@@var_0_object:AddReply((int)7497, (int)-1, (int)8275);
			return 0;
		}
		var_193_bool = var_30_string == (int)8240;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7465);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7466, (int)-1, (int)8241);
			return 0;
		}
		var_200_bool = var_30_string == (int)7651;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6945);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6946, (int)7653, (int)7652);
			@@@var_0_object:AddReply((int)7455, (int)8231, (int)8230);
			return 0;
		}
		var_210_bool = var_30_string == (int)8231;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7456);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7457, (int)8233, (int)8232);
			return 0;
		}
		var_217_bool = var_30_string == (int)8233;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7458);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7459, (int)-1, (int)8234);
			@@@var_0_object:AddReply((int)7460, (int)8236, (int)8235);
			return 0;
		}
		var_227_bool = var_30_string == (int)8236;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7461);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7462, (int)-1, (int)8237);
			return 0;
		}
		var_234_bool = var_30_string == (int)7653;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7454, (int)8238, (int)8229);
			@@@var_0_object:AddReply((int)7469, (int)8245, (int)8244);
			return 0;
		}
		var_244_bool = var_30_string == (int)8245;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7470);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7471, (int)8238, (int)8246);
			return 0;
		}
		var_251_bool = var_30_string == (int)8238;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7463);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7467, (int)-1, (int)8242);
			@@@var_0_object:AddReply((int)7468, (int)-1, (int)8243);
			return 0;
		}
		var_261_bool = var_30_string == (int)8250;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7475, (int)8252, (int)8251);
			@@@var_0_object:AddReply((int)7487, (int)-1, (int)8264);
			return 0;
		}
		var_271_bool = var_30_string == (int)8252;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7477, (int)8254, (int)8253);
			@@@var_0_object:AddReply((int)7481, (int)8258, (int)8257);
			return 0;
		}
		var_281_bool = var_30_string == (int)8258;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7483, (int)8260, (int)8259);
			@@@var_0_object:AddReply((int)7486, (int)-1, (int)8263);
			return 0;
		}
		var_291_bool = var_30_string == (int)8260;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7484);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7485, (int)8254, (int)8261);
			return 0;
		}
		var_298_bool = var_30_string == (int)8254;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_1646(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7479, (int)-1, (int)8255);
			@@@var_0_object:AddReply((int)7480, (int)-1, (int)8256);
			return 0;
		}
		var_3_string = true;
		var_307_bool = 0;
		func_3643(var_307_bool);
		if(var_307_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x67f";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_3068();
		var_35_bool = var_30_string == (int)10996;
		if(var_35_bool != 0) {
			var_36_bool = 0; var_37_object = Obj();
			var_37_object = var_1_object;
			func_3480(var_37_object);
			if(var_36_bool != 0) {
				var_44_object = Obj(); var_45_object = Obj();
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_3246();
				var_48_string = "";
				func_2455(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9978);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9979, (int)10998, (int)10997);
				@@@var_0_object:AddReply((int)9990, (int)10998, (int)11009);
				@@@var_0_object:AddReply((int)9991, (int)10998, (int)11011);
				return 0;
			}
			var_73_string = "";
			func_2455(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15319, (int)-1, (int)16557);
			return 0;
		}
		var_79_bool = var_30_string == (int)10998;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_2455(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9981, (int)11000, (int)10999);
			@@@var_0_object:AddReply((int)9988, (int)11000, (int)11006);
			@@@var_0_object:AddReply((int)9989, (int)-1, (int)11008);
			return 0;
		}
		var_92_bool = var_30_string == (int)11000;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_2455(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9983, (int)-1, (int)11001);
			@@@var_0_object:AddReply((int)9984, (int)11003, (int)11002);
			return 0;
		}
		var_102_bool = var_30_string == (int)11003;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_2455(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9986, (int)-1, (int)11004);
			@@@var_0_object:AddReply((int)9987, (int)-1, (int)11005);
			return 0;
		}
		var_3_string = true;
		var_111_bool = 0;
		func_3643(var_111_bool);
		if(var_111_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9a8";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	if((int)1 != 0) {
		func_3068();
		var_35_bool = var_31_int == (int)12400;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_3252();
		}
		var_41_bool = var_30_int == (int)12399;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2770(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11211);
			@@@var_0_object:ClearReplies();
			var_58_bool = 0;
			var_58_bool = 1;
			var_59_bool = 0;
			var_59_bool = 0;
			var_60_bool = 0; var_61_object = Obj();
			var_61_object = var_1_object;
			func_3362(var_61_object);
			if(var_60_bool != 0) {
				var_68_bool = 0; var_69_object = Obj();
				var_69_object = var_1_object;
				func_3504(var_69_object);
				if(var_68_bool != 0) {
					var_59_bool = 1;
				}
			}
			if(var_59_bool != 1) {
				var_74_bool = 0;
				var_74_bool = 0;
				var_75_bool = 0; var_76_object = Obj();
				var_76_object = var_1_object;
				func_3492(var_76_object);
				if(var_75_bool != 0) {
					var_81_bool = 0; var_82_object = Obj();
					var_82_object = var_1_object;
					func_3504(var_82_object);
					if(var_81_bool != 0) {
						var_74_bool = 1;
					}
				}
				if(var_74_bool != 1) {
					var_58_bool = 0;
				}
			}
			if(var_58_bool != 0) {
				@@@var_0_object:AddReply((int)11212, (int)12401, (int)12400);
			}
			@@@var_0_object:AddReply((int)15335, (int)-1, (int)16558);
			return 0;
		}
		var_90_bool = var_30_int == (int)12401;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_2770(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11214, (int)12403, (int)12402);
			@@@var_0_object:AddReply((int)11223, (int)12413, (int)12412);
			return 0;
		}
		var_100_bool = var_30_int == (int)12413;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_2770(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11224);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11225, (int)12405, (int)12414);
			return 0;
		}
		var_107_bool = var_30_int == (int)12403;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_2770(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11215);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11216, (int)12405, (int)12404);
			@@@var_0_object:AddReply((int)11220, (int)12409, (int)12408);
			return 0;
		}
		var_117_bool = var_30_int == (int)12409;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_2770(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11222, (int)12405, (int)12410);
			return 0;
		}
		var_124_bool = var_30_int == (int)12405;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_2770(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11218, (int)-1, (int)12406);
			@@@var_0_object:AddReply((int)11219, (int)-1, (int)12407);
			return 0;
		}
		var_3_string = true;
		var_133_bool = 0;
		func_3643(var_133_bool);
		if(var_133_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xae3";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_3645();
	var_31_bool = 0;
	func_2985(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_35_string = "";
	func_3050("Neutral");
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


func_2304(var_0_object, var_475_int, var_476_object)
{
	var_478_object = Obj(); var_479_bool = 0; var_480_int = 0; var_481_bool = 0; var_482_object = Obj(); var_483_bool = 0; var_484_int = 0; var_485_bool = 0;
	var_0_object = var_476_object;
	var_486_bool = 0; var_487_object = Obj();
	var_476_object = var_487_object;
	func_2990(var_486_bool, var_487_object);
	var_488_bool = var_486_bool == 0; //@nz
	if(var_488_bool != 0) {
		var_475_int = -2;
		return 8;
	}
	CreateDialog(var_482_object);
	var_489_int = 0;
	func_3639(var_489_int);
	@@var_482_object:SetNPCName(var_489_int);
	var_490_string = "";
	func_3641(var_490_string);
	@@var_482_object:SetPhoto(var_490_string);
	var_491_int = 0;
	func_3622(var_491_int);
	@@var_482_object:SetPlayerName(var_491_int);
	IsOverrideActive(var_483_bool);
	var_492_bool = var_483_bool;
	if(var_492_bool != 0) {
		var_475_int = -2;
		return 8;
	}
	DoDialog(var_482_object);
	var_493_object = Obj(); var_494_object = Obj();
	var_476_object = var_493_object;
	var_482_object = var_494_object;
	TaskCall(11);
	func_2367(var_495_object, var_496_object, var_497_string, var_498_bool, var_493_object, var_494_object);
	TaskReturn();
	@@var_482_object:IsDialogEnd(var_485_bool);
	
Label_2349:
	var_538_bool = var_485_bool == 0; //@nz
	if(var_538_bool != 0) {
		sync();
		@@var_482_object:IsDialogEnd(var_485_bool);
		goto Label_2349;
	}
	var_476_object = Obj();
	func_3046();
	StopDialog(var_482_object);
	@@var_482_object:GetReturnValue((int)-1);
	var_484_int = var_475_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3330(var_99_bool)
{
	var_101_int = 0; var_102_string = "";
	func_3085(var_101_int, "d1q01FirstGeorgVisit");
	var_106_bool = var_101_int == (int)1;
	if(var_106_bool != 0) {
		var_99_bool = 1;
		return 0;
	}
	var_99_bool = 0;
	return 0;
}


func_3075(var_70_cvector, var_71_cvector)
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


func_3589(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0;
	GetMainOutdoorScene(var_82_object);
	var_84_bool = var_82_object == 0; //@ne
	if(var_84_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_82_object:GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	var_86_bool = var_83_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_88_int = "Warning: outdoor scene locator " + var_73_string;
		var_90_int = var_88_int + " doesnt exist";
		Trace(var_90_int);
	}
	@@var_82_object:GetMap(var_72_object);
	var_91_bool = var_72_object == 0; //@ne
	if(var_91_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	@@var_72_object:SetMapParams(var_93_float, var_94_float, var_74_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3085(var_62_int, var_63_string)
{
	var_64_int = 0; var_65_int = 0;
	GetVariable(var_63_string, var_65_int);
	var_65_int = var_62_int;
	return 2;
}


func_3342(var_94_bool)
{
	var_94_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_3090(var_42_string, var_43_bool)
{
	var_44_object = Obj(); var_45_object = Obj();
	FindActor(var_45_object, var_42_string);
	var_46_bool = var_45_object == 0; //@nz
	if(var_46_bool != 0) {
		var_48_int = "Door " + var_42_string;
		var_50_int = var_48_int + " not found";
		Trace(var_50_int);
	}
	@@var_45_object:SetProperty("locked", var_43_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3347(var_68_bool)
{
	var_68_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_3352(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj();
	var_141_object = var_143_object;
	func_3540(var_143_object);
	if(var_142_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


func_3106(var_67_float)
{
	var_68_float = 0; var_69_float = 0;
	GetGameTime(var_69_float);
	var_69_float = var_67_float;
	return 2;
}


func_3362(var_60_bool)
{
	var_62_int = 0; var_63_string = "";
	func_3085(var_62_int, "d4q03");
	var_67_bool = var_62_int == (int)2;
	if(var_67_bool != 0) {
		var_60_bool = 1;
		return 0;
	}
	var_60_bool = 0;
	return 0;
}


func_3622(var_88_int)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable("player", var_90_int);
	var_93_bool = var_90_int == (int)0;
	if(var_93_bool != 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0xe35";
	}
	var_95_bool = var_90_int == (int)1;
	if(var_95_bool != 0) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
	return 2;
}


func_3111(var_143_int)
{
	var_144_float = 0; var_145_float = 0;
	GetGameTime(var_145_float);
	var_147_int = 0;
	var_147_int = var_145_float / (int)24;
	var_143_int = (int)1 + var_147_int;
	return 2;
}


func_3374(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_object = Obj();
	var_119_object = var_121_object;
	func_3551(var_121_object);
	if(var_120_bool != 0) {
		var_118_bool = 1;
		return 0;
	}
	var_118_bool = 0;
	return 0;
}


func_3120(var_123_int)
{
	var_124_float = 0; var_125_float = 0;
	GetGameTime(var_125_float);
	var_126_int = 0;
	var_125_float = var_126_int;
	var_123_int = var_126_int % (int)24;
	return 2;
}


func_49(var_0_object, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_0_object = var_35_object;
	var_45_bool = 0; var_46_object = Obj();
	var_35_object = var_46_object;
	func_2990(var_45_bool, var_46_object);
	var_85_bool = var_45_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	CreateDialog(var_41_object);
	var_86_int = 0;
	func_3639(var_86_int);
	@@var_41_object:SetNPCName(var_86_int);
	var_87_string = "";
	func_3641(var_87_string);
	@@var_41_object:SetPhoto(var_87_string);
	var_88_int = 0;
	func_3622(var_88_int);
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
	func_3046();
	StopDialog(var_41_object);
	@@var_41_object:GetReturnValue((int)-1);
	var_43_int = var_34_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1073(var_0_object, var_155_int, var_156_object)
{
	var_158_object = Obj(); var_159_bool = 0; var_160_int = 0; var_161_bool = 0; var_162_object = Obj(); var_163_bool = 0; var_164_int = 0; var_165_bool = 0;
	var_0_object = var_156_object;
	var_166_bool = 0; var_167_object = Obj();
	var_156_object = var_167_object;
	func_2990(var_166_bool, var_167_object);
	var_168_bool = var_166_bool == 0; //@nz
	if(var_168_bool != 0) {
		var_155_int = -2;
		return 8;
	}
	CreateDialog(var_162_object);
	var_169_int = 0;
	func_3639(var_169_int);
	@@var_162_object:SetNPCName(var_169_int);
	var_170_string = "";
	func_3641(var_170_string);
	@@var_162_object:SetPhoto(var_170_string);
	var_171_int = 0;
	func_3622(var_171_int);
	@@var_162_object:SetPlayerName(var_171_int);
	IsOverrideActive(var_163_bool);
	var_172_bool = var_163_bool;
	if(var_172_bool != 0) {
		var_155_int = -2;
		return 8;
	}
	DoDialog(var_162_object);
	var_173_object = Obj(); var_174_object = Obj();
	var_156_object = var_173_object;
	var_162_object = var_174_object;
	TaskCall(7);
	func_1136(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object);
	TaskReturn();
	@@var_162_object:IsDialogEnd(var_165_bool);
	
Label_1118:
	var_231_bool = var_165_bool == 0; //@nz
	if(var_231_bool != 0) {
		sync();
		@@var_162_object:IsDialogEnd(var_165_bool);
		goto Label_1118;
	}
	var_156_object = Obj();
	func_3046();
	StopDialog(var_162_object);
	@@var_162_object:GetReturnValue((int)-1);
	var_164_int = var_155_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3639(var_86_int)
{
	var_86_int = 2873;
	return 0;
}


func_3128(var_141_bool, var_142_int)
{
	var_143_int = 0;
	func_3111(var_143_int);
	var_141_bool = var_143_int == var_142_int;
	return 0;
}


func_2617(var_0_object, var_542_int, var_543_object)
{
	var_545_object = Obj(); var_546_bool = 0; var_547_int = 0; var_548_bool = 0; var_549_object = Obj(); var_550_bool = 0; var_551_int = 0; var_552_bool = 0;
	var_0_object = var_543_object;
	var_553_bool = 0; var_554_object = Obj();
	var_543_object = var_554_object;
	func_2990(var_553_bool, var_554_object);
	var_555_bool = var_553_bool == 0; //@nz
	if(var_555_bool != 0) {
		var_542_int = -2;
		return 8;
	}
	CreateDialog(var_549_object);
	var_556_int = 0;
	func_3639(var_556_int);
	@@var_549_object:SetNPCName(var_556_int);
	var_557_string = "";
	func_3641(var_557_string);
	@@var_549_object:SetPhoto(var_557_string);
	var_558_int = 0;
	func_3622(var_558_int);
	@@var_549_object:SetPlayerName(var_558_int);
	IsOverrideActive(var_550_bool);
	var_559_bool = var_550_bool;
	if(var_559_bool != 0) {
		var_542_int = -2;
		return 8;
	}
	DoDialog(var_549_object);
	var_560_object = Obj(); var_561_object = Obj();
	var_543_object = var_560_object;
	var_549_object = var_561_object;
	TaskCall(13);
	func_2680(var_562_object, var_563_object, var_564_string, var_565_bool, var_560_object, var_561_object);
	TaskReturn();
	@@var_549_object:IsDialogEnd(var_552_bool);
	
Label_2662:
	var_610_bool = var_552_bool == 0; //@nz
	if(var_610_bool != 0) {
		sync();
		@@var_549_object:IsDialogEnd(var_552_bool);
		goto Label_2662;
	}
	var_543_object = Obj();
	func_3046();
	StopDialog(var_549_object);
	@@var_549_object:GetReturnValue((int)-1);
	var_551_int = var_542_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3641(var_87_string)
{
	var_87_string = "ui/NPC_Notkin.png";
	return 0;
}


func_3643(var_33_bool)
{
	var_33_bool = 1;
	return 0;
}


func_3384(var_153_bool)
{
	var_155_int = 0; var_156_string = "";
	func_3085(var_155_int, "KnowMark");
	var_158_bool = var_155_int == (int)1;
	if(var_158_bool != 0) {
		var_153_bool = 1;
		return 0;
	}
	var_153_bool = 0;
	return 0;
}


func_3645()
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_3134(var_612_bool)
{
	var_613_bool = 0; var_614_bool = 0;
	var_615_string = "";
	func_3050("No");
	lshWaitForAnimEnd(var_614_bool);
	var_614_bool = var_612_bool;
	return 2;
}


func_2367(var_0_object, var_1_object, var_2_object, var_3_object, var_493_object, var_494_object)
{
	var_0_object = var_494_object;
	var_1_object = var_493_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_500_bool = 0; var_501_object = Obj();
		var_501_object = var_1_object;
		func_3480(var_501_object);
		if(var_500_bool != 0) {
			var_506_object = Obj(); var_507_object = Obj();
			var_506_object = var_1_object;
			var_507_object = var_0_object;
			func_3246();
			var_510_string = "";
			func_2455(var_494_object, "Neutral");
			@@@var_0_object:SetMessage((int)9978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9979, (int)10998, (int)10997);
			@@@var_0_object:AddReply((int)9990, (int)10998, (int)11009);
			@@@var_0_object:AddReply((int)9991, (int)10998, (int)11011);
		} else {
				var_533_string = "";
				func_2455(var_494_object, "Neutral");
				@@@var_0_object:SetMessage((int)15318);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15319, (int)-1, (int)16557);
				goto Label_2425;
		}
	}
Label_2425:
	var_525_bool = 0;
	func_3643(var_525_bool);
	if(var_525_bool != 0) {

	Label_2429:
		lshWaitForAnimEnd();
		var_526_object = var_3_object;
		if(var_526_object != 0) {
		} else {
			var_527_string = "";
			var_527_string = var_2_object;
			func_3050(var_527_string);
			goto Label_2429;
	}
		PlayAnimation("all", "idle");

	Label_2444:
		WaitForAnimEnd();
		var_530_object = var_3_object;
		if(var_530_object != 0) {
			goto Label_2454;
		}
		PlayAnimation("all", "idle");
		goto Label_2444;

	}
	goto Label_2454;
	
Label_2454:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x943";


func_3649(var_31_object)
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
	func_3128(var_141_bool, (int)1);
	if(var_141_bool != 0) {
		var_149_int = 0; var_150_string = "";
		func_3085(var_149_int, "d1q01");
		var_154_bool = var_149_int == (int)1;
		if(var_154_bool != 0) {
			var_155_int = 0; var_156_object = Obj();
			var_31_object = var_156_object;
			TaskCall(6);
			func_1073(var_157_object, var_155_int, var_156_object);
			TaskReturn();
			return 0;
		}
		var_233_int = 0; var_234_object = Obj();
		var_31_object = var_234_object;
		TaskCall(4);
		func_343(var_235_object, var_233_int, var_234_object);
		TaskReturn();
		return 0;
	}
	var_409_bool = 0; var_410_int = 0;
	func_3128(var_409_bool, (int)2);
	if(var_409_bool != 0) {
		var_411_int = 0; var_412_object = Obj();
		var_31_object = var_412_object;
		TaskCall(8);
		func_1465(var_413_object, var_411_int, var_412_object);
		TaskReturn();
		return 0;
	}
	var_473_bool = 0; var_474_int = 0;
	func_3128(var_473_bool, (int)3);
	if(var_473_bool != 0) {
		var_475_int = 0; var_476_object = Obj();
		var_31_object = var_476_object;
		TaskCall(10);
		func_2304(var_477_object, var_475_int, var_476_object);
		TaskReturn();
		return 0;
	}
	var_540_bool = 0; var_541_int = 0;
	func_3128(var_540_bool, (int)4);
	if(var_540_bool != 0) {
		var_542_int = 0; var_543_object = Obj();
		var_31_object = var_543_object;
		TaskCall(12);
		func_2617(var_544_object, var_542_int, var_543_object);
		TaskReturn();
		return 0;
	}
	func_3134((bool)0);
	return 0;
}


func_3396(var_169_bool)
{
	var_171_int = 0; var_172_string = "";
	func_3085(var_171_int, "KnowGrif");
	var_174_bool = var_171_int == (int)1;
	if(var_174_bool != 0) {
		var_169_bool = 1;
		return 0;
	}
	var_169_bool = 0;
	return 0;
}


func_3143()
{
	var_42_string = ""; var_43_bool = 0;
	func_3090("warehouse_rubin@door1", (bool)0);
	return 0;
}


func_3150()
{
	SetVariable("ood1Notkin1", (int)1);
	return 0;
}


func_3408(var_159_bool)
{
	var_161_int = 0; var_162_string = "";
	func_3085(var_161_int, "ood1Notkin3");
	var_164_bool = var_161_int == (int)0;
	if(var_164_bool != 0) {
		var_159_bool = 1;
		return 0;
	}
	var_159_bool = 0;
	return 0;
}


func_3156()
{
	SetVariable("ood1Notkin2", (int)1);
	return 0;
}


func_343(var_0_object, var_233_int, var_234_object)
{
	var_236_object = Obj(); var_237_bool = 0; var_238_int = 0; var_239_bool = 0; var_240_object = Obj(); var_241_bool = 0; var_242_int = 0; var_243_bool = 0;
	var_0_object = var_234_object;
	var_244_bool = 0; var_245_object = Obj();
	var_234_object = var_245_object;
	func_2990(var_244_bool, var_245_object);
	var_246_bool = var_244_bool == 0; //@nz
	if(var_246_bool != 0) {
		var_233_int = -2;
		return 8;
	}
	CreateDialog(var_240_object);
	var_247_int = 0;
	func_3639(var_247_int);
	@@var_240_object:SetNPCName(var_247_int);
	var_248_string = "";
	func_3641(var_248_string);
	@@var_240_object:SetPhoto(var_248_string);
	var_249_int = 0;
	func_3622(var_249_int);
	@@var_240_object:SetPlayerName(var_249_int);
	IsOverrideActive(var_241_bool);
	var_250_bool = var_241_bool;
	if(var_250_bool != 0) {
		var_233_int = -2;
		return 8;
	}
	DoDialog(var_240_object);
	var_251_object = Obj(); var_252_object = Obj();
	var_234_object = var_251_object;
	var_240_object = var_252_object;
	TaskCall(5);
	func_406(var_253_object, var_254_object, var_255_string, var_256_bool, var_251_object, var_252_object);
	TaskReturn();
	@@var_240_object:IsDialogEnd(var_243_bool);
	
Label_388:
	var_407_bool = var_243_bool == 0; //@nz
	if(var_407_bool != 0) {
		sync();
		@@var_240_object:IsDialogEnd(var_243_bool);
		goto Label_388;
	}
	var_234_object = Obj();
	func_3046();
	StopDialog(var_240_object);
	@@var_240_object:GetReturnValue((int)-1);
	var_242_int = var_233_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3162()
{
	SetVariable("ood1NotkinMQ1", (int)1);
	return 0;
}


func_3420(var_175_bool)
{
	var_177_int = 0; var_178_string = "";
	func_3085(var_177_int, "ood1Notkin4");
	var_180_bool = var_177_int == (int)0;
	if(var_180_bool != 0) {
		var_175_bool = 1;
		return 0;
	}
	var_175_bool = 0;
	return 0;
}


func_3168()
{
	return 0;
}


func_610(var_2_object, var_82_string)
{
	var_83_bool = 0;
	func_3643(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_bool = var_82_string == var_2_object;
	if(var_85_bool != 0) {
		return 0;
	}
	var_86_string = "";
	var_82_string = var_86_string;
	func_3050(var_86_string);
	var_2_object = var_82_string;
	return 0;
}


func_3170()
{
	return 0;
}


func_3172()
{
	SetVariable("KnowTwoSouls", (int)1);
	return 0;
}


func_3432(var_191_bool)
{
	var_193_int = 0; var_194_string = "";
	func_3085(var_193_int, "ood1Notkin5");
	var_196_bool = var_193_int == (int)0;
	if(var_196_bool != 0) {
		var_191_bool = 1;
		return 0;
	}
	var_191_bool = 0;
	return 0;
}


func_3178(var_71_object)
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0;
	func_3572(Obj());
	var_75_object = var_72_object;
	func_3589(var_72_object, "pt_map_rubin", (float)2);
	var_95_object = Obj();
	func_3572(var_95_object);
	@@var_71_object:ShowMap(var_95_object);
	return 0;
}


func_1646(var_2_object, var_70_string)
{
	var_71_bool = 0;
	func_3643(var_71_bool);
	var_72_bool = var_71_bool == 0; //@nz
	if(var_72_bool != 0) {
		return 0;
	}
	var_73_bool = var_70_string == var_2_object;
	if(var_73_bool != 0) {
		return 0;
	}
	var_74_string = "";
	var_70_string = var_74_string;
	func_3050(var_74_string);
	var_2_object = var_70_string;
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_97_object, var_98_object)
{
	var_0_object = var_98_object;
	var_1_object = var_97_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_104_object = Obj(); var_105_object = Obj();
		var_104_object = var_1_object;
		var_105_object = var_0_object;
		func_3210();
		var_108_string = "";
		func_175(var_98_object, "Neutral");
		@@@var_0_object:SetMessage((int)205);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)207, (int)256, (int)245);
		@@@var_0_object:AddReply((int)206, (int)246, (int)244);
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	var_130_bool = 0;
	func_3643(var_130_bool);
	if(var_130_bool != 0) {

	Label_149:
		lshWaitForAnimEnd();
		var_131_object = var_3_object;
		if(var_131_object != 0) {
		} else {
			var_132_string = "";
			var_132_string = var_2_object;
			func_3050(var_132_string);
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


func_1136(var_0_object, var_1_object, var_2_object, var_3_object, var_173_object, var_174_object)
{
	var_0_object = var_174_object;
	var_1_object = var_173_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_180_bool = 0;
		var_180_bool = 0;
		var_181_bool = 0;
		var_181_bool = 0;
		var_182_bool = 0; var_183_object = Obj();
		var_183_object = var_1_object;
		func_3294(var_183_object);
		if(var_182_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_3318(var_189_object);
			var_194_bool = var_188_bool == 0; //@nz
			if(var_194_bool != 0) {
				var_181_bool = 1;
			}
		}
		if(var_181_bool != 0) {
			var_195_bool = 0; var_196_object = Obj();
			var_196_object = var_1_object;
			func_3306(var_196_object);
			var_201_bool = var_195_bool == 0; //@nz
			if(var_201_bool != 0) {
				var_180_bool = 1;
			}
		}
		if(var_180_bool != 0) {
			var_202_string = "";
			func_1230(var_174_object, "Neutral");
			@@@var_0_object:SetMessage((int)5688);
			@@@var_0_object:ClearReplies();
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_3258(var_209_object);
			var_214_bool = var_208_bool == 0; //@nz
			if(var_214_bool != 0) {
				@@@var_0_object:AddReply((int)6198, (int)6852, (int)6851);
			}
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_3258(var_219_object);
			if(var_218_bool != 0) {
				@@@var_0_object:AddReply((int)5689, (int)6272, (int)6271);
			}
		} else {
				return 0;
		}
	}
	var_223_bool = 0;
	func_3643(var_223_bool);
	if(var_223_bool != 0) {

	Label_1204:
		lshWaitForAnimEnd();
		var_224_object = var_3_object;
		if(var_224_object != 0) {
		} else {
			var_225_string = "";
			var_225_string = var_2_object;
			func_3050(var_225_string);
			goto Label_1204;
	}
		PlayAnimation("all", "idle");

	Label_1219:
		WaitForAnimEnd();
		var_228_object = var_3_object;
		if(var_228_object != 0) {
			goto Label_1229;
		}
		PlayAnimation("all", "idle");
		goto Label_1219;

	}
	goto Label_1229;
	
Label_1229:
	return 0;
	
}
EMIT "GOTO 0x474";


func_3444(var_207_bool)
{
	var_209_int = 0; var_210_string = "";
	func_3085(var_209_int, "ood1Notkin6");
	var_212_bool = var_209_int == (int)0;
	if(var_212_bool != 0) {
		var_207_bool = 1;
		return 0;
	}
	var_207_bool = 0;
	return 0;
}


func_2680(var_0_object, var_1_object, var_2_object, var_3_object, var_560_object, var_561_object)
{
	var_0_object = var_561_object;
	var_1_object = var_560_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_567_string = "";
		func_2770(var_561_object, "Neutral");
		@@@var_0_object:SetMessage((int)11211);
		@@@var_0_object:ClearReplies();
		var_573_bool = 0;
		var_573_bool = 1;
		var_574_bool = 0;
		var_574_bool = 0;
		var_575_bool = 0; var_576_object = Obj();
		var_576_object = var_1_object;
		func_3362(var_576_object);
		if(var_575_bool != 0) {
			var_581_bool = 0; var_582_object = Obj();
			var_582_object = var_1_object;
			func_3504(var_582_object);
			if(var_581_bool != 0) {
				var_574_bool = 1;
			}
		}
		if(var_574_bool != 1) {
			var_587_bool = 0;
			var_587_bool = 0;
			var_588_bool = 0; var_589_object = Obj();
			var_589_object = var_1_object;
			func_3492(var_589_object);
			if(var_588_bool != 0) {
				var_594_bool = 0; var_595_object = Obj();
				var_595_object = var_1_object;
				func_3504(var_595_object);
				if(var_594_bool != 0) {
					var_587_bool = 1;
				}
			}
			if(var_587_bool != 1) {
				var_573_bool = 0;
			}
		}
		if(var_573_bool != 0) {
			@@@var_0_object:AddReply((int)11212, (int)12401, (int)12400);
		}
		@@@var_0_object:AddReply((int)15335, (int)-1, (int)16558);
		goto Label_2740;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa7c";
	}
Label_2740:
	var_602_bool = 0;
	func_3643(var_602_bool);
	if(var_602_bool != 0) {

	Label_2744:
		lshWaitForAnimEnd();
		var_603_object = var_3_object;
		if(var_603_object != 0) {
		} else {
			var_604_string = "";
			var_604_string = var_2_object;
			func_3050(var_604_string);
			goto Label_2744;
	}
		PlayAnimation("all", "idle");

	Label_2759:
		WaitForAnimEnd();
		var_607_object = var_3_object;
		if(var_607_object != 0) {
			goto Label_2769;
		}
		PlayAnimation("all", "idle");
		goto Label_2759;
	}
	goto Label_2769;
	
Label_2769:
	return 0;
	
}


func_3194()
{
	var_54_object = Obj(); var_55_object = Obj();
	func_3572(Obj());
	var_56_object = var_55_object;
	var_67_float = 0;
	func_3106(var_67_float);
	@@var_55_object:AddMark("d1q01NotkinAboutRubin", "pt_map_rubin", (int)1, (int)8648, var_67_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3456(var_223_bool)
{
	var_225_int = 0; var_226_string = "";
	func_3085(var_225_int, "ood1Notkin7");
	var_228_bool = var_225_int == (int)0;
	if(var_228_bool != 0) {
		var_223_bool = 1;
		return 0;
	}
	var_223_bool = 0;
	return 0;
}


func_3210()
{
	SetVariable("KnowNotkin", (int)1);
	return 0;
}


func_3468(var_201_bool)
{
	var_203_int = 0; var_204_string = "";
	func_3085(var_203_int, "KnowMishka");
	var_206_bool = var_203_int == (int)1;
	if(var_206_bool != 0) {
		var_201_bool = 1;
		return 0;
	}
	var_201_bool = 0;
	return 0;
}


func_3216()
{
	SetVariable("ood1Notkin3", (int)1);
	return 0;
}


func_3222()
{
	SetVariable("ood1Notkin4", (int)1);
	return 0;
}


func_406(var_0_object, var_1_object, var_2_object, var_3_object, var_251_object, var_252_object)
{
	var_0_object = var_252_object;
	var_1_object = var_251_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_258_string = "";
		func_610(var_252_object, "Neutral");
		@@@var_0_object:SetMessage((int)8255);
		@@@var_0_object:ClearReplies();
		var_264_bool = 0;
		var_264_bool = 0;
		var_265_bool = 0; var_266_object = Obj();
		var_266_object = var_1_object;
		func_3330(var_266_object);
		if(var_265_bool != 0) {
			var_271_bool = 0; var_272_object = Obj();
			var_272_object = var_1_object;
			func_3270(var_272_object);
			if(var_271_bool != 0) {
				var_264_bool = 1;
			}
		}
		if(var_264_bool != 0) {
			@@@var_0_object:AddReply((int)8256, (int)6255, (int)9079);
		}
		var_280_bool = 0;
		var_280_bool = 1;
		var_281_bool = 0;
		var_281_bool = 0;
		var_282_bool = 0; var_283_object = Obj();
		var_283_object = var_1_object;
		func_3374(var_282_bool, var_283_object);
		if(var_282_bool != 0) {
			var_297_bool = 0; var_298_object = Obj();
			var_298_object = var_1_object;
			func_3282(var_298_object);
			if(var_297_bool != 0) {
				var_281_bool = 1;
			}
		}
		if(var_281_bool != 1) {
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_3352(var_304_bool, var_305_object);
			if(var_304_bool != 0) {
				var_311_bool = 0; var_312_object = Obj();
				var_312_object = var_1_object;
				func_3282(var_312_object);
				if(var_311_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 1) {
				var_280_bool = 0;
			}
		}
		if(var_280_bool != 0) {
			@@@var_0_object:AddReply((int)8257, (int)6264, (int)9080);
		}
		var_316_bool = 0;
		var_316_bool = 0;
		var_317_bool = 0; var_318_object = Obj();
		var_318_object = var_1_object;
		func_3384(var_318_object);
		if(var_317_bool != 0) {
			var_323_bool = 0; var_324_object = Obj();
			var_324_object = var_1_object;
			func_3408(var_324_object);
			if(var_323_bool != 0) {
				var_316_bool = 1;
			}
		}
		if(var_316_bool != 0) {
			@@@var_0_object:AddReply((int)8273, (int)9105, (int)9096);
		}
		var_332_bool = 0;
		var_332_bool = 0;
		var_333_bool = 0; var_334_object = Obj();
		var_334_object = var_1_object;
		func_3396(var_334_object);
		if(var_333_bool != 0) {
			var_339_bool = 0; var_340_object = Obj();
			var_340_object = var_1_object;
			func_3420(var_340_object);
			if(var_339_bool != 0) {
				var_332_bool = 1;
			}
		}
		if(var_332_bool != 0) {
			@@@var_0_object:AddReply((int)8274, (int)9106, (int)9097);
		}
		var_348_bool = 0;
		var_348_bool = 0;
		var_349_bool = 0; var_350_object = Obj();
		var_350_object = var_1_object;
		func_3528(var_350_object);
		if(var_349_bool != 0) {
			var_355_bool = 0; var_356_object = Obj();
			var_356_object = var_1_object;
			func_3432(var_356_object);
			if(var_355_bool != 0) {
				var_348_bool = 1;
			}
		}
		if(var_348_bool != 0) {
			@@@var_0_object:AddReply((int)8277, (int)9107, (int)9100);
		}
		var_364_bool = 0;
		var_364_bool = 0;
		var_365_bool = 0; var_366_object = Obj();
		var_366_object = var_1_object;
		func_3468(var_366_object);
		if(var_365_bool != 0) {
			var_371_bool = 0; var_372_object = Obj();
			var_372_object = var_1_object;
			func_3444(var_372_object);
			if(var_371_bool != 0) {
				var_364_bool = 1;
			}
		}
		if(var_364_bool != 0) {
			@@@var_0_object:AddReply((int)8279, (int)9108, (int)9102);
		}
		var_380_bool = 0;
		var_380_bool = 0;
		var_381_bool = 0; var_382_object = Obj();
		var_382_object = var_1_object;
		func_3516(var_382_object);
		if(var_381_bool != 0) {
			var_387_bool = 0; var_388_object = Obj();
			var_388_object = var_1_object;
			func_3456(var_388_object);
			if(var_387_bool != 0) {
				var_380_bool = 1;
			}
		}
		if(var_380_bool != 0) {
			@@@var_0_object:AddReply((int)8280, (int)9109, (int)9103);
		}
		@@@var_0_object:AddReply((int)15221, (int)-1, (int)16498);
		goto Label_580;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19a";
	}
Label_580:
	var_399_bool = 0;
	func_3643(var_399_bool);
	if(var_399_bool != 0) {

	Label_584:
		lshWaitForAnimEnd();
		var_400_object = var_3_object;
		if(var_400_object != 0) {
		} else {
			var_401_string = "";
			var_401_string = var_2_object;
			func_3050(var_401_string);
			goto Label_584;
	}
		PlayAnimation("all", "idle");

	Label_599:
		WaitForAnimEnd();
		var_404_object = var_3_object;
		if(var_404_object != 0) {
			goto Label_609;
		}
		PlayAnimation("all", "idle");
		goto Label_599;
	}
	goto Label_609;
	
Label_609:
	return 0;
	
}


func_2455(var_2_object, var_48_string)
{
	var_49_bool = 0;
	func_3643(var_49_bool);
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
	func_3050(var_52_string);
	var_2_object = var_48_string;
	return 0;
}


func_3480(var_36_bool)
{
	var_38_int = 0; var_39_string = "";
	func_3085(var_38_int, "ood3Notkin1");
	var_43_bool = var_38_int == (int)0;
	if(var_43_bool != 0) {
		var_36_bool = 1;
		return 0;
	}
	var_36_bool = 0;
	return 0;
}


func_3228()
{
	SetVariable("ood1Notkin5", (int)1);
	return 0;
}


func_2973(var_31_bool, var_32_object)
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


func_3234()
{
	SetVariable("ood1Notkin6", (int)1);
	return 0;
}


func_3492(var_75_bool)
{
	var_77_int = 0; var_78_string = "";
	func_3085(var_77_int, "d4q03");
	var_80_bool = var_77_int == (int)3;
	if(var_80_bool != 0) {
		var_75_bool = 1;
		return 0;
	}
	var_75_bool = 0;
	return 0;
}


func_3240()
{
	SetVariable("ood1Notkin7", (int)1);
	return 0;
}


func_2985(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_3246()
{
	SetVariable("ood3Notkin1", (int)1);
	return 0;
}


func_175(var_2_object, var_40_string)
{
	var_41_bool = 0;
	func_3643(var_41_bool);
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
	func_3050(var_44_string);
	var_2_object = var_40_string;
	return 0;
}


func_2990(var_45_bool, var_46_object)
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
	func_3075(var_70_cvector, var_71_cvector);
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


func_3504(var_68_bool)
{
	var_70_int = 0; var_71_string = "";
	func_3085(var_70_int, "ood4Notkin1");
	var_73_bool = var_70_int == (int)0;
	if(var_73_bool != 0) {
		var_68_bool = 1;
		return 0;
	}
	var_68_bool = 0;
	return 0;
}


func_3252()
{
	SetVariable("ood4Notkin1", (int)1);
	return 0;
}


func_1465(var_0_object, var_411_int, var_412_object)
{
	var_414_object = Obj(); var_415_bool = 0; var_416_int = 0; var_417_bool = 0; var_418_object = Obj(); var_419_bool = 0; var_420_int = 0; var_421_bool = 0;
	var_0_object = var_412_object;
	var_422_bool = 0; var_423_object = Obj();
	var_412_object = var_423_object;
	func_2990(var_422_bool, var_423_object);
	var_424_bool = var_422_bool == 0; //@nz
	if(var_424_bool != 0) {
		var_411_int = -2;
		return 8;
	}
	CreateDialog(var_418_object);
	var_425_int = 0;
	func_3639(var_425_int);
	@@var_418_object:SetNPCName(var_425_int);
	var_426_string = "";
	func_3641(var_426_string);
	@@var_418_object:SetPhoto(var_426_string);
	var_427_int = 0;
	func_3622(var_427_int);
	@@var_418_object:SetPlayerName(var_427_int);
	IsOverrideActive(var_419_bool);
	var_428_bool = var_419_bool;
	if(var_428_bool != 0) {
		var_411_int = -2;
		return 8;
	}
	DoDialog(var_418_object);
	var_429_object = Obj(); var_430_object = Obj();
	var_412_object = var_429_object;
	var_418_object = var_430_object;
	TaskCall(9);
	func_1528(var_431_object, var_432_object, var_433_string, var_434_bool, var_429_object, var_430_object);
	TaskReturn();
	@@var_418_object:IsDialogEnd(var_421_bool);
	
Label_1510:
	var_471_bool = var_421_bool == 0; //@nz
	if(var_471_bool != 0) {
		sync();
		@@var_418_object:IsDialogEnd(var_421_bool);
		goto Label_1510;
	}
	var_412_object = Obj();
	func_3046();
	StopDialog(var_418_object);
	@@var_418_object:GetReturnValue((int)-1);
	var_420_int = var_411_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3258(var_148_bool)
{
	var_150_int = 0; var_151_string = "";
	func_3085(var_150_int, "KnowEpidemic");
	var_153_bool = var_150_int == (int)1;
	if(var_153_bool != 0) {
		var_148_bool = 1;
		return 0;
	}
	var_148_bool = 0;
	return 0;
}


func_3516(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_3085(var_219_int, "KnowSpi4ka");
	var_222_bool = var_219_int == (int)1;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_3270(var_107_bool)
{
	var_109_int = 0; var_110_string = "";
	func_3085(var_109_int, "ood1Notkin1");
	var_112_bool = var_109_int == (int)0;
	if(var_112_bool != 0) {
		var_107_bool = 1;
		return 0;
	}
	var_107_bool = 0;
	return 0;
}


func_3528(var_185_bool)
{
	var_187_int = 0; var_188_string = "";
	func_3085(var_187_int, "KnowKapella");
	var_190_bool = var_187_int == (int)1;
	if(var_190_bool != 0) {
		var_185_bool = 1;
		return 0;
	}
	var_185_bool = 0;
	return 0;
}


func_1230(var_2_object, var_132_string)
{
	var_133_bool = 0;
	func_3643(var_133_bool);
	var_134_bool = var_133_bool == 0; //@nz
	if(var_134_bool != 0) {
		return 0;
	}
	var_135_bool = var_132_string == var_2_object;
	if(var_135_bool != 0) {
		return 0;
	}
	var_136_string = "";
	var_132_string = var_136_string;
	func_3050(var_136_string);
	var_2_object = var_132_string;
	return 0;
}


func_3282(var_133_bool)
{
	var_135_int = 0; var_136_string = "";
	func_3085(var_135_int, "ood1Notkin2");
	var_138_bool = var_135_int == (int)0;
	if(var_138_bool != 0) {
		var_133_bool = 1;
		return 0;
	}
	var_133_bool = 0;
	return 0;
}


func_2770(var_2_object, var_42_string)
{
	var_43_bool = 0;
	func_3643(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_bool = var_42_string == var_2_object;
	if(var_45_bool != 0) {
		return 0;
	}
	var_46_string = "";
	var_42_string = var_46_string;
	func_3050(var_46_string);
	var_2_object = var_42_string;
	return 0;
}


func_3540(var_142_bool)
{
	var_144_int = 0;
	func_3120(var_144_int);
	var_146_bool = var_144_int >= (int)18;
	if(var_146_bool != 0) {
		var_142_bool = 1;
		return 0;
	}
	var_142_bool = 0;
	return 0;
}


func_3294(var_110_bool)
{
	var_112_int = 0; var_113_string = "";
	func_3085(var_112_int, "ood1NotkinMQ1");
	var_117_bool = var_112_int == (int)0;
	if(var_117_bool != 0) {
		var_110_bool = 1;
		return 0;
	}
	var_110_bool = 0;
	return 0;
}


func_3551(var_120_bool)
{
	var_122_bool = 0;
	var_122_bool = 0;
	var_123_int = 0;
	func_3120(var_123_int);
	var_129_bool = var_123_int >= (int)12;
	if(var_129_bool != 0) {
		var_130_int = 0;
		func_3120(var_130_int);
		var_132_bool = var_130_int < (int)18;
		if(var_132_bool != 0) {
			var_122_bool = 1;
		}
	}
	if(var_122_bool != 0) {
		var_120_bool = 1;
		return 0;
	}
	var_120_bool = 0;
	return 0;
}


func_3046()
{
	CameraSwitchToNormal();
	return 0;
}


func_3306(var_125_bool)
{
	var_127_int = 0; var_128_string = "";
	func_3085(var_127_int, "d1q01");
	var_130_bool = var_127_int == (int)1000;
	if(var_130_bool != 0) {
		var_125_bool = 1;
		return 0;
	}
	var_125_bool = 0;
	return 0;
}


func_3050(var_35_string)
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


func_3572(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj();
	GetMainOutdoorScene(var_59_object);
	var_61_bool = var_59_object == 0; //@ne
	if(var_61_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_60_object = 0;
		var_60_object = var_56_object;
		return 4;
	}
	@@var_59_object:GetMap(var_60_object);
	var_60_object = var_56_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3318(var_118_bool)
{
	var_120_int = 0; var_121_string = "";
	func_3085(var_120_int, "d1q01");
	var_123_bool = var_120_int == (int)0;
	if(var_123_bool != 0) {
		var_118_bool = 1;
		return 0;
	}
	var_118_bool = 0;
	return 0;
}


func_1528(var_0_object, var_1_object, var_2_object, var_3_object, var_429_object, var_430_object)
{
	var_0_object = var_430_object;
	var_1_object = var_429_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_436_bool = 0; var_437_object = Obj();
		var_437_object = var_1_object;
		func_3347(var_437_object);
		if(var_436_bool != 0) {
			var_438_string = "";
			func_1646(var_430_object, "Neutral");
			@@@var_0_object:SetMessage((int)7472);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7473, (int)8250, (int)8249);
			@@@var_0_object:AddReply((int)7488, (int)8252, (int)8265);
		} else {
				var_458_string = "";
				func_1646(var_430_object, "Neutral");
				@@@var_0_object:SetMessage((int)6943);
				@@@var_0_object:ClearReplies();
				var_460_bool = 0; var_461_object = Obj();
				var_461_object = var_1_object;
				func_3342(var_461_object);
				if(var_460_bool != 0) {
					@@@var_0_object:AddReply((int)6944, (int)7651, (int)7650);
				}
				@@@var_0_object:AddReply((int)7464, (int)8240, (int)8239);
				@@@var_0_object:AddReply((int)7504, (int)8267, (int)8285);
				goto Label_1616;
		}
	}
Label_1616:
	var_450_bool = 0;
	func_3643(var_450_bool);
	if(var_450_bool != 0) {

	Label_1620:
		lshWaitForAnimEnd();
		var_451_object = var_3_object;
		if(var_451_object != 0) {
		} else {
			var_452_string = "";
			var_452_string = var_2_object;
			func_3050(var_452_string);
			goto Label_1620;
	}
		PlayAnimation("all", "idle");

	Label_1635:
		WaitForAnimEnd();
		var_455_object = var_3_object;
		if(var_455_object != 0) {
			goto Label_1645;
		}
		PlayAnimation("all", "idle");
		goto Label_1635;

	}
	goto Label_1645;
	
Label_1645:
	return 0;
	
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0x66e";
EMIT "Pop(1)";
EMIT "Push((int) 9377)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9378)";
EMIT "Push((int) 10304)";
EMIT "Push((int) 10303)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9388)";
EMIT "Push((int) 10304)";
EMIT "Push((int) 10315)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9389)";
EMIT "Push((int) 10318)";
EMIT "Push((int) 10317)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x650";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x5fc";


func_3068()
{
	var_33_bool = 0;
	func_3643(var_33_bool);
	if(var_33_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


