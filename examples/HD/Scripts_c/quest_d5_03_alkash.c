// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:ood5Prisoner1|W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x13c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xae vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x133 vars=object
// @EVENT_26: op=0x165 vars=string
// @EVENT_5: op=0x16d vars=
// @EVENT_6: op=0x172 vars=
// @PE: 0x4a,0x98,0xae,0x12a,0x133,0x165,0x289,0x28f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_597();
		var_11_bool = var_7_bool == (int)13016;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_649();
		}
		var_17_bool = var_7_bool == (int)13017;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_649();
		}
		var_21_bool = var_6_int == (int)13013;
		if(var_21_bool != 0) {
			var_22_bool = 0; var_23_object = Obj();
			var_23_object = var_1_object;
			func_655(var_23_object);
			if(var_22_bool != 0) {
				var_30_string = "";
				func_152(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)511803);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511804, (int)13015, (int)13014);
				@@@var_0_object:AddReply((int)511808, (int)13019, (int)13018);
				return 0;
			}
			var_54_string = "";
			func_152(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512550, (int)-1, (int)13719);
			return 0;
		}
		var_60_bool = var_6_int == (int)13019;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_152(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511810, (int)13015, (int)13020);
			@@@var_0_object:AddReply((int)511811, (int)13015, (int)13022);
			return 0;
		}
		var_70_bool = var_6_int == (int)13015;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_152(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511805);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511806, (int)-1, (int)13016);
			@@@var_0_object:AddReply((int)511807, (int)-1, (int)13017);
			return 0;
		}
		var_3_string = true;
		var_79_bool = 0;
		func_692(var_79_bool);
		if(var_79_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaf";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_469();
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	func_298(var_6_object, var_7_int, var_8_object);
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_8_bool = var_6_string == "cleanup";
	if(var_8_bool != 0) {
		func_337(var_6_string);
	}
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_386(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_604(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_317:
	var_8_bool = 0;
	func_474(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_317;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_388();
	goto Label_317;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_0_object = var_10_object;
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0;
	var_10_object = var_21_object;
	func_479(var_20_bool, var_21_object, (float)70.0);
	var_67_bool = var_20_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	CreateDialog(var_16_object);
	var_68_int = 0;
	func_686(var_68_int);
	@@var_16_object:SetNPCName(var_68_int);
	var_69_int = 0;
	func_684(var_69_int);
	@@var_16_object:SetNPCDescription(var_69_int);
	var_70_string = "";
	func_688(var_70_string);
	@@var_16_object:SetPhoto(var_70_string);
	var_71_string = "";
	func_690(var_71_string);
	@@var_16_object:SetPhoto2(var_71_string);
	var_72_int = 0;
	func_667(var_72_int);
	@@var_16_object:SetPlayerName(var_72_int);
	IsOverrideActive(var_17_bool);
	var_80_bool = var_17_bool;
	if(var_80_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	DoDialog(var_16_object);
	var_81_object = Obj(); var_82_object = Obj();
	var_10_object = var_81_object;
	var_16_object = var_82_object;
	TaskCall(1);
	func_74(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object);
	TaskReturn();
	@@var_16_object:IsDialogEnd(var_19_bool);
	
Label_56:
	var_143_bool = var_19_bool == 0; //@nz
	if(var_143_bool != 0) {
		sync();
		@@var_16_object:IsDialogEnd(var_19_bool);
		goto Label_56;
	}
	var_10_object = Obj();
	func_548();
	StopDialog(var_16_object);
	@@var_16_object:GetReturnValue((int)-1);
	var_18_int = var_9_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_386(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_388()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_474(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_632((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_402:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_474(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_435;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_625(var_53_string, var_54_int);
			PlayAnimation("all", var_53_string);
			WaitForAnimEnd(var_26_bool);
			var_55_bool = var_26_bool == 0; //@nz
			if(var_55_bool != 0) {
			} else {
		} else {
				var_60_bool = var_24_int == (int)1;
				if(var_60_bool != 0) {
					rand(var_27_float, (int)4);
					var_63_int = var_27_float + (int)1;
					Sleep(var_63_int, var_28_bool);
					var_64_bool = var_28_bool == 0; //@nz
					if(var_64_bool != 0) {
						goto Label_464;
					}
					goto Label_453;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_453;
				goto Label_464;
		}
		Label_453:
			var_56_bool = 0;
			func_467(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_464;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_402;

		}
	}
Label_464:
	ResetAAS();
	return 14;
	
}


func_582(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0;
	lshHasAnimation(var_107_bool, var_100_string);
	var_110_bool = var_107_bool;
	if(var_110_bool != 0) {
		lshGetAnimTimes(var_100_string, var_108_float, var_109_float);
		lshPlayAnimation(var_108_float, var_109_float, var_101_bool);
	} else {
		var_112_int = "Can't find lsh animation : " + var_100_string;
		Trace(var_112_int);
	}
	return 6;
	
}


func_649()
{
	SetVariable("ood5Prisoner1", (int)1);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_81_object, var_82_object)
{
	var_0_object = var_82_object;
	var_1_object = var_81_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_88_bool = 0; var_89_object = Obj();
		var_89_object = var_1_object;
		func_655(var_89_object);
		if(var_88_bool != 0) {
			var_96_string = "";
			func_152(var_82_object, "Neutral");
			@@@var_0_object:SetMessage((int)511803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511804, (int)13015, (int)13014);
			@@@var_0_object:AddReply((int)511808, (int)13019, (int)13018);
		} else {
				var_138_string = "";
				func_152(var_82_object, "Neutral");
				@@@var_0_object:SetMessage((int)512549);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512550, (int)-1, (int)13719);
				goto Label_122;
		}
	}
Label_122:
	var_120_bool = 0;
	func_692(var_120_bool);
	if(var_120_bool != 0) {

	Label_126:
		lshWaitForAnimEnd();
		var_121_string = var_3_string;
		if(var_121_string != 0) {
		} else {
			var_122_string = "";
			var_122_string = var_2_object;
			func_566(var_122_string);
			goto Label_126;
	}
		PlayAnimation("all", "idle");

	Label_141:
		WaitForAnimEnd();
		var_135_string = var_3_string;
		if(var_135_string != 0) {
			goto Label_151;
		}
		PlayAnimation("all", "idle");
		goto Label_141;

	}
	goto Label_151;
	
Label_151:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_655(var_88_bool)
{
	var_90_int = 0; var_91_string = "";
	func_620(var_90_int, "ood5Prisoner1");
	var_95_bool = var_90_int == (int)0;
	if(var_95_bool != 0) {
		var_88_bool = 1;
		return 0;
	}
	var_88_bool = 0;
	return 0;
}


func_337(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_386(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_604(var_14_object);
		RemoveActor(var_14_object);
	}
	return 2;
}


func_467(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_597()
{
	var_9_bool = 0;
	func_692(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_469()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_152(var_2_object, var_96_string)
{
	var_97_bool = 0;
	func_692(var_97_bool);
	var_98_bool = var_97_bool == 0; //@nz
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_bool = var_96_string == var_2_object;
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_string = ""; var_101_bool = 0;
	var_96_string = var_100_string;
	var_103_bool = var_96_string == "";
	if(var_103_bool != 0) {
		var_101_bool = 0;
	} else {
		var_101_bool = 1;
	}
	func_582(var_100_string, var_101_bool);
	var_2_object = var_96_string;
	return 0;
	
}


func_474(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_667(var_72_int)
{
	var_73_int = 0; var_74_int = 0;
	GetVariable("branch", var_74_int);
	var_77_bool = var_74_int == (int)0;
	if(var_77_bool != 0) {
		var_72_int = 1;
		return 2;
	EMIT "GOTO 0x2aa";
	}
	var_79_bool = var_74_int == (int)1;
	if(var_79_bool != 0) {
		var_72_int = 2;
		return 2;
	}
	var_72_int = 3;
	return 2;
}


func_604(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_479(var_20_bool, var_21_object, var_22_float)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0;
	@@var_21_object:GetPosition(var_33_cvector);
	@@var_21_object:GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	var_41_float = var_41_float + var_32_float;
	SetByIndex(var_33_cvector, 1) = var_41_float;
	GetPosition(var_34_cvector);
	GetEyesHeight(var_32_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	var_42_float = var_42_float + var_32_float;
	SetByIndex(var_34_cvector, 1) = var_42_float;
	var_35_cvector = var_33_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_44_int = var_35_cvector | var_35_cvector;
	var_45_float = sqrt(var_44_int);
	var_35_cvector = var_35_cvector / var_45_float;
	var_36_cvector = -var_35_cvector;
	var_46_float = var_35_cvector * var_22_float;
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	var_48_cvector = var_36_cvector ^ CVector(0.0, 1.0, 0.0);
	func_610(var_47_cvector, var_48_cvector);
	var_56_float = var_47_cvector * (int)25;
	var_57_int = var_46_float + var_56_float;
	var_37_cvector = var_57_int - CVector(0.0, 10.0, 0.0);
	var_38_cvector = var_34_cvector + var_37_cvector;
	IsOverrideActive(var_39_bool);
	var_59_bool = var_39_bool;
	if(var_59_bool != 0) {
		var_20_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_38_cvector, var_36_cvector, (bool)1);
	var_61_float = GetByIndex(var_37_cvector, 0);
	var_62_float = GetByIndex(var_37_cvector, 2);
	Rotate(var_61_float, var_62_float);
	var_63_bool = 0;
	func_692(var_63_bool);
	if(var_63_bool != 0) {
	} else {
		HasAnimationTrack(var_40_bool, "head");
		var_65_bool = var_40_bool;
		if(var_65_bool == 0) goto Label_542;
		LookAsyncCamera("head");
	}
Label_542:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_20_bool = 1;
	return 18;
	
}


func_610(var_47_cvector, var_48_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_48_cvector | var_48_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_47_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_47_cvector = var_48_cvector / var_51_float;
	return 2;
}


func_548()
{
	var_145_bool = 0; var_146_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_148_bool = 0;
	func_692(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		HasAnimationTrack(var_146_bool, "head");
		var_150_bool = var_146_bool;
		if(var_150_bool == 0) goto Label_565;
		UnlookAsync("head");
	}
Label_565:
	return 2;
	
}


func_298(var_7_int, var_8_object, var_11_object)
{
	var_9_int = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	TaskCall(0);
	func_0(var_11_object, var_9_int, var_10_object);
	TaskReturn();
	var_11_object = var_7_int;
	return 0;
}


func_684(var_69_int)
{
	var_69_int = 515557;
	return 0;
}


func_620(var_90_int, var_91_string)
{
	var_92_int = 0; var_93_int = 0;
	GetVariable(var_91_string, var_93_int);
	var_93_int = var_90_int;
	return 2;
}


func_686(var_68_int)
{
	var_68_int = 503342;
	return 0;
}


func_688(var_70_string)
{
	var_70_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_625(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_690(var_71_string)
{
	var_71_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_692(var_63_bool)
{
	var_63_bool = 0;
	return 0;
}


func_566(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0;
	lshHasAnimation(var_126_bool, var_122_string);
	var_129_bool = var_126_bool;
	if(var_129_bool != 0) {
		lshGetAnimTimes(var_122_string, var_127_float, var_128_float);
		lshPlayAnimation(var_127_float, var_128_float, (bool)0);
	} else {
		var_132_int = "Can't find lsh animation : " + var_122_string;
		Trace(var_132_int);
	}
	return 6;
	
}


func_632(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_634:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_625(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_634;
	}
	var_34_int = var_31_int;
	return 4;
	
}


