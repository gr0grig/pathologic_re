// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,GetGameTime/1,SetTimeEvent/2,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,HasAnimation/3,TriggerWorld/2,SetVariable/2,CreateInvItem/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:playsound|W:giveitem|W:oob1Worker2|W:oob1Worker3|W:Knife is given|W:Knife|A:SetItemName|W:durability|A:SetProperty|W:oob1Worker1|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1c3
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc2 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1d6 vars=object
// @EVENT_9: op=0x1e1 vars=int,float
// @EVENT_26: op=0x210 vars=string
// @EVENT_5: op=0x218 vars=
// @EVENT_6: op=0x21d vars=
// @PE: 0x4a,0xac,0xc2,0x1d6,0x1e1,0x210,0x35d,0x363,0x369,0x384,0x38a,0x396,0x3a2

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_768();
		var_11_bool = var_7_bool == (int)19069;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_861();
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_879(var_17_object);
		}
		var_41_bool = var_7_bool == (int)19071;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_867();
		}
		var_47_bool = var_7_bool == (int)20869;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_873();
		}
		var_53_bool = var_6_int == (int)19068;
		if(var_53_bool != 0) {
			var_54_bool = 0; var_55_object = Obj();
			var_55_object = var_1_object;
			func_930(var_55_object);
			if(var_54_bool != 0) {
				var_62_object = Obj(); var_63_object = Obj();
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_900();
				var_66_string = "";
				func_172(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)517930);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519691, (int)20850, (int)20849);
				return 0;
			}
			var_87_string = "";
			func_172(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517932);
			@@@var_0_object:ClearReplies();
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_906(var_90_object);
			if(var_89_bool != 0) {
				@@@var_0_object:AddReply((int)517933, (int)20861, (int)19071);
			}
			var_98_bool = 0; var_99_object = Obj();
			var_99_object = var_1_object;
			func_918(var_99_object);
			if(var_98_bool != 0) {
				@@@var_0_object:AddReply((int)519710, (int)20870, (int)20869);
			}
			@@@var_0_object:AddReply((int)519709, (int)-1, (int)20868);
			return 0;
		}
		var_111_bool = var_6_int == (int)20870;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_172(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519711);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519712, (int)-1, (int)20871);
			return 0;
		}
		var_118_bool = var_6_int == (int)20861;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_172(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519704, (int)20865, (int)20862);
			@@@var_0_object:AddReply((int)519705, (int)20865, (int)20863);
			return 0;
		}
		var_128_bool = var_6_int == (int)20865;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_172(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519708, (int)-1, (int)20866);
			return 0;
		}
		var_135_bool = var_6_int == (int)20850;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_172(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519692);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519693, (int)20852, (int)20851);
			@@@var_0_object:AddReply((int)517931, (int)-1, (int)19069);
			return 0;
		}
		var_145_bool = var_6_int == (int)20852;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_172(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519695, (int)20854, (int)20853);
			@@@var_0_object:AddReply((int)519697, (int)20856, (int)20855);
			return 0;
		}
		var_155_bool = var_6_int == (int)20856;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_172(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519702, (int)-1, (int)20860);
			return 0;
		}
		var_162_bool = var_6_int == (int)20854;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_172(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519700, (int)-1, (int)20858);
			@@@var_0_object:AddReply((int)519701, (int)-1, (int)20859);
			return 0;
		}
		var_3_string = true;
		var_171_bool = 0;
		func_859(var_171_bool);
		if(var_171_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc3";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_640();
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_9(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_int, var_7_float)
{
	var_8_string = "";
	var_8_string = "cleanup";
	func_528();
	return 0;
}


	task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_float, var_7_float, var_10_string)
	{
	var_11_string = "cleanup";
	var_12_bool = var_10_string == var_11_string;
	if(var_12_bool != 0) {
		func_508(var_10_string);
	}
	return 0;
	}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_557(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_775(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	GetGameTime(var_7_float);
	var_9_bool = var_7_float >= (int)24;
	if(var_9_bool != 0) {
		var_10_string = "";
		var_10_string = "cleanup";
		func_528();
	} else {
		SetTimeEvent((int)0, (int)24);
	}
	func_487();
	return 2;
	
}


func_768()
{
	var_9_bool = 0;
	func_859(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_650(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_853(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_851(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_855(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_857(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_942(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_object = Obj(); var_80_object = Obj();
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_56:
	var_160_bool = var_17_bool == 0; //@nz
	if(var_160_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_719();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_640()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_900()
{
	SetVariable("oob1Worker1", (int)1);
	return 0;
}


func_645(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_775(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj();
	self(var_20_object);
	var_20_object = var_18_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_650(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_781(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_859(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_713;
		LookAsyncCamera("head");
	}
Label_713:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_906(var_139_bool)
{
	var_141_int = 0; var_142_string = "";
	func_791(var_141_int, "oob1Worker2");
	var_144_bool = var_141_int == (int)0;
	if(var_144_bool != 0) {
		var_139_bool = 1;
		return 0;
	}
	var_139_bool = 0;
	return 0;
}


func_781(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_918(var_148_bool)
{
	var_150_int = 0; var_151_string = "";
	func_791(var_150_int, "oob1Worker3");
	var_153_bool = var_150_int == (int)0;
	if(var_153_bool != 0) {
		var_148_bool = 1;
		return 0;
	}
	var_148_bool = 0;
	return 0;
}


func_791(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_796(var_35_int, var_36_int)
{
	var_37_object = Obj(); var_38_object = Obj();
	CreateIntVector(var_38_object);
	@@var_38_object:add(var_35_int);
	@@var_38_object:add(var_36_int);
	SendWorldWndMessage((int)3, var_38_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_930(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_791(var_88_int, "oob1Worker1");
	var_93_bool = var_88_int == (int)0;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_808(var_24_object, var_25_object, var_26_int)
{
	var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0;
	@@var_25_object:GetItemID(var_30_int);
	GetInvItemProperty(var_31_int, var_30_int, "Category");
	@@var_24_object:AddItem(var_32_bool, var_25_object, var_31_int, var_26_int);
	var_34_bool = var_32_bool == 0; //@nz
	if(var_34_bool != 0) {
		@@var_24_object:DropItems(var_25_object, var_26_int);
	} else {
		var_35_int = 0; var_36_int = 0;
		var_30_int = var_35_int;
		var_26_int = var_36_int;
		func_796(var_35_int, var_36_int);
	}
	return 6;
	
}


func_172(var_2_object, var_98_string)
{
	var_99_bool = 0;
	func_859(var_99_bool);
	var_100_bool = var_99_bool == 0; //@nz
	if(var_100_bool != 0) {
		return 0;
	}
	var_101_bool = var_98_string == var_2_object;
	if(var_101_bool != 0) {
		return 0;
	}
	var_102_string = ""; var_103_bool = 0;
	var_98_string = var_102_string;
	var_105_bool = var_98_string == "";
	if(var_105_bool != 0) {
		var_103_bool = 0;
	} else {
		var_103_bool = 1;
	}
	func_753(var_102_string, var_103_bool);
	var_2_object = var_98_string;
	return 0;
	
}


func_557(var_17_bool)
{
	var_17_bool = 1;
	return 0;
}


func_942(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3bd";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_559()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_645(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_834((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_573:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_645(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_606;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_827(var_68_string, var_69_int);
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
						goto Label_635;
					}
					goto Label_624;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_624;
				goto Label_635;
		}
		Label_624:
			var_71_bool = 0;
			func_638(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_635;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_573;

		}
	}
Label_635:
	ResetAAS();
	return 14;
	
}


func_827(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_834(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_836:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_827(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_836;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_86_bool = 0; var_87_object = Obj();
		var_87_object = var_1_object;
		func_930(var_87_object);
		if(var_86_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_900();
			var_98_string = "";
			func_172(var_80_object, "Neutral");
			@@@var_0_object:SetMessage((int)517930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519691, (int)20850, (int)20849);
		} else {
				var_137_string = "";
				func_172(var_80_object, "Neutral");
				@@@var_0_object:SetMessage((int)517932);
				@@@var_0_object:ClearReplies();
				var_139_bool = 0; var_140_object = Obj();
				var_140_object = var_1_object;
				func_906(var_140_object);
				if(var_139_bool != 0) {
					@@@var_0_object:AddReply((int)517933, (int)20861, (int)19071);
				}
				var_148_bool = 0; var_149_object = Obj();
				var_149_object = var_1_object;
				func_918(var_149_object);
				if(var_148_bool != 0) {
					@@@var_0_object:AddReply((int)519710, (int)20870, (int)20869);
				}
				@@@var_0_object:AddReply((int)519709, (int)-1, (int)20868);
				goto Label_142;
		}
	}
Label_142:
	var_119_bool = 0;
	func_859(var_119_bool);
	if(var_119_bool != 0) {

	Label_146:
		lshWaitForAnimEnd();
		var_120_string = var_3_string;
		if(var_120_string != 0) {
		} else {
			var_121_string = "";
			var_121_string = var_2_object;
			func_737(var_121_string);
			goto Label_146;
	}
		PlayAnimation("all", "idle");

	Label_161:
		WaitForAnimEnd();
		var_134_string = var_3_string;
		if(var_134_string != 0) {
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


func_719()
{
	var_162_bool = 0; var_163_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_165_bool = 0;
	func_859(var_165_bool);
	if(var_165_bool != 0) {
	} else {
		HasAnimationTrack(var_163_bool, "head");
		var_167_bool = var_163_bool;
		if(var_167_bool == 0) goto Label_736;
		UnlookAsync("head");
	}
Label_736:
	return 2;
	
}


func_851(var_67_int)
{
	var_67_int = 515568;
	return 0;
}


func_853(var_66_int)
{
	var_66_int = 503353;
	return 0;
}


func_855(var_68_string)
{
	var_68_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_857(var_69_string)
{
	var_69_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_859(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_861()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_737(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0;
	lshHasAnimation(var_125_bool, var_121_string);
	var_128_bool = var_125_bool;
	if(var_128_bool != 0) {
		lshGetAnimTimes(var_121_string, var_126_float, var_127_float);
		lshPlayAnimation(var_126_float, var_127_float, (bool)0);
	} else {
		var_131_int = "Can't find lsh animation : " + var_121_string;
		Trace(var_131_int);
	}
	return 6;
	
}


func_867()
{
	SetVariable("oob1Worker2", (int)1);
	return 0;
}


func_487()
{
	var_21_float = 0; var_22_float = 0;
	
Label_488:
	var_23_bool = 0;
	func_645(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		Hold();
		goto Label_488;
	}
	rand(var_22_float, (int)3);
	var_29_int = var_22_float + (int)3;
	Sleep(var_29_int);
	func_559();
	goto Label_488;
}
EMIT "Return(); Pop(2)";


func_873()
{
	SetVariable("oob1Worker3", (int)1);
	return 0;
}


func_879(var_16_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	Trace("Knife is given");
	CreateInvItem(var_19_object);
	@@var_19_object:SetItemName("Knife");
	@@var_19_object:SetProperty("durability", (int)70);
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0;
	var_16_object = var_24_object;
	var_19_object = var_25_object;
	func_808(var_24_object, var_25_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_753(var_102_string, var_103_bool)
{
	var_106_bool = 0; var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_float = 0; var_111_float = 0;
	lshHasAnimation(var_109_bool, var_102_string);
	var_112_bool = var_109_bool;
	if(var_112_bool != 0) {
		lshGetAnimTimes(var_102_string, var_110_float, var_111_float);
		lshPlayAnimation(var_110_float, var_111_float, var_103_bool);
	} else {
		var_114_int = "Can't find lsh animation : " + var_102_string;
		Trace(var_114_int);
	}
	return 6;
	
}


func_508(var_0_object)
{
	var_13_bool = 0; var_14_bool = 0;
	var_0_object = true;
	IsLoaded(var_14_bool);
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = var_14_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_17_bool = 0;
		func_557(var_17_bool);
		if(var_17_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_18_object = Obj();
		func_775(var_18_object);
		RemoveActor(var_18_object);
	}
	return 2;
}


func_638(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


