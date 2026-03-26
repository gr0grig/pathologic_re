// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,HasAnimation/3,SetVariable/2,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:k5q04_bring_water|W:k5q04|W:bottle_water|A:RemoveItemByType|W:playsound|W:giveitem|W:sobor@door1|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1e7
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf8 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x1f1 vars=object
// @EVENT_7: op=0x226 vars=int
// @PE: 0x4a,0xe2,0xf8,0x1f1,0x1fc,0x226,0x23d,0x36e,0x377,0x386,0x38c,0x393,0x39f,0x3ab,0x3b7

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_815();
		var_15_bool = var_11_object == (int)41375;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_878();
		}
		var_44_bool = var_11_object == (int)41380;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_887();
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_896(var_58_object);
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_902();
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_908();
		}
		var_80_bool = var_10_bool == (int)41372;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_226(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539441);
			@@@var_0_object:ClearReplies();
			var_99_bool = 0;
			var_99_bool = 1;
			var_100_bool = 0;
			var_100_bool = 0;
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_927(var_102_object);
			if(var_101_bool != 0) {
				var_109_bool = 0; var_110_object = Obj();
				var_110_object = var_1_object;
				func_939(var_110_object);
				var_115_bool = var_109_bool == 0; //@nz
				if(var_115_bool != 0) {
					var_100_bool = 1;
				}
			}
			if(var_100_bool != 1) {
				var_116_bool = 0;
				var_116_bool = 0;
				var_117_bool = 0; var_118_object = Obj();
				var_118_object = var_1_object;
				func_915(var_118_object);
				if(var_117_bool != 0) {
					var_123_bool = 0; var_124_object = Obj();
					var_124_object = var_1_object;
					func_939(var_124_object);
					var_125_bool = var_123_bool == 0; //@nz
					if(var_125_bool != 0) {
						var_116_bool = 1;
					}
				}
				if(var_116_bool != 1) {
					var_99_bool = 0;
				}
			}
			if(var_99_bool != 0) {
				@@@var_0_object:AddReply((int)539442, (int)41374, (int)41373);
			}
			var_129_bool = 0;
			var_129_bool = 1;
			var_130_bool = 0;
			var_130_bool = 0;
			var_131_bool = 0;
			var_131_bool = 0;
			var_132_bool = 0; var_133_object = Obj();
			var_133_object = var_1_object;
			func_927(var_133_object);
			if(var_132_bool != 0) {
				var_134_bool = 0; var_135_object = Obj();
				var_135_object = var_1_object;
				func_939(var_135_object);
				if(var_134_bool != 0) {
					var_131_bool = 1;
				}
			}
			if(var_131_bool != 0) {
				var_136_bool = 0; var_137_object = Obj();
				var_137_object = var_1_object;
				func_951(var_136_bool, var_137_object);
				if(var_136_bool != 0) {
					var_130_bool = 1;
				}
			}
			if(var_130_bool != 1) {
				var_145_bool = 0;
				var_145_bool = 0;
				var_146_bool = 0;
				var_146_bool = 0;
				var_147_bool = 0; var_148_object = Obj();
				var_148_object = var_1_object;
				func_939(var_148_object);
				if(var_147_bool != 0) {
					var_149_bool = 0; var_150_object = Obj();
					var_150_object = var_1_object;
					func_951(var_149_bool, var_150_object);
					if(var_149_bool != 0) {
						var_146_bool = 1;
					}
				}
				if(var_146_bool != 0) {
					var_151_bool = 0; var_152_object = Obj();
					var_152_object = var_1_object;
					func_915(var_152_object);
					if(var_151_bool != 0) {
						var_145_bool = 1;
					}
				}
				if(var_145_bool != 1) {
					var_129_bool = 0;
				}
			}
			if(var_129_bool != 0) {
				@@@var_0_object:AddReply((int)539445, (int)41377, (int)41376);
			}
			@@@var_0_object:AddReply((int)539450, (int)-1, (int)41381);
			@@@var_0_object:AddReply((int)540739, (int)-1, (int)42777);
			return 0;
		}
		var_163_bool = var_10_bool == (int)41377;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_226(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539446);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540737, (int)42776, (int)42775);
			return 0;
		}
		var_170_bool = var_10_bool == (int)42776;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_226(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)540738);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539447, (int)41379, (int)41378);
			return 0;
		}
		var_177_bool = var_10_bool == (int)41379;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_226(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539448);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539449, (int)-1, (int)41380);
			return 0;
		}
		var_184_bool = var_10_bool == (int)41374;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_226(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539443);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539444, (int)-1, (int)41375);
			return 0;
		}
		var_3_string = true;
		var_190_bool = 0;
		func_1064(var_190_bool);
		if(var_190_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf9";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_573(var_9_object, var_10_object);
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
		func_535(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_804(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_572;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_572:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_487:
	Sleep((int)1);
	var_11_float = 0; var_12_float = 0;
	func_508(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	goto Label_487;
}
EMIT "Return(); Pop(0)";


func_896(var_57_object)
{
	var_59_int = 0; var_60_int = 0;
	@@var_57_object:RemoveItemByType(var_60_int, "bottle_water", (int)20);
	return 2;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_686(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_1058(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_1056(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_1060(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_1062(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_1039(var_77_int);
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
	var_192_bool = var_24_bool == 0; //@nz
	if(var_192_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_755();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_773(var_176_string)
{
	var_177_bool = 0; var_178_float = 0; var_179_float = 0; var_180_bool = 0; var_181_float = 0; var_182_float = 0;
	lshHasAnimation(var_180_bool, var_176_string);
	var_183_bool = var_180_bool;
	if(var_183_bool != 0) {
		lshGetAnimTimes(var_176_string, var_181_float, var_182_float);
		lshPlayAnimation(var_181_float, var_182_float, (bool)0);
	} else {
		var_186_int = "Can't find lsh animation : " + var_176_string;
		Trace(var_186_int);
	}
	return 6;
	
}


func_902()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_908()
{
	var_69_string = ""; var_70_bool = 0;
	func_837("sobor@door1", (bool)0);
	return 0;
}


func_1039(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x41e";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_915(var_129_bool)
{
	var_131_int = 0; var_132_string = "";
	func_832(var_131_int, "k5q04");
	var_134_bool = var_131_int == (int)2;
	if(var_134_bool != 0) {
		var_129_bool = 1;
		return 0;
	}
	var_129_bool = 0;
	return 0;
}


func_789(var_97_string, var_98_bool)
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


func_535(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_673(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_666(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_668()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_927(var_113_bool)
{
	var_115_int = 0; var_116_string = "";
	func_832(var_115_int, "k5q04");
	var_120_bool = var_115_int == (int)3;
	if(var_120_bool != 0) {
		var_113_bool = 1;
		return 0;
	}
	var_113_bool = 0;
	return 0;
}


func_1056(var_74_int)
{
	var_74_int = 515556;
	return 0;
}


func_673(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_1058(var_73_int)
{
	var_73_int = 503341;
	return 0;
}


func_1060(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_804(var_27_object)
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


func_1062(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_1064(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_681(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_939(var_121_bool)
{
	var_123_int = 0; var_124_string = "";
	func_832(var_123_int, "k5q04_bring_water");
	var_126_bool = var_123_int != (int)0;
	if(var_126_bool != 0) {
		var_121_bool = 1;
		return 0;
	}
	var_121_bool = 0;
	return 0;
}


func_686(var_25_bool, var_26_object, var_27_float)
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
	func_822(var_52_cvector, var_53_cvector);
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
	func_1064(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_749;
		LookAsyncCamera("head");
	}
Label_749:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_815()
{
	var_13_bool = 0;
	func_1064(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_822(var_52_cvector, var_53_cvector)
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


func_951(var_148_bool, var_149_object)
{
	var_150_bool = 0; var_151_object = Obj();
	var_149_object = var_151_object;
	func_961(var_150_bool, var_151_object);
	if(var_150_bool != 0) {
		var_148_bool = 1;
		return 0;
	}
	var_148_bool = 0;
	return 0;
}


func_573(var_2_object, var_3_string)
{
	func_668();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_832(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0;
	GetVariable(var_116_string, var_118_int);
	var_118_int = var_115_int;
	return 2;
}


func_961(var_150_bool, var_151_object)
{
	var_152_int = 0; var_153_int = 0;
	@@var_151_object:GetItemCountOfType(var_153_int, "bottle_water");
	var_156_bool = var_153_int >= (int)20;
	if(var_156_bool != 0) {
		var_150_bool = 1;
		return 2;
	}
	var_150_bool = 0;
	return 2;
}


func_837(var_69_string, var_70_bool)
{
	var_71_object = Obj(); var_72_object = Obj();
	FindActor(var_72_object, var_69_string);
	var_73_bool = var_72_object == 0; //@nz
	if(var_73_bool != 0) {
		var_75_int = "Door " + var_69_string;
		var_77_int = var_75_int + " not found";
		Trace(var_77_int);
	} else {
		@@var_72_object:SetProperty("locked", var_70_bool);
	}
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
		func_226(var_87_object, "Neutral");
		@@@var_0_object:SetMessage((int)539441);
		@@@var_0_object:ClearReplies();
		var_111_bool = 0;
		var_111_bool = 1;
		var_112_bool = 0;
		var_112_bool = 0;
		var_113_bool = 0; var_114_object = Obj();
		var_114_object = var_1_object;
		func_927(var_114_object);
		if(var_113_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_122_object = var_1_object;
			func_939(var_122_object);
			var_127_bool = var_121_bool == 0; //@nz
			if(var_127_bool != 0) {
				var_112_bool = 1;
			}
		}
		if(var_112_bool != 1) {
			var_128_bool = 0;
			var_128_bool = 0;
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_915(var_130_object);
			if(var_129_bool != 0) {
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_939(var_136_object);
				var_137_bool = var_135_bool == 0; //@nz
				if(var_137_bool != 0) {
					var_128_bool = 1;
				}
			}
			if(var_128_bool != 1) {
				var_111_bool = 0;
			}
		}
		if(var_111_bool != 0) {
			@@@var_0_object:AddReply((int)539442, (int)41374, (int)41373);
		}
		var_141_bool = 0;
		var_141_bool = 1;
		var_142_bool = 0;
		var_142_bool = 0;
		var_143_bool = 0;
		var_143_bool = 0;
		var_144_bool = 0; var_145_object = Obj();
		var_145_object = var_1_object;
		func_927(var_145_object);
		if(var_144_bool != 0) {
			var_146_bool = 0; var_147_object = Obj();
			var_147_object = var_1_object;
			func_939(var_147_object);
			if(var_146_bool != 0) {
				var_143_bool = 1;
			}
		}
		if(var_143_bool != 0) {
			var_148_bool = 0; var_149_object = Obj();
			var_149_object = var_1_object;
			func_951(var_148_bool, var_149_object);
			if(var_148_bool != 0) {
				var_142_bool = 1;
			}
		}
		if(var_142_bool != 1) {
			var_157_bool = 0;
			var_157_bool = 0;
			var_158_bool = 0;
			var_158_bool = 0;
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_939(var_160_object);
			if(var_159_bool != 0) {
				var_161_bool = 0; var_162_object = Obj();
				var_162_object = var_1_object;
				func_951(var_161_bool, var_162_object);
				if(var_161_bool != 0) {
					var_158_bool = 1;
				}
			}
			if(var_158_bool != 0) {
				var_163_bool = 0; var_164_object = Obj();
				var_164_object = var_1_object;
				func_915(var_164_object);
				if(var_163_bool != 0) {
					var_157_bool = 1;
				}
			}
			if(var_157_bool != 1) {
				var_141_bool = 0;
			}
		}
		if(var_141_bool != 0) {
			@@@var_0_object:AddReply((int)539445, (int)41377, (int)41376);
		}
		@@@var_0_object:AddReply((int)539450, (int)-1, (int)41381);
		@@@var_0_object:AddReply((int)540739, (int)-1, (int)42777);
		goto Label_196;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_196:
	var_174_bool = 0;
	func_1064(var_174_bool);
	if(var_174_bool != 0) {

	Label_200:
		lshWaitForAnimEnd();
		var_175_string = var_3_string;
		if(var_175_string != 0) {
		} else {
			var_176_string = "";
			var_176_string = var_2_object;
			func_773(var_176_string);
			goto Label_200;
	}
		PlayAnimation("all", "idle");

	Label_215:
		WaitForAnimEnd();
		var_189_string = var_3_string;
		if(var_189_string != 0) {
			goto Label_225;
		}
		PlayAnimation("all", "idle");
		goto Label_215;
	}
	goto Label_225;
	
Label_225:
	return 0;
	
}


func_587()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_681(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_861((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_601:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_681(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_634;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_854(var_58_string, var_59_int);
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
						goto Label_663;
					}
					goto Label_652;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_652;
				goto Label_663;
		}
		Label_652:
			var_61_bool = 0;
			func_666(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_663;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_601;

		}
	}
Label_663:
	ResetAAS();
	return 14;
	
}


func_972()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)744, (int)2, (int)539461);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_1011(var_25_bool, var_26_object, (int)740);
	return 2;
}
EMIT "Stack[-1] = 0";


func_854(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_985()
{
	var_49_object = Obj(); var_50_object = Obj();
	CreateDiaryEntry(var_50_object, (int)745, (int)2, (int)539462);
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0;
	var_50_object = var_55_object;
	func_1011(var_54_bool, var_55_object, (int)740);
	return 2;
}
EMIT "Stack[-1] = 0";


func_861(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_863:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_854(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_863;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_226(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_1064(var_94_bool);
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
	func_789(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	return 0;
	
}


func_998(var_34_object)
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


func_878()
{
	SetVariable("k5q04_bring_water", (int)1);
	func_972();
	return 0;
}


func_755()
{
	var_194_bool = 0; var_195_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_197_bool = 0;
	func_1064(var_197_bool);
	if(var_197_bool != 0) {
	} else {
		HasAnimationTrack(var_195_bool, "head");
		var_199_bool = var_195_bool;
		if(var_199_bool == 0) goto Label_772;
		UnlookAsync("head");
	}
Label_772:
	return 2;
	
}


func_1011(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_998(Obj());
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


func_887()
{
	SetVariable("k5q04", (int)4);
	func_985();
	return 0;
}


func_508(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_681(var_13_bool);
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
	func_587();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


