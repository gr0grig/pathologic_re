// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,FindActor/2,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Doubt|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Untrust|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:game_final|W:isobor@door1|W:k12q01BurahInSobor|W:k12q01DankoInSobor|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Block.png|W:ui/NPC_Block_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x271
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd9 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x275 vars=object
// @EVENT_26: op=0x281 vars=string
// @EVENT_6: op=0x29d vars=
// @PE: 0x51,0xc3,0xd9,0x271,0x275,0x3f4,0x3fa,0x400,0x406,0x40d,0x412,0x417,0x41c,0x422,0x427,0x433,0x43f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_958();
		var_11_bool = var_7_bool == (int)41218;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1024();
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1030();
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_object;
			func_1042();
		}
		var_54_bool = var_7_bool == (int)41204;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_1018();
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_1030();
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_1037();
		}
		var_72_bool = var_7_bool == (int)41213;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_1012();
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_1030();
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_1047();
		}
		var_90_bool = var_7_bool == (int)42255;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_1052();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_1030();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_1058();
		}
		var_108_bool = var_6_int == (int)41196;
		if(var_108_bool != 0) {
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_1063(var_110_object);
			var_117_bool = var_109_bool == 0; //@nz
			if(var_117_bool != 0) {
				var_118_string = "";
				func_195(var_7_bool, "Doubt");
				@@@var_0_object:SetMessage((int)539253);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539254, (int)41198, (int)41197);
				@@@var_0_object:AddReply((int)539271, (int)41215, (int)41214);
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_1087(var_143_object);
				if(var_142_bool != 0) {
					@@@var_0_object:AddReply((int)539257, (int)41201, (int)41200);
				}
				var_151_bool = 0; var_152_object = Obj();
				var_152_object = var_1_object;
				func_1075(var_152_object);
				if(var_151_bool != 0) {
					@@@var_0_object:AddReply((int)539262, (int)41206, (int)41205);
				}
				@@@var_0_object:AddReply((int)540270, (int)42254, (int)42253);
				return 0;
			}
			var_163_string = "";
			func_195(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539276);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539277, (int)-1, (int)41220);
			@@@var_0_object:AddReply((int)542911, (int)-1, (int)45342);
			@@@var_0_object:AddReply((int)542912, (int)-1, (int)45343);
			return 0;
		}
		var_175_bool = var_6_int == (int)42254;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_195(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540271);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542922, (int)45358, (int)45356);
			@@@var_0_object:AddReply((int)542923, (int)45358, (int)45357);
			@@@var_0_object:AddReply((int)542925, (int)45358, (int)45359);
			return 0;
		}
		var_188_bool = var_6_int == (int)45358;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_195(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)542924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540272, (int)-1, (int)42255);
			return 0;
		}
		var_195_bool = var_6_int == (int)41206;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_195(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539263);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542926, (int)45363, (int)45362);
			return 0;
		}
		var_202_bool = var_6_int == (int)45363;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_195(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)542927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539270, (int)-1, (int)41213);
			return 0;
		}
		var_209_bool = var_6_int == (int)41201;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_195(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)539258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539259, (int)41203, (int)41202);
			return 0;
		}
		var_216_bool = var_6_int == (int)41203;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_195(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)539260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539261, (int)-1, (int)41204);
			return 0;
		}
		var_223_bool = var_6_int == (int)41215;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_195(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539273, (int)41217, (int)41216);
			@@@var_0_object:AddReply((int)542914, (int)45346, (int)45345);
			return 0;
		}
		var_233_bool = var_6_int == (int)45346;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_195(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542916, (int)41217, (int)45347);
			return 0;
		}
		var_240_bool = var_6_int == (int)41217;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_195(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539274);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539275, (int)-1, (int)41218);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=134";
		EMIT "Call2 0xc3";
		EMIT "Pop(1)";
		EMIT "Push((int) 542917)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=112";
		EMIT "Pop(0)";
		EMIT "Push((int) 542918)";
		EMIT "Push((int) 41217)";
		EMIT "Push((int) 45349)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=125";
		EMIT "Pop(3)";
		EMIT "Push((int) 542919)";
		EMIT "Push((int) 45351)";
		EMIT "Push((int) 45350)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=125";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_247_bool = var_6_int == (int)45351;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_195(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542920);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542921, (int)41217, (int)45352);
			return 0;
		}
		var_254_bool = var_6_int == (int)41198;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_195(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)539255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539256, (int)-1, (int)41199);
			@@@var_0_object:AddReply((int)542913, (int)-1, (int)45344);
			return 0;
		}
		var_3_string = true;
		var_263_bool = 0;
		func_1217(var_263_bool);
		if(var_263_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xda";
	
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
			func_685(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_965(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_668;
		var_0_object = false;
	}
Label_668:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_685(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_965(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_637();
	return 0;
}


func_1024()
{
	SetVariable("game_final", (int)3);
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_687(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1211(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1209(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1213(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1215(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1192(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_965(Obj());
	var_81_object = var_80_object;
	func_774(var_79_bool, var_80_object);
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
	func_756();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_774(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_832(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_869(var_121_bool, var_122_object);
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
		func_869(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_832(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_830;
	
Label_830:
	var_79_bool = 1;
	return 4;
	
}


func_1030()
{
	var_18_string = ""; var_19_bool = 0;
	func_986("isobor@door1", (bool)0);
	return 0;
}


func_1164(var_35_bool, var_36_object, var_37_int)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0; var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0;
	func_1151(Obj());
	var_44_object = var_41_object;
	@@var_41_object:Find(var_37_int, var_42_object);
	var_49_bool = var_42_object == 0; //@nz
	if(var_49_bool != 0) {
		var_51_int = "Can't find diary parent with id: " + var_37_int;
		Trace(var_51_int);
		var_35_bool = 0;
		return 6;
	}
	@@var_42_object:AddChild(var_36_object);
	SendWorldWndMessage((int)7);
	@@var_36_object:GetCategory(var_43_int);
	SetDiarySection(var_43_int);
	var_35_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1037()
{
	func_1138();
	return 0;
}


func_912(var_237_string)
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


func_1042()
{
	func_1112();
	return 0;
}


func_1047()
{
	func_1125();
	return 0;
}


func_1052()
{
	SetVariable("game_final", (int)4);
	return 0;
}


func_928(var_194_string, var_195_bool)
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


func_1058()
{
	func_1099();
	return 0;
}


func_1063(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_981(var_183_int, "game_final");
	var_188_bool = var_183_int != (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_1192(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x4b7";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_685(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_687(var_18_bool, var_19_object, var_20_float)
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
	func_971(var_45_cvector, var_46_cvector);
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
	func_1217(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_750;
		LookAsyncCamera("head");
	}
Label_750:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_943(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1217(var_117_bool);
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


func_1075(var_223_bool)
{
	var_225_int = 0; var_226_string = "";
	func_981(var_225_int, "k12q01BurahInSobor");
	var_228_bool = var_225_int != (int)0;
	if(var_228_bool != 0) {
		var_223_bool = 1;
		return 0;
	}
	var_223_bool = 0;
	return 0;
}


func_1209(var_67_int)
{
	var_67_int = 515532;
	return 0;
}


func_1211(var_66_int)
{
	var_66_int = 514840;
	return 0;
}


func_1213(var_68_string)
{
	var_68_string = "ui/NPC_Block.png";
	return 0;
}


func_958()
{
	var_9_bool = 0;
	func_1217(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1087(var_214_bool)
{
	var_216_int = 0; var_217_string = "";
	func_981(var_216_int, "k12q01DankoInSobor");
	var_219_bool = var_216_int != (int)0;
	if(var_219_bool != 0) {
		var_214_bool = 1;
		return 0;
	}
	var_214_bool = 0;
	return 0;
}


func_1215(var_69_string)
{
	var_69_string = "ui/NPC_Block_b.png";
	return 0;
}


func_1217(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_832(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_835:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_835;
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
	func_943(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_195(var_2_object, var_190_string)
{
	var_191_bool = 0;
	func_1217(var_191_bool);
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
	func_928(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	return 0;
	
}


func_965(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_971(var_45_cvector, var_46_cvector)
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


func_1099()
{
	var_99_object = Obj(); var_100_object = Obj();
	CreateDiaryEntry(var_100_object, (int)774, (int)1, (int)540275);
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0;
	var_100_object = var_105_object;
	func_1164(var_104_bool, var_105_object, (int)729);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_1063(var_182_object);
		var_189_bool = var_181_bool == 0; //@nz
		if(var_189_bool != 0) {
			var_190_string = "";
			func_195(var_175_object, "Doubt");
			@@@var_0_object:SetMessage((int)539253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539254, (int)41198, (int)41197);
			@@@var_0_object:AddReply((int)539271, (int)41215, (int)41214);
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_1087(var_215_object);
			if(var_214_bool != 0) {
				@@@var_0_object:AddReply((int)539257, (int)41201, (int)41200);
			}
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_1075(var_224_object);
			if(var_223_bool != 0) {
				@@@var_0_object:AddReply((int)539262, (int)41206, (int)41205);
			}
			@@@var_0_object:AddReply((int)540270, (int)42254, (int)42253);
		} else {
				var_253_string = "";
				func_195(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)539276);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539277, (int)-1, (int)41220);
				@@@var_0_object:AddReply((int)542911, (int)-1, (int)45342);
				@@@var_0_object:AddReply((int)542912, (int)-1, (int)45343);
				goto Label_165;
		}
	}
Label_165:
	var_235_bool = 0;
	func_1217(var_235_bool);
	if(var_235_bool != 0) {

	Label_169:
		lshWaitForAnimEnd();
		var_236_string = var_3_string;
		if(var_236_string != 0) {
		} else {
			var_237_string = "";
			var_237_string = var_2_object;
			func_912(var_237_string);
			goto Label_169;
	}
		PlayAnimation("all", "idle");

	Label_184:
		WaitForAnimEnd();
		var_250_string = var_3_string;
		if(var_250_string != 0) {
			goto Label_194;
		}
		PlayAnimation("all", "idle");
		goto Label_184;

	}
	goto Label_194;
	
Label_194:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_981(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_1112()
{
	var_30_object = Obj(); var_31_object = Obj();
	CreateDiaryEntry(var_31_object, (int)734, (int)1, (int)539364);
	var_35_bool = 0; var_36_object = Obj(); var_37_int = 0;
	var_31_object = var_36_object;
	func_1164(var_35_bool, var_36_object, (int)729);
	return 2;
}
EMIT "Stack[-1] = 0";


func_986(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj();
	FindActor(var_21_object, var_18_string);
	var_22_bool = var_21_object == 0; //@nz
	if(var_22_bool != 0) {
		var_24_int = "Door " + var_18_string;
		var_26_int = var_24_int + " not found";
		Trace(var_26_int);
	} else {
		@@var_21_object:SetProperty("locked", var_19_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_869(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_1003(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_878:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_878;
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
	func_943(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1125()
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateDiaryEntry(var_82_object, (int)732, (int)1, (int)539362);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_82_object = var_87_object;
	func_1164(var_86_bool, var_87_object, (int)729);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1003(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1138()
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateDiaryEntry(var_64_object, (int)733, (int)1, (int)539363);
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0;
	var_64_object = var_69_object;
	func_1164(var_68_bool, var_69_object, (int)729);
	return 2;
}
EMIT "Stack[-1] = 0";


func_756()
{
	var_266_bool = 0; var_267_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_269_bool = 0;
	func_1217(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		HasAnimationTrack(var_267_bool, "head");
		var_271_bool = var_267_bool;
		if(var_271_bool == 0) goto Label_773;
		UnlookAsync("head");
	}
Label_773:
	return 2;
	
}


func_1012()
{
	SetVariable("game_final", (int)1);
	return 0;
}


func_1018()
{
	SetVariable("game_final", (int)2);
	return 0;
}


func_637()
{
	
Label_637:
	Hold();
	goto Label_637;
}
EMIT "Return(); Pop(0)";


func_1151(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj();
	GetDiaryRoot(var_46_object);
	var_47_bool = var_46_object == 0; //@nz
	if(var_47_bool != 0) {
		Trace("Can't retrieve diary root");
		var_44_object = 0;
		return 2;
	}
	var_46_object = var_44_object;
	return 2;
}
EMIT "Stack[-1] = 0";


