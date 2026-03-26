// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,IsLoaded/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,FindActor/2,Trigger/2,GetGameTime/1,HasAnimation/3,GetMainOutdoorScene/1,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d4_01|W:wastedwoman_done|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:d4q01WastedMale|W:pt_d4q01_key2_region|A:AddMark|A:ShowMap|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x16b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x174 vars=object
// @PE: 0x4a,0x84,0x9a,0x174,0x2a2

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_600();
		var_11_bool = var_7_bool == (int)10714;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_658();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_674(var_31_object);
		}
		var_57_bool = var_7_bool == (int)10717;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_658();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_674(var_61_object);
		}
		var_63_bool = var_7_bool == (int)10718;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_658();
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_674(var_67_object);
		}
		var_69_bool = var_6_int == (int)10709;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509727, (int)10711, (int)10710);
			@@@var_0_object:AddReply((int)509742, (int)10728, (int)10727);
			return 0;
		}
		var_95_bool = var_6_int == (int)10728;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509744, (int)10711, (int)10729);
			return 0;
		}
		var_102_bool = var_6_int == (int)10711;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509728);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509729, (int)10713, (int)10712);
			@@@var_0_object:AddReply((int)509736, (int)10720, (int)10719);
			return 0;
		}
		var_112_bool = var_6_int == (int)10720;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509738, (int)10722, (int)10721);
			@@@var_0_object:AddReply((int)509741, (int)10713, (int)10725);
			return 0;
		}
		var_122_bool = var_6_int == (int)10722;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509740, (int)10713, (int)10723);
			return 0;
		}
		var_129_bool = var_6_int == (int)10713;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509730);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509731, (int)-1, (int)10714);
			@@@var_0_object:AddReply((int)509732, (int)10716, (int)10715);
			return 0;
		}
		var_139_bool = var_6_int == (int)10716;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_132(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509733);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509734, (int)-1, (int)10717);
			@@@var_0_object:AddReply((int)509735, (int)-1, (int)10718);
			return 0;
		}
		var_3_string = true;
		var_148_bool = 0;
		func_765(var_148_bool);
		if(var_148_bool != 0) {
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
	var_7_bool = var_0_object == 0; //@nz
	if(var_7_bool != 0) {
		var_0_object = true;
		func_472();
		var_8_int = 0; var_9_object = Obj();
		var_6_object = var_9_object;
		TaskCall(0);
		func_0(var_10_object, var_8_int, var_9_object);
		TaskReturn();
		var_138_bool = 0; var_139_string = ""; var_140_string = "";
		func_617(var_138_bool, "quest_d4_01", "wastedwoman_done");
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = false;
	
Label_364:
	Sleep((int)3);
	func_391();
	goto Label_364;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_8_int, var_9_object)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	var_0_object = var_9_object;
	var_19_bool = 0; var_20_object = Obj(); var_21_float = 0;
	var_9_object = var_20_object;
	func_482(var_19_bool, var_20_object, (float)70.0);
	var_66_bool = var_19_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	CreateDialog(var_15_object);
	var_67_int = 0;
	func_759(var_67_int);
	@@var_15_object:SetNPCName(var_67_int);
	var_68_int = 0;
	func_757(var_68_int);
	@@var_15_object:SetNPCDescription(var_68_int);
	var_69_string = "";
	func_761(var_69_string);
	@@var_15_object:SetPhoto(var_69_string);
	var_70_string = "";
	func_763(var_70_string);
	@@var_15_object:SetPhoto2(var_70_string);
	var_71_int = 0;
	func_740(var_71_int);
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
	var_129_bool = var_18_bool == 0; //@nz
	if(var_129_bool != 0) {
		sync();
		@@var_15_object:IsDialogEnd(var_18_bool);
		goto Label_56;
	}
	var_9_object = Obj();
	func_551();
	StopDialog(var_15_object);
	@@var_15_object:GetReturnValue((int)-1);
	var_17_int = var_8_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_641(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_643:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_634(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_643;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_707(var_32_object, var_33_string, var_34_float)
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


func_132(var_2_object, var_87_string)
{
	var_88_bool = 0;
	func_765(var_88_bool);
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
	func_585(var_91_string, var_92_bool);
	var_2_object = var_87_string;
	return 0;
	
}


func_391()
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0;
	WaitForAnimEnd();
	var_21_bool = 0;
	func_477(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 14;
	}
	func_641((int)0);
	var_25_int = var_14_int;
	var_15_int = 0;
	
Label_405:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_15_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_477(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		irand(var_16_int, (int)3);
		var_44_bool = var_16_int == (int)0;
		if(var_44_bool != 0) {
			var_45_int = var_14_int;
			if(var_45_int == 0) goto Label_438;
			irand(var_17_int, var_14_int);
			var_47_string = ""; var_48_int = 0;
			var_17_int = var_48_int;
			func_634(var_47_string, var_48_int);
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
						goto Label_467;
					}
					goto Label_456;
				}
				var_59_int = var_15_int;
				if(var_59_int == 0) goto Label_456;
				goto Label_467;
		}
		Label_456:
			var_50_bool = 0;
			func_470(var_50_bool);
			var_51_bool = var_50_bool == 0; //@nz
			if(var_51_bool != 0) {
				goto Label_467;
			}
			ResetAAS();
			var_15_int = var_15_int + (int)1;
			goto Label_405;

		}
	}
Label_467:
	ResetAAS();
	return 14;
	
}


func_585(var_91_string, var_92_bool)
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_80_object, var_81_object)
{
	var_0_object = var_81_object;
	var_1_object = var_80_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_87_string = "";
		func_132(var_81_object, "Neutral");
		@@@var_0_object:SetMessage((int)509726);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)509727, (int)10711, (int)10710);
		@@@var_0_object:AddReply((int)509742, (int)10728, (int)10727);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_111_bool = 0;
	func_765(var_111_bool);
	if(var_111_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_112_string = var_3_string;
		if(var_112_string != 0) {
		} else {
			var_113_string = "";
			var_113_string = var_2_object;
			func_569(var_113_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_126_string = var_3_string;
		if(var_126_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_658()
{
	var_14_object = Obj(); var_15_object = Obj();
	func_690(Obj());
	var_16_object = var_15_object;
	var_27_float = 0;
	func_629(var_27_float);
	@@var_15_object:AddMark("d4q01WastedMale", "pt_d4q01_key2_region", (int)1, (int)511522, var_27_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_470(var_50_bool)
{
	var_50_bool = 1;
	return 0;
}


func_600()
{
	var_9_bool = 0;
	func_765(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_472()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_477(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_607(var_46_cvector, var_47_cvector)
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


func_674(var_31_object)
{
	var_32_object = Obj(); var_33_string = ""; var_34_float = 0;
	func_690(Obj());
	var_35_object = var_32_object;
	func_707(var_32_object, "pt_d4q01_key2_region", (float)2);
	var_55_object = Obj();
	func_690(var_55_object);
	@@var_31_object:ShowMap(var_55_object);
	return 0;
}


func_482(var_19_bool, var_20_object, var_21_float)
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
	func_607(var_46_cvector, var_47_cvector);
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
	func_765(var_62_bool);
	if(var_62_bool != 0) {
	} else {
		HasAnimationTrack(var_39_bool, "head");
		var_64_bool = var_39_bool;
		if(var_64_bool == 0) goto Label_545;
		LookAsyncCamera("head");
	}
Label_545:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_19_bool = 1;
	return 18;
	
}


func_740(var_71_int)
{
	var_72_int = 0; var_73_int = 0;
	GetVariable("branch", var_73_int);
	var_76_bool = var_73_int == (int)0;
	if(var_76_bool != 0) {
		var_71_int = 1;
		return 2;
	EMIT "GOTO 0x2f3";
	}
	var_78_bool = var_73_int == (int)1;
	if(var_78_bool != 0) {
		var_71_int = 2;
		return 2;
	}
	var_71_int = 3;
	return 2;
}


func_551()
{
	var_131_bool = 0; var_132_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_134_bool = 0;
	func_765(var_134_bool);
	if(var_134_bool != 0) {
	} else {
		HasAnimationTrack(var_132_bool, "head");
		var_136_bool = var_132_bool;
		if(var_136_bool == 0) goto Label_568;
		UnlookAsync("head");
	}
Label_568:
	return 2;
	
}


func_617(var_138_bool, var_139_string, var_140_string)
{
	var_141_object = Obj(); var_142_object = Obj();
	FindActor(var_142_object, var_139_string);
	var_143_bool = var_142_object == 0; //@ne
	if(var_143_bool != 0) {
		var_138_bool = 0;
		return 2;
	}
	Trigger(var_142_object, var_140_string);
	var_138_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_690(var_16_object)
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


func_757(var_68_int)
{
	var_68_int = 515555;
	return 0;
}


func_629(var_27_float)
{
	var_28_float = 0; var_29_float = 0;
	GetGameTime(var_29_float);
	var_29_float = var_27_float;
	return 2;
}


func_759(var_67_int)
{
	var_67_int = 503340;
	return 0;
}


func_761(var_69_string)
{
	var_69_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_569(var_113_string)
{
	var_114_bool = 0; var_115_float = 0; var_116_float = 0; var_117_bool = 0; var_118_float = 0; var_119_float = 0;
	lshHasAnimation(var_117_bool, var_113_string);
	var_120_bool = var_117_bool;
	if(var_120_bool != 0) {
		lshGetAnimTimes(var_113_string, var_118_float, var_119_float);
		lshPlayAnimation(var_118_float, var_119_float, (bool)0);
	} else {
		var_123_int = "Can't find lsh animation : " + var_113_string;
		Trace(var_123_int);
	}
	return 6;
	
}


func_634(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_763(var_70_string)
{
	var_70_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_765(var_62_bool)
{
	var_62_bool = 0;
	return 0;
}


