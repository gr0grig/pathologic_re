// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Declaim|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Neutral|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:Can't find lsh animation : |W:ui/NPC_Mark.png|W:ui/NPC_Mark_b.png|W:branch|W:mt_mark|W:d12_mark
// @GLOBALS: 0:object:
// @RUN_OP: 0x2c2
// @RUN_TASK: 6
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x19a vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x298 vars=int,int
// @TASK_6: vars=cvector params=0
// @EVENT_7: op=0x30b vars=int
// @EVENT_6: op=0x331 vars=
// @EVENT_5: op=0x340 vars=
// @EVENT_45: op=0x34d vars=bool
// @EVENT_0: op=0x359 vars=object
// @PE: 0x51,0x8b,0xa1,0x145,0x184,0x19a,0x248,0x282,0x298,0x2c2,0x30b,0x331,0x34d,0x511

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	if((int)1 != 0) {
		func_1265();
		var_21_bool = var_16_bool == (int)21972;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_139(var_17_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)520759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520760, (int)21974, (int)21973);
			@@@var_0_object:AddReply((int)520766, (int)21976, (int)21979);
			return 0;
		}
		var_47_bool = var_16_bool == (int)21974;
		if(var_47_bool != 0) {
			var_48_string = "";
			func_139(var_17_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)520761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520762, (int)21976, (int)21975);
			return 0;
		}
		var_54_bool = var_16_bool == (int)21976;
		if(var_54_bool != 0) {
			var_55_string = "";
			func_139(var_17_cvector, "Declaim");
			@@@var_0_object:SetMessage((int)520763);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520764, (int)-1, (int)21977);
			@@@var_0_object:AddReply((int)520765, (int)-1, (int)21978);
			return 0;
		}
		var_3_string = true;
		var_63_bool = 0;
		func_1335(var_63_bool);
		if(var_63_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	if((int)1 != 0) {
		func_1265();
		var_21_bool = var_16_bool == (int)36906;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_388(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_50_bool = var_16_bool == (int)36953;
		if(var_50_bool != 0) {
			var_51_string = "";
			func_388(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_60_bool = var_16_bool == (int)36957;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_388(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_69_bool = 0;
		func_1335(var_69_bool);
		if(var_69_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x19b";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_cvector)
{
	if((int)1 != 0) {
		func_1265();
		var_21_bool = var_16_int == (int)42563;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_642(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_46_bool = 0;
		func_1335(var_46_bool);
		if(var_46_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x299";
	
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_int)
{
	var_18_bool = var_16_int == (int)10;
	if(var_18_bool != 0) {
		func_775();
		var_20_bool = 0;
		var_20_bool = 0;
		var_21_bool = 0;
		func_989(var_21_bool);
		if(var_21_bool != 0) {
			var_24_bool = 0;
			func_744(var_24_bool);
			if(var_24_bool != 0) {
				var_20_bool = 1;
			}
		}
		if(var_20_bool != 0) {
			var_41_bool = 0;
			func_724(var_41_bool);
			if(var_41_bool != 0) {
				var_60_bool = 0; var_61_object = Obj();
				func_1272(Obj());
				var_62_object = var_61_object;
				func_1139(var_60_bool, var_61_object);
			}
		} else {
			func_739(var_16_int);
			func_766();
		}
	}
	return 0;
	
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_957();
	func_775();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	StopGroup0();
	func_775();
	var_17_string = "";
	func_1219("Neutral");
	func_766();
	return 0;
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		func_766();
	} else {
		var_23_string = "";
		func_1219("Neutral");
	}
	return 0;
	
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	IsOverrideActive(var_18_bool);
	var_19_bool = var_18_bool == 0; //@nz
	if(var_19_bool != 0) {
		EventDisable(0);
		func_957();
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_980(var_20_bool, var_21_object);
		EventEnable(0);
		var_34_object = Obj();
		var_16_object = var_34_object;
		func_1354(var_34_object);
		var_391_string = "";
		func_1219("Neutral");
		func_775();
		func_766();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_710(var_15_cvector);
	return 0;
}


func_0(var_0_object, var_41_int, var_42_object)
{
	var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0;
	var_0_object = var_42_object;
	var_52_bool = 0; var_53_object = Obj(); var_54_float = 0;
	var_42_object = var_53_object;
	func_994(var_52_bool, var_53_object, (float)70.0);
	var_99_bool = var_52_bool == 0; //@nz
	if(var_99_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	CreateDialog(var_48_object);
	var_100_int = 0;
	func_1329(var_100_int);
	@@var_48_object:SetNPCName(var_100_int);
	var_101_int = 0;
	func_1327(var_101_int);
	@@var_48_object:SetNPCDescription(var_101_int);
	var_102_string = "";
	func_1331(var_102_string);
	@@var_48_object:SetPhoto(var_102_string);
	var_103_string = "";
	func_1333(var_103_string);
	@@var_48_object:SetPhoto2(var_103_string);
	var_104_int = 0;
	func_1337(var_104_int);
	@@var_48_object:SetPlayerName(var_104_int);
	IsOverrideActive(var_49_bool);
	var_112_bool = var_49_bool;
	if(var_112_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	DoDialog(var_48_object);
	var_113_bool = 0; var_114_object = Obj();
	func_1272(Obj());
	var_115_object = var_114_object;
	func_1081(var_113_bool, var_114_object);
	var_208_object = Obj(); var_209_object = Obj();
	var_42_object = var_208_object;
	var_48_object = var_209_object;
	TaskCall(1);
	func_81(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	@@var_48_object:IsDialogEnd(var_51_bool);
	
Label_63:
	var_257_bool = var_51_bool == 0; //@nz
	if(var_257_bool != 0) {
		sync();
		@@var_48_object:IsDialogEnd(var_51_bool);
		goto Label_63;
	}
	var_42_object = Obj();
	func_1063();
	StopDialog(var_48_object);
	@@var_48_object:GetReturnValue((int)-1);
	var_50_int = var_41_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_642(var_2_object, var_366_string)
{
	var_367_bool = 0;
	func_1335(var_367_bool);
	var_368_bool = var_367_bool == 0; //@nz
	if(var_368_bool != 0) {
		return 0;
	}
	var_369_bool = var_366_string == var_2_object;
	if(var_369_bool != 0) {
		return 0;
	}
	var_370_string = ""; var_371_bool = 0;
	var_366_string = var_370_string;
	var_373_bool = var_366_string == "";
	if(var_373_bool != 0) {
		var_371_bool = 0;
	} else {
		var_371_bool = 1;
	}
	func_1235(var_370_string, var_371_bool);
	var_2_object = var_366_string;
	return 0;
	
}


func_388(var_2_object, var_305_string)
{
	var_306_bool = 0;
	func_1335(var_306_bool);
	var_307_bool = var_306_bool == 0; //@nz
	if(var_307_bool != 0) {
		return 0;
	}
	var_308_bool = var_305_string == var_2_object;
	if(var_308_bool != 0) {
		return 0;
	}
	var_309_string = ""; var_310_bool = 0;
	var_305_string = var_309_string;
	var_312_bool = var_305_string == "";
	if(var_312_bool != 0) {
		var_310_bool = 0;
	} else {
		var_310_bool = 1;
	}
	func_1235(var_309_string, var_310_bool);
	var_2_object = var_305_string;
	return 0;
	
}


func_775()
{
	KillTimer((int)10);
	return 0;
}


func_1288(var_168_int)
{
	var_169_float = 0; var_170_float = 0;
	GetGameTime(var_170_float);
	var_172_int = 0;
	var_172_int = var_170_float / (int)24;
	var_168_int = (int)1 + var_172_int;
	return 2;
}


func_139(var_2_object, var_215_string)
{
	var_216_bool = 0;
	func_1335(var_216_bool);
	var_217_bool = var_216_bool == 0; //@nz
	if(var_217_bool != 0) {
		return 0;
	}
	var_218_bool = var_215_string == var_2_object;
	if(var_218_bool != 0) {
		return 0;
	}
	var_219_string = ""; var_220_bool = 0;
	var_215_string = var_219_string;
	var_222_bool = var_215_string == "";
	if(var_222_bool != 0) {
		var_220_bool = 0;
	} else {
		var_220_bool = 1;
	}
	func_1235(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	return 0;
	
}


func_766()
{
	var_393_float = 0; var_394_float = 0;
	rand(var_394_float, (int)8, (int)16);
	SetTimer((int)10, var_394_float);
	return 2;
}


func_1297(var_270_bool, var_271_int)
{
	var_272_int = 0;
	func_1288(var_272_int);
	var_270_bool = var_272_int == var_271_int;
	return 0;
}


func_1303(var_40_string, var_41_int)
{
	var_42_string = ""; var_43_string = "";
	var_44_int = var_41_int;
	if(var_44_int != 0) {
		"idle" = "idle" + var_41_int;
	}
	var_43_string = var_40_string;
	return 2;
}


func_1176(var_155_bool, var_156_object)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = "";
	var_168_int = 0;
	func_1288(var_168_int);
	var_174_int = "d" + var_168_int;
	var_162_string = var_174_int + "m";
	var_163_int = 0;
	
Label_1185:
	if((int)1 != 0) {
		var_178_int = var_163_int + (int)1;
		var_179_int = var_162_string + var_178_int;
		@@var_156_object:HasProperty(var_179_int, var_164_bool);
		var_180_bool = var_164_bool == 0; //@nz
		if(var_180_bool != 0) {
		} else {
			var_163_int = var_163_int + (int)1;
			goto Label_1185;
		}
	}
	var_181_bool = var_163_int == 0; //@nz
	if(var_181_bool != 0) {
		var_155_bool = 0;
		return 10;
	}
	var_165_int = 0;
	var_183_bool = var_163_int > (int)1;
	if(var_183_bool != 0) {
		irand(var_165_int, var_163_int);
	}
	var_185_int = var_165_int + (int)1;
	var_186_int = var_162_string + var_185_int;
	@@var_156_object:GetProperty(var_186_int, var_166_string);
	var_187_bool = 0; var_188_string = "";
	var_166_string = var_188_string;
	func_1250(var_187_bool, var_188_string);
	var_187_bool = var_155_bool;
	return 10;
	
}


func_1310(var_34_int)
{
	var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_bool = 0;
	var_37_int = 0;
	
Label_1312:
	var_40_string = ""; var_41_int = 0;
	var_37_int = var_41_int;
	func_1303(var_40_string, var_41_int);
	HasAnimation(var_38_bool, "all", var_40_string);
	var_45_bool = var_38_bool == 0; //@nz
	if(var_45_bool != 0) {
	} else {
		var_37_int = var_37_int + (int)1;
		goto Label_1312;
	}
	var_37_int = var_34_int;
	return 4;
	
}


func_1063()
{
	var_259_bool = 0; var_260_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_262_bool = 0;
	func_1335(var_262_bool);
	if(var_262_bool != 0) {
	} else {
		HasAnimationTrack(var_260_bool, "head");
		var_264_bool = var_260_bool;
		if(var_264_bool == 0) goto Label_1080;
		UnlookAsync("head");
	}
Label_1080:
	return 2;
	
}


func_1327(var_101_int)
{
	var_101_int = 515544;
	return 0;
}


func_1329(var_100_int)
{
	var_100_int = 502869;
	return 0;
}


func_1331(var_102_string)
{
	var_102_string = "ui/NPC_Mark.png";
	return 0;
}


func_1333(var_103_string)
{
	var_103_string = "ui/NPC_Mark_b.png";
	return 0;
}


func_1335(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_1337(var_104_int)
{
	var_105_int = 0; var_106_int = 0;
	GetVariable("branch", var_106_int);
	var_109_bool = var_106_int == (int)0;
	if(var_109_bool != 0) {
		var_104_int = 1;
		return 2;
	EMIT "GOTO 0x548";
	}
	var_111_bool = var_106_int == (int)1;
	if(var_111_bool != 0) {
		var_104_int = 2;
		return 2;
	}
	var_104_int = 3;
	return 2;
}


func_1081(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0;
	GetVariable("voice_common", var_120_int);
	var_123_int = var_120_int;
	if(var_123_int != 0) {
		var_124_bool = 0; var_125_object = Obj();
		var_114_object = var_125_object;
		func_1139(var_124_bool, var_125_object);
		var_154_bool = var_124_bool == 0; //@nz
		if(var_154_bool != 0) {
			var_155_bool = 0; var_156_object = Obj();
			var_114_object = var_156_object;
			func_1176(var_155_bool, var_156_object);
			var_190_bool = var_155_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_113_bool = 0;
				return 4;
			}
		}
		irand(var_121_int, (int)2);
		var_192_int = var_121_int;
		if(var_192_int != 0) {
			var_195_int = var_120_int + (int)1;
			var_197_int = var_195_int % (int)3;
			SetVariable("voice_common", var_197_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_200_bool = 0; var_201_object = Obj();
		var_114_object = var_201_object;
		func_1176(var_200_bool, var_201_object);
		var_202_bool = var_200_bool == 0; //@nz
		if(var_202_bool != 0) {
			var_203_bool = 0; var_204_object = Obj();
			var_114_object = var_204_object;
			func_1139(var_203_bool, var_204_object);
			var_205_bool = var_203_bool == 0; //@nz
			if(var_205_bool != 0) {
				var_113_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1137;
	
Label_1137:
	var_113_bool = 1;
	return 4;
	
}


func_955(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_957()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_962(var_31_float, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	GetPosition(var_36_cvector);
	@@var_32_object:GetPosition(var_37_cvector);
	var_38_cvector = var_37_cvector - var_36_cvector;
	var_31_float = var_38_cvector | var_38_cvector;
	return 6;
}


func_1219(var_241_string)
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


func_325(var_0_object, var_1_object, var_2_object, var_3_string, var_298_object, var_299_object)
{
	var_0_object = var_299_object;
	var_1_object = var_298_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_305_string = "";
		func_388(var_299_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_358;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x149";
	}
Label_358:
	var_323_bool = 0;
	func_1335(var_323_bool);
	if(var_323_bool != 0) {

	Label_362:
		lshWaitForAnimEnd();
		var_324_string = var_3_string;
		if(var_324_string != 0) {
		} else {
			var_325_string = "";
			var_325_string = var_2_object;
			func_1219(var_325_string);
			goto Label_362;
	}
		PlayAnimation("all", "idle");

	Label_377:
		WaitForAnimEnd();
		var_328_string = var_3_string;
		if(var_328_string != 0) {
			goto Label_387;
		}
		PlayAnimation("all", "idle");
		goto Label_377;
	}
	goto Label_387;
	
Label_387:
	return 0;
	
}


func_710(var_0_object)
{
	var_16_bool = 0;
	func_989(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_719:
	func_886();
	goto Label_719;
}
EMIT "Return(); Pop(0)";


func_584(var_0_object, var_1_object, var_2_object, var_3_string, var_359_object, var_360_object)
{
	var_0_object = var_360_object;
	var_1_object = var_359_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_366_string = "";
		func_642(var_360_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_612;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24c";
	}
Label_612:
	var_381_bool = 0;
	func_1335(var_381_bool);
	if(var_381_bool != 0) {

	Label_616:
		lshWaitForAnimEnd();
		var_382_string = var_3_string;
		if(var_382_string != 0) {
		} else {
			var_383_string = "";
			var_383_string = var_2_object;
			func_1219(var_383_string);
			goto Label_616;
	}
		PlayAnimation("all", "idle");

	Label_631:
		WaitForAnimEnd();
		var_386_string = var_3_string;
		if(var_386_string != 0) {
			goto Label_641;
		}
		PlayAnimation("all", "idle");
		goto Label_631;
	}
	goto Label_641;
	
Label_641:
	return 0;
	
}


func_1354(var_34_object)
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0;
	GetVariable("mt_mark", var_37_int);
	var_40_bool = var_37_int == 0; //@nz
	if(var_40_bool != 0) {
		var_41_int = 0; var_42_object = Obj();
		var_34_object = var_42_object;
		TaskCall(0);
		func_0(var_43_object, var_41_int, var_42_object);
		TaskReturn();
		SetVariable("mt_mark", (int)1);
	}
	GetVariable("d12_mark", var_38_int);
	var_269_bool = 0;
	var_269_bool = 0;
	var_270_bool = 0; var_271_int = 0;
	func_1297(var_270_bool, (int)12);
	if(var_270_bool != 0) {
		var_273_bool = var_38_int == 0; //@nz
		if(var_273_bool != 0) {
			var_269_bool = 1;
		}
	}
	if(var_269_bool != 0) {
		var_274_int = 0; var_275_object = Obj();
		var_34_object = var_275_object;
		TaskCall(2);
		func_244(var_276_object, var_274_int, var_275_object);
		TaskReturn();
		SetVariable("d12_mark", (int)1);
		return 4;
	}
	var_335_int = 0; var_336_object = Obj();
	var_34_object = var_336_object;
	TaskCall(4);
	func_503(var_337_object, var_335_int, var_336_object);
	TaskReturn();
	return 4;
}


func_970(var_24_bool, var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0;
	GetPosition(var_29_cvector);
	var_30_cvector = var_25_cvector - var_29_cvector;
	var_32_float = GetByIndex(var_30_cvector, 0);
	var_33_float = GetByIndex(var_30_cvector, 2);
	Rotate(var_32_float, var_33_float, var_31_bool);
	var_31_bool = var_24_bool;
	return 6;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_208_object, var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_215_string = "";
		func_139(var_209_object, "Declaim");
		@@@var_0_object:SetMessage((int)520759);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520760, (int)21974, (int)21973);
		@@@var_0_object:AddReply((int)520766, (int)21976, (int)21979);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_239_bool = 0;
	func_1335(var_239_bool);
	if(var_239_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_240_string = var_3_string;
		if(var_240_string != 0) {
		} else {
			var_241_string = "";
			var_241_string = var_2_object;
			func_1219(var_241_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_254_string = var_3_string;
		if(var_254_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_1235(var_219_string, var_220_bool)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0;
	lshHasAnimation(var_226_bool, var_219_string);
	var_229_bool = var_226_bool;
	if(var_229_bool != 0) {
		lshGetAnimTimes(var_219_string, var_227_float, var_228_float);
		lshPlayAnimation(var_227_float, var_228_float, var_220_bool);
	} else {
		var_231_int = "Can't find lsh animation : " + var_219_string;
		Trace(var_231_int);
	}
	return 6;
	
}


func_980(var_20_bool, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	@@var_21_object:GetPosition(var_23_cvector);
	var_24_bool = 0; var_25_cvector = CVector(0,0,0);
	var_23_cvector = var_25_cvector;
	func_970(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
	return 2;
}


func_724(var_41_bool)
{
	var_42_object = Obj(); var_43_object = Obj();
	FindActor(var_43_object, "player");
	var_45_bool = var_43_object == 0; //@nz
	if(var_45_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	var_46_bool = 0; var_47_object = Obj();
	var_43_object = var_47_object;
	func_980(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_989(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
	return 2;
}


func_994(var_52_bool, var_53_object, var_54_float)
{
	var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_bool = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0;
	@@var_53_object:GetPosition(var_65_cvector);
	@@var_53_object:GetEyesHeight(var_64_float);
	var_73_float = GetByIndex(var_65_cvector, 1);
	var_73_float = var_73_float + var_64_float;
	SetByIndex(var_65_cvector, 1) = var_73_float;
	GetPosition(var_66_cvector);
	GetEyesHeight(var_64_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	var_74_float = var_74_float + var_64_float;
	SetByIndex(var_66_cvector, 1) = var_74_float;
	var_67_cvector = var_65_cvector - var_66_cvector;
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (float)0;
	var_76_int = var_67_cvector | var_67_cvector;
	var_77_float = sqrt(var_76_int);
	var_67_cvector = var_67_cvector / var_77_float;
	var_68_cvector = -var_67_cvector;
	var_78_float = var_67_cvector * var_54_float;
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0);
	var_80_cvector = var_68_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1278(var_79_cvector, var_80_cvector);
	var_88_float = var_79_cvector * (int)25;
	var_89_int = var_78_float + var_88_float;
	var_69_cvector = var_89_int - CVector(0.0, 10.0, 0.0);
	var_70_cvector = var_66_cvector + var_69_cvector;
	IsOverrideActive(var_71_bool);
	var_91_bool = var_71_bool;
	if(var_91_bool != 0) {
		var_52_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_70_cvector, var_68_cvector, (bool)1);
	var_93_float = GetByIndex(var_69_cvector, 0);
	var_94_float = GetByIndex(var_69_cvector, 2);
	Rotate(var_93_float, var_94_float);
	var_95_bool = 0;
	func_1335(var_95_bool);
	if(var_95_bool != 0) {
	} else {
		HasAnimationTrack(var_72_bool, "head");
		var_97_bool = var_72_bool;
		if(var_97_bool == 0) goto Label_1057;
		LookAsyncCamera("head");
	}
Label_1057:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_52_bool = 1;
	return 18;
	
}


func_739(var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_93_float, var_94_float);
	return 0;
}


func_1250(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0;
	var_151_bool = 0;
	func_1335(var_151_bool);
	if(var_151_bool != 0) {
		lshHasSpeech(var_150_bool, var_148_string);
		var_152_bool = var_150_bool;
		if(var_152_bool != 0) {
			lshPlaySpeech(var_148_string);
			var_147_bool = 1;
			return 2;
		}
	}
	var_147_bool = 0;
	return 2;
}


func_744(var_24_bool)
{
	var_25_object = Obj(); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0;
	FindActor(var_27_object, "player");
	var_30_bool = var_27_object == 0; //@nz
	if(var_30_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	var_31_float = 0; var_32_object = Obj();
	var_27_object = var_32_object;
	func_962(var_31_float, var_32_object);
	var_40_bool = var_31_float > (float)90000.0;
	if(var_40_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	CanSee(var_28_bool, var_27_object);
	var_28_bool = var_24_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1265()
{
	var_19_bool = 0;
	func_1335(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1139(var_124_bool, var_125_object)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = "";
	var_131_string = "c";
	var_132_int = 0;
	
Label_1142:
	if((int)1 != 0) {
		var_138_int = var_132_int + (int)1;
		var_139_int = var_131_string + var_138_int;
		@@var_125_object:HasProperty(var_139_int, var_133_bool);
		var_140_bool = var_133_bool == 0; //@nz
		if(var_140_bool != 0) {
		} else {
			var_132_int = var_132_int + (int)1;
			goto Label_1142;
		}
	}
	var_141_bool = var_132_int == 0; //@nz
	if(var_141_bool != 0) {
		var_124_bool = 0;
		return 10;
	}
	var_134_int = 0;
	var_143_bool = var_132_int > (int)1;
	if(var_143_bool != 0) {
		irand(var_134_int, var_132_int);
	}
	var_145_int = var_134_int + (int)1;
	var_146_int = var_131_string + var_145_int;
	@@var_125_object:GetProperty(var_146_int, var_135_string);
	var_147_bool = 0; var_148_string = "";
	var_135_string = var_148_string;
	func_1250(var_147_bool, var_148_string);
	var_147_bool = var_124_bool;
	return 10;
	
}


func_244(var_0_object, var_274_int, var_275_object)
{
	var_277_object = Obj(); var_278_bool = 0; var_279_int = 0; var_280_bool = 0; var_281_object = Obj(); var_282_bool = 0; var_283_int = 0; var_284_bool = 0;
	var_0_object = var_275_object;
	var_285_bool = 0; var_286_object = Obj(); var_287_float = 0;
	var_275_object = var_286_object;
	func_994(var_285_bool, var_286_object, (float)70.0);
	var_288_bool = var_285_bool == 0; //@nz
	if(var_288_bool != 0) {
		var_274_int = -2;
		return 8;
	}
	CreateDialog(var_281_object);
	var_289_int = 0;
	func_1329(var_289_int);
	@@var_281_object:SetNPCName(var_289_int);
	var_290_int = 0;
	func_1327(var_290_int);
	@@var_281_object:SetNPCDescription(var_290_int);
	var_291_string = "";
	func_1331(var_291_string);
	@@var_281_object:SetPhoto(var_291_string);
	var_292_string = "";
	func_1333(var_292_string);
	@@var_281_object:SetPhoto2(var_292_string);
	var_293_int = 0;
	func_1337(var_293_int);
	@@var_281_object:SetPlayerName(var_293_int);
	IsOverrideActive(var_282_bool);
	var_294_bool = var_282_bool;
	if(var_294_bool != 0) {
		var_274_int = -2;
		return 8;
	}
	DoDialog(var_281_object);
	var_295_bool = 0; var_296_object = Obj();
	func_1272(Obj());
	var_297_object = var_296_object;
	func_1081(var_295_bool, var_296_object);
	var_298_object = Obj(); var_299_object = Obj();
	var_275_object = var_298_object;
	var_281_object = var_299_object;
	TaskCall(3);
	func_325(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object);
	TaskReturn();
	@@var_281_object:IsDialogEnd(var_284_bool);
	
Label_307:
	var_331_bool = var_284_bool == 0; //@nz
	if(var_331_bool != 0) {
		sync();
		@@var_281_object:IsDialogEnd(var_284_bool);
		goto Label_307;
	}
	var_275_object = Obj();
	func_1063();
	StopDialog(var_281_object);
	@@var_281_object:GetReturnValue((int)-1);
	var_283_int = var_274_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_886()
{
	var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0;
	WaitForAnimEnd();
	var_32_bool = 0;
	func_989(var_32_bool);
	var_33_bool = var_32_bool == 0; //@nz
	if(var_33_bool != 0) {
		return 12;
	}
	func_1310((int)0);
	var_34_int = var_26_int;
	var_27_int = 0;
	
Label_900:
	var_47_bool = 0;
	var_47_bool = 0;
	var_49_bool = var_27_int < (int)5;
	if(var_49_bool != 0) {
		var_50_bool = 0;
		func_989(var_50_bool);
		if(var_50_bool != 0) {
			var_47_bool = 1;
		}
	}
	if(var_47_bool != 0) {
		var_51_bool = var_26_int == 0; //@nz
		if(var_51_bool != 0) {
			Sleep((int)3, var_28_bool);
			var_53_bool = var_28_bool == 0; //@nz
			if(var_53_bool != 0) {
			} else {
		} else {
				irand(var_29_int, var_26_int);
				irand(var_30_int, (int)5);
				var_59_bool = var_30_int != (int)0;
				if(var_59_bool != 0) {
					var_29_int = 0;
				}
				var_61_string = ""; var_62_int = 0;
				var_29_int = var_62_int;
				func_1303(var_61_string, var_62_int);
				PlayAnimation("all", var_61_string);
				WaitForAnimEnd(var_31_bool);
				var_63_bool = var_31_bool == 0; //@nz
				if(var_63_bool == 0) goto Label_941;
				goto Label_952;
		}
		Label_941:
			var_54_bool = 0;
			func_955(var_54_bool);
			var_55_bool = var_54_bool == 0; //@nz
			if(var_55_bool != 0) {
				goto Label_952;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_900;

		}
	}
Label_952:
	ResetAAS();
	return 12;
	
}


func_503(var_0_object, var_335_int, var_336_object)
{
	var_338_object = Obj(); var_339_bool = 0; var_340_int = 0; var_341_bool = 0; var_342_object = Obj(); var_343_bool = 0; var_344_int = 0; var_345_bool = 0;
	var_0_object = var_336_object;
	var_346_bool = 0; var_347_object = Obj(); var_348_float = 0;
	var_336_object = var_347_object;
	func_994(var_346_bool, var_347_object, (float)70.0);
	var_349_bool = var_346_bool == 0; //@nz
	if(var_349_bool != 0) {
		var_335_int = -2;
		return 8;
	}
	CreateDialog(var_342_object);
	var_350_int = 0;
	func_1329(var_350_int);
	@@var_342_object:SetNPCName(var_350_int);
	var_351_int = 0;
	func_1327(var_351_int);
	@@var_342_object:SetNPCDescription(var_351_int);
	var_352_string = "";
	func_1331(var_352_string);
	@@var_342_object:SetPhoto(var_352_string);
	var_353_string = "";
	func_1333(var_353_string);
	@@var_342_object:SetPhoto2(var_353_string);
	var_354_int = 0;
	func_1337(var_354_int);
	@@var_342_object:SetPlayerName(var_354_int);
	IsOverrideActive(var_343_bool);
	var_355_bool = var_343_bool;
	if(var_355_bool != 0) {
		var_335_int = -2;
		return 8;
	}
	DoDialog(var_342_object);
	var_356_bool = 0; var_357_object = Obj();
	func_1272(Obj());
	var_358_object = var_357_object;
	func_1081(var_356_bool, var_357_object);
	var_359_object = Obj(); var_360_object = Obj();
	var_336_object = var_359_object;
	var_342_object = var_360_object;
	TaskCall(5);
	func_584(var_361_object, var_362_object, var_363_string, var_364_bool, var_359_object, var_360_object);
	TaskReturn();
	@@var_342_object:IsDialogEnd(var_345_bool);
	
Label_566:
	var_389_bool = var_345_bool == 0; //@nz
	if(var_389_bool != 0) {
		sync();
		@@var_342_object:IsDialogEnd(var_345_bool);
		goto Label_566;
	}
	var_336_object = Obj();
	func_1063();
	StopDialog(var_342_object);
	@@var_342_object:GetReturnValue((int)-1);
	var_344_int = var_335_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1272(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj();
	self(var_117_object);
	var_117_object = var_115_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1278(var_79_cvector, var_80_cvector)
{
	var_82_float = 0; var_83_float = 0;
	var_84_int = var_80_cvector | var_80_cvector;
	var_83_float = sqrt(var_84_int);
	var_85_float = 9.999999974752427e-07;
	var_86_bool = var_83_float < var_85_float;
	if(var_86_bool != 0) {
		var_79_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_79_cvector = var_80_cvector / var_83_float;
	return 2;
}


