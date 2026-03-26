// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ood12Littlegirl2|W:D_Mission5|W:ood12Littlegirl1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:Remove|W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x186
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xae vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x18c vars=object
// @EVENT_26: op=0x1bd vars=string
// @EVENT_6: op=0x1c5 vars=
// @EVENT_7: op=0x206 vars=int
// @PE: 0x4a,0x98,0xae,0x18c,0x1bd,0x1dc,0x206,0x21d,0x32b,0x331,0x351,0x357,0x363

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_783();
		var_17_bool = var_13_bool == (int)16264;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_849();
		}
		var_23_bool = var_13_bool == (int)16277;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_811();
		}
		var_29_bool = var_12_bool == (int)16263;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_817();
			var_77_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515005);
			@@@var_0_object:ClearReplies();
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_867(var_96_object);
			if(var_95_bool != 0) {
				@@@var_0_object:AddReply((int)515006, (int)42522, (int)16264);
			}
			var_104_bool = 0; var_105_object = Obj();
			var_105_object = var_1_object;
			func_855(var_105_object);
			if(var_104_bool != 0) {
				@@@var_0_object:AddReply((int)515018, (int)16278, (int)16277);
			}
			@@@var_0_object:AddReply((int)515017, (int)-1, (int)16276);
			return 0;
		}
		var_117_bool = var_12_bool == (int)16278;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515019);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515020, (int)-1, (int)16279);
			@@@var_0_object:AddReply((int)515021, (int)-1, (int)16280);
			return 0;
		}
		var_127_bool = var_12_bool == (int)42522;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540515);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540516, (int)16265, (int)42523);
			@@@var_0_object:AddReply((int)540517, (int)42525, (int)42524);
			return 0;
		}
		var_137_bool = var_12_bool == (int)42525;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540519, (int)-1, (int)42526);
			return 0;
		}
		var_144_bool = var_12_bool == (int)16265;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515007);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515008, (int)16267, (int)16266);
			return 0;
		}
		var_151_bool = var_12_bool == (int)16267;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515009);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515010, (int)-1, (int)16268);
			@@@var_0_object:AddReply((int)515011, (int)-1, (int)16269);
			@@@var_0_object:AddReply((int)515012, (int)16271, (int)16270);
			@@@var_0_object:AddReply((int)515016, (int)16271, (int)16274);
			return 0;
		}
		var_167_bool = var_12_bool == (int)16271;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515013);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515014, (int)-1, (int)16272);
			@@@var_0_object:AddReply((int)515015, (int)-1, (int)16273);
			return 0;
		}
		var_3_string = true;
		var_176_bool = 0;
		func_975(var_176_bool);
		if(var_176_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaf";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_541(var_11_bool, var_12_object);
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
		func_425(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_541(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_474(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_790(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_503(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_772(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_540;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_540:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_407(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_654(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_969(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_967(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_971(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_973(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_950(var_79_int);
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
	var_199_bool = var_26_bool == 0; //@nz
	if(var_199_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_723();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_641(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_636()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_772(var_29_object)
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


func_649(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_905(var_110_bool, var_111_object, var_112_int)
{
	var_113_object = Obj(); var_114_object = Obj(); var_115_int = 0; var_116_object = Obj(); var_117_object = Obj(); var_118_int = 0;
	func_892(Obj());
	var_119_object = var_116_object;
	@@var_116_object:Find(var_112_int, var_117_object);
	var_124_bool = var_117_object == 0; //@nz
	if(var_124_bool != 0) {
		var_126_int = "Can't find diary parent with id: " + var_112_int;
		Trace(var_126_int);
		var_110_bool = 0;
		return 6;
	}
	@@var_117_object:AddChild(var_111_object);
	SendWorldWndMessage((int)7);
	@@var_111_object:GetCategory(var_118_int);
	SetDiarySection(var_118_int);
	var_110_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_654(var_27_bool, var_28_object, var_29_float)
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
	func_796(var_54_cvector, var_55_cvector);
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
	func_975(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_717;
		LookAsyncCamera("head");
	}
Label_717:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_783()
{
	var_15_bool = 0;
	func_975(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_790(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_407(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_409:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_476(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_409;
}
EMIT "Return(); Pop(4)";


func_152(var_2_object, var_142_string)
{
	var_143_bool = 0;
	func_975(var_143_bool);
	var_144_bool = var_143_bool == 0; //@nz
	if(var_144_bool != 0) {
		return 0;
	}
	var_145_bool = var_142_string == var_2_object;
	if(var_145_bool != 0) {
		return 0;
	}
	var_146_string = ""; var_147_bool = 0;
	var_142_string = var_146_string;
	var_149_bool = var_142_string == "";
	if(var_149_bool != 0) {
		var_147_bool = 0;
	} else {
		var_147_bool = 1;
	}
	func_757(var_146_string, var_147_bool);
	var_2_object = var_142_string;
	return 0;
	
}


func_796(var_54_cvector, var_55_cvector)
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


func_541(var_2_object, var_3_string)
{
	func_636();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_933(var_128_bool, var_129_int)
{
	var_130_object = Obj(); var_131_object = Obj(); var_132_object = Obj(); var_133_object = Obj();
	func_892(Obj());
	var_134_object = var_132_object;
	@@var_132_object:Find(var_129_int, var_133_object);
	var_135_bool = var_133_object == 0; //@nz
	if(var_135_bool != 0) {
		var_128_bool = 0;
		return 4;
	}
	@@var_133_object:Remove();
	var_128_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_806(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_425(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_649(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_474(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_790(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_811()
{
	SetVariable("ood12Littlegirl2", (int)1);
	return 0;
}


func_555()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_649(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_984((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_569:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_649(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_602;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_977(var_68_string, var_69_int);
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
						goto Label_631;
					}
					goto Label_620;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_620;
				goto Label_631;
		}
		Label_620:
			var_71_bool = 0;
			func_634(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_631;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_569;

		}
	}
Label_631:
	ResetAAS();
	return 14;
	
}


func_817()
{
	var_97_int = 0; var_98_string = "";
	func_806(var_97_int, "D_Mission5");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		SetVariable("D_Mission5", (int)1);
		func_879();
		var_128_bool = 0; var_129_int = 0;
		func_933(var_128_bool, (int)30);
		var_136_bool = 0; var_137_int = 0;
		func_933(var_136_bool, (int)3);
		var_138_bool = 0; var_139_int = 0;
		func_933(var_138_bool, (int)4);
		var_140_bool = 0; var_141_int = 0;
		func_933(var_140_bool, (int)5);
	}
	return 0;
}


func_950(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3c5";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_967(var_76_int)
{
	var_76_int = 515561;
	return 0;
}


func_969(var_75_int)
{
	var_75_int = 503346;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_object = Obj(); var_96_object = Obj();
		var_95_object = var_1_object;
		var_96_object = var_0_object;
		func_817();
		var_142_string = "";
		func_152(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)515005);
		@@@var_0_object:ClearReplies();
		var_160_bool = 0; var_161_object = Obj();
		var_161_object = var_1_object;
		func_867(var_161_object);
		if(var_160_bool != 0) {
			@@@var_0_object:AddReply((int)515006, (int)42522, (int)16264);
		}
		var_169_bool = 0; var_170_object = Obj();
		var_170_object = var_1_object;
		func_855(var_170_object);
		if(var_169_bool != 0) {
			@@@var_0_object:AddReply((int)515018, (int)16278, (int)16277);
		}
		@@@var_0_object:AddReply((int)515017, (int)-1, (int)16276);
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_122:
	var_181_bool = 0;
	func_975(var_181_bool);
	if(var_181_bool != 0) {

	Label_126:
		lshWaitForAnimEnd();
		var_182_string = var_3_string;
		if(var_182_string != 0) {
		} else {
			var_183_string = "";
			var_183_string = var_2_object;
			func_741(var_183_string);
			goto Label_126;
	}
		PlayAnimation("all", "idle");

	Label_141:
		WaitForAnimEnd();
		var_196_string = var_3_string;
		if(var_196_string != 0) {
			goto Label_151;
		}
		PlayAnimation("all", "idle");
		goto Label_141;
	}
	goto Label_151;
	
Label_151:
	return 0;
	
}


func_971(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_973(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_975(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_849()
{
	SetVariable("ood12Littlegirl1", (int)1);
	return 0;
}


func_977(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_723()
{
	var_201_bool = 0; var_202_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_204_bool = 0;
	func_975(var_204_bool);
	if(var_204_bool != 0) {
	} else {
		HasAnimationTrack(var_202_bool, "head");
		var_206_bool = var_202_bool;
		if(var_206_bool == 0) goto Label_740;
		UnlookAsync("head");
	}
Label_740:
	return 2;
	
}


func_855(var_169_bool)
{
	var_171_int = 0; var_172_string = "";
	func_806(var_171_int, "ood12Littlegirl2");
	var_174_bool = var_171_int == (int)0;
	if(var_174_bool != 0) {
		var_169_bool = 1;
		return 0;
	}
	var_169_bool = 0;
	return 0;
}


func_984(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_986:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_977(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_986;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_474(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_476(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_649(var_23_bool);
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
	func_555();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_867(var_160_bool)
{
	var_162_int = 0; var_163_string = "";
	func_806(var_162_int, "ood12Littlegirl1");
	var_165_bool = var_162_int == (int)0;
	if(var_165_bool != 0) {
		var_160_bool = 1;
		return 0;
	}
	var_160_bool = 0;
	return 0;
}


func_741(var_183_string)
{
	var_184_bool = 0; var_185_float = 0; var_186_float = 0; var_187_bool = 0; var_188_float = 0; var_189_float = 0;
	lshHasAnimation(var_187_bool, var_183_string);
	var_190_bool = var_187_bool;
	if(var_190_bool != 0) {
		lshGetAnimTimes(var_183_string, var_188_float, var_189_float);
		lshPlayAnimation(var_188_float, var_189_float, (bool)0);
	} else {
		var_193_int = "Can't find lsh animation : " + var_183_string;
		Trace(var_193_int);
	}
	return 6;
	
}


func_879()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)561, (int)0, (int)530575);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_905(var_110_bool, var_111_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_757(var_146_string, var_147_bool)
{
	var_150_bool = 0; var_151_float = 0; var_152_float = 0; var_153_bool = 0; var_154_float = 0; var_155_float = 0;
	lshHasAnimation(var_153_bool, var_146_string);
	var_156_bool = var_153_bool;
	if(var_156_bool != 0) {
		lshGetAnimTimes(var_146_string, var_154_float, var_155_float);
		lshPlayAnimation(var_154_float, var_155_float, var_147_bool);
	} else {
		var_158_int = "Can't find lsh animation : " + var_146_string;
		Trace(var_158_int);
	}
	return 6;
	
}


func_503(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_641(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_634(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_892(var_119_object)
{
	var_120_object = Obj(); var_121_object = Obj();
	GetDiaryRoot(var_121_object);
	var_122_bool = var_121_object == 0; //@nz
	if(var_122_bool != 0) {
		Trace("Can't retrieve diary root");
		var_119_object = 0;
		return 2;
	}
	var_121_object = var_119_object;
	return 2;
}
EMIT "Stack[-1] = 0";


