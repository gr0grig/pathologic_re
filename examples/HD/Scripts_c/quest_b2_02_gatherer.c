// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,HasAnimation/3,SetVariable/2,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Morlok.png|W:ui/NPC_Morlok_b.png|W:oob2Gatherer1|W:b2q02|W:quest_b2_02|W:completed|W:oob2Gatherer2|W:playsound|W:giveitem|W:recipe9 is given|W:recipe9|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x22c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd5 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x235 vars=object
// @EVENT_7: op=0x26a vars=int
// @PE: 0x4a,0xbf,0xd5,0x235,0x240,0x26a,0x281,0x3e3,0x3e9,0x3f5,0x3ff,0x405,0x40b,0x416,0x422,0x42e,0x43a,0x446

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_883();
		var_15_bool = var_11_object == (int)29111;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1001();
		}
		var_52_bool = var_11_object == (int)29116;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_1001();
		}
		var_56_bool = var_11_object == (int)29125;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_1013();
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_1035(var_74_object);
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_1029();
		}
		var_102_bool = var_11_object == (int)29126;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_1023();
		}
		var_108_bool = var_10_bool == (int)29110;
		if(var_108_bool != 0) {
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_1046(var_110_object);
			if(var_109_bool != 0) {
				var_117_object = Obj(); var_118_object = Obj();
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_995();
				var_121_string = "";
				func_191(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)527753);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527848, (int)29192, (int)29191);
				return 0;
			}
			var_142_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527756);
			@@@var_0_object:ClearReplies();
			var_144_bool = 0; var_145_object = Obj();
			var_145_object = var_1_object;
			func_1058(var_145_object);
			if(var_144_bool != 0) {
				@@@var_0_object:AddReply((int)527757, (int)29115, (int)29114);
			}
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_1070(var_154_object);
			if(var_153_bool != 0) {
				@@@var_0_object:AddReply((int)527766, (int)29124, (int)29123);
			}
			var_162_bool = 0;
			var_162_bool = 0;
			var_163_bool = 0; var_164_object = Obj();
			var_164_object = var_1_object;
			func_1082(var_164_object);
			if(var_163_bool != 0) {
				var_169_bool = 0; var_170_object = Obj();
				var_170_object = var_1_object;
				func_1094(var_170_object);
				if(var_169_bool != 0) {
					var_162_bool = 1;
				}
			}
			if(var_162_bool != 0) {
				@@@var_0_object:AddReply((int)527769, (int)29127, (int)29126);
			}
			@@@var_0_object:AddReply((int)527760, (int)-1, (int)29117);
			return 0;
		}
		var_182_bool = var_10_bool == (int)29127;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527770);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527771, (int)29188, (int)29128);
			@@@var_0_object:AddReply((int)527844, (int)-1, (int)29187);
			return 0;
		}
		var_192_bool = var_10_bool == (int)29188;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527846, (int)-1, (int)29189);
			@@@var_0_object:AddReply((int)527847, (int)-1, (int)29190);
			return 0;
		}
		var_202_bool = var_10_bool == (int)29124;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527842, (int)29186, (int)29185);
			return 0;
		}
		var_209_bool = var_10_bool == (int)29186;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527768, (int)-1, (int)29125);
			return 0;
		}
		var_216_bool = var_10_bool == (int)29115;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527758);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527840, (int)29184, (int)29183);
			return 0;
		}
		var_223_bool = var_10_bool == (int)29184;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527841);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527759, (int)-1, (int)29116);
			return 0;
		}
		var_230_bool = var_10_bool == (int)29192;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527849);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527850, (int)29195, (int)29193);
			return 0;
		}
		var_237_bool = var_10_bool == (int)29195;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527852);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527853, (int)29194, (int)29196);
			@@@var_0_object:AddReply((int)527854, (int)-1, (int)29197);
			return 0;
		}
		var_247_bool = var_10_bool == (int)29194;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527855, (int)29199, (int)29198);
			return 0;
		}
		var_254_bool = var_10_bool == (int)29199;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_191(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527856);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527754, (int)-1, (int)29111);
			@@@var_0_object:AddReply((int)527755, (int)-1, (int)29112);
			return 0;
		}
		var_3_string = true;
		var_263_bool = 0;
		func_993(var_263_bool);
		if(var_263_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd6";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_641(var_9_object, var_10_object);
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
		func_603(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_872(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_640;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_640:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_556:
	if((bool)1 != 0) {
		var_11_float = 0; var_12_float = 0;
		func_576(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		goto Label_556;
	}
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_754(var_25_bool, var_26_object, (float)110.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_987(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_985(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_989(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_991(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_1186(var_77_int);
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
	var_183_bool = var_24_bool == 0; //@nz
	if(var_183_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_823();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_641(var_2_object, var_3_string)
{
	func_736();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_900(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
	return 2;
}


func_1029()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1158(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_1145(Obj());
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


func_905(var_92_int, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj();
	CreateIntVector(var_95_object);
	@@var_95_object:add(var_92_int);
	@@var_95_object:add(var_93_int);
	SendWorldWndMessage((int)3, var_95_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1035(var_73_object)
{
	Trace("recipe9 is given");
	var_76_object = Obj(); var_77_string = ""; var_78_int = 0;
	var_73_object = var_76_object;
	func_936(var_76_object, "recipe9", (int)1);
	return 0;
}


func_655()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_749(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_968((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_669:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_749(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_702;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_961(var_58_string, var_59_int);
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
						goto Label_731;
					}
					goto Label_720;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_720;
				goto Label_731;
		}
		Label_720:
			var_61_bool = 0;
			func_734(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_731;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_669;

		}
	}
Label_731:
	ResetAAS();
	return 14;
	
}


func_917(var_81_object, var_82_object, var_83_int)
{
	var_84_int = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_int = 0; var_89_bool = 0;
	@@var_82_object:GetItemID(var_87_int);
	GetInvItemProperty(var_88_int, var_87_int, "Category");
	@@var_81_object:AddItem(var_89_bool, var_82_object, var_88_int, var_83_int);
	var_91_bool = var_89_bool == 0; //@nz
	if(var_91_bool != 0) {
		@@var_81_object:DropItems(var_82_object, var_83_int);
	} else {
		var_92_int = 0; var_93_int = 0;
		var_87_int = var_92_int;
		var_83_int = var_93_int;
		func_905(var_92_int, var_93_int);
	}
	return 6;
	
}


func_1046(var_93_bool)
{
	var_95_int = 0; var_96_string = "";
	func_900(var_95_int, "oob2Gatherer1");
	var_100_bool = var_95_int == (int)0;
	if(var_100_bool != 0) {
		var_93_bool = 1;
		return 0;
	}
	var_93_bool = 0;
	return 0;
}


func_1186(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x4b1";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_1058(var_146_bool)
{
	var_148_int = 0; var_149_string = "";
	func_900(var_148_int, "b2q02");
	var_151_bool = var_148_int == (int)0;
	if(var_151_bool != 0) {
		var_146_bool = 1;
		return 0;
	}
	var_146_bool = 0;
	return 0;
}


func_936(var_76_object, var_77_string, var_78_int)
{
	var_79_object = Obj(); var_80_object = Obj();
	CreateInvItem(var_80_object);
	@@var_80_object:SetItemName(var_77_string);
	var_81_object = Obj(); var_82_object = Obj(); var_83_int = 0;
	var_76_object = var_81_object;
	var_80_object = var_82_object;
	var_78_int = var_83_int;
	func_917(var_81_object, var_82_object, var_83_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1070(var_155_bool)
{
	var_157_int = 0; var_158_string = "";
	func_900(var_157_int, "b2q02");
	var_160_bool = var_157_int == (int)2;
	if(var_160_bool != 0) {
		var_155_bool = 1;
		return 0;
	}
	var_155_bool = 0;
	return 0;
}


func_949(var_67_bool, var_68_string, var_69_string)
{
	var_70_object = Obj(); var_71_object = Obj();
	FindActor(var_71_object, var_68_string);
	var_72_bool = var_71_object == 0; //@ne
	if(var_72_bool != 0) {
		var_67_bool = 0;
		return 2;
	}
	Trigger(var_71_object, var_69_string);
	var_67_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_823()
{
	var_185_bool = 0; var_186_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_188_bool = 0;
	func_993(var_188_bool);
	if(var_188_bool != 0) {
	} else {
		HasAnimationTrack(var_186_bool, "head");
		var_190_bool = var_186_bool;
		if(var_190_bool == 0) goto Label_840;
		UnlookAsync("head");
	}
Label_840:
	return 2;
	
}


func_1082(var_165_bool)
{
	var_167_int = 0; var_168_string = "";
	func_900(var_167_int, "b2q02");
	var_170_bool = var_167_int == (int)-1;
	if(var_170_bool != 0) {
		var_165_bool = 1;
		return 0;
	}
	var_165_bool = 0;
	return 0;
}


func_191(var_2_object, var_105_string)
{
	var_106_bool = 0;
	func_993(var_106_bool);
	var_107_bool = var_106_bool == 0; //@nz
	if(var_107_bool != 0) {
		return 0;
	}
	var_108_bool = var_105_string == var_2_object;
	if(var_108_bool != 0) {
		return 0;
	}
	var_109_string = ""; var_110_bool = 0;
	var_105_string = var_109_string;
	var_112_bool = var_105_string == "";
	if(var_112_bool != 0) {
		var_110_bool = 0;
	} else {
		var_110_bool = 1;
	}
	func_857(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	return 0;
	
}


func_576(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_749(var_13_bool);
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
	func_655();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_961(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_1094(var_171_bool)
{
	var_173_int = 0; var_174_string = "";
	func_900(var_173_int, "oob2Gatherer2");
	var_176_bool = var_173_int == (int)0;
	if(var_176_bool != 0) {
		var_171_bool = 1;
		return 0;
	}
	var_171_bool = 0;
	return 0;
}


func_968(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_970:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_961(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_970;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_841(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0;
	lshHasAnimation(var_132_bool, var_128_string);
	var_135_bool = var_132_bool;
	if(var_135_bool != 0) {
		lshGetAnimTimes(var_128_string, var_133_float, var_134_float);
		lshPlayAnimation(var_133_float, var_134_float, (bool)0);
	} else {
		var_138_int = "Can't find lsh animation : " + var_128_string;
		Trace(var_138_int);
	}
	return 6;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0; var_94_object = Obj();
		var_94_object = var_1_object;
		func_1046(var_94_object);
		if(var_93_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_995();
			var_105_string = "";
			func_191(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)527753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527848, (int)29192, (int)29191);
		} else {
				var_144_string = "";
				func_191(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)527756);
				@@@var_0_object:ClearReplies();
				var_146_bool = 0; var_147_object = Obj();
				var_147_object = var_1_object;
				func_1058(var_147_object);
				if(var_146_bool != 0) {
					@@@var_0_object:AddReply((int)527757, (int)29115, (int)29114);
				}
				var_155_bool = 0; var_156_object = Obj();
				var_156_object = var_1_object;
				func_1070(var_156_object);
				if(var_155_bool != 0) {
					@@@var_0_object:AddReply((int)527766, (int)29124, (int)29123);
				}
				var_164_bool = 0;
				var_164_bool = 0;
				var_165_bool = 0; var_166_object = Obj();
				var_166_object = var_1_object;
				func_1082(var_166_object);
				if(var_165_bool != 0) {
					var_171_bool = 0; var_172_object = Obj();
					var_172_object = var_1_object;
					func_1094(var_172_object);
					if(var_171_bool != 0) {
						var_164_bool = 1;
					}
				}
				if(var_164_bool != 0) {
					@@@var_0_object:AddReply((int)527769, (int)29127, (int)29126);
				}
				@@@var_0_object:AddReply((int)527760, (int)-1, (int)29117);
				goto Label_161;
		}
	}
Label_161:
	var_126_bool = 0;
	func_993(var_126_bool);
	if(var_126_bool != 0) {

	Label_165:
		lshWaitForAnimEnd();
		var_127_string = var_3_string;
		if(var_127_string != 0) {
		} else {
			var_128_string = "";
			var_128_string = var_2_object;
			func_841(var_128_string);
			goto Label_165;
	}
		PlayAnimation("all", "idle");

	Label_180:
		WaitForAnimEnd();
		var_141_string = var_3_string;
		if(var_141_string != 0) {
			goto Label_190;
		}
		PlayAnimation("all", "idle");
		goto Label_180;

	}
	goto Label_190;
	
Label_190:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_1106()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)456, (int)2, (int)527772);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_1158(var_25_bool, var_26_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_857(var_109_string, var_110_bool)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0;
	lshHasAnimation(var_116_bool, var_109_string);
	var_119_bool = var_116_bool;
	if(var_119_bool != 0) {
		lshGetAnimTimes(var_109_string, var_117_float, var_118_float);
		lshPlayAnimation(var_117_float, var_118_float, var_110_bool);
	} else {
		var_121_int = "Can't find lsh animation : " + var_109_string;
		Trace(var_121_int);
	}
	return 6;
	
}


func_985(var_74_int)
{
	var_74_int = 521048;
	return 0;
}


func_987(var_73_int)
{
	var_73_int = 521047;
	return 0;
}


func_603(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_741(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_989(var_75_string)
{
	var_75_string = "ui/NPC_Morlok.png";
	return 0;
}


func_734(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_991(var_76_string)
{
	var_76_string = "ui/NPC_Morlok_b.png";
	return 0;
}


func_736()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_993(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_1119()
{
	var_43_object = Obj(); var_44_object = Obj();
	CreateDiaryEntry(var_44_object, (int)457, (int)2, (int)527773);
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0;
	var_44_object = var_49_object;
	func_1158(var_48_bool, var_49_object, (int)456);
	return 2;
}
EMIT "Stack[-1] = 0";


func_995()
{
	SetVariable("oob2Gatherer1", (int)1);
	return 0;
}


func_741(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_872(var_27_object)
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


func_1001()
{
	SetVariable("b2q02", (int)1);
	func_1106();
	func_1119();
	return 0;
}


func_1132()
{
	var_59_object = Obj(); var_60_object = Obj();
	CreateDiaryEntry(var_60_object, (int)459, (int)2, (int)527775);
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0;
	var_60_object = var_65_object;
	func_1158(var_64_bool, var_65_object, (int)456);
	return 2;
}
EMIT "Stack[-1] = 0";


func_749(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_754(var_25_bool, var_26_object, var_27_float)
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
	func_890(var_52_cvector, var_53_cvector);
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
	func_993(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_817;
		LookAsyncCamera("head");
	}
Label_817:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_883()
{
	var_13_bool = 0;
	func_993(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1013()
{
	func_1132();
	var_67_bool = 0; var_68_string = ""; var_69_string = "";
	func_949(var_67_bool, "quest_b2_02", "completed");
	return 0;
}


func_1145(var_34_object)
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


func_890(var_52_cvector, var_53_cvector)
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


func_1023()
{
	SetVariable("oob2Gatherer2", (int)1);
	return 0;
}


