// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:oob12TBirdmask1|W:itheater@door1|W:b12q01TheaterIsVisited|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1dc
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbd vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x1e2 vars=object
// @EVENT_26: op=0x213 vars=string
// @EVENT_6: op=0x21b vars=
// @EVENT_7: op=0x25c vars=int
// @PE: 0x4a,0xa7,0xbd,0x1e2,0x213,0x232,0x25c,0x273,0x3aa,0x3b0,0x3b7,0x3bd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_869();
		var_17_bool = var_12_bool == (int)24122;
		if(var_17_bool != 0) {
			var_18_bool = 0; var_19_object = Obj();
			var_19_object = var_1_object;
			func_957(var_19_object);
			if(var_18_bool != 0) {
				var_26_object = Obj(); var_27_object = Obj();
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_938();
				var_30_object = Obj(); var_31_object = Obj();
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_944();
				var_42_object = Obj(); var_43_object = Obj();
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_951();
				var_46_string = "";
				func_167(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)522931);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522932, (int)24124, (int)24123);
				return 0;
			}
			var_67_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523192);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523193, (int)-1, (int)24396);
			@@@var_0_object:AddReply((int)523194, (int)-1, (int)24397);
			return 0;
		}
		var_76_bool = var_12_bool == (int)24124;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522934, (int)24126, (int)24125);
			@@@var_0_object:AddReply((int)522956, (int)24148, (int)24147);
			return 0;
		}
		var_86_bool = var_12_bool == (int)24148;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522957);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522958, (int)24128, (int)24149);
			return 0;
		}
		var_93_bool = var_12_bool == (int)24126;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522936, (int)24128, (int)24127);
			@@@var_0_object:AddReply((int)522955, (int)24128, (int)24146);
			return 0;
		}
		var_103_bool = var_12_bool == (int)24128;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522937);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522938, (int)24130, (int)24129);
			return 0;
		}
		var_110_bool = var_12_bool == (int)24130;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522940, (int)24132, (int)24131);
			@@@var_0_object:AddReply((int)522946, (int)24138, (int)24137);
			return 0;
		}
		var_120_bool = var_12_bool == (int)24138;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522948, (int)24134, (int)24139);
			@@@var_0_object:AddReply((int)522949, (int)24141, (int)24140);
			return 0;
		}
		var_130_bool = var_12_bool == (int)24141;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522950);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522951, (int)24134, (int)24142);
			@@@var_0_object:AddReply((int)522952, (int)24144, (int)24143);
			return 0;
		}
		var_140_bool = var_12_bool == (int)24144;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522953);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522954, (int)24134, (int)24145);
			return 0;
		}
		var_147_bool = var_12_bool == (int)24132;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522942, (int)24134, (int)24133);
			@@@var_0_object:AddReply((int)522945, (int)-1, (int)24136);
			return 0;
		}
		var_157_bool = var_12_bool == (int)24134;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_167(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522944, (int)-1, (int)24135);
			return 0;
		}
		var_3_string = true;
		var_163_bool = 0;
		func_994(var_163_bool);
		if(var_163_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbe";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_627(var_11_bool, var_12_object);
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
		func_511(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_627(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_560(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_876(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_589(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_858(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_626;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_626:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_493(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_740(var_27_bool, var_28_object, (float)130.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_988(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_986(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_990(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_992(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_969(var_79_int);
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
	var_170_bool = var_26_bool == 0; //@nz
	if(var_170_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_809();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_641()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_735(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_921((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_655:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_735(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_688;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_914(var_68_string, var_69_int);
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
						goto Label_717;
					}
					goto Label_706;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_706;
				goto Label_717;
		}
		Label_706:
			var_71_bool = 0;
			func_720(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_717;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_655;

		}
	}
Label_717:
	ResetAAS();
	return 14;
	
}


func_897(var_109_string, var_110_bool)
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


func_914(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_921(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_923:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_914(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_923;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_167(var_2_object, var_123_string)
{
	var_124_bool = 0;
	func_994(var_124_bool);
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
	func_843(var_127_string, var_128_bool);
	var_2_object = var_123_string;
	return 0;
	
}


func_809()
{
	var_172_bool = 0; var_173_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_175_bool = 0;
	func_994(var_175_bool);
	if(var_175_bool != 0) {
	} else {
		HasAnimationTrack(var_173_bool, "head");
		var_177_bool = var_173_bool;
		if(var_177_bool == 0) goto Label_826;
		UnlookAsync("head");
	}
Label_826:
	return 2;
	
}


func_938()
{
	SetVariable("oob12TBirdmask1", (int)1);
	return 0;
}


func_944()
{
	var_109_string = ""; var_110_bool = 0;
	func_897("itheater@door1", (bool)0);
	return 0;
}


func_560(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_562(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_735(var_23_bool);
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
	func_641();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_951()
{
	SetVariable("b12q01TheaterIsVisited", (int)1);
	return 0;
}


func_827(var_146_string)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0;
	lshHasAnimation(var_150_bool, var_146_string);
	var_153_bool = var_150_bool;
	if(var_153_bool != 0) {
		lshGetAnimTimes(var_146_string, var_151_float, var_152_float);
		lshPlayAnimation(var_151_float, var_152_float, (bool)0);
	} else {
		var_156_int = "Can't find lsh animation : " + var_146_string;
		Trace(var_156_int);
	}
	return 6;
	
}


func_957(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_892(var_97_int, "oob12TBirdmask1");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_969(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3d8";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_957(var_96_object);
		if(var_95_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_938();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_944();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_951();
			var_123_string = "";
			func_167(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)522931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522932, (int)24124, (int)24123);
		} else {
				var_162_string = "";
				func_167(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)523192);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523193, (int)-1, (int)24396);
				@@@var_0_object:AddReply((int)523194, (int)-1, (int)24397);
				goto Label_137;
		}
	}
Label_137:
	var_144_bool = 0;
	func_994(var_144_bool);
	if(var_144_bool != 0) {

	Label_141:
		lshWaitForAnimEnd();
		var_145_string = var_3_string;
		if(var_145_string != 0) {
		} else {
			var_146_string = "";
			var_146_string = var_2_object;
			func_827(var_146_string);
			goto Label_141;
	}
		PlayAnimation("all", "idle");

	Label_156:
		WaitForAnimEnd();
		var_159_string = var_3_string;
		if(var_159_string != 0) {
			goto Label_166;
		}
		PlayAnimation("all", "idle");
		goto Label_156;

	}
	goto Label_166;
	
Label_166:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_843(var_127_string, var_128_bool)
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


func_589(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_727(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_720(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_722()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_727(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_986(var_76_int)
{
	var_76_int = 515571;
	return 0;
}


func_858(var_29_object)
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


func_988(var_75_int)
{
	var_75_int = 504029;
	return 0;
}


func_990(var_77_string)
{
	var_77_string = "ui/NPC_bmask.png";
	return 0;
}


func_735(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_992(var_78_string)
{
	var_78_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_994(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_740(var_27_bool, var_28_object, var_29_float)
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
	func_882(var_54_cvector, var_55_cvector);
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
	func_994(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_803;
		LookAsyncCamera("head");
	}
Label_803:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_869()
{
	var_15_bool = 0;
	func_994(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_876(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_493(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_495:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_562(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_495;
}
EMIT "Return(); Pop(4)";


func_882(var_54_cvector, var_55_cvector)
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


func_627(var_2_object, var_3_string)
{
	func_722();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_892(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_511(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_735(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_560(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_876(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


