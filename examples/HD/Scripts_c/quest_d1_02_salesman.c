// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:ood1SalesmanLaska1|W:d1q02|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x178
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbd vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x17e vars=object
// @EVENT_26: op=0x1af vars=string
// @EVENT_6: op=0x1b7 vars=
// @EVENT_7: op=0x1f8 vars=int
// @PE: 0x4a,0xa7,0xbd,0x17e,0x1af,0x1ce,0x1f8,0x20f,0x33f,0x345,0x351

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_769();
		var_17_bool = var_12_bool == (int)34201;
		if(var_17_bool != 0) {
			var_18_bool = 0;
			var_18_bool = 0;
			var_19_bool = 0; var_20_object = Obj();
			var_20_object = var_1_object;
			func_837(var_20_object);
			var_27_bool = var_19_bool == 0; //@nz
			if(var_27_bool != 0) {
				var_28_bool = 0; var_29_object = Obj();
				var_29_object = var_1_object;
				func_849(var_29_object);
				if(var_28_bool != 0) {
					var_18_bool = 1;
				}
			}
			if(var_18_bool != 0) {
				var_34_object = Obj(); var_35_object = Obj();
				var_34_object = var_1_object;
				var_35_object = var_0_object;
				func_831();
				var_38_string = "";
				func_167(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)532726);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)532727, (int)34279, (int)34202);
				@@@var_0_object:AddReply((int)532802, (int)34282, (int)34278);
				return 0;
			}
			var_62_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532810, (int)-1, (int)34287);
			return 0;
		}
		var_68_bool = var_12_bool == (int)34279;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532805, (int)34282, (int)34281);
			@@@var_0_object:AddReply((int)532804, (int)34577, (int)34280);
			return 0;
		}
		var_78_bool = var_12_bool == (int)34577;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533066);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533067, (int)34580, (int)34578);
			@@@var_0_object:AddReply((int)533068, (int)-1, (int)34579);
			return 0;
		}
		var_88_bool = var_12_bool == (int)34580;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533069);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533070, (int)34282, (int)34581);
			return 0;
		}
		var_95_bool = var_12_bool == (int)34282;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532808, (int)34288, (int)34285);
			@@@var_0_object:AddReply((int)532807, (int)-1, (int)34284);
			return 0;
		}
		var_105_bool = var_12_bool == (int)34288;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532812, (int)-1, (int)34289);
			@@@var_0_object:AddReply((int)532813, (int)-1, (int)34290);
			return 0;
		}
		var_3_string = true;
		var_114_bool = 0;
		func_805(var_114_bool);
		if(var_114_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbe";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_527(var_11_bool, var_12_object);
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
		func_411(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_527(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_460(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_776(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_489(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_758(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_526;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_526:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_393(var_11_bool, (float)300, (float)100);
	return 0;
}


func_640(var_27_bool, var_28_object, var_29_float)
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
	func_782(var_54_cvector, var_55_cvector);
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
	func_805(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_703;
		LookAsyncCamera("head");
	}
Label_703:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_769()
{
	var_15_bool = 0;
	func_805(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_640(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_799(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_797(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_801(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_803(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_861(var_79_int);
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
	var_162_bool = var_26_bool == 0; //@nz
	if(var_162_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_709();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_776(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_393(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_395:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_462(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_395;
}
EMIT "Return(); Pop(4)";


func_782(var_54_cvector, var_55_cvector)
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


func_527(var_2_object, var_3_string)
{
	func_622();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_792(var_98_int, var_99_string)
{
	var_100_int = 0; var_101_int = 0;
	GetVariable(var_99_string, var_101_int);
	var_101_int = var_98_int;
	return 2;
}


func_411(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_635(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_460(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_776(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_541()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_635(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_814((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_555:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_635(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_588;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_807(var_68_string, var_69_int);
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
						goto Label_617;
					}
					goto Label_606;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_606;
				goto Label_617;
		}
		Label_606:
			var_71_bool = 0;
			func_620(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_617;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_555;

		}
	}
Label_617:
	ResetAAS();
	return 14;
	
}


func_797(var_76_int)
{
	var_76_int = 541572;
	return 0;
}


func_799(var_75_int)
{
	var_75_int = 541571;
	return 0;
}


func_801(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_803(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_805(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_167(var_2_object, var_115_string)
{
	var_116_bool = 0;
	func_805(var_116_bool);
	var_117_bool = var_116_bool == 0; //@nz
	if(var_117_bool != 0) {
		return 0;
	}
	var_118_bool = var_115_string == var_2_object;
	if(var_118_bool != 0) {
		return 0;
	}
	var_119_string = ""; var_120_bool = 0;
	var_115_string = var_119_string;
	var_122_bool = var_115_string == "";
	if(var_122_bool != 0) {
		var_120_bool = 0;
	} else {
		var_120_bool = 1;
	}
	func_743(var_119_string, var_120_bool);
	var_2_object = var_115_string;
	return 0;
	
}


func_807(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_814(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_816:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_807(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_816;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_831()
{
	SetVariable("ood1SalesmanLaska1", (int)1);
	return 0;
}


func_709()
{
	var_164_bool = 0; var_165_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_167_bool = 0;
	func_805(var_167_bool);
	if(var_167_bool != 0) {
	} else {
		HasAnimationTrack(var_165_bool, "head");
		var_169_bool = var_165_bool;
		if(var_169_bool == 0) goto Label_726;
		UnlookAsync("head");
	}
Label_726:
	return 2;
	
}


func_837(var_96_bool)
{
	var_98_int = 0; var_99_string = "";
	func_792(var_98_int, "d1q02");
	var_103_bool = var_98_int == (int)1000;
	if(var_103_bool != 0) {
		var_96_bool = 1;
		return 0;
	}
	var_96_bool = 0;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0;
		var_95_bool = 0;
		var_96_bool = 0; var_97_object = Obj();
		var_97_object = var_1_object;
		func_837(var_97_object);
		var_104_bool = var_96_bool == 0; //@nz
		if(var_104_bool != 0) {
			var_105_bool = 0; var_106_object = Obj();
			var_106_object = var_1_object;
			func_849(var_106_object);
			if(var_105_bool != 0) {
				var_95_bool = 1;
			}
		}
		if(var_95_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_831();
			var_115_string = "";
			func_167(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)532726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532727, (int)34279, (int)34202);
			@@@var_0_object:AddReply((int)532802, (int)34282, (int)34278);
		} else {
				var_157_string = "";
				func_167(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)532809);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)532810, (int)-1, (int)34287);
				goto Label_137;
		}
	}
Label_137:
	var_139_bool = 0;
	func_805(var_139_bool);
	if(var_139_bool != 0) {

	Label_141:
		lshWaitForAnimEnd();
		var_140_string = var_3_string;
		if(var_140_string != 0) {
		} else {
			var_141_string = "";
			var_141_string = var_2_object;
			func_727(var_141_string);
			goto Label_141;
	}
		PlayAnimation("all", "idle");

	Label_156:
		WaitForAnimEnd();
		var_154_string = var_3_string;
		if(var_154_string != 0) {
			goto Label_166;
		}
		PlayAnimation("all", "idle");
		goto Label_156;

	}
	goto Label_166;
	
Label_166:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_460(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_462(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_635(var_23_bool);
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
	func_541();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_849(var_105_bool)
{
	var_107_int = 0; var_108_string = "";
	func_792(var_107_int, "ood1SalesmanLaska1");
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_bool = 1;
		return 0;
	}
	var_105_bool = 0;
	return 0;
}


func_727(var_141_string)
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


func_861(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x36c";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_743(var_119_string, var_120_bool)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0;
	lshHasAnimation(var_126_bool, var_119_string);
	var_129_bool = var_126_bool;
	if(var_129_bool != 0) {
		lshGetAnimTimes(var_119_string, var_127_float, var_128_float);
		lshPlayAnimation(var_127_float, var_128_float, var_120_bool);
	} else {
		var_131_int = "Can't find lsh animation : " + var_119_string;
		Trace(var_131_int);
	}
	return 6;
	
}


func_489(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_627(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_620(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_622()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_627(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_758(var_29_object)
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


func_635(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


