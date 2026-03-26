// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,Trigger/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:ook11Officer1|W:k11q01|W:quest_k11_01|W:init_house_petr|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x179
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb8 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x183 vars=object
// @EVENT_7: op=0x1b8 vars=int
// @PE: 0x4a,0xa2,0xb8,0x183,0x18e,0x1b8,0x1cf,0x305,0x30b,0x319

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_705();
		var_15_bool = var_11_object == (int)29394;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_779();
		}
		var_50_bool = var_10_bool == (int)29393;
		if(var_50_bool != 0) {
			var_51_bool = 0; var_52_object = Obj();
			var_52_object = var_1_object;
			func_793(var_52_object);
			if(var_51_bool != 0) {
				var_59_object = Obj(); var_60_object = Obj();
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_773();
				var_63_string = "";
				func_162(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)528031);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530252, (int)31642, (int)31641);
				@@@var_0_object:AddReply((int)530261, (int)31655, (int)31650);
				return 0;
			}
			var_87_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)528033);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528034, (int)-1, (int)29396);
			@@@var_0_object:AddReply((int)530257, (int)-1, (int)31646);
			return 0;
		}
		var_96_bool = var_10_bool == (int)31655;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)530267);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530268, (int)31644, (int)31656);
			return 0;
		}
		var_103_bool = var_10_bool == (int)31642;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)530253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530254, (int)31644, (int)31643);
			return 0;
		}
		var_110_bool = var_10_bool == (int)31644;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)530255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530256, (int)31647, (int)31645);
			@@@var_0_object:AddReply((int)530262, (int)31652, (int)31651);
			return 0;
		}
		var_120_bool = var_10_bool == (int)31652;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)530263);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530264, (int)31647, (int)31653);
			return 0;
		}
		var_127_bool = var_10_bool == (int)31647;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)530258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530259, (int)31649, (int)31648);
			return 0;
		}
		var_134_bool = var_10_bool == (int)31649;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_162(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)530260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528032, (int)-1, (int)29394);
			return 0;
		}
		var_3_string = true;
		var_140_bool = 0;
		func_747(var_140_bool);
		if(var_140_bool != 0) {
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
	func_463(var_9_object, var_10_object);
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
		func_425(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_694(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_462;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_462:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_377:
	var_10_float = 0; var_11_float = 0;
	func_398(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_377;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_576(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_741(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_739(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_743(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_745(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_859(var_77_int);
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
	var_155_bool = var_24_bool == 0; //@nz
	if(var_155_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_645();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_773()
{
	SetVariable("ook11Officer1", (int)1);
	return 0;
}


func_645()
{
	var_157_bool = 0; var_158_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_160_bool = 0;
	func_747(var_160_bool);
	if(var_160_bool != 0) {
	} else {
		HasAnimationTrack(var_158_bool, "head");
		var_162_bool = var_158_bool;
		if(var_162_bool == 0) goto Label_662;
		UnlookAsync("head");
	}
Label_662:
	return 2;
	
}


func_779()
{
	SetVariable("k11q01", (int)3);
	func_805();
	var_43_bool = 0; var_44_string = ""; var_45_string = "";
	func_727(var_43_bool, "quest_k11_01", "init_house_petr");
	return 0;
}


func_398(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_10_float, var_11_float)
{
	var_12_bool = 0;
	func_571(var_12_bool);
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
	func_477();
	var_70_bool = var_3_string == 0; //@nz
	if(var_70_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_663(var_131_string)
{
	var_132_bool = 0; var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_float = 0; var_137_float = 0;
	lshHasAnimation(var_135_bool, var_131_string);
	var_138_bool = var_135_bool;
	if(var_138_bool != 0) {
		lshGetAnimTimes(var_131_string, var_136_float, var_137_float);
		lshPlayAnimation(var_136_float, var_137_float, (bool)0);
	} else {
		var_141_int = "Can't find lsh animation : " + var_131_string;
		Trace(var_141_int);
	}
	return 6;
	
}


func_793(var_93_bool)
{
	var_95_int = 0; var_96_string = "";
	func_722(var_95_int, "ook11Officer1");
	var_100_bool = var_95_int == (int)0;
	if(var_100_bool != 0) {
		var_93_bool = 1;
		return 0;
	}
	var_93_bool = 0;
	return 0;
}


func_162(var_2_object, var_105_string)
{
	var_106_bool = 0;
	func_747(var_106_bool);
	var_107_bool = var_106_bool == 0; //@nz
	if(var_107_bool != 0) {
		return 0;
	}
	var_108_bool = var_105_string == var_2_object;
	if(var_108_bool != 0) {
		return 0;
	}
	var_109_string = ""; var_110_bool = 0;
	var_105_string = var_109_string;
	var_112_bool = var_105_string == "";
	if(var_112_bool != 0) {
		var_110_bool = 0;
	} else {
		var_110_bool = 1;
	}
	func_679(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	return 0;
	
}


func_805()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)486, (int)1, (int)528053);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_831(var_25_bool, var_26_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_679(var_109_string, var_110_bool)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0;
	lshHasAnimation(var_116_bool, var_109_string);
	var_119_bool = var_116_bool;
	if(var_119_bool != 0) {
		lshGetAnimTimes(var_109_string, var_117_float, var_118_float);
		lshPlayAnimation(var_117_float, var_118_float, var_110_bool);
	} else {
		var_121_int = "Can't find lsh animation : " + var_109_string;
		Trace(var_121_int);
	}
	return 6;
	
}


func_425(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_563(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_556(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_558()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_818(var_34_object)
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


func_563(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_694(var_27_object)
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


func_571(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_831(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_818(Obj());
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


func_576(var_25_bool, var_26_object, var_27_float)
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
	func_712(var_52_cvector, var_53_cvector);
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
	func_747(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_639;
		LookAsyncCamera("head");
	}
Label_639:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_705()
{
	var_13_bool = 0;
	func_747(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_712(var_52_cvector, var_53_cvector)
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0; var_94_object = Obj();
		var_94_object = var_1_object;
		func_793(var_94_object);
		if(var_93_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_773();
			var_105_string = "";
			func_162(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)528031);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530252, (int)31642, (int)31641);
			@@@var_0_object:AddReply((int)530261, (int)31655, (int)31650);
		} else {
				var_147_string = "";
				func_162(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)528033);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528034, (int)-1, (int)29396);
				@@@var_0_object:AddReply((int)530257, (int)-1, (int)31646);
				goto Label_132;
		}
	}
Label_132:
	var_129_bool = 0;
	func_747(var_129_bool);
	if(var_129_bool != 0) {

	Label_136:
		lshWaitForAnimEnd();
		var_130_string = var_3_string;
		if(var_130_string != 0) {
		} else {
			var_131_string = "";
			var_131_string = var_2_object;
			func_663(var_131_string);
			goto Label_136;
	}
		PlayAnimation("all", "idle");

	Label_151:
		WaitForAnimEnd();
		var_144_string = var_3_string;
		if(var_144_string != 0) {
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


func_463(var_2_object, var_3_string)
{
	func_558();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_722(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
	return 2;
}


func_727(var_43_bool, var_44_string, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj();
	FindActor(var_47_object, var_44_string);
	var_48_bool = var_47_object == 0; //@ne
	if(var_48_bool != 0) {
		var_43_bool = 0;
		return 2;
	}
	Trigger(var_47_object, var_45_string);
	var_43_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_859(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x36a";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_477()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_571(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 14;
	}
	func_756((int)0);
	var_35_int = var_26_int;
	var_27_int = 0;
	
Label_491:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_27_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_571(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		irand(var_28_int, (int)3);
		var_54_bool = var_28_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = var_26_int;
			if(var_55_int == 0) goto Label_524;
			irand(var_29_int, var_26_int);
			var_57_string = ""; var_58_int = 0;
			var_29_int = var_58_int;
			func_749(var_57_string, var_58_int);
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
						goto Label_553;
					}
					goto Label_542;
				}
				var_69_int = var_27_int;
				if(var_69_int == 0) goto Label_542;
				goto Label_553;
		}
		Label_542:
			var_60_bool = 0;
			func_556(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_553;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_491;

		}
	}
Label_553:
	ResetAAS();
	return 14;
	
}


func_739(var_74_int)
{
	var_74_int = 515597;
	return 0;
}


func_741(var_73_int)
{
	var_73_int = 514841;
	return 0;
}


func_743(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_745(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_747(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_749(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_756(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_758:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_749(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_758;
	}
	var_38_int = var_35_int;
	return 4;
	
}


