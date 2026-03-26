// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Andrei.png|W:ood1Andrei1|W:ood1Andrei2|W:money1000 is given|W:money|W:playsound|W:givemoney|W:giveitem|W:ood1Andrei3|W:ood1Andrei4|W:ood1Andrei5|W:ood1Andrei6|W:ood1Andrei7|W:KnowShabnak|W:ood1Andrei8|W:KnowMat|W:ood2Andrei1|W:ood2Andrei2|W:ood2Andrei3|W:ood2Andrei4|W:ood2Andrei5|W:KnowAgo|W:d2q02|W:d2q02AndreiGotoPetr|W:pt_map_petr|A:AddMark|W:d2q02AndreiGotoPetrSelf|W:pt_map_andrei|W:d2q02AndreiGotoGrif|W:pt_map_grif|W:d2q02AndreiGotoGrifSelf|W:d2q02ReadyAndrei|W:quest_d2_02|W:put_patrol|A:ShowMap|W:tvirin is given|W:tvirin|W:KnowAndrei|W:KnowNina|W:ood6Andrei1|W:ood11Andrei1|W:d11q01|W:ood11Andrei2|W:ood11Andrei3|W:KnowMark|W:ood3Andrei1|W:ood10Andrei1|W:KnowTermitnik|W:KnowTheater|W:d1q01FirstGeorgVisit|W:KnowViktor|W:d3q01|W:d5q01|W:KnowAnna|W:KnowEva|W:KnowGrif|W:KnowLaska|W:KnowMaria|W:d10q01|W:KnowPredictions|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry|W:mt_andrei
// @GLOBALS: 0:object:
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
// @EVENT_11: op=0x26e vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x89b vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcc3 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe51 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xfe5 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x111e vars=int,int
// @PE: 0x23,0x29,0x70,0xaf,0xbf,0x191,0x25e,0x26e,0x7e3,0x88b,0x89b,0xc56,0xcb3,0xcc3,0xe02,0xe41,0xe51,0xf73,0xfd5,0xfe5,0x109a,0x110e,0x111e,0x1335,0x139d,0x13b2,0x13b8,0x13be,0x13c9,0x13cf,0x13d5,0x13db,0x13e1,0x13e7,0x13ed,0x13f3,0x13f9,0x13ff,0x1405,0x140b,0x1411,0x1417,0x141d,0x1423,0x1485,0x1495,0x14a0,0x14a6,0x14ac,0x14b2,0x14b8,0x14c1,0x14c7,0x14cd,0x14d3,0x14e3,0x14e9,0x14ef,0x14f5,0x1501,0x150d,0x1519,0x1525,0x1531,0x153d,0x1549,0x1555,0x1561,0x156d,0x1579,0x1585,0x1591,0x159d,0x15a9,0x15b5,0x15c1,0x15cd,0x15d9,0x15e5,0x15f1,0x15fd,0x1609,0x1613,0x161f,0x162b,0x1637,0x1643,0x164f,0x165b,0x1667,0x1673,0x167f,0x168b,0x1697,0x16a3,0x16af,0x16bb,0x16c7,0x16d3,0x16df,0x16eb,0x16f7

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
	func_6068(var_36_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_bool = var_37_object;
	func_4844(var_36_bool, var_37_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4939();
		var_40_bool = var_35_string == (int)224;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5280();
			var_45_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)190, (int)228, (int)227);
			@@@var_0_object:AddReply((int)188, (int)226, (int)225);
			return 0;
		}
		var_68_bool = var_35_string == (int)226;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)192, (int)233, (int)229);
			@@@var_0_object:AddReply((int)193, (int)-1, (int)230);
			return 0;
		}
		var_78_bool = var_35_string == (int)233;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)203, (int)-1, (int)241);
			return 0;
		}
		var_85_bool = var_35_string == (int)228;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)197, (int)236, (int)234);
			@@@var_0_object:AddReply((int)198, (int)9260, (int)235);
			return 0;
		}
		var_95_bool = var_35_string == (int)9260;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8437);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8438, (int)-1, (int)9261);
			return 0;
		}
		var_102_bool = var_35_string == (int)236;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)200, (int)233, (int)237);
			return 0;
		}
		var_3_string = true;
		var_108_bool = 0;
		func_5040(var_108_bool);
		if(var_108_bool != 0) {
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
		func_4939();
		var_40_bool = var_36_bool == (int)6349;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5042();
		}
		var_46_bool = var_36_bool == (int)7165;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5042();
		}
		var_50_bool = var_36_bool == (int)6353;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_5042();
		}
		var_54_bool = var_36_bool == (int)7159;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_5048();
		}
		var_60_bool = var_36_bool == (int)7160;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_5048();
		}
		var_64_bool = var_36_bool == (int)7156;
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_5048();
		}
		var_68_bool = var_36_bool == (int)7157;
		if(var_68_bool != 0) {
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_5048();
		}
		var_72_bool = var_36_bool == (int)6343;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_5048();
		}
		var_76_bool = var_36_bool == (int)7171;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_5077();
		}
		var_82_bool = var_36_bool == (int)7180;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_5077();
		}
		var_86_bool = var_36_bool == (int)7178;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_5077();
		}
		var_90_bool = var_36_bool == (int)7190;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_5083();
		}
		var_96_bool = var_36_bool == (int)7205;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_5089();
		}
		var_102_bool = var_36_bool == (int)7203;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_5089();
		}
		var_106_bool = var_36_bool == (int)7200;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_5325();
		}
		var_112_bool = var_36_bool == (int)7198;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_5089();
		}
		var_116_bool = var_36_bool == (int)7213;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_5095();
		}
		var_122_bool = var_36_bool == (int)7214;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_5095();
		}
		var_126_bool = var_36_bool == (int)7237;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_5101();
		}
		var_132_bool = var_36_bool == (int)7238;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_5101();
		}
		var_136_bool = var_36_bool == (int)7229;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_5101();
		}
		var_140_bool = var_36_bool == (int)7230;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_5101();
		}
		var_144_bool = var_36_bool == (int)7244;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_5359();
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_5119();
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_5113();
		}
		var_158_bool = var_36_bool == (int)7249;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_5113();
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_5119();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_5359();
		}
		var_166_bool = var_36_bool == (int)7250;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_5113();
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_5359();
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_5119();
		}
		var_174_bool = var_35_string == (int)7128;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6465);
			@@@var_0_object:ClearReplies();
			var_191_bool = 0;
			var_191_bool = 0;
			var_192_bool = 0; var_193_object = Obj();
			var_193_object = var_1_object;
			func_5377(var_193_object);
			if(var_192_bool != 0) {
				var_200_bool = 0; var_201_object = Obj();
				var_201_object = var_1_object;
				func_5401(var_201_object);
				if(var_200_bool != 0) {
					var_191_bool = 1;
				}
			}
			if(var_191_bool != 0) {
				@@@var_0_object:AddReply((int)6466, (int)6344, (int)7129);
			}
			var_209_bool = 0;
			var_209_bool = 0;
			var_210_bool = 0; var_211_object = Obj();
			var_211_object = var_1_object;
			func_5641(var_210_bool, var_211_object);
			if(var_210_bool != 0) {
				var_221_bool = 0; var_222_object = Obj();
				var_222_object = var_1_object;
				func_5389(var_222_object);
				if(var_221_bool != 0) {
					var_209_bool = 1;
				}
			}
			if(var_209_bool != 0) {
				@@@var_0_object:AddReply((int)6467, (int)6336, (int)7130);
			}
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_5855(var_232_object);
			if(var_231_bool != 0) {
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_5413(var_238_object);
				if(var_237_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)6470, (int)7167, (int)7133);
			}
			var_246_bool = 0;
			var_246_bool = 0;
			var_247_bool = 0; var_248_object = Obj();
			var_248_object = var_1_object;
			func_5699(var_248_object);
			if(var_247_bool != 0) {
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_5425(var_254_object);
				if(var_253_bool != 0) {
					var_246_bool = 1;
				}
			}
			if(var_246_bool != 0) {
				@@@var_0_object:AddReply((int)6471, (int)7181, (int)7134);
			}
			var_262_bool = 0;
			var_262_bool = 0;
			var_263_bool = 0; var_264_object = Obj();
			var_264_object = var_1_object;
			func_5687(var_264_object);
			if(var_263_bool != 0) {
				var_269_bool = 0; var_270_object = Obj();
				var_270_object = var_1_object;
				func_5437(var_270_object);
				if(var_269_bool != 0) {
					var_262_bool = 1;
				}
			}
			if(var_262_bool != 0) {
				@@@var_0_object:AddReply((int)6474, (int)7191, (int)7137);
			}
			var_278_bool = 0;
			var_278_bool = 0;
			var_279_bool = 0; var_280_object = Obj();
			var_280_object = var_1_object;
			func_5795(var_280_object);
			if(var_279_bool != 0) {
				var_285_bool = 0; var_286_object = Obj();
				var_286_object = var_1_object;
				func_5449(var_286_object);
				if(var_285_bool != 0) {
					var_278_bool = 1;
				}
			}
			if(var_278_bool != 0) {
				@@@var_0_object:AddReply((int)6476, (int)7206, (int)7139);
			}
			var_294_bool = 0;
			var_294_bool = 0;
			var_295_bool = 0; var_296_object = Obj();
			var_296_object = var_1_object;
			func_5617(var_296_object);
			if(var_295_bool != 0) {
				var_301_bool = 0; var_302_object = Obj();
				var_302_object = var_1_object;
				func_5461(var_302_object);
				if(var_301_bool != 0) {
					var_294_bool = 1;
				}
			}
			if(var_294_bool != 0) {
				@@@var_0_object:AddReply((int)6481, (int)7220, (int)7144);
			}
			var_310_bool = 0;
			var_310_bool = 0;
			var_311_bool = 0; var_312_object = Obj();
			var_312_object = var_1_object;
			func_5783(var_312_object);
			if(var_311_bool != 0) {
				var_317_bool = 0; var_318_object = Obj();
				var_318_object = var_1_object;
				func_5473(var_318_object);
				if(var_317_bool != 0) {
					var_310_bool = 1;
				}
			}
			if(var_310_bool != 0) {
				@@@var_0_object:AddReply((int)6488, (int)7241, (int)7151);
			}
			@@@var_0_object:AddReply((int)6502, (int)-1, (int)7166);
			return 0;
		}
		var_330_bool = var_35_string == (int)7241;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6573, (int)7243, (int)7242);
			return 0;
		}
		var_337_bool = var_35_string == (int)7243;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6574);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6575, (int)-1, (int)7244);
			var_343_bool = 0; var_344_object = Obj();
			var_344_object = var_1_object;
			func_5485(var_344_object);
			var_349_bool = var_343_bool == 0; //@nz
			if(var_349_bool != 0) {
				@@@var_0_object:AddReply((int)6576, (int)7248, (int)7245);
			}
			var_353_bool = 0; var_354_object = Obj();
			var_354_object = var_1_object;
			func_5867(var_354_object);
			var_359_bool = var_353_bool == 0; //@nz
			if(var_359_bool != 0) {
				@@@var_0_object:AddReply((int)6577, (int)7247, (int)7246);
			}
			return 0;
		}
		var_364_bool = var_35_string == (int)7247;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6581, (int)-1, (int)7250);
			return 0;
		}
		var_371_bool = var_35_string == (int)7248;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6580, (int)-1, (int)7249);
			return 0;
		}
		var_378_bool = var_35_string == (int)7220;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6553);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6554, (int)7222, (int)7221);
			@@@var_0_object:AddReply((int)6557, (int)7225, (int)7224);
			return 0;
		}
		var_388_bool = var_35_string == (int)7225;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6558);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6559, (int)7231, (int)7226);
			@@@var_0_object:AddReply((int)6560, (int)7228, (int)7227);
			return 0;
		}
		var_398_bool = var_35_string == (int)7228;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6562, (int)-1, (int)7229);
			@@@var_0_object:AddReply((int)6563, (int)-1, (int)7230);
			return 0;
		}
		var_408_bool = var_35_string == (int)7231;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6564);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6565, (int)7234, (int)7232);
			@@@var_0_object:AddReply((int)6566, (int)7234, (int)7233);
			return 0;
		}
		var_418_bool = var_35_string == (int)7222;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6555);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6556, (int)7234, (int)7223);
			return 0;
		}
		var_425_bool = var_35_string == (int)7234;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6568, (int)7236, (int)7235);
			return 0;
		}
		var_432_bool = var_35_string == (int)7236;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6570, (int)-1, (int)7237);
			@@@var_0_object:AddReply((int)6571, (int)-1, (int)7238);
			return 0;
		}
		var_442_bool = var_35_string == (int)7206;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6542, (int)7208, (int)7207);
			@@@var_0_object:AddReply((int)6551, (int)7208, (int)7216);
			return 0;
		}
		var_452_bool = var_35_string == (int)7208;
		if(var_452_bool != 0) {
			var_453_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6544, (int)7210, (int)7209);
			@@@var_0_object:AddReply((int)6552, (int)7212, (int)7218);
			return 0;
		}
		var_462_bool = var_35_string == (int)7210;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6546, (int)7212, (int)7211);
			return 0;
		}
		var_469_bool = var_35_string == (int)7212;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6548, (int)-1, (int)7213);
			@@@var_0_object:AddReply((int)6549, (int)-1, (int)7214);
			return 0;
		}
		var_479_bool = var_35_string == (int)7191;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6526);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6527, (int)7193, (int)7192);
			return 0;
		}
		var_486_bool = var_35_string == (int)7193;
		if(var_486_bool != 0) {
			var_487_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6528);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6529, (int)7195, (int)7194);
			@@@var_0_object:AddReply((int)6531, (int)7197, (int)7196);
			return 0;
		}
		var_496_bool = var_35_string == (int)7197;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6533, (int)-1, (int)7198);
			return 0;
		}
		var_503_bool = var_35_string == (int)7195;
		if(var_503_bool != 0) {
			var_504_object = Obj(); var_505_object = Obj();
			var_504_object = var_1_object;
			var_505_object = var_0_object;
			func_5325();
			var_506_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6530);
			@@@var_0_object:ClearReplies();
			var_508_bool = 0; var_509_object = Obj();
			var_509_object = var_1_object;
			func_5651(var_509_object);
			var_514_bool = var_508_bool == 0; //@nz
			if(var_514_bool != 0) {
				@@@var_0_object:AddReply((int)6534, (int)7201, (int)7199);
			}
			@@@var_0_object:AddReply((int)6535, (int)-1, (int)7200);
			return 0;
		}
		var_522_bool = var_35_string == (int)7201;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6536);
			@@@var_0_object:ClearReplies();
			var_525_bool = 0; var_526_object = Obj();
			var_526_object = var_1_object;
			func_5365(var_526_object);
			var_531_bool = var_525_bool == 0; //@nz
			if(var_531_bool != 0) {
				@@@var_0_object:AddReply((int)6537, (int)7204, (int)7202);
			}
			@@@var_0_object:AddReply((int)6538, (int)-1, (int)7203);
			return 0;
		}
		var_539_bool = var_35_string == (int)7204;
		if(var_539_bool != 0) {
			var_540_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6540, (int)-1, (int)7205);
			return 0;
		}
		var_546_bool = var_35_string == (int)7181;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6518, (int)7183, (int)7182);
			return 0;
		}
		var_553_bool = var_35_string == (int)7183;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6520, (int)7185, (int)7184);
			@@@var_0_object:AddReply((int)6522, (int)7187, (int)7186);
			return 0;
		}
		var_563_bool = var_35_string == (int)7187;
		if(var_563_bool != 0) {
			var_564_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6525, (int)-1, (int)7190);
			return 0;
		}
		var_570_bool = var_35_string == (int)7185;
		if(var_570_bool != 0) {
			var_571_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6524, (int)7187, (int)7188);
			return 0;
		}
		var_577_bool = var_35_string == (int)7167;
		if(var_577_bool != 0) {
			var_578_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6503);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6504, (int)7170, (int)7168);
			@@@var_0_object:AddReply((int)6505, (int)7173, (int)7169);
			return 0;
		}
		var_587_bool = var_35_string == (int)7173;
		if(var_587_bool != 0) {
			var_588_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6510, (int)7175, (int)7174);
			return 0;
		}
		var_594_bool = var_35_string == (int)7175;
		if(var_594_bool != 0) {
			var_595_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6511);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6512, (int)7177, (int)7176);
			return 0;
		}
		var_601_bool = var_35_string == (int)7177;
		if(var_601_bool != 0) {
			var_602_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6513);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6514, (int)-1, (int)7178);
			return 0;
		}
		var_608_bool = var_35_string == (int)7170;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6507, (int)-1, (int)7171);
			@@@var_0_object:AddReply((int)6508, (int)7179, (int)7172);
			return 0;
		}
		var_618_bool = var_35_string == (int)7179;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6515);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6516, (int)-1, (int)7180);
			return 0;
		}
		var_625_bool = var_35_string == (int)6336;
		if(var_625_bool != 0) {
			var_626_object = Obj(); var_627_object = Obj();
			var_626_object = var_1_object;
			var_627_object = var_0_object;
			func_5286();
			var_630_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5752, (int)6338, (int)6337);
			@@@var_0_object:AddReply((int)5756, (int)6342, (int)6341);
			return 0;
		}
		var_639_bool = var_35_string == (int)6342;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5758, (int)-1, (int)6343);
			return 0;
		}
		var_646_bool = var_35_string == (int)6338;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5754, (int)7158, (int)6339);
			@@@var_0_object:AddReply((int)5755, (int)7155, (int)6340);
			return 0;
		}
		var_656_bool = var_35_string == (int)7155;
		if(var_656_bool != 0) {
			var_657_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6493, (int)-1, (int)7156);
			@@@var_0_object:AddReply((int)6494, (int)-1, (int)7157);
			return 0;
		}
		var_666_bool = var_35_string == (int)7158;
		if(var_666_bool != 0) {
			var_667_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6496, (int)-1, (int)7159);
			@@@var_0_object:AddReply((int)6497, (int)-1, (int)7160);
			return 0;
		}
		var_676_bool = var_35_string == (int)6344;
		if(var_676_bool != 0) {
			var_677_bool = 0; var_678_object = Obj();
			var_678_object = var_1_object;
			func_5389(var_678_object);
			if(var_677_bool != 0) {
				var_679_object = Obj(); var_680_object = Obj();
				var_679_object = var_1_object;
				var_680_object = var_0_object;
				func_5107();
				var_683_string = "";
				func_606(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5759);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5760, (int)6346, (int)6345);
				@@@var_0_object:AddReply((int)5769, (int)7161, (int)6354);
				return 0;
			}
		}
		var_692_bool = var_35_string == (int)7161;
		if(var_692_bool != 0) {
			var_693_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6499, (int)6346, (int)7162);
			return 0;
		}
		var_699_bool = var_35_string == (int)6346;
		if(var_699_bool != 0) {
			var_700_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5762, (int)6348, (int)6347);
			@@@var_0_object:AddReply((int)5765, (int)6351, (int)6350);
			return 0;
		}
		var_709_bool = var_35_string == (int)6351;
		if(var_709_bool != 0) {
			var_710_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5766);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5767, (int)7164, (int)6352);
			@@@var_0_object:AddReply((int)5768, (int)-1, (int)6353);
			return 0;
		}
		var_719_bool = var_35_string == (int)7164;
		if(var_719_bool != 0) {
			var_720_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6501, (int)-1, (int)7165);
			return 0;
		}
		var_726_bool = var_35_string == (int)6348;
		if(var_726_bool != 0) {
			var_727_string = "";
			func_606(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5763);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5764, (int)-1, (int)6349);
			return 0;
		}
		var_3_string = true;
		var_732_bool = 0;
		func_5040(var_732_bool);
		if(var_732_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x26f";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4939();
		var_40_bool = var_36_bool == (int)7899;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5125();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5161();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_5331(var_96_object);
		}
		var_122_bool = var_36_bool == (int)7900;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_5125();
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_5161();
		}
		var_128_bool = var_36_bool == (int)7913;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_5125();
		}
		var_132_bool = var_36_bool == (int)7909;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_5125();
		}
		var_136_bool = var_36_bool == (int)7918;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_5131();
		}
		var_142_bool = var_36_bool == (int)7919;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_5131();
		}
		var_146_bool = var_36_bool == (int)7942;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_5137();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_5193();
			var_177_object = Obj(); var_178_object = Obj();
			var_177_object = var_1_object;
			var_178_object = var_0_object;
			func_5253(var_178_object);
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_5054(var_185_object);
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_5065();
		}
		var_198_bool = var_36_bool == (int)7947;
		if(var_198_bool != 0) {
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_object;
			func_5137();
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_5193();
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_5253(var_204_object);
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_5054(var_206_object);
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_5065();
		}
		var_210_bool = var_36_bool == (int)7948;
		if(var_210_bool != 0) {
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_5143();
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_5225();
		}
		var_243_bool = var_36_bool == (int)7949;
		if(var_243_bool != 0) {
			var_244_object = Obj(); var_245_object = Obj();
			var_244_object = var_1_object;
			var_245_object = var_0_object;
			func_5143();
			var_246_object = Obj(); var_247_object = Obj();
			var_246_object = var_1_object;
			var_247_object = var_0_object;
			func_5225();
		}
		var_249_bool = var_36_bool == (int)7950;
		if(var_249_bool != 0) {
			var_250_object = Obj(); var_251_object = Obj();
			var_250_object = var_1_object;
			var_251_object = var_0_object;
			func_5149();
		}
		var_255_bool = var_35_string == (int)7570;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6864);
			@@@var_0_object:ClearReplies();
			var_272_bool = 0;
			var_272_bool = 0;
			var_273_bool = 0; var_274_object = Obj();
			var_274_object = var_1_object;
			func_5497(var_274_object);
			if(var_273_bool != 0) {
				var_281_bool = 0; var_282_object = Obj();
				var_282_object = var_1_object;
				func_5569(var_282_object);
				if(var_281_bool != 0) {
					var_272_bool = 1;
				}
			}
			if(var_272_bool != 0) {
				@@@var_0_object:AddReply((int)6865, (int)7572, (int)7571);
			}
			var_290_bool = 0;
			var_290_bool = 0;
			var_291_bool = 0; var_292_object = Obj();
			var_292_object = var_1_object;
			func_5509(var_292_object);
			if(var_291_bool != 0) {
				var_297_bool = 0; var_298_object = Obj();
				var_298_object = var_1_object;
				func_5581(var_298_object);
				if(var_297_bool != 0) {
					var_290_bool = 1;
				}
			}
			if(var_290_bool != 0) {
				@@@var_0_object:AddReply((int)6868, (int)7575, (int)7574);
			}
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_5521(var_308_object);
			if(var_307_bool != 0) {
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_5593(var_314_object);
				if(var_313_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)6870, (int)7577, (int)7576);
			}
			var_322_bool = 0;
			var_322_bool = 0;
			var_323_bool = 0; var_324_object = Obj();
			var_324_object = var_1_object;
			func_5533(var_324_object);
			if(var_323_bool != 0) {
				var_329_bool = 0; var_330_object = Obj();
				var_330_object = var_1_object;
				func_5605(var_330_object);
				if(var_329_bool != 0) {
					var_322_bool = 1;
				}
			}
			if(var_322_bool != 0) {
				@@@var_0_object:AddReply((int)6874, (int)7581, (int)7580);
			}
			var_338_bool = 0;
			var_338_bool = 0;
			var_339_bool = 0; var_340_object = Obj();
			var_340_object = var_1_object;
			func_5545(var_340_object);
			if(var_339_bool != 0) {
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_5557(var_346_object);
				if(var_345_bool != 0) {
					var_338_bool = 1;
				}
			}
			if(var_338_bool != 0) {
				@@@var_0_object:AddReply((int)6872, (int)7579, (int)7578);
			}
			@@@var_0_object:AddReply((int)7531, (int)-1, (int)8313);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0x88b";
		EMIT "Pop(1)";
		EMIT "Push((int) 9203)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9204)";
		EMIT "Push((int) 10097)";
		EMIT "Push((int) 10096)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9216)";
		EMIT "Push((int) 10111)";
		EMIT "Push((int) 10110)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_358_bool = var_35_string == (int)10111;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9218, (int)10097, (int)10112);
			return 0;
		}
		var_365_bool = var_35_string == (int)10097;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9206, (int)10099, (int)10098);
			@@@var_0_object:AddReply((int)9210, (int)10103, (int)10102);
			return 0;
		}
		var_375_bool = var_35_string == (int)10103;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9211);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9212, (int)10105, (int)10104);
			@@@var_0_object:AddReply((int)9215, (int)10099, (int)10108);
			return 0;
		}
		var_385_bool = var_35_string == (int)10105;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9214, (int)10099, (int)10106);
			return 0;
		}
		var_392_bool = var_35_string == (int)10099;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9207);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9208, (int)-1, (int)10100);
			@@@var_0_object:AddReply((int)9209, (int)-1, (int)10101);
			return 0;
		}
		var_402_bool = var_35_string == (int)7579;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7214, (int)-1, (int)7950);
			return 0;
		}
		var_409_bool = var_35_string == (int)7581;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6875);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7212, (int)-1, (int)7948);
			@@@var_0_object:AddReply((int)7213, (int)-1, (int)7949);
			return 0;
		}
		var_419_bool = var_35_string == (int)7577;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7192, (int)7926, (int)7924);
			@@@var_0_object:AddReply((int)7193, (int)7926, (int)7925);
			@@@var_0_object:AddReply((int)7195, (int)7928, (int)7927);
			return 0;
		}
		var_432_bool = var_35_string == (int)7928;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7197, (int)7926, (int)7929);
			return 0;
		}
		var_439_bool = var_35_string == (int)7926;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7194);
			@@@var_0_object:ClearReplies();
			var_442_bool = 0; var_443_object = Obj();
			var_443_object = var_1_object;
			func_5711(var_443_object);
			if(var_442_bool != 0) {
				@@@var_0_object:AddReply((int)7198, (int)7932, (int)7931);
			}
			var_451_bool = 0; var_452_object = Obj();
			var_452_object = var_1_object;
			func_5711(var_452_object);
			var_453_bool = var_451_bool == 0; //@nz
			if(var_453_bool != 0) {
				@@@var_0_object:AddReply((int)7200, (int)7935, (int)7934);
			}
			return 0;
		}
		var_458_bool = var_35_string == (int)7935;
		if(var_458_bool != 0) {
			var_459_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7201);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7202, (int)7932, (int)7936);
			return 0;
		}
		var_465_bool = var_35_string == (int)7932;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7203, (int)7939, (int)7938);
			@@@var_0_object:AddReply((int)7208, (int)7944, (int)7943);
			return 0;
		}
		var_475_bool = var_35_string == (int)7944;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7210, (int)7939, (int)7945);
			return 0;
		}
		var_482_bool = var_35_string == (int)7939;
		if(var_482_bool != 0) {
			var_483_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7204);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7205, (int)7941, (int)7940);
			@@@var_0_object:AddReply((int)7211, (int)-1, (int)7947);
			return 0;
		}
		var_492_bool = var_35_string == (int)7941;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7207, (int)-1, (int)7942);
			return 0;
		}
		var_499_bool = var_35_string == (int)7575;
		if(var_499_bool != 0) {
			var_500_object = Obj(); var_501_object = Obj();
			var_500_object = var_1_object;
			var_501_object = var_0_object;
			func_5155();
			var_504_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7183, (int)7915, (int)7914);
			return 0;
		}
		var_510_bool = var_35_string == (int)7915;
		if(var_510_bool != 0) {
			var_511_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7185, (int)7917, (int)7916);
			@@@var_0_object:AddReply((int)7189, (int)7921, (int)7920);
			return 0;
		}
		var_520_bool = var_35_string == (int)7921;
		if(var_520_bool != 0) {
			var_521_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7191, (int)7917, (int)7922);
			return 0;
		}
		var_527_bool = var_35_string == (int)7917;
		if(var_527_bool != 0) {
			var_528_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7186);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7187, (int)-1, (int)7918);
			@@@var_0_object:AddReply((int)7188, (int)-1, (int)7919);
			return 0;
		}
		var_537_bool = var_35_string == (int)7572;
		if(var_537_bool != 0) {
			var_538_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6867, (int)7894, (int)7573);
			@@@var_0_object:AddReply((int)7164, (int)7901, (int)7893);
			return 0;
		}
		var_547_bool = var_35_string == (int)7901;
		if(var_547_bool != 0) {
			var_548_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7173, (int)7903, (int)7902);
			return 0;
		}
		var_554_bool = var_35_string == (int)7903;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7174);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7175, (int)7896, (int)7904);
			return 0;
		}
		var_561_bool = var_35_string == (int)7894;
		if(var_561_bool != 0) {
			var_562_object = Obj(); var_563_object = Obj();
			var_562_object = var_1_object;
			var_563_object = var_0_object;
			func_5155();
			var_564_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7166, (int)7896, (int)7895);
			@@@var_0_object:AddReply((int)7176, (int)7907, (int)7906);
			return 0;
		}
		var_573_bool = var_35_string == (int)7907;
		if(var_573_bool != 0) {
			var_574_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7178, (int)7910, (int)7908);
			@@@var_0_object:AddReply((int)7179, (int)-1, (int)7909);
			return 0;
		}
		var_583_bool = var_35_string == (int)7910;
		if(var_583_bool != 0) {
			var_584_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7181, (int)7896, (int)7911);
			@@@var_0_object:AddReply((int)7182, (int)-1, (int)7913);
			return 0;
		}
		var_593_bool = var_35_string == (int)7896;
		if(var_593_bool != 0) {
			var_594_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7167);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7168, (int)7898, (int)7897);
			return 0;
		}
		var_600_bool = var_35_string == (int)7898;
		if(var_600_bool != 0) {
			var_601_string = "";
			func_2187(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7169);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7170, (int)-1, (int)7899);
			@@@var_0_object:AddReply((int)7171, (int)-1, (int)7900);
			return 0;
		}
		var_3_string = true;
		var_609_bool = 0;
		func_5040(var_609_bool);
		if(var_609_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x89c";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4939();
		var_40_bool = var_36_bool == (int)10740;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5269(var_42_object);
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_5071();
		}
		var_65_bool = var_35_string == (int)10752;
		if(var_65_bool != 0) {
			var_66_bool = 0;
			var_66_bool = 0;
			var_67_bool = 0; var_68_object = Obj();
			var_68_object = var_1_object;
			func_5807(var_68_object);
			if(var_67_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				var_76_object = var_1_object;
				func_5629(var_76_object);
				var_81_bool = var_75_bool == 0; //@nz
				if(var_81_bool != 0) {
					var_66_bool = 1;
				}
			}
			if(var_66_bool != 0) {
				var_82_object = Obj(); var_83_object = Obj();
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_5347();
				var_86_string = "";
				func_3251(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9762);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9763, (int)10732, (int)10753);
				@@@var_0_object:AddReply((int)9770, (int)10754, (int)10761);
				return 0;
			}
			var_108_string = "";
			func_3251(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15310);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15311, (int)-1, (int)16549);
			return 0;
		}
		var_114_bool = var_35_string == (int)10754;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_3251(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9765, (int)10756, (int)10755);
			@@@var_0_object:AddReply((int)9769, (int)10756, (int)10759);
			return 0;
		}
		var_124_bool = var_35_string == (int)10756;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_3251(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9766);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9767, (int)-1, (int)10757);
			@@@var_0_object:AddReply((int)9768, (int)-1, (int)10758);
			return 0;
		}
		var_134_bool = var_35_string == (int)10732;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_3251(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9746);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9747, (int)10734, (int)10733);
			@@@var_0_object:AddReply((int)9757, (int)10734, (int)10744);
			@@@var_0_object:AddReply((int)9758, (int)10747, (int)10746);
			return 0;
		}
		var_147_bool = var_35_string == (int)10747;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_3251(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9760, (int)10734, (int)10748);
			@@@var_0_object:AddReply((int)9761, (int)10734, (int)10750);
			return 0;
		}
		var_157_bool = var_35_string == (int)10734;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_3251(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9749, (int)10736, (int)10735);
			@@@var_0_object:AddReply((int)9756, (int)-1, (int)10743);
			return 0;
		}
		var_167_bool = var_35_string == (int)10736;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_3251(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9751, (int)10738, (int)10737);
			@@@var_0_object:AddReply((int)9755, (int)10738, (int)10741);
			return 0;
		}
		var_177_bool = var_35_string == (int)10738;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_3251(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9752);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9753, (int)-1, (int)10739);
			@@@var_0_object:AddReply((int)9754, (int)-1, (int)10740);
			return 0;
		}
		var_3_string = true;
		var_186_bool = 0;
		func_5040(var_186_bool);
		if(var_186_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcc4";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4939();
		var_40_bool = var_36_bool == (int)14987;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5292();
		}
		var_46_bool = var_35_string == (int)14986;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_3649(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13720);
			@@@var_0_object:ClearReplies();
			var_63_bool = 0; var_64_object = Obj();
			var_64_object = var_1_object;
			func_5675(var_64_object);
			if(var_63_bool != 0) {
				@@@var_0_object:AddReply((int)13721, (int)13787, (int)14987);
			}
			@@@var_0_object:AddReply((int)13722, (int)-1, (int)14988);
			return 0;
		}
		var_78_bool = var_35_string == (int)13787;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_3649(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12613);
			@@@var_0_object:ClearReplies();
			var_81_bool = 0; var_82_object = Obj();
			var_82_object = var_1_object;
			func_5663(var_82_object);
			if(var_81_bool != 0) {
				@@@var_0_object:AddReply((int)12614, (int)13789, (int)13788);
			}
			@@@var_0_object:AddReply((int)12632, (int)13812, (int)13811);
			var_93_bool = 0; var_94_object = Obj();
			var_94_object = var_1_object;
			func_5663(var_94_object);
			var_95_bool = var_93_bool == 0; //@nz
			if(var_95_bool != 0) {
				@@@var_0_object:AddReply((int)12631, (int)13789, (int)13809);
			}
			return 0;
		}
		var_100_bool = var_35_string == (int)13812;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_3649(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12633);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12634, (int)13791, (int)13813);
			return 0;
		}
		var_107_bool = var_35_string == (int)13789;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_3649(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12616, (int)13791, (int)13790);
			@@@var_0_object:AddReply((int)12623, (int)13800, (int)13799);
			return 0;
		}
		var_117_bool = var_35_string == (int)13800;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_3649(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12624);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12625, (int)13802, (int)13801);
			@@@var_0_object:AddReply((int)12629, (int)13802, (int)13805);
			return 0;
		}
		var_127_bool = var_35_string == (int)13802;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_3649(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12627, (int)-1, (int)13803);
			@@@var_0_object:AddReply((int)12628, (int)-1, (int)13804);
			return 0;
		}
		var_137_bool = var_35_string == (int)13791;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_3649(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12617);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12618, (int)13793, (int)13792);
			@@@var_0_object:AddReply((int)12622, (int)13802, (int)13797);
			return 0;
		}
		var_147_bool = var_35_string == (int)13793;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_3649(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12621, (int)13802, (int)13795);
			@@@var_0_object:AddReply((int)12620, (int)-1, (int)13794);
			return 0;
		}
		var_3_string = true;
		var_156_bool = 0;
		func_5040(var_156_bool);
		if(var_156_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe52";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4939();
		var_40_bool = var_35_string == (int)14165;
		if(var_40_bool != 0) {
			var_41_bool = 0;
			var_41_bool = 0;
			var_42_bool = 0;
			var_42_bool = 0;
			var_43_bool = 0; var_44_object = Obj();
			var_44_object = var_1_object;
			func_5819(var_44_object);
			var_51_bool = var_43_bool == 0; //@nz
			if(var_51_bool != 0) {
				var_52_bool = 0; var_53_object = Obj();
				var_53_object = var_1_object;
				func_5831(var_53_object);
				var_58_bool = var_52_bool == 0; //@nz
				if(var_58_bool != 0) {
					var_42_bool = 1;
				}
			}
			if(var_42_bool != 0) {
				var_59_bool = 0; var_60_object = Obj();
				var_60_object = var_1_object;
				func_5843(var_60_object);
				if(var_59_bool != 0) {
					var_41_bool = 1;
				}
			}
			if(var_41_bool != 0) {
				var_65_object = Obj(); var_66_object = Obj();
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_5353();
				var_69_string = "";
				func_4053(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12960);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12961, (int)14167, (int)14166);
				return 0;
			}
			var_88_string = "";
			func_4053(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12967, (int)-1, (int)14172);
			return 0;
		}
		var_94_bool = var_35_string == (int)14167;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_4053(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12962);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12963, (int)14169, (int)14168);
			return 0;
		}
		var_101_bool = var_35_string == (int)14169;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_4053(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12965, (int)-1, (int)14170);
			return 0;
		}
		var_3_string = true;
		var_107_bool = 0;
		func_5040(var_107_bool);
		if(var_107_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfe6";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	if((int)1 != 0) {
		func_4939();
		var_40_bool = var_36_int == (int)15743;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5304();
		}
		var_71_bool = var_36_int == (int)15478;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_5313();
		}
		var_77_bool = var_36_int == (int)15490;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_5319();
		}
		var_83_bool = var_35_int == (int)15459;
		if(var_83_bool != 0) {
			var_84_bool = 0;
			var_84_bool = 0;
			var_85_bool = 0; var_86_object = Obj();
			var_86_object = var_1_object;
			func_5723(var_86_object);
			if(var_85_bool != 0) {
				var_93_bool = 0; var_94_object = Obj();
				var_94_object = var_1_object;
				func_5735(var_94_object);
				if(var_93_bool != 0) {
					var_84_bool = 1;
				}
			}
			if(var_84_bool != 0) {
				var_99_object = Obj(); var_100_object = Obj();
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_5298();
				var_103_string = "";
				func_4366(var_36_int, "Neutral");
				@@@var_0_object:SetMessage((int)14241);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14242, (int)15461, (int)15460);
				return 0;
			}
			var_122_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14258);
			@@@var_0_object:ClearReplies();
			var_124_bool = 0;
			var_124_bool = 0;
			var_125_bool = 0; var_126_object = Obj();
			var_126_object = var_1_object;
			func_5747(var_126_object);
			if(var_125_bool != 0) {
				var_131_bool = 0; var_132_object = Obj();
				var_132_object = var_1_object;
				func_5759(var_132_object);
				if(var_131_bool != 0) {
					var_124_bool = 1;
				}
			}
			if(var_124_bool != 0) {
				@@@var_0_object:AddReply((int)14259, (int)15479, (int)15478);
			}
			var_140_bool = 0; var_141_object = Obj();
			var_141_object = var_1_object;
			func_5771(var_141_object);
			if(var_140_bool != 0) {
				@@@var_0_object:AddReply((int)14271, (int)15491, (int)15490);
			}
			@@@var_0_object:AddReply((int)14278, (int)-1, (int)15498);
			return 0;
		}
		var_153_bool = var_35_int == (int)15491;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14273, (int)15493, (int)15492);
			return 0;
		}
		var_160_bool = var_35_int == (int)15493;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14274);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14275, (int)15495, (int)15494);
			return 0;
		}
		var_167_bool = var_35_int == (int)15495;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14276);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14277, (int)-1, (int)15496);
			return 0;
		}
		var_174_bool = var_35_int == (int)15479;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14261, (int)15481, (int)15480);
			return 0;
		}
		var_181_bool = var_35_int == (int)15481;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14263, (int)15483, (int)15482);
			@@@var_0_object:AddReply((int)14268, (int)15488, (int)15487);
			return 0;
		}
		var_191_bool = var_35_int == (int)15488;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14269);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14270, (int)-1, (int)15489);
			return 0;
		}
		var_198_bool = var_35_int == (int)15483;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14265, (int)15485, (int)15484);
			return 0;
		}
		var_205_bool = var_35_int == (int)15485;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14267, (int)-1, (int)15486);
			return 0;
		}
		var_212_bool = var_35_int == (int)15461;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14244, (int)15463, (int)15462);
			return 0;
		}
		var_219_bool = var_35_int == (int)15463;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14245);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14246, (int)15465, (int)15464);
			@@@var_0_object:AddReply((int)14257, (int)15465, (int)15475);
			return 0;
		}
		var_229_bool = var_35_int == (int)15465;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14248, (int)15467, (int)15466);
			return 0;
		}
		var_236_bool = var_35_int == (int)15467;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14250, (int)15469, (int)15468);
			@@@var_0_object:AddReply((int)14508, (int)15742, (int)15746);
			return 0;
		}
		var_246_bool = var_35_int == (int)15469;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14252, (int)15471, (int)15470);
			@@@var_0_object:AddReply((int)14506, (int)15748, (int)15744);
			return 0;
		}
		var_256_bool = var_35_int == (int)15748;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14511, (int)15751, (int)15750);
			@@@var_0_object:AddReply((int)14510, (int)-1, (int)15749);
			return 0;
		}
		var_266_bool = var_35_int == (int)15751;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14513, (int)-1, (int)15752);
			return 0;
		}
		var_273_bool = var_35_int == (int)15471;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14254, (int)15742, (int)15472);
			return 0;
		}
		var_280_bool = var_35_int == (int)15742;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_4366(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14505, (int)-1, (int)15743);
			return 0;
		}
		var_3_string = true;
		var_286_bool = 0;
		func_5040(var_286_bool);
		if(var_286_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x111f";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_6063();
	var_37_bool = 0;
	func_4856(var_37_bool);
	var_40_bool = var_37_bool == 0; //@nz
	if(var_40_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_41_string = "";
	func_4921("Neutral");
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


func_3586(var_0_object, var_1_object, var_2_object, var_3_object, var_554_object, var_555_object)
{
	var_0_object = var_555_object;
	var_1_object = var_554_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_561_string = "";
		func_3649(var_555_object, "Neutral");
		@@@var_0_object:SetMessage((int)13720);
		@@@var_0_object:ClearReplies();
		var_567_bool = 0; var_568_object = Obj();
		var_568_object = var_1_object;
		func_5675(var_568_object);
		if(var_567_bool != 0) {
			@@@var_0_object:AddReply((int)13721, (int)13787, (int)14987);
		}
		@@@var_0_object:AddReply((int)13722, (int)-1, (int)14988);
		goto Label_3619;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe06";
	}
Label_3619:
	var_579_bool = 0;
	func_5040(var_579_bool);
	if(var_579_bool != 0) {

	Label_3623:
		lshWaitForAnimEnd();
		var_580_object = var_3_object;
		if(var_580_object != 0) {
		} else {
			var_581_string = "";
			var_581_string = var_2_object;
			func_4921(var_581_string);
			goto Label_3623;
	}
		PlayAnimation("all", "idle");

	Label_3638:
		WaitForAnimEnd();
		var_584_object = var_3_object;
		if(var_584_object != 0) {
			goto Label_3648;
		}
		PlayAnimation("all", "idle");
		goto Label_3638;
	}
	goto Label_3648;
	
Label_3648:
	return 0;
	
}


func_5125()
{
	SetVariable("ood2Andrei1", (int)1);
	return 0;
}


func_5641(var_210_bool, var_211_object)
{
	var_212_bool = 0; var_213_object = Obj();
	var_211_object = var_213_object;
	func_5879(var_213_object);
	if(var_212_bool != 0) {
		var_210_bool = 1;
		return 0;
	}
	var_210_bool = 0;
	return 0;
}


func_5131()
{
	SetVariable("ood2Andrei2", (int)1);
	return 0;
}


func_5137()
{
	SetVariable("ood2Andrei3", (int)1);
	return 0;
}


func_5651(var_508_bool)
{
	var_510_int = 0; var_511_string = "";
	func_4956(var_510_int, "KnowMark");
	var_513_bool = var_510_int == (int)1;
	if(var_513_bool != 0) {
		var_508_bool = 1;
		return 0;
	}
	var_508_bool = 0;
	return 0;
}


func_3095(var_0_object, var_464_int, var_465_object)
{
	var_467_object = Obj(); var_468_bool = 0; var_469_int = 0; var_470_bool = 0; var_471_object = Obj(); var_472_bool = 0; var_473_int = 0; var_474_bool = 0;
	var_0_object = var_465_object;
	var_475_bool = 0; var_476_object = Obj();
	var_465_object = var_476_object;
	func_4861(var_475_bool, var_476_object);
	var_477_bool = var_475_bool == 0; //@nz
	if(var_477_bool != 0) {
		var_464_int = -2;
		return 8;
	}
	CreateDialog(var_471_object);
	var_478_int = 0;
	func_5036(var_478_int);
	@@var_471_object:SetNPCName(var_478_int);
	var_479_string = "";
	func_5038(var_479_string);
	@@var_471_object:SetPhoto(var_479_string);
	var_480_int = 0;
	func_5982(var_480_int);
	@@var_471_object:SetPlayerName(var_480_int);
	IsOverrideActive(var_472_bool);
	var_481_bool = var_472_bool;
	if(var_481_bool != 0) {
		var_464_int = -2;
		return 8;
	}
	DoDialog(var_471_object);
	var_482_object = Obj(); var_483_object = Obj();
	var_465_object = var_482_object;
	var_471_object = var_483_object;
	TaskCall(9);
	func_3158(var_484_object, var_485_object, var_486_string, var_487_bool, var_482_object, var_483_object);
	TaskReturn();
	@@var_471_object:IsDialogEnd(var_474_bool);
	
Label_3140:
	var_532_bool = var_474_bool == 0; //@nz
	if(var_532_bool != 0) {
		sync();
		@@var_471_object:IsDialogEnd(var_474_bool);
		goto Label_3140;
	}
	var_465_object = Obj();
	func_4917();
	StopDialog(var_471_object);
	@@var_471_object:GetReturnValue((int)-1);
	var_473_int = var_464_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5143()
{
	SetVariable("ood2Andrei4", (int)1);
	return 0;
}


func_5149()
{
	SetVariable("ood2Andrei5", (int)1);
	return 0;
}


func_5663(var_81_bool)
{
	var_83_int = 0; var_84_string = "";
	func_4956(var_83_int, "d5q01");
	var_86_bool = var_83_int == (int)1000;
	if(var_86_bool != 0) {
		var_81_bool = 1;
		return 0;
	}
	var_81_bool = 0;
	return 0;
}


func_5155()
{
	SetVariable("KnowAgo", (int)1);
	return 0;
}


func_5161()
{
	var_47_object = Obj(); var_48_object = Obj();
	SetVariable("d2q02", (int)2);
	func_5932(Obj());
	var_51_object = var_48_object;
	var_62_float = 0;
	func_4999(var_62_float);
	@@var_48_object:AddMark("d2q02AndreiGotoPetr", "pt_map_petr", (int)0, (int)15273, var_62_float);
	var_69_float = 0;
	func_4999(var_69_float);
	@@var_48_object:AddMark("d2q02AndreiGotoPetrSelf", "pt_map_andrei", (int)0, (int)15279, var_69_float);
	func_6031();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5675(var_63_bool)
{
	var_65_int = 0; var_66_string = "";
	func_4956(var_65_int, "ood6Andrei1");
	var_70_bool = var_65_int == (int)0;
	if(var_70_bool != 0) {
		var_63_bool = 1;
		return 0;
	}
	var_63_bool = 0;
	return 0;
}


func_49(var_0_object, var_41_int, var_42_object)
{
	var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0;
	var_0_object = var_42_object;
	var_52_bool = 0; var_53_object = Obj();
	var_42_object = var_53_object;
	func_4861(var_52_bool, var_53_object);
	var_92_bool = var_52_bool == 0; //@nz
	if(var_92_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	CreateDialog(var_48_object);
	var_93_int = 0;
	func_5036(var_93_int);
	@@var_48_object:SetNPCName(var_93_int);
	var_94_string = "";
	func_5038(var_94_string);
	@@var_48_object:SetPhoto(var_94_string);
	var_95_int = 0;
	func_5982(var_95_int);
	@@var_48_object:SetPlayerName(var_95_int);
	IsOverrideActive(var_49_bool);
	var_103_bool = var_49_bool;
	if(var_103_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	DoDialog(var_48_object);
	var_104_object = Obj(); var_105_object = Obj();
	var_42_object = var_104_object;
	var_48_object = var_105_object;
	TaskCall(3);
	func_112(var_106_object, var_107_object, var_108_string, var_109_bool, var_104_object, var_105_object);
	TaskReturn();
	@@var_48_object:IsDialogEnd(var_51_bool);
	
Label_94:
	var_145_bool = var_51_bool == 0; //@nz
	if(var_145_bool != 0) {
		sync();
		@@var_48_object:IsDialogEnd(var_51_bool);
		goto Label_94;
	}
	var_42_object = Obj();
	func_4917();
	StopDialog(var_48_object);
	@@var_48_object:GetReturnValue((int)-1);
	var_50_int = var_41_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5687(var_263_bool)
{
	var_265_int = 0; var_266_string = "";
	func_4956(var_265_int, "KnowAnna");
	var_268_bool = var_265_int == (int)1;
	if(var_268_bool != 0) {
		var_263_bool = 1;
		return 0;
	}
	var_263_bool = 0;
	return 0;
}


func_3649(var_2_object, var_47_string)
{
	var_48_bool = 0;
	func_5040(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 0;
	}
	var_50_bool = var_47_string == var_2_object;
	if(var_50_bool != 0) {
		return 0;
	}
	var_51_string = "";
	var_47_string = var_51_string;
	func_4921(var_51_string);
	var_2_object = var_47_string;
	return 0;
}


func_5699(var_247_bool)
{
	var_249_int = 0; var_250_string = "";
	func_4956(var_249_int, "KnowEva");
	var_252_bool = var_249_int == (int)1;
	if(var_252_bool != 0) {
		var_247_bool = 1;
		return 0;
	}
	var_247_bool = 0;
	return 0;
}


func_5193()
{
	var_153_object = Obj(); var_154_object = Obj();
	SetVariable("d2q02", (int)6);
	func_5932(Obj());
	var_157_object = var_154_object;
	var_162_float = 0;
	func_4999(var_162_float);
	@@var_154_object:AddMark("d2q02AndreiGotoGrif", "pt_map_grif", (int)0, (int)15277, var_162_float);
	var_167_float = 0;
	func_4999(var_167_float);
	@@var_154_object:AddMark("d2q02AndreiGotoGrifSelf", "pt_map_andrei", (int)0, (int)15282, var_167_float);
	func_6015();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5711(var_442_bool)
{
	var_444_int = 0; var_445_string = "";
	func_4956(var_444_int, "KnowGrif");
	var_447_bool = var_444_int == (int)1;
	if(var_447_bool != 0) {
		var_442_bool = 1;
		return 0;
	}
	var_442_bool = 0;
	return 0;
}


func_3158(var_0_object, var_1_object, var_2_object, var_3_object, var_482_object, var_483_object)
{
	var_0_object = var_483_object;
	var_1_object = var_482_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_489_bool = 0;
		var_489_bool = 0;
		var_490_bool = 0; var_491_object = Obj();
		var_491_object = var_1_object;
		func_5807(var_491_object);
		if(var_490_bool != 0) {
			var_496_bool = 0; var_497_object = Obj();
			var_497_object = var_1_object;
			func_5629(var_497_object);
			var_502_bool = var_496_bool == 0; //@nz
			if(var_502_bool != 0) {
				var_489_bool = 1;
			}
		}
		if(var_489_bool != 0) {
			var_503_object = Obj(); var_504_object = Obj();
			var_503_object = var_1_object;
			var_504_object = var_0_object;
			func_5347();
			var_507_string = "";
			func_3251(var_483_object, "Neutral");
			@@@var_0_object:SetMessage((int)9762);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9763, (int)10732, (int)10753);
			@@@var_0_object:AddReply((int)9770, (int)10754, (int)10761);
		} else {
				var_527_string = "";
				func_3251(var_483_object, "Neutral");
				@@@var_0_object:SetMessage((int)15310);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15311, (int)-1, (int)16549);
				goto Label_3221;
		}
	}
Label_3221:
	var_519_bool = 0;
	func_5040(var_519_bool);
	if(var_519_bool != 0) {

	Label_3225:
		lshWaitForAnimEnd();
		var_520_object = var_3_object;
		if(var_520_object != 0) {
		} else {
			var_521_string = "";
			var_521_string = var_2_object;
			func_4921(var_521_string);
			goto Label_3225;
	}
		PlayAnimation("all", "idle");

	Label_3240:
		WaitForAnimEnd();
		var_524_object = var_3_object;
		if(var_524_object != 0) {
			goto Label_3250;
		}
		PlayAnimation("all", "idle");
		goto Label_3240;

	}
	goto Label_3250;
	
Label_3250:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc5a";


func_5723(var_85_bool)
{
	var_87_int = 0; var_88_string = "";
	func_4956(var_87_int, "d11q01");
	var_92_bool = var_87_int == (int)3;
	if(var_92_bool != 0) {
		var_85_bool = 1;
		return 0;
	}
	var_85_bool = 0;
	return 0;
}


func_4187(var_0_object, var_668_int, var_669_object)
{
	var_671_object = Obj(); var_672_bool = 0; var_673_int = 0; var_674_bool = 0; var_675_object = Obj(); var_676_bool = 0; var_677_int = 0; var_678_bool = 0;
	var_0_object = var_669_object;
	var_679_bool = 0; var_680_object = Obj();
	var_669_object = var_680_object;
	func_4861(var_679_bool, var_680_object);
	var_681_bool = var_679_bool == 0; //@nz
	if(var_681_bool != 0) {
		var_668_int = -2;
		return 8;
	}
	CreateDialog(var_675_object);
	var_682_int = 0;
	func_5036(var_682_int);
	@@var_675_object:SetNPCName(var_682_int);
	var_683_string = "";
	func_5038(var_683_string);
	@@var_675_object:SetPhoto(var_683_string);
	var_684_int = 0;
	func_5982(var_684_int);
	@@var_675_object:SetPlayerName(var_684_int);
	IsOverrideActive(var_676_bool);
	var_685_bool = var_676_bool;
	if(var_685_bool != 0) {
		var_668_int = -2;
		return 8;
	}
	DoDialog(var_675_object);
	var_686_object = Obj(); var_687_object = Obj();
	var_669_object = var_686_object;
	var_675_object = var_687_object;
	TaskCall(15);
	func_4250(var_688_object, var_689_object, var_690_string, var_691_bool, var_686_object, var_687_object);
	TaskReturn();
	@@var_675_object:IsDialogEnd(var_678_bool);
	
Label_4232:
	var_757_bool = var_678_bool == 0; //@nz
	if(var_757_bool != 0) {
		sync();
		@@var_675_object:IsDialogEnd(var_678_bool);
		goto Label_4232;
	}
	var_669_object = Obj();
	func_4917();
	StopDialog(var_675_object);
	@@var_675_object:GetReturnValue((int)-1);
	var_677_int = var_668_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_606(var_2_object, var_175_string)
{
	var_176_bool = 0;
	func_5040(var_176_bool);
	var_177_bool = var_176_bool == 0; //@nz
	if(var_177_bool != 0) {
		return 0;
	}
	var_178_bool = var_175_string == var_2_object;
	if(var_178_bool != 0) {
		return 0;
	}
	var_179_string = "";
	var_175_string = var_179_string;
	func_4921(var_179_string);
	var_2_object = var_175_string;
	return 0;
}


func_5735(var_93_bool)
{
	var_95_int = 0; var_96_string = "";
	func_4956(var_95_int, "ood11Andrei1");
	var_98_bool = var_95_int == (int)0;
	if(var_98_bool != 0) {
		var_93_bool = 1;
		return 0;
	}
	var_93_bool = 0;
	return 0;
}


func_5225()
{
	var_217_object = Obj(); var_218_object = Obj();
	SetVariable("d2q02", (int)8);
	func_5932(Obj());
	var_221_object = var_218_object;
	var_226_float = 0;
	func_4999(var_226_float);
	@@var_218_object:AddMark("d2q02ReadyAndrei", "pt_map_andrei", (int)0, (int)15284, var_226_float);
	func_6047();
	var_236_bool = 0; var_237_string = ""; var_238_string = "";
	func_4987(var_236_bool, "quest_d2_02", "put_patrol");
	return 2;
}
EMIT "Stack[-1] = 0";


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_104_object, var_105_object)
{
	var_0_object = var_105_object;
	var_1_object = var_104_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_111_object = Obj(); var_112_object = Obj();
		var_111_object = var_1_object;
		var_112_object = var_0_object;
		func_5280();
		var_115_string = "";
		func_175(var_105_object, "Neutral");
		@@@var_0_object:SetMessage((int)187);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)190, (int)228, (int)227);
		@@@var_0_object:AddReply((int)188, (int)226, (int)225);
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	var_137_bool = 0;
	func_5040(var_137_bool);
	if(var_137_bool != 0) {

	Label_149:
		lshWaitForAnimEnd();
		var_138_object = var_3_object;
		if(var_138_object != 0) {
		} else {
			var_139_string = "";
			var_139_string = var_2_object;
			func_4921(var_139_string);
			goto Label_149;
	}
		PlayAnimation("all", "idle");

	Label_164:
		WaitForAnimEnd();
		var_142_object = var_3_object;
		if(var_142_object != 0) {
			goto Label_174;
		}
		PlayAnimation("all", "idle");
		goto Label_164;
	}
	goto Label_174;
	
Label_174:
	return 0;
	
}


func_5747(var_125_bool)
{
	var_127_int = 0; var_128_string = "";
	func_4956(var_127_int, "d11q01");
	var_130_bool = var_127_int == (int)4;
	if(var_130_bool != 0) {
		var_125_bool = 1;
		return 0;
	}
	var_125_bool = 0;
	return 0;
}


func_5759(var_131_bool)
{
	var_133_int = 0; var_134_string = "";
	func_4956(var_133_int, "ood11Andrei2");
	var_136_bool = var_133_int == (int)0;
	if(var_136_bool != 0) {
		var_131_bool = 1;
		return 0;
	}
	var_131_bool = 0;
	return 0;
}


func_5253(var_178_object)
{
	var_179_object = Obj(); var_180_string = ""; var_181_float = 0;
	func_5932(Obj());
	var_182_object = var_179_object;
	func_5949(var_179_object, "pt_map_grif", (float)2);
	var_183_object = Obj();
	func_5932(var_183_object);
	@@var_178_object:ShowMap(var_183_object);
	return 0;
}


func_2187(var_2_object, var_256_string)
{
	var_257_bool = 0;
	func_5040(var_257_bool);
	var_258_bool = var_257_bool == 0; //@nz
	if(var_258_bool != 0) {
		return 0;
	}
	var_259_bool = var_256_string == var_2_object;
	if(var_259_bool != 0) {
		return 0;
	}
	var_260_string = "";
	var_256_string = var_260_string;
	func_4921(var_260_string);
	var_2_object = var_256_string;
	return 0;
}


func_5771(var_140_bool)
{
	var_142_int = 0; var_143_string = "";
	func_4956(var_142_int, "ood11Andrei3");
	var_145_bool = var_142_int == (int)0;
	if(var_145_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


func_5269(var_41_object)
{
	Trace("tvirin is given");
	var_44_object = Obj(); var_45_string = ""; var_46_int = 0;
	var_41_object = var_44_object;
	func_4974(var_44_object, "tvirin", (int)1);
	return 0;
}


func_5783(var_311_bool)
{
	var_313_int = 0; var_314_string = "";
	func_4956(var_313_int, "KnowLaska");
	var_316_bool = var_313_int == (int)1;
	if(var_316_bool != 0) {
		var_311_bool = 1;
		return 0;
	}
	var_311_bool = 0;
	return 0;
}


func_4250(var_0_object, var_1_object, var_2_object, var_3_object, var_686_object, var_687_object)
{
	var_0_object = var_687_object;
	var_1_object = var_686_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_693_bool = 0;
		var_693_bool = 0;
		var_694_bool = 0; var_695_object = Obj();
		var_695_object = var_1_object;
		func_5723(var_695_object);
		if(var_694_bool != 0) {
			var_700_bool = 0; var_701_object = Obj();
			var_701_object = var_1_object;
			func_5735(var_701_object);
			if(var_700_bool != 0) {
				var_693_bool = 1;
			}
		}
		if(var_693_bool != 0) {
			var_706_object = Obj(); var_707_object = Obj();
			var_706_object = var_1_object;
			var_707_object = var_0_object;
			func_5298();
			var_710_string = "";
			func_4366(var_687_object, "Neutral");
			@@@var_0_object:SetMessage((int)14241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14242, (int)15461, (int)15460);
		} else {
				var_727_string = "";
				func_4366(var_687_object, "Neutral");
				@@@var_0_object:SetMessage((int)14258);
				@@@var_0_object:ClearReplies();
				var_729_bool = 0;
				var_729_bool = 0;
				var_730_bool = 0; var_731_object = Obj();
				var_731_object = var_1_object;
				func_5747(var_731_object);
				if(var_730_bool != 0) {
					var_736_bool = 0; var_737_object = Obj();
					var_737_object = var_1_object;
					func_5759(var_737_object);
					if(var_736_bool != 0) {
						var_729_bool = 1;
					}
				}
				if(var_729_bool != 0) {
					@@@var_0_object:AddReply((int)14259, (int)15479, (int)15478);
				}
				var_745_bool = 0; var_746_object = Obj();
				var_746_object = var_1_object;
				func_5771(var_746_object);
				if(var_745_bool != 0) {
					@@@var_0_object:AddReply((int)14271, (int)15491, (int)15490);
				}
				@@@var_0_object:AddReply((int)14278, (int)-1, (int)15498);
				goto Label_4336;
		}
	}
Label_4336:
	var_719_bool = 0;
	func_5040(var_719_bool);
	if(var_719_bool != 0) {

	Label_4340:
		lshWaitForAnimEnd();
		var_720_object = var_3_object;
		if(var_720_object != 0) {
		} else {
			var_721_string = "";
			var_721_string = var_2_object;
			func_4921(var_721_string);
			goto Label_4340;
	}
		PlayAnimation("all", "idle");

	Label_4355:
		WaitForAnimEnd();
		var_724_object = var_3_object;
		if(var_724_object != 0) {
			goto Label_4365;
		}
		PlayAnimation("all", "idle");
		goto Label_4355;

	}
	goto Label_4365;
	
Label_4365:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x109e";


func_5280()
{
	SetVariable("KnowAndrei", (int)1);
	return 0;
}


func_5795(var_279_bool)
{
	var_281_int = 0; var_282_string = "";
	func_4956(var_281_int, "KnowMaria");
	var_284_bool = var_281_int == (int)1;
	if(var_284_bool != 0) {
		var_279_bool = 1;
		return 0;
	}
	var_279_bool = 0;
	return 0;
}


func_5286()
{
	SetVariable("KnowNina", (int)1);
	return 0;
}


func_5292()
{
	SetVariable("ood6Andrei1", (int)1);
	return 0;
}


func_175(var_2_object, var_45_string)
{
	var_46_bool = 0;
	func_5040(var_46_bool);
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
	func_4921(var_49_string);
	var_2_object = var_45_string;
	return 0;
}


func_5807(var_67_bool)
{
	var_69_int = 0; var_70_string = "";
	func_4956(var_69_int, "ood3Andrei1");
	var_74_bool = var_69_int == (int)0;
	if(var_74_bool != 0) {
		var_67_bool = 1;
		return 0;
	}
	var_67_bool = 0;
	return 0;
}


func_5298()
{
	SetVariable("ood11Andrei1", (int)1);
	return 0;
}


func_3251(var_2_object, var_86_string)
{
	var_87_bool = 0;
	func_5040(var_87_bool);
	var_88_bool = var_87_bool == 0; //@nz
	if(var_88_bool != 0) {
		return 0;
	}
	var_89_bool = var_86_string == var_2_object;
	if(var_89_bool != 0) {
		return 0;
	}
	var_90_string = "";
	var_86_string = var_90_string;
	func_4921(var_90_string);
	var_2_object = var_86_string;
	return 0;
}


func_5304()
{
	SetVariable("d11q01", (int)4);
	func_5999();
	return 0;
}


func_5819(var_43_bool)
{
	var_45_int = 0; var_46_string = "";
	func_4956(var_45_int, "d10q01");
	var_50_bool = var_45_int == (int)0;
	if(var_50_bool != 0) {
		var_43_bool = 1;
		return 0;
	}
	var_43_bool = 0;
	return 0;
}


func_5313()
{
	SetVariable("ood11Andrei2", (int)1);
	return 0;
}


func_5831(var_52_bool)
{
	var_54_int = 0; var_55_string = "";
	func_4956(var_54_int, "d10q01");
	var_57_bool = var_54_int == (int)1000;
	if(var_57_bool != 0) {
		var_52_bool = 1;
		return 0;
	}
	var_52_bool = 0;
	return 0;
}


func_5319()
{
	SetVariable("ood11Andrei3", (int)1);
	return 0;
}


func_5325()
{
	SetVariable("KnowMark", (int)1);
	return 0;
}


func_5331(var_96_object)
{
	var_97_object = Obj(); var_98_string = ""; var_99_float = 0;
	func_5932(Obj());
	var_100_object = var_97_object;
	func_5949(var_97_object, "pt_map_petr", (float)2);
	var_120_object = Obj();
	func_5932(var_120_object);
	@@var_96_object:ShowMap(var_120_object);
	return 0;
}


func_5843(var_59_bool)
{
	var_61_int = 0; var_62_string = "";
	func_4956(var_61_int, "ood10Andrei1");
	var_64_bool = var_61_int == (int)0;
	if(var_64_bool != 0) {
		var_59_bool = 1;
		return 0;
	}
	var_59_bool = 0;
	return 0;
}


func_5855(var_231_bool)
{
	var_233_int = 0; var_234_string = "";
	func_4956(var_233_int, "KnowPredictions");
	var_236_bool = var_233_int == (int)1;
	if(var_236_bool != 0) {
		var_231_bool = 1;
		return 0;
	}
	var_231_bool = 0;
	return 0;
}


func_5347()
{
	SetVariable("ood3Andrei1", (int)1);
	return 0;
}


func_4837(var_187_object, var_188_string, var_189_int)
{
	var_190_int = 0; var_191_int = 0;
	@@var_187_object:GetProperty(var_188_string, var_191_int);
	var_192_int = var_191_int + var_189_int;
	@@var_187_object:SetProperty(var_188_string, var_192_int);
	return 2;
}


func_5353()
{
	SetVariable("ood10Andrei1", (int)1);
	return 0;
}


func_5867(var_353_bool)
{
	var_355_int = 0; var_356_string = "";
	func_4956(var_355_int, "KnowTermitnik");
	var_358_bool = var_355_int == (int)1;
	if(var_358_bool != 0) {
		var_353_bool = 1;
		return 0;
	}
	var_353_bool = 0;
	return 0;
}


func_4844(var_36_bool, var_37_object)
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


func_5359()
{
	SetVariable("KnowTermitnik", (int)1);
	return 0;
}


func_5365(var_525_bool)
{
	var_527_int = 0; var_528_string = "";
	func_4956(var_527_int, "KnowTheater");
	var_530_bool = var_527_int == (int)1;
	if(var_530_bool != 0) {
		var_525_bool = 1;
		return 0;
	}
	var_525_bool = 0;
	return 0;
}


func_5879(var_212_bool)
{
	var_214_int = 0;
	func_5013(var_214_int);
	var_220_bool = var_214_int >= (int)18;
	if(var_220_bool != 0) {
		var_212_bool = 1;
		return 0;
	}
	var_212_bool = 0;
	return 0;
}


func_4856(var_37_bool)
{
	var_38_bool = 0; var_39_bool = 0;
	IsLoaded(var_39_bool);
	var_39_bool = var_37_bool;
	return 2;
}


func_4861(var_52_bool, var_53_object)
{
	var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0;
	@@var_53_object:GetPosition(var_63_cvector);
	@@var_53_object:GetEyesHeight(var_62_float);
	var_70_float = GetByIndex(var_63_cvector, 1);
	var_70_float = var_70_float + var_62_float;
	SetByIndex(var_63_cvector, 1) = var_70_float;
	GetPosition(var_64_cvector);
	GetEyesHeight(var_62_float);
	var_71_float = GetByIndex(var_64_cvector, 1);
	var_71_float = var_71_float + var_62_float;
	SetByIndex(var_64_cvector, 1) = var_71_float;
	var_65_cvector = var_63_cvector - var_64_cvector;
	var_72_float = GetByIndex(var_65_cvector, 1);
	SetByIndex(var_65_cvector, 1) = (float)0;
	var_73_int = var_65_cvector | var_65_cvector;
	var_74_float = sqrt(var_73_int);
	var_65_cvector = var_65_cvector / var_74_float;
	var_66_cvector = -var_65_cvector;
	var_76_float = var_65_cvector * (int)70;
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_78_cvector = var_66_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4946(var_77_cvector, var_78_cvector);
	var_86_float = var_77_cvector * (int)25;
	var_87_int = var_76_float + var_86_float;
	var_67_cvector = var_87_int - CVector(0.0, 10.0, 0.0);
	var_68_cvector = var_64_cvector + var_67_cvector;
	IsOverrideActive(var_69_bool);
	var_89_bool = var_69_bool;
	if(var_89_bool != 0) {
		var_52_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_68_cvector, var_66_cvector);
	var_90_float = GetByIndex(var_67_cvector, 0);
	var_91_float = GetByIndex(var_67_cvector, 2);
	Rotate(var_90_float, var_91_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_52_bool = 1;
	return 16;
}


func_5377(var_192_bool)
{
	var_194_int = 0; var_195_string = "";
	func_4956(var_194_int, "ood1Andrei1");
	var_199_bool = var_194_int == (int)0;
	if(var_199_bool != 0) {
		var_192_bool = 1;
		return 0;
	}
	var_192_bool = 0;
	return 0;
}


func_5890(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj();
	GetDiaryRoot(var_62_object);
	var_63_bool = var_62_object == 0; //@nz
	if(var_63_bool != 0) {
		Trace("Can't retrieve diary root");
		var_60_object = 0;
		return 2;
	}
	var_62_object = var_60_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5389(var_221_bool)
{
	var_223_int = 0; var_224_string = "";
	func_4956(var_223_int, "ood1Andrei2");
	var_226_bool = var_223_int == (int)0;
	if(var_226_bool != 0) {
		var_221_bool = 1;
		return 0;
	}
	var_221_bool = 0;
	return 0;
}


func_4366(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_5040(var_104_bool);
	var_105_bool = var_104_bool == 0; //@nz
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_bool = var_103_string == var_2_object;
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_string = "";
	var_103_string = var_107_string;
	func_4921(var_107_string);
	var_2_object = var_103_string;
	return 0;
}


func_5903(var_51_bool, var_52_object, var_53_int)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0;
	func_5890(Obj());
	var_60_object = var_57_object;
	@@var_57_object:Find(var_53_int, var_58_object);
	var_65_bool = var_58_object == 0; //@nz
	if(var_65_bool != 0) {
		var_67_int = "Can't find diary parent with id: " + var_53_int;
		Trace(var_67_int);
		var_51_bool = 0;
		return 6;
	}
	@@var_58_object:AddChild(var_52_object);
	SetVariable("player_diary", (int)1);
	@@var_52_object:GetCategory(var_59_int);
	SetDiarySection(var_59_int);
	var_51_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5401(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_4956(var_202_int, "d1q01FirstGeorgVisit");
	var_205_bool = var_202_int == (int)1;
	if(var_205_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_5413(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_4956(var_239_int, "ood1Andrei3");
	var_242_bool = var_239_int == (int)0;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_5932(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj();
	GetMainOutdoorScene(var_54_object);
	var_56_bool = var_54_object == 0; //@ne
	if(var_56_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_55_object = 0;
		var_55_object = var_51_object;
		return 4;
	}
	@@var_54_object:GetMap(var_55_object);
	var_55_object = var_51_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5425(var_253_bool)
{
	var_255_int = 0; var_256_string = "";
	func_4956(var_255_int, "ood1Andrei4");
	var_258_bool = var_255_int == (int)0;
	if(var_258_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_3892(var_0_object, var_591_int, var_592_object)
{
	var_594_object = Obj(); var_595_bool = 0; var_596_int = 0; var_597_bool = 0; var_598_object = Obj(); var_599_bool = 0; var_600_int = 0; var_601_bool = 0;
	var_0_object = var_592_object;
	var_602_bool = 0; var_603_object = Obj();
	var_592_object = var_603_object;
	func_4861(var_602_bool, var_603_object);
	var_604_bool = var_602_bool == 0; //@nz
	if(var_604_bool != 0) {
		var_591_int = -2;
		return 8;
	}
	CreateDialog(var_598_object);
	var_605_int = 0;
	func_5036(var_605_int);
	@@var_598_object:SetNPCName(var_605_int);
	var_606_string = "";
	func_5038(var_606_string);
	@@var_598_object:SetPhoto(var_606_string);
	var_607_int = 0;
	func_5982(var_607_int);
	@@var_598_object:SetPlayerName(var_607_int);
	IsOverrideActive(var_599_bool);
	var_608_bool = var_599_bool;
	if(var_608_bool != 0) {
		var_591_int = -2;
		return 8;
	}
	DoDialog(var_598_object);
	var_609_object = Obj(); var_610_object = Obj();
	var_592_object = var_609_object;
	var_598_object = var_610_object;
	TaskCall(13);
	func_3955(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object);
	TaskReturn();
	@@var_598_object:IsDialogEnd(var_601_bool);
	
Label_3937:
	var_664_bool = var_601_bool == 0; //@nz
	if(var_664_bool != 0) {
		sync();
		@@var_598_object:IsDialogEnd(var_601_bool);
		goto Label_3937;
	}
	var_592_object = Obj();
	func_4917();
	StopDialog(var_598_object);
	@@var_598_object:GetReturnValue((int)-1);
	var_600_int = var_591_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4917()
{
	CameraSwitchToNormal();
	return 0;
}


func_4921(var_41_string)
{
	var_42_float = 0; var_43_float = 0; var_44_float = 0; var_45_float = 0;
	var_47_int = "playing " + var_41_string;
	Trace(var_47_int);
	lshGetAnimTimes(var_41_string, var_44_float, var_45_float);
	lshPlayAnimation(var_44_float, var_45_float);
	var_49_int = "start: " + var_44_float;
	Trace(var_49_int);
	var_51_int = "end: " + var_45_float;
	Trace(var_51_int);
	return 4;
}


func_5437(var_269_bool)
{
	var_271_int = 0; var_272_string = "";
	func_4956(var_271_int, "ood1Andrei5");
	var_274_bool = var_271_int == (int)0;
	if(var_274_bool != 0) {
		var_269_bool = 1;
		return 0;
	}
	var_269_bool = 0;
	return 0;
}


func_5949(var_97_object, var_98_string, var_99_float)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_object = Obj(); var_108_bool = 0;
	GetMainOutdoorScene(var_107_object);
	var_109_bool = var_107_object == 0; //@ne
	if(var_109_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_107_object:GetLocator(var_98_string, var_108_bool, var_105_cvector, var_106_cvector);
	var_111_bool = var_108_bool == 0; //@nz
	if(var_111_bool != 0) {
		var_113_int = "Warning: outdoor scene locator " + var_98_string;
		var_115_int = var_113_int + " doesnt exist";
		Trace(var_115_int);
	}
	@@var_107_object:GetMap(var_97_object);
	var_116_bool = var_97_object == 0; //@ne
	if(var_116_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_118_float = GetByIndex(var_105_cvector, 0);
	var_119_float = GetByIndex(var_105_cvector, 2);
	@@var_97_object:SetMapParams(var_118_float, var_119_float, var_99_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5449(var_285_bool)
{
	var_287_int = 0; var_288_string = "";
	func_4956(var_287_int, "ood1Andrei6");
	var_290_bool = var_287_int == (int)0;
	if(var_290_bool != 0) {
		var_285_bool = 1;
		return 0;
	}
	var_285_bool = 0;
	return 0;
}


func_4939()
{
	var_38_bool = 0;
	func_5040(var_38_bool);
	if(var_38_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4946(var_77_cvector, var_78_cvector)
{
	var_80_float = 0; var_81_float = 0;
	var_82_int = var_78_cvector | var_78_cvector;
	var_81_float = sqrt(var_82_int);
	var_83_float = 9.999999974752427e-07;
	var_84_bool = var_81_float < var_83_float;
	if(var_84_bool != 0) {
		var_77_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_77_cvector = var_78_cvector / var_81_float;
	return 2;
}


func_338(var_0_object, var_157_int, var_158_object)
{
	var_160_object = Obj(); var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_object = Obj(); var_165_bool = 0; var_166_int = 0; var_167_bool = 0;
	var_0_object = var_158_object;
	var_168_bool = 0; var_169_object = Obj();
	var_158_object = var_169_object;
	func_4861(var_168_bool, var_169_object);
	var_170_bool = var_168_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_157_int = -2;
		return 8;
	}
	CreateDialog(var_164_object);
	var_171_int = 0;
	func_5036(var_171_int);
	@@var_164_object:SetNPCName(var_171_int);
	var_172_string = "";
	func_5038(var_172_string);
	@@var_164_object:SetPhoto(var_172_string);
	var_173_int = 0;
	func_5982(var_173_int);
	@@var_164_object:SetPlayerName(var_173_int);
	IsOverrideActive(var_165_bool);
	var_174_bool = var_165_bool;
	if(var_174_bool != 0) {
		var_157_int = -2;
		return 8;
	}
	DoDialog(var_164_object);
	var_175_object = Obj(); var_176_object = Obj();
	var_158_object = var_175_object;
	var_164_object = var_176_object;
	TaskCall(5);
	func_401(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object);
	TaskReturn();
	@@var_164_object:IsDialogEnd(var_167_bool);
	
Label_383:
	var_334_bool = var_167_bool == 0; //@nz
	if(var_334_bool != 0) {
		sync();
		@@var_164_object:IsDialogEnd(var_167_bool);
		goto Label_383;
	}
	var_158_object = Obj();
	func_4917();
	StopDialog(var_164_object);
	@@var_164_object:GetReturnValue((int)-1);
	var_166_int = var_157_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5461(var_301_bool)
{
	var_303_int = 0; var_304_string = "";
	func_4956(var_303_int, "ood1Andrei7");
	var_306_bool = var_303_int == (int)0;
	if(var_306_bool != 0) {
		var_301_bool = 1;
		return 0;
	}
	var_301_bool = 0;
	return 0;
}


func_4956(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
	return 2;
}


func_5982(var_95_int)
{
	var_96_int = 0; var_97_int = 0;
	GetVariable("player", var_97_int);
	var_100_bool = var_97_int == (int)0;
	if(var_100_bool != 0) {
		var_95_int = 200001;
		return 2;
	EMIT "GOTO 0x176d";
	}
	var_102_bool = var_97_int == (int)1;
	if(var_102_bool != 0) {
		var_95_int = 200002;
		return 2;
	}
	var_95_int = 200003;
	return 2;
}


func_5473(var_317_bool)
{
	var_319_int = 0; var_320_string = "";
	func_4956(var_319_int, "ood1Andrei8");
	var_322_bool = var_319_int == (int)0;
	if(var_322_bool != 0) {
		var_317_bool = 1;
		return 0;
	}
	var_317_bool = 0;
	return 0;
}


func_4961(var_49_object, var_50_object, var_51_int)
{
	var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0;
	@@var_50_object:GetItemID(var_55_int);
	GetInvItemProperty(var_56_int, var_55_int, "Category");
	@@var_49_object:AddItem(var_57_bool, var_50_object, var_56_int, var_51_int);
	var_59_bool = var_57_bool == 0; //@nz
	if(var_59_bool != 0) {
		@@var_49_object:DropItems(var_50_object, var_51_int);
	}
	return 6;
}


func_5485(var_343_bool)
{
	var_345_int = 0; var_346_string = "";
	func_4956(var_345_int, "KnowMat");
	var_348_bool = var_345_int == (int)1;
	if(var_348_bool != 0) {
		var_343_bool = 1;
		return 0;
	}
	var_343_bool = 0;
	return 0;
}


func_4974(var_44_object, var_45_string, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateInvItem(var_48_object);
	@@var_48_object:SetItemName(var_45_string);
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	var_44_object = var_49_object;
	var_48_object = var_50_object;
	var_46_int = var_51_int;
	func_4961(var_49_object, var_50_object, var_51_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5999()
{
	var_45_object = Obj(); var_46_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_46_object, (int)195, (int)1, (int)15480);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_46_object = var_52_object;
	func_5903(var_51_bool, var_52_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3955(var_0_object, var_1_object, var_2_object, var_3_object, var_609_object, var_610_object)
{
	var_0_object = var_610_object;
	var_1_object = var_609_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_616_bool = 0;
		var_616_bool = 0;
		var_617_bool = 0;
		var_617_bool = 0;
		var_618_bool = 0; var_619_object = Obj();
		var_619_object = var_1_object;
		func_5819(var_619_object);
		var_624_bool = var_618_bool == 0; //@nz
		if(var_624_bool != 0) {
			var_625_bool = 0; var_626_object = Obj();
			var_626_object = var_1_object;
			func_5831(var_626_object);
			var_631_bool = var_625_bool == 0; //@nz
			if(var_631_bool != 0) {
				var_617_bool = 1;
			}
		}
		if(var_617_bool != 0) {
			var_632_bool = 0; var_633_object = Obj();
			var_633_object = var_1_object;
			func_5843(var_633_object);
			if(var_632_bool != 0) {
				var_616_bool = 1;
			}
		}
		if(var_616_bool != 0) {
			var_638_object = Obj(); var_639_object = Obj();
			var_638_object = var_1_object;
			var_639_object = var_0_object;
			func_5353();
			var_642_string = "";
			func_4053(var_610_object, "Neutral");
			@@@var_0_object:SetMessage((int)12960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12961, (int)14167, (int)14166);
		} else {
				var_659_string = "";
				func_4053(var_610_object, "Neutral");
				@@@var_0_object:SetMessage((int)12966);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12967, (int)-1, (int)14172);
				goto Label_4023;
		}
	}
Label_4023:
	var_651_bool = 0;
	func_5040(var_651_bool);
	if(var_651_bool != 0) {

	Label_4027:
		lshWaitForAnimEnd();
		var_652_object = var_3_object;
		if(var_652_object != 0) {
		} else {
			var_653_string = "";
			var_653_string = var_2_object;
			func_4921(var_653_string);
			goto Label_4027;
	}
		PlayAnimation("all", "idle");

	Label_4042:
		WaitForAnimEnd();
		var_656_object = var_3_object;
		if(var_656_object != 0) {
			goto Label_4052;
		}
		PlayAnimation("all", "idle");
		goto Label_4042;

	}
	goto Label_4052;
	
Label_4052:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xf77";


func_5497(var_273_bool)
{
	var_275_int = 0; var_276_string = "";
	func_4956(var_275_int, "ood2Andrei1");
	var_280_bool = var_275_int == (int)0;
	if(var_280_bool != 0) {
		var_273_bool = 1;
		return 0;
	}
	var_273_bool = 0;
	return 0;
}


func_4987(var_236_bool, var_237_string, var_238_string)
{
	var_239_object = Obj(); var_240_object = Obj();
	FindActor(var_240_object, var_237_string);
	var_241_bool = var_240_object == 0; //@ne
	if(var_241_bool != 0) {
		var_236_bool = 0;
		return 2;
	}
	Trigger(var_240_object, var_238_string);
	var_236_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6015()
{
	var_168_object = Obj(); var_169_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_169_object, (int)59, (int)2, (int)12141);
	var_174_bool = 0; var_175_object = Obj(); var_176_int = 0;
	var_169_object = var_175_object;
	func_5903(var_174_bool, var_175_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5509(var_291_bool)
{
	var_293_int = 0; var_294_string = "";
	func_4956(var_293_int, "ood2Andrei2");
	var_296_bool = var_293_int == (int)0;
	if(var_296_bool != 0) {
		var_291_bool = 1;
		return 0;
	}
	var_291_bool = 0;
	return 0;
}


func_4999(var_62_float)
{
	var_63_float = 0; var_64_float = 0;
	GetGameTime(var_64_float);
	var_64_float = var_62_float;
	return 2;
}


func_5004(var_151_int)
{
	var_152_float = 0; var_153_float = 0;
	GetGameTime(var_153_float);
	var_155_int = 0;
	var_155_int = var_153_float / (int)24;
	var_151_int = (int)1 + var_155_int;
	return 2;
}


func_6031()
{
	var_70_object = Obj(); var_71_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_71_object, (int)58, (int)2, (int)12140);
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0;
	var_71_object = var_77_object;
	func_5903(var_76_bool, var_77_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_401(var_0_object, var_1_object, var_2_object, var_3_object, var_175_object, var_176_object)
{
	var_0_object = var_176_object;
	var_1_object = var_175_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_182_string = "";
		func_606(var_176_object, "Neutral");
		@@@var_0_object:SetMessage((int)6465);
		@@@var_0_object:ClearReplies();
		var_188_bool = 0;
		var_188_bool = 0;
		var_189_bool = 0; var_190_object = Obj();
		var_190_object = var_1_object;
		func_5377(var_190_object);
		if(var_189_bool != 0) {
			var_197_bool = 0; var_198_object = Obj();
			var_198_object = var_1_object;
			func_5401(var_198_object);
			if(var_197_bool != 0) {
				var_188_bool = 1;
			}
		}
		if(var_188_bool != 0) {
			@@@var_0_object:AddReply((int)6466, (int)6344, (int)7129);
		}
		var_206_bool = 0;
		var_206_bool = 0;
		var_207_bool = 0; var_208_object = Obj();
		var_208_object = var_1_object;
		func_5641(var_207_bool, var_208_object);
		if(var_207_bool != 0) {
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_5389(var_219_object);
			if(var_218_bool != 0) {
				var_206_bool = 1;
			}
		}
		if(var_206_bool != 0) {
			@@@var_0_object:AddReply((int)6467, (int)6336, (int)7130);
		}
		var_227_bool = 0;
		var_227_bool = 0;
		var_228_bool = 0; var_229_object = Obj();
		var_229_object = var_1_object;
		func_5855(var_229_object);
		if(var_228_bool != 0) {
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_5413(var_235_object);
			if(var_234_bool != 0) {
				var_227_bool = 1;
			}
		}
		if(var_227_bool != 0) {
			@@@var_0_object:AddReply((int)6470, (int)7167, (int)7133);
		}
		var_243_bool = 0;
		var_243_bool = 0;
		var_244_bool = 0; var_245_object = Obj();
		var_245_object = var_1_object;
		func_5699(var_245_object);
		if(var_244_bool != 0) {
			var_250_bool = 0; var_251_object = Obj();
			var_251_object = var_1_object;
			func_5425(var_251_object);
			if(var_250_bool != 0) {
				var_243_bool = 1;
			}
		}
		if(var_243_bool != 0) {
			@@@var_0_object:AddReply((int)6471, (int)7181, (int)7134);
		}
		var_259_bool = 0;
		var_259_bool = 0;
		var_260_bool = 0; var_261_object = Obj();
		var_261_object = var_1_object;
		func_5687(var_261_object);
		if(var_260_bool != 0) {
			var_266_bool = 0; var_267_object = Obj();
			var_267_object = var_1_object;
			func_5437(var_267_object);
			if(var_266_bool != 0) {
				var_259_bool = 1;
			}
		}
		if(var_259_bool != 0) {
			@@@var_0_object:AddReply((int)6474, (int)7191, (int)7137);
		}
		var_275_bool = 0;
		var_275_bool = 0;
		var_276_bool = 0; var_277_object = Obj();
		var_277_object = var_1_object;
		func_5795(var_277_object);
		if(var_276_bool != 0) {
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_1_object;
			func_5449(var_283_object);
			if(var_282_bool != 0) {
				var_275_bool = 1;
			}
		}
		if(var_275_bool != 0) {
			@@@var_0_object:AddReply((int)6476, (int)7206, (int)7139);
		}
		var_291_bool = 0;
		var_291_bool = 0;
		var_292_bool = 0; var_293_object = Obj();
		var_293_object = var_1_object;
		func_5617(var_293_object);
		if(var_292_bool != 0) {
			var_298_bool = 0; var_299_object = Obj();
			var_299_object = var_1_object;
			func_5461(var_299_object);
			if(var_298_bool != 0) {
				var_291_bool = 1;
			}
		}
		if(var_291_bool != 0) {
			@@@var_0_object:AddReply((int)6481, (int)7220, (int)7144);
		}
		var_307_bool = 0;
		var_307_bool = 0;
		var_308_bool = 0; var_309_object = Obj();
		var_309_object = var_1_object;
		func_5783(var_309_object);
		if(var_308_bool != 0) {
			var_314_bool = 0; var_315_object = Obj();
			var_315_object = var_1_object;
			func_5473(var_315_object);
			if(var_314_bool != 0) {
				var_307_bool = 1;
			}
		}
		if(var_307_bool != 0) {
			@@@var_0_object:AddReply((int)6488, (int)7241, (int)7151);
		}
		@@@var_0_object:AddReply((int)6502, (int)-1, (int)7166);
		goto Label_576;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x195";
	}
Label_576:
	var_326_bool = 0;
	func_5040(var_326_bool);
	if(var_326_bool != 0) {

	Label_580:
		lshWaitForAnimEnd();
		var_327_object = var_3_object;
		if(var_327_object != 0) {
		} else {
			var_328_string = "";
			var_328_string = var_2_object;
			func_4921(var_328_string);
			goto Label_580;
	}
		PlayAnimation("all", "idle");

	Label_595:
		WaitForAnimEnd();
		var_331_object = var_3_object;
		if(var_331_object != 0) {
			goto Label_605;
		}
		PlayAnimation("all", "idle");
		goto Label_595;
	}
	goto Label_605;
	
Label_605:
	return 0;
	
}


func_5521(var_307_bool)
{
	var_309_int = 0; var_310_string = "";
	func_4956(var_309_int, "ood2Andrei3");
	var_312_bool = var_309_int == (int)0;
	if(var_312_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_5013(var_214_int)
{
	var_215_float = 0; var_216_float = 0;
	GetGameTime(var_216_float);
	var_217_int = 0;
	var_216_float = var_217_int;
	var_214_int = var_217_int % (int)24;
	return 2;
}


func_5533(var_323_bool)
{
	var_325_int = 0; var_326_string = "";
	func_4956(var_325_int, "ood2Andrei4");
	var_328_bool = var_325_int == (int)0;
	if(var_328_bool != 0) {
		var_323_bool = 1;
		return 0;
	}
	var_323_bool = 0;
	return 0;
}


func_5021(var_149_bool, var_150_int)
{
	var_151_int = 0;
	func_5004(var_151_int);
	var_149_bool = var_151_int == var_150_int;
	return 0;
}


func_6047()
{
	var_227_object = Obj(); var_228_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_228_object, (int)60, (int)2, (int)12142);
	var_233_bool = 0; var_234_object = Obj(); var_235_int = 0;
	var_228_object = var_234_object;
	func_5903(var_233_bool, var_234_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5027(var_759_bool)
{
	var_760_bool = 0; var_761_bool = 0;
	var_762_string = "";
	func_4921("No");
	lshWaitForAnimEnd(var_761_bool);
	var_761_bool = var_759_bool;
	return 2;
}


func_1956(var_0_object, var_338_int, var_339_object)
{
	var_341_object = Obj(); var_342_bool = 0; var_343_int = 0; var_344_bool = 0; var_345_object = Obj(); var_346_bool = 0; var_347_int = 0; var_348_bool = 0;
	var_0_object = var_339_object;
	var_349_bool = 0; var_350_object = Obj();
	var_339_object = var_350_object;
	func_4861(var_349_bool, var_350_object);
	var_351_bool = var_349_bool == 0; //@nz
	if(var_351_bool != 0) {
		var_338_int = -2;
		return 8;
	}
	CreateDialog(var_345_object);
	var_352_int = 0;
	func_5036(var_352_int);
	@@var_345_object:SetNPCName(var_352_int);
	var_353_string = "";
	func_5038(var_353_string);
	@@var_345_object:SetPhoto(var_353_string);
	var_354_int = 0;
	func_5982(var_354_int);
	@@var_345_object:SetPlayerName(var_354_int);
	IsOverrideActive(var_346_bool);
	var_355_bool = var_346_bool;
	if(var_355_bool != 0) {
		var_338_int = -2;
		return 8;
	}
	DoDialog(var_345_object);
	var_356_object = Obj(); var_357_object = Obj();
	var_339_object = var_356_object;
	var_345_object = var_357_object;
	TaskCall(7);
	func_2019(var_358_object, var_359_object, var_360_string, var_361_bool, var_356_object, var_357_object);
	TaskReturn();
	@@var_345_object:IsDialogEnd(var_348_bool);
	
Label_2001:
	var_460_bool = var_348_bool == 0; //@nz
	if(var_460_bool != 0) {
		sync();
		@@var_345_object:IsDialogEnd(var_348_bool);
		goto Label_2001;
	}
	var_339_object = Obj();
	func_4917();
	StopDialog(var_345_object);
	@@var_345_object:GetReturnValue((int)-1);
	var_347_int = var_338_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5545(var_339_bool)
{
	var_341_int = 0; var_342_string = "";
	func_4956(var_341_int, "ood2Andrei5");
	var_344_bool = var_341_int == (int)0;
	if(var_344_bool != 0) {
		var_339_bool = 1;
		return 0;
	}
	var_339_bool = 0;
	return 0;
}


func_5036(var_93_int)
{
	var_93_int = 2855;
	return 0;
}


func_5038(var_94_string)
{
	var_94_string = "ui/NPC_Andrei.png";
	return 0;
}


func_6063()
{
	SetVariable("mt_andrei", (int)0);
	return 0;
}


func_5040(var_38_bool)
{
	var_38_bool = 1;
	return 0;
}


func_5042()
{
	SetVariable("ood1Andrei1", (int)1);
	return 0;
}


func_6068(var_36_object)
{
	var_37_int = 0; var_38_int = 0;
	GetVariable("mt_andrei", var_38_int);
	var_40_bool = var_38_int == 0; //@nz
	if(var_40_bool != 0) {
		var_41_int = 0; var_42_object = Obj();
		var_36_object = var_42_object;
		TaskCall(2);
		func_49(var_43_object, var_41_int, var_42_object);
		TaskReturn();
		SetVariable("mt_andrei", (int)1);
	}
	var_149_bool = 0; var_150_int = 0;
	func_5021(var_149_bool, (int)1);
	if(var_149_bool != 0) {
		var_157_int = 0; var_158_object = Obj();
		var_36_object = var_158_object;
		TaskCall(4);
		func_338(var_159_object, var_157_int, var_158_object);
		TaskReturn();
		return 2;
	}
	var_336_bool = 0; var_337_int = 0;
	func_5021(var_336_bool, (int)2);
	if(var_336_bool != 0) {
		var_338_int = 0; var_339_object = Obj();
		var_36_object = var_339_object;
		TaskCall(6);
		func_1956(var_340_object, var_338_int, var_339_object);
		TaskReturn();
		return 2;
	}
	var_462_bool = 0; var_463_int = 0;
	func_5021(var_462_bool, (int)3);
	if(var_462_bool != 0) {
		var_464_int = 0; var_465_object = Obj();
		var_36_object = var_465_object;
		TaskCall(8);
		func_3095(var_466_object, var_464_int, var_465_object);
		TaskReturn();
		return 2;
	}
	var_534_bool = 0; var_535_int = 0;
	func_5021(var_534_bool, (int)6);
	if(var_534_bool != 0) {
		var_536_int = 0; var_537_object = Obj();
		var_36_object = var_537_object;
		TaskCall(10);
		func_3523(var_538_object, var_536_int, var_537_object);
		TaskReturn();
		return 2;
	}
	var_589_bool = 0; var_590_int = 0;
	func_5021(var_589_bool, (int)10);
	if(var_589_bool != 0) {
		var_591_int = 0; var_592_object = Obj();
		var_36_object = var_592_object;
		TaskCall(12);
		func_3892(var_593_object, var_591_int, var_592_object);
		TaskReturn();
		return 2;
	}
	var_666_bool = 0; var_667_int = 0;
	func_5021(var_666_bool, (int)11);
	if(var_666_bool != 0) {
		var_668_int = 0; var_669_object = Obj();
		var_36_object = var_669_object;
		TaskCall(14);
		func_4187(var_670_object, var_668_int, var_669_object);
		TaskReturn();
		return 2;
	}
	func_5027((bool)0);
	return 2;
}


func_5557(var_345_bool)
{
	var_347_int = 0; var_348_string = "";
	func_4956(var_347_int, "d2q02");
	var_350_bool = var_347_int == (int)1000;
	if(var_350_bool != 0) {
		var_345_bool = 1;
		return 0;
	}
	var_345_bool = 0;
	return 0;
}


func_5048()
{
	SetVariable("ood1Andrei2", (int)1);
	return 0;
}


func_5054(var_184_object)
{
	Trace("money1000 is given");
	var_187_object = Obj(); var_188_string = ""; var_189_int = 0;
	var_184_object = var_187_object;
	func_4837(var_187_object, "money", (int)1000);
	return 0;
}


func_5569(var_281_bool)
{
	var_283_int = 0; var_284_string = "";
	func_4956(var_283_int, "d2q02");
	var_286_bool = var_283_int == (int)1;
	if(var_286_bool != 0) {
		var_281_bool = 1;
		return 0;
	}
	var_281_bool = 0;
	return 0;
}


func_3523(var_0_object, var_536_int, var_537_object)
{
	var_539_object = Obj(); var_540_bool = 0; var_541_int = 0; var_542_bool = 0; var_543_object = Obj(); var_544_bool = 0; var_545_int = 0; var_546_bool = 0;
	var_0_object = var_537_object;
	var_547_bool = 0; var_548_object = Obj();
	var_537_object = var_548_object;
	func_4861(var_547_bool, var_548_object);
	var_549_bool = var_547_bool == 0; //@nz
	if(var_549_bool != 0) {
		var_536_int = -2;
		return 8;
	}
	CreateDialog(var_543_object);
	var_550_int = 0;
	func_5036(var_550_int);
	@@var_543_object:SetNPCName(var_550_int);
	var_551_string = "";
	func_5038(var_551_string);
	@@var_543_object:SetPhoto(var_551_string);
	var_552_int = 0;
	func_5982(var_552_int);
	@@var_543_object:SetPlayerName(var_552_int);
	IsOverrideActive(var_544_bool);
	var_553_bool = var_544_bool;
	if(var_553_bool != 0) {
		var_536_int = -2;
		return 8;
	}
	DoDialog(var_543_object);
	var_554_object = Obj(); var_555_object = Obj();
	var_537_object = var_554_object;
	var_543_object = var_555_object;
	TaskCall(11);
	func_3586(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object);
	TaskReturn();
	@@var_543_object:IsDialogEnd(var_546_bool);
	
Label_3568:
	var_587_bool = var_546_bool == 0; //@nz
	if(var_587_bool != 0) {
		sync();
		@@var_543_object:IsDialogEnd(var_546_bool);
		goto Label_3568;
	}
	var_537_object = Obj();
	func_4917();
	StopDialog(var_543_object);
	@@var_543_object:GetReturnValue((int)-1);
	var_545_int = var_536_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5065()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_5581(var_297_bool)
{
	var_299_int = 0; var_300_string = "";
	func_4956(var_299_int, "d2q02");
	var_302_bool = var_299_int == (int)3;
	if(var_302_bool != 0) {
		var_297_bool = 1;
		return 0;
	}
	var_297_bool = 0;
	return 0;
}


func_5071()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5077()
{
	SetVariable("ood1Andrei3", (int)1);
	return 0;
}


func_4053(var_2_object, var_69_string)
{
	var_70_bool = 0;
	func_5040(var_70_bool);
	var_71_bool = var_70_bool == 0; //@nz
	if(var_71_bool != 0) {
		return 0;
	}
	var_72_bool = var_69_string == var_2_object;
	if(var_72_bool != 0) {
		return 0;
	}
	var_73_string = "";
	var_69_string = var_73_string;
	func_4921(var_73_string);
	var_2_object = var_69_string;
	return 0;
}


func_5593(var_313_bool)
{
	var_315_int = 0; var_316_string = "";
	func_4956(var_315_int, "d2q02");
	var_318_bool = var_315_int == (int)5;
	if(var_318_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_5083()
{
	SetVariable("ood1Andrei4", (int)1);
	return 0;
}


func_5089()
{
	SetVariable("ood1Andrei5", (int)1);
	return 0;
}


func_2019(var_0_object, var_1_object, var_2_object, var_3_object, var_356_object, var_357_object)
{
	var_0_object = var_357_object;
	var_1_object = var_356_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_363_string = "";
		func_2187(var_357_object, "Neutral");
		@@@var_0_object:SetMessage((int)6864);
		@@@var_0_object:ClearReplies();
		var_369_bool = 0;
		var_369_bool = 0;
		var_370_bool = 0; var_371_object = Obj();
		var_371_object = var_1_object;
		func_5497(var_371_object);
		if(var_370_bool != 0) {
			var_376_bool = 0; var_377_object = Obj();
			var_377_object = var_1_object;
			func_5569(var_377_object);
			if(var_376_bool != 0) {
				var_369_bool = 1;
			}
		}
		if(var_369_bool != 0) {
			@@@var_0_object:AddReply((int)6865, (int)7572, (int)7571);
		}
		var_385_bool = 0;
		var_385_bool = 0;
		var_386_bool = 0; var_387_object = Obj();
		var_387_object = var_1_object;
		func_5509(var_387_object);
		if(var_386_bool != 0) {
			var_392_bool = 0; var_393_object = Obj();
			var_393_object = var_1_object;
			func_5581(var_393_object);
			if(var_392_bool != 0) {
				var_385_bool = 1;
			}
		}
		if(var_385_bool != 0) {
			@@@var_0_object:AddReply((int)6868, (int)7575, (int)7574);
		}
		var_401_bool = 0;
		var_401_bool = 0;
		var_402_bool = 0; var_403_object = Obj();
		var_403_object = var_1_object;
		func_5521(var_403_object);
		if(var_402_bool != 0) {
			var_408_bool = 0; var_409_object = Obj();
			var_409_object = var_1_object;
			func_5593(var_409_object);
			if(var_408_bool != 0) {
				var_401_bool = 1;
			}
		}
		if(var_401_bool != 0) {
			@@@var_0_object:AddReply((int)6870, (int)7577, (int)7576);
		}
		var_417_bool = 0;
		var_417_bool = 0;
		var_418_bool = 0; var_419_object = Obj();
		var_419_object = var_1_object;
		func_5533(var_419_object);
		if(var_418_bool != 0) {
			var_424_bool = 0; var_425_object = Obj();
			var_425_object = var_1_object;
			func_5605(var_425_object);
			if(var_424_bool != 0) {
				var_417_bool = 1;
			}
		}
		if(var_417_bool != 0) {
			@@@var_0_object:AddReply((int)6874, (int)7581, (int)7580);
		}
		var_433_bool = 0;
		var_433_bool = 0;
		var_434_bool = 0; var_435_object = Obj();
		var_435_object = var_1_object;
		func_5545(var_435_object);
		if(var_434_bool != 0) {
			var_440_bool = 0; var_441_object = Obj();
			var_441_object = var_1_object;
			func_5557(var_441_object);
			if(var_440_bool != 0) {
				var_433_bool = 1;
			}
		}
		if(var_433_bool != 0) {
			@@@var_0_object:AddReply((int)6872, (int)7579, (int)7578);
		}
		@@@var_0_object:AddReply((int)7531, (int)-1, (int)8313);
		goto Label_2157;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x88b";
	EMIT "Pop(1)";
	EMIT "Push((int) 9203)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9204)";
	EMIT "Push((int) 10097)";
	EMIT "Push((int) 10096)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9216)";
	EMIT "Push((int) 10111)";
	EMIT "Push((int) 10110)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0x86d";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7e7";
	}
Label_2157:
	var_452_bool = 0;
	func_5040(var_452_bool);
	if(var_452_bool != 0) {

	Label_2161:
		lshWaitForAnimEnd();
		var_453_object = var_3_object;
		if(var_453_object != 0) {
		} else {
			var_454_string = "";
			var_454_string = var_2_object;
			func_4921(var_454_string);
			goto Label_2161;
	}
		PlayAnimation("all", "idle");

	Label_2176:
		WaitForAnimEnd();
		var_457_object = var_3_object;
		if(var_457_object != 0) {
			goto Label_2186;
		}
		PlayAnimation("all", "idle");
		goto Label_2176;
	}
	goto Label_2186;
	
Label_2186:
	return 0;
	
}


func_5605(var_329_bool)
{
	var_331_int = 0; var_332_string = "";
	func_4956(var_331_int, "d2q02");
	var_334_bool = var_331_int == (int)7;
	if(var_334_bool != 0) {
		var_329_bool = 1;
		return 0;
	}
	var_329_bool = 0;
	return 0;
}


func_5095()
{
	SetVariable("ood1Andrei6", (int)1);
	return 0;
}


func_5101()
{
	SetVariable("ood1Andrei7", (int)1);
	return 0;
}


func_5617(var_295_bool)
{
	var_297_int = 0; var_298_string = "";
	func_4956(var_297_int, "KnowViktor");
	var_300_bool = var_297_int == (int)1;
	if(var_300_bool != 0) {
		var_295_bool = 1;
		return 0;
	}
	var_295_bool = 0;
	return 0;
}


func_5107()
{
	SetVariable("KnowShabnak", (int)1);
	return 0;
}


func_5113()
{
	SetVariable("ood1Andrei8", (int)1);
	return 0;
}


func_5629(var_75_bool)
{
	var_77_int = 0; var_78_string = "";
	func_4956(var_77_int, "d3q01");
	var_80_bool = var_77_int == (int)0;
	if(var_80_bool != 0) {
		var_75_bool = 1;
		return 0;
	}
	var_75_bool = 0;
	return 0;
}


func_5119()
{
	SetVariable("KnowMat", (int)1);
	return 0;
}


