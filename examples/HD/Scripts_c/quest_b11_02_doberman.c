// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,Trigger/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:b11q02|W:quest_b11_02|W:teleport|W:fail|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x144
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa9 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x14d vars=object
// @EVENT_7: op=0x182 vars=int
// @PE: 0x4a,0x93,0xa9,0x14d,0x158,0x182,0x199,0x2cf,0x2da,0x2e4

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_651();
		var_15_bool = var_11_object == (int)32738;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_730();
		}
		var_48_bool = var_11_object == (int)32439;
		if(var_48_bool != 0) {
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_719();
		}
		var_57_bool = var_10_bool == (int)32435;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)531117);
			@@@var_0_object:ClearReplies();
			var_76_bool = 0; var_77_object = Obj();
			var_77_object = var_1_object;
			func_740(var_77_object);
			if(var_76_bool != 0) {
				@@@var_0_object:AddReply((int)531387, (int)32728, (int)32726);
			}
			var_87_bool = 0; var_88_object = Obj();
			var_88_object = var_1_object;
			func_740(var_88_object);
			if(var_87_bool != 0) {
				@@@var_0_object:AddReply((int)531119, (int)32438, (int)32437);
			}
			@@@var_0_object:AddReply((int)531388, (int)-1, (int)32727);
			return 0;
		}
		var_96_bool = var_10_bool == (int)32438;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)531120);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531121, (int)-1, (int)32439);
			return 0;
		}
		var_103_bool = var_10_bool == (int)32728;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)531389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531390, (int)32730, (int)32729);
			@@@var_0_object:AddReply((int)531395, (int)32736, (int)32735);
			return 0;
		}
		var_113_bool = var_10_bool == (int)32730;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)531391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531394, (int)32736, (int)32734);
			@@@var_0_object:AddReply((int)531392, (int)32438, (int)32731);
			return 0;
		}
		var_123_bool = var_10_bool == (int)32736;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_147(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)531396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531397, (int)-1, (int)32738);
			return 0;
		}
		var_3_string = true;
		var_129_bool = 0;
		func_717(var_129_bool);
		if(var_129_bool != 0) {
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
	func_409(var_9_object, var_10_object);
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
		func_371(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_640(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_408;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_408:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_324:
	if((bool)1 != 0) {
		var_11_float = 0; var_12_float = 0;
		func_344(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		goto Label_324;
	}
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_522(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_711(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_709(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_713(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_715(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_806(var_77_int);
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
	var_148_bool = var_24_bool == 0; //@nz
	if(var_148_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_591();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_640(var_27_object)
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


func_509(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_517(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_522(var_25_bool, var_26_object, var_27_float)
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
	func_658(var_52_cvector, var_53_cvector);
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
	func_717(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_585;
		LookAsyncCamera("head");
	}
Label_585:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_651()
{
	var_13_bool = 0;
	func_717(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_778(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0;
	func_765(Obj());
	var_32_object = var_29_object;
	@@var_29_object:Find(var_25_int, var_30_object);
	var_37_bool = var_30_object == 0; //@nz
	if(var_37_bool != 0) {
		var_39_int = "Can't find diary parent with id: " + var_25_int;
		Trace(var_39_int);
		var_23_bool = 0;
		return 6;
	}
	@@var_30_object:AddChild(var_24_object);
	SendWorldWndMessage((int)7);
	@@var_24_object:GetCategory(var_31_int);
	SetDiarySection(var_31_int);
	var_23_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_658(var_52_cvector, var_53_cvector)
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


func_147(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_717(var_94_bool);
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
	func_625(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	return 0;
	
}


func_409(var_2_object, var_3_string)
{
	func_504();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_668(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0;
	GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
	return 2;
}


func_673(var_41_bool, var_42_string, var_43_string)
{
	var_44_object = Obj(); var_45_object = Obj();
	FindActor(var_45_object, var_42_string);
	var_46_bool = var_45_object == 0; //@ne
	if(var_46_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	Trigger(var_45_object, var_43_string);
	var_41_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_806(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x335";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_423()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_517(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_692((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_437:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_517(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_470;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_685(var_58_string, var_59_int);
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
						goto Label_499;
					}
					goto Label_488;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_488;
				goto Label_499;
		}
		Label_488:
			var_61_bool = 0;
			func_502(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_499;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_437;

		}
	}
Label_499:
	ResetAAS();
	return 14;
	
}


func_685(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_692(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_694:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_685(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_694;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_709(var_74_int)
{
	var_74_int = 518097;
	return 0;
}


func_711(var_73_int)
{
	var_73_int = 518096;
	return 0;
}


func_713(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_string = "";
		func_147(var_87_object, "Neutral");
		@@@var_0_object:SetMessage((int)531117);
		@@@var_0_object:ClearReplies();
		var_111_bool = 0; var_112_object = Obj();
		var_112_object = var_1_object;
		func_740(var_112_object);
		if(var_111_bool != 0) {
			@@@var_0_object:AddReply((int)531387, (int)32728, (int)32726);
		}
		var_122_bool = 0; var_123_object = Obj();
		var_123_object = var_1_object;
		func_740(var_123_object);
		if(var_122_bool != 0) {
			@@@var_0_object:AddReply((int)531119, (int)32438, (int)32437);
		}
		@@@var_0_object:AddReply((int)531388, (int)-1, (int)32727);
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_117:
	var_130_bool = 0;
	func_717(var_130_bool);
	if(var_130_bool != 0) {

	Label_121:
		lshWaitForAnimEnd();
		var_131_string = var_3_string;
		if(var_131_string != 0) {
		} else {
			var_132_string = "";
			var_132_string = var_2_object;
			func_609(var_132_string);
			goto Label_121;
	}
		PlayAnimation("all", "idle");

	Label_136:
		WaitForAnimEnd();
		var_145_string = var_3_string;
		if(var_145_string != 0) {
			goto Label_146;
		}
		PlayAnimation("all", "idle");
		goto Label_136;
	}
	goto Label_146;
	
Label_146:
	return 0;
	
}


func_715(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_717(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_591()
{
	var_150_bool = 0; var_151_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_153_bool = 0;
	func_717(var_153_bool);
	if(var_153_bool != 0) {
	} else {
		HasAnimationTrack(var_151_bool, "head");
		var_155_bool = var_151_bool;
		if(var_155_bool == 0) goto Label_608;
		UnlookAsync("head");
	}
Label_608:
	return 2;
	
}


func_719()
{
	SetVariable("b11q02", (int)3);
	var_53_bool = 0; var_54_string = ""; var_55_string = "";
	func_673(var_53_bool, "quest_b11_02", "teleport");
	return 0;
}


func_344(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_517(var_13_bool);
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
	func_423();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_730()
{
	func_752();
	var_41_bool = 0; var_42_string = ""; var_43_string = "";
	func_673(var_41_bool, "quest_b11_02", "fail");
	return 0;
}


func_609(var_132_string)
{
	var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_float = 0; var_138_float = 0;
	lshHasAnimation(var_136_bool, var_132_string);
	var_139_bool = var_136_bool;
	if(var_139_bool != 0) {
		lshGetAnimTimes(var_132_string, var_137_float, var_138_float);
		lshPlayAnimation(var_137_float, var_138_float, (bool)0);
	} else {
		var_142_int = "Can't find lsh animation : " + var_132_string;
		Trace(var_142_int);
	}
	return 6;
	
}


func_740(var_111_bool)
{
	var_113_int = 0; var_114_string = "";
	func_668(var_113_int, "b11q02");
	var_118_bool = var_113_int == (int)2;
	if(var_118_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


func_752()
{
	var_18_object = Obj(); var_19_object = Obj();
	CreateDiaryEntry(var_19_object, (int)610, (int)2, (int)531505);
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0;
	var_19_object = var_24_object;
	func_778(var_23_bool, var_24_object, (int)598);
	return 2;
}
EMIT "Stack[-1] = 0";


func_625(var_97_string, var_98_bool)
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


func_371(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_509(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_502(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_504()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_765(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj();
	GetDiaryRoot(var_34_object);
	var_35_bool = var_34_object == 0; //@nz
	if(var_35_bool != 0) {
		Trace("Can't retrieve diary root");
		var_32_object = 0;
		return 2;
	}
	var_34_object = var_32_object;
	return 2;
}
EMIT "Stack[-1] = 0";


