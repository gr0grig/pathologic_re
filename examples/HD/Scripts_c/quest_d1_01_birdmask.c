// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,GetVariable/2,SetVariable/2,Sleep/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,IsLoaded/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,FindActor/2,Trigger/2,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:d1q01wmask|W:d1q01bmask|W:quest_d1_01|W:remove_masks|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x14c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x151 vars=object
// @PE: 0x4a,0x84,0x9a,0x16d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_582();
		var_11_bool = var_6_int == (int)26207;
		if(var_11_bool != 0) {
			var_12_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524883);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524884, (int)26209, (int)26208);
			@@@var_0_object:AddReply((int)524898, (int)26224, (int)26223);
			return 0;
		}
		var_37_bool = var_6_int == (int)26224;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524900, (int)26226, (int)26225);
			return 0;
		}
		var_44_bool = var_6_int == (int)26226;
		if(var_44_bool != 0) {
			var_45_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524902, (int)26209, (int)26227);
			return 0;
		}
		var_51_bool = var_6_int == (int)26209;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524886, (int)26211, (int)26210);
			@@@var_0_object:AddReply((int)524893, (int)26218, (int)26217);
			return 0;
		}
		var_61_bool = var_6_int == (int)26218;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524895, (int)26211, (int)26219);
			return 0;
		}
		var_68_bool = var_6_int == (int)26211;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524888, (int)26213, (int)26212);
			return 0;
		}
		var_75_bool = var_6_int == (int)26213;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524890, (int)26215, (int)26214);
			return 0;
		}
		var_82_bool = var_6_int == (int)26215;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524892, (int)-1, (int)26216);
			@@@var_0_object:AddReply((int)524897, (int)-1, (int)26222);
			return 0;
		}
		var_3_string = true;
		var_91_bool = 0;
		func_643(var_91_bool);
		if(var_91_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	var_9_bool = var_0_object == 0; //@nz
	if(var_9_bool != 0) {
		func_454();
		var_10_int = 0; var_11_object = Obj();
		var_6_object = var_11_object;
		TaskCall(0);
		func_0(var_12_object, var_10_int, var_11_object);
		TaskReturn();
		var_0_object = true;
		GetVariable("d1q01wmask", var_8_int);
		SetVariable("d1q01bmask", (int)1);
		var_143_int = var_8_int;
		if(var_143_int != 0) {
			var_144_bool = 0; var_145_string = ""; var_146_string = "";
			func_599(var_144_bool, "quest_d1_01", "remove_masks");
		}
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = false;
	func_365();
	return 0;
}


func_0(var_0_object, var_10_int, var_11_object)
{
	var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0;
	var_0_object = var_11_object;
	var_21_bool = 0; var_22_object = Obj(); var_23_float = 0;
	var_11_object = var_22_object;
	func_464(var_21_bool, var_22_object, (float)130.0);
	var_68_bool = var_21_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_10_int = -2;
		return 8;
	}
	CreateDialog(var_17_object);
	var_69_int = 0;
	func_637(var_69_int);
	@@var_17_object:SetNPCName(var_69_int);
	var_70_int = 0;
	func_635(var_70_int);
	@@var_17_object:SetNPCDescription(var_70_int);
	var_71_string = "";
	func_639(var_71_string);
	@@var_17_object:SetPhoto(var_71_string);
	var_72_string = "";
	func_641(var_72_string);
	@@var_17_object:SetPhoto2(var_72_string);
	var_73_int = 0;
	func_645(var_73_int);
	@@var_17_object:SetPlayerName(var_73_int);
	IsOverrideActive(var_18_bool);
	var_81_bool = var_18_bool;
	if(var_81_bool != 0) {
		var_10_int = -2;
		return 8;
	}
	DoDialog(var_17_object);
	var_82_object = Obj(); var_83_object = Obj();
	var_11_object = var_82_object;
	var_17_object = var_83_object;
	TaskCall(1);
	func_74(var_84_object, var_85_object, var_86_string, var_87_bool, var_82_object, var_83_object);
	TaskReturn();
	@@var_17_object:IsDialogEnd(var_20_bool);
	
Label_56:
	var_131_bool = var_20_bool == 0; //@nz
	if(var_131_bool != 0) {
		sync();
		@@var_17_object:IsDialogEnd(var_20_bool);
		goto Label_56;
	}
	var_11_object = Obj();
	func_533();
	StopDialog(var_17_object);
	@@var_17_object:GetReturnValue((int)-1);
	var_19_int = var_10_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_641(var_72_string)
{
	var_72_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_643(var_64_bool)
{
	var_64_bool = 0;
	return 0;
}


func_132(var_2_object, var_89_string)
{
	var_90_bool = 0;
	func_643(var_90_bool);
	var_91_bool = var_90_bool == 0; //@nz
	if(var_91_bool != 0) {
		return 0;
	}
	var_92_bool = var_89_string == var_2_object;
	if(var_92_bool != 0) {
		return 0;
	}
	var_93_string = ""; var_94_bool = 0;
	var_89_string = var_93_string;
	var_96_bool = var_89_string == "";
	if(var_96_bool != 0) {
		var_94_bool = 0;
	} else {
		var_94_bool = 1;
	}
	func_567(var_93_string, var_94_bool);
	var_2_object = var_89_string;
	return 0;
	
}


func_645(var_73_int)
{
	var_74_int = 0; var_75_int = 0;
	GetVariable("branch", var_75_int);
	var_78_bool = var_75_int == (int)0;
	if(var_78_bool != 0) {
		var_73_int = 1;
		return 2;
	EMIT "GOTO 0x294";
	}
	var_80_bool = var_75_int == (int)1;
	if(var_80_bool != 0) {
		var_73_int = 2;
		return 2;
	}
	var_73_int = 3;
	return 2;
}


func_452(var_49_bool)
{
	var_49_bool = 1;
	return 0;
}


func_582()
{
	var_9_bool = 0;
	func_643(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_454()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_82_object, var_83_object)
{
	var_0_object = var_83_object;
	var_1_object = var_82_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_89_string = "";
		func_132(var_83_object, "Neutral");
		@@@var_0_object:SetMessage((int)524883);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)524884, (int)26209, (int)26208);
		@@@var_0_object:AddReply((int)524898, (int)26224, (int)26223);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_113_bool = 0;
	func_643(var_113_bool);
	if(var_113_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_114_string = var_3_string;
		if(var_114_string != 0) {
		} else {
			var_115_string = "";
			var_115_string = var_2_object;
			func_551(var_115_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_128_string = var_3_string;
		if(var_128_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_459(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0;
	IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
	return 2;
}


func_589(var_48_cvector, var_49_cvector)
{
	var_51_float = 0; var_52_float = 0;
	var_53_int = var_49_cvector | var_49_cvector;
	var_52_float = sqrt(var_53_int);
	var_54_float = 9.999999974752427e-07;
	var_55_bool = var_52_float < var_54_float;
	if(var_55_bool != 0) {
		var_48_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_48_cvector = var_49_cvector / var_52_float;
	return 2;
}


func_464(var_21_bool, var_22_object, var_23_float)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0;
	@@var_22_object:GetPosition(var_34_cvector);
	@@var_22_object:GetEyesHeight(var_33_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	var_42_float = var_42_float + var_33_float;
	SetByIndex(var_34_cvector, 1) = var_42_float;
	GetPosition(var_35_cvector);
	GetEyesHeight(var_33_float);
	var_43_float = GetByIndex(var_35_cvector, 1);
	var_43_float = var_43_float + var_33_float;
	SetByIndex(var_35_cvector, 1) = var_43_float;
	var_36_cvector = var_34_cvector - var_35_cvector;
	var_44_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (float)0;
	var_45_int = var_36_cvector | var_36_cvector;
	var_46_float = sqrt(var_45_int);
	var_36_cvector = var_36_cvector / var_46_float;
	var_37_cvector = -var_36_cvector;
	var_47_float = var_36_cvector * var_23_float;
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	var_49_cvector = var_37_cvector ^ CVector(0.0, 1.0, 0.0);
	func_589(var_48_cvector, var_49_cvector);
	var_57_float = var_48_cvector * (int)25;
	var_58_int = var_47_float + var_57_float;
	var_38_cvector = var_58_int - CVector(0.0, 10.0, 0.0);
	var_39_cvector = var_35_cvector + var_38_cvector;
	IsOverrideActive(var_40_bool);
	var_60_bool = var_40_bool;
	if(var_60_bool != 0) {
		var_21_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_39_cvector, var_37_cvector, (bool)1);
	var_62_float = GetByIndex(var_38_cvector, 0);
	var_63_float = GetByIndex(var_38_cvector, 2);
	Rotate(var_62_float, var_63_float);
	var_64_bool = 0;
	func_643(var_64_bool);
	if(var_64_bool != 0) {
	} else {
		HasAnimationTrack(var_41_bool, "head");
		var_66_bool = var_41_bool;
		if(var_66_bool == 0) goto Label_527;
		LookAsyncCamera("head");
	}
Label_527:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_21_bool = 1;
	return 18;
	
}


func_533()
{
	var_133_bool = 0; var_134_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_136_bool = 0;
	func_643(var_136_bool);
	if(var_136_bool != 0) {
	} else {
		HasAnimationTrack(var_134_bool, "head");
		var_138_bool = var_134_bool;
		if(var_138_bool == 0) goto Label_550;
		UnlookAsync("head");
	}
Label_550:
	return 2;
	
}


func_599(var_144_bool, var_145_string, var_146_string)
{
	var_147_object = Obj(); var_148_object = Obj();
	FindActor(var_148_object, var_145_string);
	var_149_bool = var_148_object == 0; //@ne
	if(var_149_bool != 0) {
		var_144_bool = 0;
		return 2;
	}
	Trigger(var_148_object, var_146_string);
	var_144_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_611(var_30_string, var_31_int)
{
	var_32_string = ""; var_33_string = "";
	var_34_int = var_31_int;
	if(var_34_int != 0) {
		"idle" = "idle" + var_31_int;
	}
	var_33_string = var_30_string;
	return 2;
}


func_551(var_115_string)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0;
	lshHasAnimation(var_119_bool, var_115_string);
	var_122_bool = var_119_bool;
	if(var_122_bool != 0) {
		lshGetAnimTimes(var_115_string, var_120_float, var_121_float);
		lshPlayAnimation(var_120_float, var_121_float, (bool)0);
	} else {
		var_125_int = "Can't find lsh animation : " + var_115_string;
		Trace(var_125_int);
	}
	return 6;
	
}


func_618(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_27_int = 0;
	
Label_620:
	var_30_string = ""; var_31_int = 0;
	var_27_int = var_31_int;
	func_611(var_30_string, var_31_int);
	HasAnimation(var_28_bool, "all", var_30_string);
	var_35_bool = var_28_bool == 0; //@nz
	if(var_35_bool != 0) {
	} else {
		var_27_int = var_27_int + (int)1;
		goto Label_620;
	}
	var_27_int = var_24_int;
	return 4;
	
}


func_365()
{
	
Label_365:
	func_373();
	Sleep((int)3);
	goto Label_365;
}
EMIT "Return(); Pop(0)";


func_373()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0;
	WaitForAnimEnd();
	var_20_bool = 0;
	func_459(var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		return 14;
	}
	func_618((int)0);
	var_24_int = var_13_int;
	var_14_int = 0;
	
Label_387:
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_14_int < (int)5;
	if(var_39_bool != 0) {
		var_40_bool = 0;
		func_459(var_40_bool);
		if(var_40_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		irand(var_15_int, (int)3);
		var_43_bool = var_15_int == (int)0;
		if(var_43_bool != 0) {
			var_44_int = var_13_int;
			if(var_44_int == 0) goto Label_420;
			irand(var_16_int, var_13_int);
			var_46_string = ""; var_47_int = 0;
			var_16_int = var_47_int;
			func_611(var_46_string, var_47_int);
			PlayAnimation("all", var_46_string);
			WaitForAnimEnd(var_17_bool);
			var_48_bool = var_17_bool == 0; //@nz
			if(var_48_bool != 0) {
			} else {
		} else {
				var_53_bool = var_15_int == (int)1;
				if(var_53_bool != 0) {
					rand(var_18_float, (int)4);
					var_56_int = var_18_float + (int)1;
					Sleep(var_56_int, var_19_bool);
					var_57_bool = var_19_bool == 0; //@nz
					if(var_57_bool != 0) {
						goto Label_449;
					}
					goto Label_438;
				}
				var_58_int = var_14_int;
				if(var_58_int == 0) goto Label_438;
				goto Label_449;
		}
		Label_438:
			var_49_bool = 0;
			func_452(var_49_bool);
			var_50_bool = var_49_bool == 0; //@nz
			if(var_50_bool != 0) {
				goto Label_449;
			}
			ResetAAS();
			var_14_int = var_14_int + (int)1;
			goto Label_387;

		}
	}
Label_449:
	ResetAAS();
	return 14;
	
}


func_567(var_93_string, var_94_bool)
{
	var_97_bool = 0; var_98_float = 0; var_99_float = 0; var_100_bool = 0; var_101_float = 0; var_102_float = 0;
	lshHasAnimation(var_100_bool, var_93_string);
	var_103_bool = var_100_bool;
	if(var_103_bool != 0) {
		lshGetAnimTimes(var_93_string, var_101_float, var_102_float);
		lshPlayAnimation(var_101_float, var_102_float, var_94_bool);
	} else {
		var_105_int = "Can't find lsh animation : " + var_93_string;
		Trace(var_105_int);
	}
	return 6;
	
}


func_635(var_70_int)
{
	var_70_int = 515571;
	return 0;
}


func_637(var_69_int)
{
	var_69_int = 504029;
	return 0;
}


func_639(var_71_string)
{
	var_71_string = "ui/NPC_bmask.png";
	return 0;
}


