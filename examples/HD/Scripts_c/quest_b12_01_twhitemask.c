// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:oob12TWhitemask1|W:itheater@door1|W:b12q01TheaterIsVisited|W:branch|W:ui/NPC_wmask.png|W:ui/NPC_wmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x170
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc2 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x176 vars=object
// @EVENT_26: op=0x1a7 vars=string
// @EVENT_6: op=0x1af vars=
// @EVENT_7: op=0x1f0 vars=int
// @PE: 0x4a,0xac,0xc2,0x176,0x1a7,0x1c6,0x1f0,0x207,0x33e,0x344,0x34b,0x351

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_761();
		var_17_bool = var_12_bool == (int)24150;
		if(var_17_bool != 0) {
			var_18_bool = 0; var_19_object = Obj();
			var_19_object = var_1_object;
			func_849(var_19_object);
			if(var_18_bool != 0) {
				var_26_object = Obj(); var_27_object = Obj();
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_830();
				var_30_object = Obj(); var_31_object = Obj();
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_836();
				var_42_object = Obj(); var_43_object = Obj();
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_843();
				var_46_string = "";
				func_172(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)522959);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522960, (int)24152, (int)24151);
				@@@var_0_object:AddReply((int)522973, (int)-1, (int)24164);
				return 0;
			}
			var_70_string = "";
			func_172(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523197, (int)-1, (int)24400);
			@@@var_0_object:AddReply((int)523198, (int)-1, (int)24401);
			return 0;
		}
		var_79_bool = var_12_bool == (int)24152;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_172(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522962, (int)24154, (int)24153);
			@@@var_0_object:AddReply((int)522972, (int)-1, (int)24163);
			return 0;
		}
		var_89_bool = var_12_bool == (int)24154;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_172(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522963);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522964, (int)24156, (int)24155);
			@@@var_0_object:AddReply((int)522968, (int)24160, (int)24159);
			return 0;
		}
		var_99_bool = var_12_bool == (int)24160;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_172(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522969);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522970, (int)-1, (int)24161);
			@@@var_0_object:AddReply((int)522971, (int)-1, (int)24162);
			return 0;
		}
		var_109_bool = var_12_bool == (int)24156;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_172(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522965);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522966, (int)-1, (int)24157);
			@@@var_0_object:AddReply((int)522967, (int)-1, (int)24158);
			return 0;
		}
		var_3_string = true;
		var_118_bool = 0;
		func_886(var_118_bool);
		if(var_118_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc3";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_519(var_11_bool, var_12_object);
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
		func_403(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_519(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_452(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_768(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_481(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_750(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_518;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_518:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_385(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_632(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_880(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_878(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_882(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_884(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_861(var_79_int);
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
	var_173_bool = var_26_bool == 0; //@nz
	if(var_173_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_701();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_385(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_387:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_454(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_387;
}
EMIT "Return(); Pop(4)";


func_768(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_774(var_54_cvector, var_55_cvector)
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


func_519(var_2_object, var_3_string)
{
	func_614();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_784(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_403(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_627(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_452(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_768(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_533()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_627(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_813((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_547:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_627(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_580;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_806(var_68_string, var_69_int);
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
						goto Label_609;
					}
					goto Label_598;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_598;
				goto Label_609;
		}
		Label_598:
			var_71_bool = 0;
			func_612(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_609;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_547;

		}
	}
Label_609:
	ResetAAS();
	return 14;
	
}


func_789(var_109_string, var_110_bool)
{
	var_111_object = Obj(); var_112_object = Obj();
	FindActor(var_112_object, var_109_string);
	var_113_bool = var_112_object == 0; //@nz
	if(var_113_bool != 0) {
		var_115_int = "Door " + var_109_string;
		var_117_int = var_115_int + " not found";
		Trace(var_117_int);
	} else {
		@@var_112_object:SetProperty("locked", var_110_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_806(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_172(var_2_object, var_123_string)
{
	var_124_bool = 0;
	func_886(var_124_bool);
	var_125_bool = var_124_bool == 0; //@nz
	if(var_125_bool != 0) {
		return 0;
	}
	var_126_bool = var_123_string == var_2_object;
	if(var_126_bool != 0) {
		return 0;
	}
	var_127_string = ""; var_128_bool = 0;
	var_123_string = var_127_string;
	var_130_bool = var_123_string == "";
	if(var_130_bool != 0) {
		var_128_bool = 0;
	} else {
		var_128_bool = 1;
	}
	func_735(var_127_string, var_128_bool);
	var_2_object = var_123_string;
	return 0;
	
}


func_813(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_815:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_806(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_815;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_701()
{
	var_175_bool = 0; var_176_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_178_bool = 0;
	func_886(var_178_bool);
	if(var_178_bool != 0) {
	} else {
		HasAnimationTrack(var_176_bool, "head");
		var_180_bool = var_176_bool;
		if(var_180_bool == 0) goto Label_718;
		UnlookAsync("head");
	}
Label_718:
	return 2;
	
}


func_830()
{
	SetVariable("oob12TWhitemask1", (int)1);
	return 0;
}


func_836()
{
	var_109_string = ""; var_110_bool = 0;
	func_789("itheater@door1", (bool)0);
	return 0;
}


func_452(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_454(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_627(var_23_bool);
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
	func_533();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_849(var_96_object);
		if(var_95_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_830();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_836();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_843();
			var_123_string = "";
			func_172(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)522959);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522960, (int)24152, (int)24151);
			@@@var_0_object:AddReply((int)522973, (int)-1, (int)24164);
		} else {
				var_165_string = "";
				func_172(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)523196);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523197, (int)-1, (int)24400);
				@@@var_0_object:AddReply((int)523198, (int)-1, (int)24401);
				goto Label_142;
		}
	}
Label_142:
	var_147_bool = 0;
	func_886(var_147_bool);
	if(var_147_bool != 0) {

	Label_146:
		lshWaitForAnimEnd();
		var_148_string = var_3_string;
		if(var_148_string != 0) {
		} else {
			var_149_string = "";
			var_149_string = var_2_object;
			func_719(var_149_string);
			goto Label_146;
	}
		PlayAnimation("all", "idle");

	Label_161:
		WaitForAnimEnd();
		var_162_string = var_3_string;
		if(var_162_string != 0) {
			goto Label_171;
		}
		PlayAnimation("all", "idle");
		goto Label_161;

	}
	goto Label_171;
	
Label_171:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_843()
{
	SetVariable("b12q01TheaterIsVisited", (int)1);
	return 0;
}


func_719(var_149_string)
{
	var_150_bool = 0; var_151_float = 0; var_152_float = 0; var_153_bool = 0; var_154_float = 0; var_155_float = 0;
	lshHasAnimation(var_153_bool, var_149_string);
	var_156_bool = var_153_bool;
	if(var_156_bool != 0) {
		lshGetAnimTimes(var_149_string, var_154_float, var_155_float);
		lshPlayAnimation(var_154_float, var_155_float, (bool)0);
	} else {
		var_159_int = "Can't find lsh animation : " + var_149_string;
		Trace(var_159_int);
	}
	return 6;
	
}


func_849(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_784(var_97_int, "oob12TWhitemask1");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_861(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x36c";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_735(var_127_string, var_128_bool)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0;
	lshHasAnimation(var_134_bool, var_127_string);
	var_137_bool = var_134_bool;
	if(var_137_bool != 0) {
		lshGetAnimTimes(var_127_string, var_135_float, var_136_float);
		lshPlayAnimation(var_135_float, var_136_float, var_128_bool);
	} else {
		var_139_int = "Can't find lsh animation : " + var_127_string;
		Trace(var_139_int);
	}
	return 6;
	
}


func_481(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_619(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_612(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_614()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_619(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_878(var_76_int)
{
	var_76_int = 515569;
	return 0;
}


func_750(var_29_object)
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


func_880(var_75_int)
{
	var_75_int = 503354;
	return 0;
}


func_882(var_77_string)
{
	var_77_string = "ui/NPC_wmask.png";
	return 0;
}


func_627(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_884(var_78_string)
{
	var_78_string = "ui/NPC_wmask_b.png";
	return 0;
}


func_886(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_632(var_27_bool, var_28_object, var_29_float)
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
	func_774(var_54_cvector, var_55_cvector);
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
	func_886(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_695;
		LookAsyncCamera("head");
	}
Label_695:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_761()
{
	var_15_bool = 0;
	func_886(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


