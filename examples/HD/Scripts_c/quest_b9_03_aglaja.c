// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,StopGroup0/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Isee|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Threat|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Aglaja.png|W:ui/NPC_Aglaja_b.png|W:b9q03AglajaTalk|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1db
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc0 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_26: op=0x1ec vars=string
// @EVENT_6: op=0x200 vars=
// @EVENT_5: op=0x20c vars=
// @EVENT_0: op=0x211 vars=object
// @PE: 0x51,0xaa,0xc0,0x1d3,0x377,0x37d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_840();
		var_11_bool = var_6_int == (int)31666;
		if(var_11_bool != 0) {
			var_12_bool = 0; var_13_object = Obj();
			var_13_object = var_1_object;
			func_893(var_13_object);
			var_20_bool = var_12_bool == 0; //@nz
			if(var_20_bool != 0) {
				var_21_object = Obj(); var_22_object = Obj();
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_887();
				var_25_string = "";
				func_170(var_7_bool, "Isee");
				@@@var_0_object:SetMessage((int)530278);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530919, (int)32247, (int)32246);
				@@@var_0_object:AddReply((int)530923, (int)32251, (int)32250);
				return 0;
			}
			var_49_string = "";
			func_170(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530289, (int)-1, (int)31677);
			@@@var_0_object:AddReply((int)530918, (int)-1, (int)32245);
			return 0;
		}
		var_58_bool = var_6_int == (int)32251;
		if(var_58_bool != 0) {
			var_59_string = "";
			func_170(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530926, (int)32247, (int)32253);
			@@@var_0_object:AddReply((int)530925, (int)32247, (int)32252);
			return 0;
		}
		var_68_bool = var_6_int == (int)32247;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_170(var_7_bool, "Isee");
			@@@var_0_object:SetMessage((int)530920);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530921, (int)32249, (int)32248);
			@@@var_0_object:AddReply((int)531006, (int)-1, (int)32333);
			return 0;
		}
		var_78_bool = var_6_int == (int)32249;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_170(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530279, (int)31668, (int)31667);
			@@@var_0_object:AddReply((int)531005, (int)32334, (int)32332);
			return 0;
		}
		var_88_bool = var_6_int == (int)32334;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_170(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531007);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531008, (int)31668, (int)32335);
			return 0;
		}
		var_95_bool = var_6_int == (int)31668;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_170(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530280);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531011, (int)32340, (int)32339);
			@@@var_0_object:AddReply((int)531009, (int)32338, (int)32337);
			return 0;
		}
		var_105_bool = var_6_int == (int)32338;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_170(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531010);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531013, (int)32340, (int)32341);
			@@@var_0_object:AddReply((int)531014, (int)-1, (int)32342);
			return 0;
		}
		var_115_bool = var_6_int == (int)32340;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_170(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)531012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530281, (int)31670, (int)31669);
			@@@var_0_object:AddReply((int)531016, (int)-1, (int)32345);
			return 0;
		}
		var_125_bool = var_6_int == (int)31670;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_170(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530283, (int)-1, (int)31671);
			@@@var_0_object:AddReply((int)531015, (int)32346, (int)32344);
			return 0;
		}
		var_135_bool = var_6_int == (int)32346;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_170(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531017);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531018, (int)-1, (int)32347);
			@@@var_0_object:AddReply((int)531019, (int)-1, (int)32348);
			return 0;
		}
		var_3_string = true;
		var_144_bool = 0;
		func_885(var_144_bool);
		if(var_144_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc1";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = var_8_bool == 0; //@nz
		if(var_11_bool != 0) {
			var_12_object = Obj();
			func_847(var_12_object);
			RemoveActor(var_12_object);
		}
	} else {
		var_16_bool = var_6_string == "restore";
		if(var_16_bool == 0) goto Label_511;
		var_0_object = false;
	}
Label_511:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_object = var_0_object;
	if(var_6_object != 0) {
		var_7_object = Obj();
		func_847(var_7_object);
		RemoveActor(var_7_object);
		Hold();
	}
	Hold();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0;
	IsOverrideActive(var_8_bool);
	var_9_bool = var_8_bool == 0; //@nz
	if(var_9_bool != 0) {
		EventDisable(0);
		var_10_bool = 0; var_11_object = Obj();
		var_6_object = var_11_object;
		func_555(var_10_bool, var_11_object);
		EventEnable(0);
		var_24_object = Obj();
		var_6_object = var_24_object;
		func_467(var_24_object);
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	func_564(var_6_bool);
	var_9_bool = var_6_bool == 0; //@nz
	if(var_9_bool != 0) {
		Hold();
	}
Label_482:
	var_10_string = "";
	func_794("Neutral");
	lshWaitForAnimEnd();
	goto Label_482;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_25_int, var_26_object)
{
	var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_0_object = var_26_object;
	var_36_bool = 0; var_37_object = Obj(); var_38_float = 0;
	var_26_object = var_37_object;
	func_569(var_36_bool, var_37_object, (float)70.0);
	var_83_bool = var_36_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	CreateDialog(var_32_object);
	var_84_int = 0;
	func_879(var_84_int);
	@@var_32_object:SetNPCName(var_84_int);
	var_85_int = 0;
	func_877(var_85_int);
	@@var_32_object:SetNPCDescription(var_85_int);
	var_86_string = "";
	func_881(var_86_string);
	@@var_32_object:SetPhoto(var_86_string);
	var_87_string = "";
	func_883(var_87_string);
	@@var_32_object:SetPhoto2(var_87_string);
	var_88_int = 0;
	func_905(var_88_int);
	@@var_32_object:SetPlayerName(var_88_int);
	IsOverrideActive(var_33_bool);
	var_96_bool = var_33_bool;
	if(var_96_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	DoDialog(var_32_object);
	var_97_bool = 0; var_98_object = Obj();
	func_847(Obj());
	var_99_object = var_98_object;
	func_656(var_97_bool, var_98_object);
	var_192_object = Obj(); var_193_object = Obj();
	var_26_object = var_192_object;
	var_32_object = var_193_object;
	TaskCall(1);
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	@@var_32_object:IsDialogEnd(var_35_bool);
	
Label_63:
	var_262_bool = var_35_bool == 0; //@nz
	if(var_262_bool != 0) {
		sync();
		@@var_32_object:IsDialogEnd(var_35_bool);
		goto Label_63;
	}
	var_26_object = Obj();
	func_638();
	StopDialog(var_32_object);
	@@var_32_object:GetReturnValue((int)-1);
	var_34_int = var_25_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_840()
{
	var_9_bool = 0;
	func_885(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_905(var_88_int)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable("branch", var_90_int);
	var_93_bool = var_90_int == (int)0;
	if(var_93_bool != 0) {
		var_88_int = 1;
		return 2;
	EMIT "GOTO 0x398";
	}
	var_95_bool = var_90_int == (int)1;
	if(var_95_bool != 0) {
		var_88_int = 2;
		return 2;
	}
	var_88_int = 3;
	return 2;
}


func_714(var_108_bool, var_109_object)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = "";
	var_115_string = "c";
	var_116_int = 0;
	
Label_717:
	if((int)1 != 0) {
		var_122_int = var_116_int + (int)1;
		var_123_int = var_115_string + var_122_int;
		@@var_109_object:HasProperty(var_123_int, var_117_bool);
		var_124_bool = var_117_bool == 0; //@nz
		if(var_124_bool != 0) {
		} else {
			var_116_int = var_116_int + (int)1;
			goto Label_717;
		}
	}
	var_125_bool = var_116_int == 0; //@nz
	if(var_125_bool != 0) {
		var_108_bool = 0;
		return 10;
	}
	var_118_int = 0;
	var_127_bool = var_116_int > (int)1;
	if(var_127_bool != 0) {
		irand(var_118_int, var_116_int);
	}
	var_129_int = var_118_int + (int)1;
	var_130_int = var_115_string + var_129_int;
	@@var_109_object:GetProperty(var_130_int, var_119_string);
	var_131_bool = 0; var_132_string = "";
	var_119_string = var_132_string;
	func_825(var_131_bool, var_132_string);
	var_131_bool = var_108_bool;
	return 10;
	
}


func_847(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj();
	self(var_101_object);
	var_101_object = var_99_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_656(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0;
	GetVariable("voice_common", var_104_int);
	var_107_int = var_104_int;
	if(var_107_int != 0) {
		var_108_bool = 0; var_109_object = Obj();
		var_98_object = var_109_object;
		func_714(var_108_bool, var_109_object);
		var_138_bool = var_108_bool == 0; //@nz
		if(var_138_bool != 0) {
			var_139_bool = 0; var_140_object = Obj();
			var_98_object = var_140_object;
			func_751(var_139_bool, var_140_object);
			var_174_bool = var_139_bool == 0; //@nz
			if(var_174_bool != 0) {
				var_97_bool = 0;
				return 4;
			}
		}
		irand(var_105_int, (int)2);
		var_176_int = var_105_int;
		if(var_176_int != 0) {
			var_179_int = var_104_int + (int)1;
			var_181_int = var_179_int % (int)3;
			SetVariable("voice_common", var_181_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_184_bool = 0; var_185_object = Obj();
		var_98_object = var_185_object;
		func_751(var_184_bool, var_185_object);
		var_186_bool = var_184_bool == 0; //@nz
		if(var_186_bool != 0) {
			var_187_bool = 0; var_188_object = Obj();
			var_98_object = var_188_object;
			func_714(var_187_bool, var_188_object);
			var_189_bool = var_187_bool == 0; //@nz
			if(var_189_bool != 0) {
				var_97_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_712;
	
Label_712:
	var_97_bool = 1;
	return 4;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_199_bool = 0; var_200_object = Obj();
		var_200_object = var_1_object;
		func_893(var_200_object);
		var_207_bool = var_199_bool == 0; //@nz
		if(var_207_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_887();
			var_212_string = "";
			func_170(var_193_object, "Isee");
			@@@var_0_object:SetMessage((int)530278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530919, (int)32247, (int)32246);
			@@@var_0_object:AddReply((int)530923, (int)32251, (int)32250);
		} else {
				var_254_string = "";
				func_170(var_193_object, "Neutral");
				@@@var_0_object:SetMessage((int)530288);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530289, (int)-1, (int)31677);
				@@@var_0_object:AddReply((int)530918, (int)-1, (int)32245);
				goto Label_140;
		}
	}
Label_140:
	var_236_bool = 0;
	func_885(var_236_bool);
	if(var_236_bool != 0) {

	Label_144:
		lshWaitForAnimEnd();
		var_237_string = var_3_string;
		if(var_237_string != 0) {
		} else {
			var_238_string = "";
			var_238_string = var_2_object;
			func_794(var_238_string);
			goto Label_144;
	}
		PlayAnimation("all", "idle");

	Label_159:
		WaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
			goto Label_169;
		}
		PlayAnimation("all", "idle");
		goto Label_159;

	}
	goto Label_169;
	
Label_169:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_467(var_24_object)
{
	var_25_int = 0; var_26_object = Obj();
	var_24_object = var_26_object;
	TaskCall(0);
	func_0(var_27_object, var_25_int, var_26_object);
	TaskReturn();
	return 0;
}


func_853(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0;
	var_68_int = var_64_cvector | var_64_cvector;
	var_67_float = sqrt(var_68_int);
	var_69_float = 9.999999974752427e-07;
	var_70_bool = var_67_float < var_69_float;
	if(var_70_bool != 0) {
		var_63_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_63_cvector = var_64_cvector / var_67_float;
	return 2;
}


func_794(var_10_string)
{
	var_11_bool = 0; var_12_float = 0; var_13_float = 0; var_14_bool = 0; var_15_float = 0; var_16_float = 0;
	lshHasAnimation(var_14_bool, var_10_string);
	var_17_bool = var_14_bool;
	if(var_17_bool != 0) {
		lshGetAnimTimes(var_10_string, var_15_float, var_16_float);
		lshPlayAnimation(var_15_float, var_16_float, (bool)0);
	} else {
		var_20_int = "Can't find lsh animation : " + var_10_string;
		Trace(var_20_int);
	}
	return 6;
	
}


func_863(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0;
	GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
	return 2;
}


func_545(var_14_bool, var_15_cvector)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_bool = 0;
	GetPosition(var_19_cvector);
	var_20_cvector = var_15_cvector - var_19_cvector;
	var_22_float = GetByIndex(var_20_cvector, 0);
	var_23_float = GetByIndex(var_20_cvector, 2);
	Rotate(var_22_float, var_23_float, var_21_bool);
	var_21_bool = var_14_bool;
	return 6;
}


func_868(var_152_int)
{
	var_153_float = 0; var_154_float = 0;
	GetGameTime(var_154_float);
	var_156_int = 0;
	var_156_int = var_154_float / (int)24;
	var_152_int = (int)1 + var_156_int;
	return 2;
}


func_170(var_2_object, var_212_string)
{
	var_213_bool = 0;
	func_885(var_213_bool);
	var_214_bool = var_213_bool == 0; //@nz
	if(var_214_bool != 0) {
		return 0;
	}
	var_215_bool = var_212_string == var_2_object;
	if(var_215_bool != 0) {
		return 0;
	}
	var_216_string = ""; var_217_bool = 0;
	var_212_string = var_216_string;
	var_219_bool = var_212_string == "";
	if(var_219_bool != 0) {
		var_217_bool = 0;
	} else {
		var_217_bool = 1;
	}
	func_810(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	return 0;
	
}


func_810(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0;
	lshHasAnimation(var_223_bool, var_216_string);
	var_226_bool = var_223_bool;
	if(var_226_bool != 0) {
		lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		var_228_int = "Can't find lsh animation : " + var_216_string;
		Trace(var_228_int);
	}
	return 6;
	
}


func_555(var_10_bool, var_11_object)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	@@var_11_object:GetPosition(var_13_cvector);
	var_14_bool = 0; var_15_cvector = CVector(0,0,0);
	var_13_cvector = var_15_cvector;
	func_545(var_14_bool, var_15_cvector);
	var_14_bool = var_10_bool;
	return 2;
}


func_877(var_85_int)
{
	var_85_int = 515527;
	return 0;
}


func_569(var_36_bool, var_37_object, var_38_float)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0;
	@@var_37_object:GetPosition(var_49_cvector);
	@@var_37_object:GetEyesHeight(var_48_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	var_57_float = var_57_float + var_48_float;
	SetByIndex(var_49_cvector, 1) = var_57_float;
	GetPosition(var_50_cvector);
	GetEyesHeight(var_48_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_48_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	var_51_cvector = var_49_cvector - var_50_cvector;
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (float)0;
	var_60_int = var_51_cvector | var_51_cvector;
	var_61_float = sqrt(var_60_int);
	var_51_cvector = var_51_cvector / var_61_float;
	var_52_cvector = -var_51_cvector;
	var_62_float = var_51_cvector * var_38_float;
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	var_64_cvector = var_52_cvector ^ CVector(0.0, 1.0, 0.0);
	func_853(var_63_cvector, var_64_cvector);
	var_72_float = var_63_cvector * (int)25;
	var_73_int = var_62_float + var_72_float;
	var_53_cvector = var_73_int - CVector(0.0, 10.0, 0.0);
	var_54_cvector = var_50_cvector + var_53_cvector;
	IsOverrideActive(var_55_bool);
	var_75_bool = var_55_bool;
	if(var_75_bool != 0) {
		var_36_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_54_cvector, var_52_cvector, (bool)1);
	var_77_float = GetByIndex(var_53_cvector, 0);
	var_78_float = GetByIndex(var_53_cvector, 2);
	Rotate(var_77_float, var_78_float);
	var_79_bool = 0;
	func_885(var_79_bool);
	if(var_79_bool != 0) {
	} else {
		HasAnimationTrack(var_56_bool, "head");
		var_81_bool = var_56_bool;
		if(var_81_bool == 0) goto Label_632;
		LookAsyncCamera("head");
	}
Label_632:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_36_bool = 1;
	return 18;
	
}


func_879(var_84_int)
{
	var_84_int = 513334;
	return 0;
}


func_751(var_139_bool, var_140_object)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = "";
	var_152_int = 0;
	func_868(var_152_int);
	var_158_int = "d" + var_152_int;
	var_146_string = var_158_int + "m";
	var_147_int = 0;
	
Label_760:
	if((int)1 != 0) {
		var_162_int = var_147_int + (int)1;
		var_163_int = var_146_string + var_162_int;
		@@var_140_object:HasProperty(var_163_int, var_148_bool);
		var_164_bool = var_148_bool == 0; //@nz
		if(var_164_bool != 0) {
		} else {
			var_147_int = var_147_int + (int)1;
			goto Label_760;
		}
	}
	var_165_bool = var_147_int == 0; //@nz
	if(var_165_bool != 0) {
		var_139_bool = 0;
		return 10;
	}
	var_149_int = 0;
	var_167_bool = var_147_int > (int)1;
	if(var_167_bool != 0) {
		irand(var_149_int, var_147_int);
	}
	var_169_int = var_149_int + (int)1;
	var_170_int = var_146_string + var_169_int;
	@@var_140_object:GetProperty(var_170_int, var_150_string);
	var_171_bool = 0; var_172_string = "";
	var_150_string = var_172_string;
	func_825(var_171_bool, var_172_string);
	var_171_bool = var_139_bool;
	return 10;
	
}


func_881(var_86_string)
{
	var_86_string = "ui/NPC_Aglaja.png";
	return 0;
}


func_883(var_87_string)
{
	var_87_string = "ui/NPC_Aglaja_b.png";
	return 0;
}


func_564(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0;
	IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
	return 2;
}


func_885(var_79_bool)
{
	var_79_bool = 1;
	return 0;
}


func_887()
{
	SetVariable("b9q03AglajaTalk", (int)1);
	return 0;
}


func_825(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0;
	var_135_bool = 0;
	func_885(var_135_bool);
	if(var_135_bool != 0) {
		lshHasSpeech(var_134_bool, var_132_string);
		var_136_bool = var_134_bool;
		if(var_136_bool != 0) {
			lshPlaySpeech(var_132_string);
			var_131_bool = 1;
			return 2;
		}
	}
	var_131_bool = 0;
	return 2;
}


func_893(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_863(var_201_int, "b9q03AglajaTalk");
	var_206_bool = var_201_int != (int)0;
	if(var_206_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_638()
{
	var_264_bool = 0; var_265_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_267_bool = 0;
	func_885(var_267_bool);
	if(var_267_bool != 0) {
	} else {
		HasAnimationTrack(var_265_bool, "head");
		var_269_bool = var_265_bool;
		if(var_269_bool == 0) goto Label_655;
		UnlookAsync("head");
	}
Label_655:
	return 2;
	
}


