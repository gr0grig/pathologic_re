// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,Trigger/2,HasAnimation/3,SetVariable/2,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:oob1Birdmask1_1|W:quest_b1_01|W:remove1|W:pt_map_bigvlad|A:ShowMap|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x267
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb8 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x271 vars=object
// @EVENT_7: op=0x2a6 vars=int
// @PE: 0x4a,0xa2,0xb8,0x271,0x27c,0x2a6,0x2bd,0x3f3,0x3fe,0x40e

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_943();
		var_15_bool = var_11_object == (int)19421;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1022(var_17_object);
		}
		var_49_bool = var_11_object == (int)19422;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_1022(var_51_object);
		}
		var_53_bool = var_10_bool == (int)19238;
		if(var_53_bool != 0) {
			var_54_bool = 0; var_55_object = Obj();
			var_55_object = var_1_object;
			func_1038(var_55_object);
			if(var_54_bool != 0) {
				var_62_object = Obj(); var_63_object = Obj();
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_1011();
				var_72_string = "";
				func_162(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)518119);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518120, (int)19389, (int)19239);
				@@@var_0_object:AddReply((int)518319, (int)19426, (int)19423);
				return 0;
			}
			var_96_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)520033);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520034, (int)-1, (int)21218);
			@@@var_0_object:AddReply((int)527016, (int)-1, (int)28299);
			return 0;
		}
		var_105_bool = var_10_bool == (int)19426;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518323, (int)19429, (int)19427);
			@@@var_0_object:AddReply((int)518328, (int)28297, (int)19433);
			return 0;
		}
		var_115_bool = var_10_bool == (int)28297;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527014);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527015, (int)19389, (int)28298);
			return 0;
		}
		var_122_bool = var_10_bool == (int)19429;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518326, (int)19389, (int)19430);
			return 0;
		}
		var_129_bool = var_10_bool == (int)19389;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518287, (int)19391, (int)19390);
			@@@var_0_object:AddReply((int)518320, (int)19391, (int)19424);
			@@@var_0_object:AddReply((int)518327, (int)19391, (int)19432);
			return 0;
		}
		var_142_bool = var_10_bool == (int)19391;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518307, (int)19412, (int)19411);
			@@@var_0_object:AddReply((int)518321, (int)19436, (int)19425);
			return 0;
		}
		var_152_bool = var_10_bool == (int)19436;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518332, (int)19412, (int)19440);
			@@@var_0_object:AddReply((int)518333, (int)-1, (int)19441);
			return 0;
		}
		var_162_bool = var_10_bool == (int)19412;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518308);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518334, (int)19444, (int)19443);
			return 0;
		}
		var_169_bool = var_10_bool == (int)19444;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518309, (int)19414, (int)19413);
			@@@var_0_object:AddReply((int)518340, (int)19451, (int)19450);
			return 0;
		}
		var_179_bool = var_10_bool == (int)19451;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518341);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518342, (int)19414, (int)19452);
			return 0;
		}
		var_186_bool = var_10_bool == (int)19414;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518310);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518311, (int)19417, (int)19415);
			@@@var_0_object:AddReply((int)527138, (int)19417, (int)28436);
			return 0;
		}
		var_196_bool = var_10_bool == (int)19417;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527017, (int)28301, (int)28300);
			@@@var_0_object:AddReply((int)518343, (int)19455, (int)19454);
			return 0;
		}
		var_206_bool = var_10_bool == (int)19455;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518344);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518345, (int)19457, (int)19456);
			return 0;
		}
		var_213_bool = var_10_bool == (int)19457;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518346);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518347, (int)19418, (int)19458);
			@@@var_0_object:AddReply((int)518348, (int)-1, (int)19459);
			return 0;
		}
		var_223_bool = var_10_bool == (int)28301;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527018);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518312, (int)19418, (int)19416);
			return 0;
		}
		var_230_bool = var_10_bool == (int)19418;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518315, (int)19420, (int)19419);
			@@@var_0_object:AddReply((int)518339, (int)19420, (int)19449);
			return 0;
		}
		var_240_bool = var_10_bool == (int)19420;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518316);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518317, (int)-1, (int)19421);
			@@@var_0_object:AddReply((int)518318, (int)-1, (int)19422);
			return 0;
		}
		var_3_string = true;
		var_249_bool = 0;
		func_985(var_249_bool);
		if(var_249_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb9";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_701(var_9_object, var_10_object);
	var_14_int = 0; var_15_object = Obj();
	var_10_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_663(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_932(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_700;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_700:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_615:
	var_10_float = 0; var_11_float = 0;
	func_636(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_615;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_814(var_25_bool, var_26_object, (float)130.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_979(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_977(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_981(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_983(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_1100(var_77_int);
	@@var_21_object:SetPlayerName(var_77_int);
	IsOverrideActive(var_22_bool);
	var_85_bool = var_22_bool;
	if(var_85_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_86_object = Obj(); var_87_object = Obj();
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_56:
	var_161_bool = var_24_bool == 0; //@nz
	if(var_161_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_883();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_901(var_137_string)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0;
	lshHasAnimation(var_141_bool, var_137_string);
	var_144_bool = var_141_bool;
	if(var_144_bool != 0) {
		lshGetAnimTimes(var_137_string, var_142_float, var_143_float);
		lshPlayAnimation(var_142_float, var_143_float, (bool)0);
	} else {
		var_147_int = "Can't find lsh animation : " + var_137_string;
		Trace(var_147_int);
	}
	return 6;
	
}


func_1038(var_93_bool)
{
	var_95_int = 0; var_96_string = "";
	func_960(var_95_int, "oob1Birdmask1_1");
	var_100_bool = var_95_int == (int)0;
	if(var_100_bool != 0) {
		var_93_bool = 1;
		return 0;
	}
	var_93_bool = 0;
	return 0;
}


func_917(var_115_string, var_116_bool)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0;
	lshHasAnimation(var_122_bool, var_115_string);
	var_125_bool = var_122_bool;
	if(var_125_bool != 0) {
		lshGetAnimTimes(var_115_string, var_123_float, var_124_float);
		lshPlayAnimation(var_123_float, var_124_float, var_116_bool);
	} else {
		var_127_int = "Can't find lsh animation : " + var_115_string;
		Trace(var_127_int);
	}
	return 6;
	
}


func_663(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_801(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_1050(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetMainOutdoorScene(var_24_object);
	var_26_bool = var_24_object == 0; //@ne
	if(var_26_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_25_object = 0;
		var_25_object = var_21_object;
		return 4;
	}
	@@var_24_object:GetMap(var_25_object);
	var_25_object = var_21_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_794(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_796()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_801(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_162(var_2_object, var_111_string)
{
	var_112_bool = 0;
	func_985(var_112_bool);
	var_113_bool = var_112_bool == 0; //@nz
	if(var_113_bool != 0) {
		return 0;
	}
	var_114_bool = var_111_string == var_2_object;
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_string = ""; var_116_bool = 0;
	var_111_string = var_115_string;
	var_118_bool = var_111_string == "";
	if(var_118_bool != 0) {
		var_116_bool = 0;
	} else {
		var_116_bool = 1;
	}
	func_917(var_115_string, var_116_bool);
	var_2_object = var_111_string;
	return 0;
	
}


func_932(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0);
	@@var_27_object:GetEyesHeight(var_30_float);
	var_31_cvector = CVector(0.0, 0.0, 0.0);
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	LookAsync(var_27_object, "head", var_31_cvector);
	return 4;
}


func_809(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_1067(var_18_object, var_19_string, var_20_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_bool = 0;
	GetMainOutdoorScene(var_34_object);
	var_36_bool = var_34_object == 0; //@ne
	if(var_36_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_34_object:GetLocator(var_19_string, var_35_bool, var_32_cvector, var_33_cvector);
	var_38_bool = var_35_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_40_int = "Warning: outdoor scene locator " + var_19_string;
		var_42_int = var_40_int + " doesnt exist";
		Trace(var_42_int);
	}
	@@var_34_object:GetMap(var_18_object);
	var_43_bool = var_18_object == 0; //@ne
	if(var_43_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_45_float = GetByIndex(var_32_cvector, 0);
	var_46_float = GetByIndex(var_32_cvector, 2);
	@@var_18_object:SetMapParams(var_45_float, var_46_float, var_20_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_814(var_25_bool, var_26_object, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0;
	@@var_26_object:GetPosition(var_38_cvector);
	@@var_26_object:GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_37_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	GetPosition(var_39_cvector);
	GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	var_47_float = var_47_float + var_37_float;
	SetByIndex(var_39_cvector, 1) = var_47_float;
	var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_int = var_40_cvector | var_40_cvector;
	var_50_float = sqrt(var_49_int);
	var_40_cvector = var_40_cvector / var_50_float;
	var_41_cvector = -var_40_cvector;
	var_51_float = var_40_cvector * var_27_float;
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_41_cvector ^ CVector(0.0, 1.0, 0.0);
	func_950(var_52_cvector, var_53_cvector);
	var_61_float = var_52_cvector * (int)25;
	var_62_int = var_51_float + var_61_float;
	var_42_cvector = var_62_int - CVector(0.0, 10.0, 0.0);
	var_43_cvector = var_39_cvector + var_42_cvector;
	IsOverrideActive(var_44_bool);
	var_64_bool = var_44_bool;
	if(var_64_bool != 0) {
		var_25_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_43_cvector, var_41_cvector, (bool)1);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	Rotate(var_66_float, var_67_float);
	var_68_bool = 0;
	func_985(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_877;
		LookAsyncCamera("head");
	}
Label_877:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_943()
{
	var_13_bool = 0;
	func_985(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_950(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_53_cvector | var_53_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_56_float;
	return 2;
}


func_701(var_2_object, var_3_string)
{
	func_796();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_960(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
	return 2;
}


func_965(var_105_bool, var_106_string, var_107_string)
{
	var_108_object = Obj(); var_109_object = Obj();
	FindActor(var_109_object, var_106_string);
	var_110_bool = var_109_object == 0; //@ne
	if(var_110_bool != 0) {
		var_105_bool = 0;
		return 2;
	}
	Trigger(var_109_object, var_107_string);
	var_105_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0; var_94_object = Obj();
		var_94_object = var_1_object;
		func_1038(var_94_object);
		if(var_93_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_1011();
			var_111_string = "";
			func_162(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)518119);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518120, (int)19389, (int)19239);
			@@@var_0_object:AddReply((int)518319, (int)19426, (int)19423);
		} else {
				var_153_string = "";
				func_162(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)520033);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520034, (int)-1, (int)21218);
				@@@var_0_object:AddReply((int)527016, (int)-1, (int)28299);
				goto Label_132;
		}
	}
Label_132:
	var_135_bool = 0;
	func_985(var_135_bool);
	if(var_135_bool != 0) {

	Label_136:
		lshWaitForAnimEnd();
		var_136_string = var_3_string;
		if(var_136_string != 0) {
		} else {
			var_137_string = "";
			var_137_string = var_2_object;
			func_901(var_137_string);
			goto Label_136;
	}
		PlayAnimation("all", "idle");

	Label_151:
		WaitForAnimEnd();
		var_150_string = var_3_string;
		if(var_150_string != 0) {
			goto Label_161;
		}
		PlayAnimation("all", "idle");
		goto Label_151;

	}
	goto Label_161;
	
Label_161:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_715()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_809(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 14;
	}
	func_994((int)0);
	var_35_int = var_26_int;
	var_27_int = 0;
	
Label_729:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_27_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_809(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		irand(var_28_int, (int)3);
		var_54_bool = var_28_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = var_26_int;
			if(var_55_int == 0) goto Label_762;
			irand(var_29_int, var_26_int);
			var_57_string = ""; var_58_int = 0;
			var_29_int = var_58_int;
			func_987(var_57_string, var_58_int);
			PlayAnimation("all", var_57_string);
			WaitForAnimEnd(var_30_bool);
			var_59_bool = var_30_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
		} else {
				var_64_bool = var_28_int == (int)1;
				if(var_64_bool != 0) {
					rand(var_31_float, (int)4);
					var_67_int = var_31_float + (int)1;
					Sleep(var_67_int, var_32_bool);
					var_68_bool = var_32_bool == 0; //@nz
					if(var_68_bool != 0) {
						goto Label_791;
					}
					goto Label_780;
				}
				var_69_int = var_27_int;
				if(var_69_int == 0) goto Label_780;
				goto Label_791;
		}
		Label_780:
			var_60_bool = 0;
			func_794(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_791;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_729;

		}
	}
Label_791:
	ResetAAS();
	return 14;
	
}


func_1100(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x45b";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_977(var_74_int)
{
	var_74_int = 515571;
	return 0;
}


func_979(var_73_int)
{
	var_73_int = 504029;
	return 0;
}


func_981(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
	return 0;
}


func_983(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_985(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_987(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_994(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_996:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_987(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_996;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_883()
{
	var_163_bool = 0; var_164_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_166_bool = 0;
	func_985(var_166_bool);
	if(var_166_bool != 0) {
	} else {
		HasAnimationTrack(var_164_bool, "head");
		var_168_bool = var_164_bool;
		if(var_168_bool == 0) goto Label_900;
		UnlookAsync("head");
	}
Label_900:
	return 2;
	
}


func_1011()
{
	SetVariable("oob1Birdmask1_1", (int)1);
	var_105_bool = 0; var_106_string = ""; var_107_string = "";
	func_965(var_105_bool, "quest_b1_01", "remove1");
	return 0;
}


func_636(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_10_float, var_11_float)
{
	var_12_bool = 0;
	func_809(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	SetTimer((int)10, (float)1.0);
	func_715();
	var_70_bool = var_3_string == 0; //@nz
	if(var_70_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1022(var_17_object)
{
	var_18_object = Obj(); var_19_string = ""; var_20_float = 0;
	func_1050(Obj());
	var_21_object = var_18_object;
	func_1067(var_18_object, "pt_map_bigvlad", (float)2);
	var_47_object = Obj();
	func_1050(var_47_object);
	@@var_17_object:ShowMap(var_47_object);
	return 0;
}


