// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Sorrow|W:Agression|W:Doubt|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ood12BurahSobor1|W:ood12BurahSobor2|W:ood12BurahSobor3|W:game_final|W:branch|W:ui/NPC_Burah.png|W:ui/NPC_Burah_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x232
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd4 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x236 vars=object
// @EVENT_26: op=0x242 vars=string
// @EVENT_6: op=0x25e vars=
// @PE: 0x51,0xbe,0xd4,0x232,0x236,0x3a4,0x3aa,0x3b0,0x3b6,0x3c2,0x3ce,0x3da

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_895();
		var_11_bool = var_7_bool == (int)42288;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_932();
		}
		var_17_bool = var_7_bool == (int)42302;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_938();
		}
		var_23_bool = var_7_bool == (int)42305;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_944();
		}
		var_29_bool = var_6_int == (int)42287;
		if(var_29_bool != 0) {
			var_30_bool = 0; var_31_object = Obj();
			var_31_object = var_1_object;
			func_950(var_31_object);
			var_38_bool = var_30_bool == 0; //@nz
			if(var_38_bool != 0) {
				var_39_string = "";
				func_190(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)540306);
				@@@var_0_object:ClearReplies();
				var_57_bool = 0; var_58_object = Obj();
				var_58_object = var_1_object;
				func_962(var_58_object);
				if(var_57_bool != 0) {
					@@@var_0_object:AddReply((int)540307, (int)42289, (int)42288);
				}
				var_66_bool = 0; var_67_object = Obj();
				var_67_object = var_1_object;
				func_974(var_67_object);
				if(var_66_bool != 0) {
					@@@var_0_object:AddReply((int)540320, (int)42303, (int)42302);
				}
				var_75_bool = 0; var_76_object = Obj();
				var_76_object = var_1_object;
				func_986(var_76_object);
				if(var_75_bool != 0) {
					@@@var_0_object:AddReply((int)540323, (int)42306, (int)42305);
				}
				@@@var_0_object:AddReply((int)540333, (int)-1, (int)42315);
				return 0;
			}
			var_87_string = "";
			func_190(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541637, (int)-1, (int)43809);
			@@@var_0_object:AddReply((int)541638, (int)-1, (int)43810);
			return 0;
		}
		var_96_bool = var_6_int == (int)42306;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_190(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540324);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540325, (int)42308, (int)42307);
			@@@var_0_object:AddReply((int)540384, (int)-1, (int)42370);
			return 0;
		}
		var_106_bool = var_6_int == (int)42308;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_190(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540326);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540327, (int)42310, (int)42309);
			return 0;
		}
		var_113_bool = var_6_int == (int)42310;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_190(var_7_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)540328);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540329, (int)-1, (int)42311);
			@@@var_0_object:AddReply((int)540385, (int)-1, (int)42371);
			return 0;
		}
		var_123_bool = var_6_int == (int)42303;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_190(var_7_bool, "Agression");
			@@@var_0_object:SetMessage((int)540321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540322, (int)-1, (int)42304);
			@@@var_0_object:AddReply((int)540372, (int)-1, (int)42355);
			return 0;
		}
		var_133_bool = var_6_int == (int)42289;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_190(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)540308);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540309, (int)42356, (int)42290);
			@@@var_0_object:AddReply((int)540319, (int)42351, (int)42300);
			return 0;
		}
		var_143_bool = var_6_int == (int)42351;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_190(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)540368);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540369, (int)42354, (int)42352);
			@@@var_0_object:AddReply((int)540370, (int)42356, (int)42353);
			return 0;
		}
		var_153_bool = var_6_int == (int)42354;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_190(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)540371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540375, (int)42360, (int)42359);
			return 0;
		}
		var_160_bool = var_6_int == (int)42356;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_190(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)540373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540374, (int)42360, (int)42358);
			return 0;
		}
		var_167_bool = var_6_int == (int)42360;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_190(var_7_bool, "Agression");
			@@@var_0_object:SetMessage((int)540376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540377, (int)42363, (int)42362);
			@@@var_0_object:AddReply((int)540379, (int)42365, (int)42364);
			return 0;
		}
		var_177_bool = var_6_int == (int)42365;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_190(var_7_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)540380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540381, (int)42363, (int)42366);
			return 0;
		}
		var_184_bool = var_6_int == (int)42363;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_190(var_7_bool, "Agression");
			@@@var_0_object:SetMessage((int)540378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540382, (int)-1, (int)42368);
			@@@var_0_object:AddReply((int)540383, (int)-1, (int)42369);
			return 0;
		}
		var_3_string = true;
		var_193_bool = 0;
		func_1023(var_193_bool);
		if(var_193_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd5";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_622(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_902(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_605;
		var_0_object = false;
	}
Label_605:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_622(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_902(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_574();
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_624(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1017(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1015(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1019(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1021(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_998(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_902(Obj());
	var_81_object = var_80_object;
	func_711(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_264_bool = var_17_bool == 0; //@nz
	if(var_264_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_693();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_769(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_772:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_772;
		}
	}
	var_107_bool = var_98_int == 0; //@nz
	if(var_107_bool != 0) {
		var_90_bool = 0;
		return 10;
	}
	var_100_int = 0;
	var_109_bool = var_98_int > (int)1;
	if(var_109_bool != 0) {
		irand(var_100_int, var_98_int);
	}
	var_111_int = var_100_int + (int)1;
	var_112_int = var_97_string + var_111_int;
	@@var_91_object:GetProperty(var_112_int, var_101_string);
	var_113_bool = 0; var_114_string = "";
	var_101_string = var_114_string;
	func_880(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_962(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_918(var_210_int, "ood12BurahSobor1");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_902(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_711(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_769(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_806(var_121_bool, var_122_object);
			var_156_bool = var_121_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		irand(var_87_int, (int)2);
		var_158_int = var_87_int;
		if(var_158_int != 0) {
			var_161_int = var_86_int + (int)1;
			var_163_int = var_161_int % (int)3;
			SetVariable("voice_common", var_163_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_166_bool = 0; var_167_object = Obj();
		var_80_object = var_167_object;
		func_806(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_769(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_767;
	
Label_767:
	var_79_bool = 1;
	return 4;
	
}


func_908(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_974(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_918(var_219_int, "ood12BurahSobor2");
	var_222_bool = var_219_int == (int)0;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_950(var_182_object);
		var_189_bool = var_181_bool == 0; //@nz
		if(var_189_bool != 0) {
			var_190_string = "";
			func_190(var_175_object, "Neutral");
			@@@var_0_object:SetMessage((int)540306);
			@@@var_0_object:ClearReplies();
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_962(var_209_object);
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)540307, (int)42289, (int)42288);
			}
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_974(var_218_object);
			if(var_217_bool != 0) {
				@@@var_0_object:AddReply((int)540320, (int)42303, (int)42302);
			}
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_986(var_227_object);
			if(var_226_bool != 0) {
				@@@var_0_object:AddReply((int)540323, (int)42306, (int)42305);
			}
			@@@var_0_object:AddReply((int)540333, (int)-1, (int)42315);
		} else {
				var_256_string = "";
				func_190(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)541636);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541637, (int)-1, (int)43809);
				@@@var_0_object:AddReply((int)541638, (int)-1, (int)43810);
				goto Label_160;
		}
	}
Label_160:
	var_238_bool = 0;
	func_1023(var_238_bool);
	if(var_238_bool != 0) {

	Label_164:
		lshWaitForAnimEnd();
		var_239_string = var_3_string;
		if(var_239_string != 0) {
		} else {
			var_240_string = "";
			var_240_string = var_2_object;
			func_849(var_240_string);
			goto Label_164;
	}
		PlayAnimation("all", "idle");

	Label_179:
		WaitForAnimEnd();
		var_253_string = var_3_string;
		if(var_253_string != 0) {
			goto Label_189;
		}
		PlayAnimation("all", "idle");
		goto Label_179;

	}
	goto Label_189;
	
Label_189:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_849(var_240_string)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0;
	lshHasAnimation(var_244_bool, var_240_string);
	var_247_bool = var_244_bool;
	if(var_247_bool != 0) {
		lshGetAnimTimes(var_240_string, var_245_float, var_246_float);
		lshPlayAnimation(var_245_float, var_246_float, (bool)0);
	} else {
		var_250_int = "Can't find lsh animation : " + var_240_string;
		Trace(var_250_int);
	}
	return 6;
	
}


func_918(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_986(var_226_bool)
{
	var_228_int = 0; var_229_string = "";
	func_918(var_228_int, "ood12BurahSobor3");
	var_231_bool = var_228_int == (int)0;
	if(var_231_bool != 0) {
		var_226_bool = 1;
		return 0;
	}
	var_226_bool = 0;
	return 0;
}


func_923(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1023(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_865(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0;
	lshHasAnimation(var_201_bool, var_194_string);
	var_204_bool = var_201_bool;
	if(var_204_bool != 0) {
		lshGetAnimTimes(var_194_string, var_202_float, var_203_float);
		lshPlayAnimation(var_202_float, var_203_float, var_195_bool);
	} else {
		var_206_int = "Can't find lsh animation : " + var_194_string;
		Trace(var_206_int);
	}
	return 6;
	
}


func_932()
{
	SetVariable("ood12BurahSobor1", (int)1);
	return 0;
}


func_806(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_923(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_815:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_815;
		}
	}
	var_147_bool = var_129_int == 0; //@nz
	if(var_147_bool != 0) {
		var_121_bool = 0;
		return 10;
	}
	var_131_int = 0;
	var_149_bool = var_129_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_131_int, var_129_int);
	}
	var_151_int = var_131_int + (int)1;
	var_152_int = var_128_string + var_151_int;
	@@var_122_object:GetProperty(var_152_int, var_132_string);
	var_153_bool = 0; var_154_string = "";
	var_132_string = var_154_string;
	func_880(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_998(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3f5";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_938()
{
	SetVariable("ood12BurahSobor2", (int)1);
	return 0;
}


func_622(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_944()
{
	SetVariable("ood12BurahSobor3", (int)1);
	return 0;
}


func_624(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_908(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_1023(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_687;
		LookAsyncCamera("head");
	}
Label_687:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_880(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1023(var_117_bool);
	if(var_117_bool != 0) {
		lshHasSpeech(var_116_bool, var_114_string);
		var_118_bool = var_116_bool;
		if(var_118_bool != 0) {
			lshPlaySpeech(var_114_string);
			var_113_bool = 1;
			return 2;
		}
	}
	var_113_bool = 0;
	return 2;
}


func_693()
{
	var_266_bool = 0; var_267_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_269_bool = 0;
	func_1023(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		HasAnimationTrack(var_267_bool, "head");
		var_271_bool = var_267_bool;
		if(var_271_bool == 0) goto Label_710;
		UnlookAsync("head");
	}
Label_710:
	return 2;
	
}


func_950(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_918(var_183_int, "game_final");
	var_188_bool = var_183_int != (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_1015(var_67_int)
{
	var_67_int = 515592;
	return 0;
}


func_1017(var_66_int)
{
	var_66_int = 511961;
	return 0;
}


func_1019(var_68_string)
{
	var_68_string = "ui/NPC_Burah.png";
	return 0;
}


func_190(var_2_object, var_190_string)
{
	var_191_bool = 0;
	func_1023(var_191_bool);
	var_192_bool = var_191_bool == 0; //@nz
	if(var_192_bool != 0) {
		return 0;
	}
	var_193_bool = var_190_string == var_2_object;
	if(var_193_bool != 0) {
		return 0;
	}
	var_194_string = ""; var_195_bool = 0;
	var_190_string = var_194_string;
	var_197_bool = var_190_string == "";
	if(var_197_bool != 0) {
		var_195_bool = 0;
	} else {
		var_195_bool = 1;
	}
	func_865(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	return 0;
	
}


func_1021(var_69_string)
{
	var_69_string = "ui/NPC_Burah_b.png";
	return 0;
}


func_574()
{
	
Label_574:
	Hold();
	goto Label_574;
}
EMIT "Return(); Pop(0)";


func_895()
{
	var_9_bool = 0;
	func_1023(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


