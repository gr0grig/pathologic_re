// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,GetGameTime/1,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ood8Doberman1|W:pt_map_kapella|A:ShowMap|W:d8q02|W:d8q02GotoKapella|A:AddMark|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1b5
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa4 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x1bb vars=object
// @EVENT_26: op=0x1e9 vars=string
// @EVENT_6: op=0x1f1 vars=
// @EVENT_7: op=0x232 vars=int
// @PE: 0x4a,0x8e,0xa4,0x1bb,0x1e9,0x208,0x232,0x249,0x35c,0x362,0x38c

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_827();
		var_17_bool = var_13_bool == (int)37547;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_860();
		}
		var_23_bool = var_13_bool == (int)34820;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_882();
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_866(var_76_object);
		}
		var_102_bool = var_13_bool == (int)37604;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_882();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_866(var_106_object);
		}
		var_108_bool = var_12_bool == (int)34821;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533313);
			@@@var_0_object:ClearReplies();
			var_127_bool = 0; var_128_object = Obj();
			var_128_object = var_1_object;
			func_908(var_128_object);
			if(var_127_bool != 0) {
				@@@var_0_object:AddReply((int)535847, (int)37548, (int)37547);
			}
			@@@var_0_object:AddReply((int)535882, (int)-1, (int)37588);
			@@@var_0_object:AddReply((int)535851, (int)-1, (int)37551);
			return 0;
		}
		var_145_bool = var_12_bool == (int)37548;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535848);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535883, (int)37590, (int)37589);
			@@@var_0_object:AddReply((int)535849, (int)37590, (int)37549);
			return 0;
		}
		var_155_bool = var_12_bool == (int)37590;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535885, (int)37550, (int)37591);
			@@@var_0_object:AddReply((int)535886, (int)37550, (int)37592);
			return 0;
		}
		var_165_bool = var_12_bool == (int)37550;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535887, (int)37595, (int)37594);
			return 0;
		}
		var_172_bool = var_12_bool == (int)37595;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533308, (int)34817, (int)34816);
			@@@var_0_object:AddReply((int)535889, (int)37605, (int)37597);
			return 0;
		}
		var_182_bool = var_12_bool == (int)37605;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535896);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535897, (int)37600, (int)37606);
			return 0;
		}
		var_189_bool = var_12_bool == (int)34817;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533310, (int)34819, (int)34818);
			@@@var_0_object:AddReply((int)535890, (int)37601, (int)37598);
			return 0;
		}
		var_199_bool = var_12_bool == (int)37601;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535893);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535894, (int)37600, (int)37602);
			return 0;
		}
		var_206_bool = var_12_bool == (int)34819;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535891, (int)37600, (int)37599);
			return 0;
		}
		var_213_bool = var_12_bool == (int)37600;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533312, (int)-1, (int)34820);
			@@@var_0_object:AddReply((int)535895, (int)-1, (int)37604);
			return 0;
		}
		var_3_string = true;
		var_222_bool = 0;
		func_1086(var_222_bool);
		if(var_222_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	TaskCall(0);
	func_0(var_15_object, var_13_int, var_14_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_469(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_585(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_518(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_834(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_547(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_816(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_584;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_584:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_451(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_13_int, var_14_object)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0;
	var_0_object = var_14_object;
	var_24_bool = 0; var_25_object = Obj(); var_26_float = 0;
	var_14_object = var_25_object;
	func_698(var_24_bool, var_25_object, (float)70.0);
	var_71_bool = var_24_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_13_int = -2;
		return 8;
	}
	CreateDialog(var_20_object);
	var_72_int = 0;
	func_1080(var_72_int);
	@@var_20_object:SetNPCName(var_72_int);
	var_73_int = 0;
	func_1078(var_73_int);
	@@var_20_object:SetNPCDescription(var_73_int);
	var_74_string = "";
	func_1082(var_74_string);
	@@var_20_object:SetPhoto(var_74_string);
	var_75_string = "";
	func_1084(var_75_string);
	@@var_20_object:SetPhoto2(var_75_string);
	var_76_int = 0;
	func_1037(var_76_int);
	@@var_20_object:SetPlayerName(var_76_int);
	IsOverrideActive(var_21_bool);
	var_84_bool = var_21_bool;
	if(var_84_bool != 0) {
		var_13_int = -2;
		return 8;
	}
	DoDialog(var_20_object);
	var_85_object = Obj(); var_86_object = Obj();
	var_14_object = var_85_object;
	var_20_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	@@var_20_object:IsDialogEnd(var_23_bool);
	
Label_56:
	var_145_bool = var_23_bool == 0; //@nz
	if(var_145_bool != 0) {
		sync();
		@@var_20_object:IsDialogEnd(var_23_bool);
		goto Label_56;
	}
	var_14_object = Obj();
	func_767();
	StopDialog(var_20_object);
	@@var_20_object:GetReturnValue((int)-1);
	var_22_int = var_13_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_518(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_520(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_693(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	SetTimer((int)10, (float)1.0);
	func_599();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_908(var_110_bool)
{
	var_112_int = 0; var_113_string = "";
	func_850(var_112_int, "ood8Doberman1");
	var_117_bool = var_112_int == (int)0;
	if(var_117_bool != 0) {
		var_110_bool = 1;
		return 0;
	}
	var_110_bool = 0;
	return 0;
}


func_1037(var_76_int)
{
	var_77_int = 0; var_78_int = 0;
	GetVariable("branch", var_78_int);
	var_81_bool = var_78_int == (int)0;
	if(var_81_bool != 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x41c";
	}
	var_83_bool = var_78_int == (int)1;
	if(var_83_bool != 0) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
	return 2;
}


func_142(var_2_object, var_92_string)
{
	var_93_bool = 0;
	func_1086(var_93_bool);
	var_94_bool = var_93_bool == 0; //@nz
	if(var_94_bool != 0) {
		return 0;
	}
	var_95_bool = var_92_string == var_2_object;
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_string = ""; var_97_bool = 0;
	var_92_string = var_96_string;
	var_99_bool = var_92_string == "";
	if(var_99_bool != 0) {
		var_97_bool = 0;
	} else {
		var_97_bool = 1;
	}
	func_801(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	return 0;
	
}


func_785(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0;
	lshHasAnimation(var_133_bool, var_129_string);
	var_136_bool = var_133_bool;
	if(var_136_bool != 0) {
		lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		lshPlayAnimation(var_134_float, var_135_float, (bool)0);
	} else {
		var_139_int = "Can't find lsh animation : " + var_129_string;
		Trace(var_139_int);
	}
	return 6;
	
}


func_920()
{
	var_44_object = Obj(); var_45_object = Obj();
	CreateDiaryEntry(var_45_object, (int)127, (int)2, (int)513772);
	var_49_bool = 0; var_50_object = Obj(); var_51_int = 0;
	var_45_object = var_50_object;
	func_959(var_49_bool, var_50_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1054(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_801(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0;
	lshHasAnimation(var_103_bool, var_96_string);
	var_106_bool = var_103_bool;
	if(var_106_bool != 0) {
		lshGetAnimTimes(var_96_string, var_104_float, var_105_float);
		lshPlayAnimation(var_104_float, var_105_float, var_97_bool);
	} else {
		var_108_int = "Can't find lsh animation : " + var_96_string;
		Trace(var_108_int);
	}
	return 6;
	
}


func_547(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_685(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_1061(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_1063:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_1054(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_1063;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_678(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_933()
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateDiaryEntry(var_68_object, (int)648, (int)2, (int)533321);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_68_object = var_73_object;
	func_959(var_72_bool, var_73_object, (int)127);
	return 2;
}
EMIT "Stack[-1] = 0";


func_680()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_685(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_816(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0);
	@@var_29_object:GetEyesHeight(var_32_float);
	var_33_cvector = CVector(0.0, 0.0, 0.0);
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	LookAsync(var_29_object, "head", var_33_cvector);
	return 4;
}


func_946(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj();
	GetDiaryRoot(var_60_object);
	var_61_bool = var_60_object == 0; //@nz
	if(var_61_bool != 0) {
		Trace("Can't retrieve diary root");
		var_58_object = 0;
		return 2;
	}
	var_60_object = var_58_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_693(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_1078(var_73_int)
{
	var_73_int = 518097;
	return 0;
}


func_1080(var_72_int)
{
	var_72_int = 518096;
	return 0;
}


func_1082(var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_698(var_24_bool, var_25_object, var_26_float)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_bool = 0;
	@@var_25_object:GetPosition(var_37_cvector);
	@@var_25_object:GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_37_cvector, 1);
	var_45_float = var_45_float + var_36_float;
	SetByIndex(var_37_cvector, 1) = var_45_float;
	GetPosition(var_38_cvector);
	GetEyesHeight(var_36_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_36_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	var_39_cvector = var_37_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_48_int = var_39_cvector | var_39_cvector;
	var_49_float = sqrt(var_48_int);
	var_39_cvector = var_39_cvector / var_49_float;
	var_40_cvector = -var_39_cvector;
	var_50_float = var_39_cvector * var_26_float;
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_40_cvector ^ CVector(0.0, 1.0, 0.0);
	func_840(var_51_cvector, var_52_cvector);
	var_60_float = var_51_cvector * (int)25;
	var_61_int = var_50_float + var_60_float;
	var_41_cvector = var_61_int - CVector(0.0, 10.0, 0.0);
	var_42_cvector = var_38_cvector + var_41_cvector;
	IsOverrideActive(var_43_bool);
	var_63_bool = var_43_bool;
	if(var_63_bool != 0) {
		var_24_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_42_cvector, var_40_cvector, (bool)1);
	var_65_float = GetByIndex(var_41_cvector, 0);
	var_66_float = GetByIndex(var_41_cvector, 2);
	Rotate(var_65_float, var_66_float);
	var_67_bool = 0;
	func_1086(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		HasAnimationTrack(var_44_bool, "head");
		var_69_bool = var_44_bool;
		if(var_69_bool == 0) goto Label_761;
		LookAsyncCamera("head");
	}
Label_761:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_24_bool = 1;
	return 18;
	
}


func_827()
{
	var_15_bool = 0;
	func_1086(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1084(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_1086(var_67_bool)
{
	var_67_bool = 0;
	return 0;
}


func_959(var_49_bool, var_50_object, var_51_int)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0;
	func_946(Obj());
	var_58_object = var_55_object;
	@@var_55_object:Find(var_51_int, var_56_object);
	var_63_bool = var_56_object == 0; //@nz
	if(var_63_bool != 0) {
		var_65_int = "Can't find diary parent with id: " + var_51_int;
		Trace(var_65_int);
		var_49_bool = 0;
		return 6;
	}
	@@var_56_object:AddChild(var_50_object);
	SendWorldWndMessage((int)7);
	@@var_50_object:GetCategory(var_57_int);
	SetDiarySection(var_57_int);
	var_49_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_834(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_451(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_453:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_520(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_453;
}
EMIT "Return(); Pop(4)";


func_840(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0;
	var_56_int = var_52_cvector | var_52_cvector;
	var_55_float = sqrt(var_56_int);
	var_57_float = 9.999999974752427e-07;
	var_58_bool = var_55_float < var_57_float;
	if(var_58_bool != 0) {
		var_51_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_51_cvector = var_52_cvector / var_55_float;
	return 2;
}


func_585(var_2_object, var_3_string)
{
	func_680();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_92_string = "";
		func_142(var_86_object, "Neutral");
		@@@var_0_object:SetMessage((int)533313);
		@@@var_0_object:ClearReplies();
		var_110_bool = 0; var_111_object = Obj();
		var_111_object = var_1_object;
		func_908(var_111_object);
		if(var_110_bool != 0) {
			@@@var_0_object:AddReply((int)535847, (int)37548, (int)37547);
		}
		@@@var_0_object:AddReply((int)535882, (int)-1, (int)37588);
		@@@var_0_object:AddReply((int)535851, (int)-1, (int)37551);
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	var_127_bool = 0;
	func_1086(var_127_bool);
	if(var_127_bool != 0) {

	Label_116:
		lshWaitForAnimEnd();
		var_128_string = var_3_string;
		if(var_128_string != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_object;
			func_785(var_129_string);
			goto Label_116;
	}
		PlayAnimation("all", "idle");

	Label_131:
		WaitForAnimEnd();
		var_142_string = var_3_string;
		if(var_142_string != 0) {
			goto Label_141;
		}
		PlayAnimation("all", "idle");
		goto Label_131;
	}
	goto Label_141;
	
Label_141:
	return 0;
	
}


func_850(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0;
	GetVariable(var_113_string, var_115_int);
	var_115_int = var_112_int;
	return 2;
}


func_469(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_693(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_518(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_834(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_599()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_693(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_1061((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_613:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_693(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_646;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_1054(var_68_string, var_69_int);
			PlayAnimation("all", var_68_string);
			WaitForAnimEnd(var_41_bool);
			var_70_bool = var_41_bool == 0; //@nz
			if(var_70_bool != 0) {
			} else {
		} else {
				var_75_bool = var_39_int == (int)1;
				if(var_75_bool != 0) {
					rand(var_42_float, (int)4);
					var_78_int = var_42_float + (int)1;
					Sleep(var_78_int, var_43_bool);
					var_79_bool = var_43_bool == 0; //@nz
					if(var_79_bool != 0) {
						goto Label_675;
					}
					goto Label_664;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_664;
				goto Label_675;
		}
		Label_664:
			var_71_bool = 0;
			func_678(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_675;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_613;

		}
	}
Label_675:
	ResetAAS();
	return 14;
	
}


func_855(var_41_float)
{
	var_42_float = 0; var_43_float = 0;
	GetGameTime(var_43_float);
	var_43_float = var_41_float;
	return 2;
}


func_987(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	GetMainOutdoorScene(var_33_object);
	var_35_bool = var_33_object == 0; //@ne
	if(var_35_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_34_object = 0;
		var_34_object = var_30_object;
		return 4;
	}
	@@var_33_object:GetMap(var_34_object);
	var_34_object = var_30_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_860()
{
	SetVariable("ood8Doberman1", (int)1);
	return 0;
}


func_866(var_76_object)
{
	var_77_object = Obj(); var_78_string = ""; var_79_float = 0;
	func_987(Obj());
	var_80_object = var_77_object;
	func_1004(var_77_object, "pt_map_kapella", (float)2);
	var_100_object = Obj();
	func_987(var_100_object);
	@@var_76_object:ShowMap(var_100_object);
	return 0;
}


func_1004(var_77_object, var_78_string, var_79_float)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0;
	GetMainOutdoorScene(var_87_object);
	var_89_bool = var_87_object == 0; //@ne
	if(var_89_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_87_object:GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector);
	var_91_bool = var_88_bool == 0; //@nz
	if(var_91_bool != 0) {
		var_93_int = "Warning: outdoor scene locator " + var_78_string;
		var_95_int = var_93_int + " doesnt exist";
		Trace(var_95_int);
	}
	@@var_87_object:GetMap(var_77_object);
	var_96_bool = var_77_object == 0; //@ne
	if(var_96_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_98_float = GetByIndex(var_85_cvector, 0);
	var_99_float = GetByIndex(var_85_cvector, 2);
	@@var_77_object:SetMapParams(var_98_float, var_99_float, var_79_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_882()
{
	var_26_object = Obj(); var_27_object = Obj();
	SetVariable("d8q02", (int)1);
	func_987(Obj());
	var_30_object = var_27_object;
	var_41_float = 0;
	func_855(var_41_float);
	@@var_27_object:AddMark("d8q02GotoKapella", "pt_map_kapella", (int)0, (int)540068, var_41_float);
	func_920();
	func_933();
	return 2;
}
EMIT "Stack[-1] = 0";


func_767()
{
	var_147_bool = 0; var_148_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_150_bool = 0;
	func_1086(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		HasAnimationTrack(var_148_bool, "head");
		var_152_bool = var_148_bool;
		if(var_152_bool == 0) goto Label_784;
		UnlookAsync("head");
	}
Label_784:
	return 2;
	
}


