// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,Trigger/2,HasAnimation/3,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:quest_k1_01|W:remove_birdmask|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1ea
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa4 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool params=0
// @EVENT_0: op=0x1f4 vars=object
// @EVENT_7: op=0x22d vars=int
// @PE: 0x4a,0x8e,0xa4,0x1f4,0x203,0x22d,0x244,0x375

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	if((int)1 != 0) {
		func_822();
		var_16_bool = var_11_object == (int)27252;
		if(var_16_bool != 0) {
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_885();
			var_25_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525969, (int)27254, (int)27253);
			@@@var_0_object:AddReply((int)525988, (int)27273, (int)27272);
			@@@var_0_object:AddReply((int)525996, (int)27284, (int)27283);
			return 0;
		}
		var_53_bool = var_11_object == (int)27284;
		if(var_53_bool != 0) {
			var_54_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525997);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526229, (int)27273, (int)27495);
			@@@var_0_object:AddReply((int)526230, (int)27254, (int)27496);
			return 0;
		}
		var_63_bool = var_11_object == (int)27273;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525989);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525990, (int)27254, (int)27274);
			return 0;
		}
		var_70_bool = var_11_object == (int)27254;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525971, (int)27256, (int)27255);
			@@@var_0_object:AddReply((int)526231, (int)-1, (int)27499);
			return 0;
		}
		var_80_bool = var_11_object == (int)27256;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525973, (int)27258, (int)27257);
			@@@var_0_object:AddReply((int)526232, (int)27258, (int)27501);
			return 0;
		}
		var_90_bool = var_11_object == (int)27258;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525974);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525975, (int)27260, (int)27259);
			return 0;
		}
		var_97_bool = var_11_object == (int)27260;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525976);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525977, (int)27262, (int)27261);
			return 0;
		}
		var_104_bool = var_11_object == (int)27262;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525979, (int)27264, (int)27263);
			@@@var_0_object:AddReply((int)541736, (int)43931, (int)43930);
			return 0;
		}
		var_114_bool = var_11_object == (int)43931;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541738, (int)27264, (int)43932);
			@@@var_0_object:AddReply((int)541739, (int)27264, (int)43933);
			return 0;
		}
		var_124_bool = var_11_object == (int)27264;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525981, (int)27266, (int)27265);
			@@@var_0_object:AddReply((int)541740, (int)27504, (int)43936);
			return 0;
		}
		var_134_bool = var_11_object == (int)27266;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525983, (int)27504, (int)27267);
			@@@var_0_object:AddReply((int)526233, (int)27504, (int)27503);
			return 0;
		}
		var_144_bool = var_11_object == (int)27504;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526234);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526235, (int)27507, (int)27506);
			@@@var_0_object:AddReply((int)526238, (int)27510, (int)27509);
			return 0;
		}
		var_154_bool = var_11_object == (int)27510;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526239);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526240, (int)-1, (int)27511);
			return 0;
		}
		var_161_bool = var_11_object == (int)27507;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_142(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526236);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526237, (int)-1, (int)27508);
			return 0;
		}
		var_3_string = true;
		var_167_bool = 0;
		func_859(var_167_bool);
		if(var_167_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_int = var_5_int;
	if(var_12_int != 0) {
		return 0;
	}
	func_580(var_10_bool, var_11_object);
	var_16_int = 0; var_17_object = Obj();
	var_11_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	var_5_int = true;
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int)
{
	var_13_bool = var_11_int == (int)10;
	if(var_13_bool != 0) {
		var_14_bool = 0;
		func_542(var_9_object, var_10_bool, var_11_int, var_14_bool);
		if(var_14_bool != 0) {
			var_27_bool = var_2_object == 0; //@nz
			if(var_27_bool != 0) {
				var_28_object = Obj();
				var_28_object = var_4_bool;
				func_811(var_28_object);
				var_2_object = true;
			}
		} else {
			var_35_object = var_2_object;
			if(var_35_object == 0) goto Label_579;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_579:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool)
{
	
Label_490:
	var_11_float = 0; var_12_float = 0;
	func_515(var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, (float)300, (float)100);
	Sleep((int)3);
	goto Label_490;
}
EMIT "Return(); Pop(0)";


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
	func_853(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_851(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_855(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_857(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_892(var_79_int);
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
	var_148_bool = var_26_bool == 0; //@nz
	if(var_148_bool != 0) {
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


func_515(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_688(var_13_bool);
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
	func_594();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
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


func_839(var_97_bool, var_98_string, var_99_string)
{
	var_100_object = Obj(); var_101_object = Obj();
	FindActor(var_101_object, var_98_string);
	var_102_bool = var_101_object == 0; //@ne
	if(var_102_bool != 0) {
		var_97_bool = 0;
		return 2;
	}
	Trigger(var_101_object, var_99_string);
	var_97_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_object = Obj(); var_96_object = Obj();
		var_95_object = var_1_object;
		var_96_object = var_0_object;
		func_885();
		var_103_string = "";
		func_142(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)525968);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525969, (int)27254, (int)27253);
		@@@var_0_object:AddReply((int)525988, (int)27273, (int)27272);
		@@@var_0_object:AddReply((int)525996, (int)27284, (int)27283);
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	var_130_bool = 0;
	func_859(var_130_bool);
	if(var_130_bool != 0) {

	Label_116:
		lshWaitForAnimEnd();
		var_131_string = var_3_string;
		if(var_131_string != 0) {
		} else {
			var_132_string = "";
			var_132_string = var_2_object;
			func_780(var_132_string);
			goto Label_116;
	}
		PlayAnimation("all", "idle");

	Label_131:
		WaitForAnimEnd();
		var_145_string = var_3_string;
		if(var_145_string != 0) {
			goto Label_141;
		}
		PlayAnimation("all", "idle");
		goto Label_131;
	}
	goto Label_141;
	
Label_141:
	return 0;
	
}


func_780(var_132_string)
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


func_142(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_859(var_104_bool);
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
	func_796(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	return 0;
	
}


func_594()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_688(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_868((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_608:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_688(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_641;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_861(var_58_string, var_59_int);
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
						goto Label_670;
					}
					goto Label_659;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_659;
				goto Label_670;
		}
		Label_659:
			var_61_bool = 0;
			func_673(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_670;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_608;

		}
	}
Label_670:
	ResetAAS();
	return 14;
	
}


func_851(var_76_int)
{
	var_76_int = 515571;
	return 0;
}


func_853(var_75_int)
{
	var_75_int = 504029;
	return 0;
}


func_855(var_77_string)
{
	var_77_string = "ui/NPC_bmask.png";
	return 0;
}


func_857(var_78_string)
{
	var_78_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_859(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_796(var_107_string, var_108_bool)
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


func_861(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_542(var_0_object, var_1_object, var_4_bool, var_14_bool)
{
	var_15_float = 0; var_16_float = 0;
	var_17_bool = var_4_bool == 0; //@ne
	if(var_17_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	var_18_float = 0; var_19_object = Obj();
	var_19_object = var_4_bool;
	func_680(var_18_float, var_19_object);
	var_16_float = sqrt(var_18_float);
	var_26_object = var_2_object;
	if(var_26_object != 0) {
		var_16_float = var_16_float - var_1_object;
	}
	var_14_bool = var_16_float < var_0_object;
	return 2;
}


func_673(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_675()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_868(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_870:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_861(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_870;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_680(var_18_float, var_19_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0);
	GetPosition(var_23_cvector);
	@@var_19_object:GetPosition(var_24_cvector);
	var_25_cvector = var_24_cvector - var_23_cvector;
	var_18_float = var_25_cvector | var_25_cvector;
	return 6;
}


func_811(var_28_object)
{
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0);
	@@var_28_object:GetEyesHeight(var_31_float);
	var_32_cvector = CVector(0.0, 0.0, 0.0);
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	LookAsync(var_28_object, "head", var_32_cvector);
	return 4;
}


func_688(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
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
	func_829(var_54_cvector, var_55_cvector);
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
	func_859(var_70_bool);
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
	var_14_bool = 0;
	func_859(var_14_bool);
	if(var_14_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_885()
{
	var_97_bool = 0; var_98_string = ""; var_99_string = "";
	func_839(var_97_bool, "quest_k1_01", "remove_birdmask");
	return 0;
}


func_762()
{
	var_150_bool = 0; var_151_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_153_bool = 0;
	func_859(var_153_bool);
	if(var_153_bool != 0) {
	} else {
		HasAnimationTrack(var_151_bool, "head");
		var_155_bool = var_151_bool;
		if(var_155_bool == 0) goto Label_779;
		UnlookAsync("head");
	}
Label_779:
	return 2;
	
}


func_892(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x38b";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_829(var_54_cvector, var_55_cvector)
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


