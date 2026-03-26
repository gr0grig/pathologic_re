// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:Fear|W:all|W:idle|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png|W:oob11KlaraD1|W:b11q01VictimChoosed|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x26c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe2 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x270 vars=string
// @EVENT_6: op=0x284 vars=
// @EVENT_5: op=0x291 vars=
// @EVENT_7: op=0x2da vars=int
// @EVENT_45: op=0x31c vars=bool
// @EVENT_0: op=0x328 vars=object
// @PE: 0x51,0xcc,0xe2,0x264,0x26c,0x291,0x2da,0x300,0x31c,0x507,0x50d,0x519

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1216();
		var_12_bool = var_7_cvector == (int)23179;
		if(var_12_bool != 0) {
			var_13_bool = 0;
			var_13_bool = 0;
			var_14_bool = 0; var_15_object = Obj();
			var_15_object = var_1_object;
			func_1293(var_15_object);
			var_22_bool = var_14_bool == 0; //@nz
			if(var_22_bool != 0) {
				var_23_bool = 0; var_24_object = Obj();
				var_24_object = var_1_object;
				func_1305(var_24_object);
				if(var_23_bool != 0) {
					var_13_bool = 1;
				}
			}
			if(var_13_bool != 0) {
				var_29_object = Obj(); var_30_object = Obj();
				var_29_object = var_1_object;
				var_30_object = var_0_object;
				func_1287();
				var_33_string = "";
				func_204(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)522009);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523279, (int)24484, (int)24483);
				@@@var_0_object:AddReply((int)522010, (int)24503, (int)23180);
				@@@var_0_object:AddReply((int)523284, (int)24490, (int)24489);
				@@@var_0_object:AddReply((int)523286, (int)24492, (int)24491);
				@@@var_0_object:AddReply((int)523305, (int)24514, (int)24513);
				@@@var_0_object:AddReply((int)523278, (int)24486, (int)24482);
				@@@var_0_object:AddReply((int)523304, (int)-1, (int)24512);
				return 0;
			}
			var_72_string = "";
			func_204(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)522096);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522097, (int)-1, (int)23266);
			@@@var_0_object:AddReply((int)523318, (int)24533, (int)24532);
			return 0;
		}
		var_81_bool = var_7_cvector == (int)24533;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_204(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)523319);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523320, (int)-1, (int)24534);
			return 0;
		}
		var_88_bool = var_7_cvector == (int)24514;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_204(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)523306);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523307, (int)24516, (int)24515);
			@@@var_0_object:AddReply((int)523309, (int)24518, (int)24517);
			return 0;
		}
		var_98_bool = var_7_cvector == (int)24518;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_204(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)523310);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523312, (int)24508, (int)24521);
			@@@var_0_object:AddReply((int)523314, (int)24484, (int)24524);
			return 0;
		}
		var_108_bool = var_7_cvector == (int)24516;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_204(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)523308);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523311, (int)24508, (int)24519);
			@@@var_0_object:AddReply((int)523313, (int)24484, (int)24523);
			return 0;
		}
		var_118_bool = var_7_cvector == (int)24492;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_204(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)523287);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523300, (int)24508, (int)24506);
			return 0;
		}
		var_125_bool = var_7_cvector == (int)24490;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_204(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)523285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523290, (int)-1, (int)24495);
			@@@var_0_object:AddReply((int)523291, (int)-1, (int)24496);
			return 0;
		}
		var_135_bool = var_7_cvector == (int)24503;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_204(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)523298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523299, (int)24494, (int)24504);
			return 0;
		}
		var_142_bool = var_7_cvector == (int)24484;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_204(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523280);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523281, (int)24486, (int)24485);
			@@@var_0_object:AddReply((int)523315, (int)24494, (int)24527);
			return 0;
		}
		var_152_bool = var_7_cvector == (int)24486;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_204(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)523282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523288, (int)24494, (int)24493);
			@@@var_0_object:AddReply((int)523316, (int)24498, (int)24529);
			return 0;
		}
		var_162_bool = var_7_cvector == (int)24494;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_204(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523292, (int)24498, (int)24497);
			return 0;
		}
		var_169_bool = var_7_cvector == (int)24498;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_204(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523294, (int)24508, (int)24499);
			@@@var_0_object:AddReply((int)523295, (int)24501, (int)24500);
			return 0;
		}
		var_179_bool = var_7_cvector == (int)24501;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_204(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523301, (int)24508, (int)24507);
			@@@var_0_object:AddReply((int)523297, (int)-1, (int)24502);
			return 0;
		}
		var_189_bool = var_7_cvector == (int)24508;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_204(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523303, (int)-1, (int)24509);
			@@@var_0_object:AddReply((int)523317, (int)-1, (int)24531);
			return 0;
		}
		var_3_string = true;
		var_198_bool = 0;
		func_1285(var_198_bool);
		if(var_198_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe3";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_1_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = var_9_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_object = Obj();
			func_1223(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_643;
		var_1_object = false;
	}
Label_643:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1223(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_768();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_783();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_726();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_940(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_695(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_675(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1223(Obj());
				var_53_object = var_52_object;
				func_1090(var_51_bool, var_52_object);
			}
		} else {
			func_690(var_7_int);
			func_717();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_717();
	} else {
		var_14_string = "";
		func_1170("Neutral");
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		EventDisable(0);
		func_908();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_931(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_612(var_25_object);
		var_294_string = "";
		func_1170("Neutral");
		func_726();
		func_717();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_661(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_945(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1279(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1277(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1281(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1283(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1317(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1223(Obj());
	var_100_object = var_99_object;
	func_1032(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_285_bool = var_36_bool == 0; //@nz
	if(var_285_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_1014();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1281(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
	return 0;
}


func_768()
{
	func_908();
	func_726();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1283(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1285(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1287()
{
	SetVariable("oob11KlaraD1", (int)1);
	return 0;
}


func_1032(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1090(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1127(var_140_bool, var_141_object);
			var_175_bool = var_140_bool == 0; //@nz
			if(var_175_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		irand(var_106_int, (int)2);
		var_177_int = var_106_int;
		if(var_177_int != 0) {
			var_180_int = var_105_int + (int)1;
			var_182_int = var_180_int % (int)3;
			SetVariable("voice_common", var_182_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_185_bool = 0; var_186_object = Obj();
		var_99_object = var_186_object;
		func_1127(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1090(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1088;
	
Label_1088:
	var_98_bool = 1;
	return 4;
	
}


func_906(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_908()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1293(var_201_bool)
{
	var_203_int = 0; var_204_string = "";
	func_1239(var_203_int, "b11q01VictimChoosed");
	var_208_bool = var_203_int != (int)0;
	if(var_208_bool != 0) {
		var_201_bool = 1;
		return 0;
	}
	var_201_bool = 0;
	return 0;
}


func_783()
{
	StopGroup0();
	func_726();
	var_8_string = "";
	func_1170("Neutral");
	func_717();
	return 0;
}


func_913(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1170(var_261_string)
{
	var_262_bool = 0; var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_float = 0; var_267_float = 0;
	lshHasAnimation(var_265_bool, var_261_string);
	var_268_bool = var_265_bool;
	if(var_268_bool != 0) {
		lshGetAnimTimes(var_261_string, var_266_float, var_267_float);
		lshPlayAnimation(var_266_float, var_267_float, (bool)0);
	} else {
		var_271_int = "Can't find lsh animation : " + var_261_string;
		Trace(var_271_int);
	}
	return 6;
	
}


func_661(var_0_object)
{
	var_7_bool = 0;
	func_940(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_670:
	func_837();
	goto Label_670;
}
EMIT "Return(); Pop(0)";


func_1305(var_210_bool)
{
	var_212_int = 0; var_213_string = "";
	func_1239(var_212_int, "oob11KlaraD1");
	var_215_bool = var_212_int == (int)0;
	if(var_215_bool != 0) {
		var_210_bool = 1;
		return 0;
	}
	var_210_bool = 0;
	return 0;
}


func_921(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0;
	GetPosition(var_20_cvector);
	var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
	return 6;
}


func_1186(var_224_string, var_225_bool)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0;
	lshHasAnimation(var_231_bool, var_224_string);
	var_234_bool = var_231_bool;
	if(var_234_bool != 0) {
		lshGetAnimTimes(var_224_string, var_232_float, var_233_float);
		lshPlayAnimation(var_232_float, var_233_float, var_225_bool);
	} else {
		var_236_int = "Can't find lsh animation : " + var_224_string;
		Trace(var_236_int);
	}
	return 6;
	
}


func_931(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_921(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_675(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj();
	var_34_object = var_38_object;
	func_931(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1317(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x534";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_940(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_945(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1229(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_1285(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1008;
		LookAsyncCamera("head");
	}
Label_1008:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_690(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1201(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1285(var_136_bool);
	if(var_136_bool != 0) {
		lshHasSpeech(var_135_bool, var_133_string);
		var_137_bool = var_135_bool;
		if(var_137_bool != 0) {
			lshPlaySpeech(var_133_string);
			var_132_bool = 1;
			return 2;
		}
	}
	var_132_bool = 0;
	return 2;
}


func_695(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	FindActor(var_18_object, "player");
	var_21_bool = var_18_object == 0; //@nz
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_float = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_913(var_22_float, var_23_object);
	var_31_bool = var_22_float > (float)90000.0;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_18_object);
	var_19_bool = var_15_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1216()
{
	var_10_bool = 0;
	func_1285(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1090(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1093:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1093;
		}
	}
	var_126_bool = var_117_int == 0; //@nz
	if(var_126_bool != 0) {
		var_109_bool = 0;
		return 10;
	}
	var_119_int = 0;
	var_128_bool = var_117_int > (int)1;
	if(var_128_bool != 0) {
		irand(var_119_int, var_117_int);
	}
	var_130_int = var_119_int + (int)1;
	var_131_int = var_116_string + var_130_int;
	@@var_110_object:GetProperty(var_131_int, var_120_string);
	var_132_bool = 0; var_133_string = "";
	var_120_string = var_133_string;
	func_1201(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_837()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_940(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1260((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_851:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_940(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_42_bool = var_17_int == 0; //@nz
		if(var_42_bool != 0) {
			Sleep((int)3, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
			} else {
		} else {
				irand(var_20_int, var_17_int);
				irand(var_21_int, (int)5);
				var_50_bool = var_21_int != (int)0;
				if(var_50_bool != 0) {
					var_20_int = 0;
				}
				var_52_string = ""; var_53_int = 0;
				var_20_int = var_53_int;
				func_1253(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_892;
				goto Label_903;
		}
		Label_892:
			var_45_bool = 0;
			func_906(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_903;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_851;

		}
	}
Label_903:
	ResetAAS();
	return 12;
	
}


func_1223(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_204(var_2_object, var_220_string)
{
	var_221_bool = 0;
	func_1285(var_221_bool);
	var_222_bool = var_221_bool == 0; //@nz
	if(var_222_bool != 0) {
		return 0;
	}
	var_223_bool = var_220_string == var_2_object;
	if(var_223_bool != 0) {
		return 0;
	}
	var_224_string = ""; var_225_bool = 0;
	var_220_string = var_224_string;
	var_227_bool = var_220_string == "";
	if(var_227_bool != 0) {
		var_225_bool = 0;
	} else {
		var_225_bool = 1;
	}
	func_1186(var_224_string, var_225_bool);
	var_2_object = var_220_string;
	return 0;
	
}


func_717()
{
	var_296_float = 0; var_297_float = 0;
	rand(var_297_float, (int)8, (int)16);
	SetTimer((int)10, var_297_float);
	return 2;
}


func_1229(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0;
	var_69_int = var_65_cvector | var_65_cvector;
	var_68_float = sqrt(var_69_int);
	var_70_float = 9.999999974752427e-07;
	var_71_bool = var_68_float < var_70_float;
	if(var_71_bool != 0) {
		var_64_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_64_cvector = var_65_cvector / var_68_float;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0;
		var_200_bool = 0;
		var_201_bool = 0; var_202_object = Obj();
		var_202_object = var_1_object;
		func_1293(var_202_object);
		var_209_bool = var_201_bool == 0; //@nz
		if(var_209_bool != 0) {
			var_210_bool = 0; var_211_object = Obj();
			var_211_object = var_1_object;
			func_1305(var_211_object);
			if(var_210_bool != 0) {
				var_200_bool = 1;
			}
		}
		if(var_200_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_1287();
			var_220_string = "";
			func_204(var_194_object, "Neutral");
			@@@var_0_object:SetMessage((int)522009);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523279, (int)24484, (int)24483);
			@@@var_0_object:AddReply((int)522010, (int)24503, (int)23180);
			@@@var_0_object:AddReply((int)523284, (int)24490, (int)24489);
			@@@var_0_object:AddReply((int)523286, (int)24492, (int)24491);
			@@@var_0_object:AddReply((int)523305, (int)24514, (int)24513);
			@@@var_0_object:AddReply((int)523278, (int)24486, (int)24482);
			@@@var_0_object:AddReply((int)523304, (int)-1, (int)24512);
		} else {
				var_277_string = "";
				func_204(var_194_object, "Fear");
				@@@var_0_object:SetMessage((int)522096);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522097, (int)-1, (int)23266);
				@@@var_0_object:AddReply((int)523318, (int)24533, (int)24532);
				goto Label_174;
		}
	}
Label_174:
	var_259_bool = 0;
	func_1285(var_259_bool);
	if(var_259_bool != 0) {

	Label_178:
		lshWaitForAnimEnd();
		var_260_string = var_3_string;
		if(var_260_string != 0) {
		} else {
			var_261_string = "";
			var_261_string = var_2_object;
			func_1170(var_261_string);
			goto Label_178;
	}
		PlayAnimation("all", "idle");

	Label_193:
		WaitForAnimEnd();
		var_274_string = var_3_string;
		if(var_274_string != 0) {
			goto Label_203;
		}
		PlayAnimation("all", "idle");
		goto Label_193;

	}
	goto Label_203;
	
Label_203:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_726()
{
	KillTimer((int)10);
	return 0;
}


func_1239(var_203_int, var_204_string)
{
	var_205_int = 0; var_206_int = 0;
	GetVariable(var_204_string, var_206_int);
	var_206_int = var_203_int;
	return 2;
}


func_1244(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_612(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1253(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1127(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1244(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1136:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1136;
		}
	}
	var_166_bool = var_148_int == 0; //@nz
	if(var_166_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_168_bool = var_148_int > (int)1;
	if(var_168_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_170_int = var_150_int + (int)1;
	var_171_int = var_147_string + var_170_int;
	@@var_141_object:GetProperty(var_171_int, var_151_string);
	var_172_bool = 0; var_173_string = "";
	var_151_string = var_173_string;
	func_1201(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1260(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1262:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1253(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1262;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1014()
{
	var_287_bool = 0; var_288_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_290_bool = 0;
	func_1285(var_290_bool);
	if(var_290_bool != 0) {
	} else {
		HasAnimationTrack(var_288_bool, "head");
		var_292_bool = var_288_bool;
		if(var_292_bool == 0) goto Label_1031;
		UnlookAsync("head");
	}
Label_1031:
	return 2;
	
}


func_1277(var_86_int)
{
	var_86_int = 515540;
	return 0;
}


func_1279(var_85_int)
{
	var_85_int = 502865;
	return 0;
}


