// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:b6q02|W:oob6Prophet1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Prophet.png|W:ui/NPC_Prophet_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x17a
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x16f vars=object
// @EVENT_26: op=0x1a3 vars=string
// @EVENT_5: op=0x1ab vars=
// @EVENT_6: op=0x1b0 vars=
// @PE: 0x4a,0x9d,0xb3,0x16f,0x1a3,0x2c7,0x2d0,0x2d6

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_659();
		var_11_bool = var_7_bool == (int)22397;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_711();
		}
		var_40_bool = var_6_int == (int)22383;
		if(var_40_bool != 0) {
			var_41_bool = 0; var_42_object = Obj();
			var_42_object = var_1_object;
			func_726(var_42_object);
			if(var_41_bool != 0) {
				var_49_object = Obj(); var_50_object = Obj();
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_720();
				var_53_string = "";
				func_157(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)521181);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528428, (int)29813, (int)29812);
				@@@var_0_object:AddReply((int)528434, (int)29819, (int)29818);
				return 0;
			}
			var_77_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)521197);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521198, (int)-1, (int)22395);
			return 0;
		}
		var_83_bool = var_6_int == (int)29819;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528435);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528436, (int)29821, (int)29820);
			return 0;
		}
		var_90_bool = var_6_int == (int)29821;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528437);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528438, (int)29815, (int)29822);
			return 0;
		}
		var_97_bool = var_6_int == (int)29813;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528430, (int)29815, (int)29814);
			return 0;
		}
		var_104_bool = var_6_int == (int)29815;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528432, (int)29817, (int)29816);
			@@@var_0_object:AddReply((int)528439, (int)29817, (int)29824);
			return 0;
		}
		var_114_bool = var_6_int == (int)29817;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521182, (int)22396, (int)22384);
			return 0;
		}
		var_121_bool = var_6_int == (int)22396;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)521199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521200, (int)-1, (int)22397);
			return 0;
		}
		var_3_string = true;
		var_127_bool = 0;
		func_817(var_127_bool);
		if(var_127_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_531();
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
		func_399(var_6_string);
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
		func_448(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_666(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_379:
	var_8_bool = 0;
	func_536(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_379;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_450();
	goto Label_379;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_541(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_811(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_809(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_813(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_815(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_792(var_70_int);
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
	var_145_bool = var_17_bool == 0; //@nz
	if(var_145_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_610();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_448(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_450()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_536(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_694((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_464:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_536(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_497;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_687(var_53_string, var_54_int);
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
						goto Label_526;
					}
					goto Label_515;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_515;
				goto Label_526;
		}
		Label_515:
			var_56_bool = 0;
			func_529(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_526;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_464;

		}
	}
Label_526:
	ResetAAS();
	return 14;
	
}


func_644(var_102_string, var_103_bool)
{
	var_106_bool = 0; var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_float = 0; var_111_float = 0;
	lshHasAnimation(var_109_bool, var_102_string);
	var_112_bool = var_109_bool;
	if(var_112_bool != 0) {
		lshGetAnimTimes(var_102_string, var_110_float, var_111_float);
		lshPlayAnimation(var_110_float, var_111_float, var_103_bool);
	} else {
		var_114_int = "Can't find lsh animation : " + var_102_string;
		Trace(var_114_int);
	}
	return 6;
	
}


func_711()
{
	SetVariable("b6q02", (int)2);
	func_738();
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_86_bool = 0; var_87_object = Obj();
		var_87_object = var_1_object;
		func_726(var_87_object);
		if(var_86_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_720();
			var_98_string = "";
			func_157(var_80_object, "Neutral");
			@@@var_0_object:SetMessage((int)521181);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528428, (int)29813, (int)29812);
			@@@var_0_object:AddReply((int)528434, (int)29819, (int)29818);
		} else {
				var_140_string = "";
				func_157(var_80_object, "Neutral");
				@@@var_0_object:SetMessage((int)521197);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521198, (int)-1, (int)22395);
				goto Label_127;
		}
	}
Label_127:
	var_122_bool = 0;
	func_817(var_122_bool);
	if(var_122_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_123_string = var_3_string;
		if(var_123_string != 0) {
		} else {
			var_124_string = "";
			var_124_string = var_2_object;
			func_628(var_124_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_137_string = var_3_string;
		if(var_137_string != 0) {
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


func_399(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_448(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_666(var_14_object);
		RemoveActor(var_14_object);
	}
	return 2;
}


func_720()
{
	SetVariable("oob6Prophet1", (int)1);
	return 0;
}


func_529(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_659()
{
	var_9_bool = 0;
	func_817(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_531()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_726(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_682(var_88_int, "oob6Prophet1");
	var_93_bool = var_88_int == (int)0;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_792(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x327";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_536(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_666(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_541(var_18_bool, var_19_object, var_20_float)
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
	func_672(var_45_cvector, var_46_cvector);
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
	func_817(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_604;
		LookAsyncCamera("head");
	}
Label_604:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_157(var_2_object, var_98_string)
{
	var_99_bool = 0;
	func_817(var_99_bool);
	var_100_bool = var_99_bool == 0; //@nz
	if(var_100_bool != 0) {
		return 0;
	}
	var_101_bool = var_98_string == var_2_object;
	if(var_101_bool != 0) {
		return 0;
	}
	var_102_string = ""; var_103_bool = 0;
	var_98_string = var_102_string;
	var_105_bool = var_98_string == "";
	if(var_105_bool != 0) {
		var_103_bool = 0;
	} else {
		var_103_bool = 1;
	}
	func_644(var_102_string, var_103_bool);
	var_2_object = var_98_string;
	return 0;
	
}


func_672(var_45_cvector, var_46_cvector)
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


func_610()
{
	var_147_bool = 0; var_148_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_150_bool = 0;
	func_817(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		HasAnimationTrack(var_148_bool, "head");
		var_152_bool = var_148_bool;
		if(var_152_bool == 0) goto Label_627;
		UnlookAsync("head");
	}
Label_627:
	return 2;
	
}


func_738()
{
	var_16_object = Obj(); var_17_object = Obj();
	CreateDiaryEntry(var_17_object, (int)268, (int)2, (int)521195);
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0;
	var_17_object = var_22_object;
	func_764(var_21_bool, var_22_object, (int)266);
	return 2;
}
EMIT "Stack[-1] = 0";


func_809(var_67_int)
{
	var_67_int = 518716;
	return 0;
}


func_682(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_811(var_66_int)
{
	var_66_int = 518715;
	return 0;
}


func_813(var_68_string)
{
	var_68_string = "ui/NPC_Prophet.png";
	return 0;
}


func_815(var_69_string)
{
	var_69_string = "ui/NPC_Prophet_b.png";
	return 0;
}


func_687(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_817(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_751(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	GetDiaryRoot(var_32_object);
	var_33_bool = var_32_object == 0; //@nz
	if(var_33_bool != 0) {
		Trace("Can't retrieve diary root");
		var_30_object = 0;
		return 2;
	}
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_628(var_124_string)
{
	var_125_bool = 0; var_126_float = 0; var_127_float = 0; var_128_bool = 0; var_129_float = 0; var_130_float = 0;
	lshHasAnimation(var_128_bool, var_124_string);
	var_131_bool = var_128_bool;
	if(var_131_bool != 0) {
		lshGetAnimTimes(var_124_string, var_129_float, var_130_float);
		lshPlayAnimation(var_129_float, var_130_float, (bool)0);
	} else {
		var_134_int = "Can't find lsh animation : " + var_124_string;
		Trace(var_134_int);
	}
	return 6;
	
}


func_694(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_696:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_687(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_696;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_764(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0;
	func_751(Obj());
	var_30_object = var_27_object;
	@@var_27_object:Find(var_23_int, var_28_object);
	var_35_bool = var_28_object == 0; //@nz
	if(var_35_bool != 0) {
		var_37_int = "Can't find diary parent with id: " + var_23_int;
		Trace(var_37_int);
		var_21_bool = 0;
		return 6;
	}
	@@var_28_object:AddChild(var_22_object);
	SendWorldWndMessage((int)7);
	@@var_22_object:GetCategory(var_29_int);
	SetDiarySection(var_29_int);
	var_21_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


