// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:No|W:ui/NPC_Mishka.png|W:ood1Mishka1|W:ood1Mishka2|W:ood1Mishka3|W:d1q04|W:d1q04MishkaGotoSpi4ka|W:pt_map_spi4ka|A:AddMark|A:ShowMap|W:d3q02MishkaGotoMladVlad|W:pt_map_maldvlad|W:pt_map_mladvlad|W:ood6Mishka1|W:KnowMishka|W:d3q02|W:d6q01|W:KnowLaska|W:KnowSpi4ka|W:KnowKapella|W:KnowMyth|W:KnowPredictions|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0xc4 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x263 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5d5 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x769 vars=int,int
// @PE: 0x23,0x29,0x70,0xb4,0xc4,0x18e,0x253,0x263,0x56e,0x5c5,0x5d5,0x711,0x759,0x769,0x851,0x88b,0x8a0,0x8a6,0x8ac,0x8b2,0x8cb,0x8db,0x8f0,0x900,0x906,0x90c,0x918,0x924,0x930,0x93c,0x948,0x94d,0x959,0x965,0x971,0x97d,0x989,0x995,0xa32

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_object = Obj();
	var_20_bool = var_21_object;
	func_2610(var_21_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_2056(var_21_bool, var_22_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	if((int)1 != 0) {
		func_2151();
		var_25_bool = var_20_string == (int)526;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_2310();
			var_30_string = "";
			func_180(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)458, (int)530, (int)527);
			@@@var_0_object:AddReply((int)459, (int)532, (int)528);
			@@@var_0_object:AddReply((int)460, (int)530, (int)529);
			return 0;
		}
		var_56_bool = var_20_string == (int)532;
		if(var_56_bool != 0) {
			var_57_string = "";
			func_180(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)462);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)466, (int)538, (int)536);
			@@@var_0_object:AddReply((int)467, (int)-1, (int)537);
			return 0;
		}
		var_66_bool = var_20_string == (int)538;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_180(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)468);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)470, (int)-1, (int)540);
			@@@var_0_object:AddReply((int)471, (int)-1, (int)541);
			return 0;
		}
		var_76_bool = var_20_string == (int)530;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_180(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)461);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)463, (int)535, (int)533);
			@@@var_0_object:AddReply((int)464, (int)-1, (int)534);
			return 0;
		}
		var_86_bool = var_20_string == (int)535;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_180(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)465);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6269, (int)-1, (int)6939);
			return 0;
		}
		var_3_string = true;
		var_92_bool = 0;
		func_2206(var_92_bool);
		if(var_92_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	if((int)1 != 0) {
		func_2151();
		var_25_bool = var_21_bool == (int)6780;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_2208();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_2226();
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_2235();
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_2251(var_78_object);
		}
		var_104_bool = var_21_bool == (int)6783;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_2208();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_2226();
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_2235();
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_2251(var_112_object);
		}
		var_114_bool = var_21_bool == (int)6244;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_2214();
		}
		var_120_bool = var_21_bool == (int)6245;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_2214();
		}
		var_124_bool = var_21_bool == (int)6248;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_2214();
		}
		var_128_bool = var_21_bool == (int)6249;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_2214();
		}
		var_132_bool = var_21_bool == (int)6233;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_2220();
		}
		var_138_bool = var_21_bool == (int)6234;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_2220();
		}
		var_142_bool = var_21_bool == (int)6235;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_2220();
		}
		var_146_bool = var_21_bool == (int)6236;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_2220();
		}
		var_150_bool = var_20_string == (int)6226;
		if(var_150_bool != 0) {
			var_151_bool = 0;
			var_151_bool = 0;
			var_152_bool = 0; var_153_object = Obj();
			var_153_object = var_1_object;
			func_2316(var_153_object);
			if(var_152_bool != 0) {
				var_160_bool = 0; var_161_object = Obj();
				var_161_object = var_1_object;
				func_2352(var_161_object);
				if(var_160_bool != 0) {
					var_151_bool = 1;
				}
			}
			if(var_151_bool != 0) {
				var_166_string = "";
				func_595(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5647);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5648, (int)6756, (int)6227);
				@@@var_0_object:AddReply((int)5671, (int)6750, (int)6252);
				return 0;
			}
			var_188_bool = 0;
			var_188_bool = 0;
			var_189_bool = 0; var_190_object = Obj();
			var_190_object = var_1_object;
			func_2328(var_190_object);
			if(var_189_bool != 0) {
				var_195_bool = 0; var_196_object = Obj();
				var_196_object = var_1_object;
				func_2316(var_196_object);
				var_197_bool = var_195_bool == 0; //@nz
				if(var_197_bool != 0) {
					var_188_bool = 1;
				}
			}
			if(var_188_bool != 0) {
				var_198_string = "";
				func_595(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5659);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5660, (int)6241, (int)6240);
				@@@var_0_object:AddReply((int)5670, (int)6241, (int)6250);
				return 0;
			}
			var_206_bool = 0; var_207_object = Obj();
			var_207_object = var_1_object;
			func_2340(var_207_object);
			if(var_206_bool != 0) {
				var_212_string = "";
				func_595(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5649);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5650, (int)6230, (int)6229);
				@@@var_0_object:AddReply((int)5658, (int)6230, (int)6237);
				return 0;
			}
			var_220_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8187);
			@@@var_0_object:ClearReplies();
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_2441(var_223_object);
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)8191, (int)9041, (int)9014);
			}
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_2453(var_232_object);
			if(var_231_bool != 0) {
				@@@var_0_object:AddReply((int)8192, (int)9040, (int)9015);
			}
			var_240_bool = 0; var_241_object = Obj();
			var_241_object = var_1_object;
			func_2429(var_241_object);
			if(var_240_bool != 0) {
				@@@var_0_object:AddReply((int)8209, (int)9037, (int)9032);
			}
			var_249_bool = 0; var_250_object = Obj();
			var_250_object = var_1_object;
			func_2405(var_250_object);
			if(var_249_bool != 0) {
				@@@var_0_object:AddReply((int)8210, (int)9038, (int)9033);
			}
			var_258_bool = 0; var_259_object = Obj();
			var_259_object = var_1_object;
			func_2417(var_259_object);
			if(var_258_bool != 0) {
				@@@var_0_object:AddReply((int)8212, (int)9039, (int)9035);
			}
			@@@var_0_object:AddReply((int)8722, (int)-1, (int)9559);
			return 0;
		}
		var_271_bool = var_20_string == (int)9039;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8721, (int)-1, (int)9558);
			return 0;
		}
		var_278_bool = var_20_string == (int)9038;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8215);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8720, (int)-1, (int)9557);
			return 0;
		}
		var_285_bool = var_20_string == (int)9037;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8719, (int)-1, (int)9556);
			return 0;
		}
		var_292_bool = var_20_string == (int)9040;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8718, (int)-1, (int)9555);
			return 0;
		}
		var_299_bool = var_20_string == (int)9041;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8717, (int)-1, (int)9554);
			return 0;
		}
		var_306_bool = var_20_string == (int)6230;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5652, (int)6232, (int)6231);
			@@@var_0_object:AddReply((int)5657, (int)-1, (int)6236);
			return 0;
		}
		var_316_bool = var_20_string == (int)6232;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5654, (int)-1, (int)6233);
			@@@var_0_object:AddReply((int)5655, (int)-1, (int)6234);
			@@@var_0_object:AddReply((int)5656, (int)-1, (int)6235);
			return 0;
		}
		var_329_bool = var_20_string == (int)6241;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5661);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5662, (int)6243, (int)6242);
			@@@var_0_object:AddReply((int)5666, (int)6247, (int)6246);
			return 0;
		}
		var_339_bool = var_20_string == (int)6247;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5667);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5668, (int)-1, (int)6248);
			@@@var_0_object:AddReply((int)5669, (int)-1, (int)6249);
			return 0;
		}
		var_349_bool = var_20_string == (int)6243;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5663);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5664, (int)-1, (int)6244);
			@@@var_0_object:AddReply((int)5665, (int)-1, (int)6245);
			return 0;
		}
		var_359_bool = var_20_string == (int)6750;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6113, (int)6753, (int)6751);
			@@@var_0_object:AddReply((int)6114, (int)6753, (int)6752);
			return 0;
		}
		var_369_bool = var_20_string == (int)6753;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6115);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6116, (int)6768, (int)6755);
			@@@var_0_object:AddReply((int)6120, (int)6760, (int)6759);
			return 0;
		}
		var_379_bool = var_20_string == (int)6760;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6121);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6124, (int)6768, (int)6763);
			return 0;
		}
		var_386_bool = var_20_string == (int)6756;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6117);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6118, (int)6764, (int)6757);
			@@@var_0_object:AddReply((int)6119, (int)6765, (int)6758);
			return 0;
		}
		var_396_bool = var_20_string == (int)6765;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6126);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6127, (int)6768, (int)6766);
			return 0;
		}
		var_403_bool = var_20_string == (int)6764;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6128, (int)6768, (int)6767);
			@@@var_0_object:AddReply((int)6132, (int)6775, (int)6774);
			@@@var_0_object:AddReply((int)6135, (int)6768, (int)6777);
			return 0;
		}
		var_416_bool = var_20_string == (int)6775;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6133);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6134, (int)6768, (int)6776);
			return 0;
		}
		var_423_bool = var_20_string == (int)6768;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6129);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6130, (int)6773, (int)6772);
			return 0;
		}
		var_430_bool = var_20_string == (int)6773;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6131);
			@@@var_0_object:ClearReplies();
			var_433_bool = 0; var_434_object = Obj();
			var_434_object = var_1_object;
			func_2417(var_434_object);
			if(var_433_bool != 0) {
				@@@var_0_object:AddReply((int)6136, (int)-1, (int)6780);
			}
			@@@var_0_object:AddReply((int)6137, (int)6782, (int)6781);
			return 0;
		}
		var_442_bool = var_20_string == (int)6782;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_595(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6138);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6139, (int)-1, (int)6783);
			return 0;
		}
		var_3_string = true;
		var_448_bool = 0;
		func_2206(var_448_bool);
		if(var_448_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x264";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	if((int)1 != 0) {
		func_2151();
		var_25_bool = var_21_bool == (int)11390;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_2269();
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_2267();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_2288(var_72_object);
		}
		var_98_bool = var_21_bool == (int)11393;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_2267();
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_2269();
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_2288(var_104_object);
		}
		var_106_bool = var_20_string == (int)11026;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_1477(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10004);
			@@@var_0_object:ClearReplies();
			var_123_bool = 0;
			var_123_bool = 0;
			var_124_bool = 0; var_125_object = Obj();
			var_125_object = var_1_object;
			func_2364(var_125_object);
			if(var_124_bool != 0) {
				var_132_bool = 0; var_133_object = Obj();
				var_133_object = var_1_object;
				func_2376(var_133_object);
				if(var_132_bool != 0) {
					var_123_bool = 1;
				}
			}
			if(var_123_bool != 0) {
				@@@var_0_object:AddReply((int)10211, (int)11256, (int)11257);
			}
			@@@var_0_object:AddReply((int)10005, (int)11028, (int)11027);
			@@@var_0_object:AddReply((int)10012, (int)11035, (int)11034);
			@@@var_0_object:AddReply((int)10015, (int)-1, (int)11037);
			@@@var_0_object:AddReply((int)11383, (int)-1, (int)12579);
			return 0;
		}
		var_150_bool = var_20_string == (int)11035;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_1477(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10013);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10014, (int)-1, (int)11036);
			return 0;
		}
		var_157_bool = var_20_string == (int)11028;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_1477(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10006);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10007, (int)11030, (int)11029);
			@@@var_0_object:AddReply((int)10011, (int)-1, (int)11033);
			return 0;
		}
		var_167_bool = var_20_string == (int)11030;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_1477(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10008);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10009, (int)-1, (int)11031);
			@@@var_0_object:AddReply((int)10010, (int)-1, (int)11032);
			return 0;
		}
		var_177_bool = var_20_string == (int)11256;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_1477(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10325, (int)11385, (int)11384);
			return 0;
		}
		var_184_bool = var_20_string == (int)11385;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_1477(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10326);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10327, (int)11388, (int)11386);
			@@@var_0_object:AddReply((int)10328, (int)11388, (int)11387);
			return 0;
		}
		var_194_bool = var_20_string == (int)11388;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_1477(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10329);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10330, (int)-1, (int)11390);
			@@@var_0_object:AddReply((int)10331, (int)11392, (int)11391);
			return 0;
		}
		var_204_bool = var_20_string == (int)11392;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_1477(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10333, (int)-1, (int)11393);
			return 0;
		}
		var_3_string = true;
		var_210_bool = 0;
		func_2206(var_210_bool);
		if(var_210_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5d6";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int)
{
	if((int)1 != 0) {
		func_2151();
		var_25_bool = var_21_int == (int)14011;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_2304();
		}
		var_31_bool = var_20_int == (int)13999;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1881(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12800);
			@@@var_0_object:ClearReplies();
			var_48_bool = 0;
			var_48_bool = 0;
			var_49_bool = 0; var_50_object = Obj();
			var_50_object = var_1_object;
			func_2381(var_50_object);
			if(var_49_bool != 0) {
				var_57_bool = 0; var_58_object = Obj();
				var_58_object = var_1_object;
				func_2393(var_58_object);
				if(var_57_bool != 0) {
					var_48_bool = 1;
				}
			}
			if(var_48_bool != 0) {
				@@@var_0_object:AddReply((int)12801, (int)14001, (int)14000);
			}
			@@@var_0_object:AddReply((int)12813, (int)-1, (int)14013);
			return 0;
		}
		var_70_bool = var_20_int == (int)14001;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_1881(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12802);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12803, (int)14003, (int)14002);
			return 0;
		}
		var_77_bool = var_20_int == (int)14003;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_1881(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12805, (int)14005, (int)14004);
			@@@var_0_object:AddReply((int)12808, (int)14005, (int)14007);
			return 0;
		}
		var_87_bool = var_20_int == (int)14005;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_1881(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12807, (int)14008, (int)14006);
			return 0;
		}
		var_94_bool = var_20_int == (int)14008;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_1881(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12810, (int)14010, (int)14009);
			return 0;
		}
		var_101_bool = var_20_int == (int)14010;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_1881(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12812, (int)-1, (int)14011);
			return 0;
		}
		var_3_string = true;
		var_107_bool = 0;
		func_2206(var_107_bool);
		if(var_107_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x76a";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_2606();
	var_21_bool = 0;
	func_2068(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_25_string = "";
	func_2133("Neutral");
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


func_2304()
{
	SetVariable("ood6Mishka1", (int)1);
	return 0;
}


func_2178(var_136_int)
{
	var_137_float = 0; var_138_float = 0;
	GetGameTime(var_138_float);
	var_140_int = 0;
	var_140_int = var_138_float / (int)24;
	var_136_int = (int)1 + var_140_int;
	return 2;
}


func_2310()
{
	SetVariable("KnowMishka", (int)1);
	return 0;
}


func_2056(var_21_bool, var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0;
	@@var_22_object:GetPosition(var_27_cvector);
	GetPosition(var_28_cvector);
	var_29_cvector = var_27_cvector - var_28_cvector;
	var_31_float = GetByIndex(var_29_cvector, 0);
	var_32_float = GetByIndex(var_29_cvector, 2);
	Rotate(var_31_float, var_32_float, var_30_bool);
	var_30_bool = var_21_bool;
	return 8;
}


func_2441(var_222_bool)
{
	var_224_int = 0; var_225_string = "";
	func_2168(var_224_int, "KnowMyth");
	var_227_bool = var_224_int == (int)1;
	if(var_227_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_2187(var_134_bool, var_135_int)
{
	var_136_int = 0;
	func_2178(var_136_int);
	var_134_bool = var_136_int == var_135_int;
	return 0;
}


func_2316(var_152_bool)
{
	var_154_int = 0; var_155_string = "";
	func_2168(var_154_int, "ood1Mishka1");
	var_159_bool = var_154_int == (int)0;
	if(var_159_bool != 0) {
		var_152_bool = 1;
		return 0;
	}
	var_152_bool = 0;
	return 0;
}


func_398(var_0_object, var_1_object, var_2_object, var_3_object, var_160_object, var_161_object)
{
	var_0_object = var_161_object;
	var_1_object = var_160_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_167_bool = 0;
		var_167_bool = 0;
		var_168_bool = 0; var_169_object = Obj();
		var_169_object = var_1_object;
		func_2316(var_169_object);
		if(var_168_bool != 0) {
			var_176_bool = 0; var_177_object = Obj();
			var_177_object = var_1_object;
			func_2352(var_177_object);
			if(var_176_bool != 0) {
				var_167_bool = 1;
			}
		}
		if(var_167_bool != 0) {
			var_182_string = "";
			func_595(var_161_object, "Neutral");
			@@@var_0_object:SetMessage((int)5647);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5648, (int)6756, (int)6227);
			@@@var_0_object:AddReply((int)5671, (int)6750, (int)6252);
		} else {
				var_202_bool = 0;
				var_202_bool = 0;
				var_203_bool = 0; var_204_object = Obj();
				var_204_object = var_1_object;
				func_2328(var_204_object);
				if(var_203_bool != 0) {
					var_209_bool = 0; var_210_object = Obj();
					var_210_object = var_1_object;
					func_2316(var_210_object);
					var_211_bool = var_209_bool == 0; //@nz
					if(var_211_bool != 0) {
						var_202_bool = 1;
					}
				}
				if(var_202_bool != 0) {
					var_212_string = "";
					func_595(var_161_object, "Neutral");
					@@@var_0_object:SetMessage((int)5659);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)5660, (int)6241, (int)6240);
					@@@var_0_object:AddReply((int)5670, (int)6241, (int)6250);
					goto Label_565;
				}
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_2340(var_221_object);
				if(var_220_bool != 0) {
					var_226_string = "";
					func_595(var_161_object, "Neutral");
					@@@var_0_object:SetMessage((int)5649);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)5650, (int)6230, (int)6229);
					@@@var_0_object:AddReply((int)5658, (int)6230, (int)6237);
					goto Label_565;
				}
				var_234_string = "";
				func_595(var_161_object, "Neutral");
				@@@var_0_object:SetMessage((int)8187);
				@@@var_0_object:ClearReplies();
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_2441(var_237_object);
				if(var_236_bool != 0) {
					@@@var_0_object:AddReply((int)8191, (int)9041, (int)9014);
				}
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_2453(var_246_object);
				if(var_245_bool != 0) {
					@@@var_0_object:AddReply((int)8192, (int)9040, (int)9015);
				}
				var_254_bool = 0; var_255_object = Obj();
				var_255_object = var_1_object;
				func_2429(var_255_object);
				if(var_254_bool != 0) {
					@@@var_0_object:AddReply((int)8209, (int)9037, (int)9032);
				}
				var_263_bool = 0; var_264_object = Obj();
				var_264_object = var_1_object;
				func_2405(var_264_object);
				if(var_263_bool != 0) {
					@@@var_0_object:AddReply((int)8210, (int)9038, (int)9033);
				}
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_2417(var_273_object);
				if(var_272_bool != 0) {
					@@@var_0_object:AddReply((int)8212, (int)9039, (int)9035);
				}
				@@@var_0_object:AddReply((int)8722, (int)-1, (int)9559);
				goto Label_565;
		}
	}
Label_565:
	var_194_bool = 0;
	func_2206(var_194_bool);
	if(var_194_bool != 0) {

	Label_569:
		lshWaitForAnimEnd();
		var_195_object = var_3_object;
		if(var_195_object != 0) {
		} else {
			var_196_string = "";
			var_196_string = var_2_object;
			func_2133(var_196_string);
			goto Label_569;
	}
		PlayAnimation("all", "idle");

	Label_584:
		WaitForAnimEnd();
		var_199_object = var_3_object;
		if(var_199_object != 0) {
			goto Label_594;
		}
		PlayAnimation("all", "idle");
		goto Label_584;

	}
	goto Label_594;
	
Label_594:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x192";


func_2574()
{
	var_34_object = Obj(); var_35_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_35_object, (int)45, (int)2, (int)12127);
	var_40_bool = 0; var_41_object = Obj(); var_42_int = 0;
	var_35_object = var_41_object;
	func_2478(var_40_bool, var_41_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1809(var_0_object, var_1_object, var_2_object, var_3_object, var_373_object, var_374_object)
{
	var_0_object = var_374_object;
	var_1_object = var_373_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_380_string = "";
		func_1881(var_374_object, "Neutral");
		@@@var_0_object:SetMessage((int)12800);
		@@@var_0_object:ClearReplies();
		var_386_bool = 0;
		var_386_bool = 0;
		var_387_bool = 0; var_388_object = Obj();
		var_388_object = var_1_object;
		func_2381(var_388_object);
		if(var_387_bool != 0) {
			var_393_bool = 0; var_394_object = Obj();
			var_394_object = var_1_object;
			func_2393(var_394_object);
			if(var_393_bool != 0) {
				var_386_bool = 1;
			}
		}
		if(var_386_bool != 0) {
			@@@var_0_object:AddReply((int)12801, (int)14001, (int)14000);
		}
		@@@var_0_object:AddReply((int)12813, (int)-1, (int)14013);
		goto Label_1851;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x715";
	}
Label_1851:
	var_405_bool = 0;
	func_2206(var_405_bool);
	if(var_405_bool != 0) {

	Label_1855:
		lshWaitForAnimEnd();
		var_406_object = var_3_object;
		if(var_406_object != 0) {
		} else {
			var_407_string = "";
			var_407_string = var_2_object;
			func_2133(var_407_string);
			goto Label_1855;
	}
		PlayAnimation("all", "idle");

	Label_1870:
		WaitForAnimEnd();
		var_410_object = var_3_object;
		if(var_410_object != 0) {
			goto Label_1880;
		}
		PlayAnimation("all", "idle");
		goto Label_1870;
	}
	goto Label_1880;
	
Label_1880:
	return 0;
	
}


func_2193(var_415_bool)
{
	var_416_bool = 0; var_417_bool = 0;
	var_418_string = "";
	func_2133("No");
	lshWaitForAnimEnd(var_417_bool);
	var_417_bool = var_415_bool;
	return 2;
}


func_2068(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_2453(var_231_bool)
{
	var_233_int = 0; var_234_string = "";
	func_2168(var_233_int, "KnowPredictions");
	var_236_bool = var_233_int == (int)1;
	if(var_236_bool != 0) {
		var_231_bool = 1;
		return 0;
	}
	var_231_bool = 0;
	return 0;
}


func_2328(var_189_bool)
{
	var_191_int = 0; var_192_string = "";
	func_2168(var_191_int, "ood1Mishka2");
	var_194_bool = var_191_int == (int)0;
	if(var_194_bool != 0) {
		var_189_bool = 1;
		return 0;
	}
	var_189_bool = 0;
	return 0;
}


func_2073(var_35_bool, var_36_object)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0;
	@@var_36_object:GetPosition(var_46_cvector);
	@@var_36_object:GetEyesHeight(var_45_float);
	var_53_float = GetByIndex(var_46_cvector, 1);
	var_53_float = var_53_float + var_45_float;
	SetByIndex(var_46_cvector, 1) = var_53_float;
	GetPosition(var_47_cvector);
	GetEyesHeight(var_45_float);
	var_54_float = GetByIndex(var_47_cvector, 1);
	var_54_float = var_54_float + var_45_float;
	SetByIndex(var_47_cvector, 1) = var_54_float;
	var_48_cvector = var_46_cvector - var_47_cvector;
	var_55_float = GetByIndex(var_48_cvector, 1);
	SetByIndex(var_48_cvector, 1) = (float)0;
	var_56_int = var_48_cvector | var_48_cvector;
	var_57_float = sqrt(var_56_int);
	var_48_cvector = var_48_cvector / var_57_float;
	var_49_cvector = -var_48_cvector;
	var_59_float = var_48_cvector * (int)70;
	var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	var_61_cvector = var_49_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2158(var_60_cvector, var_61_cvector);
	var_69_float = var_60_cvector * (int)25;
	var_70_int = var_59_float + var_69_float;
	var_50_cvector = var_70_int - CVector(0.0, 10.0, 0.0);
	var_51_cvector = var_47_cvector + var_50_cvector;
	IsOverrideActive(var_52_bool);
	var_72_bool = var_52_bool;
	if(var_72_bool != 0) {
		var_35_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_51_cvector, var_49_cvector);
	var_73_float = GetByIndex(var_50_cvector, 0);
	var_74_float = GetByIndex(var_50_cvector, 2);
	Rotate(var_73_float, var_74_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_35_bool = 1;
	return 16;
}


func_2202(var_76_int)
{
	var_76_int = 2871;
	return 0;
}


func_2204(var_77_string)
{
	var_77_string = "ui/NPC_Mishka.png";
	return 0;
}


func_2206(var_23_bool)
{
	var_23_bool = 1;
	return 0;
}


func_2590()
{
	var_44_object = Obj(); var_45_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_45_object, (int)136, (int)2, (int)15306);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_45_object = var_51_object;
	func_2478(var_50_bool, var_51_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2208()
{
	SetVariable("ood1Mishka1", (int)1);
	return 0;
}


func_2465(var_59_object)
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


func_2340(var_206_bool)
{
	var_208_int = 0; var_209_string = "";
	func_2168(var_208_int, "ood1Mishka3");
	var_211_bool = var_208_int == (int)0;
	if(var_211_bool != 0) {
		var_206_bool = 1;
		return 0;
	}
	var_206_bool = 0;
	return 0;
}


func_2214()
{
	SetVariable("ood1Mishka2", (int)1);
	return 0;
}


func_2220()
{
	SetVariable("ood1Mishka3", (int)1);
	return 0;
}


func_2606()
{
	var_20_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_2478(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	func_2465(Obj());
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


func_2352(var_160_bool)
{
	var_162_int = 0; var_163_string = "";
	func_2168(var_162_int, "d1q04");
	var_165_bool = var_162_int == (int)1;
	if(var_165_bool != 0) {
		var_160_bool = 1;
		return 0;
	}
	var_160_bool = 0;
	return 0;
}


func_49(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_0_object = var_25_object;
	var_35_bool = 0; var_36_object = Obj();
	var_25_object = var_36_object;
	func_2073(var_35_bool, var_36_object);
	var_75_bool = var_35_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	CreateDialog(var_31_object);
	var_76_int = 0;
	func_2202(var_76_int);
	@@var_31_object:SetNPCName(var_76_int);
	var_77_string = "";
	func_2204(var_77_string);
	@@var_31_object:SetPhoto(var_77_string);
	var_78_int = 0;
	func_2557(var_78_int);
	@@var_31_object:SetPlayerName(var_78_int);
	IsOverrideActive(var_32_bool);
	var_86_bool = var_32_bool;
	if(var_86_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	DoDialog(var_31_object);
	var_87_object = Obj(); var_88_object = Obj();
	var_25_object = var_87_object;
	var_31_object = var_88_object;
	TaskCall(3);
	func_112(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object);
	TaskReturn();
	@@var_31_object:IsDialogEnd(var_34_bool);
	
Label_94:
	var_131_bool = var_34_bool == 0; //@nz
	if(var_131_bool != 0) {
		sync();
		@@var_31_object:IsDialogEnd(var_34_bool);
		goto Label_94;
	}
	var_25_object = Obj();
	func_2129();
	StopDialog(var_31_object);
	@@var_31_object:GetReturnValue((int)-1);
	var_33_int = var_24_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2610(var_21_object)
{
	var_22_bool = GlobalVars[1];
	var_23_bool = var_22_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_24_int = 0; var_25_object = Obj();
		var_21_object = var_25_object;
		TaskCall(2);
		func_49(var_26_object, var_24_int, var_25_object);
		TaskReturn();
		var_133_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_134_bool = 0; var_135_int = 0;
	func_2187(var_134_bool, (int)1);
	if(var_134_bool != 0) {
		var_142_int = 0; var_143_object = Obj();
		var_21_object = var_143_object;
		TaskCall(4);
		func_335(var_144_object, var_142_int, var_143_object);
		TaskReturn();
		return 0;
	}
	var_286_bool = 0; var_287_int = 0;
	func_2187(var_286_bool, (int)3);
	if(var_286_bool != 0) {
		var_288_int = 0; var_289_object = Obj();
		var_21_object = var_289_object;
		TaskCall(6);
		func_1327(var_290_object, var_288_int, var_289_object);
		TaskReturn();
		return 0;
	}
	var_353_bool = 0; var_354_int = 0;
	func_2187(var_353_bool, (int)6);
	if(var_353_bool != 0) {
		var_355_int = 0; var_356_object = Obj();
		var_21_object = var_356_object;
		TaskCall(8);
		func_1746(var_357_object, var_355_int, var_356_object);
		TaskReturn();
		return 0;
	}
	func_2193((bool)0);
	return 0;
}


func_2226()
{
	SetVariable("d1q04", (int)2);
	func_2574();
	return 0;
}


func_180(var_2_object, var_30_string)
{
	var_31_bool = 0;
	func_2206(var_31_bool);
	var_32_bool = var_31_bool == 0; //@nz
	if(var_32_bool != 0) {
		return 0;
	}
	var_33_bool = var_30_string == var_2_object;
	if(var_33_bool != 0) {
		return 0;
	}
	var_34_string = "";
	var_30_string = var_34_string;
	func_2133(var_34_string);
	var_2_object = var_30_string;
	return 0;
}


func_1327(var_0_object, var_288_int, var_289_object)
{
	var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0; var_295_object = Obj(); var_296_bool = 0; var_297_int = 0; var_298_bool = 0;
	var_0_object = var_289_object;
	var_299_bool = 0; var_300_object = Obj();
	var_289_object = var_300_object;
	func_2073(var_299_bool, var_300_object);
	var_301_bool = var_299_bool == 0; //@nz
	if(var_301_bool != 0) {
		var_288_int = -2;
		return 8;
	}
	CreateDialog(var_295_object);
	var_302_int = 0;
	func_2202(var_302_int);
	@@var_295_object:SetNPCName(var_302_int);
	var_303_string = "";
	func_2204(var_303_string);
	@@var_295_object:SetPhoto(var_303_string);
	var_304_int = 0;
	func_2557(var_304_int);
	@@var_295_object:SetPlayerName(var_304_int);
	IsOverrideActive(var_296_bool);
	var_305_bool = var_296_bool;
	if(var_305_bool != 0) {
		var_288_int = -2;
		return 8;
	}
	DoDialog(var_295_object);
	var_306_object = Obj(); var_307_object = Obj();
	var_289_object = var_306_object;
	var_295_object = var_307_object;
	TaskCall(7);
	func_1390(var_308_object, var_309_object, var_310_string, var_311_bool, var_306_object, var_307_object);
	TaskReturn();
	@@var_295_object:IsDialogEnd(var_298_bool);
	
Label_1372:
	var_351_bool = var_298_bool == 0; //@nz
	if(var_351_bool != 0) {
		sync();
		@@var_295_object:IsDialogEnd(var_298_bool);
		goto Label_1372;
	}
	var_289_object = Obj();
	func_2129();
	StopDialog(var_295_object);
	@@var_295_object:GetReturnValue((int)-1);
	var_297_int = var_288_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2235()
{
	var_61_object = Obj(); var_62_object = Obj();
	func_2507(Obj());
	var_63_object = var_62_object;
	var_74_float = 0;
	func_2173(var_74_float);
	@@var_62_object:AddMark("d1q04MishkaGotoSpi4ka", "pt_map_spi4ka", (int)0, (int)8644, var_74_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2364(var_124_bool)
{
	var_126_int = 0; var_127_string = "";
	func_2168(var_126_int, "d3q02");
	var_131_bool = var_126_int == (int)1;
	if(var_131_bool != 0) {
		var_124_bool = 1;
		return 0;
	}
	var_124_bool = 0;
	return 0;
}


func_2429(var_240_bool)
{
	var_242_int = 0; var_243_string = "";
	func_2168(var_242_int, "KnowKapella");
	var_245_bool = var_242_int == (int)1;
	if(var_245_bool != 0) {
		var_240_bool = 1;
		return 0;
	}
	var_240_bool = 0;
	return 0;
}


func_2557(var_78_int)
{
	var_79_int = 0; var_80_int = 0;
	GetVariable("player", var_80_int);
	var_83_bool = var_80_int == (int)0;
	if(var_83_bool != 0) {
		var_78_int = 200001;
		return 2;
	EMIT "GOTO 0xa0c";
	}
	var_85_bool = var_80_int == (int)1;
	if(var_85_bool != 0) {
		var_78_int = 200002;
		return 2;
	}
	var_78_int = 200003;
	return 2;
}


func_1477(var_2_object, var_107_string)
{
	var_108_bool = 0;
	func_2206(var_108_bool);
	var_109_bool = var_108_bool == 0; //@nz
	if(var_109_bool != 0) {
		return 0;
	}
	var_110_bool = var_107_string == var_2_object;
	if(var_110_bool != 0) {
		return 0;
	}
	var_111_string = "";
	var_107_string = var_111_string;
	func_2133(var_111_string);
	var_2_object = var_107_string;
	return 0;
}


func_2376(var_132_bool)
{
	var_132_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_2251(var_78_object)
{
	var_79_object = Obj(); var_80_string = ""; var_81_float = 0;
	func_2507(Obj());
	var_82_object = var_79_object;
	func_2524(var_79_object, "pt_map_spi4ka", (float)2);
	var_102_object = Obj();
	func_2507(var_102_object);
	@@var_78_object:ShowMap(var_102_object);
	return 0;
}


func_2507(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	GetMainOutdoorScene(var_33_object);
	var_35_bool = var_33_object == 0; //@ne
	if(var_35_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_34_object = 0;
		var_34_object = var_30_object;
		return 4;
	}
	@@var_33_object:GetMap(var_34_object);
	var_34_object = var_30_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2381(var_49_bool)
{
	var_51_int = 0; var_52_string = "";
	func_2168(var_51_int, "d6q01");
	var_56_bool = var_51_int == (int)4;
	if(var_56_bool != 0) {
		var_49_bool = 1;
		return 0;
	}
	var_49_bool = 0;
	return 0;
}


func_335(var_0_object, var_142_int, var_143_object)
{
	var_145_object = Obj(); var_146_bool = 0; var_147_int = 0; var_148_bool = 0; var_149_object = Obj(); var_150_bool = 0; var_151_int = 0; var_152_bool = 0;
	var_0_object = var_143_object;
	var_153_bool = 0; var_154_object = Obj();
	var_143_object = var_154_object;
	func_2073(var_153_bool, var_154_object);
	var_155_bool = var_153_bool == 0; //@nz
	if(var_155_bool != 0) {
		var_142_int = -2;
		return 8;
	}
	CreateDialog(var_149_object);
	var_156_int = 0;
	func_2202(var_156_int);
	@@var_149_object:SetNPCName(var_156_int);
	var_157_string = "";
	func_2204(var_157_string);
	@@var_149_object:SetPhoto(var_157_string);
	var_158_int = 0;
	func_2557(var_158_int);
	@@var_149_object:SetPlayerName(var_158_int);
	IsOverrideActive(var_150_bool);
	var_159_bool = var_150_bool;
	if(var_159_bool != 0) {
		var_142_int = -2;
		return 8;
	}
	DoDialog(var_149_object);
	var_160_object = Obj(); var_161_object = Obj();
	var_143_object = var_160_object;
	var_149_object = var_161_object;
	TaskCall(5);
	func_398(var_162_object, var_163_object, var_164_string, var_165_bool, var_160_object, var_161_object);
	TaskReturn();
	@@var_149_object:IsDialogEnd(var_152_bool);
	
Label_380:
	var_284_bool = var_152_bool == 0; //@nz
	if(var_284_bool != 0) {
		sync();
		@@var_149_object:IsDialogEnd(var_152_bool);
		goto Label_380;
	}
	var_143_object = Obj();
	func_2129();
	StopDialog(var_149_object);
	@@var_149_object:GetReturnValue((int)-1);
	var_151_int = var_142_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2129()
{
	CameraSwitchToNormal();
	return 0;
}


func_1746(var_0_object, var_355_int, var_356_object)
{
	var_358_object = Obj(); var_359_bool = 0; var_360_int = 0; var_361_bool = 0; var_362_object = Obj(); var_363_bool = 0; var_364_int = 0; var_365_bool = 0;
	var_0_object = var_356_object;
	var_366_bool = 0; var_367_object = Obj();
	var_356_object = var_367_object;
	func_2073(var_366_bool, var_367_object);
	var_368_bool = var_366_bool == 0; //@nz
	if(var_368_bool != 0) {
		var_355_int = -2;
		return 8;
	}
	CreateDialog(var_362_object);
	var_369_int = 0;
	func_2202(var_369_int);
	@@var_362_object:SetNPCName(var_369_int);
	var_370_string = "";
	func_2204(var_370_string);
	@@var_362_object:SetPhoto(var_370_string);
	var_371_int = 0;
	func_2557(var_371_int);
	@@var_362_object:SetPlayerName(var_371_int);
	IsOverrideActive(var_363_bool);
	var_372_bool = var_363_bool;
	if(var_372_bool != 0) {
		var_355_int = -2;
		return 8;
	}
	DoDialog(var_362_object);
	var_373_object = Obj(); var_374_object = Obj();
	var_356_object = var_373_object;
	var_362_object = var_374_object;
	TaskCall(9);
	func_1809(var_375_object, var_376_object, var_377_string, var_378_bool, var_373_object, var_374_object);
	TaskReturn();
	@@var_362_object:IsDialogEnd(var_365_bool);
	
Label_1791:
	var_413_bool = var_365_bool == 0; //@nz
	if(var_413_bool != 0) {
		sync();
		@@var_362_object:IsDialogEnd(var_365_bool);
		goto Label_1791;
	}
	var_356_object = Obj();
	func_2129();
	StopDialog(var_362_object);
	@@var_362_object:GetReturnValue((int)-1);
	var_364_int = var_355_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_595(var_2_object, var_166_string)
{
	var_167_bool = 0;
	func_2206(var_167_bool);
	var_168_bool = var_167_bool == 0; //@nz
	if(var_168_bool != 0) {
		return 0;
	}
	var_169_bool = var_166_string == var_2_object;
	if(var_169_bool != 0) {
		return 0;
	}
	var_170_string = "";
	var_166_string = var_170_string;
	func_2133(var_170_string);
	var_2_object = var_166_string;
	return 0;
}


func_2133(var_25_string)
{
	var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0;
	var_31_int = "playing " + var_25_string;
	Trace(var_31_int);
	lshGetAnimTimes(var_25_string, var_28_float, var_29_float);
	lshPlayAnimation(var_28_float, var_29_float);
	var_33_int = "start: " + var_28_float;
	Trace(var_33_int);
	var_35_int = "end: " + var_29_float;
	Trace(var_35_int);
	return 4;
}


func_1881(var_2_object, var_32_string)
{
	var_33_bool = 0;
	func_2206(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 0;
	}
	var_35_bool = var_32_string == var_2_object;
	if(var_35_bool != 0) {
		return 0;
	}
	var_36_string = "";
	var_32_string = var_36_string;
	func_2133(var_36_string);
	var_2_object = var_32_string;
	return 0;
}


func_2393(var_57_bool)
{
	var_59_int = 0; var_60_string = "";
	func_2168(var_59_int, "ood6Mishka1");
	var_62_bool = var_59_int == (int)0;
	if(var_62_bool != 0) {
		var_57_bool = 1;
		return 0;
	}
	var_57_bool = 0;
	return 0;
}


func_2267()
{
	return 0;
}


func_2524(var_73_object, var_74_string, var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0;
	GetMainOutdoorScene(var_83_object);
	var_85_bool = var_83_object == 0; //@ne
	if(var_85_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_83_object:GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector);
	var_87_bool = var_84_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_89_int = "Warning: outdoor scene locator " + var_74_string;
		var_91_int = var_89_int + " doesnt exist";
		Trace(var_91_int);
	}
	@@var_83_object:GetMap(var_73_object);
	var_92_bool = var_73_object == 0; //@ne
	if(var_92_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_94_float = GetByIndex(var_81_cvector, 0);
	var_95_float = GetByIndex(var_81_cvector, 2);
	@@var_73_object:SetMapParams(var_94_float, var_95_float, var_75_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2269()
{
	var_28_object = Obj(); var_29_object = Obj();
	func_2507(Obj());
	var_30_object = var_29_object;
	var_41_float = 0;
	func_2173(var_41_float);
	@@var_29_object:AddMark("d3q02MishkaGotoMladVlad", "pt_map_maldvlad", (int)0, (int)11381, var_41_float);
	func_2590();
	return 2;
}
EMIT "Stack[-1] = 0";


func_2405(var_249_bool)
{
	var_251_int = 0; var_252_string = "";
	func_2168(var_251_int, "KnowLaska");
	var_254_bool = var_251_int == (int)1;
	if(var_254_bool != 0) {
		var_249_bool = 1;
		return 0;
	}
	var_249_bool = 0;
	return 0;
}


func_2151()
{
	var_23_bool = 0;
	func_2206(var_23_bool);
	if(var_23_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1390(var_0_object, var_1_object, var_2_object, var_3_object, var_306_object, var_307_object)
{
	var_0_object = var_307_object;
	var_1_object = var_306_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_313_string = "";
		func_1477(var_307_object, "Neutral");
		@@@var_0_object:SetMessage((int)10004);
		@@@var_0_object:ClearReplies();
		var_319_bool = 0;
		var_319_bool = 0;
		var_320_bool = 0; var_321_object = Obj();
		var_321_object = var_1_object;
		func_2364(var_321_object);
		if(var_320_bool != 0) {
			var_326_bool = 0; var_327_object = Obj();
			var_327_object = var_1_object;
			func_2376(var_327_object);
			if(var_326_bool != 0) {
				var_319_bool = 1;
			}
		}
		if(var_319_bool != 0) {
			@@@var_0_object:AddReply((int)10211, (int)11256, (int)11257);
		}
		@@@var_0_object:AddReply((int)10005, (int)11028, (int)11027);
		@@@var_0_object:AddReply((int)10012, (int)11035, (int)11034);
		@@@var_0_object:AddReply((int)10015, (int)-1, (int)11037);
		@@@var_0_object:AddReply((int)11383, (int)-1, (int)12579);
		goto Label_1447;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x572";
	}
Label_1447:
	var_343_bool = 0;
	func_2206(var_343_bool);
	if(var_343_bool != 0) {

	Label_1451:
		lshWaitForAnimEnd();
		var_344_object = var_3_object;
		if(var_344_object != 0) {
		} else {
			var_345_string = "";
			var_345_string = var_2_object;
			func_2133(var_345_string);
			goto Label_1451;
	}
		PlayAnimation("all", "idle");

	Label_1466:
		WaitForAnimEnd();
		var_348_object = var_3_object;
		if(var_348_object != 0) {
			goto Label_1476;
		}
		PlayAnimation("all", "idle");
		goto Label_1466;
	}
	goto Label_1476;
	
Label_1476:
	return 0;
	
}


func_2158(var_60_cvector, var_61_cvector)
{
	var_63_float = 0; var_64_float = 0;
	var_65_int = var_61_cvector | var_61_cvector;
	var_64_float = sqrt(var_65_int);
	var_66_float = 9.999999974752427e-07;
	var_67_bool = var_64_float < var_66_float;
	if(var_67_bool != 0) {
		var_60_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_60_cvector = var_61_cvector / var_64_float;
	return 2;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_87_object, var_88_object)
{
	var_0_object = var_88_object;
	var_1_object = var_87_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_94_object = Obj(); var_95_object = Obj();
		var_94_object = var_1_object;
		var_95_object = var_0_object;
		func_2310();
		var_98_string = "";
		func_180(var_88_object, "Neutral");
		@@@var_0_object:SetMessage((int)457);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)458, (int)530, (int)527);
		@@@var_0_object:AddReply((int)459, (int)532, (int)528);
		@@@var_0_object:AddReply((int)460, (int)530, (int)529);
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	var_123_bool = 0;
	func_2206(var_123_bool);
	if(var_123_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_124_object = var_3_object;
		if(var_124_object != 0) {
		} else {
			var_125_string = "";
			var_125_string = var_2_object;
			func_2133(var_125_string);
			goto Label_154;
	}
		PlayAnimation("all", "idle");

	Label_169:
		WaitForAnimEnd();
		var_128_object = var_3_object;
		if(var_128_object != 0) {
			goto Label_179;
		}
		PlayAnimation("all", "idle");
		goto Label_169;
	}
	goto Label_179;
	
Label_179:
	return 0;
	
}


func_2417(var_258_bool)
{
	var_260_int = 0; var_261_string = "";
	func_2168(var_260_int, "KnowSpi4ka");
	var_263_bool = var_260_int == (int)1;
	if(var_263_bool != 0) {
		var_258_bool = 1;
		return 0;
	}
	var_258_bool = 0;
	return 0;
}


func_2288(var_72_object)
{
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0;
	func_2507(Obj());
	var_76_object = var_73_object;
	func_2524(var_73_object, "pt_map_mladvlad", (float)2);
	var_96_object = Obj();
	func_2507(var_96_object);
	@@var_72_object:ShowMap(var_96_object);
	return 0;
}


func_2168(var_51_int, var_52_string)
{
	var_53_int = 0; var_54_int = 0;
	GetVariable(var_52_string, var_54_int);
	var_54_int = var_51_int;
	return 2;
}


func_2173(var_41_float)
{
	var_42_float = 0; var_43_float = 0;
	GetGameTime(var_43_float);
	var_43_float = var_41_float;
	return 2;
}


