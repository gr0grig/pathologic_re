// @IMPORTS: rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,StopGroup0/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,HasAnimation/3,SetVariable/2,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: W:cleanup|W:player|W:head|W:all|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Morlok.png|W:ui/NPC_Morlok_b.png|W:avroks blood is given|W:avroks_blood|W:b10q04Spi4kaTalk|W:b10q04MorlokGotoSpi4ka|W:pt_map_spi4ka|A:AddMark|W:oob10MorlokSpi4ka1|W:playsound|W:giveitem|A:ShowMap|W:b10q04NotkinTalk|W:b10q04MishkaTalk|W:b10q04LaskaTalk|W:b10q04|W:b10q04MorlokTalk|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
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
// @PE: 0x6,0x35,0x54,0x7e,0x95,0x143,0x1be,0x1d4,0x397,0x3b9,0x3bf,0x3c5,0x3d5,0x402,0x40e,0x41a,0x426,0x432,0x4b7

task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	func_149(var_11_string, var_12_bool);
	var_16_object = Obj();
	var_12_bool = var_16_object;
	func_1207(var_16_object);
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
		var_17_bool = var_13_int == (int)31779;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_int;
			var_19_object = var_0_int;
			func_930();
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_int;
			var_62_object = var_0_int;
			func_965(var_62_object);
		}
		var_88_bool = var_13_int == (int)31781;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_int;
			var_90_object = var_0_int;
			func_953();
		}
		var_94_bool = var_13_int == (int)31783;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_int;
			var_96_object = var_0_int;
			func_919(var_96_object);
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_int;
			var_120_object = var_0_int;
			func_959();
		}
		var_124_bool = var_13_int == (int)31785;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_int;
			var_126_object = var_0_int;
			func_919(var_126_object);
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_int;
			var_128_object = var_0_int;
			func_959();
		}
		var_130_bool = var_12_int == (int)31892;
		if(var_130_bool != 0) {
			var_131_bool = 0; var_132_object = Obj();
			var_132_object = var_1_int;
			func_1074(var_132_object);
			var_139_bool = var_131_bool == 0; //@nz
			if(var_139_bool != 0) {
				var_140_string = "";
				func_446(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530545);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530546, (int)-1, (int)31893);
				return 0;
			}
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_int;
			func_1062(var_162_object);
			if(var_161_bool != 0) {
				var_167_string = "";
				func_446(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530406);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530407, (int)-1, (int)31779);
				return 0;
			}
			var_172_string = "";
			func_446(var_13_int, "Neutral");
			@@@var_0_int:SetMessage((int)530408);
			@@@var_0_int:ClearReplies();
			var_174_bool = 0;
			var_174_bool = 0;
			var_175_bool = 0;
			var_175_bool = 0;
			var_176_bool = 0; var_177_object = Obj();
			var_177_object = var_1_int;
			func_1026(var_177_object);
			if(var_176_bool != 0) {
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_int;
				func_1050(var_183_object);
				if(var_182_bool != 0) {
					var_175_bool = 1;
				}
			}
			if(var_175_bool != 0) {
				var_188_bool = 0; var_189_object = Obj();
				var_189_object = var_1_int;
				func_1038(var_189_object);
				var_194_bool = var_188_bool == 0; //@nz
				if(var_194_bool != 0) {
					var_174_bool = 1;
				}
			}
			if(var_174_bool != 0) {
				@@@var_0_int:AddReply((int)530409, (int)31782, (int)31781);
			}
			@@@var_0_int:AddReply((int)530414, (int)-1, (int)31786);
			return 0;
		}
		var_202_bool = var_12_int == (int)31782;
		if(var_202_bool != 0) {
			var_203_bool = 0; var_204_object = Obj();
			var_204_object = var_1_int;
			func_981(var_204_object);
			if(var_203_bool != 0) {
				var_224_string = "";
				func_446(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530410);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530411, (int)-1, (int)31783);
				return 0;
			}
			var_229_bool = 0; var_230_object = Obj();
			var_230_object = var_1_int;
			func_981(var_230_object);
			var_231_bool = var_229_bool == 0; //@nz
			if(var_231_bool != 0) {
				var_232_string = "";
				func_446(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530412);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530413, (int)-1, (int)31785);
				return 0;
			}
		}
		var_3_bool = true;
		var_237_bool = 0;
		func_917(var_237_bool);
		if(var_237_bool != 0) {
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


func_1026(var_176_bool)
{
	var_178_int = 0; var_179_string = "";
	func_831(var_178_int, "b10q04Spi4kaTalk");
	var_181_bool = var_178_int == (int)9;
	if(var_181_bool != 0) {
		var_176_bool = 1;
		return 0;
	}
	var_176_bool = 0;
	return 0;
}


func_1157(var_63_object, var_64_string, var_65_float)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_bool = 0;
	GetMainOutdoorScene(var_73_object);
	var_75_bool = var_73_object == 0; //@ne
	if(var_75_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_73_object:GetLocator(var_64_string, var_74_bool, var_71_cvector, var_72_cvector);
	var_77_bool = var_74_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_79_int = "Warning: outdoor scene locator " + var_64_string;
		var_81_int = var_79_int + " doesnt exist";
		Trace(var_81_int);
	}
	@@var_73_object:GetMap(var_63_object);
	var_82_bool = var_63_object == 0; //@ne
	if(var_82_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_84_float = GetByIndex(var_71_cvector, 0);
	var_85_float = GetByIndex(var_71_cvector, 2);
	@@var_63_object:SetMapParams(var_84_float, var_85_float, var_65_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_909(var_77_int)
{
	var_77_int = 521048;
	return 0;
}


func_1038(var_188_bool)
{
	var_190_int = 0; var_191_string = "";
	func_831(var_190_int, "b10q04");
	var_193_bool = var_190_int == (int)-1;
	if(var_193_bool != 0) {
		var_188_bool = 1;
		return 0;
	}
	var_188_bool = 0;
	return 0;
}


func_911(var_76_int)
{
	var_76_int = 521047;
	return 0;
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


func_913(var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png";
	return 0;
}


func_782(var_144_string, var_145_bool)
{
	var_148_bool = 0; var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_float = 0; var_153_float = 0;
	lshHasAnimation(var_151_bool, var_144_string);
	var_154_bool = var_151_bool;
	if(var_154_bool != 0) {
		lshGetAnimTimes(var_144_string, var_152_float, var_153_float);
		lshPlayAnimation(var_152_float, var_153_float, var_145_bool);
	} else {
		var_156_int = "Can't find lsh animation : " + var_144_string;
		Trace(var_156_int);
	}
	return 6;
	
}


func_915(var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png";
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


func_917(var_15_bool)
{
	var_15_bool = 0;
	return 0;
}


func_919(var_95_object)
{
	Trace("avroks blood is given");
	var_98_object = Obj(); var_99_string = ""; var_100_int = 0;
	var_95_object = var_98_object;
	func_867(var_98_object, "avroks_blood", (int)1);
	return 0;
}


func_1050(var_182_bool)
{
	var_184_int = 0; var_185_string = "";
	func_831(var_184_int, "oob10MorlokSpi4ka1");
	var_187_bool = var_184_int == (int)0;
	if(var_187_bool != 0) {
		var_182_bool = 1;
		return 0;
	}
	var_182_bool = 0;
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
	func_892((int)0);
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
			func_885(var_68_string, var_69_int);
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


func_930()
{
	var_20_object = Obj(); var_21_object = Obj();
	SetVariable("b10q04Spi4kaTalk", (int)1);
	func_1140(Obj());
	var_24_object = var_21_object;
	var_35_float = 0;
	func_880(var_35_float);
	@@var_21_object:AddMark("b10q04MorlokGotoSpi4ka", "pt_map_spi4ka", (int)0, (int)530552, var_35_float);
	func_1086();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1190(var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("branch", var_82_int);
	var_85_bool = var_82_int == (int)0;
	if(var_85_bool != 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x4b5";
	}
	var_87_bool = var_82_int == (int)1;
	if(var_87_bool != 0) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
	return 2;
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
	func_917(var_71_bool);
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


func_1062(var_161_bool)
{
	var_163_int = 0; var_164_string = "";
	func_831(var_163_int, "b10q04Spi4kaTalk");
	var_166_bool = var_163_int == (int)0;
	if(var_166_bool != 0) {
		var_161_bool = 1;
		return 0;
	}
	var_161_bool = 0;
	return 0;
}


func_808()
{
	var_15_bool = 0;
	func_917(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_815(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1074(var_131_bool)
{
	var_133_int = 0; var_134_string = "";
	func_831(var_133_int, "b10q04MorlokTalk");
	var_138_bool = var_133_int != (int)0;
	if(var_138_bool != 0) {
		var_131_bool = 1;
		return 0;
	}
	var_131_bool = 0;
	return 0;
}


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


func_1207(var_16_object)
{
	var_17_int = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	TaskCall(1);
	func_249(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	return 0;
}


func_953()
{
	SetVariable("oob10MorlokSpi4ka1", (int)1);
	return 0;
}


func_446(var_2_bool, var_140_string)
{
	var_141_bool = 0;
	func_917(var_141_bool);
	var_142_bool = var_141_bool == 0; //@nz
	if(var_142_bool != 0) {
		return 0;
	}
	var_143_bool = var_140_string == var_2_bool;
	if(var_143_bool != 0) {
		return 0;
	}
	var_144_string = ""; var_145_bool = 0;
	var_140_string = var_144_string;
	var_147_bool = var_140_string == "";
	if(var_147_bool != 0) {
		var_145_bool = 0;
	} else {
		var_145_bool = 1;
	}
	func_782(var_144_string, var_145_bool);
	var_2_bool = var_140_string;
	return 0;
	
}


func_959()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1086()
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateDiaryEntry(var_39_object, (int)548, (int)2, (int)530439);
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0;
	var_39_object = var_44_object;
	func_1112(var_43_bool, var_44_object, (int)545);
	return 2;
}
EMIT "Stack[-1] = 0";


func_831(var_133_int, var_134_string)
{
	var_135_int = 0; var_136_int = 0;
	GetVariable(var_134_string, var_136_int);
	var_136_int = var_133_int;
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
		func_1074(var_97_object);
		var_104_bool = var_96_bool == 0; //@nz
		if(var_104_bool != 0) {
			var_105_string = "";
			func_446(var_90_object, "Neutral");
			@@@var_0_int:SetMessage((int)530545);
			@@@var_0_int:ClearReplies();
			@@@var_0_int:AddReply((int)530546, (int)-1, (int)31893);
		} else {
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_int;
				func_1062(var_145_object);
				if(var_144_bool != 0) {
					var_150_string = "";
					func_446(var_90_object, "Neutral");
					@@@var_0_int:SetMessage((int)530406);
					@@@var_0_int:ClearReplies();
					@@@var_0_int:AddReply((int)530407, (int)-1, (int)31779);
					goto Label_416;
				}
				var_155_string = "";
				func_446(var_90_object, "Neutral");
				@@@var_0_int:SetMessage((int)530408);
				@@@var_0_int:ClearReplies();
				var_157_bool = 0;
				var_157_bool = 0;
				var_158_bool = 0;
				var_158_bool = 0;
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_int;
				func_1026(var_160_object);
				if(var_159_bool != 0) {
					var_165_bool = 0; var_166_object = Obj();
					var_166_object = var_1_int;
					func_1050(var_166_object);
					if(var_165_bool != 0) {
						var_158_bool = 1;
					}
				}
				if(var_158_bool != 0) {
					var_171_bool = 0; var_172_object = Obj();
					var_172_object = var_1_int;
					func_1038(var_172_object);
					var_177_bool = var_171_bool == 0; //@nz
					if(var_177_bool != 0) {
						var_157_bool = 1;
					}
				}
				if(var_157_bool != 0) {
					@@@var_0_int:AddReply((int)530409, (int)31782, (int)31781);
				}
				@@@var_0_int:AddReply((int)530414, (int)-1, (int)31786);
				goto Label_416;
		}
	}
Label_416:
	var_126_bool = 0;
	func_917(var_126_bool);
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


func_836(var_114_int, var_115_int)
{
	var_116_object = Obj(); var_117_object = Obj();
	CreateIntVector(var_117_object);
	@@var_117_object:add(var_114_int);
	@@var_117_object:add(var_115_int);
	SendWorldWndMessage((int)3, var_117_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_965(var_62_object)
{
	var_63_object = Obj(); var_64_string = ""; var_65_float = 0;
	func_1140(Obj());
	var_66_object = var_63_object;
	func_1157(var_63_object, "pt_map_spi4ka", (float)2);
	var_86_object = Obj();
	func_1140(var_86_object);
	@@var_62_object:ShowMap(var_86_object);
	return 0;
}


func_1099(var_52_object)
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


func_848(var_103_object, var_104_object, var_105_int)
{
	var_106_int = 0; var_107_int = 0; var_108_bool = 0; var_109_int = 0; var_110_int = 0; var_111_bool = 0;
	@@var_104_object:GetItemID(var_109_int);
	GetInvItemProperty(var_110_int, var_109_int, "Category");
	@@var_103_object:AddItem(var_111_bool, var_104_object, var_110_int, var_105_int);
	var_113_bool = var_111_bool == 0; //@nz
	if(var_113_bool != 0) {
		@@var_103_object:DropItems(var_104_object, var_105_int);
	} else {
		var_114_int = 0; var_115_int = 0;
		var_109_int = var_114_int;
		var_105_int = var_115_int;
		func_836(var_114_int, var_115_int);
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


func_981(var_203_bool)
{
	var_205_bool = 0;
	var_205_bool = 0;
	var_206_bool = 0;
	var_206_bool = 0;
	var_207_bool = 0;
	var_207_bool = 0;
	var_208_int = 0; var_209_string = "";
	func_831(var_208_int, "b10q04NotkinTalk");
	var_211_bool = var_208_int == (int)9;
	if(var_211_bool != 0) {
		var_212_int = 0; var_213_string = "";
		func_831(var_212_int, "b10q04Spi4kaTalk");
		var_215_bool = var_212_int == (int)9;
		if(var_215_bool != 0) {
			var_207_bool = 1;
		}
	}
	if(var_207_bool != 0) {
		var_216_int = 0; var_217_string = "";
		func_831(var_216_int, "b10q04MishkaTalk");
		var_219_bool = var_216_int == (int)9;
		if(var_219_bool != 0) {
			var_206_bool = 1;
		}
	}
	if(var_206_bool != 0) {
		var_220_int = 0; var_221_string = "";
		func_831(var_220_int, "b10q04LaskaTalk");
		var_223_bool = var_220_int == (int)9;
		if(var_223_bool != 0) {
			var_205_bool = 1;
		}
	}
	if(var_205_bool != 0) {
		var_203_bool = 1;
		return 0;
	}
	var_203_bool = 0;
	return 0;
}


func_1112(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	func_1099(Obj());
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


func_867(var_98_object, var_99_string, var_100_int)
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateInvItem(var_102_object);
	@@var_102_object:SetItemName(var_99_string);
	var_103_object = Obj(); var_104_object = Obj(); var_105_int = 0;
	var_98_object = var_103_object;
	var_102_object = var_104_object;
	var_100_int = var_105_int;
	func_848(var_103_object, var_104_object, var_105_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_748()
{
	var_186_bool = 0; var_187_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_189_bool = 0;
	func_917(var_189_bool);
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


func_880(var_35_float)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_37_float = var_35_float;
	return 2;
}


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


func_885(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_1140(var_24_object)
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
	func_911(var_76_int);
	@@var_24_object:SetNPCName(var_76_int);
	var_77_int = 0;
	func_909(var_77_int);
	@@var_24_object:SetNPCDescription(var_77_int);
	var_78_string = "";
	func_913(var_78_string);
	@@var_24_object:SetPhoto(var_78_string);
	var_79_string = "";
	func_915(var_79_string);
	@@var_24_object:SetPhoto2(var_79_string);
	var_80_int = 0;
	func_1190(var_80_int);
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


func_892(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_894:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_885(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_894;
	}
	var_49_int = var_46_int;
	return 4;
	
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


