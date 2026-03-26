// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,IsLoaded/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,HasAnimation/3,TriggerWorld/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:powder is given|W:powder|W:ood4BirdmaskHome1|W:ood4BirdmaskHome2|W:d4q02BirdmaskNearHome|A:FindMark|A:Remove|W:d4q02MladVladGotoAJLSelf|W:d4q02MladVladGotoAnna|W:d4q02MladVladGotoJulia|W:d4q02MladVladGotoLara|W:quest_d4_02|W:completed|W:birdmask_talk|W:d4q02_survived|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1e3
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd6 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x1eb vars=object
// @PE: 0x4a,0xc0,0xd6,0x1eb,0x32d,0x333,0x33e,0x344,0x37d,0x387,0x393,0x39f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_711();
		var_10_bool = var_6_int == (int)13059;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_830();
			var_15_object = Obj(); var_16_object = Obj();
			var_15_object = var_1_object;
			var_16_object = var_0_object;
			func_893();
		}
		var_47_bool = var_6_int == (int)13065;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_836();
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_819(var_53_object);
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_813();
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_842();
		}
		var_115_bool = var_5_int == (int)13056;
		if(var_115_bool != 0) {
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_903(var_117_object);
			if(var_116_bool != 0) {
				var_124_string = "";
				func_192(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)511843);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511844, (int)13058, (int)13057);
				@@@var_0_object:AddReply((int)536103, (int)37857, (int)37856);
				return 0;
			}
			var_148_bool = 0; var_149_object = Obj();
			var_149_object = var_1_object;
			func_927(var_149_object);
			var_154_bool = var_148_bool == 0; //@nz
			if(var_154_bool != 0) {
				var_155_string = "";
				func_192(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)511847);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511848, (int)-1, (int)13061);
				return 0;
			}
			var_160_bool = 0;
			var_160_bool = 0;
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_915(var_162_object);
			if(var_161_bool != 0) {
				var_167_bool = 0; var_168_object = Obj();
				var_168_object = var_1_object;
				func_927(var_168_object);
				if(var_167_bool != 0) {
					var_160_bool = 1;
				}
			}
			if(var_160_bool != 0) {
				var_169_string = "";
				func_192(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)511849);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)536115, (int)13064, (int)37870);
				@@@var_0_object:AddReply((int)511850, (int)13064, (int)13063);
				return 0;
			}
		}
		var_178_bool = var_5_int == (int)13064;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_192(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)511851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511852, (int)-1, (int)13065);
			return 0;
		}
		var_185_bool = var_5_int == (int)37857;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_192(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)536104);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536105, (int)13058, (int)37858);
			return 0;
		}
		var_192_bool = var_5_int == (int)13058;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_192(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)511845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536106, (int)37861, (int)37860);
			return 0;
		}
		var_199_bool = var_5_int == (int)37861;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_192(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)536107);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536108, (int)37863, (int)37862);
			@@@var_0_object:AddReply((int)536114, (int)37863, (int)37868);
			return 0;
		}
		var_209_bool = var_5_int == (int)37863;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_192(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)536109);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536110, (int)37865, (int)37864);
			return 0;
		}
		var_216_bool = var_5_int == (int)37865;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_192(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)536111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536112, (int)37867, (int)37866);
			return 0;
		}
		var_223_bool = var_5_int == (int)37867;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_192(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)536113);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511846, (int)-1, (int)13059);
			return 0;
		}
		var_3_string = true;
		var_229_bool = 0;
		func_1048(var_229_bool);
		if(var_229_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd7";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	func_583();
	var_6_int = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	TaskCall(0);
	func_0(var_8_object, var_6_int, var_7_object);
	TaskReturn();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_483:
	Sleep((int)3);
	func_502();
	goto Label_483;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0;
	var_7_object = var_18_object;
	func_593(var_17_bool, var_18_object, (float)130.0);
	var_64_bool = var_17_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_65_int = 0;
	func_1042(var_65_int);
	@@var_13_object:SetNPCName(var_65_int);
	var_66_int = 0;
	func_1040(var_66_int);
	@@var_13_object:SetNPCDescription(var_66_int);
	var_67_string = "";
	func_1044(var_67_string);
	@@var_13_object:SetPhoto(var_67_string);
	var_68_string = "";
	func_1046(var_68_string);
	@@var_13_object:SetPhoto2(var_68_string);
	var_69_int = 0;
	func_1023(var_69_int);
	@@var_13_object:SetPlayerName(var_69_int);
	IsOverrideActive(var_14_bool);
	var_77_bool = var_14_bool;
	if(var_77_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	DoDialog(var_13_object);
	var_78_object = Obj(); var_79_object = Obj();
	var_7_object = var_78_object;
	var_13_object = var_79_object;
	TaskCall(1);
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	@@var_13_object:IsDialogEnd(var_16_bool);
	
Label_56:
	var_164_bool = var_16_bool == 0; //@nz
	if(var_164_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_56;
	}
	var_7_object = Obj();
	func_662();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_903(var_85_bool)
{
	var_87_int = 0; var_88_string = "";
	func_728(var_87_int, "ood4BirdmaskHome1");
	var_92_bool = var_87_int == (int)0;
	if(var_92_bool != 0) {
		var_85_bool = 1;
		return 0;
	}
	var_85_bool = 0;
	return 0;
}


func_777(var_40_bool, var_41_string, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj();
	FindActor(var_44_object, var_41_string);
	var_45_bool = var_44_object == 0; //@ne
	if(var_45_bool != 0) {
		var_40_bool = 0;
		return 2;
	}
	Trigger(var_44_object, var_42_string);
	var_40_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1040(var_66_int)
{
	var_66_int = 515571;
	return 0;
}


func_1042(var_65_int)
{
	var_65_int = 504029;
	return 0;
}


func_915(var_148_bool)
{
	var_150_int = 0; var_151_string = "";
	func_728(var_150_int, "ood4BirdmaskHome2");
	var_153_bool = var_150_int == (int)0;
	if(var_153_bool != 0) {
		var_148_bool = 1;
		return 0;
	}
	var_148_bool = 0;
	return 0;
}


func_1044(var_67_string)
{
	var_67_string = "ui/NPC_bmask.png";
	return 0;
}


func_789(var_30_string, var_31_int)
{
	var_32_string = ""; var_33_string = "";
	var_34_int = var_31_int;
	if(var_34_int != 0) {
		"idle" = "idle" + var_31_int;
	}
	var_33_string = var_30_string;
	return 2;
}


func_1046(var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_662()
{
	var_166_bool = 0; var_167_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_169_bool = 0;
	func_1048(var_169_bool);
	if(var_169_bool != 0) {
	} else {
		HasAnimationTrack(var_167_bool, "head");
		var_171_bool = var_167_bool;
		if(var_171_bool == 0) goto Label_679;
		UnlookAsync("head");
	}
Label_679:
	return 2;
	
}


func_1048(var_60_bool)
{
	var_60_bool = 0;
	return 0;
}


func_796(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_27_int = 0;
	
Label_798:
	var_30_string = ""; var_31_int = 0;
	var_27_int = var_31_int;
	func_789(var_30_string, var_31_int);
	HasAnimation(var_28_bool, "all", var_30_string);
	var_35_bool = var_28_bool == 0; //@nz
	if(var_35_bool != 0) {
	} else {
		var_27_int = var_27_int + (int)1;
		goto Label_798;
	}
	var_27_int = var_24_int;
	return 4;
	
}


func_927(var_135_bool)
{
	var_137_int = 0; var_138_string = "";
	func_728(var_137_int, "d4q02_survived");
	var_140_bool = var_137_int == (int)1;
	if(var_140_bool != 0) {
		var_135_bool = 1;
		return 0;
	}
	var_135_bool = 0;
	return 0;
}


func_680(var_119_string)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0;
	lshHasAnimation(var_123_bool, var_119_string);
	var_126_bool = var_123_bool;
	if(var_126_bool != 0) {
		lshGetAnimTimes(var_119_string, var_124_float, var_125_float);
		lshPlayAnimation(var_124_float, var_125_float, (bool)0);
	} else {
		var_129_int = "Can't find lsh animation : " + var_119_string;
		Trace(var_129_int);
	}
	return 6;
	
}


func_939()
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateDiaryEntry(var_18_object, (int)138, (int)2, (int)515329);
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0;
	var_18_object = var_23_object;
	func_978(var_22_bool, var_23_object, (int)21);
	return 2;
}
EMIT "Stack[-1] = 0";


func_813()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_819(var_52_object)
{
	Trace("powder is given");
	var_55_object = Obj(); var_56_string = ""; var_57_int = 0;
	var_52_object = var_55_object;
	func_764(var_55_object, "powder", (int)1);
	return 0;
}


func_696(var_97_string, var_98_bool)
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


func_952()
{
	var_103_object = Obj(); var_104_object = Obj();
	CreateDiaryEntry(var_104_object, (int)94, (int)2, (int)512176);
	var_108_bool = 0; var_109_object = Obj(); var_110_int = 0;
	var_104_object = var_109_object;
	func_978(var_108_bool, var_109_object, (int)21);
	return 2;
}
EMIT "Stack[-1] = 0";


func_830()
{
	SetVariable("ood4BirdmaskHome1", (int)1);
	return 0;
}


func_192(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_1048(var_94_bool);
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
	func_696(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	return 0;
	
}


func_836()
{
	SetVariable("ood4BirdmaskHome2", (int)1);
	return 0;
}


func_581(var_49_bool)
{
	var_49_bool = 1;
	return 0;
}


func_965(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	GetDiaryRoot(var_33_object);
	var_34_bool = var_33_object == 0; //@nz
	if(var_34_bool != 0) {
		Trace("Can't retrieve diary root");
		var_31_object = 0;
		return 2;
	}
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_711()
{
	var_8_bool = 0;
	func_1048(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_583()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_85_bool = 0; var_86_object = Obj();
		var_86_object = var_1_object;
		func_903(var_86_object);
		if(var_85_bool != 0) {
			var_93_string = "";
			func_192(var_79_object, "Neutral");
			@@@var_0_object:SetMessage((int)511843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511844, (int)13058, (int)13057);
			@@@var_0_object:AddReply((int)536103, (int)37857, (int)37856);
		} else {
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_927(var_136_object);
				var_141_bool = var_135_bool == 0; //@nz
				if(var_141_bool != 0) {
					var_142_string = "";
					func_192(var_79_object, "Neutral");
					@@@var_0_object:SetMessage((int)511847);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)511848, (int)-1, (int)13061);
					goto Label_162;
				}
				var_147_bool = 0;
				var_147_bool = 0;
				var_148_bool = 0; var_149_object = Obj();
				var_149_object = var_1_object;
				func_915(var_149_object);
				if(var_148_bool != 0) {
					var_154_bool = 0; var_155_object = Obj();
					var_155_object = var_1_object;
					func_927(var_155_object);
					if(var_154_bool != 0) {
						var_147_bool = 1;
					}
				}
				if(var_147_bool != 0) {
					var_156_string = "";
					func_192(var_79_object, "Neutral");
					@@@var_0_object:SetMessage((int)511849);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)536115, (int)13064, (int)37870);
					@@@var_0_object:AddReply((int)511850, (int)13064, (int)13063);
					goto Label_162;
				}
				return 0;
		}
	}
Label_162:
	var_117_bool = 0;
	func_1048(var_117_bool);
	if(var_117_bool != 0) {

	Label_166:
		lshWaitForAnimEnd();
		var_118_string = var_3_string;
		if(var_118_string != 0) {
		} else {
			var_119_string = "";
			var_119_string = var_2_object;
			func_680(var_119_string);
			goto Label_166;
	}
		PlayAnimation("all", "idle");

	Label_181:
		WaitForAnimEnd();
		var_132_string = var_3_string;
		if(var_132_string != 0) {
			goto Label_191;
		}
		PlayAnimation("all", "idle");
		goto Label_181;

	}
	goto Label_191;
	
Label_191:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_842()
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_object = Obj(); var_85_object = Obj();
	func_1006(Obj());
	var_86_object = var_84_object;
	@@var_84_object:FindMark(var_85_object, "d4q02BirdmaskNearHome");
	var_94_object = var_85_object;
	if(var_94_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d4q02MladVladGotoAJLSelf");
	var_96_object = var_85_object;
	if(var_96_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d4q02MladVladGotoAnna");
	var_98_object = var_85_object;
	if(var_98_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d4q02MladVladGotoJulia");
	var_100_object = var_85_object;
	if(var_100_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d4q02MladVladGotoLara");
	var_102_object = var_85_object;
	if(var_102_object != 0) {
		@@var_85_object:Remove();
	}
	func_952();
	var_111_bool = 0; var_112_string = ""; var_113_string = "";
	func_777(var_111_bool, "quest_d4_02", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_588(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0;
	IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
	return 2;
}


func_718(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0;
	var_49_int = var_45_cvector | var_45_cvector;
	var_48_float = sqrt(var_49_int);
	var_50_float = 9.999999974752427e-07;
	var_51_bool = var_48_float < var_50_float;
	if(var_51_bool != 0) {
		var_44_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_44_cvector = var_45_cvector / var_48_float;
	return 2;
}


func_593(var_17_bool, var_18_object, var_19_float)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0;
	@@var_18_object:GetPosition(var_30_cvector);
	@@var_18_object:GetEyesHeight(var_29_float);
	var_38_float = GetByIndex(var_30_cvector, 1);
	var_38_float = var_38_float + var_29_float;
	SetByIndex(var_30_cvector, 1) = var_38_float;
	GetPosition(var_31_cvector);
	GetEyesHeight(var_29_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_29_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	var_32_cvector = var_30_cvector - var_31_cvector;
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (float)0;
	var_41_int = var_32_cvector | var_32_cvector;
	var_42_float = sqrt(var_41_int);
	var_32_cvector = var_32_cvector / var_42_float;
	var_33_cvector = -var_32_cvector;
	var_43_float = var_32_cvector * var_19_float;
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_45_cvector = var_33_cvector ^ CVector(0.0, 1.0, 0.0);
	func_718(var_44_cvector, var_45_cvector);
	var_53_float = var_44_cvector * (int)25;
	var_54_int = var_43_float + var_53_float;
	var_34_cvector = var_54_int - CVector(0.0, 10.0, 0.0);
	var_35_cvector = var_31_cvector + var_34_cvector;
	IsOverrideActive(var_36_bool);
	var_56_bool = var_36_bool;
	if(var_56_bool != 0) {
		var_17_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_35_cvector, var_33_cvector, (bool)1);
	var_58_float = GetByIndex(var_34_cvector, 0);
	var_59_float = GetByIndex(var_34_cvector, 2);
	Rotate(var_58_float, var_59_float);
	var_60_bool = 0;
	func_1048(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		HasAnimationTrack(var_37_bool, "head");
		var_62_bool = var_37_bool;
		if(var_62_bool == 0) goto Label_656;
		LookAsyncCamera("head");
	}
Label_656:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_17_bool = 1;
	return 18;
	
}


func_978(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_965(Obj());
	var_31_object = var_28_object;
	@@var_28_object:Find(var_24_int, var_29_object);
	var_36_bool = var_29_object == 0; //@nz
	if(var_36_bool != 0) {
		var_38_int = "Can't find diary parent with id: " + var_24_int;
		Trace(var_38_int);
		var_22_bool = 0;
		return 6;
	}
	@@var_29_object:AddChild(var_23_object);
	SendWorldWndMessage((int)7);
	@@var_23_object:GetCategory(var_30_int);
	SetDiarySection(var_30_int);
	var_22_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_728(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
	return 2;
}


func_733(var_71_int, var_72_int)
{
	var_73_object = Obj(); var_74_object = Obj();
	CreateIntVector(var_74_object);
	@@var_74_object:add(var_71_int);
	@@var_74_object:add(var_72_int);
	SendWorldWndMessage((int)3, var_74_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_745(var_60_object, var_61_object, var_62_int)
{
	var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_int = 0; var_68_bool = 0;
	@@var_61_object:GetItemID(var_66_int);
	GetInvItemProperty(var_67_int, var_66_int, "Category");
	@@var_60_object:AddItem(var_68_bool, var_61_object, var_67_int, var_62_int);
	var_70_bool = var_68_bool == 0; //@nz
	if(var_70_bool != 0) {
		@@var_60_object:DropItems(var_61_object, var_62_int);
	} else {
		var_71_int = 0; var_72_int = 0;
		var_66_int = var_71_int;
		var_62_int = var_72_int;
		func_733(var_71_int, var_72_int);
	}
	return 6;
	
}


func_1006(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj(); var_90_object = Obj();
	GetMainOutdoorScene(var_89_object);
	var_91_bool = var_89_object == 0; //@ne
	if(var_91_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_90_object = 0;
		var_90_object = var_86_object;
		return 4;
	}
	@@var_89_object:GetMap(var_90_object);
	var_90_object = var_86_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_502()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0;
	WaitForAnimEnd();
	var_20_bool = 0;
	func_588(var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		return 14;
	}
	func_796((int)0);
	var_24_int = var_13_int;
	var_14_int = 0;
	
Label_516:
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_14_int < (int)5;
	if(var_39_bool != 0) {
		var_40_bool = 0;
		func_588(var_40_bool);
		if(var_40_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		irand(var_15_int, (int)3);
		var_43_bool = var_15_int == (int)0;
		if(var_43_bool != 0) {
			var_44_int = var_13_int;
			if(var_44_int == 0) goto Label_549;
			irand(var_16_int, var_13_int);
			var_46_string = ""; var_47_int = 0;
			var_16_int = var_47_int;
			func_789(var_46_string, var_47_int);
			PlayAnimation("all", var_46_string);
			WaitForAnimEnd(var_17_bool);
			var_48_bool = var_17_bool == 0; //@nz
			if(var_48_bool != 0) {
			} else {
		} else {
				var_53_bool = var_15_int == (int)1;
				if(var_53_bool != 0) {
					rand(var_18_float, (int)4);
					var_56_int = var_18_float + (int)1;
					Sleep(var_56_int, var_19_bool);
					var_57_bool = var_19_bool == 0; //@nz
					if(var_57_bool != 0) {
						goto Label_578;
					}
					goto Label_567;
				}
				var_58_int = var_14_int;
				if(var_58_int == 0) goto Label_567;
				goto Label_578;
		}
		Label_567:
			var_49_bool = 0;
			func_581(var_49_bool);
			var_50_bool = var_49_bool == 0; //@nz
			if(var_50_bool != 0) {
				goto Label_578;
			}
			ResetAAS();
			var_14_int = var_14_int + (int)1;
			goto Label_516;

		}
	}
Label_578:
	ResetAAS();
	return 14;
	
}


func_764(var_55_object, var_56_string, var_57_int)
{
	var_58_object = Obj(); var_59_object = Obj();
	CreateInvItem(var_59_object);
	@@var_59_object:SetItemName(var_56_string);
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0;
	var_55_object = var_60_object;
	var_59_object = var_61_object;
	var_57_int = var_62_int;
	func_745(var_60_object, var_61_object, var_62_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_893()
{
	func_939();
	var_40_bool = 0; var_41_string = ""; var_42_string = "";
	func_777(var_40_bool, "quest_d4_02", "birdmask_talk");
	return 0;
}


func_1023(var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("branch", var_71_int);
	var_74_bool = var_71_int == (int)0;
	if(var_74_bool != 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x40e";
	}
	var_76_bool = var_71_int == (int)1;
	if(var_76_bool != 0) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
	return 2;
}


