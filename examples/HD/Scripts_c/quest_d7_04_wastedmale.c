// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:pt_gatherer2|A:ShowMap|W:d7q04|W:d7q04WastedGotoGatherer|A:AddMark|W:quest_d7_04|W:init_andrei|W:Rifle is given|W:Rifle|W:durability|A:SetProperty|W:rifle ammo10 is given|W:rifle_ammo|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x172
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa4 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x178 vars=object
// @EVENT_26: op=0x1a6 vars=string
// @EVENT_6: op=0x1ae vars=
// @EVENT_7: op=0x1ef vars=int
// @PE: 0x4a,0x8e,0xa4,0x178,0x1a6,0x1c5,0x1ef,0x206,0x351,0x392,0x39d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_760();
		var_17_bool = var_13_bool == (int)37513;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_865();
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_849(var_68_object);
		}
		var_94_bool = var_13_bool == (int)37516;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_865();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_849(var_98_object);
		}
		var_100_bool = var_13_bool == (int)34726;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_865();
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_893(var_104_object);
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_914(var_128_object);
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_849(var_139_object);
		}
		var_141_bool = var_13_bool == (int)37509;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_865();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_849(var_145_object);
		}
		var_147_bool = var_12_bool == (int)34723;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533203);
			@@@var_0_object:ClearReplies();
			var_166_bool = 0; var_167_object = Obj();
			var_167_object = var_1_object;
			func_925(var_167_object);
			if(var_166_bool != 0) {
				@@@var_0_object:AddReply((int)533204, (int)34725, (int)34724);
			}
			@@@var_0_object:AddReply((int)533207, (int)-1, (int)34727);
			@@@var_0_object:AddReply((int)535821, (int)-1, (int)37514);
			return 0;
		}
		var_184_bool = var_12_bool == (int)34725;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535813, (int)37511, (int)37505);
			@@@var_0_object:AddReply((int)535815, (int)37508, (int)37507);
			return 0;
		}
		var_194_bool = var_12_bool == (int)37508;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535817, (int)-1, (int)37509);
			@@@var_0_object:AddReply((int)535822, (int)37506, (int)37515);
			return 0;
		}
		var_204_bool = var_12_bool == (int)37511;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535818);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535820, (int)-1, (int)37513);
			@@@var_0_object:AddReply((int)535819, (int)37506, (int)37512);
			return 0;
		}
		var_214_bool = var_12_bool == (int)37506;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_142(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535814);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535823, (int)-1, (int)37516);
			@@@var_0_object:AddReply((int)533206, (int)-1, (int)34726);
			return 0;
		}
		var_3_string = true;
		var_223_bool = 0;
		func_1090(var_223_bool);
		if(var_223_bool != 0) {
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
	var_13_int = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	TaskCall(0);
	func_0(var_15_object, var_13_int, var_14_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_402(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_518(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_451(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_767(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_480(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_749(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_517;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_517:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_384(var_11_bool, (float)300, (float)100);
	return 0;
}


func_384(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_386:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_453(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_386;
}
EMIT "Return(); Pop(4)";


func_0(var_0_object, var_13_int, var_14_object)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0;
	var_0_object = var_14_object;
	var_24_bool = 0; var_25_object = Obj(); var_26_float = 0;
	var_14_object = var_25_object;
	func_631(var_24_bool, var_25_object, (float)70.0);
	var_71_bool = var_24_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_13_int = -2;
		return 8;
	}
	CreateDialog(var_20_object);
	var_72_int = 0;
	func_1084(var_72_int);
	@@var_20_object:SetNPCName(var_72_int);
	var_73_int = 0;
	func_1082(var_73_int);
	@@var_20_object:SetNPCDescription(var_73_int);
	var_74_string = "";
	func_1086(var_74_string);
	@@var_20_object:SetPhoto(var_74_string);
	var_75_string = "";
	func_1088(var_75_string);
	@@var_20_object:SetPhoto2(var_75_string);
	var_76_int = 0;
	func_1041(var_76_int);
	@@var_20_object:SetPlayerName(var_76_int);
	IsOverrideActive(var_21_bool);
	var_84_bool = var_21_bool;
	if(var_84_bool != 0) {
		var_13_int = -2;
		return 8;
	}
	DoDialog(var_20_object);
	var_85_object = Obj(); var_86_object = Obj();
	var_14_object = var_85_object;
	var_20_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	@@var_20_object:IsDialogEnd(var_23_bool);
	
Label_56:
	var_145_bool = var_23_bool == 0; //@nz
	if(var_145_bool != 0) {
		sync();
		@@var_20_object:IsDialogEnd(var_23_bool);
		goto Label_56;
	}
	var_14_object = Obj();
	func_700();
	StopDialog(var_20_object);
	@@var_20_object:GetReturnValue((int)-1);
	var_22_int = var_13_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_773(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0;
	var_56_int = var_52_cvector | var_52_cvector;
	var_55_float = sqrt(var_56_int);
	var_57_float = 9.999999974752427e-07;
	var_58_bool = var_55_float < var_57_float;
	if(var_58_bool != 0) {
		var_51_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_51_cvector = var_52_cvector / var_55_float;
	return 2;
}


func_518(var_2_object, var_3_string)
{
	func_613();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_142(var_2_object, var_92_string)
{
	var_93_bool = 0;
	func_1090(var_93_bool);
	var_94_bool = var_93_bool == 0; //@nz
	if(var_94_bool != 0) {
		return 0;
	}
	var_95_bool = var_92_string == var_2_object;
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_string = ""; var_97_bool = 0;
	var_92_string = var_96_string;
	var_99_bool = var_92_string == "";
	if(var_99_bool != 0) {
		var_97_bool = 0;
	} else {
		var_97_bool = 1;
	}
	func_734(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	return 0;
	
}


func_783(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0;
	GetVariable(var_113_string, var_115_int);
	var_115_int = var_112_int;
	return 2;
}


func_1041(var_76_int)
{
	var_77_int = 0; var_78_int = 0;
	GetVariable("branch", var_78_int);
	var_81_bool = var_78_int == (int)0;
	if(var_81_bool != 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x420";
	}
	var_83_bool = var_78_int == (int)1;
	if(var_83_bool != 0) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
	return 2;
}


func_914(var_127_object)
{
	Trace("rifle ammo10 is given");
	var_130_object = Obj(); var_131_string = ""; var_132_int = 0;
	var_127_object = var_130_object;
	func_819(var_130_object, "rifle_ammo", (int)10);
	return 0;
}


func_402(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_626(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_451(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_767(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_532()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_626(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_1065((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_546:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_626(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_579;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_1058(var_68_string, var_69_int);
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
						goto Label_608;
					}
					goto Label_597;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_597;
				goto Label_608;
		}
		Label_597:
			var_71_bool = 0;
			func_611(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_608;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_546;

		}
	}
Label_608:
	ResetAAS();
	return 14;
	
}


func_788(var_122_int, var_123_int)
{
	var_124_object = Obj(); var_125_object = Obj();
	CreateIntVector(var_125_object);
	@@var_125_object:add(var_122_int);
	@@var_125_object:add(var_123_int);
	SendWorldWndMessage((int)3, var_125_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_925(var_110_bool)
{
	var_112_int = 0; var_113_string = "";
	func_783(var_112_int, "d7q04");
	var_117_bool = var_112_int == (int)1;
	if(var_117_bool != 0) {
		var_110_bool = 1;
		return 0;
	}
	var_110_bool = 0;
	return 0;
}


func_800(var_111_object, var_112_object, var_113_int)
{
	var_114_int = 0; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_int = 0; var_119_bool = 0;
	@@var_112_object:GetItemID(var_117_int);
	GetInvItemProperty(var_118_int, var_117_int, "Category");
	@@var_111_object:AddItem(var_119_bool, var_112_object, var_118_int, var_113_int);
	var_121_bool = var_119_bool == 0; //@nz
	if(var_121_bool != 0) {
		@@var_111_object:DropItems(var_112_object, var_113_int);
	} else {
		var_122_int = 0; var_123_int = 0;
		var_117_int = var_122_int;
		var_113_int = var_123_int;
		func_788(var_122_int, var_123_int);
	}
	return 6;
	
}


func_1058(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_1065(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_1067:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_1058(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_1067;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_937()
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateDiaryEntry(var_39_object, (int)639, (int)2, (int)533225);
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0;
	var_39_object = var_44_object;
	func_963(var_43_bool, var_44_object, (int)637);
	return 2;
}
EMIT "Stack[-1] = 0";


func_819(var_130_object, var_131_string, var_132_int)
{
	var_133_object = Obj(); var_134_object = Obj();
	CreateInvItem(var_134_object);
	@@var_134_object:SetItemName(var_131_string);
	var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0;
	var_130_object = var_135_object;
	var_134_object = var_136_object;
	var_132_int = var_137_int;
	func_800(var_135_object, var_136_object, var_137_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_950(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	GetDiaryRoot(var_54_object);
	var_55_bool = var_54_object == 0; //@nz
	if(var_55_bool != 0) {
		Trace("Can't retrieve diary root");
		var_52_object = 0;
		return 2;
	}
	var_54_object = var_52_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1082(var_73_int)
{
	var_73_int = 515556;
	return 0;
}


func_700()
{
	var_147_bool = 0; var_148_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_150_bool = 0;
	func_1090(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		HasAnimationTrack(var_148_bool, "head");
		var_152_bool = var_148_bool;
		if(var_152_bool == 0) goto Label_717;
		UnlookAsync("head");
	}
Label_717:
	return 2;
	
}


func_1084(var_72_int)
{
	var_72_int = 503341;
	return 0;
}


func_1086(var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_1088(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_832(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj();
	FindActor(var_65_object, var_62_string);
	var_66_bool = var_65_object == 0; //@ne
	if(var_66_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	Trigger(var_65_object, var_63_string);
	var_61_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1090(var_67_bool)
{
	var_67_bool = 0;
	return 0;
}


func_451(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_963(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	func_950(Obj());
	var_52_object = var_49_object;
	@@var_49_object:Find(var_45_int, var_50_object);
	var_57_bool = var_50_object == 0; //@nz
	if(var_57_bool != 0) {
		var_59_int = "Can't find diary parent with id: " + var_45_int;
		Trace(var_59_int);
		var_43_bool = 0;
		return 6;
	}
	@@var_50_object:AddChild(var_44_object);
	SendWorldWndMessage((int)7);
	@@var_44_object:GetCategory(var_51_int);
	SetDiarySection(var_51_int);
	var_43_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_453(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_626(var_23_bool);
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
	func_532();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_92_string = "";
		func_142(var_86_object, "Neutral");
		@@@var_0_object:SetMessage((int)533203);
		@@@var_0_object:ClearReplies();
		var_110_bool = 0; var_111_object = Obj();
		var_111_object = var_1_object;
		func_925(var_111_object);
		if(var_110_bool != 0) {
			@@@var_0_object:AddReply((int)533204, (int)34725, (int)34724);
		}
		@@@var_0_object:AddReply((int)533207, (int)-1, (int)34727);
		@@@var_0_object:AddReply((int)535821, (int)-1, (int)37514);
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	var_127_bool = 0;
	func_1090(var_127_bool);
	if(var_127_bool != 0) {

	Label_116:
		lshWaitForAnimEnd();
		var_128_string = var_3_string;
		if(var_128_string != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_object;
			func_718(var_129_string);
			goto Label_116;
	}
		PlayAnimation("all", "idle");

	Label_131:
		WaitForAnimEnd();
		var_142_string = var_3_string;
		if(var_142_string != 0) {
			goto Label_141;
		}
		PlayAnimation("all", "idle");
		goto Label_131;
	}
	goto Label_141;
	
Label_141:
	return 0;
	
}


func_844(var_35_float)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_37_float = var_35_float;
	return 2;
}


func_718(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0;
	lshHasAnimation(var_133_bool, var_129_string);
	var_136_bool = var_133_bool;
	if(var_136_bool != 0) {
		lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		lshPlayAnimation(var_134_float, var_135_float, (bool)0);
	} else {
		var_139_int = "Can't find lsh animation : " + var_129_string;
		Trace(var_139_int);
	}
	return 6;
	
}


func_849(var_68_object)
{
	var_69_object = Obj(); var_70_string = ""; var_71_float = 0;
	func_991(Obj());
	var_72_object = var_69_object;
	func_1008(var_69_object, "pt_gatherer2", (float)2);
	var_92_object = Obj();
	func_991(var_92_object);
	@@var_68_object:ShowMap(var_92_object);
	return 0;
}


func_734(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0;
	lshHasAnimation(var_103_bool, var_96_string);
	var_106_bool = var_103_bool;
	if(var_106_bool != 0) {
		lshGetAnimTimes(var_96_string, var_104_float, var_105_float);
		lshPlayAnimation(var_104_float, var_105_float, var_97_bool);
	} else {
		var_108_int = "Can't find lsh animation : " + var_96_string;
		Trace(var_108_int);
	}
	return 6;
	
}


func_991(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj();
	GetMainOutdoorScene(var_27_object);
	var_29_bool = var_27_object == 0; //@ne
	if(var_29_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_28_object = 0;
		var_28_object = var_24_object;
		return 4;
	}
	@@var_27_object:GetMap(var_28_object);
	var_28_object = var_24_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_480(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_618(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_865()
{
	var_20_object = Obj(); var_21_object = Obj();
	SetVariable("d7q04", (int)2);
	func_991(Obj());
	var_24_object = var_21_object;
	var_35_float = 0;
	func_844(var_35_float);
	@@var_21_object:AddMark("d7q04WastedGotoGatherer", "pt_gatherer2", (int)0, (int)508638, var_35_float);
	func_937();
	var_61_bool = 0; var_62_string = ""; var_63_string = "";
	func_832(var_61_bool, "quest_d7_04", "init_andrei");
	return 2;
}
EMIT "Stack[-1] = 0";


func_611(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_613()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_618(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_749(var_29_object)
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


func_1008(var_69_object, var_70_string, var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_object = Obj(); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0;
	GetMainOutdoorScene(var_79_object);
	var_81_bool = var_79_object == 0; //@ne
	if(var_81_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_79_object:GetLocator(var_70_string, var_80_bool, var_77_cvector, var_78_cvector);
	var_83_bool = var_80_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_85_int = "Warning: outdoor scene locator " + var_70_string;
		var_87_int = var_85_int + " doesnt exist";
		Trace(var_87_int);
	}
	@@var_79_object:GetMap(var_69_object);
	var_88_bool = var_69_object == 0; //@ne
	if(var_88_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_90_float = GetByIndex(var_77_cvector, 0);
	var_91_float = GetByIndex(var_77_cvector, 2);
	@@var_69_object:SetMapParams(var_90_float, var_91_float, var_71_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_626(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_631(var_24_bool, var_25_object, var_26_float)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_bool = 0;
	@@var_25_object:GetPosition(var_37_cvector);
	@@var_25_object:GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_37_cvector, 1);
	var_45_float = var_45_float + var_36_float;
	SetByIndex(var_37_cvector, 1) = var_45_float;
	GetPosition(var_38_cvector);
	GetEyesHeight(var_36_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_36_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	var_39_cvector = var_37_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_48_int = var_39_cvector | var_39_cvector;
	var_49_float = sqrt(var_48_int);
	var_39_cvector = var_39_cvector / var_49_float;
	var_40_cvector = -var_39_cvector;
	var_50_float = var_39_cvector * var_26_float;
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_40_cvector ^ CVector(0.0, 1.0, 0.0);
	func_773(var_51_cvector, var_52_cvector);
	var_60_float = var_51_cvector * (int)25;
	var_61_int = var_50_float + var_60_float;
	var_41_cvector = var_61_int - CVector(0.0, 10.0, 0.0);
	var_42_cvector = var_38_cvector + var_41_cvector;
	IsOverrideActive(var_43_bool);
	var_63_bool = var_43_bool;
	if(var_63_bool != 0) {
		var_24_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_42_cvector, var_40_cvector, (bool)1);
	var_65_float = GetByIndex(var_41_cvector, 0);
	var_66_float = GetByIndex(var_41_cvector, 2);
	Rotate(var_65_float, var_66_float);
	var_67_bool = 0;
	func_1090(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		HasAnimationTrack(var_44_bool, "head");
		var_69_bool = var_44_bool;
		if(var_69_bool == 0) goto Label_694;
		LookAsyncCamera("head");
	}
Label_694:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_24_bool = 1;
	return 18;
	
}


func_760()
{
	var_15_bool = 0;
	func_1090(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_893(var_103_object)
{
	var_105_object = Obj(); var_106_object = Obj();
	Trace("Rifle is given");
	CreateInvItem(var_106_object);
	@@var_106_object:SetItemName("Rifle");
	@@var_106_object:SetProperty("durability", (int)100);
	var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0;
	var_103_object = var_111_object;
	var_106_object = var_112_object;
	func_800(var_111_object, var_112_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_767(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


