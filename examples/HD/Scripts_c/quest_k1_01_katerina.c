// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Suffering|W:Penetrating|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:k1q01|W:k1q01KaterinaGotoAlexandr|W:pt_map_alexandr|A:AddMark|W:quest_k1_01|W:remove_katerina|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Katerina.png|W:ui/NPC_Katerina_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x180
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbf vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x184 vars=string
// @EVENT_6: op=0x198 vars=
// @EVENT_5: op=0x1a5 vars=
// @EVENT_7: op=0x1ee vars=int
// @EVENT_45: op=0x230 vars=bool
// @EVENT_0: op=0x23c vars=object
// @PE: 0x51,0xa9,0xbf,0x178,0x180,0x1a5,0x1ee,0x214,0x230,0x441,0x451

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_980();
		var_12_bool = var_8_bool == (int)25990;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1058();
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_1089(var_71_object);
		}
		var_97_bool = var_7_cvector == (int)25978;
		if(var_97_bool != 0) {
			var_98_bool = 0; var_99_object = Obj();
			var_99_object = var_1_object;
			func_1105(var_99_object);
			if(var_98_bool != 0) {
				var_106_string = "";
				func_169(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)524639);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524640, (int)27569, (int)25979);
				@@@var_0_object:AddReply((int)526284, (int)27569, (int)27562);
				return 0;
			}
			var_130_string = "";
			func_169(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524642, (int)27563, (int)25981);
			@@@var_0_object:AddReply((int)526287, (int)27567, (int)27565);
			@@@var_0_object:AddReply((int)526288, (int)-1, (int)27566);
			return 0;
		}
		var_142_bool = var_7_cvector == (int)27567;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_169(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526290, (int)-1, (int)27568);
			return 0;
		}
		var_149_bool = var_7_cvector == (int)27563;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_169(var_8_bool, "Suffering");
			@@@var_0_object:SetMessage((int)526285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526286, (int)-1, (int)27564);
			@@@var_0_object:AddReply((int)541700, (int)-1, (int)43882);
			return 0;
		}
		var_159_bool = var_7_cvector == (int)27569;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_169(var_8_bool, "Penetrating");
			@@@var_0_object:SetMessage((int)526291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526292, (int)25989, (int)27570);
			@@@var_0_object:AddReply((int)526293, (int)25989, (int)27572);
			return 0;
		}
		var_169_bool = var_7_cvector == (int)25989;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_169(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526296, (int)27577, (int)27576);
			return 0;
		}
		var_176_bool = var_7_cvector == (int)27577;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_169(var_8_bool, "Suffering");
			@@@var_0_object:SetMessage((int)526297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524651, (int)-1, (int)25990);
			return 0;
		}
		var_3_string = true;
		var_182_bool = 0;
		func_1259(var_182_bool);
		if(var_182_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
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
			func_987(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_407;
		var_1_object = false;
	}
Label_407:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_987(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_532();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_547();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_490();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_704(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_459(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_439(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_987(Obj());
				var_53_object = var_52_object;
				func_854(var_51_bool, var_52_object);
			}
		} else {
			func_454(var_7_int);
			func_481();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_481();
	} else {
		var_14_string = "";
		func_934("Neutral");
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
		func_672();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_695(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_376(var_25_object);
		var_270_string = "";
		func_934("Neutral");
		func_490();
		func_481();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_425(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_709(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1253(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1251(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1255(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1257(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1234(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_987(Obj());
	var_100_object = var_99_object;
	func_796(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_261_bool = var_36_bool == 0; //@nz
	if(var_261_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_778();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1025(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_1156(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0;
	func_1143(Obj());
	var_47_object = var_44_object;
	@@var_44_object:Find(var_40_int, var_45_object);
	var_52_bool = var_45_object == 0; //@nz
	if(var_52_bool != 0) {
		var_54_int = "Can't find diary parent with id: " + var_40_int;
		Trace(var_54_int);
		var_38_bool = 0;
		return 6;
	}
	@@var_45_object:AddChild(var_39_object);
	SendWorldWndMessage((int)7);
	@@var_39_object:GetCategory(var_46_int);
	SetDiarySection(var_46_int);
	var_38_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_778()
{
	var_263_bool = 0; var_264_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_266_bool = 0;
	func_1259(var_266_bool);
	if(var_266_bool != 0) {
	} else {
		HasAnimationTrack(var_264_bool, "head");
		var_268_bool = var_264_bool;
		if(var_268_bool == 0) goto Label_795;
		UnlookAsync("head");
	}
Label_795:
	return 2;
	
}


func_1034(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1041(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1043:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1034(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1043;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_532()
{
	func_672();
	func_490();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_796(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_854(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_891(var_140_bool, var_141_object);
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
		func_891(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_854(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_852;
	
Label_852:
	var_98_bool = 1;
	return 4;
	
}


func_670(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_672()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1184(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetMainOutdoorScene(var_22_object);
	var_24_bool = var_22_object == 0; //@ne
	if(var_24_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_23_object = 0;
		var_23_object = var_19_object;
		return 4;
	}
	@@var_22_object:GetMap(var_23_object);
	var_23_object = var_19_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1058()
{
	var_15_object = Obj(); var_16_object = Obj();
	SetVariable("k1q01", (int)1);
	func_1184(Obj());
	var_19_object = var_16_object;
	var_30_float = 0;
	func_1020(var_30_float);
	@@var_16_object:AddMark("k1q01KaterinaGotoAlexandr", "pt_map_alexandr", (int)1, (int)524727, var_30_float);
	func_1117();
	func_1130();
	var_64_bool = 0; var_65_string = ""; var_66_string = "";
	func_1008(var_64_bool, "quest_k1_01", "remove_katerina");
	return 2;
}
EMIT "Stack[-1] = 0";


func_547()
{
	StopGroup0();
	func_490();
	var_8_string = "";
	func_934("Neutral");
	func_481();
	return 0;
}


func_677(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_934(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0;
	lshHasAnimation(var_238_bool, var_234_string);
	var_241_bool = var_238_bool;
	if(var_241_bool != 0) {
		lshGetAnimTimes(var_234_string, var_239_float, var_240_float);
		lshPlayAnimation(var_239_float, var_240_float, (bool)0);
	} else {
		var_244_int = "Can't find lsh animation : " + var_234_string;
		Trace(var_244_int);
	}
	return 6;
	
}


func_169(var_2_object, var_208_string)
{
	var_209_bool = 0;
	func_1259(var_209_bool);
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
	func_950(var_212_string, var_213_bool);
	var_2_object = var_208_string;
	return 0;
	
}


func_425(var_0_object)
{
	var_7_bool = 0;
	func_704(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_434:
	func_601();
	goto Label_434;
}
EMIT "Return(); Pop(0)";


func_685(var_15_bool, var_16_cvector)
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


func_1201(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0;
	GetMainOutdoorScene(var_82_object);
	var_84_bool = var_82_object == 0; //@ne
	if(var_84_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_82_object:GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	var_86_bool = var_83_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_88_int = "Warning: outdoor scene locator " + var_73_string;
		var_90_int = var_88_int + " doesnt exist";
		Trace(var_90_int);
	}
	@@var_82_object:GetMap(var_72_object);
	var_91_bool = var_72_object == 0; //@ne
	if(var_91_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	@@var_72_object:SetMapParams(var_93_float, var_94_float, var_74_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_950(var_212_string, var_213_bool)
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


func_695(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_685(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_439(var_32_bool)
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
	func_695(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_704(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1089(var_71_object)
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0;
	func_1184(Obj());
	var_75_object = var_72_object;
	func_1201(var_72_object, "pt_map_alexandr", (float)2);
	var_95_object = Obj();
	func_1184(var_95_object);
	@@var_71_object:ShowMap(var_95_object);
	return 0;
}


func_709(var_37_bool, var_38_object, var_39_float)
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
	func_993(var_64_cvector, var_65_cvector);
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
	func_1259(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_772;
		LookAsyncCamera("head");
	}
Label_772:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_454(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_965(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1259(var_136_bool);
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


func_459(var_15_bool)
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
	func_677(var_22_float, var_23_object);
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_1105(var_201_object);
		if(var_200_bool != 0) {
			var_208_string = "";
			func_169(var_194_object, "Neutral");
			@@@var_0_object:SetMessage((int)524639);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524640, (int)27569, (int)25979);
			@@@var_0_object:AddReply((int)526284, (int)27569, (int)27562);
		} else {
				var_250_string = "";
				func_169(var_194_object, "Neutral");
				@@@var_0_object:SetMessage((int)524641);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524642, (int)27563, (int)25981);
				@@@var_0_object:AddReply((int)526287, (int)27567, (int)27565);
				@@@var_0_object:AddReply((int)526288, (int)-1, (int)27566);
				goto Label_139;
		}
	}
Label_139:
	var_232_bool = 0;
	func_1259(var_232_bool);
	if(var_232_bool != 0) {

	Label_143:
		lshWaitForAnimEnd();
		var_233_string = var_3_string;
		if(var_233_string != 0) {
		} else {
			var_234_string = "";
			var_234_string = var_2_object;
			func_934(var_234_string);
			goto Label_143;
	}
		PlayAnimation("all", "idle");

	Label_158:
		WaitForAnimEnd();
		var_247_string = var_3_string;
		if(var_247_string != 0) {
			goto Label_168;
		}
		PlayAnimation("all", "idle");
		goto Label_158;

	}
	goto Label_168;
	
Label_168:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1234(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4e1";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1105(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_1003(var_202_int, "k1q01");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_980()
{
	var_10_bool = 0;
	func_1259(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_854(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_857:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_857;
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
	func_965(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_601()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_704(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1041((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_615:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_704(var_41_bool);
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
				func_1034(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_656;
				goto Label_667;
		}
		Label_656:
			var_45_bool = 0;
			func_670(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_667;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_615;

		}
	}
Label_667:
	ResetAAS();
	return 12;
	
}


func_987(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1117()
{
	var_33_object = Obj(); var_34_object = Obj();
	CreateDiaryEntry(var_34_object, (int)318, (int)1, (int)524734);
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0;
	var_34_object = var_39_object;
	func_1156(var_38_bool, var_39_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_481()
{
	var_272_float = 0; var_273_float = 0;
	rand(var_273_float, (int)8, (int)16);
	SetTimer((int)10, var_273_float);
	return 2;
}


func_993(var_64_cvector, var_65_cvector)
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


func_1251(var_86_int)
{
	var_86_int = 515539;
	return 0;
}


func_1253(var_85_int)
{
	var_85_int = 502864;
	return 0;
}


func_1255(var_87_string)
{
	var_87_string = "ui/NPC_Katerina.png";
	return 0;
}


func_1257(var_88_string)
{
	var_88_string = "ui/NPC_Katerina_b.png";
	return 0;
}


func_490()
{
	KillTimer((int)10);
	return 0;
}


func_1259(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1130()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)319, (int)1, (int)524735);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_1156(var_61_bool, var_62_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1003(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


func_1008(var_64_bool, var_65_string, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj();
	FindActor(var_68_object, var_65_string);
	var_69_bool = var_68_object == 0; //@ne
	if(var_69_bool != 0) {
		var_64_bool = 0;
		return 2;
	}
	Trigger(var_68_object, var_66_string);
	var_64_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1143(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj();
	GetDiaryRoot(var_49_object);
	var_50_bool = var_49_object == 0; //@nz
	if(var_50_bool != 0) {
		Trace("Can't retrieve diary root");
		var_47_object = 0;
		return 2;
	}
	var_49_object = var_47_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_376(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_891(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1025(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_900:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_900;
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
	func_965(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1020(var_30_float)
{
	var_31_float = 0; var_32_float = 0;
	GetGameTime(var_32_float);
	var_32_float = var_30_float;
	return 2;
}


