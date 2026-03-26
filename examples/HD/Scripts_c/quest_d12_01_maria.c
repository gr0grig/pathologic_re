// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Staring|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ood12MariaSobor1|W:branch|W:ui/NPC_Maria.png|W:ui/NPC_Maria_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x174
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x178 vars=object
// @EVENT_26: op=0x184 vars=string
// @EVENT_6: op=0x1a0 vars=
// @PE: 0x51,0x90,0xa6,0x174,0x178,0x2e6,0x2ec

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_705();
		var_11_bool = var_7_bool == (int)37326;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_742();
		}
		var_17_bool = var_6_int == (int)37325;
		if(var_17_bool != 0) {
			var_18_string = "";
			func_144(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535639);
			@@@var_0_object:ClearReplies();
			var_36_bool = 0; var_37_object = Obj();
			var_37_object = var_1_object;
			func_748(var_37_object);
			if(var_36_bool != 0) {
				@@@var_0_object:AddReply((int)535640, (int)42495, (int)37326);
			}
			@@@var_0_object:AddReply((int)540495, (int)-1, (int)42494);
			return 0;
		}
		var_51_bool = var_6_int == (int)42495;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_144(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540500, (int)42500, (int)42499);
			@@@var_0_object:AddReply((int)540498, (int)-1, (int)42497);
			return 0;
		}
		var_61_bool = var_6_int == (int)42500;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_144(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540501);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540497, (int)42498, (int)42496);
			return 0;
		}
		var_68_bool = var_6_int == (int)42498;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_144(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540499);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540502, (int)42502, (int)42501);
			@@@var_0_object:AddReply((int)540511, (int)42511, (int)42510);
			return 0;
		}
		var_78_bool = var_6_int == (int)42511;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_144(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540513, (int)42504, (int)42512);
			@@@var_0_object:AddReply((int)540514, (int)-1, (int)42514);
			return 0;
		}
		var_88_bool = var_6_int == (int)42502;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_144(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540503);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540504, (int)42504, (int)42503);
			@@@var_0_object:AddReply((int)540506, (int)-1, (int)42505);
			return 0;
		}
		var_98_bool = var_6_int == (int)42504;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_144(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540505);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540507, (int)42507, (int)42506);
			return 0;
		}
		var_105_bool = var_6_int == (int)42507;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_144(var_7_bool, "Staring");
			@@@var_0_object:SetMessage((int)540508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540509, (int)-1, (int)42508);
			@@@var_0_object:AddReply((int)540510, (int)-1, (int)42509);
			return 0;
		}
		var_3_string = true;
		var_114_bool = 0;
		func_785(var_114_bool);
		if(var_114_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
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
			func_432(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_712(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_415;
		var_0_object = false;
	}
Label_415:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_432(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_712(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_384();
	return 0;
}


func_384()
{
	
Label_384:
	Hold();
	goto Label_384;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_434(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_779(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_777(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_781(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_783(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_760(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_712(Obj());
	var_81_object = var_80_object;
	func_521(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_231_bool = var_17_bool == 0; //@nz
	if(var_231_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_503();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_705()
{
	var_9_bool = 0;
	func_785(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_579(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_582:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_582;
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
	func_690(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_712(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_777(var_67_int)
{
	var_67_int = 515543;
	return 0;
}


func_521(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_579(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_616(var_121_bool, var_122_object);
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
		func_616(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_579(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_577;
	
Label_577:
	var_79_bool = 1;
	return 4;
	
}


func_779(var_66_int)
{
	var_66_int = 502868;
	return 0;
}


func_781(var_68_string)
{
	var_68_string = "ui/NPC_Maria.png";
	return 0;
}


func_718(var_45_cvector, var_46_cvector)
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


func_783(var_69_string)
{
	var_69_string = "ui/NPC_Maria_b.png";
	return 0;
}


func_144(var_2_object, var_181_string)
{
	var_182_bool = 0;
	func_785(var_182_bool);
	var_183_bool = var_182_bool == 0; //@nz
	if(var_183_bool != 0) {
		return 0;
	}
	var_184_bool = var_181_string == var_2_object;
	if(var_184_bool != 0) {
		return 0;
	}
	var_185_string = ""; var_186_bool = 0;
	var_181_string = var_185_string;
	var_188_bool = var_181_string == "";
	if(var_188_bool != 0) {
		var_186_bool = 0;
	} else {
		var_186_bool = 1;
	}
	func_675(var_185_string, var_186_bool);
	var_2_object = var_181_string;
	return 0;
	
}


func_785(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_string = "";
		func_144(var_175_object, "Neutral");
		@@@var_0_object:SetMessage((int)535639);
		@@@var_0_object:ClearReplies();
		var_199_bool = 0; var_200_object = Obj();
		var_200_object = var_1_object;
		func_748(var_200_object);
		if(var_199_bool != 0) {
			@@@var_0_object:AddReply((int)535640, (int)42495, (int)37326);
		}
		@@@var_0_object:AddReply((int)540495, (int)-1, (int)42494);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_213_bool = 0;
	func_785(var_213_bool);
	if(var_213_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_214_string = var_3_string;
		if(var_214_string != 0) {
		} else {
			var_215_string = "";
			var_215_string = var_2_object;
			func_659(var_215_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_228_string = var_3_string;
		if(var_228_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_659(var_215_string)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0;
	lshHasAnimation(var_219_bool, var_215_string);
	var_222_bool = var_219_bool;
	if(var_222_bool != 0) {
		lshGetAnimTimes(var_215_string, var_220_float, var_221_float);
		lshPlayAnimation(var_220_float, var_221_float, (bool)0);
	} else {
		var_225_int = "Can't find lsh animation : " + var_215_string;
		Trace(var_225_int);
	}
	return 6;
	
}


func_728(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0;
	GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
	return 2;
}


func_733(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_675(var_185_string, var_186_bool)
{
	var_189_bool = 0; var_190_float = 0; var_191_float = 0; var_192_bool = 0; var_193_float = 0; var_194_float = 0;
	lshHasAnimation(var_192_bool, var_185_string);
	var_195_bool = var_192_bool;
	if(var_195_bool != 0) {
		lshGetAnimTimes(var_185_string, var_193_float, var_194_float);
		lshPlayAnimation(var_193_float, var_194_float, var_186_bool);
	} else {
		var_197_int = "Can't find lsh animation : " + var_185_string;
		Trace(var_197_int);
	}
	return 6;
	
}


func_742()
{
	SetVariable("ood12MariaSobor1", (int)1);
	return 0;
}


func_616(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_733(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_625:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_625;
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
	func_690(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_748(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_728(var_201_int, "ood12MariaSobor1");
	var_206_bool = var_201_int == (int)0;
	if(var_206_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_432(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_434(var_18_bool, var_19_object, var_20_float)
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
	func_718(var_45_cvector, var_46_cvector);
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
	func_785(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_497;
		LookAsyncCamera("head");
	}
Label_497:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_690(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_785(var_117_bool);
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


func_503()
{
	var_233_bool = 0; var_234_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_236_bool = 0;
	func_785(var_236_bool);
	if(var_236_bool != 0) {
	} else {
		HasAnimationTrack(var_234_bool, "head");
		var_238_bool = var_234_bool;
		if(var_238_bool == 0) goto Label_520;
		UnlookAsync("head");
	}
Label_520:
	return 2;
	
}


func_760(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x307";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


