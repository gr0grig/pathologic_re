// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Rage|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Neutral|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Mark.png|W:ui/NPC_Mark_b.png|W:branch|W:mt_mark
// @GLOBALS: 0:object:
// @RUN_OP: 0x2c7
// @RUN_TASK: 6
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x19f vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x29d vars=int,int
// @TASK_6: vars=cvector params=0
// @EVENT_7: op=0x310 vars=int
// @EVENT_6: op=0x336 vars=
// @EVENT_5: op=0x345 vars=
// @EVENT_45: op=0x352 vars=bool
// @EVENT_0: op=0x35e vars=object
// @PE: 0x51,0x8b,0xa1,0x14a,0x189,0x19f,0x24d,0x287,0x29d,0x2c7,0x310,0x336,0x352,0x516

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	if((int)1 != 0) {
		func_1270();
		var_21_bool = var_16_bool == (int)26860;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_139(var_17_cvector, "Rage");
			@@@var_0_object:SetMessage((int)525504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525505, (int)30769, (int)26861);
			@@@var_0_object:AddReply((int)541845, (int)44064, (int)44063);
			return 0;
		}
		var_47_bool = var_16_bool == (int)44064;
		if(var_47_bool != 0) {
			var_48_string = "";
			func_139(var_17_cvector, "Rage");
			@@@var_0_object:SetMessage((int)541846);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541847, (int)30769, (int)44065);
			@@@var_0_object:AddReply((int)541848, (int)30769, (int)44066);
			return 0;
		}
		var_57_bool = var_16_bool == (int)30769;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_139(var_17_cvector, "Rage");
			@@@var_0_object:SetMessage((int)529315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529316, (int)-1, (int)30770);
			@@@var_0_object:AddReply((int)529317, (int)-1, (int)30771);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_1340(var_66_bool);
		if(var_66_bool != 0) {
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
		func_1270();
		var_21_bool = var_16_bool == (int)36906;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_393(var_17_cvector, "Neutral");
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
			func_393(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_60_bool = var_16_bool == (int)36957;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_393(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_69_bool = 0;
		func_1340(var_69_bool);
		if(var_69_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a0";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_cvector)
{
	if((int)1 != 0) {
		func_1270();
		var_21_bool = var_16_int == (int)42554;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_647(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_46_bool = 0;
		func_1340(var_46_bool);
		if(var_46_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x29e";
	
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_int)
{
	var_18_bool = var_16_int == (int)10;
	if(var_18_bool != 0) {
		func_780();
		var_20_bool = 0;
		var_20_bool = 0;
		var_21_bool = 0;
		func_994(var_21_bool);
		if(var_21_bool != 0) {
			var_24_bool = 0;
			func_749(var_24_bool);
			if(var_24_bool != 0) {
				var_20_bool = 1;
			}
		}
		if(var_20_bool != 0) {
			var_41_bool = 0;
			func_729(var_41_bool);
			if(var_41_bool != 0) {
				var_60_bool = 0; var_61_object = Obj();
				func_1277(Obj());
				var_62_object = var_61_object;
				func_1144(var_60_bool, var_61_object);
			}
		} else {
			func_744(var_16_int);
			func_771();
		}
	}
	return 0;
	
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_962();
	func_780();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	StopGroup0();
	func_780();
	var_17_string = "";
	func_1224("Neutral");
	func_771();
	return 0;
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		func_771();
	} else {
		var_23_string = "";
		func_1224("Neutral");
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
		func_962();
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_985(var_20_bool, var_21_object);
		EventEnable(0);
		var_34_object = Obj();
		var_16_object = var_34_object;
		func_1359(var_34_object);
		var_384_string = "";
		func_1224("Neutral");
		func_780();
		func_771();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_715(var_15_cvector);
	return 0;
}


func_0(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_0_object = var_40_object;
	var_50_bool = 0; var_51_object = Obj(); var_52_float = 0;
	var_40_object = var_51_object;
	func_999(var_50_bool, var_51_object, (float)70.0);
	var_97_bool = var_50_bool == 0; //@nz
	if(var_97_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	CreateDialog(var_46_object);
	var_98_int = 0;
	func_1334(var_98_int);
	@@var_46_object:SetNPCName(var_98_int);
	var_99_int = 0;
	func_1332(var_99_int);
	@@var_46_object:SetNPCDescription(var_99_int);
	var_100_string = "";
	func_1336(var_100_string);
	@@var_46_object:SetPhoto(var_100_string);
	var_101_string = "";
	func_1338(var_101_string);
	@@var_46_object:SetPhoto2(var_101_string);
	var_102_int = 0;
	func_1342(var_102_int);
	@@var_46_object:SetPlayerName(var_102_int);
	IsOverrideActive(var_47_bool);
	var_110_bool = var_47_bool;
	if(var_110_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	DoDialog(var_46_object);
	var_111_bool = 0; var_112_object = Obj();
	func_1277(Obj());
	var_113_object = var_112_object;
	func_1086(var_111_bool, var_112_object);
	var_206_object = Obj(); var_207_object = Obj();
	var_40_object = var_206_object;
	var_46_object = var_207_object;
	TaskCall(1);
	func_81(var_208_object, var_209_object, var_210_string, var_211_bool, var_206_object, var_207_object);
	TaskReturn();
	@@var_46_object:IsDialogEnd(var_49_bool);
	
Label_63:
	var_255_bool = var_49_bool == 0; //@nz
	if(var_255_bool != 0) {
		sync();
		@@var_46_object:IsDialogEnd(var_49_bool);
		goto Label_63;
	}
	var_40_object = Obj();
	func_1068();
	StopDialog(var_46_object);
	@@var_46_object:GetReturnValue((int)-1);
	var_48_int = var_39_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1283(var_77_cvector, var_78_cvector)
{
	var_80_float = 0; var_81_float = 0;
	var_82_int = var_78_cvector | var_78_cvector;
	var_81_float = sqrt(var_82_int);
	var_83_float = 9.999999974752427e-07;
	var_84_bool = var_81_float < var_83_float;
	if(var_84_bool != 0) {
		var_77_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_77_cvector = var_78_cvector / var_81_float;
	return 2;
}


func_771()
{
	var_386_float = 0; var_387_float = 0;
	rand(var_387_float, (int)8, (int)16);
	SetTimer((int)10, var_387_float);
	return 2;
}


func_647(var_2_object, var_359_string)
{
	var_360_bool = 0;
	func_1340(var_360_bool);
	var_361_bool = var_360_bool == 0; //@nz
	if(var_361_bool != 0) {
		return 0;
	}
	var_362_bool = var_359_string == var_2_object;
	if(var_362_bool != 0) {
		return 0;
	}
	var_363_string = ""; var_364_bool = 0;
	var_359_string = var_363_string;
	var_366_bool = var_359_string == "";
	if(var_366_bool != 0) {
		var_364_bool = 0;
	} else {
		var_364_bool = 1;
	}
	func_1240(var_363_string, var_364_bool);
	var_2_object = var_359_string;
	return 0;
	
}


func_393(var_2_object, var_300_string)
{
	var_301_bool = 0;
	func_1340(var_301_bool);
	var_302_bool = var_301_bool == 0; //@nz
	if(var_302_bool != 0) {
		return 0;
	}
	var_303_bool = var_300_string == var_2_object;
	if(var_303_bool != 0) {
		return 0;
	}
	var_304_string = ""; var_305_bool = 0;
	var_300_string = var_304_string;
	var_307_bool = var_300_string == "";
	if(var_307_bool != 0) {
		var_305_bool = 0;
	} else {
		var_305_bool = 1;
	}
	func_1240(var_304_string, var_305_bool);
	var_2_object = var_300_string;
	return 0;
	
}


func_139(var_2_object, var_213_string)
{
	var_214_bool = 0;
	func_1340(var_214_bool);
	var_215_bool = var_214_bool == 0; //@nz
	if(var_215_bool != 0) {
		return 0;
	}
	var_216_bool = var_213_string == var_2_object;
	if(var_216_bool != 0) {
		return 0;
	}
	var_217_string = ""; var_218_bool = 0;
	var_213_string = var_217_string;
	var_220_bool = var_213_string == "";
	if(var_220_bool != 0) {
		var_218_bool = 0;
	} else {
		var_218_bool = 1;
	}
	func_1240(var_217_string, var_218_bool);
	var_2_object = var_213_string;
	return 0;
	
}


func_780()
{
	KillTimer((int)10);
	return 0;
}


func_1293(var_166_int)
{
	var_167_float = 0; var_168_float = 0;
	GetGameTime(var_168_float);
	var_170_int = 0;
	var_170_int = var_168_float / (int)24;
	var_166_int = (int)1 + var_170_int;
	return 2;
}


func_1302(var_266_bool, var_267_int)
{
	var_268_int = 0;
	func_1293(var_268_int);
	var_266_bool = var_268_int == var_267_int;
	return 0;
}


func_1308(var_40_string, var_41_int)
{
	var_42_string = ""; var_43_string = "";
	var_44_int = var_41_int;
	if(var_44_int != 0) {
		"idle" = "idle" + var_41_int;
	}
	var_43_string = var_40_string;
	return 2;
}


func_1181(var_153_bool, var_154_object)
{
	var_155_string = ""; var_156_int = 0; var_157_bool = 0; var_158_int = 0; var_159_string = ""; var_160_string = ""; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_string = "";
	var_166_int = 0;
	func_1293(var_166_int);
	var_172_int = "d" + var_166_int;
	var_160_string = var_172_int + "m";
	var_161_int = 0;
	
Label_1190:
	if((int)1 != 0) {
		var_176_int = var_161_int + (int)1;
		var_177_int = var_160_string + var_176_int;
		@@var_154_object:HasProperty(var_177_int, var_162_bool);
		var_178_bool = var_162_bool == 0; //@nz
		if(var_178_bool != 0) {
		} else {
			var_161_int = var_161_int + (int)1;
			goto Label_1190;
		}
	}
	var_179_bool = var_161_int == 0; //@nz
	if(var_179_bool != 0) {
		var_153_bool = 0;
		return 10;
	}
	var_163_int = 0;
	var_181_bool = var_161_int > (int)1;
	if(var_181_bool != 0) {
		irand(var_163_int, var_161_int);
	}
	var_183_int = var_163_int + (int)1;
	var_184_int = var_160_string + var_183_int;
	@@var_154_object:GetProperty(var_184_int, var_164_string);
	var_185_bool = 0; var_186_string = "";
	var_164_string = var_186_string;
	func_1255(var_185_bool, var_186_string);
	var_185_bool = var_153_bool;
	return 10;
	
}


func_1315(var_34_int)
{
	var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_bool = 0;
	var_37_int = 0;
	
Label_1317:
	var_40_string = ""; var_41_int = 0;
	var_37_int = var_41_int;
	func_1308(var_40_string, var_41_int);
	HasAnimation(var_38_bool, "all", var_40_string);
	var_45_bool = var_38_bool == 0; //@nz
	if(var_45_bool != 0) {
	} else {
		var_37_int = var_37_int + (int)1;
		goto Label_1317;
	}
	var_37_int = var_34_int;
	return 4;
	
}


func_1068()
{
	var_257_bool = 0; var_258_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_260_bool = 0;
	func_1340(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		HasAnimationTrack(var_258_bool, "head");
		var_262_bool = var_258_bool;
		if(var_262_bool == 0) goto Label_1085;
		UnlookAsync("head");
	}
Label_1085:
	return 2;
	
}


func_1332(var_99_int)
{
	var_99_int = 515544;
	return 0;
}


func_1334(var_98_int)
{
	var_98_int = 502869;
	return 0;
}


func_1336(var_100_string)
{
	var_100_string = "ui/NPC_Mark.png";
	return 0;
}


func_1338(var_101_string)
{
	var_101_string = "ui/NPC_Mark_b.png";
	return 0;
}


func_1340(var_93_bool)
{
	var_93_bool = 1;
	return 0;
}


func_1086(var_111_bool, var_112_object)
{
	var_116_int = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0;
	GetVariable("voice_common", var_118_int);
	var_121_int = var_118_int;
	if(var_121_int != 0) {
		var_122_bool = 0; var_123_object = Obj();
		var_112_object = var_123_object;
		func_1144(var_122_bool, var_123_object);
		var_152_bool = var_122_bool == 0; //@nz
		if(var_152_bool != 0) {
			var_153_bool = 0; var_154_object = Obj();
			var_112_object = var_154_object;
			func_1181(var_153_bool, var_154_object);
			var_188_bool = var_153_bool == 0; //@nz
			if(var_188_bool != 0) {
				var_111_bool = 0;
				return 4;
			}
		}
		irand(var_119_int, (int)2);
		var_190_int = var_119_int;
		if(var_190_int != 0) {
			var_193_int = var_118_int + (int)1;
			var_195_int = var_193_int % (int)3;
			SetVariable("voice_common", var_195_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_198_bool = 0; var_199_object = Obj();
		var_112_object = var_199_object;
		func_1181(var_198_bool, var_199_object);
		var_200_bool = var_198_bool == 0; //@nz
		if(var_200_bool != 0) {
			var_201_bool = 0; var_202_object = Obj();
			var_112_object = var_202_object;
			func_1144(var_201_bool, var_202_object);
			var_203_bool = var_201_bool == 0; //@nz
			if(var_203_bool != 0) {
				var_111_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1142;
	
Label_1142:
	var_111_bool = 1;
	return 4;
	
}


func_1342(var_102_int)
{
	var_103_int = 0; var_104_int = 0;
	GetVariable("branch", var_104_int);
	var_107_bool = var_104_int == (int)0;
	if(var_107_bool != 0) {
		var_102_int = 1;
		return 2;
	EMIT "GOTO 0x54d";
	}
	var_109_bool = var_104_int == (int)1;
	if(var_109_bool != 0) {
		var_102_int = 2;
		return 2;
	}
	var_102_int = 3;
	return 2;
}


func_960(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_962()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_967(var_31_float, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	GetPosition(var_36_cvector);
	@@var_32_object:GetPosition(var_37_cvector);
	var_38_cvector = var_37_cvector - var_36_cvector;
	var_31_float = var_38_cvector | var_38_cvector;
	return 6;
}


func_1224(var_239_string)
{
	var_240_bool = 0; var_241_float = 0; var_242_float = 0; var_243_bool = 0; var_244_float = 0; var_245_float = 0;
	lshHasAnimation(var_243_bool, var_239_string);
	var_246_bool = var_243_bool;
	if(var_246_bool != 0) {
		lshGetAnimTimes(var_239_string, var_244_float, var_245_float);
		lshPlayAnimation(var_244_float, var_245_float, (bool)0);
	} else {
		var_249_int = "Can't find lsh animation : " + var_239_string;
		Trace(var_249_int);
	}
	return 6;
	
}


func_330(var_0_object, var_1_object, var_2_object, var_3_string, var_293_object, var_294_object)
{
	var_0_object = var_294_object;
	var_1_object = var_293_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_300_string = "";
		func_393(var_294_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_363;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14e";
	}
Label_363:
	var_318_bool = 0;
	func_1340(var_318_bool);
	if(var_318_bool != 0) {

	Label_367:
		lshWaitForAnimEnd();
		var_319_string = var_3_string;
		if(var_319_string != 0) {
		} else {
			var_320_string = "";
			var_320_string = var_2_object;
			func_1224(var_320_string);
			goto Label_367;
	}
		PlayAnimation("all", "idle");

	Label_382:
		WaitForAnimEnd();
		var_323_string = var_3_string;
		if(var_323_string != 0) {
			goto Label_392;
		}
		PlayAnimation("all", "idle");
		goto Label_382;
	}
	goto Label_392;
	
Label_392:
	return 0;
	
}


func_715(var_0_object)
{
	var_16_bool = 0;
	func_994(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_724:
	func_891();
	goto Label_724;
}
EMIT "Return(); Pop(0)";


func_589(var_0_object, var_1_object, var_2_object, var_3_string, var_352_object, var_353_object)
{
	var_0_object = var_353_object;
	var_1_object = var_352_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_359_string = "";
		func_647(var_353_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_617;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x251";
	}
Label_617:
	var_374_bool = 0;
	func_1340(var_374_bool);
	if(var_374_bool != 0) {

	Label_621:
		lshWaitForAnimEnd();
		var_375_string = var_3_string;
		if(var_375_string != 0) {
		} else {
			var_376_string = "";
			var_376_string = var_2_object;
			func_1224(var_376_string);
			goto Label_621;
	}
		PlayAnimation("all", "idle");

	Label_636:
		WaitForAnimEnd();
		var_379_string = var_3_string;
		if(var_379_string != 0) {
			goto Label_646;
		}
		PlayAnimation("all", "idle");
		goto Label_636;
	}
	goto Label_646;
	
Label_646:
	return 0;
	
}


func_1359(var_34_object)
{
	var_35_int = 0; var_36_int = 0;
	GetVariable("mt_mark", var_36_int);
	var_38_bool = var_36_int == 0; //@nz
	if(var_38_bool != 0) {
		var_39_int = 0; var_40_object = Obj();
		var_34_object = var_40_object;
		TaskCall(0);
		func_0(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		SetVariable("mt_mark", (int)1);
	}
	var_266_bool = 0; var_267_int = 0;
	func_1302(var_266_bool, (int)12);
	if(var_266_bool != 0) {
		var_269_int = 0; var_270_object = Obj();
		var_34_object = var_270_object;
		TaskCall(2);
		func_249(var_271_object, var_269_int, var_270_object);
		TaskReturn();
		return 2;
	}
	var_328_int = 0; var_329_object = Obj();
	var_34_object = var_329_object;
	TaskCall(4);
	func_508(var_330_object, var_328_int, var_329_object);
	TaskReturn();
	return 2;
}


func_975(var_24_bool, var_25_cvector)
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_206_object, var_207_object)
{
	var_0_object = var_207_object;
	var_1_object = var_206_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_213_string = "";
		func_139(var_207_object, "Rage");
		@@@var_0_object:SetMessage((int)525504);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525505, (int)30769, (int)26861);
		@@@var_0_object:AddReply((int)541845, (int)44064, (int)44063);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_237_bool = 0;
	func_1340(var_237_bool);
	if(var_237_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_238_string = var_3_string;
		if(var_238_string != 0) {
		} else {
			var_239_string = "";
			var_239_string = var_2_object;
			func_1224(var_239_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_252_string = var_3_string;
		if(var_252_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_1240(var_217_string, var_218_bool)
{
	var_221_bool = 0; var_222_float = 0; var_223_float = 0; var_224_bool = 0; var_225_float = 0; var_226_float = 0;
	lshHasAnimation(var_224_bool, var_217_string);
	var_227_bool = var_224_bool;
	if(var_227_bool != 0) {
		lshGetAnimTimes(var_217_string, var_225_float, var_226_float);
		lshPlayAnimation(var_225_float, var_226_float, var_218_bool);
	} else {
		var_229_int = "Can't find lsh animation : " + var_217_string;
		Trace(var_229_int);
	}
	return 6;
	
}


func_985(var_20_bool, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	@@var_21_object:GetPosition(var_23_cvector);
	var_24_bool = 0; var_25_cvector = CVector(0,0,0);
	var_23_cvector = var_25_cvector;
	func_975(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
	return 2;
}


func_729(var_41_bool)
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
	func_985(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_994(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
	return 2;
}


func_999(var_50_bool, var_51_object, var_52_float)
{
	var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; var_70_bool = 0;
	@@var_51_object:GetPosition(var_63_cvector);
	@@var_51_object:GetEyesHeight(var_62_float);
	var_71_float = GetByIndex(var_63_cvector, 1);
	var_71_float = var_71_float + var_62_float;
	SetByIndex(var_63_cvector, 1) = var_71_float;
	GetPosition(var_64_cvector);
	GetEyesHeight(var_62_float);
	var_72_float = GetByIndex(var_64_cvector, 1);
	var_72_float = var_72_float + var_62_float;
	SetByIndex(var_64_cvector, 1) = var_72_float;
	var_65_cvector = var_63_cvector - var_64_cvector;
	var_73_float = GetByIndex(var_65_cvector, 1);
	SetByIndex(var_65_cvector, 1) = (float)0;
	var_74_int = var_65_cvector | var_65_cvector;
	var_75_float = sqrt(var_74_int);
	var_65_cvector = var_65_cvector / var_75_float;
	var_66_cvector = -var_65_cvector;
	var_76_float = var_65_cvector * var_52_float;
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_78_cvector = var_66_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1283(var_77_cvector, var_78_cvector);
	var_86_float = var_77_cvector * (int)25;
	var_87_int = var_76_float + var_86_float;
	var_67_cvector = var_87_int - CVector(0.0, 10.0, 0.0);
	var_68_cvector = var_64_cvector + var_67_cvector;
	IsOverrideActive(var_69_bool);
	var_89_bool = var_69_bool;
	if(var_89_bool != 0) {
		var_50_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_68_cvector, var_66_cvector, (bool)1);
	var_91_float = GetByIndex(var_67_cvector, 0);
	var_92_float = GetByIndex(var_67_cvector, 2);
	Rotate(var_91_float, var_92_float);
	var_93_bool = 0;
	func_1340(var_93_bool);
	if(var_93_bool != 0) {
	} else {
		HasAnimationTrack(var_70_bool, "head");
		var_95_bool = var_70_bool;
		if(var_95_bool == 0) goto Label_1062;
		LookAsyncCamera("head");
	}
Label_1062:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_50_bool = 1;
	return 18;
	
}


func_744(var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_93_float, var_94_float);
	return 0;
}


func_1255(var_145_bool, var_146_string)
{
	var_147_bool = 0; var_148_bool = 0;
	var_149_bool = 0;
	func_1340(var_149_bool);
	if(var_149_bool != 0) {
		lshHasSpeech(var_148_bool, var_146_string);
		var_150_bool = var_148_bool;
		if(var_150_bool != 0) {
			lshPlaySpeech(var_146_string);
			var_145_bool = 1;
			return 2;
		}
	}
	var_145_bool = 0;
	return 2;
}


func_749(var_24_bool)
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
	func_967(var_31_float, var_32_object);
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


func_1270()
{
	var_19_bool = 0;
	func_1340(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1144(var_122_bool, var_123_object)
{
	var_124_string = ""; var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_string = ""; var_129_string = ""; var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_string = "";
	var_129_string = "c";
	var_130_int = 0;
	
Label_1147:
	if((int)1 != 0) {
		var_136_int = var_130_int + (int)1;
		var_137_int = var_129_string + var_136_int;
		@@var_123_object:HasProperty(var_137_int, var_131_bool);
		var_138_bool = var_131_bool == 0; //@nz
		if(var_138_bool != 0) {
		} else {
			var_130_int = var_130_int + (int)1;
			goto Label_1147;
		}
	}
	var_139_bool = var_130_int == 0; //@nz
	if(var_139_bool != 0) {
		var_122_bool = 0;
		return 10;
	}
	var_132_int = 0;
	var_141_bool = var_130_int > (int)1;
	if(var_141_bool != 0) {
		irand(var_132_int, var_130_int);
	}
	var_143_int = var_132_int + (int)1;
	var_144_int = var_129_string + var_143_int;
	@@var_123_object:GetProperty(var_144_int, var_133_string);
	var_145_bool = 0; var_146_string = "";
	var_133_string = var_146_string;
	func_1255(var_145_bool, var_146_string);
	var_145_bool = var_122_bool;
	return 10;
	
}


func_249(var_0_object, var_269_int, var_270_object)
{
	var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0;
	var_0_object = var_270_object;
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0;
	var_270_object = var_281_object;
	func_999(var_280_bool, var_281_object, (float)70.0);
	var_283_bool = var_280_bool == 0; //@nz
	if(var_283_bool != 0) {
		var_269_int = -2;
		return 8;
	}
	CreateDialog(var_276_object);
	var_284_int = 0;
	func_1334(var_284_int);
	@@var_276_object:SetNPCName(var_284_int);
	var_285_int = 0;
	func_1332(var_285_int);
	@@var_276_object:SetNPCDescription(var_285_int);
	var_286_string = "";
	func_1336(var_286_string);
	@@var_276_object:SetPhoto(var_286_string);
	var_287_string = "";
	func_1338(var_287_string);
	@@var_276_object:SetPhoto2(var_287_string);
	var_288_int = 0;
	func_1342(var_288_int);
	@@var_276_object:SetPlayerName(var_288_int);
	IsOverrideActive(var_277_bool);
	var_289_bool = var_277_bool;
	if(var_289_bool != 0) {
		var_269_int = -2;
		return 8;
	}
	DoDialog(var_276_object);
	var_290_bool = 0; var_291_object = Obj();
	func_1277(Obj());
	var_292_object = var_291_object;
	func_1086(var_290_bool, var_291_object);
	var_293_object = Obj(); var_294_object = Obj();
	var_270_object = var_293_object;
	var_276_object = var_294_object;
	TaskCall(3);
	func_330(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object);
	TaskReturn();
	@@var_276_object:IsDialogEnd(var_279_bool);
	
Label_312:
	var_326_bool = var_279_bool == 0; //@nz
	if(var_326_bool != 0) {
		sync();
		@@var_276_object:IsDialogEnd(var_279_bool);
		goto Label_312;
	}
	var_270_object = Obj();
	func_1068();
	StopDialog(var_276_object);
	@@var_276_object:GetReturnValue((int)-1);
	var_278_int = var_269_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_891()
{
	var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0;
	WaitForAnimEnd();
	var_32_bool = 0;
	func_994(var_32_bool);
	var_33_bool = var_32_bool == 0; //@nz
	if(var_33_bool != 0) {
		return 12;
	}
	func_1315((int)0);
	var_34_int = var_26_int;
	var_27_int = 0;
	
Label_905:
	var_47_bool = 0;
	var_47_bool = 0;
	var_49_bool = var_27_int < (int)5;
	if(var_49_bool != 0) {
		var_50_bool = 0;
		func_994(var_50_bool);
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
				func_1308(var_61_string, var_62_int);
				PlayAnimation("all", var_61_string);
				WaitForAnimEnd(var_31_bool);
				var_63_bool = var_31_bool == 0; //@nz
				if(var_63_bool == 0) goto Label_946;
				goto Label_957;
		}
		Label_946:
			var_54_bool = 0;
			func_960(var_54_bool);
			var_55_bool = var_54_bool == 0; //@nz
			if(var_55_bool != 0) {
				goto Label_957;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_905;

		}
	}
Label_957:
	ResetAAS();
	return 12;
	
}


func_508(var_0_object, var_328_int, var_329_object)
{
	var_331_object = Obj(); var_332_bool = 0; var_333_int = 0; var_334_bool = 0; var_335_object = Obj(); var_336_bool = 0; var_337_int = 0; var_338_bool = 0;
	var_0_object = var_329_object;
	var_339_bool = 0; var_340_object = Obj(); var_341_float = 0;
	var_329_object = var_340_object;
	func_999(var_339_bool, var_340_object, (float)70.0);
	var_342_bool = var_339_bool == 0; //@nz
	if(var_342_bool != 0) {
		var_328_int = -2;
		return 8;
	}
	CreateDialog(var_335_object);
	var_343_int = 0;
	func_1334(var_343_int);
	@@var_335_object:SetNPCName(var_343_int);
	var_344_int = 0;
	func_1332(var_344_int);
	@@var_335_object:SetNPCDescription(var_344_int);
	var_345_string = "";
	func_1336(var_345_string);
	@@var_335_object:SetPhoto(var_345_string);
	var_346_string = "";
	func_1338(var_346_string);
	@@var_335_object:SetPhoto2(var_346_string);
	var_347_int = 0;
	func_1342(var_347_int);
	@@var_335_object:SetPlayerName(var_347_int);
	IsOverrideActive(var_336_bool);
	var_348_bool = var_336_bool;
	if(var_348_bool != 0) {
		var_328_int = -2;
		return 8;
	}
	DoDialog(var_335_object);
	var_349_bool = 0; var_350_object = Obj();
	func_1277(Obj());
	var_351_object = var_350_object;
	func_1086(var_349_bool, var_350_object);
	var_352_object = Obj(); var_353_object = Obj();
	var_329_object = var_352_object;
	var_335_object = var_353_object;
	TaskCall(5);
	func_589(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object);
	TaskReturn();
	@@var_335_object:IsDialogEnd(var_338_bool);
	
Label_571:
	var_382_bool = var_338_bool == 0; //@nz
	if(var_382_bool != 0) {
		sync();
		@@var_335_object:IsDialogEnd(var_338_bool);
		goto Label_571;
	}
	var_329_object = Obj();
	func_1068();
	StopDialog(var_335_object);
	@@var_335_object:GetReturnValue((int)-1);
	var_337_int = var_328_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1277(var_113_object)
{
	var_114_object = Obj(); var_115_object = Obj();
	self(var_115_object);
	var_115_object = var_113_object;
	return 2;
}
EMIT "Stack[-1] = 0";


