// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:k4q02|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Prophet.png|W:ui/NPC_Prophet_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1aa
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x1b0 vars=object
// @EVENT_26: op=0x1e1 vars=string
// @EVENT_6: op=0x1e9 vars=
// @EVENT_7: op=0x22a vars=int
// @PE: 0x4a,0x9d,0xb3,0x1b0,0x1e1,0x200,0x22a,0x241,0x367,0x370

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_819();
		var_17_bool = var_13_bool == (int)27089;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_871();
		}
		var_46_bool = var_13_bool == (int)27090;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_871();
		}
		var_50_bool = var_12_bool == (int)27084;
		if(var_50_bool != 0) {
			var_51_bool = 0; var_52_object = Obj();
			var_52_object = var_1_object;
			func_880(var_52_object);
			if(var_51_bool != 0) {
				var_59_string = "";
				func_157(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)525772);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525773, (int)27086, (int)27085);
				@@@var_0_object:AddReply((int)540955, (int)43044, (int)43040);
				return 0;
			}
			var_83_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525779);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525780, (int)-1, (int)27092);
			@@@var_0_object:AddReply((int)542525, (int)-1, (int)44920);
			return 0;
		}
		var_92_bool = var_12_bool == (int)27086;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525774);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540956, (int)43044, (int)43041);
			@@@var_0_object:AddReply((int)540958, (int)43042, (int)43043);
			return 0;
		}
		var_102_bool = var_12_bool == (int)43042;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540957);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540963, (int)43046, (int)43048);
			return 0;
		}
		var_109_bool = var_12_bool == (int)43044;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540959);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540960, (int)43046, (int)43045);
			@@@var_0_object:AddReply((int)525775, (int)27088, (int)27087);
			return 0;
		}
		var_119_bool = var_12_bool == (int)27088;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525776);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540969, (int)43053, (int)43056);
			return 0;
		}
		var_126_bool = var_12_bool == (int)43046;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540962, (int)43050, (int)43047);
			@@@var_0_object:AddReply((int)540967, (int)43055, (int)43054);
			return 0;
		}
		var_136_bool = var_12_bool == (int)43055;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540970, (int)43053, (int)43057);
			return 0;
		}
		var_143_bool = var_12_bool == (int)43050;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540965, (int)43053, (int)43052);
			return 0;
		}
		var_150_bool = var_12_bool == (int)43053;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525777, (int)-1, (int)27089);
			@@@var_0_object:AddReply((int)525778, (int)-1, (int)27090);
			return 0;
		}
		var_3_string = true;
		var_159_bool = 0;
		func_971(var_159_bool);
		if(var_159_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_577(var_11_bool, var_12_object);
	var_16_int = 0; var_17_object = Obj();
	var_12_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_461(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_577(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_510(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_826(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_539(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_808(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_576;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_576:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_443(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_690(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_965(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_963(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_967(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_969(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_946(var_79_int);
	@@var_23_object:SetPlayerName(var_79_int);
	IsOverrideActive(var_24_bool);
	var_87_bool = var_24_bool;
	if(var_87_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	DoDialog(var_23_object);
	var_88_object = Obj(); var_89_object = Obj();
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	@@var_23_object:IsDialogEnd(var_26_bool);
	
Label_56:
	var_153_bool = var_26_bool == 0; //@nz
	if(var_153_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_759();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_512(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_685(var_23_bool);
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
	func_591();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_905(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	GetDiaryRoot(var_38_object);
	var_39_bool = var_38_object == 0; //@nz
	if(var_39_bool != 0) {
		Trace("Can't retrieve diary root");
		var_36_object = 0;
		return 2;
	}
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_777(var_129_string)
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


func_918(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0;
	func_905(Obj());
	var_36_object = var_33_object;
	@@var_33_object:Find(var_29_int, var_34_object);
	var_41_bool = var_34_object == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Can't find diary parent with id: " + var_29_int;
		Trace(var_43_int);
		var_27_bool = 0;
		return 6;
	}
	@@var_34_object:AddChild(var_28_object);
	SendWorldWndMessage((int)7);
	@@var_28_object:GetCategory(var_35_int);
	SetDiarySection(var_35_int);
	var_27_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_793(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0;
	lshHasAnimation(var_114_bool, var_107_string);
	var_117_bool = var_114_bool;
	if(var_117_bool != 0) {
		lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		var_119_int = "Can't find lsh animation : " + var_107_string;
		Trace(var_119_int);
	}
	return 6;
	
}


func_539(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_677(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_157(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_971(var_104_bool);
	var_105_bool = var_104_bool == 0; //@nz
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_bool = var_103_string == var_2_object;
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_string = ""; var_108_bool = 0;
	var_103_string = var_107_string;
	var_110_bool = var_103_string == "";
	if(var_110_bool != 0) {
		var_108_bool = 0;
	} else {
		var_108_bool = 1;
	}
	func_793(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	return 0;
	
}


func_670(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_672()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_677(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_808(var_29_object)
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


func_685(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_690(var_27_bool, var_28_object, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0;
	@@var_28_object:GetPosition(var_40_cvector);
	@@var_28_object:GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	var_48_float = var_48_float + var_39_float;
	SetByIndex(var_40_cvector, 1) = var_48_float;
	GetPosition(var_41_cvector);
	GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_39_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_52_float = sqrt(var_51_int);
	var_42_cvector = var_42_cvector / var_52_float;
	var_43_cvector = -var_42_cvector;
	var_53_float = var_42_cvector * var_29_float;
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	var_55_cvector = var_43_cvector ^ CVector(0.0, 1.0, 0.0);
	func_832(var_54_cvector, var_55_cvector);
	var_63_float = var_54_cvector * (int)25;
	var_64_int = var_53_float + var_63_float;
	var_44_cvector = var_64_int - CVector(0.0, 10.0, 0.0);
	var_45_cvector = var_41_cvector + var_44_cvector;
	IsOverrideActive(var_46_bool);
	var_66_bool = var_46_bool;
	if(var_66_bool != 0) {
		var_27_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_45_cvector, var_43_cvector, (bool)1);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_68_float, var_69_float);
	var_70_bool = 0;
	func_971(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_753;
		LookAsyncCamera("head");
	}
Label_753:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_946(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3c1";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_819()
{
	var_15_bool = 0;
	func_971(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_826(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_443(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_445:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_512(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_445;
}
EMIT "Return(); Pop(4)";


func_832(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_55_cvector | var_55_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_54_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_54_cvector = var_55_cvector / var_58_float;
	return 2;
}


func_577(var_2_object, var_3_string)
{
	func_672();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_963(var_76_int)
{
	var_76_int = 518716;
	return 0;
}


func_965(var_75_int)
{
	var_75_int = 518715;
	return 0;
}


func_967(var_77_string)
{
	var_77_string = "ui/NPC_Prophet.png";
	return 0;
}


func_969(var_78_string)
{
	var_78_string = "ui/NPC_Prophet_b.png";
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_880(var_96_object);
		if(var_95_bool != 0) {
			var_103_string = "";
			func_157(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)525772);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525773, (int)27086, (int)27085);
			@@@var_0_object:AddReply((int)540955, (int)43044, (int)43040);
		} else {
				var_145_string = "";
				func_157(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)525779);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525780, (int)-1, (int)27092);
				@@@var_0_object:AddReply((int)542525, (int)-1, (int)44920);
				goto Label_127;
		}
	}
Label_127:
	var_127_bool = 0;
	func_971(var_127_bool);
	if(var_127_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_128_string = var_3_string;
		if(var_128_string != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_object;
			func_777(var_129_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_142_string = var_3_string;
		if(var_142_string != 0) {
			goto Label_156;
		}
		PlayAnimation("all", "idle");
		goto Label_146;

	}
	goto Label_156;
	
Label_156:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_971(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_842(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_461(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_685(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_510(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_826(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_591()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_685(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_854((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_605:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_685(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_638;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_847(var_68_string, var_69_int);
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
						goto Label_667;
					}
					goto Label_656;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_656;
				goto Label_667;
		}
		Label_656:
			var_71_bool = 0;
			func_670(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_667;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_605;

		}
	}
Label_667:
	ResetAAS();
	return 14;
	
}


func_847(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_854(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_856:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_847(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_856;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_871()
{
	SetVariable("k4q02", (int)3);
	func_892();
	return 0;
}


func_880(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_842(var_97_int, "k4q02");
	var_102_bool = var_97_int == (int)2;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_759()
{
	var_155_bool = 0; var_156_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_158_bool = 0;
	func_971(var_158_bool);
	if(var_158_bool != 0) {
	} else {
		HasAnimationTrack(var_156_bool, "head");
		var_160_bool = var_156_bool;
		if(var_160_bool == 0) goto Label_776;
		UnlookAsync("head");
	}
Label_776:
	return 2;
	
}


func_892()
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateDiaryEntry(var_23_object, (int)382, (int)2, (int)525788);
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0;
	var_23_object = var_28_object;
	func_918(var_27_bool, var_28_object, (int)378);
	return 2;
}
EMIT "Stack[-1] = 0";


func_510(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


