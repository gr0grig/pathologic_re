// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Fear|W:Independence|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Julia.png|W:ui/NPC_Julia_b.png|W:branch
// @GLOBALS: 0:object:,1:bool:,2:bool:
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
// @EVENT_7: op=0x30e vars=int
// @EVENT_6: op=0x334 vars=
// @EVENT_5: op=0x343 vars=
// @EVENT_45: op=0x350 vars=bool
// @EVENT_0: op=0x35c vars=object
// @PE: 0x51,0x8b,0xa1,0x145,0x184,0x19a,0x248,0x282,0x298,0x30e,0x334,0x350,0x514,0x54d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	if((int)1 != 0) {
		func_1268();
		var_21_bool = var_16_bool == (int)19145;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_139(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518013, (int)32562, (int)19146);
			@@@var_0_object:AddReply((int)531249, (int)32565, (int)32564);
			return 0;
		}
		var_47_bool = var_16_bool == (int)32565;
		if(var_47_bool != 0) {
			var_48_string = "";
			func_139(var_17_cvector, "Fear");
			@@@var_0_object:SetMessage((int)531250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531251, (int)32562, (int)32566);
			return 0;
		}
		var_54_bool = var_16_bool == (int)32562;
		if(var_54_bool != 0) {
			var_55_string = "";
			func_139(var_17_cvector, "Independence");
			@@@var_0_object:SetMessage((int)531247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531248, (int)-1, (int)32563);
			@@@var_0_object:AddReply((int)531252, (int)-1, (int)32568);
			return 0;
		}
		var_3_string = true;
		var_63_bool = 0;
		func_1338(var_63_bool);
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
		func_1268();
		var_21_bool = var_16_bool == (int)36971;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_388(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_50_bool = var_16_bool == (int)36973;
		if(var_50_bool != 0) {
			var_51_string = "";
			func_388(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_60_bool = var_16_bool == (int)36975;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_388(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_69_bool = 0;
		func_1338(var_69_bool);
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
		func_1268();
		var_21_bool = var_16_int == (int)42560;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_642(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_46_bool = 0;
		func_1338(var_46_bool);
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
		func_778();
		var_20_bool = 0;
		var_20_bool = 0;
		var_21_bool = 0;
		func_992(var_21_bool);
		if(var_21_bool != 0) {
			var_24_bool = 0;
			func_747(var_24_bool);
			if(var_24_bool != 0) {
				var_20_bool = 1;
			}
		}
		if(var_20_bool != 0) {
			var_41_bool = 0;
			func_727(var_41_bool);
			if(var_41_bool != 0) {
				var_60_bool = 0; var_61_object = Obj();
				func_1275(Obj());
				var_62_object = var_61_object;
				func_1142(var_60_bool, var_61_object);
			}
		} else {
			func_742(var_16_int);
			func_769();
		}
	}
	return 0;
	
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_960();
	func_778();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	StopGroup0();
	func_778();
	var_17_string = "";
	func_1222("Neutral");
	func_769();
	return 0;
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		func_769();
	} else {
		var_23_string = "";
		func_1222("Neutral");
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
		func_960();
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_983(var_20_bool, var_21_object);
		EventEnable(0);
		var_34_object = Obj();
		var_16_object = var_34_object;
		func_1357(var_34_object);
		var_385_string = "";
		func_1222("Neutral");
		func_778();
		func_769();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	var_16_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_713(var_15_cvector);
	return 0;
}


func_0(var_0_object, var_37_int, var_38_object)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0;
	var_0_object = var_38_object;
	var_48_bool = 0; var_49_object = Obj(); var_50_float = 0;
	var_38_object = var_49_object;
	func_997(var_48_bool, var_49_object, (float)70.0);
	var_95_bool = var_48_bool == 0; //@nz
	if(var_95_bool != 0) {
		var_37_int = -2;
		return 8;
	}
	CreateDialog(var_44_object);
	var_96_int = 0;
	func_1332(var_96_int);
	@@var_44_object:SetNPCName(var_96_int);
	var_97_int = 0;
	func_1330(var_97_int);
	@@var_44_object:SetNPCDescription(var_97_int);
	var_98_string = "";
	func_1334(var_98_string);
	@@var_44_object:SetPhoto(var_98_string);
	var_99_string = "";
	func_1336(var_99_string);
	@@var_44_object:SetPhoto2(var_99_string);
	var_100_int = 0;
	func_1340(var_100_int);
	@@var_44_object:SetPlayerName(var_100_int);
	IsOverrideActive(var_45_bool);
	var_108_bool = var_45_bool;
	if(var_108_bool != 0) {
		var_37_int = -2;
		return 8;
	}
	DoDialog(var_44_object);
	var_109_bool = 0; var_110_object = Obj();
	func_1275(Obj());
	var_111_object = var_110_object;
	func_1084(var_109_bool, var_110_object);
	var_204_object = Obj(); var_205_object = Obj();
	var_38_object = var_204_object;
	var_44_object = var_205_object;
	TaskCall(1);
	func_81(var_206_object, var_207_object, var_208_string, var_209_bool, var_204_object, var_205_object);
	TaskReturn();
	@@var_44_object:IsDialogEnd(var_47_bool);
	
Label_63:
	var_253_bool = var_47_bool == 0; //@nz
	if(var_253_bool != 0) {
		sync();
		@@var_44_object:IsDialogEnd(var_47_bool);
		goto Label_63;
	}
	var_38_object = Obj();
	func_1066();
	StopDialog(var_44_object);
	@@var_44_object:GetReturnValue((int)-1);
	var_46_int = var_37_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_769()
{
	var_387_float = 0; var_388_float = 0;
	rand(var_388_float, (int)8, (int)16);
	SetTimer((int)10, var_388_float);
	return 2;
}


func_642(var_2_object, var_360_string)
{
	var_361_bool = 0;
	func_1338(var_361_bool);
	var_362_bool = var_361_bool == 0; //@nz
	if(var_362_bool != 0) {
		return 0;
	}
	var_363_bool = var_360_string == var_2_object;
	if(var_363_bool != 0) {
		return 0;
	}
	var_364_string = ""; var_365_bool = 0;
	var_360_string = var_364_string;
	var_367_bool = var_360_string == "";
	if(var_367_bool != 0) {
		var_365_bool = 0;
	} else {
		var_365_bool = 1;
	}
	func_1238(var_364_string, var_365_bool);
	var_2_object = var_360_string;
	return 0;
	
}


func_1281(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0;
	var_80_int = var_76_cvector | var_76_cvector;
	var_79_float = sqrt(var_80_int);
	var_81_float = 9.999999974752427e-07;
	var_82_bool = var_79_float < var_81_float;
	if(var_82_bool != 0) {
		var_75_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_75_cvector = var_76_cvector / var_79_float;
	return 2;
}


func_388(var_2_object, var_300_string)
{
	var_301_bool = 0;
	func_1338(var_301_bool);
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
	func_1238(var_304_string, var_305_bool);
	var_2_object = var_300_string;
	return 0;
	
}


func_778()
{
	KillTimer((int)10);
	return 0;
}


func_139(var_2_object, var_211_string)
{
	var_212_bool = 0;
	func_1338(var_212_bool);
	var_213_bool = var_212_bool == 0; //@nz
	if(var_213_bool != 0) {
		return 0;
	}
	var_214_bool = var_211_string == var_2_object;
	if(var_214_bool != 0) {
		return 0;
	}
	var_215_string = ""; var_216_bool = 0;
	var_211_string = var_215_string;
	var_218_bool = var_211_string == "";
	if(var_218_bool != 0) {
		var_216_bool = 0;
	} else {
		var_216_bool = 1;
	}
	func_1238(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	return 0;
	
}


func_1291(var_164_int)
{
	var_165_float = 0; var_166_float = 0;
	GetGameTime(var_166_float);
	var_168_int = 0;
	var_168_int = var_166_float / (int)24;
	var_164_int = (int)1 + var_168_int;
	return 2;
}


func_1300(var_264_bool, var_265_int)
{
	var_266_int = 0;
	func_1291(var_266_int);
	var_264_bool = var_266_int == var_265_int;
	return 0;
}


func_1306(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_1179(var_151_bool, var_152_object)
{
	var_153_string = ""; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_string = ""; var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = "";
	var_164_int = 0;
	func_1291(var_164_int);
	var_170_int = "d" + var_164_int;
	var_158_string = var_170_int + "m";
	var_159_int = 0;
	
Label_1188:
	if((int)1 != 0) {
		var_174_int = var_159_int + (int)1;
		var_175_int = var_158_string + var_174_int;
		@@var_152_object:HasProperty(var_175_int, var_160_bool);
		var_176_bool = var_160_bool == 0; //@nz
		if(var_176_bool != 0) {
		} else {
			var_159_int = var_159_int + (int)1;
			goto Label_1188;
		}
	}
	var_177_bool = var_159_int == 0; //@nz
	if(var_177_bool != 0) {
		var_151_bool = 0;
		return 10;
	}
	var_161_int = 0;
	var_179_bool = var_159_int > (int)1;
	if(var_179_bool != 0) {
		irand(var_161_int, var_159_int);
	}
	var_181_int = var_161_int + (int)1;
	var_182_int = var_158_string + var_181_int;
	@@var_152_object:GetProperty(var_182_int, var_162_string);
	var_183_bool = 0; var_184_string = "";
	var_162_string = var_184_string;
	func_1253(var_183_bool, var_184_string);
	var_183_bool = var_151_bool;
	return 10;
	
}


func_1313(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_1315:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_1306(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_1315;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_1066()
{
	var_255_bool = 0; var_256_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_258_bool = 0;
	func_1338(var_258_bool);
	if(var_258_bool != 0) {
	} else {
		HasAnimationTrack(var_256_bool, "head");
		var_260_bool = var_256_bool;
		if(var_260_bool == 0) goto Label_1083;
		UnlookAsync("head");
	}
Label_1083:
	return 2;
	
}


func_1330(var_97_int)
{
	var_97_int = 515537;
	return 0;
}


func_1332(var_96_int)
{
	var_96_int = 502862;
	return 0;
}


func_1334(var_98_string)
{
	var_98_string = "ui/NPC_Julia.png";
	return 0;
}


func_1336(var_99_string)
{
	var_99_string = "ui/NPC_Julia_b.png";
	return 0;
}


func_1338(var_91_bool)
{
	var_91_bool = 1;
	return 0;
}


func_1084(var_109_bool, var_110_object)
{
	var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_int = 0;
	GetVariable("voice_common", var_116_int);
	var_119_int = var_116_int;
	if(var_119_int != 0) {
		var_120_bool = 0; var_121_object = Obj();
		var_110_object = var_121_object;
		func_1142(var_120_bool, var_121_object);
		var_150_bool = var_120_bool == 0; //@nz
		if(var_150_bool != 0) {
			var_151_bool = 0; var_152_object = Obj();
			var_110_object = var_152_object;
			func_1179(var_151_bool, var_152_object);
			var_186_bool = var_151_bool == 0; //@nz
			if(var_186_bool != 0) {
				var_109_bool = 0;
				return 4;
			}
		}
		irand(var_117_int, (int)2);
		var_188_int = var_117_int;
		if(var_188_int != 0) {
			var_191_int = var_116_int + (int)1;
			var_193_int = var_191_int % (int)3;
			SetVariable("voice_common", var_193_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_196_bool = 0; var_197_object = Obj();
		var_110_object = var_197_object;
		func_1179(var_196_bool, var_197_object);
		var_198_bool = var_196_bool == 0; //@nz
		if(var_198_bool != 0) {
			var_199_bool = 0; var_200_object = Obj();
			var_110_object = var_200_object;
			func_1142(var_199_bool, var_200_object);
			var_201_bool = var_199_bool == 0; //@nz
			if(var_201_bool != 0) {
				var_109_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1140;
	
Label_1140:
	var_109_bool = 1;
	return 4;
	
}


func_1340(var_100_int)
{
	var_101_int = 0; var_102_int = 0;
	GetVariable("branch", var_102_int);
	var_105_bool = var_102_int == (int)0;
	if(var_105_bool != 0) {
		var_100_int = 1;
		return 2;
	EMIT "GOTO 0x54b";
	}
	var_107_bool = var_102_int == (int)1;
	if(var_107_bool != 0) {
		var_100_int = 2;
		return 2;
	}
	var_100_int = 3;
	return 2;
}


func_958(var_55_bool)
{
	var_55_bool = 1;
	return 0;
}


func_960()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_325(var_0_object, var_1_object, var_2_object, var_3_string, var_293_object, var_294_object)
{
	var_0_object = var_294_object;
	var_1_object = var_293_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_300_string = "";
		func_388(var_294_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_358;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x149";
	}
Label_358:
	var_318_bool = 0;
	func_1338(var_318_bool);
	if(var_318_bool != 0) {

	Label_362:
		lshWaitForAnimEnd();
		var_319_string = var_3_string;
		if(var_319_string != 0) {
		} else {
			var_320_string = "";
			var_320_string = var_2_object;
			func_1222(var_320_string);
			goto Label_362;
	}
		PlayAnimation("all", "idle");

	Label_377:
		WaitForAnimEnd();
		var_323_string = var_3_string;
		if(var_323_string != 0) {
			goto Label_387;
		}
		PlayAnimation("all", "idle");
		goto Label_377;
	}
	goto Label_387;
	
Label_387:
	return 0;
	
}


func_1222(var_237_string)
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


func_965(var_31_float, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	GetPosition(var_36_cvector);
	@@var_32_object:GetPosition(var_37_cvector);
	var_38_cvector = var_37_cvector - var_36_cvector;
	var_31_float = var_38_cvector | var_38_cvector;
	return 6;
}


func_584(var_0_object, var_1_object, var_2_object, var_3_string, var_353_object, var_354_object)
{
	var_0_object = var_354_object;
	var_1_object = var_353_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_360_string = "";
		func_642(var_354_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_612;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24c";
	}
Label_612:
	var_375_bool = 0;
	func_1338(var_375_bool);
	if(var_375_bool != 0) {

	Label_616:
		lshWaitForAnimEnd();
		var_376_string = var_3_string;
		if(var_376_string != 0) {
		} else {
			var_377_string = "";
			var_377_string = var_2_object;
			func_1222(var_377_string);
			goto Label_616;
	}
		PlayAnimation("all", "idle");

	Label_631:
		WaitForAnimEnd();
		var_380_string = var_3_string;
		if(var_380_string != 0) {
			goto Label_641;
		}
		PlayAnimation("all", "idle");
		goto Label_631;
	}
	goto Label_641;
	
Label_641:
	return 0;
	
}


func_713(var_0_object)
{
	var_17_bool = 0;
	func_992(var_17_bool);
	var_20_bool = var_17_bool == 0; //@nz
	if(var_20_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_722:
	func_889();
	goto Label_722;
}
EMIT "Return(); Pop(0)";


func_1357(var_34_object)
{
	var_35_bool = GlobalVars[1];
	var_36_bool = var_35_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_37_int = 0; var_38_object = Obj();
		var_34_object = var_38_object;
		TaskCall(0);
		func_0(var_39_object, var_37_int, var_38_object);
		TaskReturn();
		var_262_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_263_bool = 0;
	var_263_bool = 0;
	var_264_bool = 0; var_265_int = 0;
	func_1300(var_264_bool, (int)12);
	if(var_264_bool != 0) {
		var_267_bool = GlobalVars[2];
		var_268_bool = var_267_bool == 0; //@nz
		if(var_268_bool != 0) {
			var_263_bool = 1;
		}
	}
	if(var_263_bool != 0) {
		var_269_int = 0; var_270_object = Obj();
		var_34_object = var_270_object;
		TaskCall(2);
		func_244(var_271_object, var_269_int, var_270_object);
		TaskReturn();
		var_328_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
		return 0;
	}
	var_329_int = 0; var_330_object = Obj();
	var_34_object = var_330_object;
	TaskCall(4);
	func_503(var_331_object, var_329_int, var_330_object);
	TaskReturn();
	return 0;
}


func_973(var_24_bool, var_25_cvector)
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_204_object, var_205_object)
{
	var_0_object = var_205_object;
	var_1_object = var_204_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_211_string = "";
		func_139(var_205_object, "Neutral");
		@@@var_0_object:SetMessage((int)518012);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518013, (int)32562, (int)19146);
		@@@var_0_object:AddReply((int)531249, (int)32565, (int)32564);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_235_bool = 0;
	func_1338(var_235_bool);
	if(var_235_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_236_string = var_3_string;
		if(var_236_string != 0) {
		} else {
			var_237_string = "";
			var_237_string = var_2_object;
			func_1222(var_237_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_250_string = var_3_string;
		if(var_250_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_1238(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0;
	lshHasAnimation(var_222_bool, var_215_string);
	var_225_bool = var_222_bool;
	if(var_225_bool != 0) {
		lshGetAnimTimes(var_215_string, var_223_float, var_224_float);
		lshPlayAnimation(var_223_float, var_224_float, var_216_bool);
	} else {
		var_227_int = "Can't find lsh animation : " + var_215_string;
		Trace(var_227_int);
	}
	return 6;
	
}


func_983(var_20_bool, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	@@var_21_object:GetPosition(var_23_cvector);
	var_24_bool = 0; var_25_cvector = CVector(0,0,0);
	var_23_cvector = var_25_cvector;
	func_973(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
	return 2;
}


func_727(var_41_bool)
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
	func_983(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_992(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
	return 2;
}


func_997(var_48_bool, var_49_object, var_50_float)
{
	var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0;
	@@var_49_object:GetPosition(var_61_cvector);
	@@var_49_object:GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_61_cvector, 1);
	var_69_float = var_69_float + var_60_float;
	SetByIndex(var_61_cvector, 1) = var_69_float;
	GetPosition(var_62_cvector);
	GetEyesHeight(var_60_float);
	var_70_float = GetByIndex(var_62_cvector, 1);
	var_70_float = var_70_float + var_60_float;
	SetByIndex(var_62_cvector, 1) = var_70_float;
	var_63_cvector = var_61_cvector - var_62_cvector;
	var_71_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_72_int = var_63_cvector | var_63_cvector;
	var_73_float = sqrt(var_72_int);
	var_63_cvector = var_63_cvector / var_73_float;
	var_64_cvector = -var_63_cvector;
	var_74_float = var_63_cvector * var_50_float;
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_76_cvector = var_64_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1281(var_75_cvector, var_76_cvector);
	var_84_float = var_75_cvector * (int)25;
	var_85_int = var_74_float + var_84_float;
	var_65_cvector = var_85_int - CVector(0.0, 10.0, 0.0);
	var_66_cvector = var_62_cvector + var_65_cvector;
	IsOverrideActive(var_67_bool);
	var_87_bool = var_67_bool;
	if(var_87_bool != 0) {
		var_48_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_66_cvector, var_64_cvector, (bool)1);
	var_89_float = GetByIndex(var_65_cvector, 0);
	var_90_float = GetByIndex(var_65_cvector, 2);
	Rotate(var_89_float, var_90_float);
	var_91_bool = 0;
	func_1338(var_91_bool);
	if(var_91_bool != 0) {
	} else {
		HasAnimationTrack(var_68_bool, "head");
		var_93_bool = var_68_bool;
		if(var_93_bool == 0) goto Label_1060;
		LookAsyncCamera("head");
	}
Label_1060:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_48_bool = 1;
	return 18;
	
}


func_742(var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_93_float, var_94_float);
	return 0;
}


func_1253(var_143_bool, var_144_string)
{
	var_145_bool = 0; var_146_bool = 0;
	var_147_bool = 0;
	func_1338(var_147_bool);
	if(var_147_bool != 0) {
		lshHasSpeech(var_146_bool, var_144_string);
		var_148_bool = var_146_bool;
		if(var_148_bool != 0) {
			lshPlaySpeech(var_144_string);
			var_143_bool = 1;
			return 2;
		}
	}
	var_143_bool = 0;
	return 2;
}


func_747(var_24_bool)
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
	func_965(var_31_float, var_32_object);
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


func_1268()
{
	var_19_bool = 0;
	func_1338(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_244(var_0_object, var_269_int, var_270_object)
{
	var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0;
	var_0_object = var_270_object;
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0;
	var_270_object = var_281_object;
	func_997(var_280_bool, var_281_object, (float)70.0);
	var_283_bool = var_280_bool == 0; //@nz
	if(var_283_bool != 0) {
		var_269_int = -2;
		return 8;
	}
	CreateDialog(var_276_object);
	var_284_int = 0;
	func_1332(var_284_int);
	@@var_276_object:SetNPCName(var_284_int);
	var_285_int = 0;
	func_1330(var_285_int);
	@@var_276_object:SetNPCDescription(var_285_int);
	var_286_string = "";
	func_1334(var_286_string);
	@@var_276_object:SetPhoto(var_286_string);
	var_287_string = "";
	func_1336(var_287_string);
	@@var_276_object:SetPhoto2(var_287_string);
	var_288_int = 0;
	func_1340(var_288_int);
	@@var_276_object:SetPlayerName(var_288_int);
	IsOverrideActive(var_277_bool);
	var_289_bool = var_277_bool;
	if(var_289_bool != 0) {
		var_269_int = -2;
		return 8;
	}
	DoDialog(var_276_object);
	var_290_bool = 0; var_291_object = Obj();
	func_1275(Obj());
	var_292_object = var_291_object;
	func_1084(var_290_bool, var_291_object);
	var_293_object = Obj(); var_294_object = Obj();
	var_270_object = var_293_object;
	var_276_object = var_294_object;
	TaskCall(3);
	func_325(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object);
	TaskReturn();
	@@var_276_object:IsDialogEnd(var_279_bool);
	
Label_307:
	var_326_bool = var_279_bool == 0; //@nz
	if(var_326_bool != 0) {
		sync();
		@@var_276_object:IsDialogEnd(var_279_bool);
		goto Label_307;
	}
	var_270_object = Obj();
	func_1066();
	StopDialog(var_276_object);
	@@var_276_object:GetReturnValue((int)-1);
	var_278_int = var_269_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1142(var_120_bool, var_121_object)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = "";
	var_127_string = "c";
	var_128_int = 0;
	
Label_1145:
	if((int)1 != 0) {
		var_134_int = var_128_int + (int)1;
		var_135_int = var_127_string + var_134_int;
		@@var_121_object:HasProperty(var_135_int, var_129_bool);
		var_136_bool = var_129_bool == 0; //@nz
		if(var_136_bool != 0) {
		} else {
			var_128_int = var_128_int + (int)1;
			goto Label_1145;
		}
	}
	var_137_bool = var_128_int == 0; //@nz
	if(var_137_bool != 0) {
		var_120_bool = 0;
		return 10;
	}
	var_130_int = 0;
	var_139_bool = var_128_int > (int)1;
	if(var_139_bool != 0) {
		irand(var_130_int, var_128_int);
	}
	var_141_int = var_130_int + (int)1;
	var_142_int = var_127_string + var_141_int;
	@@var_121_object:GetProperty(var_142_int, var_131_string);
	var_143_bool = 0; var_144_string = "";
	var_131_string = var_144_string;
	func_1253(var_143_bool, var_144_string);
	var_143_bool = var_120_bool;
	return 10;
	
}


func_503(var_0_object, var_329_int, var_330_object)
{
	var_332_object = Obj(); var_333_bool = 0; var_334_int = 0; var_335_bool = 0; var_336_object = Obj(); var_337_bool = 0; var_338_int = 0; var_339_bool = 0;
	var_0_object = var_330_object;
	var_340_bool = 0; var_341_object = Obj(); var_342_float = 0;
	var_330_object = var_341_object;
	func_997(var_340_bool, var_341_object, (float)70.0);
	var_343_bool = var_340_bool == 0; //@nz
	if(var_343_bool != 0) {
		var_329_int = -2;
		return 8;
	}
	CreateDialog(var_336_object);
	var_344_int = 0;
	func_1332(var_344_int);
	@@var_336_object:SetNPCName(var_344_int);
	var_345_int = 0;
	func_1330(var_345_int);
	@@var_336_object:SetNPCDescription(var_345_int);
	var_346_string = "";
	func_1334(var_346_string);
	@@var_336_object:SetPhoto(var_346_string);
	var_347_string = "";
	func_1336(var_347_string);
	@@var_336_object:SetPhoto2(var_347_string);
	var_348_int = 0;
	func_1340(var_348_int);
	@@var_336_object:SetPlayerName(var_348_int);
	IsOverrideActive(var_337_bool);
	var_349_bool = var_337_bool;
	if(var_349_bool != 0) {
		var_329_int = -2;
		return 8;
	}
	DoDialog(var_336_object);
	var_350_bool = 0; var_351_object = Obj();
	func_1275(Obj());
	var_352_object = var_351_object;
	func_1084(var_350_bool, var_351_object);
	var_353_object = Obj(); var_354_object = Obj();
	var_330_object = var_353_object;
	var_336_object = var_354_object;
	TaskCall(5);
	func_584(var_355_object, var_356_object, var_357_string, var_358_bool, var_353_object, var_354_object);
	TaskReturn();
	@@var_336_object:IsDialogEnd(var_339_bool);
	
Label_566:
	var_383_bool = var_339_bool == 0; //@nz
	if(var_383_bool != 0) {
		sync();
		@@var_336_object:IsDialogEnd(var_339_bool);
		goto Label_566;
	}
	var_330_object = Obj();
	func_1066();
	StopDialog(var_336_object);
	@@var_336_object:GetReturnValue((int)-1);
	var_338_int = var_329_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_889()
{
	var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_992(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 12;
	}
	func_1313((int)0);
	var_35_int = var_27_int;
	var_28_int = 0;
	
Label_903:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_28_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_992(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		var_52_bool = var_27_int == 0; //@nz
		if(var_52_bool != 0) {
			Sleep((int)3, var_29_bool);
			var_54_bool = var_29_bool == 0; //@nz
			if(var_54_bool != 0) {
			} else {
		} else {
				irand(var_30_int, var_27_int);
				irand(var_31_int, (int)5);
				var_60_bool = var_31_int != (int)0;
				if(var_60_bool != 0) {
					var_30_int = 0;
				}
				var_62_string = ""; var_63_int = 0;
				var_30_int = var_63_int;
				func_1306(var_62_string, var_63_int);
				PlayAnimation("all", var_62_string);
				WaitForAnimEnd(var_32_bool);
				var_64_bool = var_32_bool == 0; //@nz
				if(var_64_bool == 0) goto Label_944;
				goto Label_955;
		}
		Label_944:
			var_55_bool = 0;
			func_958(var_55_bool);
			var_56_bool = var_55_bool == 0; //@nz
			if(var_56_bool != 0) {
				goto Label_955;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_903;

		}
	}
Label_955:
	ResetAAS();
	return 12;
	
}


func_1275(var_111_object)
{
	var_112_object = Obj(); var_113_object = Obj();
	self(var_113_object);
	var_113_object = var_111_object;
	return 2;
}
EMIT "Stack[-1] = 0";


