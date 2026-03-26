// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Mishka.png|W:ui/NPC_Mishka_b.png|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x2b0
// @RUN_TASK: 6
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x188 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x286 vars=int,int
// @TASK_6: vars=cvector params=0
// @EVENT_7: op=0x2fc vars=int
// @EVENT_6: op=0x322 vars=
// @EVENT_5: op=0x331 vars=
// @EVENT_45: op=0x33e vars=bool
// @EVENT_0: op=0x34a vars=object
// @PE: 0x51,0x8b,0xa1,0x133,0x172,0x188,0x236,0x270,0x286,0x2fc,0x322,0x33e,0x502,0x53b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	if((int)1 != 0) {
		func_1250();
		var_21_bool = var_16_bool == (int)26866;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_139(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525511, (int)-1, (int)26867);
			@@@var_0_object:AddReply((int)529288, (int)30743, (int)30742);
			return 0;
		}
		var_47_bool = var_16_bool == (int)30743;
		if(var_47_bool != 0) {
			var_48_string = "";
			func_139(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529290, (int)-1, (int)30744);
			@@@var_0_object:AddReply((int)529291, (int)-1, (int)30745);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_1320(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	if((int)1 != 0) {
		func_1250();
		var_21_bool = var_16_bool == (int)36960;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_370(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_50_bool = var_16_bool == (int)36962;
		if(var_50_bool != 0) {
			var_51_string = "";
			func_370(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_60_bool = var_16_bool == (int)36964;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_370(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_69_bool = 0;
		func_1320(var_69_bool);
		if(var_69_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x189";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_cvector)
{
	if((int)1 != 0) {
		func_1250();
		var_21_bool = var_16_int == (int)42548;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_624(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_46_bool = 0;
		func_1320(var_46_bool);
		if(var_46_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x287";
	
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_int)
{
	var_18_bool = var_16_int == (int)10;
	if(var_18_bool != 0) {
		func_760();
		var_20_bool = 0;
		var_20_bool = 0;
		var_21_bool = 0;
		func_974(var_21_bool);
		if(var_21_bool != 0) {
			var_24_bool = 0;
			func_729(var_24_bool);
			if(var_24_bool != 0) {
				var_20_bool = 1;
			}
		}
		if(var_20_bool != 0) {
			var_41_bool = 0;
			func_709(var_41_bool);
			if(var_41_bool != 0) {
				var_60_bool = 0; var_61_object = Obj();
				func_1257(Obj());
				var_62_object = var_61_object;
				func_1124(var_60_bool, var_61_object);
			}
		} else {
			func_724(var_16_int);
			func_751();
		}
	}
	return 0;
	
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_942();
	func_760();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	StopGroup0();
	func_760();
	var_17_string = "";
	func_1204("Neutral");
	func_751();
	return 0;
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		func_751();
	} else {
		var_23_string = "";
		func_1204("Neutral");
	}
	return 0;
	
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	IsOverrideActive(var_18_bool);
	var_19_bool = var_18_bool == 0; //@nz
	if(var_19_bool != 0) {
		EventDisable(0);
		func_942();
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_965(var_20_bool, var_21_object);
		EventEnable(0);
		var_34_object = Obj();
		var_16_object = var_34_object;
		func_1339(var_34_object);
		var_381_string = "";
		func_1204("Neutral");
		func_760();
		func_751();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	var_16_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_695(var_15_cvector);
	return 0;
}


func_0(var_0_object, var_37_int, var_38_object)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0;
	var_0_object = var_38_object;
	var_48_bool = 0; var_49_object = Obj(); var_50_float = 0;
	var_38_object = var_49_object;
	func_979(var_48_bool, var_49_object, (float)70.0);
	var_95_bool = var_48_bool == 0; //@nz
	if(var_95_bool != 0) {
		var_37_int = -2;
		return 8;
	}
	CreateDialog(var_44_object);
	var_96_int = 0;
	func_1314(var_96_int);
	@@var_44_object:SetNPCName(var_96_int);
	var_97_int = 0;
	func_1312(var_97_int);
	@@var_44_object:SetNPCDescription(var_97_int);
	var_98_string = "";
	func_1316(var_98_string);
	@@var_44_object:SetPhoto(var_98_string);
	var_99_string = "";
	func_1318(var_99_string);
	@@var_44_object:SetPhoto2(var_99_string);
	var_100_int = 0;
	func_1322(var_100_int);
	@@var_44_object:SetPlayerName(var_100_int);
	IsOverrideActive(var_45_bool);
	var_108_bool = var_45_bool;
	if(var_108_bool != 0) {
		var_37_int = -2;
		return 8;
	}
	DoDialog(var_44_object);
	var_109_bool = 0; var_110_object = Obj();
	func_1257(Obj());
	var_111_object = var_110_object;
	func_1066(var_109_bool, var_110_object);
	var_204_object = Obj(); var_205_object = Obj();
	var_38_object = var_204_object;
	var_44_object = var_205_object;
	TaskCall(1);
	func_81(var_206_object, var_207_object, var_208_string, var_209_bool, var_204_object, var_205_object);
	TaskReturn();
	@@var_44_object:IsDialogEnd(var_47_bool);
	
Label_63:
	var_253_bool = var_47_bool == 0; //@nz
	if(var_253_bool != 0) {
		sync();
		@@var_44_object:IsDialogEnd(var_47_bool);
		goto Label_63;
	}
	var_38_object = Obj();
	func_1048();
	StopDialog(var_44_object);
	@@var_44_object:GetReturnValue((int)-1);
	var_46_int = var_37_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1282(var_263_bool, var_264_int)
{
	var_265_int = 0;
	func_1273(var_265_int);
	var_263_bool = var_265_int == var_264_int;
	return 0;
}


func_1288(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_1161(var_151_bool, var_152_object)
{
	var_153_string = ""; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_string = ""; var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = "";
	var_164_int = 0;
	func_1273(var_164_int);
	var_170_int = "d" + var_164_int;
	var_158_string = var_170_int + "m";
	var_159_int = 0;
	
Label_1170:
	if((int)1 != 0) {
		var_174_int = var_159_int + (int)1;
		var_175_int = var_158_string + var_174_int;
		@@var_152_object:HasProperty(var_175_int, var_160_bool);
		var_176_bool = var_160_bool == 0; //@nz
		if(var_176_bool != 0) {
		} else {
			var_159_int = var_159_int + (int)1;
			goto Label_1170;
		}
	}
	var_177_bool = var_159_int == 0; //@nz
	if(var_177_bool != 0) {
		var_151_bool = 0;
		return 10;
	}
	var_161_int = 0;
	var_179_bool = var_159_int > (int)1;
	if(var_179_bool != 0) {
		irand(var_161_int, var_159_int);
	}
	var_181_int = var_161_int + (int)1;
	var_182_int = var_158_string + var_181_int;
	@@var_152_object:GetProperty(var_182_int, var_162_string);
	var_183_bool = 0; var_184_string = "";
	var_162_string = var_184_string;
	func_1235(var_183_bool, var_184_string);
	var_183_bool = var_151_bool;
	return 10;
	
}


func_139(var_2_object, var_211_string)
{
	var_212_bool = 0;
	func_1320(var_212_bool);
	var_213_bool = var_212_bool == 0; //@nz
	if(var_213_bool != 0) {
		return 0;
	}
	var_214_bool = var_211_string == var_2_object;
	if(var_214_bool != 0) {
		return 0;
	}
	var_215_string = ""; var_216_bool = 0;
	var_211_string = var_215_string;
	var_218_bool = var_211_string == "";
	if(var_218_bool != 0) {
		var_216_bool = 0;
	} else {
		var_216_bool = 1;
	}
	func_1220(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	return 0;
	
}


func_1295(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_1297:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_1288(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_1297;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_1048()
{
	var_255_bool = 0; var_256_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_258_bool = 0;
	func_1320(var_258_bool);
	if(var_258_bool != 0) {
	} else {
		HasAnimationTrack(var_256_bool, "head");
		var_260_bool = var_256_bool;
		if(var_260_bool == 0) goto Label_1065;
		UnlookAsync("head");
	}
Label_1065:
	return 2;
	
}


func_1312(var_97_int)
{
	var_97_int = 515546;
	return 0;
}


func_1314(var_96_int)
{
	var_96_int = 502871;
	return 0;
}


func_1316(var_98_string)
{
	var_98_string = "ui/NPC_Mishka.png";
	return 0;
}


func_1318(var_99_string)
{
	var_99_string = "ui/NPC_Mishka_b.png";
	return 0;
}


func_1320(var_91_bool)
{
	var_91_bool = 1;
	return 0;
}


func_1322(var_100_int)
{
	var_101_int = 0; var_102_int = 0;
	GetVariable("branch", var_102_int);
	var_105_bool = var_102_int == (int)0;
	if(var_105_bool != 0) {
		var_100_int = 1;
		return 2;
	EMIT "GOTO 0x539";
	}
	var_107_bool = var_102_int == (int)1;
	if(var_107_bool != 0) {
		var_100_int = 2;
		return 2;
	}
	var_100_int = 3;
	return 2;
}


func_1066(var_109_bool, var_110_object)
{
	var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_int = 0;
	GetVariable("voice_common", var_116_int);
	var_119_int = var_116_int;
	if(var_119_int != 0) {
		var_120_bool = 0; var_121_object = Obj();
		var_110_object = var_121_object;
		func_1124(var_120_bool, var_121_object);
		var_150_bool = var_120_bool == 0; //@nz
		if(var_150_bool != 0) {
			var_151_bool = 0; var_152_object = Obj();
			var_110_object = var_152_object;
			func_1161(var_151_bool, var_152_object);
			var_186_bool = var_151_bool == 0; //@nz
			if(var_186_bool != 0) {
				var_109_bool = 0;
				return 4;
			}
		}
		irand(var_117_int, (int)2);
		var_188_int = var_117_int;
		if(var_188_int != 0) {
			var_191_int = var_116_int + (int)1;
			var_193_int = var_191_int % (int)3;
			SetVariable("voice_common", var_193_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_196_bool = 0; var_197_object = Obj();
		var_110_object = var_197_object;
		func_1161(var_196_bool, var_197_object);
		var_198_bool = var_196_bool == 0; //@nz
		if(var_198_bool != 0) {
			var_199_bool = 0; var_200_object = Obj();
			var_110_object = var_200_object;
			func_1124(var_199_bool, var_200_object);
			var_201_bool = var_199_bool == 0; //@nz
			if(var_201_bool != 0) {
				var_109_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1122;
	
Label_1122:
	var_109_bool = 1;
	return 4;
	
}


func_940(var_55_bool)
{
	var_55_bool = 1;
	return 0;
}


func_942()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_290_object, var_291_object)
{
	var_0_object = var_291_object;
	var_1_object = var_290_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_297_string = "";
		func_370(var_291_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_340;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x137";
	}
Label_340:
	var_315_bool = 0;
	func_1320(var_315_bool);
	if(var_315_bool != 0) {

	Label_344:
		lshWaitForAnimEnd();
		var_316_string = var_3_string;
		if(var_316_string != 0) {
		} else {
			var_317_string = "";
			var_317_string = var_2_object;
			func_1204(var_317_string);
			goto Label_344;
	}
		PlayAnimation("all", "idle");

	Label_359:
		WaitForAnimEnd();
		var_320_string = var_3_string;
		if(var_320_string != 0) {
			goto Label_369;
		}
		PlayAnimation("all", "idle");
		goto Label_359;
	}
	goto Label_369;
	
Label_369:
	return 0;
	
}


func_1204(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0;
	lshHasAnimation(var_241_bool, var_237_string);
	var_244_bool = var_241_bool;
	if(var_244_bool != 0) {
		lshGetAnimTimes(var_237_string, var_242_float, var_243_float);
		lshPlayAnimation(var_242_float, var_243_float, (bool)0);
	} else {
		var_247_int = "Can't find lsh animation : " + var_237_string;
		Trace(var_247_int);
	}
	return 6;
	
}


func_947(var_31_float, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	GetPosition(var_36_cvector);
	@@var_32_object:GetPosition(var_37_cvector);
	var_38_cvector = var_37_cvector - var_36_cvector;
	var_31_float = var_38_cvector | var_38_cvector;
	return 6;
}


func_566(var_0_object, var_1_object, var_2_object, var_3_string, var_349_object, var_350_object)
{
	var_0_object = var_350_object;
	var_1_object = var_349_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_356_string = "";
		func_624(var_350_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_594;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x23a";
	}
Label_594:
	var_371_bool = 0;
	func_1320(var_371_bool);
	if(var_371_bool != 0) {

	Label_598:
		lshWaitForAnimEnd();
		var_372_string = var_3_string;
		if(var_372_string != 0) {
		} else {
			var_373_string = "";
			var_373_string = var_2_object;
			func_1204(var_373_string);
			goto Label_598;
	}
		PlayAnimation("all", "idle");

	Label_613:
		WaitForAnimEnd();
		var_376_string = var_3_string;
		if(var_376_string != 0) {
			goto Label_623;
		}
		PlayAnimation("all", "idle");
		goto Label_613;
	}
	goto Label_623;
	
Label_623:
	return 0;
	
}


func_695(var_0_object)
{
	var_17_bool = 0;
	func_974(var_17_bool);
	var_20_bool = var_17_bool == 0; //@nz
	if(var_20_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_704:
	func_871();
	goto Label_704;
}
EMIT "Return(); Pop(0)";


func_1339(var_34_object)
{
	var_35_bool = GlobalVars[1];
	var_36_bool = var_35_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_37_int = 0; var_38_object = Obj();
		var_34_object = var_38_object;
		TaskCall(0);
		func_0(var_39_object, var_37_int, var_38_object);
		TaskReturn();
		var_262_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_263_bool = 0; var_264_int = 0;
	func_1282(var_263_bool, (int)12);
	if(var_263_bool != 0) {
		var_266_int = 0; var_267_object = Obj();
		var_34_object = var_267_object;
		TaskCall(2);
		func_226(var_268_object, var_266_int, var_267_object);
		TaskReturn();
		return 0;
	}
	var_325_int = 0; var_326_object = Obj();
	var_34_object = var_326_object;
	TaskCall(4);
	func_485(var_327_object, var_325_int, var_326_object);
	TaskReturn();
	return 0;
}


func_955(var_24_bool, var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0;
	GetPosition(var_29_cvector);
	var_30_cvector = var_25_cvector - var_29_cvector;
	var_32_float = GetByIndex(var_30_cvector, 0);
	var_33_float = GetByIndex(var_30_cvector, 2);
	Rotate(var_32_float, var_33_float, var_31_bool);
	var_31_bool = var_24_bool;
	return 6;
}


func_1220(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0;
	lshHasAnimation(var_222_bool, var_215_string);
	var_225_bool = var_222_bool;
	if(var_225_bool != 0) {
		lshGetAnimTimes(var_215_string, var_223_float, var_224_float);
		lshPlayAnimation(var_223_float, var_224_float, var_216_bool);
	} else {
		var_227_int = "Can't find lsh animation : " + var_215_string;
		Trace(var_227_int);
	}
	return 6;
	
}


func_965(var_20_bool, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	@@var_21_object:GetPosition(var_23_cvector);
	var_24_bool = 0; var_25_cvector = CVector(0,0,0);
	var_23_cvector = var_25_cvector;
	func_955(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
	return 2;
}


func_709(var_41_bool)
{
	var_42_object = Obj(); var_43_object = Obj();
	FindActor(var_43_object, "player");
	var_45_bool = var_43_object == 0; //@nz
	if(var_45_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	var_46_bool = 0; var_47_object = Obj();
	var_43_object = var_47_object;
	func_965(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_974(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_204_object, var_205_object)
{
	var_0_object = var_205_object;
	var_1_object = var_204_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_211_string = "";
		func_139(var_205_object, "Neutral");
		@@@var_0_object:SetMessage((int)525510);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525511, (int)-1, (int)26867);
		@@@var_0_object:AddReply((int)529288, (int)30743, (int)30742);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_235_bool = 0;
	func_1320(var_235_bool);
	if(var_235_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_236_string = var_3_string;
		if(var_236_string != 0) {
		} else {
			var_237_string = "";
			var_237_string = var_2_object;
			func_1204(var_237_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_250_string = var_3_string;
		if(var_250_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_979(var_48_bool, var_49_object, var_50_float)
{
	var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0;
	@@var_49_object:GetPosition(var_61_cvector);
	@@var_49_object:GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_61_cvector, 1);
	var_69_float = var_69_float + var_60_float;
	SetByIndex(var_61_cvector, 1) = var_69_float;
	GetPosition(var_62_cvector);
	GetEyesHeight(var_60_float);
	var_70_float = GetByIndex(var_62_cvector, 1);
	var_70_float = var_70_float + var_60_float;
	SetByIndex(var_62_cvector, 1) = var_70_float;
	var_63_cvector = var_61_cvector - var_62_cvector;
	var_71_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_72_int = var_63_cvector | var_63_cvector;
	var_73_float = sqrt(var_72_int);
	var_63_cvector = var_63_cvector / var_73_float;
	var_64_cvector = -var_63_cvector;
	var_74_float = var_63_cvector * var_50_float;
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_76_cvector = var_64_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1263(var_75_cvector, var_76_cvector);
	var_84_float = var_75_cvector * (int)25;
	var_85_int = var_74_float + var_84_float;
	var_65_cvector = var_85_int - CVector(0.0, 10.0, 0.0);
	var_66_cvector = var_62_cvector + var_65_cvector;
	IsOverrideActive(var_67_bool);
	var_87_bool = var_67_bool;
	if(var_87_bool != 0) {
		var_48_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_66_cvector, var_64_cvector, (bool)1);
	var_89_float = GetByIndex(var_65_cvector, 0);
	var_90_float = GetByIndex(var_65_cvector, 2);
	Rotate(var_89_float, var_90_float);
	var_91_bool = 0;
	func_1320(var_91_bool);
	if(var_91_bool != 0) {
	} else {
		HasAnimationTrack(var_68_bool, "head");
		var_93_bool = var_68_bool;
		if(var_93_bool == 0) goto Label_1042;
		LookAsyncCamera("head");
	}
Label_1042:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_48_bool = 1;
	return 18;
	
}


func_724(var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_93_float, var_94_float);
	return 0;
}


func_1235(var_143_bool, var_144_string)
{
	var_145_bool = 0; var_146_bool = 0;
	var_147_bool = 0;
	func_1320(var_147_bool);
	if(var_147_bool != 0) {
		lshHasSpeech(var_146_bool, var_144_string);
		var_148_bool = var_146_bool;
		if(var_148_bool != 0) {
			lshPlaySpeech(var_144_string);
			var_143_bool = 1;
			return 2;
		}
	}
	var_143_bool = 0;
	return 2;
}


func_729(var_24_bool)
{
	var_25_object = Obj(); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0;
	FindActor(var_27_object, "player");
	var_30_bool = var_27_object == 0; //@nz
	if(var_30_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	var_31_float = 0; var_32_object = Obj();
	var_27_object = var_32_object;
	func_947(var_31_float, var_32_object);
	var_40_bool = var_31_float > (float)90000.0;
	if(var_40_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	CanSee(var_28_bool, var_27_object);
	var_28_bool = var_24_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1250()
{
	var_19_bool = 0;
	func_1320(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_226(var_0_object, var_266_int, var_267_object)
{
	var_269_object = Obj(); var_270_bool = 0; var_271_int = 0; var_272_bool = 0; var_273_object = Obj(); var_274_bool = 0; var_275_int = 0; var_276_bool = 0;
	var_0_object = var_267_object;
	var_277_bool = 0; var_278_object = Obj(); var_279_float = 0;
	var_267_object = var_278_object;
	func_979(var_277_bool, var_278_object, (float)70.0);
	var_280_bool = var_277_bool == 0; //@nz
	if(var_280_bool != 0) {
		var_266_int = -2;
		return 8;
	}
	CreateDialog(var_273_object);
	var_281_int = 0;
	func_1314(var_281_int);
	@@var_273_object:SetNPCName(var_281_int);
	var_282_int = 0;
	func_1312(var_282_int);
	@@var_273_object:SetNPCDescription(var_282_int);
	var_283_string = "";
	func_1316(var_283_string);
	@@var_273_object:SetPhoto(var_283_string);
	var_284_string = "";
	func_1318(var_284_string);
	@@var_273_object:SetPhoto2(var_284_string);
	var_285_int = 0;
	func_1322(var_285_int);
	@@var_273_object:SetPlayerName(var_285_int);
	IsOverrideActive(var_274_bool);
	var_286_bool = var_274_bool;
	if(var_286_bool != 0) {
		var_266_int = -2;
		return 8;
	}
	DoDialog(var_273_object);
	var_287_bool = 0; var_288_object = Obj();
	func_1257(Obj());
	var_289_object = var_288_object;
	func_1066(var_287_bool, var_288_object);
	var_290_object = Obj(); var_291_object = Obj();
	var_267_object = var_290_object;
	var_273_object = var_291_object;
	TaskCall(3);
	func_307(var_292_object, var_293_object, var_294_string, var_295_bool, var_290_object, var_291_object);
	TaskReturn();
	@@var_273_object:IsDialogEnd(var_276_bool);
	
Label_289:
	var_323_bool = var_276_bool == 0; //@nz
	if(var_323_bool != 0) {
		sync();
		@@var_273_object:IsDialogEnd(var_276_bool);
		goto Label_289;
	}
	var_267_object = Obj();
	func_1048();
	StopDialog(var_273_object);
	@@var_273_object:GetReturnValue((int)-1);
	var_275_int = var_266_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1124(var_120_bool, var_121_object)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = "";
	var_127_string = "c";
	var_128_int = 0;
	
Label_1127:
	if((int)1 != 0) {
		var_134_int = var_128_int + (int)1;
		var_135_int = var_127_string + var_134_int;
		@@var_121_object:HasProperty(var_135_int, var_129_bool);
		var_136_bool = var_129_bool == 0; //@nz
		if(var_136_bool != 0) {
		} else {
			var_128_int = var_128_int + (int)1;
			goto Label_1127;
		}
	}
	var_137_bool = var_128_int == 0; //@nz
	if(var_137_bool != 0) {
		var_120_bool = 0;
		return 10;
	}
	var_130_int = 0;
	var_139_bool = var_128_int > (int)1;
	if(var_139_bool != 0) {
		irand(var_130_int, var_128_int);
	}
	var_141_int = var_130_int + (int)1;
	var_142_int = var_127_string + var_141_int;
	@@var_121_object:GetProperty(var_142_int, var_131_string);
	var_143_bool = 0; var_144_string = "";
	var_131_string = var_144_string;
	func_1235(var_143_bool, var_144_string);
	var_143_bool = var_120_bool;
	return 10;
	
}


func_485(var_0_object, var_325_int, var_326_object)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_int = 0; var_331_bool = 0; var_332_object = Obj(); var_333_bool = 0; var_334_int = 0; var_335_bool = 0;
	var_0_object = var_326_object;
	var_336_bool = 0; var_337_object = Obj(); var_338_float = 0;
	var_326_object = var_337_object;
	func_979(var_336_bool, var_337_object, (float)70.0);
	var_339_bool = var_336_bool == 0; //@nz
	if(var_339_bool != 0) {
		var_325_int = -2;
		return 8;
	}
	CreateDialog(var_332_object);
	var_340_int = 0;
	func_1314(var_340_int);
	@@var_332_object:SetNPCName(var_340_int);
	var_341_int = 0;
	func_1312(var_341_int);
	@@var_332_object:SetNPCDescription(var_341_int);
	var_342_string = "";
	func_1316(var_342_string);
	@@var_332_object:SetPhoto(var_342_string);
	var_343_string = "";
	func_1318(var_343_string);
	@@var_332_object:SetPhoto2(var_343_string);
	var_344_int = 0;
	func_1322(var_344_int);
	@@var_332_object:SetPlayerName(var_344_int);
	IsOverrideActive(var_333_bool);
	var_345_bool = var_333_bool;
	if(var_345_bool != 0) {
		var_325_int = -2;
		return 8;
	}
	DoDialog(var_332_object);
	var_346_bool = 0; var_347_object = Obj();
	func_1257(Obj());
	var_348_object = var_347_object;
	func_1066(var_346_bool, var_347_object);
	var_349_object = Obj(); var_350_object = Obj();
	var_326_object = var_349_object;
	var_332_object = var_350_object;
	TaskCall(5);
	func_566(var_351_object, var_352_object, var_353_string, var_354_bool, var_349_object, var_350_object);
	TaskReturn();
	@@var_332_object:IsDialogEnd(var_335_bool);
	
Label_548:
	var_379_bool = var_335_bool == 0; //@nz
	if(var_379_bool != 0) {
		sync();
		@@var_332_object:IsDialogEnd(var_335_bool);
		goto Label_548;
	}
	var_326_object = Obj();
	func_1048();
	StopDialog(var_332_object);
	@@var_332_object:GetReturnValue((int)-1);
	var_334_int = var_325_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_871()
{
	var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_974(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 12;
	}
	func_1295((int)0);
	var_35_int = var_27_int;
	var_28_int = 0;
	
Label_885:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_28_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_974(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		var_52_bool = var_27_int == 0; //@nz
		if(var_52_bool != 0) {
			Sleep((int)3, var_29_bool);
			var_54_bool = var_29_bool == 0; //@nz
			if(var_54_bool != 0) {
			} else {
		} else {
				irand(var_30_int, var_27_int);
				irand(var_31_int, (int)5);
				var_60_bool = var_31_int != (int)0;
				if(var_60_bool != 0) {
					var_30_int = 0;
				}
				var_62_string = ""; var_63_int = 0;
				var_30_int = var_63_int;
				func_1288(var_62_string, var_63_int);
				PlayAnimation("all", var_62_string);
				WaitForAnimEnd(var_32_bool);
				var_64_bool = var_32_bool == 0; //@nz
				if(var_64_bool == 0) goto Label_926;
				goto Label_937;
		}
		Label_926:
			var_55_bool = 0;
			func_940(var_55_bool);
			var_56_bool = var_55_bool == 0; //@nz
			if(var_56_bool != 0) {
				goto Label_937;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_885;

		}
	}
Label_937:
	ResetAAS();
	return 12;
	
}


func_1257(var_111_object)
{
	var_112_object = Obj(); var_113_object = Obj();
	self(var_113_object);
	var_113_object = var_111_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_751()
{
	var_383_float = 0; var_384_float = 0;
	rand(var_384_float, (int)8, (int)16);
	SetTimer((int)10, var_384_float);
	return 2;
}


func_624(var_2_object, var_356_string)
{
	var_357_bool = 0;
	func_1320(var_357_bool);
	var_358_bool = var_357_bool == 0; //@nz
	if(var_358_bool != 0) {
		return 0;
	}
	var_359_bool = var_356_string == var_2_object;
	if(var_359_bool != 0) {
		return 0;
	}
	var_360_string = ""; var_361_bool = 0;
	var_356_string = var_360_string;
	var_363_bool = var_356_string == "";
	if(var_363_bool != 0) {
		var_361_bool = 0;
	} else {
		var_361_bool = 1;
	}
	func_1220(var_360_string, var_361_bool);
	var_2_object = var_356_string;
	return 0;
	
}


func_1263(var_75_cvector, var_76_cvector)
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


func_370(var_2_object, var_297_string)
{
	var_298_bool = 0;
	func_1320(var_298_bool);
	var_299_bool = var_298_bool == 0; //@nz
	if(var_299_bool != 0) {
		return 0;
	}
	var_300_bool = var_297_string == var_2_object;
	if(var_300_bool != 0) {
		return 0;
	}
	var_301_string = ""; var_302_bool = 0;
	var_297_string = var_301_string;
	var_304_bool = var_297_string == "";
	if(var_304_bool != 0) {
		var_302_bool = 0;
	} else {
		var_302_bool = 1;
	}
	func_1220(var_301_string, var_302_bool);
	var_2_object = var_297_string;
	return 0;
	
}


func_760()
{
	KillTimer((int)10);
	return 0;
}


func_1273(var_164_int)
{
	var_165_float = 0; var_166_float = 0;
	GetGameTime(var_166_float);
	var_168_int = 0;
	var_168_int = var_166_float / (int)24;
	var_164_int = (int)1 + var_168_int;
	return 2;
}


