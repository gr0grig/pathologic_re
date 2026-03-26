// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Saveyouall|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:idle|W:Fear|W:Smile|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:oob12KlaraSobor1|W:oob12KlaraSobor2|W:game_final|W:branch|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1d1
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xca vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1d5 vars=object
// @EVENT_26: op=0x1e1 vars=string
// @EVENT_6: op=0x1fd vars=
// @PE: 0x51,0xb4,0xca,0x1d1,0x1d5,0x343,0x349,0x34f,0x35b,0x367

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_798();
		var_11_bool = var_7_bool == (int)24314;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_835();
		}
		var_17_bool = var_7_bool == (int)24326;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_841();
		}
		var_23_bool = var_6_int == (int)23350;
		if(var_23_bool != 0) {
			var_24_bool = 0; var_25_object = Obj();
			var_25_object = var_1_object;
			func_847(var_25_object);
			var_32_bool = var_24_bool == 0; //@nz
			if(var_32_bool != 0) {
				var_33_string = "";
				func_180(var_7_bool, "Saveyouall");
				@@@var_0_object:SetMessage((int)522183);
				@@@var_0_object:ClearReplies();
				var_51_bool = 0; var_52_object = Obj();
				var_52_object = var_1_object;
				func_859(var_52_object);
				if(var_51_bool != 0) {
					@@@var_0_object:AddReply((int)523114, (int)24315, (int)24314);
				}
				var_60_bool = 0; var_61_object = Obj();
				var_61_object = var_1_object;
				func_871(var_61_object);
				if(var_60_bool != 0) {
					@@@var_0_object:AddReply((int)523126, (int)24327, (int)24326);
				}
				@@@var_0_object:AddReply((int)523113, (int)-1, (int)24313);
				return 0;
			}
			var_72_string = "";
			func_180(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523167);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522184, (int)-1, (int)23351);
			@@@var_0_object:AddReply((int)523175, (int)-1, (int)24377);
			return 0;
		}
		var_81_bool = var_6_int == (int)24327;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_180(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)523127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523128, (int)24329, (int)24328);
			return 0;
		}
		var_88_bool = var_6_int == (int)24329;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_180(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)523129);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523130, (int)-1, (int)24330);
			@@@var_0_object:AddReply((int)523131, (int)24332, (int)24331);
			return 0;
		}
		var_98_bool = var_6_int == (int)24332;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_180(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523132);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523133, (int)-1, (int)24333);
			@@@var_0_object:AddReply((int)523134, (int)-1, (int)24334);
			return 0;
		}
		var_108_bool = var_6_int == (int)24315;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_180(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)523115);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523116, (int)24317, (int)24316);
			return 0;
		}
		var_115_bool = var_6_int == (int)24317;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_180(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523117);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523118, (int)24319, (int)24318);
			@@@var_0_object:AddReply((int)540129, (int)24321, (int)42100);
			return 0;
		}
		var_125_bool = var_6_int == (int)24319;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_180(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523119);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523120, (int)24321, (int)24320);
			return 0;
		}
		var_132_bool = var_6_int == (int)24321;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_180(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523121);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523122, (int)24323, (int)24322);
			return 0;
		}
		var_139_bool = var_6_int == (int)24323;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_180(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523123);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523124, (int)-1, (int)24324);
			@@@var_0_object:AddReply((int)523125, (int)-1, (int)24325);
			return 0;
		}
		var_3_string = true;
		var_148_bool = 0;
		func_908(var_148_bool);
		if(var_148_bool != 0) {
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
			func_525(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_805(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_508;
		var_0_object = false;
	}
Label_508:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_525(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_805(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_477();
	return 0;
}


func_768(var_194_string, var_195_bool)
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


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_527(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_902(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_900(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_904(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_906(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_883(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_805(Obj());
	var_81_object = var_80_object;
	func_614(var_79_bool, var_80_object);
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
	func_596();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_835()
{
	SetVariable("oob12KlaraSobor1", (int)1);
	return 0;
}


func_900(var_67_int)
{
	var_67_int = 515540;
	return 0;
}


func_709(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_826(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_718:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_718;
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
	func_783(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_902(var_66_int)
{
	var_66_int = 502865;
	return 0;
}


func_904(var_68_string)
{
	var_68_string = "ui/NPC_Klara.png";
	return 0;
}


func_841()
{
	SetVariable("oob12KlaraSobor2", (int)1);
	return 0;
}


func_906(var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_908(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_525(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_527(var_18_bool, var_19_object, var_20_float)
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
	func_811(var_45_cvector, var_46_cvector);
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
	func_908(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_590;
		LookAsyncCamera("head");
	}
Label_590:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_783(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_908(var_117_bool);
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


func_847(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_821(var_183_int, "game_final");
	var_188_bool = var_183_int != (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
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
		func_847(var_182_object);
		var_189_bool = var_181_bool == 0; //@nz
		if(var_189_bool != 0) {
			var_190_string = "";
			func_180(var_175_object, "Saveyouall");
			@@@var_0_object:SetMessage((int)522183);
			@@@var_0_object:ClearReplies();
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_859(var_209_object);
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)523114, (int)24315, (int)24314);
			}
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_871(var_218_object);
			if(var_217_bool != 0) {
				@@@var_0_object:AddReply((int)523126, (int)24327, (int)24326);
			}
			@@@var_0_object:AddReply((int)523113, (int)-1, (int)24313);
		} else {
				var_247_string = "";
				func_180(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)523167);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522184, (int)-1, (int)23351);
				@@@var_0_object:AddReply((int)523175, (int)-1, (int)24377);
				goto Label_150;
		}
	}
Label_150:
	var_229_bool = 0;
	func_908(var_229_bool);
	if(var_229_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_230_string = var_3_string;
		if(var_230_string != 0) {
		} else {
			var_231_string = "";
			var_231_string = var_2_object;
			func_752(var_231_string);
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


func_596()
{
	var_257_bool = 0; var_258_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_260_bool = 0;
	func_908(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		HasAnimationTrack(var_258_bool, "head");
		var_262_bool = var_258_bool;
		if(var_262_bool == 0) goto Label_613;
		UnlookAsync("head");
	}
Label_613:
	return 2;
	
}


func_859(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_821(var_210_int, "oob12KlaraSobor1");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_477()
{
	
Label_477:
	Hold();
	goto Label_477;
}
EMIT "Return(); Pop(0)";


func_798()
{
	var_9_bool = 0;
	func_908(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_672(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_675:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_675;
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
	func_783(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_805(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_614(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_672(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_709(var_121_bool, var_122_object);
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
		func_709(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_672(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_670;
	
Label_670:
	var_79_bool = 1;
	return 4;
	
}


func_871(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_821(var_219_int, "oob12KlaraSobor2");
	var_222_bool = var_219_int == (int)0;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_811(var_45_cvector, var_46_cvector)
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


func_752(var_231_string)
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


func_883(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x382";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_180(var_2_object, var_190_string)
{
	var_191_bool = 0;
	func_908(var_191_bool);
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
	func_768(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	return 0;
	
}


func_821(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_826(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


