// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,GetProperty/2,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetVariable/2,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:day|W:klara2_svita_positioner|W:wonder|W:wrong_wonder|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:AlbinosLate1|W:bad_wonder|W:Albinos1|W:BadKlara|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:K2S_Klara2Svita|W:ui/NPC_Albinos.png|W:ui/NPC_Albinos_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x2e7
// @RUN_TASK: 4
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa4 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1cd vars=int,int
// @TASK_4: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x2f1 vars=object
// @EVENT_7: op=0x347 vars=int
// @PE: 0x4a,0x8e,0xa4,0x141,0x1b7,0x1cd,0x31d,0x347,0x35e,0x48e,0x494,0x49b,0x4a2,0x4a8,0x4ae,0x4b3,0x4bd,0x4c7,0x4d1,0x4d8,0x4df

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object)
{
	if((int)1 != 0) {
		func_1104();
		var_20_bool = var_16_object == (int)40486;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_1166();
		}
		var_32_bool = var_15_bool == (int)40483;
		if(var_32_bool != 0) {
			var_33_string = "";
			func_142(var_16_object, "Neutral");
			@@@var_0_object:SetMessage((int)538595);
			@@@var_0_object:ClearReplies();
			var_51_bool = 0; var_52_object = Obj();
			var_52_object = var_1_object;
			func_1203(var_51_bool, var_52_object);
			if(var_51_bool != 0) {
				@@@var_0_object:AddReply((int)538598, (int)40487, (int)40486);
			}
			@@@var_0_object:AddReply((int)538596, (int)-1, (int)40484);
			@@@var_0_object:AddReply((int)538597, (int)-1, (int)40485);
			return 0;
		}
		var_76_bool = var_15_bool == (int)40487;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_142(var_16_object, "Neutral");
			@@@var_0_object:SetMessage((int)538599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538600, (int)-1, (int)40488);
			@@@var_0_object:AddReply((int)538601, (int)-1, (int)40489);
			return 0;
		}
		var_3_string = true;
		var_85_bool = 0;
		func_1356(var_85_bool);
		if(var_85_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object)
{
	if((int)1 != 0) {
		func_1104();
		var_20_bool = var_16_object == (int)40508;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_1179();
			var_29_object = Obj(); var_30_object = Obj();
			var_29_object = var_1_object;
			var_30_object = var_0_object;
			func_1192();
		}
		var_40_bool = var_16_object == (int)40511;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_1192();
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_1198();
		}
		var_69_bool = var_16_object == (int)40507;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_1172();
		}
		var_76_bool = var_16_object == (int)40510;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_1192();
		}
		var_80_bool = var_15_bool == (int)40491;
		if(var_80_bool != 0) {
			var_81_bool = 0; var_82_object = Obj();
			var_82_object = var_1_object;
			func_1213(var_81_bool, var_82_object);
			if(var_81_bool != 0) {
				var_96_object = Obj(); var_97_object = Obj();
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_1186();
				var_99_string = "";
				func_439(var_16_object, "Neutral");
				@@@var_0_object:SetMessage((int)538603);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)538604, (int)40494, (int)40492);
				@@@var_0_object:AddReply((int)538605, (int)40496, (int)40493);
				@@@var_0_object:AddReply((int)538621, (int)40494, (int)40512);
				return 0;
			}
			var_126_bool = 0; var_127_object = Obj();
			var_127_object = var_1_object;
			func_1223(var_126_bool, var_127_object);
			if(var_126_bool != 0) {
				var_132_string = "";
				func_439(var_16_object, "Neutral");
				@@@var_0_object:SetMessage((int)538622);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)538623, (int)-1, (int)40514);
				@@@var_0_object:AddReply((int)538624, (int)-1, (int)40515);
				return 0;
			}
			var_140_string = "";
			func_439(var_16_object, "Neutral");
			@@@var_0_object:SetMessage((int)538625);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538626, (int)40519, (int)40517);
			@@@var_0_object:AddReply((int)538627, (int)-1, (int)40518);
			return 0;
		}
		var_149_bool = var_15_bool == (int)40519;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_439(var_16_object, "Neutral");
			@@@var_0_object:SetMessage((int)538628);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538629, (int)-1, (int)40520);
			@@@var_0_object:AddReply((int)538630, (int)-1, (int)40521);
			return 0;
		}
		var_159_bool = var_15_bool == (int)40496;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_439(var_16_object, "Neutral");
			@@@var_0_object:SetMessage((int)538608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538609, (int)40501, (int)40497);
			@@@var_0_object:AddReply((int)538611, (int)40500, (int)40499);
			return 0;
		}
		var_169_bool = var_15_bool == (int)40500;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_439(var_16_object, "Neutral");
			@@@var_0_object:SetMessage((int)538612);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538614, (int)40498, (int)40502);
			@@@var_0_object:AddReply((int)538615, (int)40501, (int)40503);
			return 0;
		}
		var_179_bool = var_15_bool == (int)40501;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_439(var_16_object, "Neutral");
			@@@var_0_object:SetMessage((int)538613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538617, (int)-1, (int)40507);
			@@@var_0_object:AddReply((int)538619, (int)-1, (int)40510);
			return 0;
		}
		var_189_bool = var_15_bool == (int)40494;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_439(var_16_object, "Neutral");
			@@@var_0_object:SetMessage((int)538606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538607, (int)40498, (int)40495);
			@@@var_0_object:AddReply((int)538616, (int)40500, (int)40505);
			return 0;
		}
		var_199_bool = var_15_bool == (int)40498;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_439(var_16_object, "Neutral");
			@@@var_0_object:SetMessage((int)538610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538618, (int)-1, (int)40508);
			@@@var_0_object:AddReply((int)538620, (int)-1, (int)40511);
			return 0;
		}
		var_3_string = true;
		var_208_bool = 0;
		func_1356(var_208_bool);
		if(var_208_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1ce";
	
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object)
{
	var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0;
	func_862(var_18_int, var_19_int);
	GetProperty("day", var_18_int);
	var_24_int = 0;
	func_1133(var_24_int);
	var_30_bool = var_18_int == var_24_int;
	if(var_30_bool != 0) {
		var_31_int = 0; var_32_object = Obj();
		var_15_object = var_32_object;
		TaskCall(2);
		func_247(var_33_object, var_31_int, var_32_object);
		TaskReturn();
		var_33_object = var_19_int;
		var_212_bool = var_19_int == (int)1;
		if(var_212_bool != 0) {
			var_213_bool = 0; var_214_string = ""; var_215_string = "";
			func_1121(var_213_bool, "klara2_svita_positioner", "wonder");
		} else {
			var_220_bool = var_19_int == (int)2;
			if(var_220_bool == 0) goto Label_789;
			var_221_bool = 0; var_222_string = ""; var_223_string = "";
			func_1121(var_221_bool, "klara2_svita_positioner", "wrong_wonder");
	}
		var_224_int = 0; var_225_object = Obj();
		var_15_object = var_225_object;
		TaskCall(0);
		func_0(var_226_object, var_224_int, var_225_object);
		TaskReturn();
	}
Label_789:
	goto Label_796;
	
Label_796:
	return 4;
	
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_int)
{
	var_17_bool = var_15_int == (int)10;
	if(var_17_bool != 0) {
		var_18_bool = 0;
		func_824(var_13_bool, var_14_object, var_15_int, var_18_bool);
		if(var_18_bool != 0) {
			var_31_bool = var_2_object == 0; //@nz
			if(var_31_bool != 0) {
				var_32_object = Obj();
				var_32_object = var_4_bool;
				func_1093(var_32_object);
				var_2_object = true;
			}
		} else {
			var_39_object = var_2_object;
			if(var_39_object == 0) goto Label_861;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_861:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object)
{
	
Label_743:
	Sleep((int)1);
	var_16_float = 0; var_17_float = 0;
	func_797(var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, (float)300, (float)100);
	goto Label_743;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_224_int, var_225_object)
{
	var_227_object = Obj(); var_228_bool = 0; var_229_int = 0; var_230_bool = 0; var_231_object = Obj(); var_232_bool = 0; var_233_int = 0; var_234_bool = 0;
	var_0_object = var_225_object;
	var_235_bool = 0; var_236_object = Obj(); var_237_float = 0;
	var_225_object = var_236_object;
	func_975(var_235_bool, var_236_object, (float)70.0);
	var_238_bool = var_235_bool == 0; //@nz
	if(var_238_bool != 0) {
		var_224_int = -2;
		return 8;
	}
	CreateDialog(var_231_object);
	var_239_int = 0;
	func_1350(var_239_int);
	@@var_231_object:SetNPCName(var_239_int);
	var_240_int = 0;
	func_1348(var_240_int);
	@@var_231_object:SetNPCDescription(var_240_int);
	var_241_string = "";
	func_1352(var_241_string);
	@@var_231_object:SetPhoto(var_241_string);
	var_242_string = "";
	func_1354(var_242_string);
	@@var_231_object:SetPhoto2(var_242_string);
	var_243_int = 0;
	func_1308(var_243_int);
	@@var_231_object:SetPlayerName(var_243_int);
	IsOverrideActive(var_232_bool);
	var_244_bool = var_232_bool;
	if(var_244_bool != 0) {
		var_224_int = -2;
		return 8;
	}
	DoDialog(var_231_object);
	var_245_object = Obj(); var_246_object = Obj();
	var_225_object = var_245_object;
	var_231_object = var_246_object;
	TaskCall(1);
	func_74(var_247_object, var_248_object, var_249_string, var_250_bool, var_245_object, var_246_object);
	TaskReturn();
	@@var_231_object:IsDialogEnd(var_234_bool);
	
Label_56:
	var_284_bool = var_234_bool == 0; //@nz
	if(var_284_bool != 0) {
		sync();
		@@var_231_object:IsDialogEnd(var_234_bool);
		goto Label_56;
	}
	var_225_object = Obj();
	func_1044();
	StopDialog(var_231_object);
	@@var_231_object:GetReturnValue((int)-1);
	var_233_int = var_224_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1280(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	func_1267(Obj());
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
	SendWorldWndMessage((int)7);
	@@var_51_object:GetCategory(var_58_int);
	SetDiarySection(var_58_int);
	var_50_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1166()
{
	var_23_string = "";
	func_1325("AlbinosLate1");
	return 0;
}


func_142(var_2_object, var_252_string)
{
	var_253_bool = 0;
	func_1356(var_253_bool);
	var_254_bool = var_253_bool == 0; //@nz
	if(var_254_bool != 0) {
		return 0;
	}
	var_255_bool = var_252_string == var_2_object;
	if(var_255_bool != 0) {
		return 0;
	}
	var_256_string = ""; var_257_bool = 0;
	var_252_string = var_256_string;
	var_259_bool = var_252_string == "";
	if(var_259_bool != 0) {
		var_257_bool = 0;
	} else {
		var_257_bool = 1;
	}
	func_1078(var_256_string, var_257_bool);
	var_2_object = var_252_string;
	return 0;
	
}


func_1044()
{
	var_204_bool = 0; var_205_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_207_bool = 0;
	func_1356(var_207_bool);
	if(var_207_bool != 0) {
	} else {
		HasAnimationTrack(var_205_bool, "head");
		var_209_bool = var_205_bool;
		if(var_209_bool == 0) goto Label_1061;
		UnlookAsync("head");
	}
Label_1061:
	return 2;
	
}


func_1172()
{
	var_72_bool = 0; var_73_string = ""; var_74_string = "";
	func_1121(var_72_bool, "klara2_svita_positioner", "wonder");
	return 0;
}


func_1179()
{
	var_23_bool = 0; var_24_string = ""; var_25_string = "";
	func_1121(var_23_bool, "klara2_svita_positioner", "bad_wonder");
	return 0;
}


func_1308(var_94_int)
{
	var_95_int = 0; var_96_int = 0;
	GetVariable("branch", var_96_int);
	var_99_bool = var_96_int == (int)0;
	if(var_99_bool != 0) {
		var_94_int = 1;
		return 2;
	EMIT "GOTO 0x52b";
	}
	var_101_bool = var_96_int == (int)1;
	if(var_101_bool != 0) {
		var_94_int = 2;
		return 2;
	}
	var_94_int = 3;
	return 2;
}


func_797(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_16_float, var_17_float)
{
	var_18_bool = 0;
	func_970(var_18_bool);
	var_21_bool = var_18_bool == 0; //@nz
	if(var_21_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_16_float;
	var_1_object = var_17_float;
	SetTimer((int)10, (float)1.0);
	func_876();
	var_76_bool = var_3_string == 0; //@nz
	if(var_76_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1186()
{
	var_127_string = "";
	func_1325("Albinos1");
	return 0;
}


func_1062(var_164_string)
{
	var_165_bool = 0; var_166_float = 0; var_167_float = 0; var_168_bool = 0; var_169_float = 0; var_170_float = 0;
	lshHasAnimation(var_168_bool, var_164_string);
	var_171_bool = var_168_bool;
	if(var_171_bool != 0) {
		lshGetAnimTimes(var_164_string, var_169_float, var_170_float);
		lshPlayAnimation(var_169_float, var_170_float, (bool)0);
	} else {
		var_174_int = "Can't find lsh animation : " + var_164_string;
		Trace(var_174_int);
	}
	return 6;
	
}


func_1192()
{
	var_31_string = "";
	func_1325("BadKlara");
	return 0;
}


func_1325(var_127_string)
{
	var_128_int = 0; var_129_int = 0;
	GetProperty("day", var_129_int);
	var_132_int = "K2S_Klara2Svita" + var_127_string;
	var_133_int = var_132_int + var_129_int;
	SetVariable(var_133_int, (int)1);
	return 2;
}


func_1198()
{
	func_1254();
	return 0;
}


func_1203(var_261_bool, var_262_object)
{
	var_263_bool = 0; var_264_object = Obj();
	var_262_object = var_264_object;
	func_1233(var_264_object);
	if(var_263_bool != 0) {
		var_261_bool = 1;
		return 0;
	}
	var_261_bool = 0;
	return 0;
}


func_1078(var_139_string, var_140_bool)
{
	var_143_bool = 0; var_144_float = 0; var_145_float = 0; var_146_bool = 0; var_147_float = 0; var_148_float = 0;
	lshHasAnimation(var_146_bool, var_139_string);
	var_149_bool = var_146_bool;
	if(var_149_bool != 0) {
		lshGetAnimTimes(var_139_string, var_147_float, var_148_float);
		lshPlayAnimation(var_147_float, var_148_float, var_140_bool);
	} else {
		var_151_int = "Can't find lsh animation : " + var_139_string;
		Trace(var_151_int);
	}
	return 6;
	
}


func_439(var_2_object, var_135_string)
{
	var_136_bool = 0;
	func_1356(var_136_bool);
	var_137_bool = var_136_bool == 0; //@nz
	if(var_137_bool != 0) {
		return 0;
	}
	var_138_bool = var_135_string == var_2_object;
	if(var_138_bool != 0) {
		return 0;
	}
	var_139_string = ""; var_140_bool = 0;
	var_135_string = var_139_string;
	var_142_bool = var_135_string == "";
	if(var_142_bool != 0) {
		var_140_bool = 0;
	} else {
		var_140_bool = 1;
	}
	func_1078(var_139_string, var_140_bool);
	var_2_object = var_135_string;
	return 0;
	
}


func_1336(var_114_bool, var_115_string)
{
	var_116_int = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0;
	GetProperty("day", var_118_int);
	var_122_int = "K2S_Klara2Svita" + var_115_string;
	var_123_int = var_122_int + var_118_int;
	GetVariable(var_123_int, var_119_int);
	var_114_bool = var_119_int == (int)0;
	return 4;
}


func_824(var_0_object, var_1_object, var_4_bool, var_18_bool)
{
	var_19_float = 0; var_20_float = 0;
	var_21_bool = var_4_bool == 0; //@ne
	if(var_21_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	var_22_float = 0; var_23_object = Obj();
	var_23_object = var_4_bool;
	func_962(var_22_float, var_23_object);
	var_20_float = sqrt(var_22_float);
	var_30_object = var_2_object;
	if(var_30_object != 0) {
		var_20_float = var_20_float - var_1_object;
	}
	var_18_bool = var_20_float < var_0_object;
	return 2;
}


func_955(var_66_bool)
{
	var_66_bool = 1;
	return 0;
}


func_1213(var_110_bool, var_111_object)
{
	var_112_bool = 0; var_113_object = Obj();
	var_111_object = var_113_object;
	func_1240(var_113_object);
	if(var_112_bool != 0) {
		var_110_bool = 1;
		return 0;
	}
	var_110_bool = 0;
	return 0;
}


func_957()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_321(var_0_object, var_1_object, var_2_object, var_3_string, var_103_object, var_104_object)
{
	var_0_object = var_104_object;
	var_1_object = var_103_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_110_bool = 0; var_111_object = Obj();
		var_111_object = var_1_object;
		func_1213(var_110_bool, var_111_object);
		if(var_110_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_1186();
			var_135_string = "";
			func_439(var_104_object, "Neutral");
			@@@var_0_object:SetMessage((int)538603);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538604, (int)40494, (int)40492);
			@@@var_0_object:AddReply((int)538605, (int)40496, (int)40493);
			@@@var_0_object:AddReply((int)538621, (int)40494, (int)40512);
		} else {
				var_180_bool = 0; var_181_object = Obj();
				var_181_object = var_1_object;
				func_1223(var_180_bool, var_181_object);
				if(var_180_bool != 0) {
					var_186_string = "";
					func_439(var_104_object, "Neutral");
					@@@var_0_object:SetMessage((int)538622);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)538623, (int)-1, (int)40514);
					@@@var_0_object:AddReply((int)538624, (int)-1, (int)40515);
					goto Label_409;
				}
				var_194_string = "";
				func_439(var_104_object, "Neutral");
				@@@var_0_object:SetMessage((int)538625);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)538626, (int)40519, (int)40517);
				@@@var_0_object:AddReply((int)538627, (int)-1, (int)40518);
				goto Label_409;
		}
	}
Label_409:
	var_162_bool = 0;
	func_1356(var_162_bool);
	if(var_162_bool != 0) {

	Label_413:
		lshWaitForAnimEnd();
		var_163_string = var_3_string;
		if(var_163_string != 0) {
		} else {
			var_164_string = "";
			var_164_string = var_2_object;
			func_1062(var_164_string);
			goto Label_413;
	}
		PlayAnimation("all", "idle");

	Label_428:
		WaitForAnimEnd();
		var_177_string = var_3_string;
		if(var_177_string != 0) {
			goto Label_438;
		}
		PlayAnimation("all", "idle");
		goto Label_428;

	}
	goto Label_438;
	
Label_438:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x145";


func_962(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1348(var_91_int)
{
	var_91_int = 515595;
	return 0;
}


func_1093(var_32_object)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0);
	@@var_32_object:GetEyesHeight(var_35_float);
	var_36_cvector = CVector(0.0, 0.0, 0.0);
	var_37_float = GetByIndex(var_36_cvector, 1);
	var_35_float = var_37_float;
	SetByIndex(var_36_cvector, 1) = var_37_float;
	LookAsync(var_32_object, "head", var_36_cvector);
	return 4;
}


func_1350(var_90_int)
{
	var_90_int = 512611;
	return 0;
}


func_1223(var_180_bool, var_181_object)
{
	var_182_bool = 0; var_183_object = Obj();
	var_181_object = var_183_object;
	func_1247(var_183_object);
	if(var_182_bool != 0) {
		var_180_bool = 1;
		return 0;
	}
	var_180_bool = 0;
	return 0;
}


func_1352(var_92_string)
{
	var_92_string = "ui/NPC_Albinos.png";
	return 0;
}


func_1354(var_93_string)
{
	var_93_string = "ui/NPC_Albinos_b.png";
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_245_object, var_246_object)
{
	var_0_object = var_246_object;
	var_1_object = var_245_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_252_string = "";
		func_142(var_246_object, "Neutral");
		@@@var_0_object:SetMessage((int)538595);
		@@@var_0_object:ClearReplies();
		var_261_bool = 0; var_262_object = Obj();
		var_262_object = var_1_object;
		func_1203(var_261_bool, var_262_object);
		if(var_261_bool != 0) {
			@@@var_0_object:AddReply((int)538598, (int)40487, (int)40486);
		}
		@@@var_0_object:AddReply((int)538596, (int)-1, (int)40484);
		@@@var_0_object:AddReply((int)538597, (int)-1, (int)40485);
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	var_276_bool = 0;
	func_1356(var_276_bool);
	if(var_276_bool != 0) {

	Label_116:
		lshWaitForAnimEnd();
		var_277_string = var_3_string;
		if(var_277_string != 0) {
		} else {
			var_278_string = "";
			var_278_string = var_2_object;
			func_1062(var_278_string);
			goto Label_116;
	}
		PlayAnimation("all", "idle");

	Label_131:
		WaitForAnimEnd();
		var_281_string = var_3_string;
		if(var_281_string != 0) {
			goto Label_141;
		}
		PlayAnimation("all", "idle");
		goto Label_131;
	}
	goto Label_141;
	
Label_141:
	return 0;
	
}


func_1356(var_85_bool)
{
	var_85_bool = 0;
	return 0;
}


func_970(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0;
	IsLoaded(var_20_bool);
	var_20_bool = var_18_bool;
	return 2;
}


func_975(var_42_bool, var_43_object, var_44_float)
{
	var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_bool = 0;
	@@var_43_object:GetPosition(var_55_cvector);
	@@var_43_object:GetEyesHeight(var_54_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	var_63_float = var_63_float + var_54_float;
	SetByIndex(var_55_cvector, 1) = var_63_float;
	GetPosition(var_56_cvector);
	GetEyesHeight(var_54_float);
	var_64_float = GetByIndex(var_56_cvector, 1);
	var_64_float = var_64_float + var_54_float;
	SetByIndex(var_56_cvector, 1) = var_64_float;
	var_57_cvector = var_55_cvector - var_56_cvector;
	var_65_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (float)0;
	var_66_int = var_57_cvector | var_57_cvector;
	var_67_float = sqrt(var_66_int);
	var_57_cvector = var_57_cvector / var_67_float;
	var_58_cvector = -var_57_cvector;
	var_68_float = var_57_cvector * var_44_float;
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_70_cvector = var_58_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1111(var_69_cvector, var_70_cvector);
	var_78_float = var_69_cvector * (int)25;
	var_79_int = var_68_float + var_78_float;
	var_59_cvector = var_79_int - CVector(0.0, 10.0, 0.0);
	var_60_cvector = var_56_cvector + var_59_cvector;
	IsOverrideActive(var_61_bool);
	var_81_bool = var_61_bool;
	if(var_81_bool != 0) {
		var_42_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_60_cvector, var_58_cvector, (bool)1);
	var_83_float = GetByIndex(var_59_cvector, 0);
	var_84_float = GetByIndex(var_59_cvector, 2);
	Rotate(var_83_float, var_84_float);
	var_85_bool = 0;
	func_1356(var_85_bool);
	if(var_85_bool != 0) {
	} else {
		HasAnimationTrack(var_62_bool, "head");
		var_87_bool = var_62_bool;
		if(var_87_bool == 0) goto Label_1038;
		LookAsyncCamera("head");
	}
Label_1038:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_42_bool = 1;
	return 18;
	
}


func_1104()
{
	var_18_bool = 0;
	func_1356(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1233(var_263_bool)
{
	var_265_bool = 0; var_266_string = "";
	func_1336(var_265_bool, "AlbinosLate1");
	var_265_bool = var_263_bool;
	return 0;
}


func_1111(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0;
	var_74_int = var_70_cvector | var_70_cvector;
	var_73_float = sqrt(var_74_int);
	var_75_float = 9.999999974752427e-07;
	var_76_bool = var_73_float < var_75_float;
	if(var_76_bool != 0) {
		var_69_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_69_cvector = var_70_cvector / var_73_float;
	return 2;
}


func_1240(var_112_bool)
{
	var_114_bool = 0; var_115_string = "";
	func_1336(var_114_bool, "Albinos1");
	var_114_bool = var_112_bool;
	return 0;
}


func_862(var_2_object, var_3_string)
{
	func_957();
	KillTimer((int)10);
	var_21_object = var_2_object;
	if(var_21_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1247(var_182_bool)
{
	var_184_bool = 0; var_185_string = "";
	func_1336(var_184_bool, "BadKlara");
	var_182_bool = !var_184_bool;
	return 0;
}


func_1121(var_213_bool, var_214_string, var_215_string)
{
	var_216_object = Obj(); var_217_object = Obj();
	FindActor(var_217_object, var_214_string);
	var_218_bool = var_217_object == 0; //@ne
	if(var_218_bool != 0) {
		var_213_bool = 0;
		return 2;
	}
	Trigger(var_217_object, var_215_string);
	var_213_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1254()
{
	var_45_object = Obj(); var_46_object = Obj();
	CreateDiaryEntry(var_46_object, (int)785, (int)2, (int)542470);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_46_object = var_51_object;
	func_1280(var_50_bool, var_51_object, (int)723);
	return 2;
}
EMIT "Stack[-1] = 0";


func_876()
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_float = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_float = 0; var_38_bool = 0;
	WaitForAnimEnd();
	var_39_bool = 0;
	func_970(var_39_bool);
	var_40_bool = var_39_bool == 0; //@nz
	if(var_40_bool != 0) {
		return 14;
	}
	func_1149((int)0);
	var_41_int = var_32_int;
	var_33_int = 0;
	
Label_890:
	var_54_bool = 0;
	var_54_bool = 0;
	var_56_bool = var_33_int < (int)5;
	if(var_56_bool != 0) {
		var_57_bool = 0;
		func_970(var_57_bool);
		if(var_57_bool != 0) {
			var_54_bool = 1;
		}
	}
	if(var_54_bool != 0) {
		irand(var_34_int, (int)3);
		var_60_bool = var_34_int == (int)0;
		if(var_60_bool != 0) {
			var_61_int = var_32_int;
			if(var_61_int == 0) goto Label_923;
			irand(var_35_int, var_32_int);
			var_63_string = ""; var_64_int = 0;
			var_35_int = var_64_int;
			func_1142(var_63_string, var_64_int);
			PlayAnimation("all", var_63_string);
			WaitForAnimEnd(var_36_bool);
			var_65_bool = var_36_bool == 0; //@nz
			if(var_65_bool != 0) {
			} else {
		} else {
				var_70_bool = var_34_int == (int)1;
				if(var_70_bool != 0) {
					rand(var_37_float, (int)4);
					var_73_int = var_37_float + (int)1;
					Sleep(var_73_int, var_38_bool);
					var_74_bool = var_38_bool == 0; //@nz
					if(var_74_bool != 0) {
						goto Label_952;
					}
					goto Label_941;
				}
				var_75_int = var_33_int;
				if(var_75_int == 0) goto Label_941;
				goto Label_952;
		}
		Label_941:
			var_66_bool = 0;
			func_955(var_66_bool);
			var_67_bool = var_66_bool == 0; //@nz
			if(var_67_bool != 0) {
				goto Label_952;
			}
			ResetAAS();
			var_33_int = var_33_int + (int)1;
			goto Label_890;

		}
	}
Label_952:
	ResetAAS();
	return 14;
	
}


func_1133(var_24_int)
{
	var_25_float = 0; var_26_float = 0;
	GetGameTime(var_26_float);
	var_28_int = 0;
	var_28_int = var_26_float / (int)24;
	var_24_int = (int)1 + var_28_int;
	return 2;
}


func_1267(var_59_object)
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


func_1142(var_47_string, var_48_int)
{
	var_49_string = ""; var_50_string = "";
	var_51_int = var_48_int;
	if(var_51_int != 0) {
		"idle" = "idle" + var_48_int;
	}
	var_50_string = var_47_string;
	return 2;
}


func_247(var_0_object, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0;
	var_0_object = var_32_object;
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0;
	var_32_object = var_43_object;
	func_975(var_42_bool, var_43_object, (float)70.0);
	var_89_bool = var_42_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	CreateDialog(var_38_object);
	var_90_int = 0;
	func_1350(var_90_int);
	@@var_38_object:SetNPCName(var_90_int);
	var_91_int = 0;
	func_1348(var_91_int);
	@@var_38_object:SetNPCDescription(var_91_int);
	var_92_string = "";
	func_1352(var_92_string);
	@@var_38_object:SetPhoto(var_92_string);
	var_93_string = "";
	func_1354(var_93_string);
	@@var_38_object:SetPhoto2(var_93_string);
	var_94_int = 0;
	func_1308(var_94_int);
	@@var_38_object:SetPlayerName(var_94_int);
	IsOverrideActive(var_39_bool);
	var_102_bool = var_39_bool;
	if(var_102_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	DoDialog(var_38_object);
	var_103_object = Obj(); var_104_object = Obj();
	var_32_object = var_103_object;
	var_38_object = var_104_object;
	TaskCall(3);
	func_321(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object);
	TaskReturn();
	@@var_38_object:IsDialogEnd(var_41_bool);
	
Label_303:
	var_202_bool = var_41_bool == 0; //@nz
	if(var_202_bool != 0) {
		sync();
		@@var_38_object:IsDialogEnd(var_41_bool);
		goto Label_303;
	}
	var_32_object = Obj();
	func_1044();
	StopDialog(var_38_object);
	@@var_38_object:GetReturnValue((int)-1);
	var_40_int = var_31_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1149(var_41_int)
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0;
	var_44_int = 0;
	
Label_1151:
	var_47_string = ""; var_48_int = 0;
	var_44_int = var_48_int;
	func_1142(var_47_string, var_48_int);
	HasAnimation(var_45_bool, "all", var_47_string);
	var_52_bool = var_45_bool == 0; //@nz
	if(var_52_bool != 0) {
	} else {
		var_44_int = var_44_int + (int)1;
		goto Label_1151;
	}
	var_44_int = var_41_int;
	return 4;
	
}


