// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,Trigger/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:b5q02|W:quest_b5_02|W:remove_prophet|W:oob5Prophet1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Prophet.png|W:ui/NPC_Prophet_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x18a
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x190 vars=object
// @EVENT_26: op=0x1c1 vars=string
// @EVENT_6: op=0x1c9 vars=
// @EVENT_7: op=0x20a vars=int
// @PE: 0x4a,0x89,0x9f,0x190,0x1c1,0x1e0,0x20a,0x221,0x353,0x361,0x367

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_787();
		var_17_bool = var_13_bool == (int)21373;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_865();
		}
		var_23_bool = var_13_bool == (int)21383;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_851();
		}
		var_58_bool = var_13_bool == (int)21386;
		if(var_58_bool != 0) {
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_851();
		}
		var_62_bool = var_12_bool == (int)21372;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520182);
			@@@var_0_object:ClearReplies();
			var_81_bool = 0; var_82_object = Obj();
			var_82_object = var_1_object;
			func_871(var_82_object);
			if(var_81_bool != 0) {
				@@@var_0_object:AddReply((int)520183, (int)21374, (int)21373);
			}
			@@@var_0_object:AddReply((int)520201, (int)-1, (int)21393);
			return 0;
		}
		var_96_bool = var_12_bool == (int)21374;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520185, (int)21376, (int)21375);
			@@@var_0_object:AddReply((int)520198, (int)21390, (int)21389);
			return 0;
		}
		var_106_bool = var_12_bool == (int)21390;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528307, (int)29678, (int)29677);
			@@@var_0_object:AddReply((int)528309, (int)21376, (int)29679);
			return 0;
		}
		var_116_bool = var_12_bool == (int)29678;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528308);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520200, (int)21376, (int)21391);
			return 0;
		}
		var_123_bool = var_12_bool == (int)21376;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520186);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520187, (int)21378, (int)21377);
			@@@var_0_object:AddReply((int)520197, (int)21378, (int)21387);
			return 0;
		}
		var_133_bool = var_12_bool == (int)21378;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520189, (int)21380, (int)21379);
			@@@var_0_object:AddReply((int)520194, (int)21385, (int)21384);
			return 0;
		}
		var_143_bool = var_12_bool == (int)21385;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520195);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520196, (int)-1, (int)21386);
			return 0;
		}
		var_150_bool = var_12_bool == (int)21380;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520191, (int)21382, (int)21381);
			return 0;
		}
		var_157_bool = var_12_bool == (int)21382;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520192);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520193, (int)-1, (int)21383);
			return 0;
		}
		var_3_string = true;
		var_163_bool = 0;
		func_962(var_163_bool);
		if(var_163_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_545(var_11_bool, var_12_object);
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
		func_429(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_545(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_478(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_794(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_507(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_776(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_544;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_544:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_411(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_658(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_956(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_954(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_958(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_960(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_937(var_79_int);
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
	var_145_bool = var_26_bool == 0; //@nz
	if(var_145_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_727();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_896(var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj();
	GetDiaryRoot(var_44_object);
	var_45_bool = var_44_object == 0; //@nz
	if(var_45_bool != 0) {
		Trace("Can't retrieve diary root");
		var_42_object = 0;
		return 2;
	}
	var_44_object = var_42_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_640()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_645(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_776(var_29_object)
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


func_137(var_2_object, var_95_string)
{
	var_96_bool = 0;
	func_962(var_96_bool);
	var_97_bool = var_96_bool == 0; //@nz
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_bool = var_95_string == var_2_object;
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_string = ""; var_100_bool = 0;
	var_95_string = var_99_string;
	var_102_bool = var_95_string == "";
	if(var_102_bool != 0) {
		var_100_bool = 0;
	} else {
		var_100_bool = 1;
	}
	func_761(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	return 0;
	
}


func_653(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_909(var_33_bool, var_34_object, var_35_int)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0; var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0;
	func_896(Obj());
	var_42_object = var_39_object;
	@@var_39_object:Find(var_35_int, var_40_object);
	var_47_bool = var_40_object == 0; //@nz
	if(var_47_bool != 0) {
		var_49_int = "Can't find diary parent with id: " + var_35_int;
		Trace(var_49_int);
		var_33_bool = 0;
		return 6;
	}
	@@var_40_object:AddChild(var_34_object);
	SendWorldWndMessage((int)7);
	@@var_34_object:GetCategory(var_41_int);
	SetDiarySection(var_41_int);
	var_33_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_658(var_27_bool, var_28_object, var_29_float)
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
	func_800(var_54_cvector, var_55_cvector);
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
	func_962(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_721;
		LookAsyncCamera("head");
	}
Label_721:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_787()
{
	var_15_bool = 0;
	func_962(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_794(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_411(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_413:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_480(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_413;
}
EMIT "Return(); Pop(4)";


func_800(var_54_cvector, var_55_cvector)
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


func_545(var_2_object, var_3_string)
{
	func_640();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_937(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3b8";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_810(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0;
	GetVariable(var_116_string, var_118_int);
	var_118_int = var_115_int;
	return 2;
}


func_429(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_653(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_478(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_794(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_559()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_653(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_834((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_573:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_653(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_606;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_827(var_68_string, var_69_int);
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
						goto Label_635;
					}
					goto Label_624;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_624;
				goto Label_635;
		}
		Label_624:
			var_71_bool = 0;
			func_638(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_635;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_573;

		}
	}
Label_635:
	ResetAAS();
	return 14;
	
}


func_815(var_51_bool, var_52_string, var_53_string)
{
	var_54_object = Obj(); var_55_object = Obj();
	FindActor(var_55_object, var_52_string);
	var_56_bool = var_55_object == 0; //@ne
	if(var_56_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	Trigger(var_55_object, var_53_string);
	var_51_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_954(var_76_int)
{
	var_76_int = 518716;
	return 0;
}


func_827(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_956(var_75_int)
{
	var_75_int = 518715;
	return 0;
}


func_958(var_77_string)
{
	var_77_string = "ui/NPC_Prophet.png";
	return 0;
}


func_960(var_78_string)
{
	var_78_string = "ui/NPC_Prophet_b.png";
	return 0;
}


func_962(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_834(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_836:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_827(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_836;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_string = "";
		func_137(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)520182);
		@@@var_0_object:ClearReplies();
		var_113_bool = 0; var_114_object = Obj();
		var_114_object = var_1_object;
		func_871(var_114_object);
		if(var_113_bool != 0) {
			@@@var_0_object:AddReply((int)520183, (int)21374, (int)21373);
		}
		@@@var_0_object:AddReply((int)520201, (int)-1, (int)21393);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_127_bool = 0;
	func_962(var_127_bool);
	if(var_127_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_128_string = var_3_string;
		if(var_128_string != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_object;
			func_745(var_129_string);
			goto Label_111;
	}
		PlayAnimation("all", "idle");

	Label_126:
		WaitForAnimEnd();
		var_142_string = var_3_string;
		if(var_142_string != 0) {
			goto Label_136;
		}
		PlayAnimation("all", "idle");
		goto Label_126;
	}
	goto Label_136;
	
Label_136:
	return 0;
	
}


func_851()
{
	SetVariable("b5q02", (int)2);
	func_883();
	var_51_bool = 0; var_52_string = ""; var_53_string = "";
	func_815(var_51_bool, "quest_b5_02", "remove_prophet");
	return 0;
}


func_727()
{
	var_147_bool = 0; var_148_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_150_bool = 0;
	func_962(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		HasAnimationTrack(var_148_bool, "head");
		var_152_bool = var_148_bool;
		if(var_152_bool == 0) goto Label_744;
		UnlookAsync("head");
	}
Label_744:
	return 2;
	
}


func_478(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_480(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_653(var_23_bool);
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
	func_559();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_865()
{
	SetVariable("oob5Prophet1", (int)1);
	return 0;
}


func_871(var_113_bool)
{
	var_115_int = 0; var_116_string = "";
	func_810(var_115_int, "oob5Prophet1");
	var_120_bool = var_115_int == (int)0;
	if(var_120_bool != 0) {
		var_113_bool = 1;
		return 0;
	}
	var_113_bool = 0;
	return 0;
}


func_745(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0;
	lshHasAnimation(var_133_bool, var_129_string);
	var_136_bool = var_133_bool;
	if(var_136_bool != 0) {
		lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		lshPlayAnimation(var_134_float, var_135_float, (bool)0);
	} else {
		var_139_int = "Can't find lsh animation : " + var_129_string;
		Trace(var_139_int);
	}
	return 6;
	
}


func_883()
{
	var_28_object = Obj(); var_29_object = Obj();
	CreateDiaryEntry(var_29_object, (int)251, (int)2, (int)520667);
	var_33_bool = 0; var_34_object = Obj(); var_35_int = 0;
	var_29_object = var_34_object;
	func_909(var_33_bool, var_34_object, (int)249);
	return 2;
}
EMIT "Stack[-1] = 0";


func_761(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0;
	lshHasAnimation(var_106_bool, var_99_string);
	var_109_bool = var_106_bool;
	if(var_109_bool != 0) {
		lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		var_111_int = "Can't find lsh animation : " + var_99_string;
		Trace(var_111_int);
	}
	return 6;
	
}


func_507(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_645(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_638(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


