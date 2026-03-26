// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Rubin.png|W:ui/NPC_Rubin_b.png|W:branch|W:d12_rubin
// @GLOBALS: 0:object:
// @RUN_OP: 0x1ce
// @RUN_TASK: 4
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a4 vars=int,int
// @TASK_4: vars=cvector params=0
// @EVENT_7: op=0x217 vars=int
// @EVENT_6: op=0x23d vars=
// @EVENT_5: op=0x24c vars=
// @EVENT_45: op=0x259 vars=bool
// @EVENT_0: op=0x265 vars=object
// @PE: 0x51,0x90,0xa6,0x154,0x18e,0x1a4,0x1ce,0x217,0x23d,0x259,0x41d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector)
{
	if((int)1 != 0) {
		func_1021();
		var_16_bool = var_11_bool == (int)36971;
		if(var_16_bool != 0) {
			var_17_string = "";
			func_144(var_12_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_45_bool = var_11_bool == (int)36973;
		if(var_45_bool != 0) {
			var_46_string = "";
			func_144(var_12_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_55_bool = var_11_bool == (int)36975;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_144(var_12_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_64_bool = 0;
		func_1091(var_64_bool);
		if(var_64_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_cvector)
{
	if((int)1 != 0) {
		func_1021();
		var_16_bool = var_11_int == (int)42563;
		if(var_16_bool != 0) {
			var_17_string = "";
			func_398(var_12_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_41_bool = 0;
		func_1091(var_41_bool);
		if(var_41_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a5";
	
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_int)
{
	var_13_bool = var_11_int == (int)10;
	if(var_13_bool != 0) {
		func_531();
		var_15_bool = 0;
		var_15_bool = 0;
		var_16_bool = 0;
		func_745(var_16_bool);
		if(var_16_bool != 0) {
			var_19_bool = 0;
			func_500(var_19_bool);
			if(var_19_bool != 0) {
				var_15_bool = 1;
			}
		}
		if(var_15_bool != 0) {
			var_36_bool = 0;
			func_480(var_36_bool);
			if(var_36_bool != 0) {
				var_55_bool = 0; var_56_object = Obj();
				func_1028(Obj());
				var_57_object = var_56_object;
				func_895(var_55_bool, var_56_object);
			}
		} else {
			func_495(var_11_int);
			func_522();
		}
	}
	return 0;
	
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector)
{
	func_713();
	func_531();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_4_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector)
{
	StopGroup0();
	func_531();
	var_12_string = "";
	func_975("Neutral");
	func_522();
	return 0;
}


task_4_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	var_12_bool = var_11_bool;
	if(var_12_bool != 0) {
		func_522();
	} else {
		var_18_string = "";
		func_975("Neutral");
	}
	return 0;
	
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	IsOverrideActive(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool != 0) {
		EventDisable(0);
		func_713();
		var_15_bool = 0; var_16_object = Obj();
		var_11_object = var_16_object;
		func_736(var_15_bool, var_16_object);
		EventEnable(0);
		var_29_object = Obj();
		var_11_object = var_29_object;
		func_1110(var_29_object);
		var_324_string = "";
		func_975("Neutral");
		func_531();
		func_522();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector)
{
	func_466(var_10_cvector);
	return 0;
}


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_0_object = var_44_object;
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0;
	var_44_object = var_55_object;
	func_750(var_54_bool, var_55_object, (float)70.0);
	var_101_bool = var_54_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	CreateDialog(var_50_object);
	var_102_int = 0;
	func_1085(var_102_int);
	@@var_50_object:SetNPCName(var_102_int);
	var_103_int = 0;
	func_1083(var_103_int);
	@@var_50_object:SetNPCDescription(var_103_int);
	var_104_string = "";
	func_1087(var_104_string);
	@@var_50_object:SetPhoto(var_104_string);
	var_105_string = "";
	func_1089(var_105_string);
	@@var_50_object:SetPhoto2(var_105_string);
	var_106_int = 0;
	func_1093(var_106_int);
	@@var_50_object:SetPlayerName(var_106_int);
	IsOverrideActive(var_51_bool);
	var_114_bool = var_51_bool;
	if(var_114_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	DoDialog(var_50_object);
	var_115_bool = 0; var_116_object = Obj();
	func_1028(Obj());
	var_117_object = var_116_object;
	func_837(var_115_bool, var_116_object);
	var_205_object = Obj(); var_206_object = Obj();
	var_44_object = var_205_object;
	var_50_object = var_206_object;
	TaskCall(1);
	func_81(var_207_object, var_208_object, var_209_string, var_210_bool, var_205_object, var_206_object);
	TaskReturn();
	@@var_50_object:IsDialogEnd(var_53_bool);
	
Label_63:
	var_257_bool = var_53_bool == 0; //@nz
	if(var_257_bool != 0) {
		sync();
		@@var_50_object:IsDialogEnd(var_53_bool);
		goto Label_63;
	}
	var_44_object = Obj();
	func_819();
	StopDialog(var_50_object);
	@@var_50_object:GetReturnValue((int)-1);
	var_52_int = var_43_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_642()
{
	var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0;
	WaitForAnimEnd();
	var_27_bool = 0;
	func_745(var_27_bool);
	var_28_bool = var_27_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 12;
	}
	func_1066((int)0);
	var_29_int = var_21_int;
	var_22_int = 0;
	
Label_656:
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_22_int < (int)5;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_745(var_45_bool);
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_46_bool = var_21_int == 0; //@nz
		if(var_46_bool != 0) {
			Sleep((int)3, var_23_bool);
			var_48_bool = var_23_bool == 0; //@nz
			if(var_48_bool != 0) {
			} else {
		} else {
				irand(var_24_int, var_21_int);
				irand(var_25_int, (int)5);
				var_54_bool = var_25_int != (int)0;
				if(var_54_bool != 0) {
					var_24_int = 0;
				}
				var_56_string = ""; var_57_int = 0;
				var_24_int = var_57_int;
				func_1059(var_56_string, var_57_int);
				PlayAnimation("all", var_56_string);
				WaitForAnimEnd(var_26_bool);
				var_58_bool = var_26_bool == 0; //@nz
				if(var_58_bool == 0) goto Label_697;
				goto Label_708;
		}
		Label_697:
			var_49_bool = 0;
			func_711(var_49_bool);
			var_50_bool = var_49_bool == 0; //@nz
			if(var_50_bool != 0) {
				goto Label_708;
			}
			ResetAAS();
			var_22_int = var_22_int + (int)1;
			goto Label_656;

		}
	}
Label_708:
	ResetAAS();
	return 12;
	
}


func_259(var_0_object, var_268_int, var_269_object)
{
	var_271_object = Obj(); var_272_bool = 0; var_273_int = 0; var_274_bool = 0; var_275_object = Obj(); var_276_bool = 0; var_277_int = 0; var_278_bool = 0;
	var_0_object = var_269_object;
	var_279_bool = 0; var_280_object = Obj(); var_281_float = 0;
	var_269_object = var_280_object;
	func_750(var_279_bool, var_280_object, (float)70.0);
	var_282_bool = var_279_bool == 0; //@nz
	if(var_282_bool != 0) {
		var_268_int = -2;
		return 8;
	}
	CreateDialog(var_275_object);
	var_283_int = 0;
	func_1085(var_283_int);
	@@var_275_object:SetNPCName(var_283_int);
	var_284_int = 0;
	func_1083(var_284_int);
	@@var_275_object:SetNPCDescription(var_284_int);
	var_285_string = "";
	func_1087(var_285_string);
	@@var_275_object:SetPhoto(var_285_string);
	var_286_string = "";
	func_1089(var_286_string);
	@@var_275_object:SetPhoto2(var_286_string);
	var_287_int = 0;
	func_1093(var_287_int);
	@@var_275_object:SetPlayerName(var_287_int);
	IsOverrideActive(var_276_bool);
	var_288_bool = var_276_bool;
	if(var_288_bool != 0) {
		var_268_int = -2;
		return 8;
	}
	DoDialog(var_275_object);
	var_289_bool = 0; var_290_object = Obj();
	func_1028(Obj());
	var_291_object = var_290_object;
	func_837(var_289_bool, var_290_object);
	var_292_object = Obj(); var_293_object = Obj();
	var_269_object = var_292_object;
	var_275_object = var_293_object;
	TaskCall(3);
	func_340(var_294_object, var_295_object, var_296_string, var_297_bool, var_292_object, var_293_object);
	TaskReturn();
	@@var_275_object:IsDialogEnd(var_278_bool);
	
Label_322:
	var_322_bool = var_278_bool == 0; //@nz
	if(var_322_bool != 0) {
		sync();
		@@var_275_object:IsDialogEnd(var_278_bool);
		goto Label_322;
	}
	var_269_object = Obj();
	func_819();
	StopDialog(var_275_object);
	@@var_275_object:GetReturnValue((int)-1);
	var_277_int = var_268_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1028(var_117_object)
{
	var_118_object = Obj(); var_119_object = Obj();
	self(var_119_object);
	var_119_object = var_117_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_522()
{
	var_326_float = 0; var_327_float = 0;
	rand(var_327_float, (int)8, (int)16);
	SetTimer((int)10, var_327_float);
	return 2;
}


func_1034(var_81_cvector, var_82_cvector)
{
	var_84_float = 0; var_85_float = 0;
	var_86_int = var_82_cvector | var_82_cvector;
	var_85_float = sqrt(var_86_int);
	var_87_float = 9.999999974752427e-07;
	var_88_bool = var_85_float < var_87_float;
	if(var_88_bool != 0) {
		var_81_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_81_cvector = var_82_cvector / var_85_float;
	return 2;
}


func_398(var_2_object, var_299_string)
{
	var_300_bool = 0;
	func_1091(var_300_bool);
	var_301_bool = var_300_bool == 0; //@nz
	if(var_301_bool != 0) {
		return 0;
	}
	var_302_bool = var_299_string == var_2_object;
	if(var_302_bool != 0) {
		return 0;
	}
	var_303_string = ""; var_304_bool = 0;
	var_299_string = var_303_string;
	var_306_bool = var_299_string == "";
	if(var_306_bool != 0) {
		var_304_bool = 0;
	} else {
		var_304_bool = 1;
	}
	func_991(var_303_string, var_304_bool);
	var_2_object = var_299_string;
	return 0;
	
}


func_144(var_2_object, var_212_string)
{
	var_213_bool = 0;
	func_1091(var_213_bool);
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
	func_991(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	return 0;
	
}


func_531()
{
	KillTimer((int)10);
	return 0;
}


func_1044(var_36_int)
{
	var_37_float = 0; var_38_float = 0;
	GetGameTime(var_38_float);
	var_40_int = 0;
	var_40_int = var_38_float / (int)24;
	var_36_int = (int)1 + var_40_int;
	return 2;
}


func_1053(var_34_bool, var_35_int)
{
	var_36_int = 0;
	func_1044(var_36_int);
	var_34_bool = var_36_int == var_35_int;
	return 0;
}


func_1059(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = "";
	var_39_int = var_36_int;
	if(var_39_int != 0) {
		"idle" = "idle" + var_36_int;
	}
	var_38_string = var_35_string;
	return 2;
}


func_932(var_157_bool, var_158_object)
{
	var_159_string = ""; var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_string = ""; var_164_string = ""; var_165_int = 0; var_166_bool = 0; var_167_int = 0; var_168_string = "";
	var_170_int = 0;
	func_1044(var_170_int);
	var_171_int = "d" + var_170_int;
	var_164_string = var_171_int + "m";
	var_165_int = 0;
	
Label_941:
	if((int)1 != 0) {
		var_175_int = var_165_int + (int)1;
		var_176_int = var_164_string + var_175_int;
		@@var_158_object:HasProperty(var_176_int, var_166_bool);
		var_177_bool = var_166_bool == 0; //@nz
		if(var_177_bool != 0) {
		} else {
			var_165_int = var_165_int + (int)1;
			goto Label_941;
		}
	}
	var_178_bool = var_165_int == 0; //@nz
	if(var_178_bool != 0) {
		var_157_bool = 0;
		return 10;
	}
	var_167_int = 0;
	var_180_bool = var_165_int > (int)1;
	if(var_180_bool != 0) {
		irand(var_167_int, var_165_int);
	}
	var_182_int = var_167_int + (int)1;
	var_183_int = var_164_string + var_182_int;
	@@var_158_object:GetProperty(var_183_int, var_168_string);
	var_184_bool = 0; var_185_string = "";
	var_168_string = var_185_string;
	func_1006(var_184_bool, var_185_string);
	var_184_bool = var_157_bool;
	return 10;
	
}


func_1066(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_1068:
	var_35_string = ""; var_36_int = 0;
	var_32_int = var_36_int;
	func_1059(var_35_string, var_36_int);
	HasAnimation(var_33_bool, "all", var_35_string);
	var_40_bool = var_33_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_1068;
	}
	var_32_int = var_29_int;
	return 4;
	
}


func_819()
{
	var_259_bool = 0; var_260_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_262_bool = 0;
	func_1091(var_262_bool);
	if(var_262_bool != 0) {
	} else {
		HasAnimationTrack(var_260_bool, "head");
		var_264_bool = var_260_bool;
		if(var_264_bool == 0) goto Label_836;
		UnlookAsync("head");
	}
Label_836:
	return 2;
	
}


func_1083(var_103_int)
{
	var_103_int = 515551;
	return 0;
}


func_1085(var_102_int)
{
	var_102_int = 502876;
	return 0;
}


func_1087(var_104_string)
{
	var_104_string = "ui/NPC_Rubin.png";
	return 0;
}


func_1089(var_105_string)
{
	var_105_string = "ui/NPC_Rubin_b.png";
	return 0;
}


func_1091(var_97_bool)
{
	var_97_bool = 1;
	return 0;
}


func_1093(var_106_int)
{
	var_107_int = 0; var_108_int = 0;
	GetVariable("branch", var_108_int);
	var_111_bool = var_108_int == (int)0;
	if(var_111_bool != 0) {
		var_106_int = 1;
		return 2;
	EMIT "GOTO 0x454";
	}
	var_113_bool = var_108_int == (int)1;
	if(var_113_bool != 0) {
		var_106_int = 2;
		return 2;
	}
	var_106_int = 3;
	return 2;
}


func_837(var_115_bool, var_116_object)
{
	var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_int = 0;
	GetVariable("voice_common", var_122_int);
	var_125_int = var_122_int;
	if(var_125_int != 0) {
		var_126_bool = 0; var_127_object = Obj();
		var_116_object = var_127_object;
		func_895(var_126_bool, var_127_object);
		var_156_bool = var_126_bool == 0; //@nz
		if(var_156_bool != 0) {
			var_157_bool = 0; var_158_object = Obj();
			var_116_object = var_158_object;
			func_932(var_157_bool, var_158_object);
			var_187_bool = var_157_bool == 0; //@nz
			if(var_187_bool != 0) {
				var_115_bool = 0;
				return 4;
			}
		}
		irand(var_123_int, (int)2);
		var_189_int = var_123_int;
		if(var_189_int != 0) {
			var_192_int = var_122_int + (int)1;
			var_194_int = var_192_int % (int)3;
			SetVariable("voice_common", var_194_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_197_bool = 0; var_198_object = Obj();
		var_116_object = var_198_object;
		func_932(var_197_bool, var_198_object);
		var_199_bool = var_197_bool == 0; //@nz
		if(var_199_bool != 0) {
			var_200_bool = 0; var_201_object = Obj();
			var_116_object = var_201_object;
			func_895(var_200_bool, var_201_object);
			var_202_bool = var_200_bool == 0; //@nz
			if(var_202_bool != 0) {
				var_115_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_893;
	
Label_893:
	var_115_bool = 1;
	return 4;
	
}


func_711(var_49_bool)
{
	var_49_bool = 1;
	return 0;
}


func_713()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_718(var_26_float, var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	GetPosition(var_31_cvector);
	@@var_27_object:GetPosition(var_32_cvector);
	var_33_cvector = var_32_cvector - var_31_cvector;
	var_26_float = var_33_cvector | var_33_cvector;
	return 6;
}


func_975(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0;
	lshHasAnimation(var_245_bool, var_241_string);
	var_248_bool = var_245_bool;
	if(var_248_bool != 0) {
		lshGetAnimTimes(var_241_string, var_246_float, var_247_float);
		lshPlayAnimation(var_246_float, var_247_float, (bool)0);
	} else {
		var_251_int = "Can't find lsh animation : " + var_241_string;
		Trace(var_251_int);
	}
	return 6;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_205_object, var_206_object)
{
	var_0_object = var_206_object;
	var_1_object = var_205_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_212_string = "";
		func_144(var_206_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_239_bool = 0;
	func_1091(var_239_bool);
	if(var_239_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_240_string = var_3_string;
		if(var_240_string != 0) {
		} else {
			var_241_string = "";
			var_241_string = var_2_object;
			func_975(var_241_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_254_string = var_3_string;
		if(var_254_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_466(var_0_object)
{
	var_11_bool = 0;
	func_745(var_11_bool);
	var_14_bool = var_11_bool == 0; //@nz
	if(var_14_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_475:
	func_642();
	goto Label_475;
}
EMIT "Return(); Pop(0)";


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_292_object, var_293_object)
{
	var_0_object = var_293_object;
	var_1_object = var_292_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_299_string = "";
		func_398(var_293_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_368;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x158";
	}
Label_368:
	var_314_bool = 0;
	func_1091(var_314_bool);
	if(var_314_bool != 0) {

	Label_372:
		lshWaitForAnimEnd();
		var_315_string = var_3_string;
		if(var_315_string != 0) {
		} else {
			var_316_string = "";
			var_316_string = var_2_object;
			func_975(var_316_string);
			goto Label_372;
	}
		PlayAnimation("all", "idle");

	Label_387:
		WaitForAnimEnd();
		var_319_string = var_3_string;
		if(var_319_string != 0) {
			goto Label_397;
		}
		PlayAnimation("all", "idle");
		goto Label_387;
	}
	goto Label_397;
	
Label_397:
	return 0;
	
}


func_1110(var_29_object)
{
	var_30_int = 0; var_31_int = 0;
	GetVariable("d12_rubin", var_31_int);
	var_33_bool = 0;
	var_33_bool = 0;
	var_34_bool = 0; var_35_int = 0;
	func_1053(var_34_bool, (int)12);
	if(var_34_bool != 0) {
		var_42_bool = var_31_int == 0; //@nz
		if(var_42_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_43_int = 0; var_44_object = Obj();
		var_29_object = var_44_object;
		TaskCall(0);
		func_0(var_45_object, var_43_int, var_44_object);
		TaskReturn();
		SetVariable("d12_rubin", (int)1);
		return 2;
	}
	var_268_int = 0; var_269_object = Obj();
	var_29_object = var_269_object;
	TaskCall(2);
	func_259(var_270_object, var_268_int, var_269_object);
	TaskReturn();
	return 2;
}


func_726(var_19_bool, var_20_cvector)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0;
	GetPosition(var_24_cvector);
	var_25_cvector = var_20_cvector - var_24_cvector;
	var_27_float = GetByIndex(var_25_cvector, 0);
	var_28_float = GetByIndex(var_25_cvector, 2);
	Rotate(var_27_float, var_28_float, var_26_bool);
	var_26_bool = var_19_bool;
	return 6;
}


func_991(var_216_string, var_217_bool)
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


func_736(var_15_bool, var_16_object)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	@@var_16_object:GetPosition(var_18_cvector);
	var_19_bool = 0; var_20_cvector = CVector(0,0,0);
	var_18_cvector = var_20_cvector;
	func_726(var_19_bool, var_20_cvector);
	var_19_bool = var_15_bool;
	return 2;
}


func_480(var_36_bool)
{
	var_37_object = Obj(); var_38_object = Obj();
	FindActor(var_38_object, "player");
	var_40_bool = var_38_object == 0; //@nz
	if(var_40_bool != 0) {
		var_36_bool = 0;
		return 2;
	}
	var_41_bool = 0; var_42_object = Obj();
	var_38_object = var_42_object;
	func_736(var_41_bool, var_42_object);
	var_41_bool = var_36_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_745(var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0;
	IsLoaded(var_13_bool);
	var_13_bool = var_11_bool;
	return 2;
}


func_750(var_54_bool, var_55_object, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0;
	@@var_55_object:GetPosition(var_67_cvector);
	@@var_55_object:GetEyesHeight(var_66_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_66_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	GetPosition(var_68_cvector);
	GetEyesHeight(var_66_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	var_76_float = var_76_float + var_66_float;
	SetByIndex(var_68_cvector, 1) = var_76_float;
	var_69_cvector = var_67_cvector - var_68_cvector;
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (float)0;
	var_78_int = var_69_cvector | var_69_cvector;
	var_79_float = sqrt(var_78_int);
	var_69_cvector = var_69_cvector / var_79_float;
	var_70_cvector = -var_69_cvector;
	var_80_float = var_69_cvector * var_56_float;
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	var_82_cvector = var_70_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1034(var_81_cvector, var_82_cvector);
	var_90_float = var_81_cvector * (int)25;
	var_91_int = var_80_float + var_90_float;
	var_71_cvector = var_91_int - CVector(0.0, 10.0, 0.0);
	var_72_cvector = var_68_cvector + var_71_cvector;
	IsOverrideActive(var_73_bool);
	var_93_bool = var_73_bool;
	if(var_93_bool != 0) {
		var_54_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_72_cvector, var_70_cvector, (bool)1);
	var_95_float = GetByIndex(var_71_cvector, 0);
	var_96_float = GetByIndex(var_71_cvector, 2);
	Rotate(var_95_float, var_96_float);
	var_97_bool = 0;
	func_1091(var_97_bool);
	if(var_97_bool != 0) {
	} else {
		HasAnimationTrack(var_74_bool, "head");
		var_99_bool = var_74_bool;
		if(var_99_bool == 0) goto Label_813;
		LookAsyncCamera("head");
	}
Label_813:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_54_bool = 1;
	return 18;
	
}


func_495(var_0_object)
{
	var_88_float = GetByIndex(var_0_object, 0);
	var_89_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_88_float, var_89_float);
	return 0;
}


func_1006(var_149_bool, var_150_string)
{
	var_151_bool = 0; var_152_bool = 0;
	var_153_bool = 0;
	func_1091(var_153_bool);
	if(var_153_bool != 0) {
		lshHasSpeech(var_152_bool, var_150_string);
		var_154_bool = var_152_bool;
		if(var_154_bool != 0) {
			lshPlaySpeech(var_150_string);
			var_149_bool = 1;
			return 2;
		}
	}
	var_149_bool = 0;
	return 2;
}


func_500(var_19_bool)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0;
	FindActor(var_22_object, "player");
	var_25_bool = var_22_object == 0; //@nz
	if(var_25_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	var_26_float = 0; var_27_object = Obj();
	var_22_object = var_27_object;
	func_718(var_26_float, var_27_object);
	var_35_bool = var_26_float > (float)90000.0;
	if(var_35_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	CanSee(var_23_bool, var_22_object);
	var_23_bool = var_19_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1021()
{
	var_14_bool = 0;
	func_1091(var_14_bool);
	if(var_14_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_895(var_126_bool, var_127_object)
{
	var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; var_133_string = ""; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_string = "";
	var_133_string = "c";
	var_134_int = 0;
	
Label_898:
	if((int)1 != 0) {
		var_140_int = var_134_int + (int)1;
		var_141_int = var_133_string + var_140_int;
		@@var_127_object:HasProperty(var_141_int, var_135_bool);
		var_142_bool = var_135_bool == 0; //@nz
		if(var_142_bool != 0) {
		} else {
			var_134_int = var_134_int + (int)1;
			goto Label_898;
		}
	}
	var_143_bool = var_134_int == 0; //@nz
	if(var_143_bool != 0) {
		var_126_bool = 0;
		return 10;
	}
	var_136_int = 0;
	var_145_bool = var_134_int > (int)1;
	if(var_145_bool != 0) {
		irand(var_136_int, var_134_int);
	}
	var_147_int = var_136_int + (int)1;
	var_148_int = var_133_string + var_147_int;
	@@var_127_object:GetProperty(var_148_int, var_137_string);
	var_149_bool = 0; var_150_string = "";
	var_137_string = var_150_string;
	func_1006(var_149_bool, var_150_string);
	var_149_bool = var_126_bool;
	return 10;
	
}


