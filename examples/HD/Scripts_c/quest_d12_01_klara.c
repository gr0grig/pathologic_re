// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Saveyouall|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:idle|W:Smile|W:Fear|W:Sly|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ood12KlaraSobor1|W:ood12KlaraSobor2|W:game_final|W:branch|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x241
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xca vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x245 vars=object
// @EVENT_26: op=0x251 vars=string
// @EVENT_6: op=0x26d vars=
// @PE: 0x51,0xb4,0xca,0x241,0x245,0x3b3,0x3b9,0x3bf,0x3cb,0x3d7

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_910();
		var_11_bool = var_7_bool == (int)42263;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_947();
		}
		var_17_bool = var_7_bool == (int)42277;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_953();
		}
		var_23_bool = var_6_int == (int)42262;
		if(var_23_bool != 0) {
			var_24_bool = 0; var_25_object = Obj();
			var_25_object = var_1_object;
			func_959(var_25_object);
			var_32_bool = var_24_bool == 0; //@nz
			if(var_32_bool != 0) {
				var_33_string = "";
				func_180(var_7_bool, "Saveyouall");
				@@@var_0_object:SetMessage((int)540282);
				@@@var_0_object:ClearReplies();
				var_51_bool = 0; var_52_object = Obj();
				var_52_object = var_1_object;
				func_971(var_52_object);
				if(var_51_bool != 0) {
					@@@var_0_object:AddReply((int)540283, (int)42264, (int)42263);
				}
				var_60_bool = 0; var_61_object = Obj();
				var_61_object = var_1_object;
				func_983(var_61_object);
				if(var_60_bool != 0) {
					@@@var_0_object:AddReply((int)540296, (int)42278, (int)42277);
				}
				@@@var_0_object:AddReply((int)540305, (int)-1, (int)42286);
				return 0;
			}
			var_72_string = "";
			func_180(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541639);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541640, (int)-1, (int)43812);
			@@@var_0_object:AddReply((int)541641, (int)-1, (int)43813);
			return 0;
		}
		var_81_bool = var_6_int == (int)42278;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_180(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)540297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540298, (int)42280, (int)42279);
			@@@var_0_object:AddReply((int)540479, (int)42283, (int)42474);
			return 0;
		}
		var_91_bool = var_6_int == (int)42280;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_180(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540300, (int)42476, (int)42281);
			@@@var_0_object:AddReply((int)540301, (int)42283, (int)42282);
			return 0;
		}
		var_101_bool = var_6_int == (int)42283;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_180(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)540302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540303, (int)42476, (int)42284);
			@@@var_0_object:AddReply((int)540304, (int)42478, (int)42285);
			return 0;
		}
		var_111_bool = var_6_int == (int)42478;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_180(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540481);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540482, (int)-1, (int)42479);
			@@@var_0_object:AddReply((int)540483, (int)42476, (int)42480);
			return 0;
		}
		var_121_bool = var_6_int == (int)42476;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_180(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)540480);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540484, (int)-1, (int)42482);
			@@@var_0_object:AddReply((int)540485, (int)42484, (int)42483);
			return 0;
		}
		var_131_bool = var_6_int == (int)42484;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_180(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)540486);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540487, (int)-1, (int)42485);
			@@@var_0_object:AddReply((int)540488, (int)-1, (int)42486);
			return 0;
		}
		var_141_bool = var_6_int == (int)42264;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_180(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)540284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540285, (int)42266, (int)42265);
			@@@var_0_object:AddReply((int)540489, (int)42266, (int)42487);
			return 0;
		}
		var_151_bool = var_6_int == (int)42266;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_180(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)540286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540287, (int)42268, (int)42267);
			@@@var_0_object:AddReply((int)540295, (int)42270, (int)42275);
			return 0;
		}
		var_161_bool = var_6_int == (int)42268;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_180(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540289, (int)42270, (int)42269);
			@@@var_0_object:AddReply((int)540490, (int)42490, (int)42489);
			return 0;
		}
		var_171_bool = var_6_int == (int)42490;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_180(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)540491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540492, (int)-1, (int)42491);
			@@@var_0_object:AddReply((int)540493, (int)-1, (int)42492);
			return 0;
		}
		var_181_bool = var_6_int == (int)42270;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_180(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540290);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540291, (int)42272, (int)42271);
			@@@var_0_object:AddReply((int)540494, (int)-1, (int)42493);
			return 0;
		}
		var_191_bool = var_6_int == (int)42272;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_180(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)540292);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540293, (int)-1, (int)42273);
			@@@var_0_object:AddReply((int)540294, (int)-1, (int)42274);
			return 0;
		}
		var_3_string = true;
		var_200_bool = 0;
		func_1020(var_200_bool);
		if(var_200_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcb";
	
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
			func_637(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_917(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_620;
		var_0_object = false;
	}
Label_620:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_637(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_917(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_589();
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_639(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1014(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1012(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1016(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1018(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_995(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_917(Obj());
	var_81_object = var_80_object;
	func_726(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_255_bool = var_17_bool == 0; //@nz
	if(var_255_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_708();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_708()
{
	var_257_bool = 0; var_258_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_260_bool = 0;
	func_1020(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		HasAnimationTrack(var_258_bool, "head");
		var_262_bool = var_258_bool;
		if(var_262_bool == 0) goto Label_725;
		UnlookAsync("head");
	}
Label_725:
	return 2;
	
}


func_971(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_933(var_210_int, "ood12KlaraSobor1");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_589()
{
	
Label_589:
	Hold();
	goto Label_589;
}
EMIT "Return(); Pop(0)";


func_910()
{
	var_9_bool = 0;
	func_1020(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_784(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_787:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_787;
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
	func_895(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_959(var_182_object);
		var_189_bool = var_181_bool == 0; //@nz
		if(var_189_bool != 0) {
			var_190_string = "";
			func_180(var_175_object, "Saveyouall");
			@@@var_0_object:SetMessage((int)540282);
			@@@var_0_object:ClearReplies();
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_971(var_209_object);
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)540283, (int)42264, (int)42263);
			}
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_983(var_218_object);
			if(var_217_bool != 0) {
				@@@var_0_object:AddReply((int)540296, (int)42278, (int)42277);
			}
			@@@var_0_object:AddReply((int)540305, (int)-1, (int)42286);
		} else {
				var_247_string = "";
				func_180(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)541639);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541640, (int)-1, (int)43812);
				@@@var_0_object:AddReply((int)541641, (int)-1, (int)43813);
				goto Label_150;
		}
	}
Label_150:
	var_229_bool = 0;
	func_1020(var_229_bool);
	if(var_229_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_230_string = var_3_string;
		if(var_230_string != 0) {
		} else {
			var_231_string = "";
			var_231_string = var_2_object;
			func_864(var_231_string);
			goto Label_154;
	}
		PlayAnimation("all", "idle");

	Label_169:
		WaitForAnimEnd();
		var_244_string = var_3_string;
		if(var_244_string != 0) {
			goto Label_179;
		}
		PlayAnimation("all", "idle");
		goto Label_169;

	}
	goto Label_179;
	
Label_179:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_917(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_726(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_784(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_821(var_121_bool, var_122_object);
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
		func_821(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_784(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_782;
	
Label_782:
	var_79_bool = 1;
	return 4;
	
}


func_983(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_933(var_219_int, "ood12KlaraSobor2");
	var_222_bool = var_219_int == (int)0;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_895(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1020(var_117_bool);
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


func_959(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_933(var_183_int, "game_final");
	var_188_bool = var_183_int != (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_923(var_45_cvector, var_46_cvector)
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


func_864(var_231_string)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0;
	lshHasAnimation(var_235_bool, var_231_string);
	var_238_bool = var_235_bool;
	if(var_238_bool != 0) {
		lshGetAnimTimes(var_231_string, var_236_float, var_237_float);
		lshPlayAnimation(var_236_float, var_237_float, (bool)0);
	} else {
		var_241_int = "Can't find lsh animation : " + var_231_string;
		Trace(var_241_int);
	}
	return 6;
	
}


func_995(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3f2";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_933(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_938(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_880(var_194_string, var_195_bool)
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


func_947()
{
	SetVariable("ood12KlaraSobor1", (int)1);
	return 0;
}


func_180(var_2_object, var_190_string)
{
	var_191_bool = 0;
	func_1020(var_191_bool);
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
	func_880(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	return 0;
	
}


func_821(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_938(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_830:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_830;
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
	func_895(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1012(var_67_int)
{
	var_67_int = 515540;
	return 0;
}


func_1014(var_66_int)
{
	var_66_int = 502865;
	return 0;
}


func_1016(var_68_string)
{
	var_68_string = "ui/NPC_Klara.png";
	return 0;
}


func_953()
{
	SetVariable("ood12KlaraSobor2", (int)1);
	return 0;
}


func_1018(var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1020(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_637(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_639(var_18_bool, var_19_object, var_20_float)
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
	func_923(var_45_cvector, var_46_cvector);
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
	func_1020(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_702;
		LookAsyncCamera("head");
	}
Label_702:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


