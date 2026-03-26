// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png|W:ood6Boy1|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x12d
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x139 vars=object
// @EVENT_7: op=0x16e vars=int
// @PE: 0x4a,0x89,0x9f,0x139,0x144,0x16e,0x185,0x2af,0x2b5

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_631();
		var_15_bool = var_11_object == (int)4344;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_687();
		}
		var_21_bool = var_10_bool == (int)4342;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)503989);
			@@@var_0_object:ClearReplies();
			var_40_bool = 0; var_41_object = Obj();
			var_41_object = var_1_object;
			func_693(var_41_object);
			if(var_40_bool != 0) {
				@@@var_0_object:AddReply((int)503991, (int)38108, (int)4344);
			}
			@@@var_0_object:AddReply((int)536326, (int)-1, (int)38107);
			return 0;
		}
		var_55_bool = var_10_bool == (int)38108;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)536327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536328, (int)4345, (int)38109);
			@@@var_0_object:AddReply((int)503990, (int)4350, (int)4343);
			return 0;
		}
		var_65_bool = var_10_bool == (int)4350;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)503997);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503998, (int)4345, (int)4351);
			@@@var_0_object:AddReply((int)503999, (int)4347, (int)4353);
			return 0;
		}
		var_75_bool = var_10_bool == (int)4345;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)503992);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503993, (int)4347, (int)4346);
			return 0;
		}
		var_82_bool = var_10_bool == (int)4347;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)503994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503995, (int)-1, (int)4348);
			@@@var_0_object:AddReply((int)503996, (int)-1, (int)4349);
			return 0;
		}
		var_3_string = true;
		var_91_bool = 0;
		func_685(var_91_bool);
		if(var_91_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_389(var_9_object, var_10_object);
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
		func_351(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_620(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_388;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_388:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_301:
	if((bool)1 != 0) {
		Sleep((int)1);
		var_12_float = 0; var_13_float = 0;
		func_324(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		goto Label_301;
	}
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_502(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_679(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_677(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_681(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_683(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_705(var_77_int);
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
	var_143_bool = var_24_bool == 0; //@nz
	if(var_143_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_571();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_705(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x2d0";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_324(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_12_float, var_13_float)
{
	var_14_bool = 0;
	func_497(var_14_bool);
	var_17_bool = var_14_bool == 0; //@nz
	if(var_17_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_12_float;
	var_1_object = var_13_float;
	SetTimer((int)10, (float)1.0);
	func_403();
	var_72_bool = var_3_string == 0; //@nz
	if(var_72_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_389(var_2_object, var_3_string)
{
	func_484();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_648(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0;
	GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
	return 2;
}


func_137(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_685(var_94_bool);
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
	func_605(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	return 0;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_string = "";
		func_137(var_87_object, "Neutral");
		@@@var_0_object:SetMessage((int)503989);
		@@@var_0_object:ClearReplies();
		var_111_bool = 0; var_112_object = Obj();
		var_112_object = var_1_object;
		func_693(var_112_object);
		if(var_111_bool != 0) {
			@@@var_0_object:AddReply((int)503991, (int)38108, (int)4344);
		}
		@@@var_0_object:AddReply((int)536326, (int)-1, (int)38107);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_125_bool = 0;
	func_685(var_125_bool);
	if(var_125_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_126_string = var_3_string;
		if(var_126_string != 0) {
		} else {
			var_127_string = "";
			var_127_string = var_2_object;
			func_589(var_127_string);
			goto Label_111;
	}
		PlayAnimation("all", "idle");

	Label_126:
		WaitForAnimEnd();
		var_140_string = var_3_string;
		if(var_140_string != 0) {
			goto Label_136;
		}
		PlayAnimation("all", "idle");
		goto Label_126;
	}
	goto Label_136;
	
Label_136:
	return 0;
	
}


func_653(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = "";
	var_47_int = var_44_int;
	if(var_47_int != 0) {
		"idle" = "idle" + var_44_int;
	}
	var_46_string = var_43_string;
	return 2;
}


func_589(var_127_string)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0;
	lshHasAnimation(var_131_bool, var_127_string);
	var_134_bool = var_131_bool;
	if(var_134_bool != 0) {
		lshGetAnimTimes(var_127_string, var_132_float, var_133_float);
		lshPlayAnimation(var_132_float, var_133_float, (bool)0);
	} else {
		var_137_int = "Can't find lsh animation : " + var_127_string;
		Trace(var_137_int);
	}
	return 6;
	
}


func_403()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0;
	WaitForAnimEnd();
	var_35_bool = 0;
	func_497(var_35_bool);
	var_36_bool = var_35_bool == 0; //@nz
	if(var_36_bool != 0) {
		return 14;
	}
	func_660((int)0);
	var_37_int = var_28_int;
	var_29_int = 0;
	
Label_417:
	var_50_bool = 0;
	var_50_bool = 0;
	var_52_bool = var_29_int < (int)5;
	if(var_52_bool != 0) {
		var_53_bool = 0;
		func_497(var_53_bool);
		if(var_53_bool != 0) {
			var_50_bool = 1;
		}
	}
	if(var_50_bool != 0) {
		irand(var_30_int, (int)3);
		var_56_bool = var_30_int == (int)0;
		if(var_56_bool != 0) {
			var_57_int = var_28_int;
			if(var_57_int == 0) goto Label_450;
			irand(var_31_int, var_28_int);
			var_59_string = ""; var_60_int = 0;
			var_31_int = var_60_int;
			func_653(var_59_string, var_60_int);
			PlayAnimation("all", var_59_string);
			WaitForAnimEnd(var_32_bool);
			var_61_bool = var_32_bool == 0; //@nz
			if(var_61_bool != 0) {
			} else {
		} else {
				var_66_bool = var_30_int == (int)1;
				if(var_66_bool != 0) {
					rand(var_33_float, (int)4);
					var_69_int = var_33_float + (int)1;
					Sleep(var_69_int, var_34_bool);
					var_70_bool = var_34_bool == 0; //@nz
					if(var_70_bool != 0) {
						goto Label_479;
					}
					goto Label_468;
				}
				var_71_int = var_29_int;
				if(var_71_int == 0) goto Label_468;
				goto Label_479;
		}
		Label_468:
			var_62_bool = 0;
			func_482(var_62_bool);
			var_63_bool = var_62_bool == 0; //@nz
			if(var_63_bool != 0) {
				goto Label_479;
			}
			ResetAAS();
			var_29_int = var_29_int + (int)1;
			goto Label_417;

		}
	}
Label_479:
	ResetAAS();
	return 14;
	
}


func_660(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0;
	var_40_int = 0;
	
Label_662:
	var_43_string = ""; var_44_int = 0;
	var_40_int = var_44_int;
	func_653(var_43_string, var_44_int);
	HasAnimation(var_41_bool, "all", var_43_string);
	var_48_bool = var_41_bool == 0; //@nz
	if(var_48_bool != 0) {
	} else {
		var_40_int = var_40_int + (int)1;
		goto Label_662;
	}
	var_40_int = var_37_int;
	return 4;
	
}


func_605(var_97_string, var_98_bool)
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


func_351(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_489(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_482(var_62_bool)
{
	var_62_bool = 1;
	return 0;
}


func_484()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_677(var_74_int)
{
	var_74_int = 515558;
	return 0;
}


func_679(var_73_int)
{
	var_73_int = 503343;
	return 0;
}


func_681(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_489(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_683(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_620(var_27_object)
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


func_685(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_687()
{
	SetVariable("ood6Boy1", (int)1);
	return 0;
}


func_497(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0;
	IsLoaded(var_16_bool);
	var_16_bool = var_14_bool;
	return 2;
}


func_693(var_111_bool)
{
	var_113_int = 0; var_114_string = "";
	func_648(var_113_int, "ood6Boy1");
	var_118_bool = var_113_int == (int)0;
	if(var_118_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


func_502(var_25_bool, var_26_object, var_27_float)
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
	func_638(var_52_cvector, var_53_cvector);
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
	func_685(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_565;
		LookAsyncCamera("head");
	}
Label_565:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_631()
{
	var_13_bool = 0;
	func_685(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_571()
{
	var_145_bool = 0; var_146_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_148_bool = 0;
	func_685(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		HasAnimationTrack(var_146_bool, "head");
		var_150_bool = var_146_bool;
		if(var_150_bool == 0) goto Label_588;
		UnlookAsync("head");
	}
Label_588:
	return 2;
	
}


func_638(var_52_cvector, var_53_cvector)
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


