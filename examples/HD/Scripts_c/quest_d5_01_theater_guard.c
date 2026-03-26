// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ood5Whitemask1|W:ood5Whitemask2|W:branch|W:ui/NPC_wmask.png|W:ui/NPC_wmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1bc
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa9 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x1c6 vars=object
// @EVENT_7: op=0x1fb vars=int
// @PE: 0x4a,0x93,0xa9,0x1c6,0x1d1,0x1fb,0x212,0x332,0x338,0x33e,0x34a

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_772();
		var_15_bool = var_11_object == (int)3243;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_818();
		}
		var_21_bool = var_11_object == (int)3244;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_824();
		}
		var_27_bool = var_10_bool == (int)3242;
		if(var_27_bool != 0) {
			var_28_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502916);
			@@@var_0_object:ClearReplies();
			var_46_bool = 0; var_47_object = Obj();
			var_47_object = var_1_object;
			func_830(var_47_object);
			if(var_46_bool != 0) {
				@@@var_0_object:AddReply((int)502917, (int)3252, (int)3243);
			}
			var_57_bool = 0; var_58_object = Obj();
			var_58_object = var_1_object;
			func_842(var_58_object);
			if(var_57_bool != 0) {
				@@@var_0_object:AddReply((int)502918, (int)3245, (int)3244);
			}
			@@@var_0_object:AddReply((int)536324, (int)-1, (int)38104);
			return 0;
		}
		var_70_bool = var_10_bool == (int)3245;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)502920, (int)3247, (int)3246);
			@@@var_0_object:AddReply((int)502922, (int)3249, (int)3248);
			return 0;
		}
		var_80_bool = var_10_bool == (int)3249;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)502924, (int)-1, (int)3250);
			@@@var_0_object:AddReply((int)502925, (int)-1, (int)3251);
			return 0;
		}
		var_90_bool = var_10_bool == (int)3247;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515526, (int)-1, (int)16622);
			return 0;
		}
		var_97_bool = var_10_bool == (int)3252;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)502927, (int)3258, (int)3253);
			@@@var_0_object:AddReply((int)502928, (int)3255, (int)3254);
			return 0;
		}
		var_107_bool = var_10_bool == (int)3255;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502929);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)502931, (int)3258, (int)3257);
			@@@var_0_object:AddReply((int)502930, (int)-1, (int)3256);
			return 0;
		}
		var_117_bool = var_10_bool == (int)3258;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)502938, (int)3265, (int)3264);
			@@@var_0_object:AddReply((int)502934, (int)3261, (int)3260);
			@@@var_0_object:AddReply((int)502933, (int)-1, (int)3259);
			return 0;
		}
		var_130_bool = var_10_bool == (int)3261;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)502936, (int)-1, (int)3262);
			@@@var_0_object:AddReply((int)502937, (int)-1, (int)3263);
			return 0;
		}
		var_140_bool = var_10_bool == (int)3265;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)502940, (int)3261, (int)3266);
			@@@var_0_object:AddReply((int)502941, (int)3269, (int)3267);
			return 0;
		}
		var_150_bool = var_10_bool == (int)3269;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)502942);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)502943, (int)-1, (int)3270);
			return 0;
		}
		var_3_string = true;
		var_156_bool = 0;
		func_879(var_156_bool);
		if(var_156_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaa";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_530(var_9_object, var_10_object);
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
		func_492(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_761(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_529;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_529:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_444:
	Sleep((int)1);
	var_11_float = 0; var_12_float = 0;
	func_465(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	goto Label_444;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_643(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_873(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_871(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_875(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_877(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_854(var_77_int);
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
	var_152_bool = var_24_bool == 0; //@nz
	if(var_152_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_712();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_643(var_25_bool, var_26_object, var_27_float)
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
	func_779(var_52_cvector, var_53_cvector);
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
	func_879(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_706;
		LookAsyncCamera("head");
	}
Label_706:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_772()
{
	var_13_bool = 0;
	func_879(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_712()
{
	var_154_bool = 0; var_155_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_157_bool = 0;
	func_879(var_157_bool);
	if(var_157_bool != 0) {
	} else {
		HasAnimationTrack(var_155_bool, "head");
		var_159_bool = var_155_bool;
		if(var_159_bool == 0) goto Label_729;
		UnlookAsync("head");
	}
Label_729:
	return 2;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_string = "";
		func_147(var_87_object, "Neutral");
		@@@var_0_object:SetMessage((int)502916);
		@@@var_0_object:ClearReplies();
		var_111_bool = 0; var_112_object = Obj();
		var_112_object = var_1_object;
		func_830(var_112_object);
		if(var_111_bool != 0) {
			@@@var_0_object:AddReply((int)502917, (int)3252, (int)3243);
		}
		var_122_bool = 0; var_123_object = Obj();
		var_123_object = var_1_object;
		func_842(var_123_object);
		if(var_122_bool != 0) {
			@@@var_0_object:AddReply((int)502918, (int)3245, (int)3244);
		}
		@@@var_0_object:AddReply((int)536324, (int)-1, (int)38104);
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_117:
	var_134_bool = 0;
	func_879(var_134_bool);
	if(var_134_bool != 0) {

	Label_121:
		lshWaitForAnimEnd();
		var_135_string = var_3_string;
		if(var_135_string != 0) {
		} else {
			var_136_string = "";
			var_136_string = var_2_object;
			func_730(var_136_string);
			goto Label_121;
	}
		PlayAnimation("all", "idle");

	Label_136:
		WaitForAnimEnd();
		var_149_string = var_3_string;
		if(var_149_string != 0) {
			goto Label_146;
		}
		PlayAnimation("all", "idle");
		goto Label_136;
	}
	goto Label_146;
	
Label_146:
	return 0;
	
}


func_779(var_52_cvector, var_53_cvector)
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


func_842(var_122_bool)
{
	var_124_int = 0; var_125_string = "";
	func_789(var_124_int, "ood5Whitemask2");
	var_127_bool = var_124_int == (int)0;
	if(var_127_bool != 0) {
		var_122_bool = 1;
		return 0;
	}
	var_122_bool = 0;
	return 0;
}


func_638(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_465(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_638(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	SetTimer((int)10, (float)1.0);
	func_544();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_530(var_2_object, var_3_string)
{
	func_625();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_147(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_879(var_94_bool);
	var_95_bool = var_94_bool == 0; //@nz
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_bool = var_93_string == var_2_object;
	if(var_96_bool != 0) {
		return 0;
	}
	var_97_string = ""; var_98_bool = 0;
	var_93_string = var_97_string;
	var_100_bool = var_93_string == "";
	if(var_100_bool != 0) {
		var_98_bool = 0;
	} else {
		var_98_bool = 1;
	}
	func_746(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	return 0;
	
}


func_789(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0;
	GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
	return 2;
}


func_854(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x365";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_794(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_730(var_136_string)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0;
	lshHasAnimation(var_140_bool, var_136_string);
	var_143_bool = var_140_bool;
	if(var_143_bool != 0) {
		lshGetAnimTimes(var_136_string, var_141_float, var_142_float);
		lshPlayAnimation(var_141_float, var_142_float, (bool)0);
	} else {
		var_146_int = "Can't find lsh animation : " + var_136_string;
		Trace(var_146_int);
	}
	return 6;
	
}


func_544()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_638(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_801((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_558:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_638(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_591;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_794(var_58_string, var_59_int);
			PlayAnimation("all", var_58_string);
			WaitForAnimEnd(var_31_bool);
			var_60_bool = var_31_bool == 0; //@nz
			if(var_60_bool != 0) {
			} else {
		} else {
				var_65_bool = var_29_int == (int)1;
				if(var_65_bool != 0) {
					rand(var_32_float, (int)4);
					var_68_int = var_32_float + (int)1;
					Sleep(var_68_int, var_33_bool);
					var_69_bool = var_33_bool == 0; //@nz
					if(var_69_bool != 0) {
						goto Label_620;
					}
					goto Label_609;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_609;
				goto Label_620;
		}
		Label_609:
			var_61_bool = 0;
			func_623(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_620;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_558;

		}
	}
Label_620:
	ResetAAS();
	return 14;
	
}


func_801(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_803:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_794(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_803;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_871(var_74_int)
{
	var_74_int = 515569;
	return 0;
}


func_873(var_73_int)
{
	var_73_int = 503354;
	return 0;
}


func_746(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0;
	lshHasAnimation(var_104_bool, var_97_string);
	var_107_bool = var_104_bool;
	if(var_107_bool != 0) {
		lshGetAnimTimes(var_97_string, var_105_float, var_106_float);
		lshPlayAnimation(var_105_float, var_106_float, var_98_bool);
	} else {
		var_109_int = "Can't find lsh animation : " + var_97_string;
		Trace(var_109_int);
	}
	return 6;
	
}


func_875(var_75_string)
{
	var_75_string = "ui/NPC_wmask.png";
	return 0;
}


func_492(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_630(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_877(var_76_string)
{
	var_76_string = "ui/NPC_wmask_b.png";
	return 0;
}


func_879(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_623(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_625()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_818()
{
	SetVariable("ood5Whitemask1", (int)1);
	return 0;
}


func_630(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_824()
{
	SetVariable("ood5Whitemask2", (int)1);
	return 0;
}


func_761(var_27_object)
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


func_830(var_111_bool)
{
	var_113_int = 0; var_114_string = "";
	func_789(var_113_int, "ood5Whitemask1");
	var_118_bool = var_113_int == (int)0;
	if(var_118_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


