// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetInvItemByName/2,HasAnimation/3,SetVariable/2,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|W:ui/NPC_Morlok.png|W:ui/NPC_Morlok_b.png|W:k7q02|W:white plet 10 is given|W:grass_white_plet|W:playsound|W:giveitem|W:Samopal|A:RemoveItemByType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x12a
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xad vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x134 vars=object
// @EVENT_7: op=0x169 vars=int
// @PE: 0x4a,0x97,0xad,0x134,0x13f,0x169,0x180,0x2dd,0x2e6,0x2f1,0x2fd,0x309

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_626();
		var_15_bool = var_11_object == (int)27648;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_733();
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_742(var_44_object);
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_753();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_759(var_72_object);
		}
		var_78_bool = var_10_bool == (int)27645;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_151(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526360);
			@@@var_0_object:ClearReplies();
			var_97_bool = 0;
			var_97_bool = 0;
			var_98_bool = 0; var_99_object = Obj();
			var_99_object = var_1_object;
			func_765(var_99_object);
			if(var_98_bool != 0) {
				var_106_bool = 0; var_107_object = Obj();
				var_107_object = var_1_object;
				func_777(var_106_bool, var_107_object);
				if(var_106_bool != 0) {
					var_97_bool = 1;
				}
			}
			if(var_97_bool != 0) {
				@@@var_0_object:AddReply((int)526361, (int)30084, (int)27646);
			}
			@@@var_0_object:AddReply((int)526364, (int)-1, (int)27649);
			@@@var_0_object:AddReply((int)528671, (int)-1, (int)30083);
			return 0;
		}
		var_125_bool = var_10_bool == (int)30084;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_151(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)528672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528673, (int)27647, (int)30085);
			@@@var_0_object:AddReply((int)528674, (int)27647, (int)30086);
			return 0;
		}
		var_135_bool = var_10_bool == (int)27647;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_151(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526363, (int)-1, (int)27648);
			return 0;
		}
		var_3_string = true;
		var_141_bool = 0;
		func_707(var_141_bool);
		if(var_141_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xae";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_384(var_9_object, var_10_object);
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
		func_346(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_615(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_383;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_383:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_298:
	var_10_float = 0; var_11_float = 0;
	func_319(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_298;
}
EMIT "Return(); Pop(0)";


func_384(var_2_object, var_3_string)
{
	func_479();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_497(var_25_bool, var_26_object, (float)110.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_701(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_699(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_703(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_705(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_842(var_77_int);
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
	var_156_bool = var_24_bool == 0; //@nz
	if(var_156_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_566();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_643(var_114_int, var_115_string)
{
	var_116_int = 0; var_117_int = 0;
	GetVariable(var_115_string, var_117_int);
	var_117_int = var_114_int;
	return 2;
}


func_648(var_62_int, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj();
	CreateIntVector(var_65_object);
	@@var_65_object:add(var_62_int);
	@@var_65_object:add(var_63_int);
	SendWorldWndMessage((int)3, var_65_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_777(var_120_bool, var_121_object)
{
	var_122_bool = 0; var_123_object = Obj(); var_124_string = "";
	var_121_object = var_123_object;
	func_692(var_122_bool, var_123_object, "Samopal");
	if(var_122_bool != 0) {
		var_120_bool = 1;
		return 0;
	}
	var_120_bool = 0;
	return 0;
}


func_398()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_492(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 14;
	}
	func_716((int)0);
	var_35_int = var_26_int;
	var_27_int = 0;
	
Label_412:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_27_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_492(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		irand(var_28_int, (int)3);
		var_54_bool = var_28_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = var_26_int;
			if(var_55_int == 0) goto Label_445;
			irand(var_29_int, var_26_int);
			var_57_string = ""; var_58_int = 0;
			var_29_int = var_58_int;
			func_709(var_57_string, var_58_int);
			PlayAnimation("all", var_57_string);
			WaitForAnimEnd(var_30_bool);
			var_59_bool = var_30_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
		} else {
				var_64_bool = var_28_int == (int)1;
				if(var_64_bool != 0) {
					rand(var_31_float, (int)4);
					var_67_int = var_31_float + (int)1;
					Sleep(var_67_int, var_32_bool);
					var_68_bool = var_32_bool == 0; //@nz
					if(var_68_bool != 0) {
						goto Label_474;
					}
					goto Label_463;
				}
				var_69_int = var_27_int;
				if(var_69_int == 0) goto Label_463;
				goto Label_474;
		}
		Label_463:
			var_60_bool = 0;
			func_477(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_474;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_412;

		}
	}
Label_474:
	ResetAAS();
	return 14;
	
}


func_660(var_51_object, var_52_object, var_53_int)
{
	var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0;
	@@var_52_object:GetItemID(var_57_int);
	GetInvItemProperty(var_58_int, var_57_int, "Category");
	@@var_51_object:AddItem(var_59_bool, var_52_object, var_58_int, var_53_int);
	var_61_bool = var_59_bool == 0; //@nz
	if(var_61_bool != 0) {
		@@var_51_object:DropItems(var_52_object, var_53_int);
	} else {
		var_62_int = 0; var_63_int = 0;
		var_57_int = var_62_int;
		var_53_int = var_63_int;
		func_648(var_62_int, var_63_int);
	}
	return 6;
	
}


func_788()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)432, (int)2, (int)526370);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_814(var_25_bool, var_26_object, (int)430);
	return 2;
}
EMIT "Stack[-1] = 0";


func_151(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_707(var_94_bool);
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
	func_600(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	return 0;
	
}


func_801(var_34_object)
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


func_679(var_46_object, var_47_string, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj();
	CreateInvItem(var_50_object);
	@@var_50_object:SetItemName(var_47_string);
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0;
	var_46_object = var_51_object;
	var_50_object = var_52_object;
	var_48_int = var_53_int;
	func_660(var_51_object, var_52_object, var_53_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_814(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_801(Obj());
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


func_692(var_122_bool, var_123_object, var_124_string)
{
	var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_bool = 0;
	GetInvItemByName(var_127_int, var_124_string);
	@@var_123_object:HasItem(var_127_int, var_128_bool);
	var_128_bool = var_122_bool;
	return 4;
}


func_566()
{
	var_158_bool = 0; var_159_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_161_bool = 0;
	func_707(var_161_bool);
	if(var_161_bool != 0) {
	} else {
		HasAnimationTrack(var_159_bool, "head");
		var_163_bool = var_159_bool;
		if(var_163_bool == 0) goto Label_583;
		UnlookAsync("head");
	}
Label_583:
	return 2;
	
}


func_699(var_74_int)
{
	var_74_int = 521048;
	return 0;
}


func_701(var_73_int)
{
	var_73_int = 521047;
	return 0;
}


func_319(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_10_float, var_11_float)
{
	var_12_bool = 0;
	func_492(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	SetTimer((int)10, (float)1.0);
	func_398();
	var_70_bool = var_3_string == 0; //@nz
	if(var_70_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_703(var_75_string)
{
	var_75_string = "ui/NPC_Morlok.png";
	return 0;
}


func_705(var_76_string)
{
	var_76_string = "ui/NPC_Morlok_b.png";
	return 0;
}


func_707(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_709(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_584(var_140_string)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0;
	lshHasAnimation(var_144_bool, var_140_string);
	var_147_bool = var_144_bool;
	if(var_147_bool != 0) {
		lshGetAnimTimes(var_140_string, var_145_float, var_146_float);
		lshPlayAnimation(var_145_float, var_146_float, (bool)0);
	} else {
		var_150_int = "Can't find lsh animation : " + var_140_string;
		Trace(var_150_int);
	}
	return 6;
	
}


func_842(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x359";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_string = "";
		func_151(var_87_object, "Neutral");
		@@@var_0_object:SetMessage((int)526360);
		@@@var_0_object:ClearReplies();
		var_111_bool = 0;
		var_111_bool = 0;
		var_112_bool = 0; var_113_object = Obj();
		var_113_object = var_1_object;
		func_765(var_113_object);
		if(var_112_bool != 0) {
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_777(var_120_bool, var_121_object);
			if(var_120_bool != 0) {
				var_111_bool = 1;
			}
		}
		if(var_111_bool != 0) {
			@@@var_0_object:AddReply((int)526361, (int)30084, (int)27646);
		}
		@@@var_0_object:AddReply((int)526364, (int)-1, (int)27649);
		@@@var_0_object:AddReply((int)528671, (int)-1, (int)30083);
		goto Label_121;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_121:
	var_138_bool = 0;
	func_707(var_138_bool);
	if(var_138_bool != 0) {

	Label_125:
		lshWaitForAnimEnd();
		var_139_string = var_3_string;
		if(var_139_string != 0) {
		} else {
			var_140_string = "";
			var_140_string = var_2_object;
			func_584(var_140_string);
			goto Label_125;
	}
		PlayAnimation("all", "idle");

	Label_140:
		WaitForAnimEnd();
		var_153_string = var_3_string;
		if(var_153_string != 0) {
			goto Label_150;
		}
		PlayAnimation("all", "idle");
		goto Label_140;
	}
	goto Label_150;
	
Label_150:
	return 0;
	
}


func_716(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_718:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_709(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_718;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_600(var_97_string, var_98_bool)
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


func_346(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_484(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_733()
{
	SetVariable("k7q02", (int)2);
	func_788();
	return 0;
}


func_477(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_479()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_484(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_742(var_43_object)
{
	Trace("white plet 10 is given");
	var_46_object = Obj(); var_47_string = ""; var_48_int = 0;
	var_43_object = var_46_object;
	func_679(var_46_object, "grass_white_plet", (int)10);
	return 0;
}


func_615(var_27_object)
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


func_492(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_497(var_25_bool, var_26_object, var_27_float)
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
	func_633(var_52_cvector, var_53_cvector);
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
	func_707(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_560;
		LookAsyncCamera("head");
	}
Label_560:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_626()
{
	var_13_bool = 0;
	func_707(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_753()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_759(var_71_object)
{
	var_73_int = 0; var_74_int = 0;
	@@var_71_object:RemoveItemByType(var_74_int, "Samopal", (int)1);
	return 2;
}


func_633(var_52_cvector, var_53_cvector)
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


func_765(var_112_bool)
{
	var_114_int = 0; var_115_string = "";
	func_643(var_114_int, "k7q02");
	var_119_bool = var_114_int == (int)1;
	if(var_119_bool != 0) {
		var_112_bool = 1;
		return 0;
	}
	var_112_bool = 0;
	return 0;
}


