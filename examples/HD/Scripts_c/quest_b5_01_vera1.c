// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:b5q01TalkToVera|W:b5q01PlaceButchers|W:b5q01GathererWife|W:pt_gatherer3|A:AddMark|W:quest_b5_01|W:place_butchers|W:oob5Vera1_1|W:b5q01VeraGotoStvorki|W:pt_b5q01_vera|W:vera_stvorki|W:oob5Vera1_2|A:ShowMap|W:b5q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x263
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbb vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x269 vars=object
// @EVENT_26: op=0x29a vars=string
// @EVENT_6: op=0x2a2 vars=
// @EVENT_7: op=0x2e3 vars=int
// @PE: 0x4a,0xa5,0xbb,0x269,0x29a,0x2b9,0x2e3,0x2fa,0x439,0x45f,0x47a,0x480,0x485,0x495,0x4a5,0x4af,0x4bb,0x4c7,0x4d3

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_1004();
		var_17_bool = var_13_bool == (int)19719;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1119();
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_1081();
		}
		var_27_bool = var_13_bool == (int)19992;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_object;
			func_1087();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_1125();
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_1152();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_1157(var_99_object);
		}
		var_125_bool = var_13_bool == (int)19723;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_1087();
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_1125();
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_1152();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_1173(var_133_object);
		}
		var_140_bool = var_13_bool == (int)19990;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_1087();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_1125();
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_1152();
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_1157(var_148_object);
		}
		var_150_bool = var_13_bool == (int)19989;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_1087();
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_1125();
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_1157(var_156_object);
		}
		var_158_bool = var_13_bool == (int)19964;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_1146();
		}
		var_164_bool = var_12_bool == (int)19718;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518626);
			@@@var_0_object:ClearReplies();
			var_183_bool = 0;
			var_183_bool = 0;
			var_184_bool = 0;
			var_184_bool = 0;
			var_185_bool = 0; var_186_object = Obj();
			var_186_object = var_1_object;
			func_1199(var_186_object);
			if(var_185_bool != 0) {
				var_191_bool = 0; var_192_object = Obj();
				var_192_object = var_1_object;
				func_1211(var_192_object);
				if(var_191_bool != 0) {
					var_184_bool = 1;
				}
			}
			if(var_184_bool != 0) {
				var_197_bool = 0; var_198_object = Obj();
				var_198_object = var_1_object;
				func_1189(var_197_bool, var_198_object);
				if(var_197_bool != 0) {
					var_183_bool = 1;
				}
			}
			if(var_183_bool != 0) {
				@@@var_0_object:AddReply((int)518627, (int)19969, (int)19719);
			}
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_object;
			func_1223(var_216_object);
			if(var_215_bool != 0) {
				@@@var_0_object:AddReply((int)518857, (int)19965, (int)19964);
			}
			@@@var_0_object:AddReply((int)518632, (int)-1, (int)19724);
			return 0;
		}
		var_228_bool = var_12_bool == (int)19965;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518859, (int)19967, (int)19966);
			return 0;
		}
		var_235_bool = var_12_bool == (int)19967;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518861, (int)-1, (int)19968);
			return 0;
		}
		var_242_bool = var_12_bool == (int)19969;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518863, (int)19971, (int)19970);
			@@@var_0_object:AddReply((int)518865, (int)19973, (int)19972);
			return 0;
		}
		var_252_bool = var_12_bool == (int)19973;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518868, (int)19978, (int)19975);
			return 0;
		}
		var_259_bool = var_12_bool == (int)19971;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518864);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518867, (int)19976, (int)19974);
			return 0;
		}
		var_266_bool = var_12_bool == (int)19976;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518870, (int)19978, (int)19977);
			return 0;
		}
		var_273_bool = var_12_bool == (int)19978;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518872, (int)19982, (int)19980);
			@@@var_0_object:AddReply((int)518873, (int)19982, (int)19981);
			return 0;
		}
		var_283_bool = var_12_bool == (int)19982;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518875, (int)19985, (int)19984);
			return 0;
		}
		var_290_bool = var_12_bool == (int)19985;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518877, (int)19987, (int)19986);
			@@@var_0_object:AddReply((int)518880, (int)-1, (int)19989);
			return 0;
		}
		var_300_bool = var_12_bool == (int)19987;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518878);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518879, (int)19991, (int)19988);
			@@@var_0_object:AddReply((int)518881, (int)-1, (int)19990);
			return 0;
		}
		var_310_bool = var_12_bool == (int)19991;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518883, (int)-1, (int)19992);
			@@@var_0_object:AddReply((int)518884, (int)19994, (int)19993);
			return 0;
		}
		var_320_bool = var_12_bool == (int)19994;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_165(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518631, (int)-1, (int)19723);
			return 0;
		}
		var_3_string = true;
		var_326_bool = 0;
		func_1385(var_326_bool);
		if(var_326_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbc";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_762(var_11_bool, var_12_object);
	var_16_int = 0; var_17_object = Obj();
	var_12_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_646(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_762(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_695(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_1011(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_724(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_993(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_761;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_761:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_628(var_11_bool, (float)300, (float)100);
	return 0;
}


func_1152()
{
	func_1256();
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_875(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_1379(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_1377(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_1381(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_1383(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_1360(var_79_int);
	@@var_23_object:SetPlayerName(var_79_int);
	IsOverrideActive(var_24_bool);
	var_87_bool = var_24_bool;
	if(var_87_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	DoDialog(var_23_object);
	var_88_object = Obj(); var_89_object = Obj();
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	@@var_23_object:IsDialogEnd(var_26_bool);
	
Label_56:
	var_177_bool = var_26_bool == 0; //@nz
	if(var_177_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_944();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1282(var_80_bool, var_81_object, var_82_int)
{
	var_83_object = Obj(); var_84_object = Obj(); var_85_int = 0; var_86_object = Obj(); var_87_object = Obj(); var_88_int = 0;
	func_1269(Obj());
	var_89_object = var_86_object;
	@@var_86_object:Find(var_82_int, var_87_object);
	var_94_bool = var_87_object == 0; //@nz
	if(var_94_bool != 0) {
		var_96_int = "Can't find diary parent with id: " + var_82_int;
		Trace(var_96_int);
		var_80_bool = 0;
		return 6;
	}
	@@var_87_object:AddChild(var_81_object);
	SendWorldWndMessage((int)7);
	@@var_81_object:GetCategory(var_88_int);
	SetDiarySection(var_88_int);
	var_80_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1027(var_117_int, var_118_string)
{
	var_119_int = 0; var_120_int = 0;
	GetVariable(var_118_string, var_120_int);
	var_120_int = var_117_int;
	return 2;
}


func_1157(var_99_object)
{
	var_100_object = Obj(); var_101_string = ""; var_102_float = 0;
	func_1310(Obj());
	var_103_object = var_100_object;
	func_1327(var_100_object, "pt_gatherer3", (float)2);
	var_123_object = Obj();
	func_1310(var_123_object);
	@@var_99_object:ShowMap(var_123_object);
	return 0;
}


func_646(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_870(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_695(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_1011(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_1146()
{
	SetVariable("oob5Vera1_2", (int)1);
	return 0;
}


func_776()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_870(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_1064((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_790:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_870(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_823;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_1057(var_68_string, var_69_int);
			PlayAnimation("all", var_68_string);
			WaitForAnimEnd(var_41_bool);
			var_70_bool = var_41_bool == 0; //@nz
			if(var_70_bool != 0) {
			} else {
		} else {
				var_75_bool = var_39_int == (int)1;
				if(var_75_bool != 0) {
					rand(var_42_float, (int)4);
					var_78_int = var_42_float + (int)1;
					Sleep(var_78_int, var_43_bool);
					var_79_bool = var_43_bool == 0; //@nz
					if(var_79_bool != 0) {
						goto Label_852;
					}
					goto Label_841;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_841;
				goto Label_852;
		}
		Label_841:
			var_71_bool = 0;
			func_855(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_852;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_790;

		}
	}
Label_852:
	ResetAAS();
	return 14;
	
}


func_1032(var_54_bool, var_55_string, var_56_string)
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


func_1044(var_51_float)
{
	var_52_float = 0; var_53_float = 0;
	GetGameTime(var_53_float);
	var_53_float = var_51_float;
	return 2;
}


func_1173(var_133_object)
{
	var_134_object = Obj(); var_135_string = ""; var_136_float = 0;
	func_1310(Obj());
	var_137_object = var_134_object;
	func_1327(var_134_object, "pt_b5q01_vera", (float)2);
	var_138_object = Obj();
	func_1310(var_138_object);
	@@var_133_object:ShowMap(var_138_object);
	return 0;
}


func_1049(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_137_int = 0;
	var_136_float = var_137_int;
	var_134_int = var_137_int % (int)24;
	return 2;
}


func_1310(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_object = Obj(); var_44_object = Obj();
	GetMainOutdoorScene(var_43_object);
	var_45_bool = var_43_object == 0; //@ne
	if(var_45_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_44_object = 0;
		var_44_object = var_40_object;
		return 4;
	}
	@@var_43_object:GetMap(var_44_object);
	var_44_object = var_40_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1057(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_165(var_2_object, var_95_string)
{
	var_96_bool = 0;
	func_1385(var_96_bool);
	var_97_bool = var_96_bool == 0; //@nz
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_bool = var_95_string == var_2_object;
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_string = ""; var_100_bool = 0;
	var_95_string = var_99_string;
	var_102_bool = var_95_string == "";
	if(var_102_bool != 0) {
		var_100_bool = 0;
	} else {
		var_100_bool = 1;
	}
	func_978(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	return 0;
	
}


func_1189(var_129_bool, var_130_object)
{
	var_131_bool = 0; var_132_object = Obj();
	var_130_object = var_132_object;
	func_1235(var_132_object);
	if(var_131_bool != 0) {
		var_129_bool = 1;
		return 0;
	}
	var_129_bool = 0;
	return 0;
}


func_1064(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_1066:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_1057(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_1066;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_1199(var_115_bool)
{
	var_117_int = 0; var_118_string = "";
	func_1027(var_117_int, "b5q01");
	var_122_bool = var_117_int == (int)1;
	if(var_122_bool != 0) {
		var_115_bool = 1;
		return 0;
	}
	var_115_bool = 0;
	return 0;
}


func_944()
{
	var_179_bool = 0; var_180_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_182_bool = 0;
	func_1385(var_182_bool);
	if(var_182_bool != 0) {
	} else {
		HasAnimationTrack(var_180_bool, "head");
		var_184_bool = var_180_bool;
		if(var_184_bool == 0) goto Label_961;
		UnlookAsync("head");
	}
Label_961:
	return 2;
	
}


func_1327(var_100_object, var_101_string, var_102_float)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_object = Obj(); var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0;
	GetMainOutdoorScene(var_110_object);
	var_112_bool = var_110_object == 0; //@ne
	if(var_112_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_110_object:GetLocator(var_101_string, var_111_bool, var_108_cvector, var_109_cvector);
	var_114_bool = var_111_bool == 0; //@nz
	if(var_114_bool != 0) {
		var_116_int = "Warning: outdoor scene locator " + var_101_string;
		var_118_int = var_116_int + " doesnt exist";
		Trace(var_118_int);
	}
	@@var_110_object:GetMap(var_100_object);
	var_119_bool = var_100_object == 0; //@ne
	if(var_119_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_121_float = GetByIndex(var_108_cvector, 0);
	var_122_float = GetByIndex(var_108_cvector, 2);
	@@var_100_object:SetMapParams(var_121_float, var_122_float, var_102_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_695(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_1081()
{
	SetVariable("b5q01TalkToVera", (int)1);
	return 0;
}


func_697(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_870(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	SetTimer((int)10, (float)1.0);
	func_776();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1211(var_123_bool)
{
	var_125_int = 0; var_126_string = "";
	func_1027(var_125_int, "oob5Vera1_1");
	var_128_bool = var_125_int == (int)0;
	if(var_128_bool != 0) {
		var_123_bool = 1;
		return 0;
	}
	var_123_bool = 0;
	return 0;
}


func_1087()
{
	var_30_object = Obj(); var_31_object = Obj();
	var_32_int = 0; var_33_string = "";
	func_1027(var_32_int, "b5q01PlaceButchers");
	var_37_bool = var_32_int == (int)0;
	if(var_37_bool != 0) {
		SetVariable("b5q01PlaceButchers", (int)1);
		func_1310(Obj());
		var_40_object = var_31_object;
		var_51_float = 0;
		func_1044(var_51_float);
		@@var_31_object:AddMark("b5q01GathererWife", "pt_gatherer3", (int)1, (int)530181, var_51_float);
		var_54_bool = 0; var_55_string = ""; var_56_string = "";
		func_1032(var_54_bool, "quest_b5_01", "place_butchers");
		var_31_object = 0;
	}
	return 2;
}


func_962(var_161_string)
{
	var_162_bool = 0; var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_float = 0; var_167_float = 0;
	lshHasAnimation(var_165_bool, var_161_string);
	var_168_bool = var_165_bool;
	if(var_168_bool != 0) {
		lshGetAnimTimes(var_161_string, var_166_float, var_167_float);
		lshPlayAnimation(var_166_float, var_167_float, (bool)0);
	} else {
		var_171_int = "Can't find lsh animation : " + var_161_string;
		Trace(var_171_int);
	}
	return 6;
	
}


func_1223(var_147_bool)
{
	var_149_int = 0; var_150_string = "";
	func_1027(var_149_int, "oob5Vera1_2");
	var_152_bool = var_149_int == (int)0;
	if(var_152_bool != 0) {
		var_147_bool = 1;
		return 0;
	}
	var_147_bool = 0;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_string = "";
		func_165(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)518626);
		@@@var_0_object:ClearReplies();
		var_113_bool = 0;
		var_113_bool = 0;
		var_114_bool = 0;
		var_114_bool = 0;
		var_115_bool = 0; var_116_object = Obj();
		var_116_object = var_1_object;
		func_1199(var_116_object);
		if(var_115_bool != 0) {
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_1211(var_124_object);
			if(var_123_bool != 0) {
				var_114_bool = 1;
			}
		}
		if(var_114_bool != 0) {
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_1189(var_129_bool, var_130_object);
			if(var_129_bool != 0) {
				var_113_bool = 1;
			}
		}
		if(var_113_bool != 0) {
			@@@var_0_object:AddReply((int)518627, (int)19969, (int)19719);
		}
		var_147_bool = 0; var_148_object = Obj();
		var_148_object = var_1_object;
		func_1223(var_148_object);
		if(var_147_bool != 0) {
			@@@var_0_object:AddReply((int)518857, (int)19965, (int)19964);
		}
		@@@var_0_object:AddReply((int)518632, (int)-1, (int)19724);
		goto Label_135;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_135:
	var_159_bool = 0;
	func_1385(var_159_bool);
	if(var_159_bool != 0) {

	Label_139:
		lshWaitForAnimEnd();
		var_160_string = var_3_string;
		if(var_160_string != 0) {
		} else {
			var_161_string = "";
			var_161_string = var_2_object;
			func_962(var_161_string);
			goto Label_139;
	}
		PlayAnimation("all", "idle");

	Label_154:
		WaitForAnimEnd();
		var_174_string = var_3_string;
		if(var_174_string != 0) {
			goto Label_164;
		}
		PlayAnimation("all", "idle");
		goto Label_154;
	}
	goto Label_164;
	
Label_164:
	return 0;
	
}


func_1360(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x55f";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_978(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0;
	lshHasAnimation(var_106_bool, var_99_string);
	var_109_bool = var_106_bool;
	if(var_109_bool != 0) {
		lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		var_111_int = "Can't find lsh animation : " + var_99_string;
		Trace(var_111_int);
	}
	return 6;
	
}


func_1235(var_131_bool)
{
	var_133_bool = 0;
	var_133_bool = 0;
	var_134_int = 0;
	func_1049(var_134_int);
	var_140_bool = var_134_int >= (int)0;
	if(var_140_bool != 0) {
		var_141_int = 0;
		func_1049(var_141_int);
		var_143_bool = var_141_int < (int)20;
		if(var_143_bool != 0) {
			var_133_bool = 1;
		}
	}
	if(var_133_bool != 0) {
		var_131_bool = 1;
		return 0;
	}
	var_131_bool = 0;
	return 0;
}


func_724(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_862(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_855(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_857()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_862(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_1119()
{
	SetVariable("oob5Vera1_1", (int)1);
	return 0;
}


func_1377(var_76_int)
{
	var_76_int = 515593;
	return 0;
}


func_993(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0);
	@@var_29_object:GetEyesHeight(var_32_float);
	var_33_cvector = CVector(0.0, 0.0, 0.0);
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	LookAsync(var_29_object, "head", var_33_cvector);
	return 4;
}


func_1379(var_75_int)
{
	var_75_int = 512582;
	return 0;
}


func_1381(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_1125()
{
	var_62_object = Obj(); var_63_object = Obj();
	func_1310(Obj());
	var_64_object = var_63_object;
	var_69_float = 0;
	func_1044(var_69_float);
	@@var_63_object:AddMark("b5q01VeraGotoStvorki", "pt_b5q01_vera", (int)1, (int)519747, var_69_float);
	var_70_bool = 0; var_71_string = ""; var_72_string = "";
	func_1032(var_70_bool, "quest_b5_01", "vera_stvorki");
	return 2;
}
EMIT "Stack[-1] = 0";


func_1383(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_870(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_1385(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_1256()
{
	var_75_object = Obj(); var_76_object = Obj();
	CreateDiaryEntry(var_76_object, (int)389, (int)1, (int)525828);
	var_80_bool = 0; var_81_object = Obj(); var_82_int = 0;
	var_76_object = var_81_object;
	func_1282(var_80_bool, var_81_object, (int)238);
	return 2;
}
EMIT "Stack[-1] = 0";


func_875(var_27_bool, var_28_object, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0;
	@@var_28_object:GetPosition(var_40_cvector);
	@@var_28_object:GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	var_48_float = var_48_float + var_39_float;
	SetByIndex(var_40_cvector, 1) = var_48_float;
	GetPosition(var_41_cvector);
	GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_39_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_52_float = sqrt(var_51_int);
	var_42_cvector = var_42_cvector / var_52_float;
	var_43_cvector = -var_42_cvector;
	var_53_float = var_42_cvector * var_29_float;
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	var_55_cvector = var_43_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1017(var_54_cvector, var_55_cvector);
	var_63_float = var_54_cvector * (int)25;
	var_64_int = var_53_float + var_63_float;
	var_44_cvector = var_64_int - CVector(0.0, 10.0, 0.0);
	var_45_cvector = var_41_cvector + var_44_cvector;
	IsOverrideActive(var_46_bool);
	var_66_bool = var_46_bool;
	if(var_66_bool != 0) {
		var_27_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_45_cvector, var_43_cvector, (bool)1);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_68_float, var_69_float);
	var_70_bool = 0;
	func_1385(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_938;
		LookAsyncCamera("head");
	}
Label_938:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_1004()
{
	var_15_bool = 0;
	func_1385(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1011(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_628(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_630:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_697(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_630;
}
EMIT "Return(); Pop(4)";


func_1269(var_89_object)
{
	var_90_object = Obj(); var_91_object = Obj();
	GetDiaryRoot(var_91_object);
	var_92_bool = var_91_object == 0; //@nz
	if(var_92_bool != 0) {
		Trace("Can't retrieve diary root");
		var_89_object = 0;
		return 2;
	}
	var_91_object = var_89_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1017(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_55_cvector | var_55_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_54_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_54_cvector = var_55_cvector / var_58_float;
	return 2;
}


func_762(var_2_object, var_3_string)
{
	func_857();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


