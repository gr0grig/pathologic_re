// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,TriggerWorld/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:revolver ammo6 is given|W:revolver_ammo|W:d11q02|W:quest_d11_02|W:init_graveyard|W:completed|W:ood11ULittleBoy1|W:ood11ULittleBoy2|A:SetReturnValue|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1ce
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe6 vars=int,int
// @TASK_2: vars=bool,bool params=0
// @EVENT_0: op=0x1d3 vars=object
// @EVENT_26: op=0x1e5 vars=string
// @EVENT_6: op=0x201 vars=
// @PE: 0x4a,0xd0,0xe6,0x1d3,0x2dd,0x2e3,0x2ee,0x2ff,0x310,0x316,0x31c,0x321,0x32d,0x339,0x345,0x351,0x35d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	if((int)1 != 0) {
		func_649();
		var_12_bool = var_8_bool == (int)15360;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_750();
		}
		var_55_bool = var_8_bool == (int)15363;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_784();
		}
		var_61_bool = var_8_bool == (int)15365;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_767();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_739(var_82_object);
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_733();
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_796(var_110_object);
		}
		var_113_bool = var_8_bool == (int)15366;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_790();
		}
		var_119_bool = var_8_bool == (int)15368;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_796(var_121_object);
		}
		var_123_bool = var_7_bool == (int)15356;
		if(var_123_bool != 0) {
			var_124_bool = 0; var_125_object = Obj();
			var_125_object = var_1_object;
			func_801(var_125_object);
			if(var_124_bool != 0) {
				var_130_string = "";
				func_208(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)514142);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514143, (int)41559, (int)15357);
				@@@var_0_object:AddReply((int)539612, (int)41559, (int)41558);
				return 0;
			}
			var_154_string = "";
			func_208(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514147);
			@@@var_0_object:ClearReplies();
			var_156_bool = 0;
			var_156_bool = 1;
			var_157_bool = 0;
			var_157_bool = 0;
			var_158_bool = 0; var_159_object = Obj();
			var_159_object = var_1_object;
			func_813(var_159_object);
			if(var_158_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_849(var_165_object);
				if(var_164_bool != 0) {
					var_157_bool = 1;
				}
			}
			if(var_157_bool != 1) {
				var_170_bool = 0;
				var_170_bool = 0;
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_object;
				func_837(var_172_object);
				if(var_171_bool != 0) {
					var_177_bool = 0; var_178_object = Obj();
					var_178_object = var_1_object;
					func_849(var_178_object);
					if(var_177_bool != 0) {
						var_170_bool = 1;
					}
				}
				if(var_170_bool != 1) {
					var_156_bool = 0;
				}
			}
			if(var_156_bool != 0) {
				@@@var_0_object:AddReply((int)514149, (int)15364, (int)15363);
			}
			var_182_bool = 0;
			var_182_bool = 0;
			var_183_bool = 0; var_184_object = Obj();
			var_184_object = var_1_object;
			func_825(var_184_object);
			if(var_183_bool != 0) {
				var_189_bool = 0; var_190_object = Obj();
				var_190_object = var_1_object;
				func_861(var_190_object);
				if(var_189_bool != 0) {
					var_182_bool = 1;
				}
			}
			if(var_182_bool != 0) {
				@@@var_0_object:AddReply((int)514152, (int)15367, (int)15366);
			}
			@@@var_0_object:AddReply((int)514148, (int)-1, (int)15362);
			return 0;
		}
		var_202_bool = var_7_bool == (int)15367;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_208(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514153);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514154, (int)-1, (int)15368);
			return 0;
		}
		var_209_bool = var_7_bool == (int)15364;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_208(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514150);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514151, (int)-1, (int)15365);
			return 0;
		}
		var_216_bool = var_7_bool == (int)41559;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_208(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514146, (int)-1, (int)15360);
			@@@var_0_object:AddReply((int)514144, (int)-1, (int)15358);
			return 0;
		}
		var_3_string = true;
		var_225_bool = 0;
		func_978(var_225_bool);
		if(var_225_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe7";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_object = var_1_object;
	if(var_8_object != 0) {
		var_9_int = 0; var_10_object = Obj();
		var_7_object = var_10_object;
		TaskCall(0);
		func_0(var_11_object, var_9_int, var_10_object);
		TaskReturn();
		var_195_bool = var_11_object == (int)1000;
		if(var_195_bool != 0) {
			var_1_object = false;
		}
	}
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_0_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = 0;
		var_12_bool = 0;
		var_13_bool = var_9_bool == 0; //@nz
		if(var_13_bool != 0) {
			var_14_bool = 0;
			func_529(var_14_bool);
			if(var_14_bool != 0) {
				var_12_bool = 1;
			}
		}
		if(var_12_bool != 0) {
			var_15_object = Obj();
			func_656(var_15_object);
			RemoveActor(var_15_object);
		}
	} else {
		var_19_bool = var_7_string == "restore";
		if(var_19_bool == 0) goto Label_512;
		var_0_object = false;
	}
Label_512:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0;
	var_7_bool = 0;
	var_8_object = var_0_object;
	if(var_8_object != 0) {
		var_9_bool = 0;
		func_529(var_9_bool);
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		var_10_object = Obj();
		func_656(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = true;
	func_481();
	return 0;
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_0_object = var_10_object;
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0;
	var_10_object = var_21_object;
	func_531(var_20_bool, var_21_object, (float)70.0);
	var_67_bool = var_20_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	CreateDialog(var_16_object);
	var_68_int = 0;
	func_972(var_68_int);
	@@var_16_object:SetNPCName(var_68_int);
	var_69_int = 0;
	func_970(var_69_int);
	@@var_16_object:SetNPCDescription(var_69_int);
	var_70_string = "";
	func_974(var_70_string);
	@@var_16_object:SetPhoto(var_70_string);
	var_71_string = "";
	func_976(var_71_string);
	@@var_16_object:SetPhoto2(var_71_string);
	var_72_int = 0;
	func_953(var_72_int);
	@@var_16_object:SetPlayerName(var_72_int);
	IsOverrideActive(var_17_bool);
	var_80_bool = var_17_bool;
	if(var_80_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	DoDialog(var_16_object);
	var_81_object = Obj(); var_82_object = Obj();
	var_10_object = var_81_object;
	var_16_object = var_82_object;
	TaskCall(1);
	func_74(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object);
	TaskReturn();
	@@var_16_object:IsDialogEnd(var_19_bool);
	
Label_56:
	var_185_bool = var_19_bool == 0; //@nz
	if(var_185_bool != 0) {
		sync();
		@@var_16_object:IsDialogEnd(var_19_bool);
		goto Label_56;
	}
	var_10_object = Obj();
	func_600();
	StopDialog(var_16_object);
	@@var_16_object:GetReturnValue((int)-1);
	var_18_int = var_9_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_899()
{
	var_40_object = Obj(); var_41_object = Obj();
	CreateDiaryEntry(var_41_object, (int)199, (int)2, (int)515487);
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0;
	var_41_object = var_46_object;
	func_925(var_45_bool, var_46_object, (int)197);
	return 2;
}
EMIT "Stack[-1] = 0";


func_649()
{
	var_10_bool = 0;
	func_978(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_784()
{
	SetVariable("ood11ULittleBoy1", (int)1);
	return 0;
}


func_529(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_656(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_531(var_20_bool, var_21_object, var_22_float)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0;
	@@var_21_object:GetPosition(var_33_cvector);
	@@var_21_object:GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	var_41_float = var_41_float + var_32_float;
	SetByIndex(var_33_cvector, 1) = var_41_float;
	GetPosition(var_34_cvector);
	GetEyesHeight(var_32_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	var_42_float = var_42_float + var_32_float;
	SetByIndex(var_34_cvector, 1) = var_42_float;
	var_35_cvector = var_33_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_44_int = var_35_cvector | var_35_cvector;
	var_45_float = sqrt(var_44_int);
	var_35_cvector = var_35_cvector / var_45_float;
	var_36_cvector = -var_35_cvector;
	var_46_float = var_35_cvector * var_22_float;
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	var_48_cvector = var_36_cvector ^ CVector(0.0, 1.0, 0.0);
	func_662(var_47_cvector, var_48_cvector);
	var_56_float = var_47_cvector * (int)25;
	var_57_int = var_46_float + var_56_float;
	var_37_cvector = var_57_int - CVector(0.0, 10.0, 0.0);
	var_38_cvector = var_34_cvector + var_37_cvector;
	IsOverrideActive(var_39_bool);
	var_59_bool = var_39_bool;
	if(var_59_bool != 0) {
		var_20_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_38_cvector, var_36_cvector, (bool)1);
	var_61_float = GetByIndex(var_37_cvector, 0);
	var_62_float = GetByIndex(var_37_cvector, 2);
	Rotate(var_61_float, var_62_float);
	var_63_bool = 0;
	func_978(var_63_bool);
	if(var_63_bool != 0) {
	} else {
		HasAnimationTrack(var_40_bool, "head");
		var_65_bool = var_40_bool;
		if(var_65_bool == 0) goto Label_594;
		LookAsyncCamera("head");
	}
Label_594:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_20_bool = 1;
	return 18;
	
}


func_912(var_31_object)
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


func_790()
{
	SetVariable("ood11ULittleBoy2", (int)1);
	return 0;
}


func_662(var_47_cvector, var_48_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_48_cvector | var_48_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_47_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_47_cvector = var_48_cvector / var_51_float;
	return 2;
}


func_796(var_110_object)
{
	@@var_110_object:SetReturnValue((int)1000);
	return 0;
}


func_925(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_912(Obj());
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


func_672(var_90_int, var_91_string)
{
	var_92_int = 0; var_93_int = 0;
	GetVariable(var_91_string, var_93_int);
	var_93_int = var_90_int;
	return 2;
}


func_801(var_88_bool)
{
	var_90_int = 0; var_91_string = "";
	func_672(var_90_int, "d11q02");
	var_95_bool = var_90_int == (int)0;
	if(var_95_bool != 0) {
		var_88_bool = 1;
		return 0;
	}
	var_88_bool = 0;
	return 0;
}


func_677(var_100_int, var_101_int)
{
	var_102_object = Obj(); var_103_object = Obj();
	CreateIntVector(var_103_object);
	@@var_103_object:add(var_100_int);
	@@var_103_object:add(var_101_int);
	SendWorldWndMessage((int)3, var_103_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_813(var_142_bool)
{
	var_144_int = 0; var_145_string = "";
	func_672(var_144_int, "d11q02");
	var_147_bool = var_144_int == (int)2;
	if(var_147_bool != 0) {
		var_142_bool = 1;
		return 0;
	}
	var_142_bool = 0;
	return 0;
}


func_689(var_89_object, var_90_object, var_91_int)
{
	var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_bool = 0;
	@@var_90_object:GetItemID(var_95_int);
	GetInvItemProperty(var_96_int, var_95_int, "Category");
	@@var_89_object:AddItem(var_97_bool, var_90_object, var_96_int, var_91_int);
	var_99_bool = var_97_bool == 0; //@nz
	if(var_99_bool != 0) {
		@@var_89_object:DropItems(var_90_object, var_91_int);
	} else {
		var_100_int = 0; var_101_int = 0;
		var_95_int = var_100_int;
		var_91_int = var_101_int;
		func_677(var_100_int, var_101_int);
	}
	return 6;
	
}


func_825(var_167_bool)
{
	var_169_int = 0; var_170_string = "";
	func_672(var_169_int, "d11q02");
	var_172_bool = var_169_int == (int)-1;
	if(var_172_bool != 0) {
		var_167_bool = 1;
		return 0;
	}
	var_167_bool = 0;
	return 0;
}


func_953(var_72_int)
{
	var_73_int = 0; var_74_int = 0;
	GetVariable("branch", var_74_int);
	var_77_bool = var_74_int == (int)0;
	if(var_77_bool != 0) {
		var_72_int = 1;
		return 2;
	EMIT "GOTO 0x3c8";
	}
	var_79_bool = var_74_int == (int)1;
	if(var_79_bool != 0) {
		var_72_int = 2;
		return 2;
	}
	var_72_int = 3;
	return 2;
}


func_708(var_84_object, var_85_string, var_86_int)
{
	var_87_object = Obj(); var_88_object = Obj();
	CreateInvItem(var_88_object);
	@@var_88_object:SetItemName(var_85_string);
	var_89_object = Obj(); var_90_object = Obj(); var_91_int = 0;
	var_84_object = var_89_object;
	var_88_object = var_90_object;
	var_86_int = var_91_int;
	func_689(var_89_object, var_90_object, var_91_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_837(var_155_bool)
{
	var_157_int = 0; var_158_string = "";
	func_672(var_157_int, "d11q02");
	var_160_bool = var_157_int == (int)1000;
	if(var_160_bool != 0) {
		var_155_bool = 1;
		return 0;
	}
	var_155_bool = 0;
	return 0;
}


func_970(var_69_int)
{
	var_69_int = 515560;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_81_object, var_82_object)
{
	var_0_object = var_82_object;
	var_1_object = var_81_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_88_bool = 0; var_89_object = Obj();
		var_89_object = var_1_object;
		func_801(var_89_object);
		if(var_88_bool != 0) {
			var_96_string = "";
			func_208(var_82_object, "Neutral");
			@@@var_0_object:SetMessage((int)514142);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514143, (int)41559, (int)15357);
			@@@var_0_object:AddReply((int)539612, (int)41559, (int)41558);
		} else {
				var_138_string = "";
				func_208(var_82_object, "Neutral");
				@@@var_0_object:SetMessage((int)514147);
				@@@var_0_object:ClearReplies();
				var_140_bool = 0;
				var_140_bool = 1;
				var_141_bool = 0;
				var_141_bool = 0;
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_813(var_143_object);
				if(var_142_bool != 0) {
					var_148_bool = 0; var_149_object = Obj();
					var_149_object = var_1_object;
					func_849(var_149_object);
					if(var_148_bool != 0) {
						var_141_bool = 1;
					}
				}
				if(var_141_bool != 1) {
					var_154_bool = 0;
					var_154_bool = 0;
					var_155_bool = 0; var_156_object = Obj();
					var_156_object = var_1_object;
					func_837(var_156_object);
					if(var_155_bool != 0) {
						var_161_bool = 0; var_162_object = Obj();
						var_162_object = var_1_object;
						func_849(var_162_object);
						if(var_161_bool != 0) {
							var_154_bool = 1;
						}
					}
					if(var_154_bool != 1) {
						var_140_bool = 0;
					}
				}
				if(var_140_bool != 0) {
					@@@var_0_object:AddReply((int)514149, (int)15364, (int)15363);
				}
				var_166_bool = 0;
				var_166_bool = 0;
				var_167_bool = 0; var_168_object = Obj();
				var_168_object = var_1_object;
				func_825(var_168_object);
				if(var_167_bool != 0) {
					var_173_bool = 0; var_174_object = Obj();
					var_174_object = var_1_object;
					func_861(var_174_object);
					if(var_173_bool != 0) {
						var_166_bool = 1;
					}
				}
				if(var_166_bool != 0) {
					@@@var_0_object:AddReply((int)514152, (int)15367, (int)15366);
				}
				@@@var_0_object:AddReply((int)514148, (int)-1, (int)15362);
				goto Label_178;
		}
	}
Label_178:
	var_120_bool = 0;
	func_978(var_120_bool);
	if(var_120_bool != 0) {

	Label_182:
		lshWaitForAnimEnd();
		var_121_string = var_3_string;
		if(var_121_string != 0) {
		} else {
			var_122_string = "";
			var_122_string = var_2_object;
			func_618(var_122_string);
			goto Label_182;
	}
		PlayAnimation("all", "idle");

	Label_197:
		WaitForAnimEnd();
		var_135_string = var_3_string;
		if(var_135_string != 0) {
			goto Label_207;
		}
		PlayAnimation("all", "idle");
		goto Label_197;

	}
	goto Label_207;
	
Label_207:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_972(var_68_int)
{
	var_68_int = 503345;
	return 0;
}


func_974(var_70_string)
{
	var_70_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_976(var_71_string)
{
	var_71_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_208(var_2_object, var_96_string)
{
	var_97_bool = 0;
	func_978(var_97_bool);
	var_98_bool = var_97_bool == 0; //@nz
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_bool = var_96_string == var_2_object;
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_string = ""; var_101_bool = 0;
	var_96_string = var_100_string;
	var_103_bool = var_96_string == "";
	if(var_103_bool != 0) {
		var_101_bool = 0;
	} else {
		var_101_bool = 1;
	}
	func_634(var_100_string, var_101_bool);
	var_2_object = var_96_string;
	return 0;
	
}


func_849(var_148_bool)
{
	var_150_int = 0; var_151_string = "";
	func_672(var_150_int, "ood11ULittleBoy1");
	var_153_bool = var_150_int == (int)0;
	if(var_153_bool != 0) {
		var_148_bool = 1;
		return 0;
	}
	var_148_bool = 0;
	return 0;
}


func_978(var_63_bool)
{
	var_63_bool = 0;
	return 0;
}


func_721(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj();
	FindActor(var_52_object, var_49_string);
	var_53_bool = var_52_object == 0; //@ne
	if(var_53_bool != 0) {
		var_48_bool = 0;
		return 2;
	}
	Trigger(var_52_object, var_50_string);
	var_48_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_600()
{
	var_187_bool = 0; var_188_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_190_bool = 0;
	func_978(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		HasAnimationTrack(var_188_bool, "head");
		var_192_bool = var_188_bool;
		if(var_192_bool == 0) goto Label_617;
		UnlookAsync("head");
	}
Label_617:
	return 2;
	
}


func_861(var_173_bool)
{
	var_175_int = 0; var_176_string = "";
	func_672(var_175_int, "ood11ULittleBoy2");
	var_178_bool = var_175_int == (int)0;
	if(var_178_bool != 0) {
		var_173_bool = 1;
		return 0;
	}
	var_173_bool = 0;
	return 0;
}


func_733()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_481()
{
	
Label_481:
	Hold();
	goto Label_481;
}
EMIT "Return(); Pop(0)";


func_739(var_81_object)
{
	Trace("revolver ammo6 is given");
	var_84_object = Obj(); var_85_string = ""; var_86_int = 0;
	var_81_object = var_84_object;
	func_708(var_84_object, "revolver_ammo", (int)6);
	return 0;
}


func_873()
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateDiaryEntry(var_18_object, (int)197, (int)2, (int)515485);
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0;
	var_18_object = var_23_object;
	func_925(var_22_bool, var_23_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_618(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0;
	lshHasAnimation(var_126_bool, var_122_string);
	var_129_bool = var_126_bool;
	if(var_129_bool != 0) {
		lshGetAnimTimes(var_122_string, var_127_float, var_128_float);
		lshPlayAnimation(var_127_float, var_128_float, (bool)0);
	} else {
		var_132_int = "Can't find lsh animation : " + var_122_string;
		Trace(var_132_int);
	}
	return 6;
	
}


func_750()
{
	SetVariable("d11q02", (int)1);
	func_873();
	func_899();
	var_48_bool = 0; var_49_string = ""; var_50_string = "";
	func_721(var_48_bool, "quest_d11_02", "init_graveyard");
	return 0;
}


func_886()
{
	var_70_object = Obj(); var_71_object = Obj();
	CreateDiaryEntry(var_71_object, (int)198, (int)2, (int)515486);
	var_75_bool = 0; var_76_object = Obj(); var_77_int = 0;
	var_71_object = var_76_object;
	func_925(var_75_bool, var_76_object, (int)197);
	return 2;
}
EMIT "Stack[-1] = 0";


func_634(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0;
	lshHasAnimation(var_107_bool, var_100_string);
	var_110_bool = var_107_bool;
	if(var_110_bool != 0) {
		lshGetAnimTimes(var_100_string, var_108_float, var_109_float);
		lshPlayAnimation(var_108_float, var_109_float, var_101_bool);
	} else {
		var_112_int = "Can't find lsh animation : " + var_100_string;
		Trace(var_112_int);
	}
	return 6;
	
}


func_767()
{
	var_64_int = 0; var_65_string = "";
	func_672(var_64_int, "d11q02");
	var_69_bool = var_64_int != (int)1000;
	if(var_69_bool != 0) {
		func_886();
		var_78_bool = 0; var_79_string = ""; var_80_string = "";
		func_721(var_78_bool, "quest_d11_02", "completed");
	}
	return 0;
}


