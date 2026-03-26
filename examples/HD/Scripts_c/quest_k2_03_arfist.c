// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,Trigger/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:k2q03|W:quest_k2_03|W:place_danko|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x121
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool,bool params=0
// @EVENT_0: op=0x128 vars=object
// @EVENT_26: op=0x15d vars=string
// @EVENT_6: op=0x165 vars=
// @EVENT_7: op=0x1a6 vars=int
// @PE: 0x4a,0x84,0x9a,0x128,0x15d,0x17c,0x1a6,0x1bd,0x2ea

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool)
{
	if((int)1 != 0) {
		func_687();
		var_18_bool = var_14_bool == (int)26698;
		if(var_18_bool != 0) {
			var_19_object = Obj(); var_20_object = Obj();
			var_19_object = var_1_object;
			var_20_object = var_0_object;
			func_746();
		}
		var_53_bool = var_14_bool == (int)41343;
		if(var_53_bool != 0) {
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_746();
		}
		var_57_bool = var_14_bool == (int)41344;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_746();
		}
		var_61_bool = var_13_bool == (int)26697;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_132(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525329);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539404, (int)41334, (int)41333);
			@@@var_0_object:AddReply((int)539408, (int)41334, (int)41337);
			return 0;
		}
		var_87_bool = var_13_bool == (int)41334;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_132(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539405);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539406, (int)41336, (int)41335);
			@@@var_0_object:AddReply((int)539409, (int)41336, (int)41339);
			return 0;
		}
		var_97_bool = var_13_bool == (int)41336;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_132(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539407);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525330, (int)-1, (int)26698);
			@@@var_0_object:AddReply((int)539410, (int)41342, (int)41341);
			return 0;
		}
		var_107_bool = var_13_bool == (int)41342;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_132(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539411);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539412, (int)-1, (int)41343);
			@@@var_0_object:AddReply((int)539413, (int)-1, (int)41344);
			return 0;
		}
		var_3_string = true;
		var_116_bool = 0;
		func_839(var_116_bool);
		if(var_116_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_object)
{
	var_14_bool = var_7_bool;
	if(var_14_bool != 0) {
		return 0;
	}
	func_445(var_12_bool, var_13_object);
	var_18_int = 0; var_19_object = Obj();
	var_13_object = var_19_object;
	TaskCall(0);
	func_0(var_20_object, var_18_int, var_19_object);
	TaskReturn();
	var_7_bool = true;
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_string)
{
	var_15_bool = var_13_string == "cleanup";
	if(var_15_bool != 0) {
		func_329(var_13_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = var_6_int;
	if(var_13_int != 0) {
		func_445(var_11_bool, var_12_bool);
	}
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_int = var_5_int;
	if(var_18_int != 0) {
		var_19_bool = 0;
		func_378(var_19_bool);
		if(var_19_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_20_object = Obj();
		func_694(var_20_object);
		RemoveActor(var_20_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_int)
{
	var_15_bool = var_13_int == (int)10;
	if(var_15_bool != 0) {
		var_16_bool = 0;
		func_407(var_11_bool, var_12_bool, var_13_int, var_16_bool);
		if(var_16_bool != 0) {
			var_29_bool = var_2_object == 0; //@nz
			if(var_29_bool != 0) {
				var_30_object = Obj();
				var_30_object = var_4_bool;
				func_676(var_30_object);
				var_2_object = true;
			}
		} else {
			var_37_object = var_2_object;
			if(var_37_object == 0) goto Label_444;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_444:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	var_7_bool = false;
	var_13_float = 0; var_14_float = 0;
	func_311(var_12_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_0_object = var_19_object;
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0;
	var_19_object = var_30_object;
	func_558(var_29_bool, var_30_object, (float)70.0);
	var_76_bool = var_29_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	CreateDialog(var_25_object);
	var_77_int = 0;
	func_833(var_77_int);
	@@var_25_object:SetNPCName(var_77_int);
	var_78_int = 0;
	func_831(var_78_int);
	@@var_25_object:SetNPCDescription(var_78_int);
	var_79_string = "";
	func_835(var_79_string);
	@@var_25_object:SetPhoto(var_79_string);
	var_80_string = "";
	func_837(var_80_string);
	@@var_25_object:SetPhoto2(var_80_string);
	var_81_int = 0;
	func_814(var_81_int);
	@@var_25_object:SetPlayerName(var_81_int);
	IsOverrideActive(var_26_bool);
	var_89_bool = var_26_bool;
	if(var_89_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	DoDialog(var_25_object);
	var_90_object = Obj(); var_91_object = Obj();
	var_19_object = var_90_object;
	var_25_object = var_91_object;
	TaskCall(1);
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	@@var_25_object:IsDialogEnd(var_28_bool);
	
Label_56:
	var_139_bool = var_28_bool == 0; //@nz
	if(var_139_bool != 0) {
		sync();
		@@var_25_object:IsDialogEnd(var_28_bool);
		goto Label_56;
	}
	var_19_object = Obj();
	func_627();
	StopDialog(var_25_object);
	@@var_25_object:GetReturnValue((int)-1);
	var_27_int = var_18_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_132(var_2_object, var_97_string)
{
	var_98_bool = 0;
	func_839(var_98_bool);
	var_99_bool = var_98_bool == 0; //@nz
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_bool = var_97_string == var_2_object;
	if(var_100_bool != 0) {
		return 0;
	}
	var_101_string = ""; var_102_bool = 0;
	var_97_string = var_101_string;
	var_104_bool = var_97_string == "";
	if(var_104_bool != 0) {
		var_102_bool = 0;
	} else {
		var_102_bool = 1;
	}
	func_661(var_101_string, var_102_bool);
	var_2_object = var_97_string;
	return 0;
	
}


func_773(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj();
	GetDiaryRoot(var_39_object);
	var_40_bool = var_39_object == 0; //@nz
	if(var_40_bool != 0) {
		Trace("Can't retrieve diary root");
		var_37_object = 0;
		return 2;
	}
	var_39_object = var_37_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_645(var_123_string)
{
	var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_float = 0; var_129_float = 0;
	lshHasAnimation(var_127_bool, var_123_string);
	var_130_bool = var_127_bool;
	if(var_130_bool != 0) {
		lshGetAnimTimes(var_123_string, var_128_float, var_129_float);
		lshPlayAnimation(var_128_float, var_129_float, (bool)0);
	} else {
		var_133_int = "Can't find lsh animation : " + var_123_string;
		Trace(var_133_int);
	}
	return 6;
	
}


func_786(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0;
	func_773(Obj());
	var_37_object = var_34_object;
	@@var_34_object:Find(var_30_int, var_35_object);
	var_42_bool = var_35_object == 0; //@nz
	if(var_42_bool != 0) {
		var_44_int = "Can't find diary parent with id: " + var_30_int;
		Trace(var_44_int);
		var_28_bool = 0;
		return 6;
	}
	@@var_35_object:AddChild(var_29_object);
	SendWorldWndMessage((int)7);
	@@var_29_object:GetCategory(var_36_int);
	SetDiarySection(var_36_int);
	var_28_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_661(var_101_string, var_102_bool)
{
	var_105_bool = 0; var_106_float = 0; var_107_float = 0; var_108_bool = 0; var_109_float = 0; var_110_float = 0;
	lshHasAnimation(var_108_bool, var_101_string);
	var_111_bool = var_108_bool;
	if(var_111_bool != 0) {
		lshGetAnimTimes(var_101_string, var_109_float, var_110_float);
		lshPlayAnimation(var_109_float, var_110_float, var_102_bool);
	} else {
		var_113_int = "Can't find lsh animation : " + var_101_string;
		Trace(var_113_int);
	}
	return 6;
	
}


func_407(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0;
	var_19_bool = var_4_bool == 0; //@ne
	if(var_19_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_20_float = 0; var_21_object = Obj();
	var_21_object = var_4_bool;
	func_545(var_20_float, var_21_object);
	var_18_float = sqrt(var_20_float);
	var_28_object = var_2_object;
	if(var_28_object != 0) {
		var_18_float = var_18_float - var_1_object;
	}
	var_16_bool = var_18_float < var_0_object;
	return 2;
}


func_538(var_72_bool)
{
	var_72_bool = 1;
	return 0;
}


func_540()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_545(var_20_float, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	GetPosition(var_25_cvector);
	@@var_21_object:GetPosition(var_26_cvector);
	var_27_cvector = var_26_cvector - var_25_cvector;
	var_20_float = var_27_cvector | var_27_cvector;
	return 6;
}


func_676(var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0);
	@@var_30_object:GetEyesHeight(var_33_float);
	var_34_cvector = CVector(0.0, 0.0, 0.0);
	var_35_float = GetByIndex(var_34_cvector, 1);
	var_33_float = var_35_float;
	SetByIndex(var_34_cvector, 1) = var_35_float;
	LookAsync(var_30_object, "head", var_34_cvector);
	return 4;
}


func_553(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0;
	IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
	return 2;
}


func_558(var_29_bool, var_30_object, var_31_float)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0;
	@@var_30_object:GetPosition(var_42_cvector);
	@@var_30_object:GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	var_50_float = var_50_float + var_41_float;
	SetByIndex(var_42_cvector, 1) = var_50_float;
	GetPosition(var_43_cvector);
	GetEyesHeight(var_41_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	var_51_float = var_51_float + var_41_float;
	SetByIndex(var_43_cvector, 1) = var_51_float;
	var_44_cvector = var_42_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_53_int = var_44_cvector | var_44_cvector;
	var_54_float = sqrt(var_53_int);
	var_44_cvector = var_44_cvector / var_54_float;
	var_45_cvector = -var_44_cvector;
	var_55_float = var_44_cvector * var_31_float;
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	var_57_cvector = var_45_cvector ^ CVector(0.0, 1.0, 0.0);
	func_700(var_56_cvector, var_57_cvector);
	var_65_float = var_56_cvector * (int)25;
	var_66_int = var_55_float + var_65_float;
	var_46_cvector = var_66_int - CVector(0.0, 10.0, 0.0);
	var_47_cvector = var_43_cvector + var_46_cvector;
	IsOverrideActive(var_48_bool);
	var_68_bool = var_48_bool;
	if(var_68_bool != 0) {
		var_29_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_47_cvector, var_45_cvector, (bool)1);
	var_70_float = GetByIndex(var_46_cvector, 0);
	var_71_float = GetByIndex(var_46_cvector, 2);
	Rotate(var_70_float, var_71_float);
	var_72_bool = 0;
	func_839(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		HasAnimationTrack(var_49_bool, "head");
		var_74_bool = var_49_bool;
		if(var_74_bool == 0) goto Label_621;
		LookAsyncCamera("head");
	}
Label_621:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_29_bool = 1;
	return 18;
	
}


func_814(var_81_int)
{
	var_82_int = 0; var_83_int = 0;
	GetVariable("branch", var_83_int);
	var_86_bool = var_83_int == (int)0;
	if(var_86_bool != 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x33d";
	}
	var_88_bool = var_83_int == (int)1;
	if(var_88_bool != 0) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
	return 2;
}


func_687()
{
	var_16_bool = 0;
	func_839(var_16_bool);
	if(var_16_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_694(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_311(var_6_int, var_13_float, var_14_float)
{
	var_15_float = 0; var_16_bool = 0; var_17_float = 0; var_18_bool = 0;
	var_6_int = false;
	
Label_313:
	rand(var_17_float, (int)3);
	var_21_int = var_17_float + (int)3;
	Sleep(var_21_int, var_18_bool);
	var_6_int = true;
	var_22_float = 0; var_23_float = 0;
	var_13_float = var_22_float;
	var_14_float = var_23_float;
	func_380(var_14_float, var_15_float, var_16_bool, var_17_float, var_18_bool, var_22_float, var_23_float);
	var_6_int = false;
	goto Label_313;
}
EMIT "Return(); Pop(4)";


func_700(var_56_cvector, var_57_cvector)
{
	var_59_float = 0; var_60_float = 0;
	var_61_int = var_57_cvector | var_57_cvector;
	var_60_float = sqrt(var_61_int);
	var_62_float = 9.999999974752427e-07;
	var_63_bool = var_60_float < var_62_float;
	if(var_63_bool != 0) {
		var_56_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_56_cvector = var_57_cvector / var_60_float;
	return 2;
}


func_445(var_2_object, var_3_string)
{
	func_540();
	KillTimer((int)10);
	var_15_object = var_2_object;
	if(var_15_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_831(var_78_int)
{
	var_78_int = 515556;
	return 0;
}


func_833(var_77_int)
{
	var_77_int = 503341;
	return 0;
}


func_835(var_79_string)
{
	var_79_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_837(var_80_string)
{
	var_80_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_710(var_46_bool, var_47_string, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj();
	FindActor(var_50_object, var_47_string);
	var_51_bool = var_50_object == 0; //@ne
	if(var_51_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	Trigger(var_50_object, var_48_string);
	var_46_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_839(var_72_bool)
{
	var_72_bool = 0;
	return 0;
}


func_329(var_5_int)
{
	var_5_int = true;
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = 0;
	func_553(var_17_bool);
	var_20_bool = var_17_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_21_bool = 0;
		func_378(var_21_bool);
		if(var_21_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_22_object = Obj();
		func_694(var_22_object);
		RemoveActor(var_22_object);
	}
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_90_object, var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_97_string = "";
		func_132(var_91_object, "Neutral");
		@@@var_0_object:SetMessage((int)525329);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)539404, (int)41334, (int)41333);
		@@@var_0_object:AddReply((int)539408, (int)41334, (int)41337);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_121_bool = 0;
	func_839(var_121_bool);
	if(var_121_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_122_string = var_3_string;
		if(var_122_string != 0) {
		} else {
			var_123_string = "";
			var_123_string = var_2_object;
			func_645(var_123_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_136_string = var_3_string;
		if(var_136_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_459()
{
	var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_float = 0; var_44_bool = 0;
	WaitForAnimEnd();
	var_45_bool = 0;
	func_553(var_45_bool);
	var_46_bool = var_45_bool == 0; //@nz
	if(var_46_bool != 0) {
		return 14;
	}
	func_729((int)0);
	var_47_int = var_38_int;
	var_39_int = 0;
	
Label_473:
	var_60_bool = 0;
	var_60_bool = 0;
	var_62_bool = var_39_int < (int)5;
	if(var_62_bool != 0) {
		var_63_bool = 0;
		func_553(var_63_bool);
		if(var_63_bool != 0) {
			var_60_bool = 1;
		}
	}
	if(var_60_bool != 0) {
		irand(var_40_int, (int)3);
		var_66_bool = var_40_int == (int)0;
		if(var_66_bool != 0) {
			var_67_int = var_38_int;
			if(var_67_int == 0) goto Label_506;
			irand(var_41_int, var_38_int);
			var_69_string = ""; var_70_int = 0;
			var_41_int = var_70_int;
			func_722(var_69_string, var_70_int);
			PlayAnimation("all", var_69_string);
			WaitForAnimEnd(var_42_bool);
			var_71_bool = var_42_bool == 0; //@nz
			if(var_71_bool != 0) {
			} else {
		} else {
				var_76_bool = var_40_int == (int)1;
				if(var_76_bool != 0) {
					rand(var_43_float, (int)4);
					var_79_int = var_43_float + (int)1;
					Sleep(var_79_int, var_44_bool);
					var_80_bool = var_44_bool == 0; //@nz
					if(var_80_bool != 0) {
						goto Label_535;
					}
					goto Label_524;
				}
				var_81_int = var_39_int;
				if(var_81_int == 0) goto Label_524;
				goto Label_535;
		}
		Label_524:
			var_72_bool = 0;
			func_538(var_72_bool);
			var_73_bool = var_72_bool == 0; //@nz
			if(var_73_bool != 0) {
				goto Label_535;
			}
			ResetAAS();
			var_39_int = var_39_int + (int)1;
			goto Label_473;

		}
	}
Label_535:
	ResetAAS();
	return 14;
	
}


func_722(var_53_string, var_54_int)
{
	var_55_string = ""; var_56_string = "";
	var_57_int = var_54_int;
	if(var_57_int != 0) {
		"idle" = "idle" + var_54_int;
	}
	var_56_string = var_53_string;
	return 2;
}


func_729(var_47_int)
{
	var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0;
	var_50_int = 0;
	
Label_731:
	var_53_string = ""; var_54_int = 0;
	var_50_int = var_54_int;
	func_722(var_53_string, var_54_int);
	HasAnimation(var_51_bool, "all", var_53_string);
	var_58_bool = var_51_bool == 0; //@nz
	if(var_58_bool != 0) {
	} else {
		var_50_int = var_50_int + (int)1;
		goto Label_731;
	}
	var_50_int = var_47_int;
	return 4;
	
}


func_746()
{
	SetVariable("k2q03", (int)2);
	func_760();
	var_46_bool = 0; var_47_string = ""; var_48_string = "";
	func_710(var_46_bool, "quest_k2_03", "place_danko");
	return 0;
}


func_627()
{
	var_141_bool = 0; var_142_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_144_bool = 0;
	func_839(var_144_bool);
	if(var_144_bool != 0) {
	} else {
		HasAnimationTrack(var_142_bool, "head");
		var_146_bool = var_142_bool;
		if(var_146_bool == 0) goto Label_644;
		UnlookAsync("head");
	}
Label_644:
	return 2;
	
}


func_760()
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateDiaryEntry(var_24_object, (int)478, (int)2, (int)527794);
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0;
	var_24_object = var_29_object;
	func_786(var_28_bool, var_29_object, (int)476);
	return 2;
}
EMIT "Stack[-1] = 0";


func_378(var_19_bool)
{
	var_19_bool = 1;
	return 0;
}


func_380(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_22_float, var_23_float)
{
	var_24_bool = 0;
	func_553(var_24_bool);
	var_27_bool = var_24_bool == 0; //@nz
	if(var_27_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	SetTimer((int)10, (float)1.0);
	func_459();
	var_82_bool = var_3_string == 0; //@nz
	if(var_82_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


