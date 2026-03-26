// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,IsLoaded/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,FindActor/2,Trigger/2,GetGameTime/1,HasAnimation/3,GetMainOutdoorScene/1,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d4_01|W:birdmask_done|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:d4q01Whitemask|W:pt_d4q01_key1_region|A:AddMark|A:ShowMap|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x144
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x14d vars=object
// @PE: 0x4a,0x89,0x9f,0x14d,0x27b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_561();
		var_11_bool = var_7_bool == (int)10626;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_619();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_635(var_31_object);
		}
		var_57_bool = var_7_bool == (int)10627;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_619();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_635(var_61_object);
		}
		var_63_bool = var_6_int == (int)10619;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_137(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509651, (int)10621, (int)10620);
			@@@var_0_object:AddReply((int)509661, (int)10633, (int)10632);
			@@@var_0_object:AddReply((int)509665, (int)10625, (int)10638);
			return 0;
		}
		var_92_bool = var_6_int == (int)10633;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_137(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509663, (int)10625, (int)10634);
			@@@var_0_object:AddReply((int)509664, (int)10621, (int)10636);
			return 0;
		}
		var_102_bool = var_6_int == (int)10621;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_137(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509653, (int)10623, (int)10622);
			@@@var_0_object:AddReply((int)509660, (int)10625, (int)10630);
			return 0;
		}
		var_112_bool = var_6_int == (int)10623;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_137(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509655, (int)10625, (int)10624);
			@@@var_0_object:AddReply((int)509659, (int)10625, (int)10628);
			return 0;
		}
		var_122_bool = var_6_int == (int)10625;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_137(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509657, (int)-1, (int)10626);
			@@@var_0_object:AddReply((int)509658, (int)-1, (int)10627);
			return 0;
		}
		var_3_string = true;
		var_131_bool = 0;
		func_726(var_131_bool);
		if(var_131_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = var_0_object == 0; //@nz
	if(var_7_bool != 0) {
		var_0_object = true;
		func_433();
		var_8_int = 0; var_9_object = Obj();
		var_6_object = var_9_object;
		TaskCall(0);
		func_0(var_10_object, var_8_int, var_9_object);
		TaskReturn();
		var_141_bool = 0; var_142_string = ""; var_143_string = "";
		func_578(var_141_bool, "quest_d4_01", "birdmask_done");
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = false;
	
Label_325:
	Sleep((int)3);
	func_352();
	goto Label_325;
}
EMIT "Return(); Pop(0)";


func_512()
{
	var_134_bool = 0; var_135_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_137_bool = 0;
	func_726(var_137_bool);
	if(var_137_bool != 0) {
	} else {
		HasAnimationTrack(var_135_bool, "head");
		var_139_bool = var_135_bool;
		if(var_139_bool == 0) goto Label_529;
		UnlookAsync("head");
	}
Label_529:
	return 2;
	
}


func_0(var_0_object, var_8_int, var_9_object)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	var_0_object = var_9_object;
	var_19_bool = 0; var_20_object = Obj(); var_21_float = 0;
	var_9_object = var_20_object;
	func_443(var_19_bool, var_20_object, (float)130.0);
	var_66_bool = var_19_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	CreateDialog(var_15_object);
	var_67_int = 0;
	func_720(var_67_int);
	@@var_15_object:SetNPCName(var_67_int);
	var_68_int = 0;
	func_718(var_68_int);
	@@var_15_object:SetNPCDescription(var_68_int);
	var_69_string = "";
	func_722(var_69_string);
	@@var_15_object:SetPhoto(var_69_string);
	var_70_string = "";
	func_724(var_70_string);
	@@var_15_object:SetPhoto2(var_70_string);
	var_71_int = 0;
	func_701(var_71_int);
	@@var_15_object:SetPlayerName(var_71_int);
	IsOverrideActive(var_16_bool);
	var_79_bool = var_16_bool;
	if(var_79_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	DoDialog(var_15_object);
	var_80_object = Obj(); var_81_object = Obj();
	var_9_object = var_80_object;
	var_15_object = var_81_object;
	TaskCall(1);
	func_74(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object);
	TaskReturn();
	@@var_15_object:IsDialogEnd(var_18_bool);
	
Label_56:
	var_132_bool = var_18_bool == 0; //@nz
	if(var_132_bool != 0) {
		sync();
		@@var_15_object:IsDialogEnd(var_18_bool);
		goto Label_56;
	}
	var_9_object = Obj();
	func_512();
	StopDialog(var_15_object);
	@@var_15_object:GetReturnValue((int)-1);
	var_17_int = var_8_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_578(var_141_bool, var_142_string, var_143_string)
{
	var_144_object = Obj(); var_145_object = Obj();
	FindActor(var_145_object, var_142_string);
	var_146_bool = var_145_object == 0; //@ne
	if(var_146_bool != 0) {
		var_141_bool = 0;
		return 2;
	}
	Trigger(var_145_object, var_143_string);
	var_141_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_137(var_2_object, var_87_string)
{
	var_88_bool = 0;
	func_726(var_88_bool);
	var_89_bool = var_88_bool == 0; //@nz
	if(var_89_bool != 0) {
		return 0;
	}
	var_90_bool = var_87_string == var_2_object;
	if(var_90_bool != 0) {
		return 0;
	}
	var_91_string = ""; var_92_bool = 0;
	var_87_string = var_91_string;
	var_94_bool = var_87_string == "";
	if(var_94_bool != 0) {
		var_92_bool = 0;
	} else {
		var_92_bool = 1;
	}
	func_546(var_91_string, var_92_bool);
	var_2_object = var_87_string;
	return 0;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_80_object, var_81_object)
{
	var_0_object = var_81_object;
	var_1_object = var_80_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_87_string = "";
		func_137(var_81_object, "Neutral");
		@@@var_0_object:SetMessage((int)509650);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)509651, (int)10621, (int)10620);
		@@@var_0_object:AddReply((int)509661, (int)10633, (int)10632);
		@@@var_0_object:AddReply((int)509665, (int)10625, (int)10638);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_114_bool = 0;
	func_726(var_114_bool);
	if(var_114_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_115_string = var_3_string;
		if(var_115_string != 0) {
		} else {
			var_116_string = "";
			var_116_string = var_2_object;
			func_530(var_116_string);
			goto Label_111;
	}
		PlayAnimation("all", "idle");

	Label_126:
		WaitForAnimEnd();
		var_129_string = var_3_string;
		if(var_129_string != 0) {
			goto Label_136;
		}
		PlayAnimation("all", "idle");
		goto Label_126;
	}
	goto Label_136;
	
Label_136:
	return 0;
	
}


func_651(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj();
	GetMainOutdoorScene(var_19_object);
	var_21_bool = var_19_object == 0; //@ne
	if(var_21_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_20_object = 0;
		var_20_object = var_16_object;
		return 4;
	}
	@@var_19_object:GetMap(var_20_object);
	var_20_object = var_16_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_718(var_68_int)
{
	var_68_int = 515571;
	return 0;
}


func_590(var_27_float)
{
	var_28_float = 0; var_29_float = 0;
	GetGameTime(var_29_float);
	var_29_float = var_27_float;
	return 2;
}


func_720(var_67_int)
{
	var_67_int = 504029;
	return 0;
}


func_530(var_116_string)
{
	var_117_bool = 0; var_118_float = 0; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0;
	lshHasAnimation(var_120_bool, var_116_string);
	var_123_bool = var_120_bool;
	if(var_123_bool != 0) {
		lshGetAnimTimes(var_116_string, var_121_float, var_122_float);
		lshPlayAnimation(var_121_float, var_122_float, (bool)0);
	} else {
		var_126_int = "Can't find lsh animation : " + var_116_string;
		Trace(var_126_int);
	}
	return 6;
	
}


func_722(var_69_string)
{
	var_69_string = "ui/NPC_bmask.png";
	return 0;
}


func_595(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_724(var_70_string)
{
	var_70_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_726(var_62_bool)
{
	var_62_bool = 0;
	return 0;
}


func_602(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_604:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_595(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_604;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_668(var_32_object, var_33_string, var_34_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0;
	GetMainOutdoorScene(var_42_object);
	var_44_bool = var_42_object == 0; //@ne
	if(var_44_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_42_object:GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector);
	var_46_bool = var_43_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_48_int = "Warning: outdoor scene locator " + var_33_string;
		var_50_int = var_48_int + " doesnt exist";
		Trace(var_50_int);
	}
	@@var_42_object:GetMap(var_32_object);
	var_51_bool = var_32_object == 0; //@ne
	if(var_51_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_53_float = GetByIndex(var_40_cvector, 0);
	var_54_float = GetByIndex(var_40_cvector, 2);
	@@var_32_object:SetMapParams(var_53_float, var_54_float, var_34_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_352()
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0;
	WaitForAnimEnd();
	var_21_bool = 0;
	func_438(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 14;
	}
	func_602((int)0);
	var_25_int = var_14_int;
	var_15_int = 0;
	
Label_366:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_15_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_438(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		irand(var_16_int, (int)3);
		var_44_bool = var_16_int == (int)0;
		if(var_44_bool != 0) {
			var_45_int = var_14_int;
			if(var_45_int == 0) goto Label_399;
			irand(var_17_int, var_14_int);
			var_47_string = ""; var_48_int = 0;
			var_17_int = var_48_int;
			func_595(var_47_string, var_48_int);
			PlayAnimation("all", var_47_string);
			WaitForAnimEnd(var_18_bool);
			var_49_bool = var_18_bool == 0; //@nz
			if(var_49_bool != 0) {
			} else {
		} else {
				var_54_bool = var_16_int == (int)1;
				if(var_54_bool != 0) {
					rand(var_19_float, (int)4);
					var_57_int = var_19_float + (int)1;
					Sleep(var_57_int, var_20_bool);
					var_58_bool = var_20_bool == 0; //@nz
					if(var_58_bool != 0) {
						goto Label_428;
					}
					goto Label_417;
				}
				var_59_int = var_15_int;
				if(var_59_int == 0) goto Label_417;
				goto Label_428;
		}
		Label_417:
			var_50_bool = 0;
			func_431(var_50_bool);
			var_51_bool = var_50_bool == 0; //@nz
			if(var_51_bool != 0) {
				goto Label_428;
			}
			ResetAAS();
			var_15_int = var_15_int + (int)1;
			goto Label_366;

		}
	}
Label_428:
	ResetAAS();
	return 14;
	
}


func_546(var_91_string, var_92_bool)
{
	var_95_bool = 0; var_96_float = 0; var_97_float = 0; var_98_bool = 0; var_99_float = 0; var_100_float = 0;
	lshHasAnimation(var_98_bool, var_91_string);
	var_101_bool = var_98_bool;
	if(var_101_bool != 0) {
		lshGetAnimTimes(var_91_string, var_99_float, var_100_float);
		lshPlayAnimation(var_99_float, var_100_float, var_92_bool);
	} else {
		var_103_int = "Can't find lsh animation : " + var_91_string;
		Trace(var_103_int);
	}
	return 6;
	
}


func_635(var_31_object)
{
	var_32_object = Obj(); var_33_string = ""; var_34_float = 0;
	func_651(Obj());
	var_35_object = var_32_object;
	func_668(var_32_object, "pt_d4q01_key1_region", (float)2);
	var_55_object = Obj();
	func_651(var_55_object);
	@@var_31_object:ShowMap(var_55_object);
	return 0;
}


func_619()
{
	var_14_object = Obj(); var_15_object = Obj();
	func_651(Obj());
	var_16_object = var_15_object;
	var_27_float = 0;
	func_590(var_27_float);
	@@var_15_object:AddMark("d4q01Whitemask", "pt_d4q01_key1_region", (int)1, (int)511523, var_27_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_431(var_50_bool)
{
	var_50_bool = 1;
	return 0;
}


func_561()
{
	var_9_bool = 0;
	func_726(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_433()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_438(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_568(var_46_cvector, var_47_cvector)
{
	var_49_float = 0; var_50_float = 0;
	var_51_int = var_47_cvector | var_47_cvector;
	var_50_float = sqrt(var_51_int);
	var_52_float = 9.999999974752427e-07;
	var_53_bool = var_50_float < var_52_float;
	if(var_53_bool != 0) {
		var_46_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_46_cvector = var_47_cvector / var_50_float;
	return 2;
}


func_443(var_19_bool, var_20_object, var_21_float)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0;
	@@var_20_object:GetPosition(var_32_cvector);
	@@var_20_object:GetEyesHeight(var_31_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_31_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	GetPosition(var_33_cvector);
	GetEyesHeight(var_31_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	var_41_float = var_41_float + var_31_float;
	SetByIndex(var_33_cvector, 1) = var_41_float;
	var_34_cvector = var_32_cvector - var_33_cvector;
	var_42_float = GetByIndex(var_34_cvector, 1);
	SetByIndex(var_34_cvector, 1) = (float)0;
	var_43_int = var_34_cvector | var_34_cvector;
	var_44_float = sqrt(var_43_int);
	var_34_cvector = var_34_cvector / var_44_float;
	var_35_cvector = -var_34_cvector;
	var_45_float = var_34_cvector * var_21_float;
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_35_cvector ^ CVector(0.0, 1.0, 0.0);
	func_568(var_46_cvector, var_47_cvector);
	var_55_float = var_46_cvector * (int)25;
	var_56_int = var_45_float + var_55_float;
	var_36_cvector = var_56_int - CVector(0.0, 10.0, 0.0);
	var_37_cvector = var_33_cvector + var_36_cvector;
	IsOverrideActive(var_38_bool);
	var_58_bool = var_38_bool;
	if(var_58_bool != 0) {
		var_19_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_37_cvector, var_35_cvector, (bool)1);
	var_60_float = GetByIndex(var_36_cvector, 0);
	var_61_float = GetByIndex(var_36_cvector, 2);
	Rotate(var_60_float, var_61_float);
	var_62_bool = 0;
	func_726(var_62_bool);
	if(var_62_bool != 0) {
	} else {
		HasAnimationTrack(var_39_bool, "head");
		var_64_bool = var_39_bool;
		if(var_64_bool == 0) goto Label_506;
		LookAsyncCamera("head");
	}
Label_506:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_19_bool = 1;
	return 18;
	
}


func_701(var_71_int)
{
	var_72_int = 0; var_73_int = 0;
	GetVariable("branch", var_73_int);
	var_76_bool = var_73_int == (int)0;
	if(var_76_bool != 0) {
		var_71_int = 1;
		return 2;
	EMIT "GOTO 0x2cc";
	}
	var_78_bool = var_73_int == (int)1;
	if(var_78_bool != 0) {
		var_71_int = 2;
		return 2;
	}
	var_71_int = 3;
	return 2;
}


