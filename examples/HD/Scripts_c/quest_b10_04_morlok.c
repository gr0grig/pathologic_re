// @IMPORTS: rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,StopGroup0/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: W:cleanup|W:player|W:head|W:all|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Morlok.png|W:ui/NPC_Morlok_b.png|W:pt_map_notkin|A:ShowMap|W:b10q04NotkinTalk|W:b10q04MorlokGotoNotkin|A:AddMark|W:quest_b10_04|W:completed|W:oob10MorlokMain1|W:oob10MorlokMain2|W:b10q04MorlokTalk|W:b10q04|W:b10q04Spi4kaTalk|W:b10q04MishkaTalk|W:b10q04LaskaTalk|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
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
// @EVENT_11: op=0x204 vars=int,int
// @PE: 0x6,0x35,0x54,0x7e,0x95,0x143,0x1ee,0x204,0x421,0x448,0x452,0x458,0x45e,0x464,0x470,0x49d,0x4a9,0x4b5,0x4c1,0x4cd,0x55f

task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	func_149(var_11_string, var_12_bool);
	var_16_object = Obj();
	var_12_bool = var_16_object;
	func_1375(var_16_object);
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
		func_985(var_19_object);
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
				func_967(var_29_object);
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
		func_978();
		var_17_bool = var_13_int == (int)31765;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_int;
			var_19_object = var_0_int;
			func_1073();
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_int;
			var_62_object = var_0_int;
			func_1118();
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_int;
			var_66_object = var_0_int;
			func_1057(var_66_object);
		}
		var_92_bool = var_13_int == (int)31773;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_int;
			var_94_object = var_0_int;
			func_1096();
		}
		var_110_bool = var_13_int == (int)32854;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_int;
			var_112_object = var_0_int;
			func_1096();
		}
		var_114_bool = var_13_int == (int)31774;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_int;
			var_116_object = var_0_int;
			func_1112();
		}
		var_120_bool = var_12_int == (int)31758;
		if(var_120_bool != 0) {
			var_121_bool = 0;
			var_121_bool = 0;
			var_122_bool = 0; var_123_object = Obj();
			var_123_object = var_1_int;
			func_1124(var_123_object);
			if(var_122_bool != 0) {
				var_130_bool = 0; var_131_object = Obj();
				var_131_object = var_1_int;
				func_1217(var_131_object);
				if(var_130_bool != 0) {
					var_121_bool = 1;
				}
			}
			if(var_121_bool != 0) {
				var_136_object = Obj(); var_137_object = Obj();
				var_136_object = var_1_int;
				var_137_object = var_0_int;
				func_1106();
				var_140_string = "";
				func_494(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530386);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530387, (int)31760, (int)31759);
				@@@var_0_int:AddReply((int)531497, (int)31762, (int)32855);
				return 0;
			}
			var_164_bool = 0;
			var_164_bool = 0;
			var_165_bool = 0;
			var_165_bool = 0;
			var_166_bool = 0; var_167_object = Obj();
			var_167_object = var_1_int;
			func_1136(var_167_object);
			if(var_166_bool != 0) {
				var_187_bool = 0; var_188_object = Obj();
				var_188_object = var_1_int;
				func_1193(var_188_object);
				var_193_bool = var_187_bool == 0; //@nz
				if(var_193_bool != 0) {
					var_165_bool = 1;
				}
			}
			if(var_165_bool != 0) {
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_int;
				func_1205(var_195_object);
				var_200_bool = var_194_bool == 0; //@nz
				if(var_200_bool != 0) {
					var_164_bool = 1;
				}
			}
			if(var_164_bool != 0) {
				var_201_string = "";
				func_494(var_13_int, "Neutral");
				@@@var_0_int:SetMessage((int)530396);
				@@@var_0_int:ClearReplies();
				@@@var_0_int:AddReply((int)530397, (int)31770, (int)31769);
				return 0;
			}
			var_206_string = "";
			func_494(var_13_int, "Neutral");
			@@@var_0_int:SetMessage((int)530394);
			@@@var_0_int:ClearReplies();
			var_208_bool = 0;
			var_208_bool = 0;
			var_209_bool = 0;
			var_209_bool = 0;
			var_210_bool = 0;
			var_210_bool = 0;
			var_211_bool = 0; var_212_object = Obj();
			var_212_object = var_1_int;
			func_1181(var_212_object);
			if(var_211_bool != 0) {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_int;
				func_1193(var_218_object);
				var_219_bool = var_217_bool == 0; //@nz
				if(var_219_bool != 0) {
					var_210_bool = 1;
				}
			}
			if(var_210_bool != 0) {
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_int;
				func_1205(var_221_object);
				var_222_bool = var_220_bool == 0; //@nz
				if(var_222_bool != 0) {
					var_209_bool = 1;
				}
			}
			if(var_209_bool != 0) {
				var_223_bool = 0; var_224_object = Obj();
				var_224_object = var_1_int;
				func_1229(var_224_object);
				if(var_223_bool != 0) {
					var_208_bool = 1;
				}
			}
			if(var_208_bool != 0) {
				@@@var_0_int:AddReply((int)530402, (int)31775, (int)31774);
			}
			@@@var_0_int:AddReply((int)530395, (int)-1, (int)31767);
			return 0;
		}
		var_236_bool = var_12_int == (int)31775;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_494(var_13_int, "Neutral");
			@@@var_0_int:SetMessage((int)530403);
			@@@var_0_int:ClearReplies();
			@@@var_0_int:AddReply((int)530404, (int)-1, (int)31776);
			return 0;
		}
		var_243_bool = var_12_int == (int)31770;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_494(var_13_int, "Neutral");
			@@@var_0_int:SetMessage((int)530398);
			@@@var_0_int:ClearReplies();
			@@@var_0_int:AddReply((int)530399, (int)31772, (int)31771);
			@@@var_0_int:AddReply((int)531496, (int)-1, (int)32854);
			return 0;
		}
		var_253_bool = var_12_int == (int)31772;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_494(var_13_int, "Neutral");
			@@@var_0_int:SetMessage((int)530400);
			@@@var_0_int:ClearReplies();
			@@@var_0_int:AddReply((int)530401, (int)-1, (int)31773);
			return 0;
		}
		var_260_bool = var_12_int == (int)31760;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_494(var_13_int, "Neutral");
			@@@var_0_int:SetMessage((int)530388);
			@@@var_0_int:ClearReplies();
			@@@var_0_int:AddReply((int)530389, (int)31762, (int)31761);
			@@@var_0_int:AddReply((int)531498, (int)31762, (int)32857);
			return 0;
		}
		var_270_bool = var_12_int == (int)31762;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_494(var_13_int, "Neutral");
			@@@var_0_int:SetMessage((int)530390);
			@@@var_0_int:ClearReplies();
			@@@var_0_int:AddReply((int)530391, (int)31764, (int)31763);
			@@@var_0_int:AddReply((int)531499, (int)31764, (int)32859);
			return 0;
		}
		var_280_bool = var_12_int == (int)31764;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_494(var_13_int, "Neutral");
			@@@var_0_int:SetMessage((int)530392);
			@@@var_0_int:ClearReplies();
			@@@var_0_int:AddReply((int)530393, (int)-1, (int)31765);
			return 0;
		}
		var_3_bool = true;
		var_286_bool = 0;
		func_1055(var_286_bool);
		if(var_286_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x205";
	
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_15(var_11_bool, (float)300, (float)100);
	return 0;
}


func_1280(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	func_1267(Obj());
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


func_1030(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_1032:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_1023(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_1032;
	}
	var_49_int = var_46_int;
	return 4;
	
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


func_918()
{
	var_230_bool = 0; var_231_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_233_bool = 0;
	func_1055(var_233_bool);
	if(var_233_bool != 0) {
	} else {
		HasAnimationTrack(var_231_bool, "head");
		var_235_bool = var_231_bool;
		if(var_235_bool == 0) goto Label_935;
		UnlookAsync("head");
	}
Label_935:
	return 2;
	
}


func_1047(var_77_int)
{
	var_77_int = 521048;
	return 0;
}


func_1049(var_76_int)
{
	var_76_int = 521047;
	return 0;
}


func_1051(var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png";
	return 0;
}


func_1308(var_24_object)
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


func_1181(var_211_bool)
{
	var_213_int = 0; var_214_string = "";
	func_1001(var_213_int, "b10q04NotkinTalk");
	var_216_bool = var_213_int == (int)9;
	if(var_216_bool != 0) {
		var_211_bool = 1;
		return 0;
	}
	var_211_bool = 0;
	return 0;
}


func_1053(var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png";
	return 0;
}


func_1055(var_15_bool)
{
	var_15_bool = 0;
	return 0;
}


func_33(var_5_bool)
{
	var_5_bool = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_844(var_16_bool);
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
		func_985(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_1057(var_66_object)
{
	var_67_object = Obj(); var_68_string = ""; var_69_float = 0;
	func_1308(Obj());
	var_70_object = var_67_object;
	func_1325(var_67_object, "pt_map_notkin", (float)2);
	var_90_object = Obj();
	func_1308(var_90_object);
	@@var_66_object:ShowMap(var_90_object);
	return 0;
}


func_163()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_844(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_1030((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_177:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_844(var_62_bool);
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
			func_1023(var_68_string, var_69_int);
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


func_936(var_141_string)
{
	var_142_bool = 0; var_143_float = 0; var_144_float = 0; var_145_bool = 0; var_146_float = 0; var_147_float = 0;
	lshHasAnimation(var_145_bool, var_141_string);
	var_148_bool = var_145_bool;
	if(var_148_bool != 0) {
		lshGetAnimTimes(var_141_string, var_146_float, var_147_float);
		lshPlayAnimation(var_146_float, var_147_float, (bool)0);
	} else {
		var_151_int = "Can't find lsh animation : " + var_141_string;
		Trace(var_151_int);
	}
	return 6;
	
}


func_1193(var_187_bool)
{
	var_189_int = 0; var_190_string = "";
	func_1001(var_189_int, "b10q04");
	var_192_bool = var_189_int == (int)1000;
	if(var_192_bool != 0) {
		var_187_bool = 1;
		return 0;
	}
	var_187_bool = 0;
	return 0;
}


func_1325(var_67_object, var_68_string, var_69_float)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_object = Obj(); var_78_bool = 0;
	GetMainOutdoorScene(var_77_object);
	var_79_bool = var_77_object == 0; //@ne
	if(var_79_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_77_object:GetLocator(var_68_string, var_78_bool, var_75_cvector, var_76_cvector);
	var_81_bool = var_78_bool == 0; //@nz
	if(var_81_bool != 0) {
		var_83_int = "Warning: outdoor scene locator " + var_68_string;
		var_85_int = var_83_int + " doesnt exist";
		Trace(var_85_int);
	}
	@@var_77_object:GetMap(var_67_object);
	var_86_bool = var_67_object == 0; //@ne
	if(var_86_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_88_float = GetByIndex(var_75_cvector, 0);
	var_89_float = GetByIndex(var_75_cvector, 2);
	@@var_67_object:SetMapParams(var_88_float, var_89_float, var_69_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1073()
{
	var_20_object = Obj(); var_21_object = Obj();
	SetVariable("b10q04NotkinTalk", (int)1);
	func_1308(Obj());
	var_24_object = var_21_object;
	var_35_float = 0;
	func_1018(var_35_float);
	@@var_21_object:AddMark("b10q04MorlokGotoNotkin", "pt_map_notkin", (int)0, (int)530549, var_35_float);
	func_1254();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1205(var_194_bool)
{
	var_196_int = 0; var_197_string = "";
	func_1001(var_196_int, "b10q04");
	var_199_bool = var_196_int == (int)-1;
	if(var_199_bool != 0) {
		var_194_bool = 1;
		return 0;
	}
	var_194_bool = 0;
	return 0;
}


func_952(var_144_string, var_145_bool)
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


func_1217(var_130_bool)
{
	var_132_int = 0; var_133_string = "";
	func_1001(var_132_int, "oob10MorlokMain1");
	var_135_bool = var_132_int == (int)0;
	if(var_135_bool != 0) {
		var_130_bool = 1;
		return 0;
	}
	var_130_bool = 0;
	return 0;
}


func_323(var_0_int, var_1_int, var_2_bool, var_3_bool, var_89_object, var_90_object)
{
	var_0_int = var_90_object;
	var_1_int = var_89_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_96_bool = 0;
		var_96_bool = 0;
		var_97_bool = 0; var_98_object = Obj();
		var_98_object = var_1_int;
		func_1124(var_98_object);
		if(var_97_bool != 0) {
			var_105_bool = 0; var_106_object = Obj();
			var_106_object = var_1_int;
			func_1217(var_106_object);
			if(var_105_bool != 0) {
				var_96_bool = 1;
			}
		}
		if(var_96_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_int;
			var_112_object = var_0_int;
			func_1106();
			var_115_string = "";
			func_494(var_90_object, "Neutral");
			@@@var_0_int:SetMessage((int)530386);
			@@@var_0_int:ClearReplies();
			@@@var_0_int:AddReply((int)530387, (int)31760, (int)31759);
			@@@var_0_int:AddReply((int)531497, (int)31762, (int)32855);
		} else {
				var_157_bool = 0;
				var_157_bool = 0;
				var_158_bool = 0;
				var_158_bool = 0;
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_int;
				func_1136(var_160_object);
				if(var_159_bool != 0) {
					var_180_bool = 0; var_181_object = Obj();
					var_181_object = var_1_int;
					func_1193(var_181_object);
					var_186_bool = var_180_bool == 0; //@nz
					if(var_186_bool != 0) {
						var_158_bool = 1;
					}
				}
				if(var_158_bool != 0) {
					var_187_bool = 0; var_188_object = Obj();
					var_188_object = var_1_int;
					func_1205(var_188_object);
					var_193_bool = var_187_bool == 0; //@nz
					if(var_193_bool != 0) {
						var_157_bool = 1;
					}
				}
				if(var_157_bool != 0) {
					var_194_string = "";
					func_494(var_90_object, "Neutral");
					@@@var_0_int:SetMessage((int)530396);
					@@@var_0_int:ClearReplies();
					@@@var_0_int:AddReply((int)530397, (int)31770, (int)31769);
					goto Label_464;
				}
				var_199_string = "";
				func_494(var_90_object, "Neutral");
				@@@var_0_int:SetMessage((int)530394);
				@@@var_0_int:ClearReplies();
				var_201_bool = 0;
				var_201_bool = 0;
				var_202_bool = 0;
				var_202_bool = 0;
				var_203_bool = 0;
				var_203_bool = 0;
				var_204_bool = 0; var_205_object = Obj();
				var_205_object = var_1_int;
				func_1181(var_205_object);
				if(var_204_bool != 0) {
					var_210_bool = 0; var_211_object = Obj();
					var_211_object = var_1_int;
					func_1193(var_211_object);
					var_212_bool = var_210_bool == 0; //@nz
					if(var_212_bool != 0) {
						var_203_bool = 1;
					}
				}
				if(var_203_bool != 0) {
					var_213_bool = 0; var_214_object = Obj();
					var_214_object = var_1_int;
					func_1205(var_214_object);
					var_215_bool = var_213_bool == 0; //@nz
					if(var_215_bool != 0) {
						var_202_bool = 1;
					}
				}
				if(var_202_bool != 0) {
					var_216_bool = 0; var_217_object = Obj();
					var_217_object = var_1_int;
					func_1229(var_217_object);
					if(var_216_bool != 0) {
						var_201_bool = 1;
					}
				}
				if(var_201_bool != 0) {
					@@@var_0_int:AddReply((int)530402, (int)31775, (int)31774);
				}
				@@@var_0_int:AddReply((int)530395, (int)-1, (int)31767);
				goto Label_464;
		}
	}
Label_464:
	var_139_bool = 0;
	func_1055(var_139_bool);
	if(var_139_bool != 0) {

	Label_468:
		lshWaitForAnimEnd();
		var_140_bool = var_3_bool;
		if(var_140_bool != 0) {
		} else {
			var_141_string = "";
			var_141_string = var_2_bool;
			func_936(var_141_string);
			goto Label_468;
	}
		PlayAnimation("all", "idle");

	Label_483:
		WaitForAnimEnd();
		var_154_bool = var_3_bool;
		if(var_154_bool != 0) {
			goto Label_493;
		}
		PlayAnimation("all", "idle");
		goto Label_483;

	}
	goto Label_493;
	
Label_493:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x147";


func_836(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_967(var_29_object)
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


func_1096()
{
	func_1241();
	var_103_bool = 0; var_104_string = ""; var_105_string = "";
	func_1006(var_103_bool, "quest_b10_04", "completed");
	return 0;
}


func_844(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_1229(var_223_bool)
{
	var_225_int = 0; var_226_string = "";
	func_1001(var_225_int, "oob10MorlokMain2");
	var_228_bool = var_225_int == (int)0;
	if(var_228_bool != 0) {
		var_223_bool = 1;
		return 0;
	}
	var_223_bool = 0;
	return 0;
}


func_1358(var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("branch", var_82_int);
	var_85_bool = var_82_int == (int)0;
	if(var_85_bool != 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x55d";
	}
	var_87_bool = var_82_int == (int)1;
	if(var_87_bool != 0) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
	return 2;
}


func_849(var_28_bool, var_29_object, var_30_float)
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
	func_991(var_55_cvector, var_56_cvector);
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
	func_1055(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		HasAnimationTrack(var_48_bool, "head");
		var_73_bool = var_48_bool;
		if(var_73_bool == 0) goto Label_912;
		LookAsyncCamera("head");
	}
Label_912:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 18;
	
}


func_82(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_1106()
{
	SetVariable("oob10MorlokMain1", (int)1);
	return 0;
}


func_84(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_844(var_23_bool);
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


func_978()
{
	var_15_bool = 0;
	func_1055(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1112()
{
	SetVariable("oob10MorlokMain2", (int)1);
	return 0;
}


func_985(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1241()
{
	var_95_object = Obj(); var_96_object = Obj();
	CreateDiaryEntry(var_96_object, (int)560, (int)2, (int)530539);
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0;
	var_96_object = var_101_object;
	func_1280(var_100_bool, var_101_object, (int)545);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1118()
{
	SetVariable("b10q04MorlokTalk", (int)1);
	return 0;
}


func_1375(var_16_object)
{
	var_17_int = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	TaskCall(1);
	func_249(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	return 0;
}


func_991(var_55_cvector, var_56_cvector)
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


func_1124(var_122_bool)
{
	var_124_int = 0; var_125_string = "";
	func_1001(var_124_int, "b10q04");
	var_129_bool = var_124_int == (int)1;
	if(var_129_bool != 0) {
		var_122_bool = 1;
		return 0;
	}
	var_122_bool = 0;
	return 0;
}


func_1254()
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateDiaryEntry(var_39_object, (int)547, (int)2, (int)530438);
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0;
	var_39_object = var_44_object;
	func_1280(var_43_bool, var_44_object, (int)545);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1001(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0;
	GetVariable(var_125_string, var_127_int);
	var_127_int = var_124_int;
	return 2;
}


func_494(var_2_bool, var_140_string)
{
	var_141_bool = 0;
	func_1055(var_141_bool);
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
	func_952(var_144_string, var_145_bool);
	var_2_bool = var_140_string;
	return 0;
	
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
	func_836(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_bool = var_2_bool;
	if(var_27_bool != 0) {
		var_17_float = var_17_float - var_1_int;
	}
	var_15_bool = var_17_float < var_0_int;
	return 2;
}


func_1136(var_166_bool)
{
	var_168_bool = 0;
	var_168_bool = 0;
	var_169_bool = 0;
	var_169_bool = 0;
	var_170_bool = 0;
	var_170_bool = 0;
	var_171_int = 0; var_172_string = "";
	func_1001(var_171_int, "b10q04NotkinTalk");
	var_174_bool = var_171_int == (int)9;
	if(var_174_bool != 0) {
		var_175_int = 0; var_176_string = "";
		func_1001(var_175_int, "b10q04Spi4kaTalk");
		var_178_bool = var_175_int == (int)9;
		if(var_178_bool != 0) {
			var_170_bool = 1;
		}
	}
	if(var_170_bool != 0) {
		var_179_int = 0; var_180_string = "";
		func_1001(var_179_int, "b10q04MishkaTalk");
		var_182_bool = var_179_int == (int)9;
		if(var_182_bool != 0) {
			var_169_bool = 1;
		}
	}
	if(var_169_bool != 0) {
		var_183_int = 0; var_184_string = "";
		func_1001(var_183_int, "b10q04LaskaTalk");
		var_186_bool = var_183_int == (int)9;
		if(var_186_bool != 0) {
			var_168_bool = 1;
		}
	}
	if(var_168_bool != 0) {
		var_166_bool = 1;
		return 0;
	}
	var_166_bool = 0;
	return 0;
}


func_1006(var_103_bool, var_104_string, var_105_string)
{
	var_106_object = Obj(); var_107_object = Obj();
	FindActor(var_107_object, var_104_string);
	var_108_bool = var_107_object == 0; //@ne
	if(var_108_bool != 0) {
		var_103_bool = 0;
		return 2;
	}
	Trigger(var_107_object, var_105_string);
	var_103_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_242(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_1267(var_52_object)
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
	func_849(var_28_bool, var_29_object, (float)110.0);
	var_75_bool = var_28_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_76_int = 0;
	func_1049(var_76_int);
	@@var_24_object:SetNPCName(var_76_int);
	var_77_int = 0;
	func_1047(var_77_int);
	@@var_24_object:SetNPCDescription(var_77_int);
	var_78_string = "";
	func_1051(var_78_string);
	@@var_24_object:SetPhoto(var_78_string);
	var_79_string = "";
	func_1053(var_79_string);
	@@var_24_object:SetPhoto2(var_79_string);
	var_80_int = 0;
	func_1358(var_80_int);
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
	var_228_bool = var_27_bool == 0; //@nz
	if(var_228_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_305;
	}
	var_18_object = Obj();
	func_918();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1018(var_35_float)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_37_float = var_35_float;
	return 2;
}


func_1023(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


