// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:itheater@door1|W:ood12TBirdmask1|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1ad
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa4 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x1b3 vars=object
// @EVENT_26: op=0x1e4 vars=string
// @EVENT_6: op=0x1ec vars=
// @EVENT_7: op=0x22d vars=int
// @PE: 0x4a,0x8e,0xa4,0x1b3,0x1e4,0x203,0x22d,0x244,0x37b,0x382,0x388

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_822();
		var_17_bool = var_13_bool == (int)16595;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_898();
		}
		var_23_bool = var_12_bool == (int)16594;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_891();
			var_36_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515498);
			@@@var_0_object:ClearReplies();
			var_54_bool = 0; var_55_object = Obj();
			var_55_object = var_1_object;
			func_904(var_55_object);
			if(var_54_bool != 0) {
				@@@var_0_object:AddReply((int)515499, (int)16596, (int)16595);
			}
			@@@var_0_object:AddReply((int)535660, (int)-1, (int)37346);
			return 0;
		}
		var_69_bool = var_12_bool == (int)16596;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515501, (int)16598, (int)16597);
			@@@var_0_object:AddReply((int)515523, (int)16620, (int)16619);
			return 0;
		}
		var_79_bool = var_12_bool == (int)16620;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515524);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515525, (int)-1, (int)16621);
			return 0;
		}
		var_86_bool = var_12_bool == (int)16598;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515503, (int)16600, (int)16599);
			@@@var_0_object:AddReply((int)515522, (int)16600, (int)16618);
			return 0;
		}
		var_96_bool = var_12_bool == (int)16600;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515505, (int)16602, (int)16601);
			return 0;
		}
		var_103_bool = var_12_bool == (int)16602;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515507, (int)16604, (int)16603);
			@@@var_0_object:AddReply((int)515513, (int)16610, (int)16609);
			return 0;
		}
		var_113_bool = var_12_bool == (int)16610;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515516, (int)16613, (int)16612);
			return 0;
		}
		var_120_bool = var_12_bool == (int)16613;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515518, (int)-1, (int)16614);
			@@@var_0_object:AddReply((int)515519, (int)16616, (int)16615);
			return 0;
		}
		var_130_bool = var_12_bool == (int)16616;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515520);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515521, (int)-1, (int)16617);
			return 0;
		}
		var_137_bool = var_12_bool == (int)16604;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515509, (int)16606, (int)16605);
			@@@var_0_object:AddReply((int)515512, (int)-1, (int)16608);
			return 0;
		}
		var_147_bool = var_12_bool == (int)16606;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515511, (int)-1, (int)16607);
			return 0;
		}
		var_3_string = true;
		var_153_bool = 0;
		func_941(var_153_bool);
		if(var_153_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_580(var_11_bool, var_12_object);
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
		func_464(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_580(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_513(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_829(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_542(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_811(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_579;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_579:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_446(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_693(var_27_bool, var_28_object, (float)130.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_935(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_933(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_937(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_939(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_916(var_79_int);
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
	var_157_bool = var_26_bool == 0; //@nz
	if(var_157_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_762();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_513(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_898()
{
	SetVariable("ood12TBirdmask1", (int)1);
	return 0;
}


func_515(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_688(var_23_bool);
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
	func_594();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_904(var_125_bool)
{
	var_127_int = 0; var_128_string = "";
	func_845(var_127_int, "ood12TBirdmask1");
	var_132_bool = var_127_int == (int)0;
	if(var_132_bool != 0) {
		var_125_bool = 1;
		return 0;
	}
	var_125_bool = 0;
	return 0;
}


func_780(var_141_string)
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


func_142(var_2_object, var_107_string)
{
	var_108_bool = 0;
	func_941(var_108_bool);
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
	func_796(var_111_string, var_112_bool);
	var_2_object = var_107_string;
	return 0;
	
}


func_916(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3a3";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_796(var_111_string, var_112_bool)
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


func_542(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_680(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_673(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_675()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_933(var_76_int)
{
	var_76_int = 515571;
	return 0;
}


func_935(var_75_int)
{
	var_75_int = 504029;
	return 0;
}


func_680(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_937(var_77_string)
{
	var_77_string = "ui/NPC_bmask.png";
	return 0;
}


func_939(var_78_string)
{
	var_78_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_811(var_29_object)
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


func_941(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_688(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_693(var_27_bool, var_28_object, var_29_float)
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
	func_835(var_54_cvector, var_55_cvector);
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
	func_941(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_756;
		LookAsyncCamera("head");
	}
Label_756:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_822()
{
	var_15_bool = 0;
	func_941(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_829(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_446(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_448:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_515(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_448;
}
EMIT "Return(); Pop(4)";


func_835(var_54_cvector, var_55_cvector)
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


func_580(var_2_object, var_3_string)
{
	func_675();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
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
		func_891();
		var_107_string = "";
		func_142(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)515498);
		@@@var_0_object:ClearReplies();
		var_125_bool = 0; var_126_object = Obj();
		var_126_object = var_1_object;
		func_904(var_126_object);
		if(var_125_bool != 0) {
			@@@var_0_object:AddReply((int)515499, (int)16596, (int)16595);
		}
		@@@var_0_object:AddReply((int)535660, (int)-1, (int)37346);
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	var_139_bool = 0;
	func_941(var_139_bool);
	if(var_139_bool != 0) {

	Label_116:
		lshWaitForAnimEnd();
		var_140_string = var_3_string;
		if(var_140_string != 0) {
		} else {
			var_141_string = "";
			var_141_string = var_2_object;
			func_780(var_141_string);
			goto Label_116;
	}
		PlayAnimation("all", "idle");

	Label_131:
		WaitForAnimEnd();
		var_154_string = var_3_string;
		if(var_154_string != 0) {
			goto Label_141;
		}
		PlayAnimation("all", "idle");
		goto Label_131;
	}
	goto Label_141;
	
Label_141:
	return 0;
	
}


func_845(var_127_int, var_128_string)
{
	var_129_int = 0; var_130_int = 0;
	GetVariable(var_128_string, var_130_int);
	var_130_int = var_127_int;
	return 2;
}


func_464(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_688(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_513(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_829(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_594()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_688(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_874((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_608:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_688(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_641;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_867(var_68_string, var_69_int);
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
						goto Label_670;
					}
					goto Label_659;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_659;
				goto Label_670;
		}
		Label_659:
			var_71_bool = 0;
			func_673(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_670;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_608;

		}
	}
Label_670:
	ResetAAS();
	return 14;
	
}


func_850(var_97_string, var_98_bool)
{
	var_99_object = Obj(); var_100_object = Obj();
	FindActor(var_100_object, var_97_string);
	var_101_bool = var_100_object == 0; //@nz
	if(var_101_bool != 0) {
		var_103_int = "Door " + var_97_string;
		var_105_int = var_103_int + " not found";
		Trace(var_105_int);
	} else {
		@@var_100_object:SetProperty("locked", var_98_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_867(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_874(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_876:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_867(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_876;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_762()
{
	var_159_bool = 0; var_160_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_162_bool = 0;
	func_941(var_162_bool);
	if(var_162_bool != 0) {
	} else {
		HasAnimationTrack(var_160_bool, "head");
		var_164_bool = var_160_bool;
		if(var_164_bool == 0) goto Label_779;
		UnlookAsync("head");
	}
Label_779:
	return 2;
	
}


func_891()
{
	var_97_string = ""; var_98_bool = 0;
	func_850("itheater@door1", (bool)0);
	return 0;
}


