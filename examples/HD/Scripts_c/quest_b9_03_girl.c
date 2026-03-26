// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:oob9Girl1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x14b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x151 vars=object
// @EVENT_26: op=0x182 vars=string
// @EVENT_6: op=0x18a vars=
// @EVENT_7: op=0x1cb vars=int
// @PE: 0x4a,0x9d,0xb3,0x151,0x182,0x1a1,0x1cb,0x1e2,0x312,0x318,0x31d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_724();
		var_17_bool = var_13_bool == (int)31717;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_792();
		}
		var_44_bool = var_12_bool == (int)31716;
		if(var_44_bool != 0) {
			var_45_bool = 0; var_46_object = Obj();
			var_46_object = var_1_object;
			func_797(var_46_object);
			if(var_45_bool != 0) {
				var_53_object = Obj(); var_54_object = Obj();
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_786();
				var_57_string = "";
				func_157(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)530329);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531028, (int)32359, (int)32357);
				@@@var_0_object:AddReply((int)531029, (int)32365, (int)32358);
				return 0;
			}
			var_81_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530331);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531033, (int)-1, (int)32362);
			return 0;
		}
		var_87_bool = var_12_bool == (int)32359;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531031, (int)32361, (int)32360);
			@@@var_0_object:AddReply((int)530332, (int)32363, (int)31719);
			return 0;
		}
		var_97_bool = var_12_bool == (int)32363;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531035, (int)32365, (int)32364);
			return 0;
		}
		var_104_bool = var_12_bool == (int)32365;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531037, (int)32361, (int)32367);
			return 0;
		}
		var_111_bool = var_12_bool == (int)32361;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530330, (int)-1, (int)31717);
			return 0;
		}
		var_3_string = true;
		var_117_bool = 0;
		func_784(var_117_bool);
		if(var_117_bool != 0) {
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
	func_482(var_11_bool, var_12_object);
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
		func_366(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_482(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_415(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_731(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_444(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_713(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_481;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_481:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_348(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_595(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_778(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_776(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_780(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_782(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_863(var_79_int);
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
	var_154_bool = var_26_bool == 0; //@nz
	if(var_154_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_664();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_776(var_76_int)
{
	var_76_int = 515559;
	return 0;
}


func_778(var_75_int)
{
	var_75_int = 503344;
	return 0;
}


func_780(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_782(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_784(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_786()
{
	SetVariable("oob9Girl1", (int)1);
	return 0;
}


func_664()
{
	var_156_bool = 0; var_157_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_159_bool = 0;
	func_784(var_159_bool);
	if(var_159_bool != 0) {
	} else {
		HasAnimationTrack(var_157_bool, "head");
		var_161_bool = var_157_bool;
		if(var_161_bool == 0) goto Label_681;
		UnlookAsync("head");
	}
Label_681:
	return 2;
	
}


func_792()
{
	func_809();
	return 0;
}


func_797(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_747(var_97_int, "oob9Girl1");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_157(var_2_object, var_107_string)
{
	var_108_bool = 0;
	func_784(var_108_bool);
	var_109_bool = var_108_bool == 0; //@nz
	if(var_109_bool != 0) {
		return 0;
	}
	var_110_bool = var_107_string == var_2_object;
	if(var_110_bool != 0) {
		return 0;
	}
	var_111_string = ""; var_112_bool = 0;
	var_107_string = var_111_string;
	var_114_bool = var_107_string == "";
	if(var_114_bool != 0) {
		var_112_bool = 0;
	} else {
		var_112_bool = 1;
	}
	func_698(var_111_string, var_112_bool);
	var_2_object = var_107_string;
	return 0;
	
}


func_415(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_417(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_590(var_23_bool);
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
	func_496();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_809()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)540, (int)2, (int)530352);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_835(var_25_bool, var_26_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_682(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0;
	lshHasAnimation(var_137_bool, var_133_string);
	var_140_bool = var_137_bool;
	if(var_140_bool != 0) {
		lshGetAnimTimes(var_133_string, var_138_float, var_139_float);
		lshPlayAnimation(var_138_float, var_139_float, (bool)0);
	} else {
		var_143_int = "Can't find lsh animation : " + var_133_string;
		Trace(var_143_int);
	}
	return 6;
	
}


func_822(var_34_object)
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


func_698(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0;
	lshHasAnimation(var_118_bool, var_111_string);
	var_121_bool = var_118_bool;
	if(var_121_bool != 0) {
		lshGetAnimTimes(var_111_string, var_119_float, var_120_float);
		lshPlayAnimation(var_119_float, var_120_float, var_112_bool);
	} else {
		var_123_int = "Can't find lsh animation : " + var_111_string;
		Trace(var_123_int);
	}
	return 6;
	
}


func_444(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_582(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_575(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_577()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_835(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_822(Obj());
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


func_582(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_713(var_29_object)
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_797(var_96_object);
		if(var_95_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_786();
			var_107_string = "";
			func_157(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)530329);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531028, (int)32359, (int)32357);
			@@@var_0_object:AddReply((int)531029, (int)32365, (int)32358);
		} else {
				var_149_string = "";
				func_157(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)530331);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531033, (int)-1, (int)32362);
				goto Label_127;
		}
	}
Label_127:
	var_131_bool = 0;
	func_784(var_131_bool);
	if(var_131_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_132_string = var_3_string;
		if(var_132_string != 0) {
		} else {
			var_133_string = "";
			var_133_string = var_2_object;
			func_682(var_133_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_146_string = var_3_string;
		if(var_146_string != 0) {
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


func_590(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_595(var_27_bool, var_28_object, var_29_float)
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
	func_737(var_54_cvector, var_55_cvector);
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
	func_784(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_658;
		LookAsyncCamera("head");
	}
Label_658:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_724()
{
	var_15_bool = 0;
	func_784(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_731(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_348(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_350:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_417(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_350;
}
EMIT "Return(); Pop(4)";


func_863(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x36e";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_737(var_54_cvector, var_55_cvector)
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


func_482(var_2_object, var_3_string)
{
	func_577();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_747(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_366(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_590(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_415(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_731(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_496()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_590(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_759((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_510:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_590(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_543;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_752(var_68_string, var_69_int);
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
						goto Label_572;
					}
					goto Label_561;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_561;
				goto Label_572;
		}
		Label_561:
			var_71_bool = 0;
			func_575(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_572;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_510;

		}
	}
Label_572:
	ResetAAS();
	return 14;
	
}


func_752(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_759(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_761:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_752(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_761;
	}
	var_49_int = var_46_int;
	return 4;
	
}


