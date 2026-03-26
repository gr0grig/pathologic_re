// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateIntVector/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:ood12BirdmaskS1|W:quest_d12_01|W:init_sobor|W:ood12BirdmaskS2|W:ood12BirdmaskS3|W:ood12BirdmaskS4|W:sobor@door1|W:branch|A:add|W:vol_|A:size|A:get|W:game_final
// @GLOBALS: 0:object:
// @RUN_OP: 0x2e6
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x104 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x2f2 vars=object
// @EVENT_7: op=0x32d vars=int
// @PE: 0x4a,0xee,0x104,0x2f2,0x303,0x32d,0x344,0x493,0x499,0x4a0,0x4a6,0x4ac,0x4b2,0x4b9,0x4c3,0x4cd,0x4d9,0x4e5,0x4f1,0x4fd,0x503,0x51f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_1078();
		var_15_bool = var_11_object == (int)41936;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1184();
		}
		var_21_bool = var_11_object == (int)41942;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_1190();
		}
		var_27_bool = var_11_object == (int)41920;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_object;
			func_1196();
		}
		var_33_bool = var_11_object == (int)37168;
		if(var_33_bool != 0) {
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_object;
			func_1202();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_1177();
		}
		var_55_bool = var_10_bool == (int)37143;
		if(var_55_bool != 0) {
			var_56_bool = 0; var_57_object = Obj();
			var_57_object = var_1_object;
			func_1209(var_56_bool, var_57_object);
			var_105_bool = var_56_bool == 0; //@nz
			if(var_105_bool != 0) {
				var_106_string = "";
				func_238(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)535461);
				@@@var_0_object:ClearReplies();
				var_124_bool = 0; var_125_object = Obj();
				var_125_object = var_1_object;
				func_1241(var_125_object);
				if(var_124_bool != 0) {
					@@@var_0_object:AddReply((int)539970, (int)41937, (int)41936);
				}
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_1253(var_136_object);
				if(var_135_bool != 0) {
					@@@var_0_object:AddReply((int)539976, (int)41943, (int)41942);
				}
				@@@var_0_object:AddReply((int)535479, (int)-1, (int)37161);
				return 0;
			}
			var_147_bool = 0; var_148_object = Obj();
			var_148_object = var_1_object;
			func_1219(var_147_bool, var_148_object);
			var_158_bool = var_147_bool == 0; //@nz
			if(var_158_bool != 0) {
				var_159_string = "";
				func_238(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)535443);
				@@@var_0_object:ClearReplies();
				var_161_bool = 0; var_162_object = Obj();
				var_162_object = var_1_object;
				func_1265(var_162_object);
				if(var_161_bool != 0) {
					@@@var_0_object:AddReply((int)539954, (int)41921, (int)41920);
				}
				@@@var_0_object:AddReply((int)535460, (int)-1, (int)37142);
				return 0;
			}
			var_173_bool = 0;
			var_173_bool = 0;
			var_174_bool = 0; var_175_object = Obj();
			var_175_object = var_1_object;
			func_1209(var_174_bool, var_175_object);
			if(var_174_bool != 0) {
				var_176_bool = 0; var_177_object = Obj();
				var_177_object = var_1_object;
				func_1229(var_177_object);
				if(var_176_bool != 0) {
					var_173_bool = 1;
				}
			}
			if(var_173_bool != 0) {
				var_182_object = Obj(); var_183_object = Obj();
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_1171();
				var_186_string = "";
				func_238(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)535485);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539994, (int)41963, (int)41962);
				return 0;
			}
			var_191_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)535487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535488, (int)-1, (int)37170);
			@@@var_0_object:AddReply((int)539997, (int)-1, (int)41965);
			return 0;
		}
		var_200_bool = var_10_bool == (int)41963;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539995);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535486, (int)-1, (int)37168);
			return 0;
		}
		var_207_bool = var_10_bool == (int)41921;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539987, (int)41954, (int)41953);
			@@@var_0_object:AddReply((int)539969, (int)-1, (int)41935);
			return 0;
		}
		var_217_bool = var_10_bool == (int)41954;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539956, (int)41923, (int)41922);
			return 0;
		}
		var_224_bool = var_10_bool == (int)41923;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539957);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539958, (int)41925, (int)41924);
			@@@var_0_object:AddReply((int)539989, (int)41956, (int)41955);
			return 0;
		}
		var_234_bool = var_10_bool == (int)41956;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539990);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539991, (int)41929, (int)41957);
			@@@var_0_object:AddReply((int)539992, (int)41927, (int)41958);
			return 0;
		}
		var_244_bool = var_10_bool == (int)41925;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539959);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539960, (int)41927, (int)41926);
			return 0;
		}
		var_251_bool = var_10_bool == (int)41927;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539962, (int)41929, (int)41928);
			@@@var_0_object:AddReply((int)539966, (int)-1, (int)41932);
			return 0;
		}
		var_261_bool = var_10_bool == (int)41929;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539963);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539965, (int)-1, (int)41931);
			@@@var_0_object:AddReply((int)539968, (int)-1, (int)41934);
			return 0;
		}
		var_271_bool = var_10_bool == (int)41943;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539977);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539978, (int)41945, (int)41944);
			@@@var_0_object:AddReply((int)539984, (int)41951, (int)41950);
			return 0;
		}
		var_281_bool = var_10_bool == (int)41951;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539986, (int)-1, (int)41952);
			return 0;
		}
		var_288_bool = var_10_bool == (int)41945;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539979);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539980, (int)41947, (int)41946);
			@@@var_0_object:AddReply((int)539993, (int)-1, (int)41961);
			return 0;
		}
		var_298_bool = var_10_bool == (int)41947;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539982, (int)-1, (int)41948);
			@@@var_0_object:AddReply((int)539983, (int)-1, (int)41949);
			return 0;
		}
		var_308_bool = var_10_bool == (int)41937;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539971);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539972, (int)41939, (int)41938);
			@@@var_0_object:AddReply((int)539975, (int)-1, (int)41941);
			return 0;
		}
		var_318_bool = var_10_bool == (int)41939;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_238(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539974, (int)-1, (int)41940);
			return 0;
		}
		var_3_string = true;
		var_324_bool = 0;
		func_1169(var_324_bool);
		if(var_324_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x105";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0;
	func_1402(var_11_int);
	var_16_bool = var_11_int == (int)0;
	if(var_16_bool != 0) {
		func_836(var_9_object, var_10_object);
		var_20_int = 0; var_21_object = Obj();
		var_10_object = var_21_object;
		TaskCall(0);
		func_0(var_22_object, var_20_int, var_21_object);
		TaskReturn();
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_798(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_1067(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_835;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_835:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_742:
	if((bool)1 != 0) {
		var_11_float = 0; var_12_float = 0;
		func_771(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		Sleep((int)1);
		goto Label_742;
	}
	return 0;
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_0_object = var_21_object;
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0;
	var_21_object = var_32_object;
	func_949(var_31_bool, var_32_object, (float)130.0);
	var_78_bool = var_31_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	CreateDialog(var_27_object);
	var_79_int = 0;
	func_1163(var_79_int);
	@@var_27_object:SetNPCName(var_79_int);
	var_80_int = 0;
	func_1161(var_80_int);
	@@var_27_object:SetNPCDescription(var_80_int);
	var_81_string = "";
	func_1165(var_81_string);
	@@var_27_object:SetPhoto(var_81_string);
	var_82_string = "";
	func_1167(var_82_string);
	@@var_27_object:SetPhoto2(var_82_string);
	var_83_int = 0;
	func_1294(var_83_int);
	@@var_27_object:SetPlayerName(var_83_int);
	IsOverrideActive(var_28_bool);
	var_91_bool = var_28_bool;
	if(var_91_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	DoDialog(var_27_object);
	var_92_object = Obj(); var_93_object = Obj();
	var_21_object = var_92_object;
	var_27_object = var_93_object;
	TaskCall(1);
	func_74(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object);
	TaskReturn();
	@@var_27_object:IsDialogEnd(var_30_bool);
	
Label_56:
	var_260_bool = var_30_bool == 0; //@nz
	if(var_260_bool != 0) {
		sync();
		@@var_27_object:IsDialogEnd(var_30_bool);
		goto Label_56;
	}
	var_21_object = Obj();
	func_1018();
	StopDialog(var_27_object);
	@@var_27_object:GetReturnValue((int)-1);
	var_29_int = var_20_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1018()
{
	var_262_bool = 0; var_263_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_265_bool = 0;
	func_1169(var_265_bool);
	if(var_265_bool != 0) {
	} else {
		HasAnimationTrack(var_263_bool, "head");
		var_267_bool = var_263_bool;
		if(var_267_bool == 0) goto Label_1035;
		UnlookAsync("head");
	}
Label_1035:
	return 2;
	
}


func_1283(var_210_bool)
{
	var_212_int = 0;
	func_1129(var_212_int);
	var_218_bool = var_212_int >= (int)19;
	if(var_218_bool != 0) {
		var_210_bool = 1;
		return 0;
	}
	var_210_bool = 0;
	return 0;
}


func_771(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_944(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	SetTimer((int)10, (float)1.0);
	func_850();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1161(var_80_int)
{
	var_80_int = 515571;
	return 0;
}


func_1163(var_79_int)
{
	var_79_int = 504029;
	return 0;
}


func_1036(var_192_string)
{
	var_193_bool = 0; var_194_float = 0; var_195_float = 0; var_196_bool = 0; var_197_float = 0; var_198_float = 0;
	lshHasAnimation(var_196_bool, var_192_string);
	var_199_bool = var_196_bool;
	if(var_199_bool != 0) {
		lshGetAnimTimes(var_192_string, var_197_float, var_198_float);
		lshPlayAnimation(var_197_float, var_198_float, (bool)0);
	} else {
		var_202_int = "Can't find lsh animation : " + var_192_string;
		Trace(var_202_int);
	}
	return 6;
	
}


func_1165(var_81_string)
{
	var_81_string = "ui/NPC_bmask.png";
	return 0;
}


func_1294(var_83_int)
{
	var_84_int = 0; var_85_int = 0;
	GetVariable("branch", var_85_int);
	var_88_bool = var_85_int == (int)0;
	if(var_88_bool != 0) {
		var_83_int = 1;
		return 2;
	EMIT "GOTO 0x51d";
	}
	var_90_bool = var_85_int == (int)1;
	if(var_90_bool != 0) {
		var_83_int = 2;
		return 2;
	}
	var_83_int = 3;
	return 2;
}


func_1167(var_82_string)
{
	var_82_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_1169(var_74_bool)
{
	var_74_bool = 0;
	return 0;
}


func_1171()
{
	SetVariable("ood12BirdmaskS1", (int)1);
	return 0;
}


func_1177()
{
	var_48_bool = 0; var_49_string = ""; var_50_string = "";
	func_1117(var_48_bool, "quest_d12_01", "init_sobor");
	return 0;
}


func_1052(var_153_string, var_154_bool)
{
	var_157_bool = 0; var_158_float = 0; var_159_float = 0; var_160_bool = 0; var_161_float = 0; var_162_float = 0;
	lshHasAnimation(var_160_bool, var_153_string);
	var_163_bool = var_160_bool;
	if(var_163_bool != 0) {
		lshGetAnimTimes(var_153_string, var_161_float, var_162_float);
		lshPlayAnimation(var_161_float, var_162_float, var_154_bool);
	} else {
		var_165_int = "Can't find lsh animation : " + var_153_string;
		Trace(var_165_int);
	}
	return 6;
	
}


func_798(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_936(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_1311(var_112_object, var_113_bool, var_114_int)
{
	@@var_112_object:add((int)6);
	@@var_112_object:add((int)26);
	@@var_112_object:add((int)2);
	@@var_112_object:add((int)22);
	var_120_bool = var_113_bool == (bool)0;
	if(var_120_bool != 0) {
		@@var_112_object:add((int)15);
		@@var_112_object:add((int)5);
		@@var_112_object:add((int)16);
	} else {
		var_125_bool = var_114_int != (int)0;
		if(var_125_bool == 0) goto Label_1343;
		@@var_112_object:add((int)15);
	}
Label_1343:
	return 0;
	
}


func_1184()
{
	SetVariable("ood12BirdmaskS2", (int)1);
	return 0;
}


func_929(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_931()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1190()
{
	SetVariable("ood12BirdmaskS3", (int)1);
	return 0;
}


func_936(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_1067(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0);
	@@var_27_object:GetEyesHeight(var_30_float);
	var_31_cvector = CVector(0.0, 0.0, 0.0);
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	LookAsync(var_27_object, "head", var_31_cvector);
	return 4;
}


func_1196()
{
	SetVariable("ood12BirdmaskS4", (int)1);
	return 0;
}


func_944(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_1202()
{
	var_36_string = ""; var_37_bool = 0;
	func_1100("sobor@door1", (bool)0);
	return 0;
}


func_949(var_31_bool, var_32_object, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0;
	@@var_32_object:GetPosition(var_44_cvector);
	@@var_32_object:GetEyesHeight(var_43_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	var_52_float = var_52_float + var_43_float;
	SetByIndex(var_44_cvector, 1) = var_52_float;
	GetPosition(var_45_cvector);
	GetEyesHeight(var_43_float);
	var_53_float = GetByIndex(var_45_cvector, 1);
	var_53_float = var_53_float + var_43_float;
	SetByIndex(var_45_cvector, 1) = var_53_float;
	var_46_cvector = var_44_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (float)0;
	var_55_int = var_46_cvector | var_46_cvector;
	var_56_float = sqrt(var_55_int);
	var_46_cvector = var_46_cvector / var_56_float;
	var_47_cvector = -var_46_cvector;
	var_57_float = var_46_cvector * var_33_float;
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0);
	var_59_cvector = var_47_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1085(var_58_cvector, var_59_cvector);
	var_67_float = var_58_cvector * (int)25;
	var_68_int = var_57_float + var_67_float;
	var_48_cvector = var_68_int - CVector(0.0, 10.0, 0.0);
	var_49_cvector = var_45_cvector + var_48_cvector;
	IsOverrideActive(var_50_bool);
	var_70_bool = var_50_bool;
	if(var_70_bool != 0) {
		var_31_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_49_cvector, var_47_cvector, (bool)1);
	var_72_float = GetByIndex(var_48_cvector, 0);
	var_73_float = GetByIndex(var_48_cvector, 2);
	Rotate(var_72_float, var_73_float);
	var_74_bool = 0;
	func_1169(var_74_bool);
	if(var_74_bool != 0) {
	} else {
		HasAnimationTrack(var_51_bool, "head");
		var_76_bool = var_51_bool;
		if(var_76_bool == 0) goto Label_1012;
		LookAsyncCamera("head");
	}
Label_1012:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_31_bool = 1;
	return 18;
	
}


func_1078()
{
	var_13_bool = 0;
	func_1169(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1209(var_99_bool, var_100_object)
{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1277(var_102_object);
	if(var_101_bool != 0) {
		var_99_bool = 1;
		return 0;
	}
	var_99_bool = 0;
	return 0;
}


func_1085(var_58_cvector, var_59_cvector)
{
	var_61_float = 0; var_62_float = 0;
	var_63_int = var_59_cvector | var_59_cvector;
	var_62_float = sqrt(var_63_int);
	var_64_float = 9.999999974752427e-07;
	var_65_bool = var_62_float < var_64_float;
	if(var_65_bool != 0) {
		var_58_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_58_cvector = var_59_cvector / var_62_float;
	return 2;
}


func_1344(var_138_bool, var_139_int)
{
	var_140_int = 0; var_141_int = 0;
	var_143_int = "vol_" + var_139_int;
	GetVariable(var_143_int, var_141_int);
	var_145_int = var_141_int & (int)4;
	var_138_bool = var_145_int != (int)0;
	return 2;
}


func_1219(var_208_bool, var_209_object)
{
	var_210_bool = 0; var_211_object = Obj();
	var_209_object = var_211_object;
	func_1283(var_211_object);
	if(var_210_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_836(var_2_object, var_3_string)
{
	func_931();
	KillTimer((int)10);
	var_18_object = var_2_object;
	if(var_18_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1095(var_169_int, var_170_string)
{
	var_171_int = 0; var_172_int = 0;
	GetVariable(var_170_string, var_172_int);
	var_172_int = var_169_int;
	return 2;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_92_object, var_93_object)
{
	var_0_object = var_93_object;
	var_1_object = var_92_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_99_bool = 0; var_100_object = Obj();
		var_100_object = var_1_object;
		func_1209(var_99_bool, var_100_object);
		var_148_bool = var_99_bool == 0; //@nz
		if(var_148_bool != 0) {
			var_149_string = "";
			func_238(var_93_object, "Neutral");
			@@@var_0_object:SetMessage((int)535461);
			@@@var_0_object:ClearReplies();
			var_167_bool = 0; var_168_object = Obj();
			var_168_object = var_1_object;
			func_1241(var_168_object);
			if(var_167_bool != 0) {
				@@@var_0_object:AddReply((int)539970, (int)41937, (int)41936);
			}
			var_178_bool = 0; var_179_object = Obj();
			var_179_object = var_1_object;
			func_1253(var_179_object);
			if(var_178_bool != 0) {
				@@@var_0_object:AddReply((int)539976, (int)41943, (int)41942);
			}
			@@@var_0_object:AddReply((int)535479, (int)-1, (int)37161);
		} else {
				var_208_bool = 0; var_209_object = Obj();
				var_209_object = var_1_object;
				func_1219(var_208_bool, var_209_object);
				var_219_bool = var_208_bool == 0; //@nz
				if(var_219_bool != 0) {
					var_220_string = "";
					func_238(var_93_object, "Neutral");
					@@@var_0_object:SetMessage((int)535443);
					@@@var_0_object:ClearReplies();
					var_222_bool = 0; var_223_object = Obj();
					var_223_object = var_1_object;
					func_1265(var_223_object);
					if(var_222_bool != 0) {
						@@@var_0_object:AddReply((int)539954, (int)41921, (int)41920);
					}
					@@@var_0_object:AddReply((int)535460, (int)-1, (int)37142);
					goto Label_208;
				}
				var_234_bool = 0;
				var_234_bool = 0;
				var_235_bool = 0; var_236_object = Obj();
				var_236_object = var_1_object;
				func_1209(var_235_bool, var_236_object);
				if(var_235_bool != 0) {
					var_237_bool = 0; var_238_object = Obj();
					var_238_object = var_1_object;
					func_1229(var_238_object);
					if(var_237_bool != 0) {
						var_234_bool = 1;
					}
				}
				if(var_234_bool != 0) {
					var_243_object = Obj(); var_244_object = Obj();
					var_243_object = var_1_object;
					var_244_object = var_0_object;
					func_1171();
					var_247_string = "";
					func_238(var_93_object, "Neutral");
					@@@var_0_object:SetMessage((int)535485);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)539994, (int)41963, (int)41962);
					goto Label_208;
				}
				var_252_string = "";
				func_238(var_93_object, "Neutral");
				@@@var_0_object:SetMessage((int)535487);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535488, (int)-1, (int)37170);
				@@@var_0_object:AddReply((int)539997, (int)-1, (int)41965);
				goto Label_208;
		}
	}
Label_208:
	var_190_bool = 0;
	func_1169(var_190_bool);
	if(var_190_bool != 0) {

	Label_212:
		lshWaitForAnimEnd();
		var_191_string = var_3_string;
		if(var_191_string != 0) {
		} else {
			var_192_string = "";
			var_192_string = var_2_object;
			func_1036(var_192_string);
			goto Label_212;
	}
		PlayAnimation("all", "idle");

	Label_227:
		WaitForAnimEnd();
		var_205_string = var_3_string;
		if(var_205_string != 0) {
			goto Label_237;
		}
		PlayAnimation("all", "idle");
		goto Label_227;

	}
	goto Label_237;
	
Label_237:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_1354(var_129_bool, var_130_int)
{
	var_131_int = 0; var_132_int = 0;
	var_134_int = "vol_" + var_130_int;
	GetVariable(var_134_int, var_132_int);
	var_136_int = var_132_int & (int)16;
	var_129_bool = var_136_int != (int)0;
	return 2;
}


func_1100(var_36_string, var_37_bool)
{
	var_38_object = Obj(); var_39_object = Obj();
	FindActor(var_39_object, var_36_string);
	var_40_bool = var_39_object == 0; //@nz
	if(var_40_bool != 0) {
		var_42_int = "Door " + var_36_string;
		var_44_int = var_42_int + " not found";
		Trace(var_44_int);
	} else {
		@@var_39_object:SetProperty("locked", var_37_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_1229(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_1095(var_239_int, "ood12BirdmaskS1");
	var_242_bool = var_239_int == (int)0;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_850()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_944(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_1144((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_864:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_944(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_897;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_1137(var_58_string, var_59_int);
			PlayAnimation("all", var_58_string);
			WaitForAnimEnd(var_31_bool);
			var_60_bool = var_31_bool == 0; //@nz
			if(var_60_bool != 0) {
			} else {
		} else {
				var_65_bool = var_29_int == (int)1;
				if(var_65_bool != 0) {
					rand(var_32_float, (int)4);
					var_68_int = var_32_float + (int)1;
					Sleep(var_68_int, var_33_bool);
					var_69_bool = var_33_bool == 0; //@nz
					if(var_69_bool != 0) {
						goto Label_926;
					}
					goto Label_915;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_915;
				goto Label_926;
		}
		Label_915:
			var_61_bool = 0;
			func_929(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_926;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_864;

		}
	}
Label_926:
	ResetAAS();
	return 14;
	
}


func_1364(var_103_bool)
{
	var_104_object = Obj(); var_105_int = 0; var_106_int = 0; var_107_int = 0; var_108_object = Obj(); var_109_int = 0; var_110_int = 0; var_111_int = 0;
	CreateIntVector(var_108_object);
	var_112_object = Obj(); var_113_bool = 0; var_114_int = 0;
	var_108_object = var_112_object;
	func_1311(var_112_object, (bool)0, (int)-1);
	@@var_108_object:size(var_109_int);
	var_110_int = 0;
	
Label_1376:
	var_127_bool = var_110_int < var_109_int;
	if(var_127_bool != 0) {
		@@var_108_object:get(var_111_int, var_110_int);
		var_128_bool = 0;
		var_128_bool = 1;
		var_129_bool = 0; var_130_int = 0;
		var_111_int = var_130_int;
		func_1354(var_129_bool, var_130_int);
		if(var_129_bool != 1) {
			var_138_bool = 0; var_139_int = 0;
			var_111_int = var_139_int;
			func_1344(var_138_bool, var_139_int);
			if(var_138_bool != 1) {
				var_128_bool = 0;
			}
		}
		if(var_128_bool != 0) {
			var_103_bool = 0;
			var_110_int = var_110_int + (int)1;
			goto Label_1376;
		}
		return 8;
	}
	var_103_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1241(var_167_bool)
{
	var_169_int = 0; var_170_string = "";
	func_1095(var_169_int, "ood12BirdmaskS2");
	var_174_bool = var_169_int == (int)0;
	if(var_174_bool != 0) {
		var_167_bool = 1;
		return 0;
	}
	var_167_bool = 0;
	return 0;
}


func_1117(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj();
	FindActor(var_52_object, var_49_string);
	var_53_bool = var_52_object == 0; //@ne
	if(var_53_bool != 0) {
		var_48_bool = 0;
		return 2;
	}
	Trigger(var_52_object, var_50_string);
	var_48_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1253(var_178_bool)
{
	var_180_int = 0; var_181_string = "";
	func_1095(var_180_int, "ood12BirdmaskS3");
	var_183_bool = var_180_int == (int)0;
	if(var_183_bool != 0) {
		var_178_bool = 1;
		return 0;
	}
	var_178_bool = 0;
	return 0;
}


func_1129(var_212_int)
{
	var_213_float = 0; var_214_float = 0;
	GetGameTime(var_214_float);
	var_215_int = 0;
	var_214_float = var_215_int;
	var_212_int = var_215_int % (int)24;
	return 2;
}


func_238(var_2_object, var_149_string)
{
	var_150_bool = 0;
	func_1169(var_150_bool);
	var_151_bool = var_150_bool == 0; //@nz
	if(var_151_bool != 0) {
		return 0;
	}
	var_152_bool = var_149_string == var_2_object;
	if(var_152_bool != 0) {
		return 0;
	}
	var_153_string = ""; var_154_bool = 0;
	var_149_string = var_153_string;
	var_156_bool = var_149_string == "";
	if(var_156_bool != 0) {
		var_154_bool = 0;
	} else {
		var_154_bool = 1;
	}
	func_1052(var_153_string, var_154_bool);
	var_2_object = var_149_string;
	return 0;
	
}


func_1265(var_222_bool)
{
	var_224_int = 0; var_225_string = "";
	func_1095(var_224_int, "ood12BirdmaskS4");
	var_227_bool = var_224_int == (int)0;
	if(var_227_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_1137(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_1144(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_1146:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_1137(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_1146;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_1402(var_11_int)
{
	var_12_int = 0; var_13_int = 0;
	GetVariable("game_final", var_13_int);
	var_13_int = var_11_int;
	return 2;
}


func_1277(var_101_bool)
{
	func_1364((bool)0);
	var_103_bool = var_101_bool;
	return 0;
}


