// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Menace|W:Smile|W:Sorrow|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:oob12DankoSobor1|W:oob12DankoSobor2|W:oob12DankoSobor3|W:oob12DankoSobor4|W:game_final|W:branch|W:ui/NPC_Bakalavr.png|W:ui/NPC_Bakalavr_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x223
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xde vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x227 vars=object
// @EVENT_26: op=0x233 vars=string
// @EVENT_6: op=0x24f vars=
// @PE: 0x51,0xc8,0xde,0x223,0x227,0x395,0x39b,0x3a1,0x3a7,0x3ad,0x3b9,0x3c5,0x3d1,0x3dd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_880();
		var_11_bool = var_7_bool == (int)23345;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_917();
		}
		var_17_bool = var_7_bool == (int)24219;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_923();
		}
		var_23_bool = var_7_bool == (int)24228;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_929();
		}
		var_29_bool = var_7_bool == (int)24237;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_935();
		}
		var_35_bool = var_6_int == (int)23344;
		if(var_35_bool != 0) {
			var_36_bool = 0; var_37_object = Obj();
			var_37_object = var_1_object;
			func_941(var_37_object);
			var_44_bool = var_36_bool == 0; //@nz
			if(var_44_bool != 0) {
				var_45_string = "";
				func_200(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)522177);
				@@@var_0_object:ClearReplies();
				var_63_bool = 0; var_64_object = Obj();
				var_64_object = var_1_object;
				func_953(var_64_object);
				if(var_63_bool != 0) {
					@@@var_0_object:AddReply((int)522178, (int)24218, (int)23345);
				}
				var_72_bool = 0; var_73_object = Obj();
				var_73_object = var_1_object;
				func_965(var_73_object);
				if(var_72_bool != 0) {
					@@@var_0_object:AddReply((int)523026, (int)24220, (int)24219);
				}
				var_81_bool = 0; var_82_object = Obj();
				var_82_object = var_1_object;
				func_977(var_82_object);
				if(var_81_bool != 0) {
					@@@var_0_object:AddReply((int)523035, (int)24229, (int)24228);
				}
				var_90_bool = 0; var_91_object = Obj();
				var_91_object = var_1_object;
				func_989(var_91_object);
				if(var_90_bool != 0) {
					@@@var_0_object:AddReply((int)523044, (int)24238, (int)24237);
				}
				@@@var_0_object:AddReply((int)523028, (int)-1, (int)24221);
				return 0;
			}
			var_102_string = "";
			func_200(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523163);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523164, (int)-1, (int)24366);
			@@@var_0_object:AddReply((int)523174, (int)-1, (int)24376);
			return 0;
		}
		var_111_bool = var_6_int == (int)24238;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_200(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)523045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523046, (int)-1, (int)24239);
			return 0;
		}
		var_118_bool = var_6_int == (int)24229;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_200(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523037, (int)24231, (int)24230);
			return 0;
		}
		var_125_bool = var_6_int == (int)24231;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_200(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523039, (int)24233, (int)24232);
			return 0;
		}
		var_132_bool = var_6_int == (int)24233;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_200(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)523040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523041, (int)-1, (int)24234);
			return 0;
		}
		var_139_bool = var_6_int == (int)24220;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_200(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)523027);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531982, (int)-1, (int)33388);
			return 0;
		}
		var_146_bool = var_6_int == (int)24218;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_200(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)523025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523029, (int)24223, (int)24222);
			@@@var_0_object:AddReply((int)538760, (int)24223, (int)40673);
			return 0;
		}
		var_156_bool = var_6_int == (int)24223;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_200(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)523030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523034, (int)24235, (int)24227);
			return 0;
		}
		var_163_bool = var_6_int == (int)24235;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_200(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)523042);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523031, (int)24225, (int)24224);
			@@@var_0_object:AddReply((int)523033, (int)24240, (int)24226);
			return 0;
		}
		var_173_bool = var_6_int == (int)24240;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_200(var_7_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)523047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523048, (int)-1, (int)24241);
			return 0;
		}
		var_180_bool = var_6_int == (int)24225;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_200(var_7_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)523032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523043, (int)-1, (int)24236);
			return 0;
		}
		var_3_string = true;
		var_186_bool = 0;
		func_1026(var_186_bool);
		if(var_186_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdf";
	
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
			func_607(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_887(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_590;
		var_0_object = false;
	}
Label_590:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_607(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_887(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_559();
	return 0;
}


func_1024(var_69_string)
{
	var_69_string = "ui/NPC_Bakalavr_b.png";
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_609(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1020(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1018(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1022(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1024(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1001(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_887(Obj());
	var_81_object = var_80_object;
	func_696(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_273_bool = var_17_bool == 0; //@nz
	if(var_273_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_678();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1026(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_903(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_908(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_917()
{
	SetVariable("oob12DankoSobor1", (int)1);
	return 0;
}


func_791(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_908(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_800:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_800;
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
	func_865(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_923()
{
	SetVariable("oob12DankoSobor2", (int)1);
	return 0;
}


func_929()
{
	SetVariable("oob12DankoSobor3", (int)1);
	return 0;
}


func_678()
{
	var_275_bool = 0; var_276_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_278_bool = 0;
	func_1026(var_278_bool);
	if(var_278_bool != 0) {
	} else {
		HasAnimationTrack(var_276_bool, "head");
		var_280_bool = var_276_bool;
		if(var_280_bool == 0) goto Label_695;
		UnlookAsync("head");
	}
Label_695:
	return 2;
	
}


func_935()
{
	SetVariable("oob12DankoSobor4", (int)1);
	return 0;
}


func_941(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_903(var_183_int, "game_final");
	var_188_bool = var_183_int != (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_559()
{
	
Label_559:
	Hold();
	goto Label_559;
}
EMIT "Return(); Pop(0)";


func_696(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_754(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_791(var_121_bool, var_122_object);
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
		func_791(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_754(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_752;
	
Label_752:
	var_79_bool = 1;
	return 4;
	
}


func_953(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_903(var_210_int, "oob12DankoSobor1");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_834(var_249_string)
{
	var_250_bool = 0; var_251_float = 0; var_252_float = 0; var_253_bool = 0; var_254_float = 0; var_255_float = 0;
	lshHasAnimation(var_253_bool, var_249_string);
	var_256_bool = var_253_bool;
	if(var_256_bool != 0) {
		lshGetAnimTimes(var_249_string, var_254_float, var_255_float);
		lshPlayAnimation(var_254_float, var_255_float, (bool)0);
	} else {
		var_259_int = "Can't find lsh animation : " + var_249_string;
		Trace(var_259_int);
	}
	return 6;
	
}


func_965(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_903(var_219_int, "oob12DankoSobor2");
	var_222_bool = var_219_int == (int)0;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_200(var_2_object, var_190_string)
{
	var_191_bool = 0;
	func_1026(var_191_bool);
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
	func_850(var_194_string, var_195_bool);
	var_2_object = var_190_string;
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
		func_941(var_182_object);
		var_189_bool = var_181_bool == 0; //@nz
		if(var_189_bool != 0) {
			var_190_string = "";
			func_200(var_175_object, "Neutral");
			@@@var_0_object:SetMessage((int)522177);
			@@@var_0_object:ClearReplies();
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_953(var_209_object);
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)522178, (int)24218, (int)23345);
			}
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_965(var_218_object);
			if(var_217_bool != 0) {
				@@@var_0_object:AddReply((int)523026, (int)24220, (int)24219);
			}
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_977(var_227_object);
			if(var_226_bool != 0) {
				@@@var_0_object:AddReply((int)523035, (int)24229, (int)24228);
			}
			var_235_bool = 0; var_236_object = Obj();
			var_236_object = var_1_object;
			func_989(var_236_object);
			if(var_235_bool != 0) {
				@@@var_0_object:AddReply((int)523044, (int)24238, (int)24237);
			}
			@@@var_0_object:AddReply((int)523028, (int)-1, (int)24221);
		} else {
				var_265_string = "";
				func_200(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)523163);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523164, (int)-1, (int)24366);
				@@@var_0_object:AddReply((int)523174, (int)-1, (int)24376);
				goto Label_170;
		}
	}
Label_170:
	var_247_bool = 0;
	func_1026(var_247_bool);
	if(var_247_bool != 0) {

	Label_174:
		lshWaitForAnimEnd();
		var_248_string = var_3_string;
		if(var_248_string != 0) {
		} else {
			var_249_string = "";
			var_249_string = var_2_object;
			func_834(var_249_string);
			goto Label_174;
	}
		PlayAnimation("all", "idle");

	Label_189:
		WaitForAnimEnd();
		var_262_string = var_3_string;
		if(var_262_string != 0) {
			goto Label_199;
		}
		PlayAnimation("all", "idle");
		goto Label_189;

	}
	goto Label_199;
	
Label_199:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_977(var_226_bool)
{
	var_228_int = 0; var_229_string = "";
	func_903(var_228_int, "oob12DankoSobor3");
	var_231_bool = var_228_int == (int)0;
	if(var_231_bool != 0) {
		var_226_bool = 1;
		return 0;
	}
	var_226_bool = 0;
	return 0;
}


func_850(var_194_string, var_195_bool)
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


func_989(var_235_bool)
{
	var_237_int = 0; var_238_string = "";
	func_903(var_237_int, "oob12DankoSobor4");
	var_240_bool = var_237_int == (int)0;
	if(var_240_bool != 0) {
		var_235_bool = 1;
		return 0;
	}
	var_235_bool = 0;
	return 0;
}


func_607(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_609(var_18_bool, var_19_object, var_20_float)
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
	func_893(var_45_cvector, var_46_cvector);
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
	func_1026(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_672;
		LookAsyncCamera("head");
	}
Label_672:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_865(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1026(var_117_bool);
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


func_1001(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3f8";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_880()
{
	var_9_bool = 0;
	func_1026(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_754(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_757:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_757;
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
	func_865(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_887(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1018(var_67_int)
{
	var_67_int = 515573;
	return 0;
}


func_1020(var_66_int)
{
	var_66_int = 504032;
	return 0;
}


func_893(var_45_cvector, var_46_cvector)
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


func_1022(var_68_string)
{
	var_68_string = "ui/NPC_Bakalavr.png";
	return 0;
}


