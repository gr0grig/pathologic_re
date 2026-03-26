// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:Can't find lsh animation : |A:add|W:money|W:Money|W:reputation|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:ook4BirdmaskTheater1|W:k4q02BirdmaskGotoMaria|W:quest_k4_02|W:init_theater|W:money 500 removed|W:k4q02|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1d0
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcb vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x1da vars=object
// @EVENT_7: op=0x20f vars=int
// @PE: 0x4a,0xb5,0xcb,0x1da,0x1e5,0x20f,0x226,0x352,0x381,0x3dc,0x3e2,0x3eb,0x3f2,0x3fc,0x403,0x40f,0x41b,0x427,0x433

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_833();
		var_15_bool = var_11_object == (int)27064;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_994();
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_1020(var_44_object);
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_1010(var_84_object);
		}
		var_105_bool = var_11_object == (int)43039;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_994();
		}
		var_109_bool = var_11_object == (int)27080;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_988();
		}
		var_115_bool = var_11_object == (int)27082;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_1003();
		}
		var_125_bool = var_10_bool == (int)27061;
		if(var_125_bool != 0) {
			var_126_bool = 0;
			var_126_bool = 0;
			var_127_bool = 0; var_128_object = Obj();
			var_128_object = var_1_object;
			func_1027(var_128_object);
			if(var_127_bool != 0) {
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_1063(var_136_object);
				var_141_bool = var_135_bool == 0; //@nz
				if(var_141_bool != 0) {
					var_126_bool = 1;
				}
			}
			if(var_126_bool != 0) {
				var_142_string = "";
				func_181(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)525749);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525750, (int)27063, (int)27062);
				@@@var_0_object:AddReply((int)540951, (int)43036, (int)43035);
				return 0;
			}
			var_166_string = "";
			func_181(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)525753);
			@@@var_0_object:ClearReplies();
			var_168_bool = 0;
			var_168_bool = 0;
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_1039(var_170_object);
			if(var_169_bool != 0) {
				var_175_bool = 0; var_176_object = Obj();
				var_176_object = var_1_object;
				func_1051(var_176_object);
				if(var_175_bool != 0) {
					var_168_bool = 1;
				}
			}
			if(var_168_bool != 0) {
				@@@var_0_object:AddReply((int)525768, (int)27081, (int)27080);
			}
			@@@var_0_object:AddReply((int)525754, (int)-1, (int)27066);
			return 0;
		}
		var_188_bool = var_10_bool == (int)27081;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_181(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)525769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525770, (int)-1, (int)27082);
			return 0;
		}
		var_195_bool = var_10_bool == (int)43036;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_181(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)540952);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540953, (int)27063, (int)43037);
			@@@var_0_object:AddReply((int)542080, (int)44374, (int)44373);
			return 0;
		}
		var_205_bool = var_10_bool == (int)44374;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_181(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)542081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542082, (int)44377, (int)44375);
			@@@var_0_object:AddReply((int)542083, (int)44377, (int)44376);
			return 0;
		}
		var_215_bool = var_10_bool == (int)44377;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_181(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)542084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542085, (int)27063, (int)44379);
			return 0;
		}
		var_222_bool = var_10_bool == (int)27063;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_181(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)525751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529230, (int)30685, (int)30684);
			return 0;
		}
		var_229_bool = var_10_bool == (int)30685;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_181(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)529231);
			@@@var_0_object:ClearReplies();
			var_232_bool = 0; var_233_object = Obj();
			var_233_object = var_1_object;
			func_1075(var_232_bool, var_233_object);
			if(var_232_bool != 0) {
				@@@var_0_object:AddReply((int)525752, (int)-1, (int)27064);
			}
			@@@var_0_object:AddReply((int)540954, (int)-1, (int)43039);
			return 0;
		}
		var_3_string = true;
		var_247_bool = 0;
		func_962(var_247_bool);
		if(var_247_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcc";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_550(var_9_object, var_10_object);
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
		func_512(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_822(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_549;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_549:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_464:
	var_10_float = 0; var_11_float = 0;
	func_485(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_464;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_704(var_25_bool, var_26_object, (float)130.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_956(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_954(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_958(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_960(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_1150(var_77_int);
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
	var_172_bool = var_24_bool == 0; //@nz
	if(var_172_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_773();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_512(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_650(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_897(var_45_bool, var_46_object, var_47_float)
{
	var_48_bool = var_46_object == 0; //@nz
	if(var_48_bool != 0) {
		var_45_bool = 0;
		return 0;
	}
	var_50_bool = var_47_float > (int)0;
	if(var_50_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_81_bool = var_47_float < (int)0;
		if(var_81_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_918;
		}
		var_45_bool = 0;
		return 0;
	}
Label_918:
	var_52_float = 0;
	var_47_float = var_52_float;
	func_932(var_52_float);
	var_56_bool = 0; var_57_object = Obj(); var_58_string = ""; var_59_float = 0; var_60_float = 0; var_61_float = 0;
	var_46_object = var_57_object;
	var_47_float = var_59_float;
	func_670(var_56_bool, var_57_object, "reputation", var_59_float, (float)0, (float)1);
	var_45_bool = 1;
	return 0;
	
}


func_1027(var_94_bool)
{
	var_96_int = 0; var_97_string = "";
	func_861(var_96_int, "k4q02");
	var_101_bool = var_96_int == (int)1;
	if(var_101_bool != 0) {
		var_94_bool = 1;
		return 0;
	}
	var_94_bool = 0;
	return 0;
}


func_643(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_773()
{
	var_174_bool = 0; var_175_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_177_bool = 0;
	func_962(var_177_bool);
	if(var_177_bool != 0) {
	} else {
		HasAnimationTrack(var_175_bool, "head");
		var_179_bool = var_175_bool;
		if(var_179_bool == 0) goto Label_790;
		UnlookAsync("head");
	}
Label_790:
	return 2;
	
}


func_645()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_650(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_1039(var_154_bool)
{
	var_156_int = 0; var_157_string = "";
	func_861(var_156_int, "k4q02");
	var_159_bool = var_156_int == (int)2;
	if(var_159_bool != 0) {
		var_154_bool = 1;
		return 0;
	}
	var_154_bool = 0;
	return 0;
}


func_658(var_64_bool, var_65_object, var_66_string)
{
	var_67_bool = 0; var_68_bool = 0;
	var_71_bool = IsFuncExist(var_65_object, "HasProperty", (int)2);
	var_72_bool = var_71_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_64_bool = 0;
		return 2;
	}
	@@var_65_object:HasProperty(var_66_string, var_68_bool);
	var_68_bool = var_64_bool;
	return 2;
}


func_791(var_135_string)
{
	var_136_bool = 0; var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_float = 0; var_141_float = 0;
	lshHasAnimation(var_139_bool, var_135_string);
	var_142_bool = var_139_bool;
	if(var_142_bool != 0) {
		lshGetAnimTimes(var_135_string, var_140_float, var_141_float);
		lshPlayAnimation(var_140_float, var_141_float, (bool)0);
	} else {
		var_145_int = "Can't find lsh animation : " + var_135_string;
		Trace(var_145_int);
	}
	return 6;
	
}


func_1051(var_160_bool)
{
	var_162_int = 0; var_163_string = "";
	func_861(var_162_int, "ook4BirdmaskTheater1");
	var_165_bool = var_162_int == (int)0;
	if(var_165_bool != 0) {
		var_160_bool = 1;
		return 0;
	}
	var_160_bool = 0;
	return 0;
}


func_670(var_56_bool, var_57_object, var_58_string, var_59_float, var_60_float, var_61_float)
{
	var_62_float = 0; var_63_float = 0;
	var_64_bool = 0; var_65_object = Obj(); var_66_string = "";
	var_57_object = var_65_object;
	var_58_string = var_66_string;
	func_658(var_64_bool, var_65_object, var_66_string);
	var_73_bool = var_64_bool == 0; //@nz
	if(var_73_bool != 0) {
		var_56_bool = 0;
		return 2;
	}
	@@var_57_object:GetProperty(var_58_string, var_63_float);
	var_74_float = 0; var_75_float = 0; var_76_float = 0; var_77_float = 0;
	var_75_float = var_63_float + var_59_float;
	var_60_float = var_76_float;
	var_61_float = var_77_float;
	func_850(var_74_float, var_75_float, var_76_float, var_77_float);
	@@var_57_object:SetProperty(var_58_string, var_74_float);
	var_56_bool = 1;
	return 2;
}


func_932(var_52_float)
{
	var_53_object = Obj(); var_54_object = Obj();
	CreateFloatVector(var_54_object);
	@@var_54_object:add(var_52_float);
	SendWorldWndMessage((int)16, var_54_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_550(var_2_object, var_3_string)
{
	func_645();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1063(var_102_bool)
{
	var_104_int = 0; var_105_string = "";
	func_861(var_104_int, "k4q02BirdmaskGotoMaria");
	var_107_bool = var_104_int != (int)0;
	if(var_107_bool != 0) {
		var_102_bool = 1;
		return 0;
	}
	var_102_bool = 0;
	return 0;
}


func_807(var_113_string, var_114_bool)
{
	var_117_bool = 0; var_118_float = 0; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0;
	lshHasAnimation(var_120_bool, var_113_string);
	var_123_bool = var_120_bool;
	if(var_123_bool != 0) {
		lshGetAnimTimes(var_113_string, var_121_float, var_122_float);
		lshPlayAnimation(var_121_float, var_122_float, var_114_bool);
	} else {
		var_125_int = "Can't find lsh animation : " + var_113_string;
		Trace(var_125_int);
	}
	return 6;
	
}


func_942(var_118_bool, var_119_string, var_120_string)
{
	var_121_object = Obj(); var_122_object = Obj();
	FindActor(var_122_object, var_119_string);
	var_123_bool = var_122_object == 0; //@ne
	if(var_123_bool != 0) {
		var_118_bool = 0;
		return 2;
	}
	Trigger(var_122_object, var_120_string);
	var_118_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1075(var_232_bool, var_233_object)
{
	var_234_bool = 0; var_235_object = Obj();
	var_233_object = var_235_object;
	func_1085(var_234_bool, var_235_object);
	if(var_234_bool != 0) {
		var_232_bool = 1;
		return 0;
	}
	var_232_bool = 0;
	return 0;
}


func_564()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_699(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 14;
	}
	func_971((int)0);
	var_35_int = var_26_int;
	var_27_int = 0;
	
Label_578:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_27_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_699(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		irand(var_28_int, (int)3);
		var_54_bool = var_28_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = var_26_int;
			if(var_55_int == 0) goto Label_611;
			irand(var_29_int, var_26_int);
			var_57_string = ""; var_58_int = 0;
			var_29_int = var_58_int;
			func_964(var_57_string, var_58_int);
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
						goto Label_640;
					}
					goto Label_629;
				}
				var_69_int = var_27_int;
				if(var_69_int == 0) goto Label_629;
				goto Label_640;
		}
		Label_629:
			var_60_bool = 0;
			func_643(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_640;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_578;

		}
	}
Label_640:
	ResetAAS();
	return 14;
	
}


func_181(var_2_object, var_109_string)
{
	var_110_bool = 0;
	func_962(var_110_bool);
	var_111_bool = var_110_bool == 0; //@nz
	if(var_111_bool != 0) {
		return 0;
	}
	var_112_bool = var_109_string == var_2_object;
	if(var_112_bool != 0) {
		return 0;
	}
	var_113_string = ""; var_114_bool = 0;
	var_109_string = var_113_string;
	var_116_bool = var_109_string == "";
	if(var_116_bool != 0) {
		var_114_bool = 0;
	} else {
		var_114_bool = 1;
	}
	func_807(var_113_string, var_114_bool);
	var_2_object = var_109_string;
	return 0;
	
}


func_822(var_27_object)
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


func_692(var_90_object, var_91_string, var_92_int)
{
	var_93_int = 0; var_94_int = 0;
	@@var_90_object:GetProperty(var_91_string, var_94_int);
	var_95_int = var_94_int + var_92_int;
	@@var_90_object:SetProperty(var_91_string, var_95_int);
	return 2;
}


func_954(var_74_int)
{
	var_74_int = 515571;
	return 0;
}


func_699(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_956(var_73_int)
{
	var_73_int = 504029;
	return 0;
}


func_1085(var_234_bool, var_235_object)
{
	var_236_float = 0; var_237_float = 0;
	@@var_235_object:GetProperty("money", var_237_float);
	var_240_bool = var_237_float >= (int)500;
	if(var_240_bool != 0) {
		var_234_bool = 1;
		return 2;
	}
	var_234_bool = 0;
	return 2;
}


func_958(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
	return 0;
}


func_704(var_25_bool, var_26_object, var_27_float)
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
	func_840(var_52_cvector, var_53_cvector);
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
	func_962(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_767;
		LookAsyncCamera("head");
	}
Label_767:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_960(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_962(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_833()
{
	var_13_bool = 0;
	func_962(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_964(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_840(var_52_cvector, var_53_cvector)
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


func_1096()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)380, (int)2, (int)525786);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_1122(var_25_bool, var_26_object, (int)378);
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0;
		var_93_bool = 0;
		var_94_bool = 0; var_95_object = Obj();
		var_95_object = var_1_object;
		func_1027(var_95_object);
		if(var_94_bool != 0) {
			var_102_bool = 0; var_103_object = Obj();
			var_103_object = var_1_object;
			func_1063(var_103_object);
			var_108_bool = var_102_bool == 0; //@nz
			if(var_108_bool != 0) {
				var_93_bool = 1;
			}
		}
		if(var_93_bool != 0) {
			var_109_string = "";
			func_181(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)525749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525750, (int)27063, (int)27062);
			@@@var_0_object:AddReply((int)540951, (int)43036, (int)43035);
		} else {
				var_151_string = "";
				func_181(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)525753);
				@@@var_0_object:ClearReplies();
				var_153_bool = 0;
				var_153_bool = 0;
				var_154_bool = 0; var_155_object = Obj();
				var_155_object = var_1_object;
				func_1039(var_155_object);
				if(var_154_bool != 0) {
					var_160_bool = 0; var_161_object = Obj();
					var_161_object = var_1_object;
					func_1051(var_161_object);
					if(var_160_bool != 0) {
						var_153_bool = 1;
					}
				}
				if(var_153_bool != 0) {
					@@@var_0_object:AddReply((int)525768, (int)27081, (int)27080);
				}
				@@@var_0_object:AddReply((int)525754, (int)-1, (int)27066);
				goto Label_151;
		}
	}
Label_151:
	var_133_bool = 0;
	func_962(var_133_bool);
	if(var_133_bool != 0) {

	Label_155:
		lshWaitForAnimEnd();
		var_134_string = var_3_string;
		if(var_134_string != 0) {
		} else {
			var_135_string = "";
			var_135_string = var_2_object;
			func_791(var_135_string);
			goto Label_155;
	}
		PlayAnimation("all", "idle");

	Label_170:
		WaitForAnimEnd();
		var_148_string = var_3_string;
		if(var_148_string != 0) {
			goto Label_180;
		}
		PlayAnimation("all", "idle");
		goto Label_170;

	}
	goto Label_180;
	
Label_180:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_971(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_973:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_964(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_973;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_850(var_74_float, var_75_float, var_76_float, var_77_float)
{
	var_78_bool = var_75_float < var_76_float;
	if(var_78_bool != 0) {
		var_76_float = var_74_float;
		return 0;
	}
	var_79_bool = var_75_float > var_77_float;
	if(var_79_bool != 0) {
		var_77_float = var_74_float;
		return 0;
	}
	var_75_float = var_74_float;
	return 0;
}


func_1109(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	GetDiaryRoot(var_36_object);
	var_37_bool = var_36_object == 0; //@nz
	if(var_37_bool != 0) {
		Trace("Can't retrieve diary root");
		var_34_object = 0;
		return 2;
	}
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_988()
{
	SetVariable("ook4BirdmaskTheater1", (int)1);
	return 0;
}


func_861(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0;
	GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
	return 2;
}


func_994()
{
	SetVariable("k4q02BirdmaskGotoMaria", (int)1);
	func_1096();
	return 0;
}


func_866(var_99_int, var_100_int)
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateIntVector(var_102_object);
	@@var_102_object:add(var_99_int);
	@@var_102_object:add(var_100_int);
	SendWorldWndMessage((int)3, var_102_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1122(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_1109(Obj());
	var_34_object = var_31_object;
	@@var_31_object:Find(var_27_int, var_32_object);
	var_39_bool = var_32_object == 0; //@nz
	if(var_39_bool != 0) {
		var_41_int = "Can't find diary parent with id: " + var_27_int;
		Trace(var_41_int);
		var_25_bool = 0;
		return 6;
	}
	@@var_32_object:AddChild(var_26_object);
	SendWorldWndMessage((int)7);
	@@var_26_object:GetCategory(var_33_int);
	SetDiarySection(var_33_int);
	var_25_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_485(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_10_float, var_11_float)
{
	var_12_bool = 0;
	func_699(var_12_bool);
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
	func_564();
	var_70_bool = var_3_string == 0; //@nz
	if(var_70_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1003()
{
	var_118_bool = 0; var_119_string = ""; var_120_string = "";
	func_942(var_118_bool, "quest_k4_02", "init_theater");
	return 0;
}


func_878(var_86_object, var_87_int)
{
	var_88_int = 0; var_89_int = 0;
	var_90_object = Obj(); var_91_string = ""; var_92_int = 0;
	var_86_object = var_90_object;
	var_87_int = var_92_int;
	func_692(var_90_object, "money", var_92_int);
	var_97_bool = var_87_int > (int)0;
	if(var_97_bool != 0) {
		GetInvItemByName(var_89_int, "Money");
		var_99_int = 0; var_100_int = 0;
		var_89_int = var_99_int;
		var_87_int = var_100_int;
		func_866(var_99_int, var_100_int);
	}
	return 2;
}


func_1010(var_83_object)
{
	Trace("money 500 removed");
	var_86_object = Obj(); var_87_int = 0;
	var_83_object = var_86_object;
	func_878(var_86_object, (int)-500);
	return 0;
}


func_1020(var_43_object)
{
	var_45_bool = 0; var_46_object = Obj(); var_47_float = 0;
	var_43_object = var_46_object;
	func_897(var_45_bool, var_46_object, (float)0.10000000149011612);
	return 0;
}


func_1150(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x48d";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


