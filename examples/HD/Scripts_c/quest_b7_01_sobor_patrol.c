// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,HasAnimation/3,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0xf8
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0xed vars=object
// @EVENT_26: op=0x121 vars=string
// @EVENT_5: op=0x129 vars=
// @EVENT_6: op=0x12e vars=
// @PE: 0x4a,0x84,0x9a,0xed,0x121

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_529();
		var_11_bool = var_6_int == (int)22194;
		if(var_11_bool != 0) {
			var_12_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528480, (int)29869, (int)29868);
			@@@var_0_object:AddReply((int)528478, (int)29867, (int)29866);
			return 0;
		}
		var_37_bool = var_6_int == (int)29867;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528479);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520982, (int)-1, (int)22195);
			@@@var_0_object:AddReply((int)524075, (int)-1, (int)25374);
			return 0;
		}
		var_47_bool = var_6_int == (int)29869;
		if(var_47_bool != 0) {
			var_48_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528481);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528482, (int)29867, (int)29870);
			return 0;
		}
		var_3_string = true;
		var_53_bool = 0;
		func_601(var_53_bool);
		if(var_53_bool != 0) {
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
	func_401();
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_8_bool = var_6_string == "cleanup";
	if(var_8_bool != 0) {
		func_269(var_6_string);
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
		func_318(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_536(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_249:
	var_8_bool = 0;
	func_406(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_249;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_320();
	goto Label_249;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_411(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_595(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_593(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_597(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_599(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_576(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_object = Obj(); var_80_object = Obj();
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_56:
	var_128_bool = var_17_bool == 0; //@nz
	if(var_128_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_480();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_514(var_90_string, var_91_bool)
{
	var_94_bool = 0; var_95_float = 0; var_96_float = 0; var_97_bool = 0; var_98_float = 0; var_99_float = 0;
	lshHasAnimation(var_97_bool, var_90_string);
	var_100_bool = var_97_bool;
	if(var_100_bool != 0) {
		lshGetAnimTimes(var_90_string, var_98_float, var_99_float);
		lshPlayAnimation(var_98_float, var_99_float, var_91_bool);
	} else {
		var_102_int = "Can't find lsh animation : " + var_90_string;
		Trace(var_102_int);
	}
	return 6;
	
}


func_132(var_2_object, var_86_string)
{
	var_87_bool = 0;
	func_601(var_87_bool);
	var_88_bool = var_87_bool == 0; //@nz
	if(var_88_bool != 0) {
		return 0;
	}
	var_89_bool = var_86_string == var_2_object;
	if(var_89_bool != 0) {
		return 0;
	}
	var_90_string = ""; var_91_bool = 0;
	var_86_string = var_90_string;
	var_93_bool = var_86_string == "";
	if(var_93_bool != 0) {
		var_91_bool = 0;
	} else {
		var_91_bool = 1;
	}
	func_514(var_90_string, var_91_bool);
	var_2_object = var_86_string;
	return 0;
	
}


func_269(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_318(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_536(var_14_object);
		RemoveActor(var_14_object);
	}
	return 2;
}


func_399(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_529()
{
	var_9_bool = 0;
	func_601(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_401()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_406(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_536(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_411(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_542(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_601(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_474;
		LookAsyncCamera("head");
	}
Label_474:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_542(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_552(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_559(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_561:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_552(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_561;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_318(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_576(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x24f";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_320()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_406(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_559((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_334:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_406(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_367;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_552(var_53_string, var_54_int);
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
						goto Label_396;
					}
					goto Label_385;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_385;
				goto Label_396;
		}
		Label_385:
			var_56_bool = 0;
			func_399(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_396;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_334;

		}
	}
Label_396:
	ResetAAS();
	return 14;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_86_string = "";
		func_132(var_80_object, "Neutral");
		@@@var_0_object:SetMessage((int)520981);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)528480, (int)29869, (int)29868);
		@@@var_0_object:AddReply((int)528478, (int)29867, (int)29866);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_110_bool = 0;
	func_601(var_110_bool);
	if(var_110_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
		} else {
			var_112_string = "";
			var_112_string = var_2_object;
			func_498(var_112_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_125_string = var_3_string;
		if(var_125_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_593(var_67_int)
{
	var_67_int = 515572;
	return 0;
}


func_595(var_66_int)
{
	var_66_int = 504031;
	return 0;
}


func_597(var_68_string)
{
	var_68_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_599(var_69_string)
{
	var_69_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_601(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_480()
{
	var_130_bool = 0; var_131_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_133_bool = 0;
	func_601(var_133_bool);
	if(var_133_bool != 0) {
	} else {
		HasAnimationTrack(var_131_bool, "head");
		var_135_bool = var_131_bool;
		if(var_135_bool == 0) goto Label_497;
		UnlookAsync("head");
	}
Label_497:
	return 2;
	
}


func_498(var_112_string)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0;
	lshHasAnimation(var_116_bool, var_112_string);
	var_119_bool = var_116_bool;
	if(var_119_bool != 0) {
		lshGetAnimTimes(var_112_string, var_117_float, var_118_float);
		lshPlayAnimation(var_117_float, var_118_float, (bool)0);
	} else {
		var_122_int = "Can't find lsh animation : " + var_112_string;
		Trace(var_122_int);
	}
	return 6;
	
}


