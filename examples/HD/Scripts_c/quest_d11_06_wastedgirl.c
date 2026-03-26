// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,GetInvItemByName/2,Trigger/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:HasItem|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:d11q06|W:quest_d11_06|W:place_maria|W:d11q06KapellaBeads|W:d11q06KlaraRing|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0xff
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x109 vars=object
// @EVENT_7: op=0x13e vars=int
// @PE: 0x4a,0x89,0x9f,0x109,0x114,0x13e,0x155,0x292,0x2a0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_583();
		var_15_bool = var_11_object == (int)36167;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_658();
		}
		var_50_bool = var_10_bool == (int)36166;
		if(var_50_bool != 0) {
			var_51_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)534525);
			@@@var_0_object:ClearReplies();
			var_69_bool = 0; var_70_object = Obj();
			var_70_object = var_1_object;
			func_672(var_69_bool, var_70_object);
			if(var_69_bool != 0) {
				@@@var_0_object:AddReply((int)539591, (int)41538, (int)41537);
			}
			@@@var_0_object:AddReply((int)539590, (int)-1, (int)41536);
			return 0;
		}
		var_95_bool = var_10_bool == (int)41538;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539592);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539593, (int)41540, (int)41539);
			@@@var_0_object:AddReply((int)539596, (int)-1, (int)41542);
			return 0;
		}
		var_105_bool = var_10_bool == (int)41540;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539594);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534526, (int)-1, (int)36167);
			return 0;
		}
		var_3_string = true;
		var_111_bool = 0;
		func_632(var_111_bool);
		if(var_111_bool != 0) {
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
	func_341(var_9_object, var_10_object);
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
		func_303(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_572(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_340;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_340:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_255:
	var_10_float = 0; var_11_float = 0;
	func_276(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_255;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_454(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_626(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_624(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_628(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_630(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_754(var_77_int);
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
	var_154_bool = var_24_bool == 0; //@nz
	if(var_154_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_523();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_641(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_643:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_634(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_643;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_137(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_632(var_94_bool);
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
	func_557(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	return 0;
	
}


func_523()
{
	var_156_bool = 0; var_157_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_159_bool = 0;
	func_632(var_159_bool);
	if(var_159_bool != 0) {
	} else {
		HasAnimationTrack(var_157_bool, "head");
		var_161_bool = var_157_bool;
		if(var_161_bool == 0) goto Label_540;
		UnlookAsync("head");
	}
Label_540:
	return 2;
	
}


func_658()
{
	SetVariable("d11q06", (int)3);
	func_700();
	var_43_bool = 0; var_44_string = ""; var_45_string = "";
	func_612(var_43_bool, "quest_d11_06", "place_maria");
	return 0;
}


func_276(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_10_float, var_11_float)
{
	var_12_bool = 0;
	func_449(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	SetTimer((int)10, (float)1.0);
	func_355();
	var_70_bool = var_3_string == 0; //@nz
	if(var_70_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_541(var_138_string)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0;
	lshHasAnimation(var_142_bool, var_138_string);
	var_145_bool = var_142_bool;
	if(var_145_bool != 0) {
		lshGetAnimTimes(var_138_string, var_143_float, var_144_float);
		lshPlayAnimation(var_143_float, var_144_float, (bool)0);
	} else {
		var_148_int = "Can't find lsh animation : " + var_138_string;
		Trace(var_148_int);
	}
	return 6;
	
}


func_672(var_111_bool, var_112_object)
{
	var_113_bool = 0;
	var_113_bool = 0;
	var_114_bool = 0; var_115_object = Obj(); var_116_string = "";
	var_112_object = var_115_object;
	func_605(var_114_bool, var_115_object, "d11q06KapellaBeads");
	if(var_114_bool != 0) {
		var_121_bool = 0; var_122_object = Obj(); var_123_string = "";
		var_112_object = var_122_object;
		func_605(var_121_bool, var_122_object, "d11q06KlaraRing");
		if(var_121_bool != 0) {
			var_113_bool = 1;
		}
	}
	if(var_113_bool != 0) {
		var_124_int = 0; var_125_string = "";
		func_600(var_124_int, "d11q06");
		var_129_bool = var_124_int == (int)2;
		if(var_129_bool != 0) {
			var_111_bool = 1;
			return 0;
		}
	}
	var_111_bool = 0;
	return 0;
}


func_557(var_97_string, var_98_bool)
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


func_303(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_441(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_434(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_436()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_441(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_700()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)691, (int)2, (int)534539);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_726(var_25_bool, var_26_object, (int)686);
	return 2;
}
EMIT "Stack[-1] = 0";


func_572(var_27_object)
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


func_449(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_454(var_25_bool, var_26_object, var_27_float)
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
	func_590(var_52_cvector, var_53_cvector);
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
	func_632(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_517;
		LookAsyncCamera("head");
	}
Label_517:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_583()
{
	var_13_bool = 0;
	func_632(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_713(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	GetDiaryRoot(var_36_object);
	var_37_bool = var_36_object == 0; //@nz
	if(var_37_bool != 0) {
		Trace("Can't retrieve diary root");
		var_34_object = 0;
		return 2;
	}
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_string = "";
		func_137(var_87_object, "Neutral");
		@@@var_0_object:SetMessage((int)534525);
		@@@var_0_object:ClearReplies();
		var_111_bool = 0; var_112_object = Obj();
		var_112_object = var_1_object;
		func_672(var_111_bool, var_112_object);
		if(var_111_bool != 0) {
			@@@var_0_object:AddReply((int)539591, (int)41538, (int)41537);
		}
		@@@var_0_object:AddReply((int)539590, (int)-1, (int)41536);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_136_bool = 0;
	func_632(var_136_bool);
	if(var_136_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_137_string = var_3_string;
		if(var_137_string != 0) {
		} else {
			var_138_string = "";
			var_138_string = var_2_object;
			func_541(var_138_string);
			goto Label_111;
	}
		PlayAnimation("all", "idle");

	Label_126:
		WaitForAnimEnd();
		var_151_string = var_3_string;
		if(var_151_string != 0) {
			goto Label_136;
		}
		PlayAnimation("all", "idle");
		goto Label_126;
	}
	goto Label_136;
	
Label_136:
	return 0;
	
}


func_590(var_52_cvector, var_53_cvector)
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


func_341(var_2_object, var_3_string)
{
	func_436();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_726(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_713(Obj());
	var_34_object = var_31_object;
	@@var_31_object:Find(var_27_int, var_32_object);
	var_39_bool = var_32_object == 0; //@nz
	if(var_39_bool != 0) {
		var_41_int = "Can't find diary parent with id: " + var_27_int;
		Trace(var_41_int);
		var_25_bool = 0;
		return 6;
	}
	@@var_32_object:AddChild(var_26_object);
	SendWorldWndMessage((int)7);
	@@var_26_object:GetCategory(var_33_int);
	SetDiarySection(var_33_int);
	var_25_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_600(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0;
	GetVariable(var_125_string, var_127_int);
	var_127_int = var_124_int;
	return 2;
}


func_605(var_114_bool, var_115_object, var_116_string)
{
	var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_bool = 0;
	GetInvItemByName(var_119_int, var_116_string);
	@@var_115_object:HasItem(var_119_int, var_120_bool);
	var_120_bool = var_114_bool;
	return 4;
}


func_355()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_449(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 14;
	}
	func_641((int)0);
	var_35_int = var_26_int;
	var_27_int = 0;
	
Label_369:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_27_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_449(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		irand(var_28_int, (int)3);
		var_54_bool = var_28_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = var_26_int;
			if(var_55_int == 0) goto Label_402;
			irand(var_29_int, var_26_int);
			var_57_string = ""; var_58_int = 0;
			var_29_int = var_58_int;
			func_634(var_57_string, var_58_int);
			PlayAnimation("all", var_57_string);
			WaitForAnimEnd(var_30_bool);
			var_59_bool = var_30_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
		} else {
				var_64_bool = var_28_int == (int)1;
				if(var_64_bool != 0) {
					rand(var_31_float, (int)4);
					var_67_int = var_31_float + (int)1;
					Sleep(var_67_int, var_32_bool);
					var_68_bool = var_32_bool == 0; //@nz
					if(var_68_bool != 0) {
						goto Label_431;
					}
					goto Label_420;
				}
				var_69_int = var_27_int;
				if(var_69_int == 0) goto Label_420;
				goto Label_431;
		}
		Label_420:
			var_60_bool = 0;
			func_434(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_431;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_369;

		}
	}
Label_431:
	ResetAAS();
	return 14;
	
}


func_612(var_43_bool, var_44_string, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj();
	FindActor(var_47_object, var_44_string);
	var_48_bool = var_47_object == 0; //@ne
	if(var_48_bool != 0) {
		var_43_bool = 0;
		return 2;
	}
	Trigger(var_47_object, var_45_string);
	var_43_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_624(var_74_int)
{
	var_74_int = 515555;
	return 0;
}


func_626(var_73_int)
{
	var_73_int = 503340;
	return 0;
}


func_754(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x301";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_628(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_630(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_632(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_634(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


