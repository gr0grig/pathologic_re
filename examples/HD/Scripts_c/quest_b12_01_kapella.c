// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Strength|W:Sympathy|W:Fear|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:oob12KapellaSobor1|W:game_final|W:branch|W:ui/NPC_Kapella.png|W:ui/NPC_Kapella_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1f8
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbb vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1fc vars=object
// @EVENT_26: op=0x204 vars=string
// @EVENT_6: op=0x220 vars=
// @PE: 0x51,0xa5,0xbb,0x1fc,0x366,0x36c,0x378

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_833();
		var_11_bool = var_7_bool == (int)24335;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_870();
		}
		var_17_bool = var_6_int == (int)23347;
		if(var_17_bool != 0) {
			var_18_bool = 0; var_19_object = Obj();
			var_19_object = var_1_object;
			func_876(var_19_object);
			var_26_bool = var_18_bool == 0; //@nz
			if(var_26_bool != 0) {
				var_27_string = "";
				func_165(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)522180);
				@@@var_0_object:ClearReplies();
				var_45_bool = 0; var_46_object = Obj();
				var_46_object = var_1_object;
				func_888(var_46_object);
				if(var_45_bool != 0) {
					@@@var_0_object:AddReply((int)523135, (int)24336, (int)24335);
				}
				@@@var_0_object:AddReply((int)522181, (int)-1, (int)23348);
				return 0;
			}
			var_57_string = "";
			func_165(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523166, (int)-1, (int)24368);
			return 0;
		}
		var_63_bool = var_6_int == (int)24336;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_165(var_7_bool, "Strength");
			@@@var_0_object:SetMessage((int)523136);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523137, (int)24338, (int)24337);
			@@@var_0_object:AddReply((int)540123, (int)42093, (int)42092);
			return 0;
		}
		var_73_bool = var_6_int == (int)42093;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_165(var_7_bool, "Strength");
			@@@var_0_object:SetMessage((int)540124);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540125, (int)42095, (int)42094);
			@@@var_0_object:AddReply((int)540128, (int)42095, (int)42097);
			return 0;
		}
		var_83_bool = var_6_int == (int)42095;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_165(var_7_bool, "Strength");
			@@@var_0_object:SetMessage((int)540126);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540127, (int)24338, (int)42096);
			return 0;
		}
		var_90_bool = var_6_int == (int)24338;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_165(var_7_bool, "Sympathy");
			@@@var_0_object:SetMessage((int)523138);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523139, (int)24340, (int)24339);
			@@@var_0_object:AddReply((int)523149, (int)24350, (int)24349);
			return 0;
		}
		var_100_bool = var_6_int == (int)24350;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_165(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523150);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523151, (int)-1, (int)24351);
			@@@var_0_object:AddReply((int)523152, (int)24340, (int)24352);
			return 0;
		}
		var_110_bool = var_6_int == (int)24340;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_165(var_7_bool, "Sympathy");
			@@@var_0_object:SetMessage((int)523140);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523141, (int)24342, (int)24341);
			@@@var_0_object:AddReply((int)523153, (int)24355, (int)24354);
			return 0;
		}
		var_120_bool = var_6_int == (int)24355;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_165(var_7_bool, "Sympathy");
			@@@var_0_object:SetMessage((int)523154);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523155, (int)24357, (int)24356);
			return 0;
		}
		var_127_bool = var_6_int == (int)24357;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_165(var_7_bool, "Strength");
			@@@var_0_object:SetMessage((int)523156);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523157, (int)24342, (int)24358);
			return 0;
		}
		var_134_bool = var_6_int == (int)24342;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_165(var_7_bool, "Sympathy");
			@@@var_0_object:SetMessage((int)523142);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523143, (int)24344, (int)24343);
			return 0;
		}
		var_141_bool = var_6_int == (int)24344;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_165(var_7_bool, "Sympathy");
			@@@var_0_object:SetMessage((int)523144);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523145, (int)24346, (int)24345);
			return 0;
		}
		var_148_bool = var_6_int == (int)24346;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_165(var_7_bool, "Sympathy");
			@@@var_0_object:SetMessage((int)523146);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523147, (int)24348, (int)24347);
			return 0;
		}
		var_155_bool = var_6_int == (int)24348;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_165(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)523148);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523158, (int)-1, (int)24360);
			return 0;
		}
		var_3_string = true;
		var_161_bool = 0;
		func_925(var_161_bool);
		if(var_161_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbc";
	
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
			func_560(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_840(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_543;
		var_0_object = false;
	}
Label_543:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_560(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_840(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_504:
	Hold();
	goto Label_504;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_562(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_919(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_917(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_921(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_923(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_900(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_840(Obj());
	var_81_object = var_80_object;
	func_649(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_243_bool = var_17_bool == 0; //@nz
	if(var_243_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_631();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_833()
{
	var_9_bool = 0;
	func_925(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_707(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_710:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_710;
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
	func_818(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_900(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x393";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_840(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_649(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_707(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_744(var_121_bool, var_122_object);
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
		func_744(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_707(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_705;
	
Label_705:
	var_79_bool = 1;
	return 4;
	
}


func_846(var_45_cvector, var_46_cvector)
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_876(var_182_object);
		var_189_bool = var_181_bool == 0; //@nz
		if(var_189_bool != 0) {
			var_190_string = "";
			func_165(var_175_object, "Neutral");
			@@@var_0_object:SetMessage((int)522180);
			@@@var_0_object:ClearReplies();
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_888(var_209_object);
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)523135, (int)24336, (int)24335);
			}
			@@@var_0_object:AddReply((int)522181, (int)-1, (int)23348);
		} else {
				var_238_string = "";
				func_165(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)523165);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523166, (int)-1, (int)24368);
				goto Label_135;
		}
	}
Label_135:
	var_220_bool = 0;
	func_925(var_220_bool);
	if(var_220_bool != 0) {

	Label_139:
		lshWaitForAnimEnd();
		var_221_string = var_3_string;
		if(var_221_string != 0) {
		} else {
			var_222_string = "";
			var_222_string = var_2_object;
			func_787(var_222_string);
			goto Label_139;
	}
		PlayAnimation("all", "idle");

	Label_154:
		WaitForAnimEnd();
		var_235_string = var_3_string;
		if(var_235_string != 0) {
			goto Label_164;
		}
		PlayAnimation("all", "idle");
		goto Label_154;

	}
	goto Label_164;
	
Label_164:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_787(var_222_string)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0;
	lshHasAnimation(var_226_bool, var_222_string);
	var_229_bool = var_226_bool;
	if(var_229_bool != 0) {
		lshGetAnimTimes(var_222_string, var_227_float, var_228_float);
		lshPlayAnimation(var_227_float, var_228_float, (bool)0);
	} else {
		var_232_int = "Can't find lsh animation : " + var_222_string;
		Trace(var_232_int);
	}
	return 6;
	
}


func_917(var_67_int)
{
	var_67_int = 515538;
	return 0;
}


func_919(var_66_int)
{
	var_66_int = 502863;
	return 0;
}


func_856(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_921(var_68_string)
{
	var_68_string = "ui/NPC_Kapella.png";
	return 0;
}


func_923(var_69_string)
{
	var_69_string = "ui/NPC_Kapella_b.png";
	return 0;
}


func_925(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_861(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_803(var_194_string, var_195_bool)
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


func_165(var_2_object, var_190_string)
{
	var_191_bool = 0;
	func_925(var_191_bool);
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
	func_803(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	return 0;
	
}


func_870()
{
	SetVariable("oob12KapellaSobor1", (int)1);
	return 0;
}


func_744(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_861(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_753:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_753;
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
	func_818(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_876(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_856(var_183_int, "game_final");
	var_188_bool = var_183_int != (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_560(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_562(var_18_bool, var_19_object, var_20_float)
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
	func_846(var_45_cvector, var_46_cvector);
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
	func_925(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_625;
		LookAsyncCamera("head");
	}
Label_625:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_818(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_925(var_117_bool);
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


func_631()
{
	var_245_bool = 0; var_246_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_248_bool = 0;
	func_925(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		HasAnimationTrack(var_246_bool, "head");
		var_250_bool = var_246_bool;
		if(var_250_bool == 0) goto Label_648;
		UnlookAsync("head");
	}
Label_648:
	return 2;
	
}


func_888(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_856(var_210_int, "oob12KapellaSobor1");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


