// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Smile|W:Menace|W:Untrust|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ook1Danko1|W:ook1Danko2|W:k1q01|W:k1q01Healed|W:branch|W:ui/NPC_Bakalavr.png|W:ui/NPC_Bakalavr_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x227
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf9 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x21f vars=object
// @EVENT_26: op=0x22b vars=string
// @EVENT_6: op=0x247 vars=
// @PE: 0x51,0xe3,0xf9,0x21f,0x38d,0x393,0x399,0x3a5,0x3b1,0x3bd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_872();
		var_11_bool = var_6_int == (int)26038;
		if(var_11_bool != 0) {
			var_12_bool = 0;
			var_12_bool = 0;
			var_13_bool = 0;
			var_13_bool = 0;
			var_14_bool = 0; var_15_object = Obj();
			var_15_object = var_1_object;
			func_921(var_15_object);
			if(var_14_bool != 0) {
				var_22_bool = 0; var_23_object = Obj();
				var_23_object = var_1_object;
				func_933(var_23_object);
				var_28_bool = var_22_bool == 0; //@nz
				if(var_28_bool != 0) {
					var_13_bool = 1;
				}
			}
			if(var_13_bool != 0) {
				var_29_bool = 0; var_30_object = Obj();
				var_30_object = var_1_object;
				func_945(var_30_object);
				if(var_29_bool != 0) {
					var_12_bool = 1;
				}
			}
			if(var_12_bool != 0) {
				var_35_object = Obj(); var_36_object = Obj();
				var_35_object = var_1_object;
				var_36_object = var_0_object;
				func_909();
				var_39_string = "";
				func_227(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)524699);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524700, (int)28105, (int)26039);
				@@@var_0_object:AddReply((int)526838, (int)28123, (int)28122);
				@@@var_0_object:AddReply((int)542096, (int)28125, (int)44396);
				return 0;
			}
			var_66_bool = 0;
			var_66_bool = 0;
			var_67_bool = 0; var_68_object = Obj();
			var_68_object = var_1_object;
			func_933(var_68_object);
			if(var_67_bool != 0) {
				var_69_bool = 0; var_70_object = Obj();
				var_70_object = var_1_object;
				func_957(var_70_object);
				if(var_69_bool != 0) {
					var_66_bool = 1;
				}
			}
			if(var_66_bool != 0) {
				var_75_object = Obj(); var_76_object = Obj();
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_915();
				var_79_string = "";
				func_227(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)524714);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524715, (int)28112, (int)26054);
				return 0;
			}
			var_84_string = "";
			func_227(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526834);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526835, (int)-1, (int)28118);
			@@@var_0_object:AddReply((int)526836, (int)-1, (int)28119);
			return 0;
		}
		var_93_bool = var_6_int == (int)28112;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_227(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)526830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526831, (int)26055, (int)28113);
			@@@var_0_object:AddReply((int)526832, (int)26055, (int)28114);
			return 0;
		}
		var_103_bool = var_6_int == (int)26055;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_227(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)524716);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524717, (int)-1, (int)26056);
			@@@var_0_object:AddReply((int)526829, (int)-1, (int)28111);
			return 0;
		}
		var_113_bool = var_6_int == (int)28123;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_227(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)526839);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526840, (int)28125, (int)28124);
			return 0;
		}
		var_120_bool = var_6_int == (int)28125;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_227(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)526841);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526842, (int)28127, (int)28126);
			return 0;
		}
		var_127_bool = var_6_int == (int)28127;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_227(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)526843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526844, (int)28105, (int)28128);
			@@@var_0_object:AddReply((int)542097, (int)28107, (int)44398);
			return 0;
		}
		var_137_bool = var_6_int == (int)28105;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_227(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)526823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526824, (int)28107, (int)28106);
			return 0;
		}
		var_144_bool = var_6_int == (int)28107;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_227(var_7_bool, "Menace");
			@@@var_0_object:SetMessage((int)526825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526826, (int)28109, (int)28108);
			return 0;
		}
		var_151_bool = var_6_int == (int)28109;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_227(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)526827);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526828, (int)-1, (int)28110);
			@@@var_0_object:AddReply((int)526833, (int)-1, (int)28115);
			return 0;
		}
		var_3_string = true;
		var_160_bool = 0;
		func_994(var_160_bool);
		if(var_160_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfa";
	
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
			func_599(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_879(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_582;
		var_0_object = false;
	}
Label_582:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_599(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_879(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_551:
	Hold();
	goto Label_551;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_601(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_988(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_986(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_990(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_992(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_969(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_879(Obj());
	var_81_object = var_80_object;
	func_688(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_279_bool = var_17_bool == 0; //@nz
	if(var_279_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_670();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_900(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_969(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3d8";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_842(var_212_string, var_213_bool)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0;
	lshHasAnimation(var_219_bool, var_212_string);
	var_222_bool = var_219_bool;
	if(var_222_bool != 0) {
		lshGetAnimTimes(var_212_string, var_220_float, var_221_float);
		lshPlayAnimation(var_220_float, var_221_float, var_213_bool);
	} else {
		var_224_int = "Can't find lsh animation : " + var_212_string;
		Trace(var_224_int);
	}
	return 6;
	
}


func_909()
{
	SetVariable("ook1Danko1", (int)1);
	return 0;
}


func_783(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_900(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_792:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_792;
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
	func_857(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0;
		var_181_bool = 0;
		var_182_bool = 0;
		var_182_bool = 0;
		var_183_bool = 0; var_184_object = Obj();
		var_184_object = var_1_object;
		func_921(var_184_object);
		if(var_183_bool != 0) {
			var_191_bool = 0; var_192_object = Obj();
			var_192_object = var_1_object;
			func_933(var_192_object);
			var_197_bool = var_191_bool == 0; //@nz
			if(var_197_bool != 0) {
				var_182_bool = 1;
			}
		}
		if(var_182_bool != 0) {
			var_198_bool = 0; var_199_object = Obj();
			var_199_object = var_1_object;
			func_945(var_199_object);
			if(var_198_bool != 0) {
				var_181_bool = 1;
			}
		}
		if(var_181_bool != 0) {
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_909();
			var_208_string = "";
			func_227(var_175_object, "Neutral");
			@@@var_0_object:SetMessage((int)524699);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524700, (int)28105, (int)26039);
			@@@var_0_object:AddReply((int)526838, (int)28123, (int)28122);
			@@@var_0_object:AddReply((int)542096, (int)28125, (int)44396);
		} else {
				var_253_bool = 0;
				var_253_bool = 0;
				var_254_bool = 0; var_255_object = Obj();
				var_255_object = var_1_object;
				func_933(var_255_object);
				if(var_254_bool != 0) {
					var_256_bool = 0; var_257_object = Obj();
					var_257_object = var_1_object;
					func_957(var_257_object);
					if(var_256_bool != 0) {
						var_253_bool = 1;
					}
				}
				if(var_253_bool != 0) {
					var_262_object = Obj(); var_263_object = Obj();
					var_262_object = var_1_object;
					var_263_object = var_0_object;
					func_915();
					var_266_string = "";
					func_227(var_175_object, "Neutral");
					@@@var_0_object:SetMessage((int)524714);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)524715, (int)28112, (int)26054);
					goto Label_197;
				}
				var_271_string = "";
				func_227(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)526834);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526835, (int)-1, (int)28118);
				@@@var_0_object:AddReply((int)526836, (int)-1, (int)28119);
				goto Label_197;
		}
	}
Label_197:
	var_235_bool = 0;
	func_994(var_235_bool);
	if(var_235_bool != 0) {

	Label_201:
		lshWaitForAnimEnd();
		var_236_string = var_3_string;
		if(var_236_string != 0) {
		} else {
			var_237_string = "";
			var_237_string = var_2_object;
			func_826(var_237_string);
			goto Label_201;
	}
		PlayAnimation("all", "idle");

	Label_216:
		WaitForAnimEnd();
		var_250_string = var_3_string;
		if(var_250_string != 0) {
			goto Label_226;
		}
		PlayAnimation("all", "idle");
		goto Label_216;

	}
	goto Label_226;
	
Label_226:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_915()
{
	SetVariable("ook1Danko2", (int)1);
	return 0;
}


func_599(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_921(var_183_bool)
{
	var_185_int = 0; var_186_string = "";
	func_895(var_185_int, "k1q01");
	var_190_bool = var_185_int == (int)4;
	if(var_190_bool != 0) {
		var_183_bool = 1;
		return 0;
	}
	var_183_bool = 0;
	return 0;
}


func_601(var_18_bool, var_19_object, var_20_float)
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
	func_885(var_45_cvector, var_46_cvector);
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
	func_994(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_664;
		LookAsyncCamera("head");
	}
Label_664:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_986(var_67_int)
{
	var_67_int = 515573;
	return 0;
}


func_857(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_994(var_117_bool);
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


func_988(var_66_int)
{
	var_66_int = 504032;
	return 0;
}


func_670()
{
	var_281_bool = 0; var_282_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_284_bool = 0;
	func_994(var_284_bool);
	if(var_284_bool != 0) {
	} else {
		HasAnimationTrack(var_282_bool, "head");
		var_286_bool = var_282_bool;
		if(var_286_bool == 0) goto Label_687;
		UnlookAsync("head");
	}
Label_687:
	return 2;
	
}


func_990(var_68_string)
{
	var_68_string = "ui/NPC_Bakalavr.png";
	return 0;
}


func_992(var_69_string)
{
	var_69_string = "ui/NPC_Bakalavr_b.png";
	return 0;
}


func_994(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_227(var_2_object, var_208_string)
{
	var_209_bool = 0;
	func_994(var_209_bool);
	var_210_bool = var_209_bool == 0; //@nz
	if(var_210_bool != 0) {
		return 0;
	}
	var_211_bool = var_208_string == var_2_object;
	if(var_211_bool != 0) {
		return 0;
	}
	var_212_string = ""; var_213_bool = 0;
	var_208_string = var_212_string;
	var_215_bool = var_208_string == "";
	if(var_215_bool != 0) {
		var_213_bool = 0;
	} else {
		var_213_bool = 1;
	}
	func_842(var_212_string, var_213_bool);
	var_2_object = var_208_string;
	return 0;
	
}


func_933(var_191_bool)
{
	var_193_int = 0; var_194_string = "";
	func_895(var_193_int, "k1q01Healed");
	var_196_bool = var_193_int != (int)0;
	if(var_196_bool != 0) {
		var_191_bool = 1;
		return 0;
	}
	var_191_bool = 0;
	return 0;
}


func_872()
{
	var_9_bool = 0;
	func_994(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_746(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_749:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_749;
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
	func_857(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_879(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_688(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_746(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_783(var_121_bool, var_122_object);
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
		func_783(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_746(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_744;
	
Label_744:
	var_79_bool = 1;
	return 4;
	
}


func_945(var_198_bool)
{
	var_200_int = 0; var_201_string = "";
	func_895(var_200_int, "ook1Danko1");
	var_203_bool = var_200_int == (int)0;
	if(var_203_bool != 0) {
		var_198_bool = 1;
		return 0;
	}
	var_198_bool = 0;
	return 0;
}


func_885(var_45_cvector, var_46_cvector)
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


func_826(var_237_string)
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


func_957(var_256_bool)
{
	var_258_int = 0; var_259_string = "";
	func_895(var_258_int, "ook1Danko2");
	var_261_bool = var_258_int == (int)0;
	if(var_261_bool != 0) {
		var_256_bool = 1;
		return 0;
	}
	var_256_bool = 0;
	return 0;
}


func_895(var_185_int, var_186_string)
{
	var_187_int = 0; var_188_int = 0;
	GetVariable(var_186_string, var_188_int);
	var_188_int = var_185_int;
	return 2;
}


