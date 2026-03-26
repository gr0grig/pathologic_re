// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Declaim|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Shyness|W:Gasp|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:Can't find lsh animation : |W:k4q02|W:k4q02MarkGotoTheater|W:pt_map_theater|A:AddMark|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Mark.png|W:ui/NPC_Mark_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1f1
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xba vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1e9 vars=object
// @EVENT_26: op=0x1f5 vars=string
// @EVENT_6: op=0x211 vars=
// @PE: 0x51,0xa4,0xba,0x1e9,0x373,0x383

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_818();
		var_11_bool = var_7_bool == (int)27077;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_860();
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_883(var_56_object);
		}
		var_82_bool = var_7_bool == (int)43034;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_860();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_883(var_86_object);
		}
		var_88_bool = var_6_int == (int)27074;
		if(var_88_bool != 0) {
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_899(var_90_object);
			if(var_89_bool != 0) {
				var_97_string = "";
				func_164(var_7_bool, "Declaim");
				@@@var_0_object:SetMessage((int)525762);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)529224, (int)43014, (int)30677);
				@@@var_0_object:AddReply((int)529229, (int)43754, (int)30682);
				return 0;
			}
			var_121_string = "";
			func_164(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525766);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525767, (int)-1, (int)27079);
			@@@var_0_object:AddReply((int)529227, (int)-1, (int)30680);
			return 0;
		}
		var_130_bool = var_6_int == (int)43754;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_164(var_7_bool, "Declaim");
			@@@var_0_object:SetMessage((int)541585);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541586, (int)30678, (int)43755);
			@@@var_0_object:AddReply((int)541587, (int)43016, (int)43757);
			return 0;
		}
		var_140_bool = var_6_int == (int)43014;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_164(var_7_bool, "Declaim");
			@@@var_0_object:SetMessage((int)540934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540935, (int)43016, (int)43015);
			@@@var_0_object:AddReply((int)540938, (int)43019, (int)43018);
			return 0;
		}
		var_150_bool = var_6_int == (int)43019;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_164(var_7_bool, "Shyness");
			@@@var_0_object:SetMessage((int)540939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540940, (int)43016, (int)43020);
			return 0;
		}
		var_157_bool = var_6_int == (int)43016;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_164(var_7_bool, "Gasp");
			@@@var_0_object:SetMessage((int)540936);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540937, (int)43022, (int)43017);
			@@@var_0_object:AddReply((int)540943, (int)43022, (int)43024);
			return 0;
		}
		var_167_bool = var_6_int == (int)43022;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_164(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540942, (int)30678, (int)43023);
			@@@var_0_object:AddReply((int)540944, (int)43027, (int)43026);
			return 0;
		}
		var_177_bool = var_6_int == (int)43027;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_164(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540945);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540946, (int)43029, (int)43028);
			return 0;
		}
		var_184_bool = var_6_int == (int)43029;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_164(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540948, (int)30678, (int)43030);
			return 0;
		}
		var_191_bool = var_6_int == (int)30678;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_164(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)529225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529226, (int)30681, (int)30679);
			@@@var_0_object:AddReply((int)540949, (int)30681, (int)43032);
			return 0;
		}
		var_201_bool = var_6_int == (int)30681;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_164(var_7_bool, "Shyness");
			@@@var_0_object:SetMessage((int)529228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525763, (int)27076, (int)27075);
			return 0;
		}
		var_208_bool = var_6_int == (int)27076;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_164(var_7_bool, "Shyness");
			@@@var_0_object:SetMessage((int)525764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525765, (int)-1, (int)27077);
			@@@var_0_object:AddReply((int)540950, (int)-1, (int)43034);
			return 0;
		}
		var_3_string = true;
		var_217_bool = 0;
		func_1040(var_217_bool);
		if(var_217_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb";
	
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
			func_545(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_825(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_528;
		var_0_object = false;
	}
Label_528:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_545(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_825(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_497:
	Hold();
	goto Label_497;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_547(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1034(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1032(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1036(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1038(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1015(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_825(Obj());
	var_81_object = var_80_object;
	func_634(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_239_bool = var_17_bool == 0; //@nz
	if(var_239_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_616();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_899(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_841(var_183_int, "k4q02");
	var_188_bool = var_183_int == (int)1;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_772(var_215_string)
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


func_1032(var_67_int)
{
	var_67_int = 515544;
	return 0;
}


func_1034(var_66_int)
{
	var_66_int = 502869;
	return 0;
}


func_1036(var_68_string)
{
	var_68_string = "ui/NPC_Mark.png";
	return 0;
}


func_1038(var_69_string)
{
	var_69_string = "ui/NPC_Mark_b.png";
	return 0;
}


func_911()
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateDiaryEntry(var_33_object, (int)381, (int)2, (int)525787);
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0;
	var_33_object = var_38_object;
	func_937(var_37_bool, var_38_object, (int)378);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1040(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_788(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0;
	lshHasAnimation(var_200_bool, var_193_string);
	var_203_bool = var_200_bool;
	if(var_203_bool != 0) {
		lshGetAnimTimes(var_193_string, var_201_float, var_202_float);
		lshPlayAnimation(var_201_float, var_202_float, var_194_bool);
	} else {
		var_205_int = "Can't find lsh animation : " + var_193_string;
		Trace(var_205_int);
	}
	return 6;
	
}


func_924(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj();
	GetDiaryRoot(var_48_object);
	var_49_bool = var_48_object == 0; //@nz
	if(var_49_bool != 0) {
		Trace("Can't retrieve diary root");
		var_46_object = 0;
		return 2;
	}
	var_48_object = var_46_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_545(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_547(var_18_bool, var_19_object, var_20_float)
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
	func_831(var_45_cvector, var_46_cvector);
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
	func_1040(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_610;
		LookAsyncCamera("head");
	}
Label_610:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_164(var_2_object, var_189_string)
{
	var_190_bool = 0;
	func_1040(var_190_bool);
	var_191_bool = var_190_bool == 0; //@nz
	if(var_191_bool != 0) {
		return 0;
	}
	var_192_bool = var_189_string == var_2_object;
	if(var_192_bool != 0) {
		return 0;
	}
	var_193_string = ""; var_194_bool = 0;
	var_189_string = var_193_string;
	var_196_bool = var_189_string == "";
	if(var_196_bool != 0) {
		var_194_bool = 0;
	} else {
		var_194_bool = 1;
	}
	func_788(var_193_string, var_194_bool);
	var_2_object = var_189_string;
	return 0;
	
}


func_803(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1040(var_117_bool);
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


func_937(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0;
	func_924(Obj());
	var_46_object = var_43_object;
	@@var_43_object:Find(var_39_int, var_44_object);
	var_51_bool = var_44_object == 0; //@nz
	if(var_51_bool != 0) {
		var_53_int = "Can't find diary parent with id: " + var_39_int;
		Trace(var_53_int);
		var_37_bool = 0;
		return 6;
	}
	@@var_44_object:AddChild(var_38_object);
	SendWorldWndMessage((int)7);
	@@var_38_object:GetCategory(var_45_int);
	SetDiarySection(var_45_int);
	var_37_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_818()
{
	var_9_bool = 0;
	func_1040(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_692(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_695:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_695;
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
	func_803(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_825(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_831(var_45_cvector, var_46_cvector)
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


func_965(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetMainOutdoorScene(var_21_object);
	var_23_bool = var_21_object == 0; //@ne
	if(var_23_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_22_object = 0;
		var_22_object = var_18_object;
		return 4;
	}
	@@var_21_object:GetMap(var_22_object);
	var_22_object = var_18_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_841(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_846(var_29_float)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_31_float = var_29_float;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_899(var_182_object);
		if(var_181_bool != 0) {
			var_189_string = "";
			func_164(var_175_object, "Declaim");
			@@@var_0_object:SetMessage((int)525762);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529224, (int)43014, (int)30677);
			@@@var_0_object:AddReply((int)529229, (int)43754, (int)30682);
		} else {
				var_231_string = "";
				func_164(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)525766);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525767, (int)-1, (int)27079);
				@@@var_0_object:AddReply((int)529227, (int)-1, (int)30680);
				goto Label_134;
		}
	}
Label_134:
	var_213_bool = 0;
	func_1040(var_213_bool);
	if(var_213_bool != 0) {

	Label_138:
		lshWaitForAnimEnd();
		var_214_string = var_3_string;
		if(var_214_string != 0) {
		} else {
			var_215_string = "";
			var_215_string = var_2_object;
			func_772(var_215_string);
			goto Label_138;
	}
		PlayAnimation("all", "idle");

	Label_153:
		WaitForAnimEnd();
		var_228_string = var_3_string;
		if(var_228_string != 0) {
			goto Label_163;
		}
		PlayAnimation("all", "idle");
		goto Label_153;

	}
	goto Label_163;
	
Label_163:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_851(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_982(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0;
	GetMainOutdoorScene(var_67_object);
	var_69_bool = var_67_object == 0; //@ne
	if(var_69_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_67_object:GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector);
	var_71_bool = var_68_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_73_int = "Warning: outdoor scene locator " + var_58_string;
		var_75_int = var_73_int + " doesnt exist";
		Trace(var_75_int);
	}
	@@var_67_object:GetMap(var_57_object);
	var_76_bool = var_57_object == 0; //@ne
	if(var_76_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_78_float = GetByIndex(var_65_cvector, 0);
	var_79_float = GetByIndex(var_65_cvector, 2);
	@@var_57_object:SetMapParams(var_78_float, var_79_float, var_59_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_729(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_851(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_738:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_738;
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
	func_803(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_860()
{
	var_14_object = Obj(); var_15_object = Obj();
	SetVariable("k4q02", (int)2);
	func_965(Obj());
	var_18_object = var_15_object;
	var_29_float = 0;
	func_846(var_29_float);
	@@var_15_object:AddMark("k4q02MarkGotoTheater", "pt_map_theater", (int)0, (int)539602, var_29_float);
	func_911();
	return 2;
}
EMIT "Stack[-1] = 0";


func_616()
{
	var_241_bool = 0; var_242_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_244_bool = 0;
	func_1040(var_244_bool);
	if(var_244_bool != 0) {
	} else {
		HasAnimationTrack(var_242_bool, "head");
		var_246_bool = var_242_bool;
		if(var_246_bool == 0) goto Label_633;
		UnlookAsync("head");
	}
Label_633:
	return 2;
	
}


func_883(var_56_object)
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0;
	func_965(Obj());
	var_60_object = var_57_object;
	func_982(var_57_object, "pt_map_theater", (float)2);
	var_80_object = Obj();
	func_965(var_80_object);
	@@var_56_object:ShowMap(var_80_object);
	return 0;
}


func_1015(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x406";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_634(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_692(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_729(var_121_bool, var_122_object);
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
		func_729(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_692(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_690;
	
Label_690:
	var_79_bool = 1;
	return 4;
	
}


