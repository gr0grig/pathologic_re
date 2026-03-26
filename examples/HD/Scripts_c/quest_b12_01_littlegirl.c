// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:oob12Littlegirl1|W:oob12Littlegirl2|W:mnogogrannik@door2|W:B_Mission5|W:b12q01ChildsAreVisited|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:Remove|W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x195
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb8 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x19b vars=object
// @EVENT_26: op=0x1cc vars=string
// @EVENT_6: op=0x1d4 vars=
// @EVENT_7: op=0x215 vars=int
// @PE: 0x4a,0xa2,0xb8,0x19b,0x1cc,0x1eb,0x215,0x22c,0x34b,0x351,0x357,0x35e,0x37e,0x384,0x390

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_798();
		var_17_bool = var_13_bool == (int)24105;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_843();
		}
		var_23_bool = var_13_bool == (int)24118;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_849();
		}
		var_29_bool = var_12_bool == (int)24104;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_855();
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_894();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_862();
			var_93_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522914);
			@@@var_0_object:ClearReplies();
			var_111_bool = 0; var_112_object = Obj();
			var_112_object = var_1_object;
			func_900(var_112_object);
			if(var_111_bool != 0) {
				@@@var_0_object:AddReply((int)522915, (int)37091, (int)24105);
			}
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_912(var_121_object);
			if(var_120_bool != 0) {
				@@@var_0_object:AddReply((int)522927, (int)24119, (int)24118);
			}
			@@@var_0_object:AddReply((int)522926, (int)-1, (int)24117);
			return 0;
		}
		var_133_bool = var_12_bool == (int)24119;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522929, (int)-1, (int)24120);
			@@@var_0_object:AddReply((int)522930, (int)-1, (int)24121);
			return 0;
		}
		var_143_bool = var_12_bool == (int)37091;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535411);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535412, (int)37093, (int)37092);
			return 0;
		}
		var_150_bool = var_12_bool == (int)37093;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535414, (int)24106, (int)37094);
			@@@var_0_object:AddReply((int)535415, (int)-1, (int)37095);
			return 0;
		}
		var_160_bool = var_12_bool == (int)24106;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522916);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522917, (int)24108, (int)24107);
			return 0;
		}
		var_167_bool = var_12_bool == (int)24108;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522920, (int)-1, (int)24110);
			@@@var_0_object:AddReply((int)522921, (int)24112, (int)24111);
			@@@var_0_object:AddReply((int)522925, (int)24112, (int)24115);
			return 0;
		}
		var_180_bool = var_12_bool == (int)24112;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522923, (int)-1, (int)24113);
			@@@var_0_object:AddReply((int)522924, (int)-1, (int)24114);
			return 0;
		}
		var_3_string = true;
		var_189_bool = 0;
		func_1020(var_189_bool);
		if(var_189_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb9";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_556(var_11_bool, var_12_object);
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
		func_440(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_556(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_489(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_805(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_518(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_787(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_555;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_555:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_422(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_669(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_1014(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_1012(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_1016(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_1018(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_995(var_79_int);
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
	var_215_bool = var_26_bool == 0; //@nz
	if(var_215_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_738();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_900(var_176_bool)
{
	var_178_int = 0; var_179_string = "";
	func_821(var_178_int, "oob12Littlegirl1");
	var_181_bool = var_178_int == (int)0;
	if(var_181_bool != 0) {
		var_176_bool = 1;
		return 0;
	}
	var_176_bool = 0;
	return 0;
}


func_1029(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_1031:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_1022(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_1031;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_772(var_162_string, var_163_bool)
{
	var_166_bool = 0; var_167_float = 0; var_168_float = 0; var_169_bool = 0; var_170_float = 0; var_171_float = 0;
	lshHasAnimation(var_169_bool, var_162_string);
	var_172_bool = var_169_bool;
	if(var_172_bool != 0) {
		lshGetAnimTimes(var_162_string, var_170_float, var_171_float);
		lshPlayAnimation(var_170_float, var_171_float, var_163_bool);
	} else {
		var_174_int = "Can't find lsh animation : " + var_162_string;
		Trace(var_174_int);
	}
	return 6;
	
}


func_518(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_656(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_649(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_651()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_912(var_185_bool)
{
	var_187_int = 0; var_188_string = "";
	func_821(var_187_int, "oob12Littlegirl2");
	var_190_bool = var_187_int == (int)0;
	if(var_190_bool != 0) {
		var_185_bool = 1;
		return 0;
	}
	var_185_bool = 0;
	return 0;
}


func_656(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_894()
{
	SetVariable("b12q01ChildsAreVisited", (int)1);
	return 0;
}


func_787(var_29_object)
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


func_664(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_924()
{
	var_121_object = Obj(); var_122_object = Obj();
	CreateDiaryEntry(var_122_object, (int)566, (int)0, (int)530580);
	var_126_bool = 0; var_127_object = Obj(); var_128_int = 0;
	var_122_object = var_127_object;
	func_950(var_126_bool, var_127_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_669(var_27_bool, var_28_object, var_29_float)
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
	func_811(var_54_cvector, var_55_cvector);
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
	func_1020(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_732;
		LookAsyncCamera("head");
	}
Label_732:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_798()
{
	var_15_bool = 0;
	func_1020(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_162(var_2_object, var_158_string)
{
	var_159_bool = 0;
	func_1020(var_159_bool);
	var_160_bool = var_159_bool == 0; //@nz
	if(var_160_bool != 0) {
		return 0;
	}
	var_161_bool = var_158_string == var_2_object;
	if(var_161_bool != 0) {
		return 0;
	}
	var_162_string = ""; var_163_bool = 0;
	var_158_string = var_162_string;
	var_165_bool = var_158_string == "";
	if(var_165_bool != 0) {
		var_163_bool = 0;
	} else {
		var_163_bool = 1;
	}
	func_772(var_162_string, var_163_bool);
	var_2_object = var_158_string;
	return 0;
	
}


func_805(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_422(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_424:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_491(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_424;
}
EMIT "Return(); Pop(4)";


func_937(var_135_object)
{
	var_136_object = Obj(); var_137_object = Obj();
	GetDiaryRoot(var_137_object);
	var_138_bool = var_137_object == 0; //@nz
	if(var_138_bool != 0) {
		Trace("Can't retrieve diary root");
		var_135_object = 0;
		return 2;
	}
	var_137_object = var_135_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_811(var_54_cvector, var_55_cvector)
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


func_556(var_2_object, var_3_string)
{
	func_651();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_821(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0;
	GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
	return 2;
}


func_950(var_126_bool, var_127_object, var_128_int)
{
	var_129_object = Obj(); var_130_object = Obj(); var_131_int = 0; var_132_object = Obj(); var_133_object = Obj(); var_134_int = 0;
	func_937(Obj());
	var_135_object = var_132_object;
	@@var_132_object:Find(var_128_int, var_133_object);
	var_140_bool = var_133_object == 0; //@nz
	if(var_140_bool != 0) {
		var_142_int = "Can't find diary parent with id: " + var_128_int;
		Trace(var_142_int);
		var_126_bool = 0;
		return 6;
	}
	@@var_133_object:AddChild(var_127_object);
	SendWorldWndMessage((int)7);
	@@var_127_object:GetCategory(var_134_int);
	SetDiarySection(var_134_int);
	var_126_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_440(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_664(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_489(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_805(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_570()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_664(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_1029((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_584:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_664(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_617;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_1022(var_68_string, var_69_int);
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
						goto Label_646;
					}
					goto Label_635;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_635;
				goto Label_646;
		}
		Label_635:
			var_71_bool = 0;
			func_649(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_646;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_584;

		}
	}
Label_646:
	ResetAAS();
	return 14;
	
}


func_826(var_97_string, var_98_bool)
{
	var_99_object = Obj(); var_100_object = Obj();
	FindActor(var_100_object, var_97_string);
	var_101_bool = var_100_object == 0; //@nz
	if(var_101_bool != 0) {
		var_103_int = "Door " + var_97_string;
		var_105_int = var_103_int + " not found";
		Trace(var_105_int);
	} else {
		@@var_100_object:SetProperty("locked", var_98_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_object = Obj(); var_96_object = Obj();
		var_95_object = var_1_object;
		var_96_object = var_0_object;
		func_855();
		var_107_object = Obj(); var_108_object = Obj();
		var_107_object = var_1_object;
		var_108_object = var_0_object;
		func_894();
		var_111_object = Obj(); var_112_object = Obj();
		var_111_object = var_1_object;
		var_112_object = var_0_object;
		func_862();
		var_158_string = "";
		func_162(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)522914);
		@@@var_0_object:ClearReplies();
		var_176_bool = 0; var_177_object = Obj();
		var_177_object = var_1_object;
		func_900(var_177_object);
		if(var_176_bool != 0) {
			@@@var_0_object:AddReply((int)522915, (int)37091, (int)24105);
		}
		var_185_bool = 0; var_186_object = Obj();
		var_186_object = var_1_object;
		func_912(var_186_object);
		if(var_185_bool != 0) {
			@@@var_0_object:AddReply((int)522927, (int)24119, (int)24118);
		}
		@@@var_0_object:AddReply((int)522926, (int)-1, (int)24117);
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_132:
	var_197_bool = 0;
	func_1020(var_197_bool);
	if(var_197_bool != 0) {

	Label_136:
		lshWaitForAnimEnd();
		var_198_string = var_3_string;
		if(var_198_string != 0) {
		} else {
			var_199_string = "";
			var_199_string = var_2_object;
			func_756(var_199_string);
			goto Label_136;
	}
		PlayAnimation("all", "idle");

	Label_151:
		WaitForAnimEnd();
		var_212_string = var_3_string;
		if(var_212_string != 0) {
			goto Label_161;
		}
		PlayAnimation("all", "idle");
		goto Label_151;
	}
	goto Label_161;
	
Label_161:
	return 0;
	
}


func_843()
{
	SetVariable("oob12Littlegirl1", (int)1);
	return 0;
}


func_849()
{
	SetVariable("oob12Littlegirl2", (int)1);
	return 0;
}


func_978(var_144_bool, var_145_int)
{
	var_146_object = Obj(); var_147_object = Obj(); var_148_object = Obj(); var_149_object = Obj();
	func_937(Obj());
	var_150_object = var_148_object;
	@@var_148_object:Find(var_145_int, var_149_object);
	var_151_bool = var_149_object == 0; //@nz
	if(var_151_bool != 0) {
		var_144_bool = 0;
		return 4;
	}
	@@var_149_object:Remove();
	var_144_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_855()
{
	var_97_string = ""; var_98_bool = 0;
	func_826("mnogogrannik@door2", (bool)0);
	return 0;
}


func_862()
{
	var_113_int = 0; var_114_string = "";
	func_821(var_113_int, "B_Mission5");
	var_118_bool = var_113_int == (int)0;
	if(var_118_bool != 0) {
		SetVariable("B_Mission5", (int)1);
		func_924();
		var_144_bool = 0; var_145_int = 0;
		func_978(var_144_bool, (int)562);
		var_152_bool = 0; var_153_int = 0;
		func_978(var_152_bool, (int)563);
		var_154_bool = 0; var_155_int = 0;
		func_978(var_154_bool, (int)564);
		var_156_bool = 0; var_157_int = 0;
		func_978(var_156_bool, (int)565);
	}
	return 0;
}


func_738()
{
	var_217_bool = 0; var_218_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_220_bool = 0;
	func_1020(var_220_bool);
	if(var_220_bool != 0) {
	} else {
		HasAnimationTrack(var_218_bool, "head");
		var_222_bool = var_218_bool;
		if(var_222_bool == 0) goto Label_755;
		UnlookAsync("head");
	}
Label_755:
	return 2;
	
}


func_995(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3f2";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_489(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_491(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_664(var_23_bool);
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
	func_570();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1012(var_76_int)
{
	var_76_int = 515561;
	return 0;
}


func_756(var_199_string)
{
	var_200_bool = 0; var_201_float = 0; var_202_float = 0; var_203_bool = 0; var_204_float = 0; var_205_float = 0;
	lshHasAnimation(var_203_bool, var_199_string);
	var_206_bool = var_203_bool;
	if(var_206_bool != 0) {
		lshGetAnimTimes(var_199_string, var_204_float, var_205_float);
		lshPlayAnimation(var_204_float, var_205_float, (bool)0);
	} else {
		var_209_int = "Can't find lsh animation : " + var_199_string;
		Trace(var_209_int);
	}
	return 6;
	
}


func_1014(var_75_int)
{
	var_75_int = 503346;
	return 0;
}


func_1016(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_1018(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_1020(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_1022(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


