// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:k10q01|W:k10q01WastedGotoBurah|W:pt_gmap_factory|A:AddMark|W:quest_k10_01|W:init_factory|A:ShowMap|A:SetReturnValue|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x181
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x187 vars=object
// @EVENT_26: op=0x1b8 vars=string
// @EVENT_6: op=0x1c0 vars=
// @EVENT_7: op=0x201 vars=int
// @PE: 0x4a,0x9d,0xb3,0x187,0x1b8,0x1d7,0x201,0x218,0x34f,0x374,0x384,0x389,0x395

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_778();
		var_17_bool = var_13_bool == (int)28267;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_847();
		}
		var_46_bool = var_13_bool == (int)28275;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_856();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_900(var_82_object);
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_884(var_85_object);
		}
		var_111_bool = var_13_bool == (int)29417;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_856();
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_900(var_115_object);
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_884(var_117_object);
		}
		var_119_bool = var_12_bool == (int)28264;
		if(var_119_bool != 0) {
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_905(var_121_object);
			if(var_120_bool != 0) {
				var_128_string = "";
				func_157(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)526972);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528069, (int)29412, (int)29411);
				return 0;
			}
			var_149_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526976);
			@@@var_0_object:ClearReplies();
			var_151_bool = 0; var_152_object = Obj();
			var_152_object = var_1_object;
			func_917(var_152_object);
			if(var_151_bool != 0) {
				@@@var_0_object:AddReply((int)526981, (int)28274, (int)28273);
			}
			@@@var_0_object:AddReply((int)526977, (int)-1, (int)28269);
			return 0;
		}
		var_164_bool = var_12_bool == (int)28274;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528073, (int)29416, (int)29415);
			@@@var_0_object:AddReply((int)528075, (int)-1, (int)29417);
			return 0;
		}
		var_174_bool = var_12_bool == (int)29416;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526983, (int)-1, (int)28275);
			return 0;
		}
		var_181_bool = var_12_bool == (int)29412;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528071, (int)29414, (int)29413);
			return 0;
		}
		var_188_bool = var_12_bool == (int)29414;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526973, (int)28266, (int)28265);
			return 0;
		}
		var_195_bool = var_12_bool == (int)28266;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526974);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526975, (int)-1, (int)28267);
			return 0;
		}
		var_3_string = true;
		var_201_bool = 0;
		func_1071(var_201_bool);
		if(var_201_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_536(var_11_bool, var_12_object);
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
		func_420(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_536(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_469(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_785(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_498(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_767(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_535;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_535:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_402(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_649(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_1065(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_1063(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_1067(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_1069(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_1046(var_79_int);
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
	var_156_bool = var_26_bool == 0; //@nz
	if(var_156_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_718();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_644(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_900(var_82_object)
{
	@@var_82_object:SetReturnValue((int)0);
	return 0;
}


func_649(var_27_bool, var_28_object, var_29_float)
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
	func_791(var_54_cvector, var_55_cvector);
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
	func_1071(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_712;
		LookAsyncCamera("head");
	}
Label_712:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_905(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_801(var_97_int, "k10q01");
	var_102_bool = var_97_int == (int)3;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_778()
{
	var_15_bool = 0;
	func_1071(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_785(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_402(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_404:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_471(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_404;
}
EMIT "Return(); Pop(4)";


func_917(var_144_bool)
{
	var_146_int = 0; var_147_string = "";
	func_801(var_146_int, "k10q01");
	var_149_bool = var_146_int == (int)5;
	if(var_149_bool != 0) {
		var_144_bool = 1;
		return 0;
	}
	var_144_bool = 0;
	return 0;
}


func_1046(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x425";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_791(var_54_cvector, var_55_cvector)
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


func_536(var_2_object, var_3_string)
{
	func_631();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_157(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_1071(var_104_bool);
	var_105_bool = var_104_bool == 0; //@nz
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_bool = var_103_string == var_2_object;
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_string = ""; var_108_bool = 0;
	var_103_string = var_107_string;
	var_110_bool = var_103_string == "";
	if(var_110_bool != 0) {
		var_108_bool = 0;
	} else {
		var_108_bool = 1;
	}
	func_752(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	return 0;
	
}


func_929()
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateDiaryEntry(var_23_object, (int)451, (int)1, (int)527009);
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0;
	var_23_object = var_28_object;
	func_968(var_27_bool, var_28_object, (int)447);
	return 2;
}
EMIT "Stack[-1] = 0";


func_801(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_420(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_644(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_469(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_785(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_550()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_644(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_830((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_564:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_644(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_597;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_823(var_68_string, var_69_int);
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
						goto Label_626;
					}
					goto Label_615;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_615;
				goto Label_626;
		}
		Label_615:
			var_71_bool = 0;
			func_629(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_626;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_564;

		}
	}
Label_626:
	ResetAAS();
	return 14;
	
}


func_1063(var_76_int)
{
	var_76_int = 515556;
	return 0;
}


func_806(var_75_bool, var_76_string, var_77_string)
{
	var_78_object = Obj(); var_79_object = Obj();
	FindActor(var_79_object, var_76_string);
	var_80_bool = var_79_object == 0; //@ne
	if(var_80_bool != 0) {
		var_75_bool = 0;
		return 2;
	}
	Trigger(var_79_object, var_77_string);
	var_75_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1065(var_75_int)
{
	var_75_int = 503341;
	return 0;
}


func_1067(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_1069(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_942()
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateDiaryEntry(var_68_object, (int)453, (int)1, (int)527011);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_68_object = var_73_object;
	func_968(var_72_bool, var_73_object, (int)447);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1071(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_818(var_64_float)
{
	var_65_float = 0; var_66_float = 0;
	GetGameTime(var_66_float);
	var_66_float = var_64_float;
	return 2;
}


func_823(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_955(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	GetDiaryRoot(var_38_object);
	var_39_bool = var_38_object == 0; //@nz
	if(var_39_bool != 0) {
		Trace("Can't retrieve diary root");
		var_36_object = 0;
		return 2;
	}
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_830(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_832:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_823(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_832;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_968(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0;
	func_955(Obj());
	var_36_object = var_33_object;
	@@var_33_object:Find(var_29_int, var_34_object);
	var_41_bool = var_34_object == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Can't find diary parent with id: " + var_29_int;
		Trace(var_43_int);
		var_27_bool = 0;
		return 6;
	}
	@@var_34_object:AddChild(var_28_object);
	SendWorldWndMessage((int)7);
	@@var_28_object:GetCategory(var_35_int);
	SetDiarySection(var_35_int);
	var_27_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_905(var_96_object);
		if(var_95_bool != 0) {
			var_103_string = "";
			func_157(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)526972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528069, (int)29412, (int)29411);
		} else {
				var_142_string = "";
				func_157(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)526976);
				@@@var_0_object:ClearReplies();
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_object;
				func_917(var_145_object);
				if(var_144_bool != 0) {
					@@@var_0_object:AddReply((int)526981, (int)28274, (int)28273);
				}
				@@@var_0_object:AddReply((int)526977, (int)-1, (int)28269);
				goto Label_127;
		}
	}
Label_127:
	var_124_bool = 0;
	func_1071(var_124_bool);
	if(var_124_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_125_string = var_3_string;
		if(var_125_string != 0) {
		} else {
			var_126_string = "";
			var_126_string = var_2_object;
			func_736(var_126_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_139_string = var_3_string;
		if(var_139_string != 0) {
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


func_718()
{
	var_158_bool = 0; var_159_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_161_bool = 0;
	func_1071(var_161_bool);
	if(var_161_bool != 0) {
	} else {
		HasAnimationTrack(var_159_bool, "head");
		var_163_bool = var_159_bool;
		if(var_163_bool == 0) goto Label_735;
		UnlookAsync("head");
	}
Label_735:
	return 2;
	
}


func_847()
{
	SetVariable("k10q01", (int)4);
	func_929();
	return 0;
}


func_469(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_471(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_644(var_23_bool);
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
	func_550();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_856()
{
	var_49_object = Obj(); var_50_object = Obj();
	SetVariable("k10q01", (int)6);
	func_996(Obj());
	var_53_object = var_50_object;
	var_64_float = 0;
	func_818(var_64_float);
	@@var_50_object:AddMark("k10q01WastedGotoBurah", "pt_gmap_factory", (int)1, (int)530196, var_64_float);
	func_942();
	var_75_bool = 0; var_76_string = ""; var_77_string = "";
	func_806(var_75_bool, "quest_k10_01", "init_factory");
	return 2;
}
EMIT "Stack[-1] = 0";


func_736(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0;
	lshHasAnimation(var_130_bool, var_126_string);
	var_133_bool = var_130_bool;
	if(var_133_bool != 0) {
		lshGetAnimTimes(var_126_string, var_131_float, var_132_float);
		lshPlayAnimation(var_131_float, var_132_float, (bool)0);
	} else {
		var_136_int = "Can't find lsh animation : " + var_126_string;
		Trace(var_136_int);
	}
	return 6;
	
}


func_996(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj();
	GetMainOutdoorScene(var_56_object);
	var_58_bool = var_56_object == 0; //@ne
	if(var_58_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_57_object = 0;
		var_57_object = var_53_object;
		return 4;
	}
	@@var_56_object:GetMap(var_57_object);
	var_57_object = var_53_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_752(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0;
	lshHasAnimation(var_114_bool, var_107_string);
	var_117_bool = var_114_bool;
	if(var_117_bool != 0) {
		lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		var_119_int = "Can't find lsh animation : " + var_107_string;
		Trace(var_119_int);
	}
	return 6;
	
}


func_498(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_636(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_884(var_85_object)
{
	var_86_object = Obj(); var_87_string = ""; var_88_float = 0;
	func_996(Obj());
	var_89_object = var_86_object;
	func_1013(var_86_object, "pt_gmap_factory", (float)2);
	var_109_object = Obj();
	func_996(var_109_object);
	@@var_85_object:ShowMap(var_109_object);
	return 0;
}


func_629(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_1013(var_86_object, var_87_string, var_88_float)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_object = Obj(); var_93_bool = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_object = Obj(); var_97_bool = 0;
	GetMainOutdoorScene(var_96_object);
	var_98_bool = var_96_object == 0; //@ne
	if(var_98_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_96_object:GetLocator(var_87_string, var_97_bool, var_94_cvector, var_95_cvector);
	var_100_bool = var_97_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_102_int = "Warning: outdoor scene locator " + var_87_string;
		var_104_int = var_102_int + " doesnt exist";
		Trace(var_104_int);
	}
	@@var_96_object:GetMap(var_86_object);
	var_105_bool = var_86_object == 0; //@ne
	if(var_105_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_107_float = GetByIndex(var_94_cvector, 0);
	var_108_float = GetByIndex(var_94_cvector, 2);
	@@var_86_object:SetMapParams(var_107_float, var_108_float, var_88_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_631()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_636(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_767(var_29_object)
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


