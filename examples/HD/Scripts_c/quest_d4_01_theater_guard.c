// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ood4TheaterGuard1|W:ood4TheaterGuard2|W:d4q01KeyWhite|W:d4q01|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x18a
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc7 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x194 vars=object
// @EVENT_7: op=0x1c9 vars=int
// @PE: 0x4a,0xb1,0xc7,0x194,0x19f,0x1c9,0x1e0,0x300,0x306,0x30c,0x318,0x324,0x330

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_722();
		var_15_bool = var_11_object == (int)38060;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_768();
		}
		var_21_bool = var_11_object == (int)38064;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_774();
		}
		var_27_bool = var_10_bool == (int)38059;
		if(var_27_bool != 0) {
			var_28_bool = 0;
			var_28_bool = 0;
			var_29_bool = 0; var_30_object = Obj();
			var_30_object = var_1_object;
			func_780(var_30_object);
			if(var_29_bool != 0) {
				var_37_bool = 0; var_38_object = Obj();
				var_38_object = var_1_object;
				func_792(var_38_object);
				var_43_bool = var_37_bool == 0; //@nz
				if(var_43_bool != 0) {
					var_28_bool = 1;
				}
			}
			if(var_28_bool != 0) {
				var_44_string = "";
				func_177(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)536275);
				@@@var_0_object:ClearReplies();
				var_62_bool = 0; var_63_object = Obj();
				var_63_object = var_1_object;
				func_804(var_63_object);
				if(var_62_bool != 0) {
					@@@var_0_object:AddReply((int)536276, (int)38085, (int)38060);
				}
				@@@var_0_object:AddReply((int)536300, (int)-1, (int)38084);
				return 0;
			}
			var_74_string = "";
			func_177(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)536279);
			@@@var_0_object:ClearReplies();
			var_76_bool = 0; var_77_object = Obj();
			var_77_object = var_1_object;
			func_816(var_77_object);
			if(var_76_bool != 0) {
				@@@var_0_object:AddReply((int)536280, (int)38092, (int)38064);
			}
			@@@var_0_object:AddReply((int)536283, (int)-1, (int)38067);
			return 0;
		}
		var_89_bool = var_10_bool == (int)38092;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_177(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)536308);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536309, (int)38065, (int)38093);
			@@@var_0_object:AddReply((int)536310, (int)38065, (int)38094);
			return 0;
		}
		var_99_bool = var_10_bool == (int)38065;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_177(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)536281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536282, (int)-1, (int)38066);
			@@@var_0_object:AddReply((int)536307, (int)-1, (int)38091);
			return 0;
		}
		var_109_bool = var_10_bool == (int)38085;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_177(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)536301);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536302, (int)38088, (int)38086);
			@@@var_0_object:AddReply((int)536303, (int)-1, (int)38087);
			return 0;
		}
		var_119_bool = var_10_bool == (int)38088;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_177(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)536304);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536305, (int)-1, (int)38089);
			@@@var_0_object:AddReply((int)536306, (int)-1, (int)38090);
			return 0;
		}
		var_3_string = true;
		var_128_bool = 0;
		func_853(var_128_bool);
		if(var_128_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc8";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_480(var_9_object, var_10_object);
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
		func_442(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_711(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_479;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_479:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_394:
	Sleep((int)1);
	var_11_float = 0; var_12_float = 0;
	func_415(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	goto Label_394;
}
EMIT "Return(); Pop(0)";


func_768()
{
	SetVariable("ood4TheaterGuard1", (int)1);
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_593(var_25_bool, var_26_object, (float)130.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_847(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_845(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_849(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_851(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_828(var_77_int);
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
	var_171_bool = var_24_bool == 0; //@nz
	if(var_171_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_662();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_774()
{
	SetVariable("ood4TheaterGuard2", (int)1);
	return 0;
}


func_780(var_94_bool)
{
	var_96_int = 0; var_97_string = "";
	func_739(var_96_int, "d4q01KeyWhite");
	var_101_bool = var_96_int != (int)0;
	if(var_101_bool != 0) {
		var_94_bool = 1;
		return 0;
	}
	var_94_bool = 0;
	return 0;
}


func_662()
{
	var_173_bool = 0; var_174_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_176_bool = 0;
	func_853(var_176_bool);
	if(var_176_bool != 0) {
	} else {
		HasAnimationTrack(var_174_bool, "head");
		var_178_bool = var_174_bool;
		if(var_178_bool == 0) goto Label_679;
		UnlookAsync("head");
	}
Label_679:
	return 2;
	
}


func_792(var_102_bool)
{
	var_104_int = 0; var_105_string = "";
	func_739(var_104_int, "d4q01");
	var_107_bool = var_104_int == (int)1000;
	if(var_107_bool != 0) {
		var_102_bool = 1;
		return 0;
	}
	var_102_bool = 0;
	return 0;
}


func_415(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_588(var_13_bool);
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
	func_494();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_804(var_127_bool)
{
	var_129_int = 0; var_130_string = "";
	func_739(var_129_int, "ood4TheaterGuard1");
	var_132_bool = var_129_int == (int)0;
	if(var_132_bool != 0) {
		var_127_bool = 1;
		return 0;
	}
	var_127_bool = 0;
	return 0;
}


func_680(var_141_string)
{
	var_142_bool = 0; var_143_float = 0; var_144_float = 0; var_145_bool = 0; var_146_float = 0; var_147_float = 0;
	lshHasAnimation(var_145_bool, var_141_string);
	var_148_bool = var_145_bool;
	if(var_148_bool != 0) {
		lshGetAnimTimes(var_141_string, var_146_float, var_147_float);
		lshPlayAnimation(var_146_float, var_147_float, (bool)0);
	} else {
		var_151_int = "Can't find lsh animation : " + var_141_string;
		Trace(var_151_int);
	}
	return 6;
	
}


func_816(var_159_bool)
{
	var_161_int = 0; var_162_string = "";
	func_739(var_161_int, "ood4TheaterGuard2");
	var_164_bool = var_161_int == (int)0;
	if(var_164_bool != 0) {
		var_159_bool = 1;
		return 0;
	}
	var_159_bool = 0;
	return 0;
}


func_177(var_2_object, var_109_string)
{
	var_110_bool = 0;
	func_853(var_110_bool);
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
	func_696(var_113_string, var_114_bool);
	var_2_object = var_109_string;
	return 0;
	
}


func_696(var_113_string, var_114_bool)
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


func_442(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_580(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_828(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x34b";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_573(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_575()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_580(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_711(var_27_object)
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
		func_780(var_95_object);
		if(var_94_bool != 0) {
			var_102_bool = 0; var_103_object = Obj();
			var_103_object = var_1_object;
			func_792(var_103_object);
			var_108_bool = var_102_bool == 0; //@nz
			if(var_108_bool != 0) {
				var_93_bool = 1;
			}
		}
		if(var_93_bool != 0) {
			var_109_string = "";
			func_177(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)536275);
			@@@var_0_object:ClearReplies();
			var_127_bool = 0; var_128_object = Obj();
			var_128_object = var_1_object;
			func_804(var_128_object);
			if(var_127_bool != 0) {
				@@@var_0_object:AddReply((int)536276, (int)38085, (int)38060);
			}
			@@@var_0_object:AddReply((int)536300, (int)-1, (int)38084);
		} else {
				var_157_string = "";
				func_177(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)536279);
				@@@var_0_object:ClearReplies();
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_816(var_160_object);
				if(var_159_bool != 0) {
					@@@var_0_object:AddReply((int)536280, (int)38092, (int)38064);
				}
				@@@var_0_object:AddReply((int)536283, (int)-1, (int)38067);
				goto Label_147;
		}
	}
Label_147:
	var_139_bool = 0;
	func_853(var_139_bool);
	if(var_139_bool != 0) {

	Label_151:
		lshWaitForAnimEnd();
		var_140_string = var_3_string;
		if(var_140_string != 0) {
		} else {
			var_141_string = "";
			var_141_string = var_2_object;
			func_680(var_141_string);
			goto Label_151;
	}
		PlayAnimation("all", "idle");

	Label_166:
		WaitForAnimEnd();
		var_154_string = var_3_string;
		if(var_154_string != 0) {
			goto Label_176;
		}
		PlayAnimation("all", "idle");
		goto Label_166;

	}
	goto Label_176;
	
Label_176:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_588(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_845(var_74_int)
{
	var_74_int = 515571;
	return 0;
}


func_847(var_73_int)
{
	var_73_int = 504029;
	return 0;
}


func_849(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
	return 0;
}


func_593(var_25_bool, var_26_object, var_27_float)
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
	func_729(var_52_cvector, var_53_cvector);
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
	func_853(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_656;
		LookAsyncCamera("head");
	}
Label_656:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_851(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_722()
{
	var_13_bool = 0;
	func_853(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_853(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_729(var_52_cvector, var_53_cvector)
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


func_480(var_2_object, var_3_string)
{
	func_575();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_739(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0;
	GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
	return 2;
}


func_744(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_494()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_588(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_751((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_508:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_588(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_541;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_744(var_58_string, var_59_int);
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
						goto Label_570;
					}
					goto Label_559;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_559;
				goto Label_570;
		}
		Label_559:
			var_61_bool = 0;
			func_573(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_570;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_508;

		}
	}
Label_570:
	ResetAAS();
	return 14;
	
}


func_751(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_753:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_744(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_753;
	}
	var_39_int = var_36_int;
	return 4;
	
}


