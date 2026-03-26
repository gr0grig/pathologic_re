// @IMPORTS: rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,StopGroup0/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: W:cleanup|W:player|W:head|W:all|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Morlok.png|W:ui/NPC_Morlok_b.png|W:avroks blood is given|W:avroks_blood|W:b10q04LaskaTalk|W:b10q04MorlokGotoLaska|W:pt_map_laska|A:AddMark|W:quest_b10_04|W:init_storojka|W:oob10MorlokLaska1|W:playsound|W:giveitem|A:ShowMap|W:b10q04NotkinTalk|W:b10q04Spi4kaTalk|W:b10q04MishkaTalk|W:b10q04|W:b10q04MorlokTalk|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x6 vars=object
// @EVENT_26: op=0x35 vars=string
// @EVENT_6: op=0x3d vars=
// @EVENT_7: op=0x7e vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1d4 vars=int,int
// @PE: 0x6,0x35,0x54,0x7e,0x95,0x143,0x1be,0x1d4,0x3a3,0x3ca,0x3d0,0x3d6,0x3e6,0x413,0x41f,0x42b,0x437,0x443,0x4c8

task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	func_149(var_11_string, var_12_bool);
	var_16_object = Obj();
	var_12_bool = var_16_object;
	func_1224(var_16_object);
	return 0;
}


task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_14_bool = var_12_bool == "cleanup";
	if(var_14_bool != 0) {
		func_33(var_12_bool);
	}
	return 0;
}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_bool = var_6_bool;
	if(var_12_bool != 0) {
		func_149(var_10_string, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = var_5_bool;
	if(var_17_bool != 0) {
		var_18_bool = 0;
		func_82(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_815(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_14_bool = var_12_bool == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_111(var_10_object, var_11_string, var_12_bool, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_bool == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_object;
				func_797(var_29_object);
				var_2_bool = true;
			}
		} else {
			var_36_bool = var_2_bool;
			if(var_36_bool == 0) goto Label_148;
			UnlookAsync("head");
			var_2_bool = false;
		}
	}
Label_148:
	return 0;
	
}


task_2_event_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int)
{
	if((int)1 != 0) {
		func_808();
		var_17_bool = var_13_int == (int)31800;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_int;
			var_19_object = var_0_int;
			func_942();
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_int;
			var_68_object = var_0_int;
			func_982(var_68_object);
		}
		var_94_bool = var_13_int == (int)31802;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_int;
			var_96_object = var_0_int;
			func_970();
		}
		var_100_bool = var_13_int == (int)31804;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_int;
			var_102_object = var_0_int;
			func_931(var_102_object);
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_int;
			var_126_object = var_0_int;
			func_976();
		}
		var_130_bool = var_13_int == (int)31806;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_int;
			var_132_object = var_0_int;
			func_931(var_132_object);
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_int;
			var_134_object = var_0_int;
			func_976();
		}
		var_136_bool = var_12_int == (int)31888;
		if(var_136_bool != 0) {
			var_137_bool = 0; var_138_object = Obj();
			var_138_object = var_1_int;
			func_1091(var_138_object);
			var_145_bool = var_137_bool == 0; //@nz
			if(var_145_bool != 0) {
				var_146_string = "";
				func_446(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530541);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530542, (int)-1, (int)31889);
				return 0;
			}
			var_167_bool = 0; var_168_object = Obj();
			var_168_object = var_1_int;
			func_1067(var_168_object);
			if(var_167_bool != 0) {
				var_173_string = "";
				func_446(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530427);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530428, (int)-1, (int)31800);
				return 0;
			}
			var_178_string = "";
			func_446(var_13_int, "Neutral");
			@@@var_0_int:SetMessage((int)530429);
			@@@var_0_int:ClearReplies();
			var_180_bool = 0;
			var_180_bool = 0;
			var_181_bool = 0;
			var_181_bool = 0;
			var_182_bool = 0; var_183_object = Obj();
			var_183_object = var_1_int;
			func_1079(var_183_object);
			if(var_182_bool != 0) {
				var_188_bool = 0; var_189_object = Obj();
				var_189_object = var_1_int;
				func_1043(var_189_object);
				if(var_188_bool != 0) {
					var_181_bool = 1;
				}
			}
			if(var_181_bool != 0) {
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_int;
				func_1055(var_195_object);
				var_200_bool = var_194_bool == 0; //@nz
				if(var_200_bool != 0) {
					var_180_bool = 1;
				}
			}
			if(var_180_bool != 0) {
				@@@var_0_int:AddReply((int)530430, (int)31803, (int)31802);
			}
			@@@var_0_int:AddReply((int)530435, (int)-1, (int)31807);
			return 0;
		}
		var_208_bool = var_12_int == (int)31803;
		if(var_208_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_210_object = var_1_int;
			func_998(var_210_object);
			if(var_209_bool != 0) {
				var_230_string = "";
				func_446(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530431);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530432, (int)-1, (int)31804);
				return 0;
			}
			var_235_bool = 0; var_236_object = Obj();
			var_236_object = var_1_int;
			func_998(var_236_object);
			var_237_bool = var_235_bool == 0; //@nz
			if(var_237_bool != 0) {
				var_238_string = "";
				func_446(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530433);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530434, (int)-1, (int)31806);
				return 0;
			}
		}
		var_3_bool = true;
		var_243_bool = 0;
		func_929(var_243_bool);
		if(var_243_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1d5";
	
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_15(var_11_bool, (float)300, (float)100);
	return 0;
}


func_897(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_1157(var_24_object)
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


func_904(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_906:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_897(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_906;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_782(var_150_string, var_151_bool)
{
	var_154_bool = 0; var_155_float = 0; var_156_float = 0; var_157_bool = 0; var_158_float = 0; var_159_float = 0;
	lshHasAnimation(var_157_bool, var_150_string);
	var_160_bool = var_157_bool;
	if(var_160_bool != 0) {
		lshGetAnimTimes(var_150_string, var_158_float, var_159_float);
		lshPlayAnimation(var_158_float, var_159_float, var_151_bool);
	} else {
		var_162_int = "Can't find lsh animation : " + var_150_string;
		Trace(var_162_int);
	}
	return 6;
	
}


func_15(var_6_bool, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_bool = false;
	
Label_17:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_bool = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_84(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_bool = false;
	goto Label_17;
}
EMIT "Return(); Pop(4)";


func_1043(var_188_bool)
{
	var_190_int = 0; var_191_string = "";
	func_831(var_190_int, "b10q04LaskaTalk");
	var_193_bool = var_190_int == (int)9;
	if(var_193_bool != 0) {
		var_188_bool = 1;
		return 0;
	}
	var_188_bool = 0;
	return 0;
}


func_149(var_2_bool, var_3_bool)
{
	func_244();
	KillTimer((int)10);
	var_14_bool = var_2_bool;
	if(var_14_bool != 0) {
		UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
	return 0;
}


func_1174(var_69_object, var_70_string, var_71_float)
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


func_921(var_77_int)
{
	var_77_int = 521048;
	return 0;
}


func_666(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_923(var_76_int)
{
	var_76_int = 521047;
	return 0;
}


func_925(var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png";
	return 0;
}


func_797(var_29_object)
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


func_1055(var_194_bool)
{
	var_196_int = 0; var_197_string = "";
	func_831(var_196_int, "b10q04");
	var_199_bool = var_196_int == (int)-1;
	if(var_199_bool != 0) {
		var_194_bool = 1;
		return 0;
	}
	var_194_bool = 0;
	return 0;
}


func_927(var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png";
	return 0;
}


func_33(var_5_bool)
{
	var_5_bool = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_674(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_82(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_815(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_674(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_163()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_674(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_904((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_177:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_674(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_210;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_897(var_68_string, var_69_int);
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
						goto Label_239;
					}
					goto Label_228;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_228;
				goto Label_239;
		}
		Label_228:
			var_71_bool = 0;
			func_242(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_239;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_177;

		}
	}
Label_239:
	ResetAAS();
	return 14;
	
}


func_929(var_15_bool)
{
	var_15_bool = 0;
	return 0;
}


func_931(var_101_object)
{
	Trace("avroks blood is given");
	var_104_object = Obj(); var_105_string = ""; var_106_int = 0;
	var_101_object = var_104_object;
	func_867(var_104_object, "avroks_blood", (int)1);
	return 0;
}


func_679(var_28_bool, var_29_object, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0;
	@@var_29_object:GetPosition(var_41_cvector);
	@@var_29_object:GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_40_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	GetPosition(var_42_cvector);
	GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	var_50_float = var_50_float + var_40_float;
	SetByIndex(var_42_cvector, 1) = var_50_float;
	var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_53_float = sqrt(var_52_int);
	var_43_cvector = var_43_cvector / var_53_float;
	var_44_cvector = -var_43_cvector;
	var_54_float = var_43_cvector * var_30_float;
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	var_56_cvector = var_44_cvector ^ CVector(0.0, 1.0, 0.0);
	func_821(var_55_cvector, var_56_cvector);
	var_64_float = var_55_cvector * (int)25;
	var_65_int = var_54_float + var_64_float;
	var_45_cvector = var_65_int - CVector(0.0, 10.0, 0.0);
	var_46_cvector = var_42_cvector + var_45_cvector;
	IsOverrideActive(var_47_bool);
	var_67_bool = var_47_bool;
	if(var_67_bool != 0) {
		var_28_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_46_cvector, var_44_cvector, (bool)1);
	var_69_float = GetByIndex(var_45_cvector, 0);
	var_70_float = GetByIndex(var_45_cvector, 2);
	Rotate(var_69_float, var_70_float);
	var_71_bool = 0;
	func_929(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		HasAnimationTrack(var_48_bool, "head");
		var_73_bool = var_48_bool;
		if(var_73_bool == 0) goto Label_742;
		LookAsyncCamera("head");
	}
Label_742:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 18;
	
}


func_808()
{
	var_15_bool = 0;
	func_929(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1067(var_167_bool)
{
	var_169_int = 0; var_170_string = "";
	func_831(var_169_int, "b10q04LaskaTalk");
	var_172_bool = var_169_int == (int)0;
	if(var_172_bool != 0) {
		var_167_bool = 1;
		return 0;
	}
	var_167_bool = 0;
	return 0;
}


func_942()
{
	var_20_object = Obj(); var_21_object = Obj();
	SetVariable("b10q04LaskaTalk", (int)1);
	func_1157(Obj());
	var_24_object = var_21_object;
	var_35_float = 0;
	func_892(var_35_float);
	@@var_21_object:AddMark("b10q04MorlokGotoLaska", "pt_map_laska", (int)0, (int)530551, var_35_float);
	func_1103();
	var_61_bool = 0; var_62_string = ""; var_63_string = "";
	func_880(var_61_bool, "quest_b10_04", "init_storojka");
	return 2;
}
EMIT "Stack[-1] = 0";


func_815(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_821(var_55_cvector, var_56_cvector)
{
	var_58_float = 0; var_59_float = 0;
	var_60_int = var_56_cvector | var_56_cvector;
	var_59_float = sqrt(var_60_int);
	var_61_float = 9.999999974752427e-07;
	var_62_bool = var_59_float < var_61_float;
	if(var_62_bool != 0) {
		var_55_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_55_cvector = var_56_cvector / var_59_float;
	return 2;
}


func_1207(var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("branch", var_82_int);
	var_85_bool = var_82_int == (int)0;
	if(var_85_bool != 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x4c6";
	}
	var_87_bool = var_82_int == (int)1;
	if(var_87_bool != 0) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
	return 2;
}


func_1079(var_182_bool)
{
	var_184_int = 0; var_185_string = "";
	func_831(var_184_int, "oob10MorlokLaska1");
	var_187_bool = var_184_int == (int)0;
	if(var_187_bool != 0) {
		var_182_bool = 1;
		return 0;
	}
	var_182_bool = 0;
	return 0;
}


func_446(var_2_bool, var_146_string)
{
	var_147_bool = 0;
	func_929(var_147_bool);
	var_148_bool = var_147_bool == 0; //@nz
	if(var_148_bool != 0) {
		return 0;
	}
	var_149_bool = var_146_string == var_2_bool;
	if(var_149_bool != 0) {
		return 0;
	}
	var_150_string = ""; var_151_bool = 0;
	var_146_string = var_150_string;
	var_153_bool = var_146_string == "";
	if(var_153_bool != 0) {
		var_151_bool = 0;
	} else {
		var_151_bool = 1;
	}
	func_782(var_150_string, var_151_bool);
	var_2_bool = var_146_string;
	return 0;
	
}


func_831(var_139_int, var_140_string)
{
	var_141_int = 0; var_142_int = 0;
	GetVariable(var_140_string, var_142_int);
	var_142_int = var_139_int;
	return 2;
}


func_323(var_0_int, var_1_int, var_2_bool, var_3_bool, var_89_object, var_90_object)
{
	var_0_int = var_90_object;
	var_1_int = var_89_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_96_bool = 0; var_97_object = Obj();
		var_97_object = var_1_int;
		func_1091(var_97_object);
		var_104_bool = var_96_bool == 0; //@nz
		if(var_104_bool != 0) {
			var_105_string = "";
			func_446(var_90_object, "Neutral");
			@@@var_0_int:SetMessage((int)530541);
			@@@var_0_int:ClearReplies();
			@@@var_0_int:AddReply((int)530542, (int)-1, (int)31889);
		} else {
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_int;
				func_1067(var_145_object);
				if(var_144_bool != 0) {
					var_150_string = "";
					func_446(var_90_object, "Neutral");
					@@@var_0_int:SetMessage((int)530427);
					@@@var_0_int:ClearReplies();
					@@@var_0_int:AddReply((int)530428, (int)-1, (int)31800);
					goto Label_416;
				}
				var_155_string = "";
				func_446(var_90_object, "Neutral");
				@@@var_0_int:SetMessage((int)530429);
				@@@var_0_int:ClearReplies();
				var_157_bool = 0;
				var_157_bool = 0;
				var_158_bool = 0;
				var_158_bool = 0;
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_int;
				func_1079(var_160_object);
				if(var_159_bool != 0) {
					var_165_bool = 0; var_166_object = Obj();
					var_166_object = var_1_int;
					func_1043(var_166_object);
					if(var_165_bool != 0) {
						var_158_bool = 1;
					}
				}
				if(var_158_bool != 0) {
					var_171_bool = 0; var_172_object = Obj();
					var_172_object = var_1_int;
					func_1055(var_172_object);
					var_177_bool = var_171_bool == 0; //@nz
					if(var_177_bool != 0) {
						var_157_bool = 1;
					}
				}
				if(var_157_bool != 0) {
					@@@var_0_int:AddReply((int)530430, (int)31803, (int)31802);
				}
				@@@var_0_int:AddReply((int)530435, (int)-1, (int)31807);
				goto Label_416;
		}
	}
Label_416:
	var_126_bool = 0;
	func_929(var_126_bool);
	if(var_126_bool != 0) {

	Label_420:
		lshWaitForAnimEnd();
		var_127_bool = var_3_bool;
		if(var_127_bool != 0) {
		} else {
			var_128_string = "";
			var_128_string = var_2_bool;
			func_766(var_128_string);
			goto Label_420;
	}
		PlayAnimation("all", "idle");

	Label_435:
		WaitForAnimEnd();
		var_141_bool = var_3_bool;
		if(var_141_bool != 0) {
			goto Label_445;
		}
		PlayAnimation("all", "idle");
		goto Label_435;

	}
	goto Label_445;
	
Label_445:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x147";


func_1091(var_137_bool)
{
	var_139_int = 0; var_140_string = "";
	func_831(var_139_int, "b10q04MorlokTalk");
	var_144_bool = var_139_int != (int)0;
	if(var_144_bool != 0) {
		var_137_bool = 1;
		return 0;
	}
	var_137_bool = 0;
	return 0;
}


func_836(var_120_int, var_121_int)
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateIntVector(var_123_object);
	@@var_123_object:add(var_120_int);
	@@var_123_object:add(var_121_int);
	SendWorldWndMessage((int)3, var_123_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1224(var_16_object)
{
	var_17_int = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	TaskCall(1);
	func_249(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	return 0;
}


func_970()
{
	SetVariable("oob10MorlokLaska1", (int)1);
	return 0;
}


func_1103()
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateDiaryEntry(var_39_object, (int)550, (int)2, (int)530441);
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0;
	var_39_object = var_44_object;
	func_1129(var_43_bool, var_44_object, (int)545);
	return 2;
}
EMIT "Stack[-1] = 0";


func_976()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_848(var_109_object, var_110_object, var_111_int)
{
	var_112_int = 0; var_113_int = 0; var_114_bool = 0; var_115_int = 0; var_116_int = 0; var_117_bool = 0;
	@@var_110_object:GetItemID(var_115_int);
	GetInvItemProperty(var_116_int, var_115_int, "Category");
	@@var_109_object:AddItem(var_117_bool, var_110_object, var_116_int, var_111_int);
	var_119_bool = var_117_bool == 0; //@nz
	if(var_119_bool != 0) {
		@@var_109_object:DropItems(var_110_object, var_111_int);
	} else {
		var_120_int = 0; var_121_int = 0;
		var_115_int = var_120_int;
		var_111_int = var_121_int;
		func_836(var_120_int, var_121_int);
	}
	return 6;
	
}


func_82(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_84(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_674(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 0;
	}
	FindActor(var_4_object, "player");
	var_2_bool = false;
	var_3_bool = false;
	var_0_int = var_21_float;
	var_1_int = var_22_float;
	SetTimer((int)10, (float)1.0);
	func_163();
	var_81_bool = var_3_bool == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_982(var_68_object)
{
	var_69_object = Obj(); var_70_string = ""; var_71_float = 0;
	func_1157(Obj());
	var_72_object = var_69_object;
	func_1174(var_69_object, "pt_map_laska", (float)2);
	var_92_object = Obj();
	func_1157(var_92_object);
	@@var_68_object:ShowMap(var_92_object);
	return 0;
}


func_1116(var_52_object)
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


func_867(var_104_object, var_105_string, var_106_int)
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateInvItem(var_108_object);
	@@var_108_object:SetItemName(var_105_string);
	var_109_object = Obj(); var_110_object = Obj(); var_111_int = 0;
	var_104_object = var_109_object;
	var_108_object = var_110_object;
	var_106_int = var_111_int;
	func_848(var_109_object, var_110_object, var_111_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_998(var_209_bool)
{
	var_211_bool = 0;
	var_211_bool = 0;
	var_212_bool = 0;
	var_212_bool = 0;
	var_213_bool = 0;
	var_213_bool = 0;
	var_214_int = 0; var_215_string = "";
	func_831(var_214_int, "b10q04NotkinTalk");
	var_217_bool = var_214_int == (int)9;
	if(var_217_bool != 0) {
		var_218_int = 0; var_219_string = "";
		func_831(var_218_int, "b10q04Spi4kaTalk");
		var_221_bool = var_218_int == (int)9;
		if(var_221_bool != 0) {
			var_213_bool = 1;
		}
	}
	if(var_213_bool != 0) {
		var_222_int = 0; var_223_string = "";
		func_831(var_222_int, "b10q04MishkaTalk");
		var_225_bool = var_222_int == (int)9;
		if(var_225_bool != 0) {
			var_212_bool = 1;
		}
	}
	if(var_212_bool != 0) {
		var_226_int = 0; var_227_string = "";
		func_831(var_226_int, "b10q04LaskaTalk");
		var_229_bool = var_226_int == (int)9;
		if(var_229_bool != 0) {
			var_211_bool = 1;
		}
	}
	if(var_211_bool != 0) {
		var_209_bool = 1;
		return 0;
	}
	var_209_bool = 0;
	return 0;
}


func_1129(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	func_1116(Obj());
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


func_748()
{
	var_186_bool = 0; var_187_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_189_bool = 0;
	func_929(var_189_bool);
	if(var_189_bool != 0) {
	} else {
		HasAnimationTrack(var_187_bool, "head");
		var_191_bool = var_187_bool;
		if(var_191_bool == 0) goto Label_765;
		UnlookAsync("head");
	}
Label_765:
	return 2;
	
}


func_111(var_0_int, var_1_int, var_4_object, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_object == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_object;
	func_666(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_bool = var_2_bool;
	if(var_27_bool != 0) {
		var_17_float = var_17_float - var_1_int;
	}
	var_15_bool = var_17_float < var_0_int;
	return 2;
}


func_880(var_61_bool, var_62_string, var_63_string)
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


func_242(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_244()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_249(var_0_int, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_0_int = var_18_object;
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0;
	var_18_object = var_29_object;
	func_679(var_28_bool, var_29_object, (float)110.0);
	var_75_bool = var_28_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_76_int = 0;
	func_923(var_76_int);
	@@var_24_object:SetNPCName(var_76_int);
	var_77_int = 0;
	func_921(var_77_int);
	@@var_24_object:SetNPCDescription(var_77_int);
	var_78_string = "";
	func_925(var_78_string);
	@@var_24_object:SetPhoto(var_78_string);
	var_79_string = "";
	func_927(var_79_string);
	@@var_24_object:SetPhoto2(var_79_string);
	var_80_int = 0;
	func_1207(var_80_int);
	@@var_24_object:SetPlayerName(var_80_int);
	IsOverrideActive(var_25_bool);
	var_88_bool = var_25_bool;
	if(var_88_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	DoDialog(var_24_object);
	var_89_object = Obj(); var_90_object = Obj();
	var_18_object = var_89_object;
	var_24_object = var_90_object;
	TaskCall(2);
	func_323(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object);
	TaskReturn();
	@@var_24_object:IsDialogEnd(var_27_bool);
	
Label_305:
	var_184_bool = var_27_bool == 0; //@nz
	if(var_184_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_305;
	}
	var_18_object = Obj();
	func_748();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_892(var_35_float)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_37_float = var_35_float;
	return 2;
}


func_766(var_128_string)
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


