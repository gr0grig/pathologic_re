// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Pride|W:Distrust|W:Smile|W:Think|W:Triumph|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ood3Notkin2|W:ood3Notkin3|W:ood4Notkin2|W:ood4Notkin3|W:ood7Notkin1|W:KnowTwoSouls|W:KnowNotkin|W:ood3Notkin1|W:ood4Notkin1|W:d4q03|W:d4q03_alldead|W:branch|W:ui/NPC_Notkin.png|W:ui/NPC_Notkin_b.png
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x973
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1e4 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x331 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x604 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x84b vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x949 vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0x9bf vars=int
// @EVENT_6: op=0x9e5 vars=
// @EVENT_5: op=0x9f4 vars=
// @EVENT_45: op=0xa01 vars=bool
// @EVENT_0: op=0xa0d vars=object
// @PE: 0x51,0x90,0xa6,0x18f,0x1ce,0x1e4,0x2c3,0x31b,0x331,0x56c,0x5ee,0x604,0x7f6,0x835,0x84b,0x8f9,0x933,0x949,0x9bf,0x9e5,0xa01,0xbca,0xbe8,0xbee,0xbf4,0xbfa,0xc00,0xc06,0xc0c,0xc12,0xc18,0xc1e,0xc2a,0xc36,0xc42,0xc4e,0xc5a,0xc66,0xc72,0xc7e,0xc8a,0xcb1

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2981();
		var_36_bool = var_31_bool == (int)243;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3084();
			var_41_string = "";
			func_144(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500207, (int)256, (int)245);
			@@@var_0_object:AddReply((int)500206, (int)246, (int)244);
			return 0;
		}
		var_66_bool = var_31_bool == (int)246;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_144(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500209, (int)249, (int)247);
			@@@var_0_object:AddReply((int)500210, (int)250, (int)248);
			return 0;
		}
		var_76_bool = var_31_bool == (int)250;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_144(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500215, (int)249, (int)253);
			return 0;
		}
		var_83_bool = var_31_bool == (int)249;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_3078();
			var_88_string = "";
			func_144(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500211);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500213, (int)252, (int)251);
			return 0;
		}
		var_94_bool = var_31_bool == (int)252;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_144(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500216, (int)-1, (int)255);
			return 0;
		}
		var_101_bool = var_31_bool == (int)256;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_144(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500218, (int)-1, (int)257);
			@@@var_0_object:AddReply((int)500219, (int)-1, (int)258);
			return 0;
		}
		var_3_string = true;
		var_110_bool = 0;
		func_3247(var_110_bool);
		if(var_110_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2981();
		var_36_bool = var_32_cvector == (int)44102;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3072();
		}
		var_42_bool = var_31_bool == (int)8248;
		if(var_42_bool != 0) {
			var_43_string = "";
			func_462(var_32_cvector, "Pride");
			@@@var_0_object:SetMessage((int)507472);
			@@@var_0_object:ClearReplies();
			var_61_bool = 0; var_62_object = Obj();
			var_62_object = var_1_object;
			func_3150(var_62_object);
			if(var_61_bool != 0) {
				@@@var_0_object:AddReply((int)541871, (int)10302, (int)44102);
			}
			@@@var_0_object:AddReply((int)541869, (int)-1, (int)44100);
			return 0;
		}
		var_76_bool = var_31_bool == (int)10302;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_462(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509378, (int)10304, (int)10303);
			return 0;
		}
		var_83_bool = var_31_bool == (int)10304;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_462(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509380, (int)10306, (int)10305);
			@@@var_0_object:AddReply((int)509387, (int)10306, (int)10313);
			return 0;
		}
		var_93_bool = var_31_bool == (int)10306;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_462(var_32_cvector, "Pride");
			@@@var_0_object:SetMessage((int)509381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509382, (int)10308, (int)10307);
			@@@var_0_object:AddReply((int)509386, (int)10308, (int)10311);
			return 0;
		}
		var_103_bool = var_31_bool == (int)10308;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_462(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)509383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509384, (int)-1, (int)10309);
			@@@var_0_object:AddReply((int)509385, (int)-1, (int)10310);
			return 0;
		}
		var_3_string = true;
		var_112_bool = 0;
		func_3247(var_112_bool);
		if(var_112_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1e5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2981();
		var_36_bool = var_32_cvector == (int)10997;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3090();
		}
		var_42_bool = var_32_cvector == (int)35766;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_3048();
		}
		var_48_bool = var_32_cvector == (int)35785;
		if(var_48_bool != 0) {
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_3054();
		}
		var_54_bool = var_31_bool == (int)10996;
		if(var_54_bool != 0) {
			var_55_string = "";
			func_795(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509978);
			@@@var_0_object:ClearReplies();
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_3186(var_74_object);
			if(var_73_bool != 0) {
				@@@var_0_object:AddReply((int)509979, (int)35759, (int)10997);
			}
			var_84_bool = 0; var_85_object = Obj();
			var_85_object = var_1_object;
			func_3102(var_85_object);
			if(var_84_bool != 0) {
				@@@var_0_object:AddReply((int)534183, (int)35767, (int)35766);
			}
			var_93_bool = 0; var_94_object = Obj();
			var_94_object = var_1_object;
			func_3114(var_94_object);
			if(var_93_bool != 0) {
				@@@var_0_object:AddReply((int)534202, (int)35786, (int)35785);
			}
			@@@var_0_object:AddReply((int)509990, (int)-1, (int)11009);
			@@@var_0_object:AddReply((int)509991, (int)-1, (int)11011);
			return 0;
		}
		var_109_bool = var_31_bool == (int)35786;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_795(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)534203);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534204, (int)35788, (int)35787);
			@@@var_0_object:AddReply((int)534215, (int)-1, (int)35798);
			return 0;
		}
		var_119_bool = var_31_bool == (int)35788;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_795(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)534205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534206, (int)35790, (int)35789);
			@@@var_0_object:AddReply((int)534214, (int)-1, (int)35797);
			return 0;
		}
		var_129_bool = var_31_bool == (int)35790;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_795(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534207);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534208, (int)35792, (int)35791);
			@@@var_0_object:AddReply((int)534211, (int)35795, (int)35794);
			return 0;
		}
		var_139_bool = var_31_bool == (int)35795;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_795(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)534212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534213, (int)-1, (int)35796);
			return 0;
		}
		var_146_bool = var_31_bool == (int)35792;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_795(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534210, (int)-1, (int)35793);
			return 0;
		}
		var_153_bool = var_31_bool == (int)35767;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_795(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)534184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534185, (int)35769, (int)35768);
			@@@var_0_object:AddReply((int)534198, (int)35782, (int)35781);
			return 0;
		}
		var_163_bool = var_31_bool == (int)35782;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_795(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)534199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534200, (int)-1, (int)35783);
			@@@var_0_object:AddReply((int)534201, (int)-1, (int)35784);
			return 0;
		}
		var_173_bool = var_31_bool == (int)35769;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_795(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)534186);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534187, (int)35771, (int)35770);
			@@@var_0_object:AddReply((int)534195, (int)35779, (int)35778);
			return 0;
		}
		var_183_bool = var_31_bool == (int)35779;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_795(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)534196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534197, (int)-1, (int)35780);
			return 0;
		}
		var_190_bool = var_31_bool == (int)35771;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_795(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534189, (int)35773, (int)35772);
			return 0;
		}
		var_197_bool = var_31_bool == (int)35773;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_795(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534191, (int)-1, (int)35774);
			@@@var_0_object:AddReply((int)534192, (int)35776, (int)35775);
			return 0;
		}
		var_207_bool = var_31_bool == (int)35776;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_795(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534193);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534194, (int)-1, (int)35777);
			return 0;
		}
		var_214_bool = var_31_bool == (int)35759;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_795(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)534176);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534177, (int)10998, (int)35760);
			@@@var_0_object:AddReply((int)534178, (int)35800, (int)35761);
			return 0;
		}
		var_224_bool = var_31_bool == (int)35800;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_795(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)534217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534218, (int)35802, (int)35801);
			@@@var_0_object:AddReply((int)534223, (int)35802, (int)35806);
			return 0;
		}
		var_234_bool = var_31_bool == (int)35802;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_795(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534219);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534220, (int)-1, (int)35803);
			@@@var_0_object:AddReply((int)534221, (int)-1, (int)35804);
			return 0;
		}
		var_244_bool = var_31_bool == (int)10998;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_795(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)509980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509981, (int)11000, (int)10999);
			@@@var_0_object:AddReply((int)509988, (int)11000, (int)11006);
			@@@var_0_object:AddReply((int)509989, (int)-1, (int)11008);
			return 0;
		}
		var_257_bool = var_31_bool == (int)11000;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_795(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)509982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509983, (int)-1, (int)11001);
			@@@var_0_object:AddReply((int)509984, (int)11003, (int)11002);
			return 0;
		}
		var_267_bool = var_31_bool == (int)11003;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_795(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)509985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509986, (int)-1, (int)11004);
			@@@var_0_object:AddReply((int)509987, (int)-1, (int)11005);
			return 0;
		}
		var_3_string = true;
		var_276_bool = 0;
		func_3247(var_276_bool);
		if(var_276_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x332";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2981();
		var_36_bool = var_32_cvector == (int)12400;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3096();
		}
		var_42_bool = var_32_cvector == (int)35808;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_3060();
		}
		var_48_bool = var_32_cvector == (int)35839;
		if(var_48_bool != 0) {
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_3066();
		}
		var_54_bool = var_31_bool == (int)12399;
		if(var_54_bool != 0) {
			var_55_string = "";
			func_1518(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511211);
			@@@var_0_object:ClearReplies();
			var_73_bool = 0;
			var_73_bool = 1;
			var_74_bool = 0;
			var_74_bool = 0;
			var_75_bool = 0;
			var_75_bool = 0;
			var_76_bool = 0; var_77_object = Obj();
			var_77_object = var_1_object;
			func_3162(var_77_object);
			if(var_76_bool != 0) {
				var_84_bool = 0; var_85_object = Obj();
				var_85_object = var_1_object;
				func_3210(var_85_object);
				if(var_84_bool != 0) {
					var_75_bool = 1;
				}
			}
			if(var_75_bool != 0) {
				var_90_bool = 0; var_91_object = Obj();
				var_91_object = var_1_object;
				func_3174(var_91_object);
				var_96_bool = var_90_bool == 0; //@nz
				if(var_96_bool != 0) {
					var_74_bool = 1;
				}
			}
			if(var_74_bool != 1) {
				var_97_bool = 0;
				var_97_bool = 0;
				var_98_bool = 0;
				var_98_bool = 0;
				var_99_bool = 0; var_100_object = Obj();
				var_100_object = var_1_object;
				func_3198(var_100_object);
				if(var_99_bool != 0) {
					var_105_bool = 0; var_106_object = Obj();
					var_106_object = var_1_object;
					func_3210(var_106_object);
					if(var_105_bool != 0) {
						var_98_bool = 1;
					}
				}
				if(var_98_bool != 0) {
					var_107_bool = 0; var_108_object = Obj();
					var_108_object = var_1_object;
					func_3174(var_108_object);
					var_109_bool = var_107_bool == 0; //@nz
					if(var_109_bool != 0) {
						var_97_bool = 1;
					}
				}
				if(var_97_bool != 1) {
					var_73_bool = 0;
				}
			}
			if(var_73_bool != 0) {
				@@@var_0_object:AddReply((int)511212, (int)12401, (int)12400);
			}
			var_113_bool = 0; var_114_object = Obj();
			var_114_object = var_1_object;
			func_3126(var_114_object);
			if(var_113_bool != 0) {
				@@@var_0_object:AddReply((int)534224, (int)35809, (int)35808);
			}
			var_122_bool = 0; var_123_object = Obj();
			var_123_object = var_1_object;
			func_3138(var_123_object);
			if(var_122_bool != 0) {
				@@@var_0_object:AddReply((int)534252, (int)35840, (int)35839);
			}
			@@@var_0_object:AddReply((int)515335, (int)-1, (int)16558);
			return 0;
		}
		var_135_bool = var_31_bool == (int)35840;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_1518(var_32_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)534253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534254, (int)35842, (int)35841);
			@@@var_0_object:AddReply((int)534266, (int)35842, (int)35853);
			return 0;
		}
		var_145_bool = var_31_bool == (int)35842;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_1518(var_32_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)534255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534256, (int)35844, (int)35843);
			@@@var_0_object:AddReply((int)534263, (int)35851, (int)35850);
			return 0;
		}
		var_155_bool = var_31_bool == (int)35851;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_1518(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534265, (int)-1, (int)35852);
			return 0;
		}
		var_162_bool = var_31_bool == (int)35844;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_1518(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)534257);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534258, (int)35846, (int)35845);
			@@@var_0_object:AddReply((int)534262, (int)-1, (int)35849);
			return 0;
		}
		var_172_bool = var_31_bool == (int)35846;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_1518(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534259);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534260, (int)-1, (int)35847);
			@@@var_0_object:AddReply((int)534261, (int)-1, (int)35848);
			return 0;
		}
		var_182_bool = var_31_bool == (int)35809;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_1518(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)534225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534226, (int)35811, (int)35810);
			return 0;
		}
		var_189_bool = var_31_bool == (int)35811;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_1518(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)534227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534228, (int)35813, (int)35812);
			@@@var_0_object:AddReply((int)534234, (int)35813, (int)35818);
			return 0;
		}
		var_199_bool = var_31_bool == (int)35813;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_1518(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534229);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534230, (int)-1, (int)35814);
			@@@var_0_object:AddReply((int)534233, (int)-1, (int)35817);
			return 0;
		}
		var_209_bool = var_31_bool == (int)12401;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_1518(var_32_cvector, "Pride");
			@@@var_0_object:SetMessage((int)511213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511214, (int)12403, (int)12402);
			@@@var_0_object:AddReply((int)511223, (int)12413, (int)12412);
			return 0;
		}
		var_219_bool = var_31_bool == (int)12413;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_1518(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511224);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511225, (int)12405, (int)12414);
			return 0;
		}
		var_226_bool = var_31_bool == (int)12403;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_1518(var_32_cvector, "Pride");
			@@@var_0_object:SetMessage((int)511215);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511220, (int)12409, (int)12408);
			@@@var_0_object:AddReply((int)511216, (int)12405, (int)12404);
			return 0;
		}
		var_236_bool = var_31_bool == (int)12405;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_1518(var_32_cvector, "Pride");
			@@@var_0_object:SetMessage((int)511217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511218, (int)-1, (int)12406);
			@@@var_0_object:AddReply((int)511219, (int)-1, (int)12407);
			return 0;
		}
		var_246_bool = var_31_bool == (int)12409;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_1518(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)511221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511222, (int)12405, (int)12410);
			return 0;
		}
		var_3_string = true;
		var_252_bool = 0;
		func_3247(var_252_bool);
		if(var_252_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x605";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2981();
		var_36_bool = var_31_bool == (int)36960;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2101(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_65_bool = var_31_bool == (int)36962;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_2101(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_75_bool = var_31_bool == (int)36964;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_2101(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_84_bool = 0;
		func_3247(var_84_bool);
		if(var_84_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x84c";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_2981();
		var_36_bool = var_31_int == (int)42551;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2355(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_3247(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x94a";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_2491();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_2705(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_2460(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_2440(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_2988(Obj());
				var_77_object = var_76_object;
				func_2855(var_75_bool, var_76_object);
			}
		} else {
			func_2455(var_31_int);
			func_2482();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2673();
	func_2491();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_2491();
	var_32_string = "";
	func_2935("Neutral");
	func_2482();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_2482();
	} else {
		var_38_string = "";
		func_2935("Neutral");
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
		func_2673();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_2696(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_3249(var_49_object);
		var_664_string = "";
		func_2935("Neutral");
		func_2491();
		func_2482();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_2426(var_30_cvector);
	return 0;
}


func_3072()
{
	SetVariable("ood7Notkin1", (int)1);
	return 0;
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_0_object = var_53_object;
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0;
	var_53_object = var_64_object;
	func_2710(var_63_bool, var_64_object, (float)70.0);
	var_110_bool = var_63_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	CreateDialog(var_59_object);
	var_111_int = 0;
	func_3241(var_111_int);
	@@var_59_object:SetNPCName(var_111_int);
	var_112_int = 0;
	func_3239(var_112_int);
	@@var_59_object:SetNPCDescription(var_112_int);
	var_113_string = "";
	func_3243(var_113_string);
	@@var_59_object:SetPhoto(var_113_string);
	var_114_string = "";
	func_3245(var_114_string);
	@@var_59_object:SetPhoto2(var_114_string);
	var_115_int = 0;
	func_3222(var_115_int);
	@@var_59_object:SetPlayerName(var_115_int);
	IsOverrideActive(var_60_bool);
	var_123_bool = var_60_bool;
	if(var_123_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	DoDialog(var_59_object);
	var_124_bool = 0; var_125_object = Obj();
	func_2988(Obj());
	var_126_object = var_125_object;
	func_2797(var_124_bool, var_125_object);
	var_219_object = Obj(); var_220_object = Obj();
	var_53_object = var_219_object;
	var_59_object = var_220_object;
	TaskCall(1);
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	@@var_59_object:IsDialogEnd(var_62_bool);
	
Label_63:
	var_272_bool = var_62_bool == 0; //@nz
	if(var_272_bool != 0) {
		sync();
		@@var_59_object:IsDialogEnd(var_62_bool);
		goto Label_63;
	}
	var_53_object = Obj();
	func_2779();
	StopDialog(var_59_object);
	@@var_59_object:GetReturnValue((int)-1);
	var_61_int = var_52_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3078()
{
	SetVariable("KnowTwoSouls", (int)1);
	return 0;
}


func_3084()
{
	SetVariable("KnowNotkin", (int)1);
	return 0;
}


func_3090()
{
	SetVariable("ood3Notkin1", (int)1);
	return 0;
}


func_3096()
{
	SetVariable("ood4Notkin1", (int)1);
	return 0;
}


func_795(var_2_object, var_318_string)
{
	var_319_bool = 0;
	func_3247(var_319_bool);
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
	func_2951(var_322_string, var_323_bool);
	var_2_object = var_318_string;
	return 0;
	
}


func_1307(var_0_object, var_374_int, var_375_object)
{
	var_377_object = Obj(); var_378_bool = 0; var_379_int = 0; var_380_bool = 0; var_381_object = Obj(); var_382_bool = 0; var_383_int = 0; var_384_bool = 0;
	var_0_object = var_375_object;
	var_385_bool = 0; var_386_object = Obj(); var_387_float = 0;
	var_375_object = var_386_object;
	func_2710(var_385_bool, var_386_object, (float)70.0);
	var_388_bool = var_385_bool == 0; //@nz
	if(var_388_bool != 0) {
		var_374_int = -2;
		return 8;
	}
	CreateDialog(var_381_object);
	var_389_int = 0;
	func_3241(var_389_int);
	@@var_381_object:SetNPCName(var_389_int);
	var_390_int = 0;
	func_3239(var_390_int);
	@@var_381_object:SetNPCDescription(var_390_int);
	var_391_string = "";
	func_3243(var_391_string);
	@@var_381_object:SetPhoto(var_391_string);
	var_392_string = "";
	func_3245(var_392_string);
	@@var_381_object:SetPhoto2(var_392_string);
	var_393_int = 0;
	func_3222(var_393_int);
	@@var_381_object:SetPlayerName(var_393_int);
	IsOverrideActive(var_382_bool);
	var_394_bool = var_382_bool;
	if(var_394_bool != 0) {
		var_374_int = -2;
		return 8;
	}
	DoDialog(var_381_object);
	var_395_bool = 0; var_396_object = Obj();
	func_2988(Obj());
	var_397_object = var_396_object;
	func_2797(var_395_bool, var_396_object);
	var_398_object = Obj(); var_399_object = Obj();
	var_375_object = var_398_object;
	var_381_object = var_399_object;
	TaskCall(7);
	func_1388(var_400_object, var_401_object, var_402_string, var_403_bool, var_398_object, var_399_object);
	TaskReturn();
	@@var_381_object:IsDialogEnd(var_384_bool);
	
Label_1370:
	var_481_bool = var_384_bool == 0; //@nz
	if(var_481_bool != 0) {
		sync();
		@@var_381_object:IsDialogEnd(var_384_bool);
		goto Label_1370;
	}
	var_375_object = Obj();
	func_2779();
	StopDialog(var_381_object);
	@@var_381_object:GetReturnValue((int)-1);
	var_383_int = var_374_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3102(var_338_bool)
{
	var_340_int = 0; var_341_string = "";
	func_3004(var_340_int, "ood3Notkin2");
	var_343_bool = var_340_int == (int)0;
	if(var_343_bool != 0) {
		var_338_bool = 1;
		return 0;
	}
	var_338_bool = 0;
	return 0;
}


func_2855(var_135_bool, var_136_object)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = "";
	var_142_string = "c";
	var_143_int = 0;
	
Label_2858:
	if((int)1 != 0) {
		var_149_int = var_143_int + (int)1;
		var_150_int = var_142_string + var_149_int;
		@@var_136_object:HasProperty(var_150_int, var_144_bool);
		var_151_bool = var_144_bool == 0; //@nz
		if(var_151_bool != 0) {
		} else {
			var_143_int = var_143_int + (int)1;
			goto Label_2858;
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
	func_2966(var_158_bool, var_159_string);
	var_158_bool = var_135_bool;
	return 10;
	
}


func_3114(var_347_bool)
{
	var_349_int = 0; var_350_string = "";
	func_3004(var_349_int, "ood3Notkin3");
	var_352_bool = var_349_int == (int)0;
	if(var_352_bool != 0) {
		var_347_bool = 1;
		return 0;
	}
	var_347_bool = 0;
	return 0;
}


func_2602()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	WaitForAnimEnd();
	var_48_bool = 0;
	func_2705(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 12;
	}
	func_3031((int)0);
	var_50_int = var_42_int;
	var_43_int = 0;
	
Label_2616:
	var_63_bool = 0;
	var_63_bool = 0;
	var_65_bool = var_43_int < (int)5;
	if(var_65_bool != 0) {
		var_66_bool = 0;
		func_2705(var_66_bool);
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
				func_3024(var_77_string, var_78_int);
				PlayAnimation("all", var_77_string);
				WaitForAnimEnd(var_47_bool);
				var_79_bool = var_47_bool == 0; //@nz
				if(var_79_bool == 0) goto Label_2657;
				goto Label_2668;
		}
		Label_2657:
			var_70_bool = 0;
			func_2671(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_2668;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_2616;

		}
	}
Label_2668:
	ResetAAS();
	return 12;
	
}


func_2355(var_2_object, var_639_string)
{
	var_640_bool = 0;
	func_3247(var_640_bool);
	var_641_bool = var_640_bool == 0; //@nz
	if(var_641_bool != 0) {
		return 0;
	}
	var_642_bool = var_639_string == var_2_object;
	if(var_642_bool != 0) {
		return 0;
	}
	var_643_string = ""; var_644_bool = 0;
	var_639_string = var_643_string;
	var_646_bool = var_639_string == "";
	if(var_646_bool != 0) {
		var_644_bool = 0;
	} else {
		var_644_bool = 1;
	}
	func_2951(var_643_string, var_644_bool);
	var_2_object = var_639_string;
	return 0;
	
}


func_2101(var_2_object, var_580_string)
{
	var_581_bool = 0;
	func_3247(var_581_bool);
	var_582_bool = var_581_bool == 0; //@nz
	if(var_582_bool != 0) {
		return 0;
	}
	var_583_bool = var_580_string == var_2_object;
	if(var_583_bool != 0) {
		return 0;
	}
	var_584_string = ""; var_585_bool = 0;
	var_580_string = var_584_string;
	var_587_bool = var_580_string == "";
	if(var_587_bool != 0) {
		var_585_bool = 0;
	} else {
		var_585_bool = 1;
	}
	func_2951(var_584_string, var_585_bool);
	var_2_object = var_580_string;
	return 0;
	
}


func_3126(var_452_bool)
{
	var_454_int = 0; var_455_string = "";
	func_3004(var_454_int, "ood4Notkin2");
	var_457_bool = var_454_int == (int)0;
	if(var_457_bool != 0) {
		var_452_bool = 1;
		return 0;
	}
	var_452_bool = 0;
	return 0;
}


func_318(var_0_object, var_485_int, var_486_object)
{
	var_488_object = Obj(); var_489_bool = 0; var_490_int = 0; var_491_bool = 0; var_492_object = Obj(); var_493_bool = 0; var_494_int = 0; var_495_bool = 0;
	var_0_object = var_486_object;
	var_496_bool = 0; var_497_object = Obj(); var_498_float = 0;
	var_486_object = var_497_object;
	func_2710(var_496_bool, var_497_object, (float)70.0);
	var_499_bool = var_496_bool == 0; //@nz
	if(var_499_bool != 0) {
		var_485_int = -2;
		return 8;
	}
	CreateDialog(var_492_object);
	var_500_int = 0;
	func_3241(var_500_int);
	@@var_492_object:SetNPCName(var_500_int);
	var_501_int = 0;
	func_3239(var_501_int);
	@@var_492_object:SetNPCDescription(var_501_int);
	var_502_string = "";
	func_3243(var_502_string);
	@@var_492_object:SetPhoto(var_502_string);
	var_503_string = "";
	func_3245(var_503_string);
	@@var_492_object:SetPhoto2(var_503_string);
	var_504_int = 0;
	func_3222(var_504_int);
	@@var_492_object:SetPlayerName(var_504_int);
	IsOverrideActive(var_493_bool);
	var_505_bool = var_493_bool;
	if(var_505_bool != 0) {
		var_485_int = -2;
		return 8;
	}
	DoDialog(var_492_object);
	var_506_bool = 0; var_507_object = Obj();
	func_2988(Obj());
	var_508_object = var_507_object;
	func_2797(var_506_bool, var_507_object);
	var_509_object = Obj(); var_510_object = Obj();
	var_486_object = var_509_object;
	var_492_object = var_510_object;
	TaskCall(3);
	func_399(var_511_object, var_512_object, var_513_string, var_514_bool, var_509_object, var_510_object);
	TaskReturn();
	@@var_492_object:IsDialogEnd(var_495_bool);
	
Label_381:
	var_545_bool = var_495_bool == 0; //@nz
	if(var_545_bool != 0) {
		sync();
		@@var_492_object:IsDialogEnd(var_495_bool);
		goto Label_381;
	}
	var_486_object = Obj();
	func_2779();
	StopDialog(var_492_object);
	@@var_492_object:GetReturnValue((int)-1);
	var_494_int = var_485_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3138(var_461_bool)
{
	var_463_int = 0; var_464_string = "";
	func_3004(var_463_int, "ood4Notkin3");
	var_466_bool = var_463_int == (int)0;
	if(var_466_bool != 0) {
		var_461_bool = 1;
		return 0;
	}
	var_461_bool = 0;
	return 0;
}


func_2892(var_166_bool, var_167_object)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = "";
	var_179_int = 0;
	func_3009(var_179_int);
	var_185_int = "d" + var_179_int;
	var_173_string = var_185_int + "m";
	var_174_int = 0;
	
Label_2901:
	if((int)1 != 0) {
		var_189_int = var_174_int + (int)1;
		var_190_int = var_173_string + var_189_int;
		@@var_167_object:HasProperty(var_190_int, var_175_bool);
		var_191_bool = var_175_bool == 0; //@nz
		if(var_191_bool != 0) {
		} else {
			var_174_int = var_174_int + (int)1;
			goto Label_2901;
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
	func_2966(var_198_bool, var_199_string);
	var_198_bool = var_166_bool;
	return 10;
	
}


func_3150(var_525_bool)
{
	var_527_int = 0; var_528_string = "";
	func_3004(var_527_int, "ood7Notkin1");
	var_530_bool = var_527_int == (int)0;
	if(var_530_bool != 0) {
		var_525_bool = 1;
		return 0;
	}
	var_525_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_226_object = Obj(); var_227_object = Obj();
		var_226_object = var_1_object;
		var_227_object = var_0_object;
		func_3084();
		var_230_string = "";
		func_144(var_220_object, "Neutral");
		@@@var_0_object:SetMessage((int)500205);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500207, (int)256, (int)245);
		@@@var_0_object:AddReply((int)500206, (int)246, (int)244);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_254_bool = 0;
	func_3247(var_254_bool);
	if(var_254_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_255_string = var_3_string;
		if(var_255_string != 0) {
		} else {
			var_256_string = "";
			var_256_string = var_2_object;
			func_2935(var_256_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_269_string = var_3_string;
		if(var_269_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_3162(var_417_bool)
{
	var_419_int = 0; var_420_string = "";
	func_3004(var_419_int, "d4q03");
	var_422_bool = var_419_int == (int)2;
	if(var_422_bool != 0) {
		var_417_bool = 1;
		return 0;
	}
	var_417_bool = 0;
	return 0;
}


func_3174(var_429_bool)
{
	var_431_int = 0; var_432_string = "";
	func_3004(var_431_int, "d4q03_alldead");
	var_434_bool = var_431_int == (int)1;
	if(var_434_bool != 0) {
		var_429_bool = 1;
		return 0;
	}
	var_429_bool = 0;
	return 0;
}


func_1388(var_0_object, var_1_object, var_2_object, var_3_string, var_398_object, var_399_object)
{
	var_0_object = var_399_object;
	var_1_object = var_398_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_405_string = "";
		func_1518(var_399_object, "Neutral");
		@@@var_0_object:SetMessage((int)511211);
		@@@var_0_object:ClearReplies();
		var_414_bool = 0;
		var_414_bool = 1;
		var_415_bool = 0;
		var_415_bool = 0;
		var_416_bool = 0;
		var_416_bool = 0;
		var_417_bool = 0; var_418_object = Obj();
		var_418_object = var_1_object;
		func_3162(var_418_object);
		if(var_417_bool != 0) {
			var_423_bool = 0; var_424_object = Obj();
			var_424_object = var_1_object;
			func_3210(var_424_object);
			if(var_423_bool != 0) {
				var_416_bool = 1;
			}
		}
		if(var_416_bool != 0) {
			var_429_bool = 0; var_430_object = Obj();
			var_430_object = var_1_object;
			func_3174(var_430_object);
			var_435_bool = var_429_bool == 0; //@nz
			if(var_435_bool != 0) {
				var_415_bool = 1;
			}
		}
		if(var_415_bool != 1) {
			var_436_bool = 0;
			var_436_bool = 0;
			var_437_bool = 0;
			var_437_bool = 0;
			var_438_bool = 0; var_439_object = Obj();
			var_439_object = var_1_object;
			func_3198(var_439_object);
			if(var_438_bool != 0) {
				var_444_bool = 0; var_445_object = Obj();
				var_445_object = var_1_object;
				func_3210(var_445_object);
				if(var_444_bool != 0) {
					var_437_bool = 1;
				}
			}
			if(var_437_bool != 0) {
				var_446_bool = 0; var_447_object = Obj();
				var_447_object = var_1_object;
				func_3174(var_447_object);
				var_448_bool = var_446_bool == 0; //@nz
				if(var_448_bool != 0) {
					var_436_bool = 1;
				}
			}
			if(var_436_bool != 1) {
				var_414_bool = 0;
			}
		}
		if(var_414_bool != 0) {
			@@@var_0_object:AddReply((int)511212, (int)12401, (int)12400);
		}
		var_452_bool = 0; var_453_object = Obj();
		var_453_object = var_1_object;
		func_3126(var_453_object);
		if(var_452_bool != 0) {
			@@@var_0_object:AddReply((int)534224, (int)35809, (int)35808);
		}
		var_461_bool = 0; var_462_object = Obj();
		var_462_object = var_1_object;
		func_3138(var_462_object);
		if(var_461_bool != 0) {
			@@@var_0_object:AddReply((int)534252, (int)35840, (int)35839);
		}
		@@@var_0_object:AddReply((int)515335, (int)-1, (int)16558);
		goto Label_1488;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x570";
	}
Label_1488:
	var_473_bool = 0;
	func_3247(var_473_bool);
	if(var_473_bool != 0) {

	Label_1492:
		lshWaitForAnimEnd();
		var_474_string = var_3_string;
		if(var_474_string != 0) {
		} else {
			var_475_string = "";
			var_475_string = var_2_object;
			func_2935(var_475_string);
			goto Label_1492;
	}
		PlayAnimation("all", "idle");

	Label_1507:
		WaitForAnimEnd();
		var_478_string = var_3_string;
		if(var_478_string != 0) {
			goto Label_1517;
		}
		PlayAnimation("all", "idle");
		goto Label_1507;
	}
	goto Label_1517;
	
Label_1517:
	return 0;
	
}


func_2671(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_2673()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3186(var_327_bool)
{
	var_329_int = 0; var_330_string = "";
	func_3004(var_329_int, "ood3Notkin1");
	var_334_bool = var_329_int == (int)0;
	if(var_334_bool != 0) {
		var_327_bool = 1;
		return 0;
	}
	var_327_bool = 0;
	return 0;
}


func_626(var_0_object, var_287_int, var_288_object)
{
	var_290_object = Obj(); var_291_bool = 0; var_292_int = 0; var_293_bool = 0; var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0;
	var_0_object = var_288_object;
	var_298_bool = 0; var_299_object = Obj(); var_300_float = 0;
	var_288_object = var_299_object;
	func_2710(var_298_bool, var_299_object, (float)70.0);
	var_301_bool = var_298_bool == 0; //@nz
	if(var_301_bool != 0) {
		var_287_int = -2;
		return 8;
	}
	CreateDialog(var_294_object);
	var_302_int = 0;
	func_3241(var_302_int);
	@@var_294_object:SetNPCName(var_302_int);
	var_303_int = 0;
	func_3239(var_303_int);
	@@var_294_object:SetNPCDescription(var_303_int);
	var_304_string = "";
	func_3243(var_304_string);
	@@var_294_object:SetPhoto(var_304_string);
	var_305_string = "";
	func_3245(var_305_string);
	@@var_294_object:SetPhoto2(var_305_string);
	var_306_int = 0;
	func_3222(var_306_int);
	@@var_294_object:SetPlayerName(var_306_int);
	IsOverrideActive(var_295_bool);
	var_307_bool = var_295_bool;
	if(var_307_bool != 0) {
		var_287_int = -2;
		return 8;
	}
	DoDialog(var_294_object);
	var_308_bool = 0; var_309_object = Obj();
	func_2988(Obj());
	var_310_object = var_309_object;
	func_2797(var_308_bool, var_309_object);
	var_311_object = Obj(); var_312_object = Obj();
	var_288_object = var_311_object;
	var_294_object = var_312_object;
	TaskCall(5);
	func_707(var_313_object, var_314_object, var_315_string, var_316_bool, var_311_object, var_312_object);
	TaskReturn();
	@@var_294_object:IsDialogEnd(var_297_bool);
	
Label_689:
	var_370_bool = var_297_bool == 0; //@nz
	if(var_370_bool != 0) {
		sync();
		@@var_294_object:IsDialogEnd(var_297_bool);
		goto Label_689;
	}
	var_288_object = Obj();
	func_2779();
	StopDialog(var_294_object);
	@@var_294_object:GetReturnValue((int)-1);
	var_296_int = var_287_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2678(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_2935(var_256_string)
{
	var_257_bool = 0; var_258_float = 0; var_259_float = 0; var_260_bool = 0; var_261_float = 0; var_262_float = 0;
	lshHasAnimation(var_260_bool, var_256_string);
	var_263_bool = var_260_bool;
	if(var_263_bool != 0) {
		lshGetAnimTimes(var_256_string, var_261_float, var_262_float);
		lshPlayAnimation(var_261_float, var_262_float, (bool)0);
	} else {
		var_266_int = "Can't find lsh animation : " + var_256_string;
		Trace(var_266_int);
	}
	return 6;
	
}


func_2426(var_0_object)
{
	var_32_bool = 0;
	func_2705(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2435:
	func_2602();
	goto Label_2435;
}
EMIT "Return(); Pop(0)";


func_3198(var_438_bool)
{
	var_440_int = 0; var_441_string = "";
	func_3004(var_440_int, "d4q03");
	var_443_bool = var_440_int == (int)3;
	if(var_443_bool != 0) {
		var_438_bool = 1;
		return 0;
	}
	var_438_bool = 0;
	return 0;
}


func_2686(var_39_bool, var_40_cvector)
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


func_2951(var_234_string, var_235_bool)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0;
	lshHasAnimation(var_241_bool, var_234_string);
	var_244_bool = var_241_bool;
	if(var_244_bool != 0) {
		lshGetAnimTimes(var_234_string, var_242_float, var_243_float);
		lshPlayAnimation(var_242_float, var_243_float, var_235_bool);
	} else {
		var_246_int = "Can't find lsh animation : " + var_234_string;
		Trace(var_246_int);
	}
	return 6;
	
}


func_2696(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_2686(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_2440(var_56_bool)
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
	func_2696(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3210(var_423_bool)
{
	var_425_int = 0; var_426_string = "";
	func_3004(var_425_int, "ood4Notkin1");
	var_428_bool = var_425_int == (int)0;
	if(var_428_bool != 0) {
		var_423_bool = 1;
		return 0;
	}
	var_423_bool = 0;
	return 0;
}


func_399(var_0_object, var_1_object, var_2_object, var_3_string, var_509_object, var_510_object)
{
	var_0_object = var_510_object;
	var_1_object = var_509_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_516_string = "";
		func_462(var_510_object, "Pride");
		@@@var_0_object:SetMessage((int)507472);
		@@@var_0_object:ClearReplies();
		var_525_bool = 0; var_526_object = Obj();
		var_526_object = var_1_object;
		func_3150(var_526_object);
		if(var_525_bool != 0) {
			@@@var_0_object:AddReply((int)541871, (int)10302, (int)44102);
		}
		@@@var_0_object:AddReply((int)541869, (int)-1, (int)44100);
		goto Label_432;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x193";
	}
Label_432:
	var_537_bool = 0;
	func_3247(var_537_bool);
	if(var_537_bool != 0) {

	Label_436:
		lshWaitForAnimEnd();
		var_538_string = var_3_string;
		if(var_538_string != 0) {
		} else {
			var_539_string = "";
			var_539_string = var_2_object;
			func_2935(var_539_string);
			goto Label_436;
	}
		PlayAnimation("all", "idle");

	Label_451:
		WaitForAnimEnd();
		var_542_string = var_3_string;
		if(var_542_string != 0) {
			goto Label_461;
		}
		PlayAnimation("all", "idle");
		goto Label_451;
	}
	goto Label_461;
	
Label_461:
	return 0;
	
}


func_144(var_2_object, var_230_string)
{
	var_231_bool = 0;
	func_3247(var_231_bool);
	var_232_bool = var_231_bool == 0; //@nz
	if(var_232_bool != 0) {
		return 0;
	}
	var_233_bool = var_230_string == var_2_object;
	if(var_233_bool != 0) {
		return 0;
	}
	var_234_string = ""; var_235_bool = 0;
	var_230_string = var_234_string;
	var_237_bool = var_230_string == "";
	if(var_237_bool != 0) {
		var_235_bool = 0;
	} else {
		var_235_bool = 1;
	}
	func_2951(var_234_string, var_235_bool);
	var_2_object = var_230_string;
	return 0;
	
}


func_2705(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_2710(var_63_bool, var_64_object, var_65_float)
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
	func_2994(var_90_cvector, var_91_cvector);
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
	func_3247(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		HasAnimationTrack(var_83_bool, "head");
		var_108_bool = var_83_bool;
		if(var_108_bool == 0) goto Label_2773;
		LookAsyncCamera("head");
	}
Label_2773:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_63_bool = 1;
	return 18;
	
}


func_2455(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_3222(var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	GetVariable("branch", var_117_int);
	var_120_bool = var_117_int == (int)0;
	if(var_120_bool != 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xca5";
	}
	var_122_bool = var_117_int == (int)1;
	if(var_122_bool != 0) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
	return 2;
}


func_2966(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0;
	var_162_bool = 0;
	func_3247(var_162_bool);
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


func_2460(var_39_bool)
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
	func_2678(var_46_float, var_47_object);
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


func_2981()
{
	var_34_bool = 0;
	func_3247(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1957(var_0_object, var_549_int, var_550_object)
{
	var_552_object = Obj(); var_553_bool = 0; var_554_int = 0; var_555_bool = 0; var_556_object = Obj(); var_557_bool = 0; var_558_int = 0; var_559_bool = 0;
	var_0_object = var_550_object;
	var_560_bool = 0; var_561_object = Obj(); var_562_float = 0;
	var_550_object = var_561_object;
	func_2710(var_560_bool, var_561_object, (float)70.0);
	var_563_bool = var_560_bool == 0; //@nz
	if(var_563_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	CreateDialog(var_556_object);
	var_564_int = 0;
	func_3241(var_564_int);
	@@var_556_object:SetNPCName(var_564_int);
	var_565_int = 0;
	func_3239(var_565_int);
	@@var_556_object:SetNPCDescription(var_565_int);
	var_566_string = "";
	func_3243(var_566_string);
	@@var_556_object:SetPhoto(var_566_string);
	var_567_string = "";
	func_3245(var_567_string);
	@@var_556_object:SetPhoto2(var_567_string);
	var_568_int = 0;
	func_3222(var_568_int);
	@@var_556_object:SetPlayerName(var_568_int);
	IsOverrideActive(var_557_bool);
	var_569_bool = var_557_bool;
	if(var_569_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	DoDialog(var_556_object);
	var_570_bool = 0; var_571_object = Obj();
	func_2988(Obj());
	var_572_object = var_571_object;
	func_2797(var_570_bool, var_571_object);
	var_573_object = Obj(); var_574_object = Obj();
	var_550_object = var_573_object;
	var_556_object = var_574_object;
	TaskCall(9);
	func_2038(var_575_object, var_576_object, var_577_string, var_578_bool, var_573_object, var_574_object);
	TaskReturn();
	@@var_556_object:IsDialogEnd(var_559_bool);
	
Label_2020:
	var_606_bool = var_559_bool == 0; //@nz
	if(var_606_bool != 0) {
		sync();
		@@var_556_object:IsDialogEnd(var_559_bool);
		goto Label_2020;
	}
	var_550_object = Obj();
	func_2779();
	StopDialog(var_556_object);
	@@var_556_object:GetReturnValue((int)-1);
	var_558_int = var_549_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3239(var_112_int)
{
	var_112_int = 515548;
	return 0;
}


func_2216(var_0_object, var_608_int, var_609_object)
{
	var_611_object = Obj(); var_612_bool = 0; var_613_int = 0; var_614_bool = 0; var_615_object = Obj(); var_616_bool = 0; var_617_int = 0; var_618_bool = 0;
	var_0_object = var_609_object;
	var_619_bool = 0; var_620_object = Obj(); var_621_float = 0;
	var_609_object = var_620_object;
	func_2710(var_619_bool, var_620_object, (float)70.0);
	var_622_bool = var_619_bool == 0; //@nz
	if(var_622_bool != 0) {
		var_608_int = -2;
		return 8;
	}
	CreateDialog(var_615_object);
	var_623_int = 0;
	func_3241(var_623_int);
	@@var_615_object:SetNPCName(var_623_int);
	var_624_int = 0;
	func_3239(var_624_int);
	@@var_615_object:SetNPCDescription(var_624_int);
	var_625_string = "";
	func_3243(var_625_string);
	@@var_615_object:SetPhoto(var_625_string);
	var_626_string = "";
	func_3245(var_626_string);
	@@var_615_object:SetPhoto2(var_626_string);
	var_627_int = 0;
	func_3222(var_627_int);
	@@var_615_object:SetPlayerName(var_627_int);
	IsOverrideActive(var_616_bool);
	var_628_bool = var_616_bool;
	if(var_628_bool != 0) {
		var_608_int = -2;
		return 8;
	}
	DoDialog(var_615_object);
	var_629_bool = 0; var_630_object = Obj();
	func_2988(Obj());
	var_631_object = var_630_object;
	func_2797(var_629_bool, var_630_object);
	var_632_object = Obj(); var_633_object = Obj();
	var_609_object = var_632_object;
	var_615_object = var_633_object;
	TaskCall(11);
	func_2297(var_634_object, var_635_object, var_636_string, var_637_bool, var_632_object, var_633_object);
	TaskReturn();
	@@var_615_object:IsDialogEnd(var_618_bool);
	
Label_2279:
	var_662_bool = var_618_bool == 0; //@nz
	if(var_662_bool != 0) {
		sync();
		@@var_615_object:IsDialogEnd(var_618_bool);
		goto Label_2279;
	}
	var_609_object = Obj();
	func_2779();
	StopDialog(var_615_object);
	@@var_615_object:GetReturnValue((int)-1);
	var_617_int = var_608_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3241(var_111_int)
{
	var_111_int = 502873;
	return 0;
}


func_3243(var_113_string)
{
	var_113_string = "ui/NPC_Notkin.png";
	return 0;
}


func_2988(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj();
	self(var_128_object);
	var_128_object = var_126_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3245(var_114_string)
{
	var_114_string = "ui/NPC_Notkin_b.png";
	return 0;
}


func_3247(var_106_bool)
{
	var_106_bool = 1;
	return 0;
}


func_3249(var_49_object)
{
	var_50_bool = GlobalVars[1];
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_52_int = 0; var_53_object = Obj();
		var_49_object = var_53_object;
		TaskCall(0);
		func_0(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_281_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_282_bool = 0; var_283_int = 0;
	func_3018(var_282_bool, (int)1);
	if(var_282_bool != 0) {
		return 0;
	}
	var_285_bool = 0; var_286_int = 0;
	func_3018(var_285_bool, (int)3);
	if(var_285_bool != 0) {
		var_287_int = 0; var_288_object = Obj();
		var_49_object = var_288_object;
		TaskCall(4);
		func_626(var_289_object, var_287_int, var_288_object);
		TaskReturn();
		return 0;
	}
	var_372_bool = 0; var_373_int = 0;
	func_3018(var_372_bool, (int)4);
	if(var_372_bool != 0) {
		var_374_int = 0; var_375_object = Obj();
		var_49_object = var_375_object;
		TaskCall(6);
		func_1307(var_376_object, var_374_int, var_375_object);
		TaskReturn();
		return 0;
	}
	var_483_bool = 0; var_484_int = 0;
	func_3018(var_483_bool, (int)7);
	if(var_483_bool != 0) {
		var_485_int = 0; var_486_object = Obj();
		var_49_object = var_486_object;
		TaskCall(2);
		func_318(var_487_object, var_485_int, var_486_object);
		TaskReturn();
		return 0;
	}
	var_547_bool = 0; var_548_int = 0;
	func_3018(var_547_bool, (int)12);
	if(var_547_bool != 0) {
		var_549_int = 0; var_550_object = Obj();
		var_49_object = var_550_object;
		TaskCall(8);
		func_1957(var_551_object, var_549_int, var_550_object);
		TaskReturn();
		return 0;
	}
	var_608_int = 0; var_609_object = Obj();
	var_49_object = var_609_object;
	TaskCall(10);
	func_2216(var_610_object, var_608_int, var_609_object);
	TaskReturn();
	return 0;
}


func_2482()
{
	var_666_float = 0; var_667_float = 0;
	rand(var_667_float, (int)8, (int)16);
	SetTimer((int)10, var_667_float);
	return 2;
}


func_2994(var_90_cvector, var_91_cvector)
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


func_2491()
{
	KillTimer((int)10);
	return 0;
}


func_3004(var_329_int, var_330_string)
{
	var_331_int = 0; var_332_int = 0;
	GetVariable(var_330_string, var_332_int);
	var_332_int = var_329_int;
	return 2;
}


func_3009(var_179_int)
{
	var_180_float = 0; var_181_float = 0;
	GetGameTime(var_181_float);
	var_183_int = 0;
	var_183_int = var_181_float / (int)24;
	var_179_int = (int)1 + var_183_int;
	return 2;
}


func_707(var_0_object, var_1_object, var_2_object, var_3_string, var_311_object, var_312_object)
{
	var_0_object = var_312_object;
	var_1_object = var_311_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_318_string = "";
		func_795(var_312_object, "Neutral");
		@@@var_0_object:SetMessage((int)509978);
		@@@var_0_object:ClearReplies();
		var_327_bool = 0; var_328_object = Obj();
		var_328_object = var_1_object;
		func_3186(var_328_object);
		if(var_327_bool != 0) {
			@@@var_0_object:AddReply((int)509979, (int)35759, (int)10997);
		}
		var_338_bool = 0; var_339_object = Obj();
		var_339_object = var_1_object;
		func_3102(var_339_object);
		if(var_338_bool != 0) {
			@@@var_0_object:AddReply((int)534183, (int)35767, (int)35766);
		}
		var_347_bool = 0; var_348_object = Obj();
		var_348_object = var_1_object;
		func_3114(var_348_object);
		if(var_347_bool != 0) {
			@@@var_0_object:AddReply((int)534202, (int)35786, (int)35785);
		}
		@@@var_0_object:AddReply((int)509990, (int)-1, (int)11009);
		@@@var_0_object:AddReply((int)509991, (int)-1, (int)11011);
		goto Label_765;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2c7";
	}
Label_765:
	var_362_bool = 0;
	func_3247(var_362_bool);
	if(var_362_bool != 0) {

	Label_769:
		lshWaitForAnimEnd();
		var_363_string = var_3_string;
		if(var_363_string != 0) {
		} else {
			var_364_string = "";
			var_364_string = var_2_object;
			func_2935(var_364_string);
			goto Label_769;
	}
		PlayAnimation("all", "idle");

	Label_784:
		WaitForAnimEnd();
		var_367_string = var_3_string;
		if(var_367_string != 0) {
			goto Label_794;
		}
		PlayAnimation("all", "idle");
		goto Label_784;
	}
	goto Label_794;
	
Label_794:
	return 0;
	
}


func_3018(var_282_bool, var_283_int)
{
	var_284_int = 0;
	func_3009(var_284_int);
	var_282_bool = var_284_int == var_283_int;
	return 0;
}


func_462(var_2_object, var_516_string)
{
	var_517_bool = 0;
	func_3247(var_517_bool);
	var_518_bool = var_517_bool == 0; //@nz
	if(var_518_bool != 0) {
		return 0;
	}
	var_519_bool = var_516_string == var_2_object;
	if(var_519_bool != 0) {
		return 0;
	}
	var_520_string = ""; var_521_bool = 0;
	var_516_string = var_520_string;
	var_523_bool = var_516_string == "";
	if(var_523_bool != 0) {
		var_521_bool = 0;
	} else {
		var_521_bool = 1;
	}
	func_2951(var_520_string, var_521_bool);
	var_2_object = var_516_string;
	return 0;
	
}


func_3024(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = "";
	var_60_int = var_57_int;
	if(var_60_int != 0) {
		"idle" = "idle" + var_57_int;
	}
	var_59_string = var_56_string;
	return 2;
}


func_3031(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_53_int = 0;
	
Label_3033:
	var_56_string = ""; var_57_int = 0;
	var_53_int = var_57_int;
	func_3024(var_56_string, var_57_int);
	HasAnimation(var_54_bool, "all", var_56_string);
	var_61_bool = var_54_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_53_int = var_53_int + (int)1;
		goto Label_3033;
	}
	var_53_int = var_50_int;
	return 4;
	
}


func_2779()
{
	var_274_bool = 0; var_275_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_277_bool = 0;
	func_3247(var_277_bool);
	if(var_277_bool != 0) {
	} else {
		HasAnimationTrack(var_275_bool, "head");
		var_279_bool = var_275_bool;
		if(var_279_bool == 0) goto Label_2796;
		UnlookAsync("head");
	}
Label_2796:
	return 2;
	
}


func_3048()
{
	SetVariable("ood3Notkin2", (int)1);
	return 0;
}


func_2797(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0;
	GetVariable("voice_common", var_131_int);
	var_134_int = var_131_int;
	if(var_134_int != 0) {
		var_135_bool = 0; var_136_object = Obj();
		var_125_object = var_136_object;
		func_2855(var_135_bool, var_136_object);
		var_165_bool = var_135_bool == 0; //@nz
		if(var_165_bool != 0) {
			var_166_bool = 0; var_167_object = Obj();
			var_125_object = var_167_object;
			func_2892(var_166_bool, var_167_object);
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
		func_2892(var_211_bool, var_212_object);
		var_213_bool = var_211_bool == 0; //@nz
		if(var_213_bool != 0) {
			var_214_bool = 0; var_215_object = Obj();
			var_125_object = var_215_object;
			func_2855(var_214_bool, var_215_object);
			var_216_bool = var_214_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_124_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2853;
	
Label_2853:
	var_124_bool = 1;
	return 4;
	
}


func_3054()
{
	SetVariable("ood3Notkin3", (int)1);
	return 0;
}


func_1518(var_2_object, var_405_string)
{
	var_406_bool = 0;
	func_3247(var_406_bool);
	var_407_bool = var_406_bool == 0; //@nz
	if(var_407_bool != 0) {
		return 0;
	}
	var_408_bool = var_405_string == var_2_object;
	if(var_408_bool != 0) {
		return 0;
	}
	var_409_string = ""; var_410_bool = 0;
	var_405_string = var_409_string;
	var_412_bool = var_405_string == "";
	if(var_412_bool != 0) {
		var_410_bool = 0;
	} else {
		var_410_bool = 1;
	}
	func_2951(var_409_string, var_410_bool);
	var_2_object = var_405_string;
	return 0;
	
}


func_3060()
{
	SetVariable("ood4Notkin2", (int)1);
	return 0;
}


func_2038(var_0_object, var_1_object, var_2_object, var_3_string, var_573_object, var_574_object)
{
	var_0_object = var_574_object;
	var_1_object = var_573_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_580_string = "";
		func_2101(var_574_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_2071;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7fa";
	}
Label_2071:
	var_598_bool = 0;
	func_3247(var_598_bool);
	if(var_598_bool != 0) {

	Label_2075:
		lshWaitForAnimEnd();
		var_599_string = var_3_string;
		if(var_599_string != 0) {
		} else {
			var_600_string = "";
			var_600_string = var_2_object;
			func_2935(var_600_string);
			goto Label_2075;
	}
		PlayAnimation("all", "idle");

	Label_2090:
		WaitForAnimEnd();
		var_603_string = var_3_string;
		if(var_603_string != 0) {
			goto Label_2100;
		}
		PlayAnimation("all", "idle");
		goto Label_2090;
	}
	goto Label_2100;
	
Label_2100:
	return 0;
	
}


func_2297(var_0_object, var_1_object, var_2_object, var_3_string, var_632_object, var_633_object)
{
	var_0_object = var_633_object;
	var_1_object = var_632_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_639_string = "";
		func_2355(var_633_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_2325;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8fd";
	}
Label_2325:
	var_654_bool = 0;
	func_3247(var_654_bool);
	if(var_654_bool != 0) {

	Label_2329:
		lshWaitForAnimEnd();
		var_655_string = var_3_string;
		if(var_655_string != 0) {
		} else {
			var_656_string = "";
			var_656_string = var_2_object;
			func_2935(var_656_string);
			goto Label_2329;
	}
		PlayAnimation("all", "idle");

	Label_2344:
		WaitForAnimEnd();
		var_659_string = var_3_string;
		if(var_659_string != 0) {
			goto Label_2354;
		}
		PlayAnimation("all", "idle");
		goto Label_2344;
	}
	goto Label_2354;
	
Label_2354:
	return 0;
	
}


func_3066()
{
	SetVariable("ood4Notkin3", (int)1);
	return 0;
}


