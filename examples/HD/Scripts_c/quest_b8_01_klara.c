// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Grin|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Sly|W:Smile|W:Fear|W:cleanup|W:restore|W:player|W:Neutral|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:b8q01|W:quest_b8_01|W:fail|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x21c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb0 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x220 vars=string
// @EVENT_6: op=0x234 vars=
// @EVENT_5: op=0x241 vars=
// @EVENT_7: op=0x28a vars=int
// @EVENT_45: op=0x2cc vars=bool
// @EVENT_0: op=0x2d8 vars=object
// @PE: 0x51,0x9a,0xb0,0x214,0x21c,0x241,0x28a,0x2b0,0x2cc,0x4b9,0x4c2,0x4cc

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1136();
		var_12_bool = var_8_bool == (int)22583;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1209();
		}
		var_41_bool = var_8_bool == (int)25211;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_1209();
		}
		var_45_bool = var_8_bool == (int)25212;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_1209();
		}
		var_49_bool = var_8_bool == (int)25197;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_1218();
		}
		var_67_bool = var_8_bool == (int)25198;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_1218();
		}
		var_71_bool = var_8_bool == (int)25189;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_1218();
		}
		var_75_bool = var_7_cvector == (int)22580;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_154(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)521402);
			@@@var_0_object:ClearReplies();
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_1228(var_95_object);
			if(var_94_bool != 0) {
				@@@var_0_object:AddReply((int)523899, (int)25181, (int)25179);
			}
			var_105_bool = 0; var_106_object = Obj();
			var_106_object = var_1_object;
			func_1228(var_106_object);
			if(var_105_bool != 0) {
				@@@var_0_object:AddReply((int)521403, (int)22582, (int)22581);
			}
			@@@var_0_object:AddReply((int)521406, (int)-1, (int)22584);
			return 0;
		}
		var_114_bool = var_7_cvector == (int)22582;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_154(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)521404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523900, (int)25190, (int)25180);
			@@@var_0_object:AddReply((int)523911, (int)25192, (int)25191);
			@@@var_0_object:AddReply((int)523909, (int)-1, (int)25189);
			return 0;
		}
		var_127_bool = var_7_cvector == (int)25192;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_154(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)523912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523913, (int)25190, (int)25193);
			return 0;
		}
		var_134_bool = var_7_cvector == (int)25190;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_154(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)523910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523914, (int)25196, (int)25195);
			return 0;
		}
		var_141_bool = var_7_cvector == (int)25196;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_154(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)523915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523916, (int)-1, (int)25197);
			@@@var_0_object:AddReply((int)523917, (int)-1, (int)25198);
			return 0;
		}
		var_151_bool = var_7_cvector == (int)25181;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_154(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)523901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523902, (int)25183, (int)25182);
			return 0;
		}
		var_158_bool = var_7_cvector == (int)25183;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_154(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)523903);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523904, (int)25185, (int)25184);
			@@@var_0_object:AddReply((int)523918, (int)25200, (int)25199);
			return 0;
		}
		var_168_bool = var_7_cvector == (int)25200;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_154(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)523919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523920, (int)25196, (int)25201);
			return 0;
		}
		var_175_bool = var_7_cvector == (int)25185;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_154(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)523905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523906, (int)25187, (int)25186);
			@@@var_0_object:AddReply((int)523921, (int)25204, (int)25203);
			return 0;
		}
		var_185_bool = var_7_cvector == (int)25204;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_154(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)523922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523923, (int)25200, (int)25205);
			return 0;
		}
		var_192_bool = var_7_cvector == (int)25187;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_154(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)523907);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523924, (int)25208, (int)25207);
			@@@var_0_object:AddReply((int)523926, (int)25210, (int)25209);
			return 0;
		}
		var_202_bool = var_7_cvector == (int)25210;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_154(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)523927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523928, (int)-1, (int)25211);
			@@@var_0_object:AddReply((int)523929, (int)-1, (int)25212);
			return 0;
		}
		var_212_bool = var_7_cvector == (int)25208;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_154(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)523925);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521405, (int)-1, (int)22583);
			return 0;
		}
		var_3_string = true;
		var_218_bool = 0;
		func_1332(var_218_bool);
		if(var_218_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb1";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_1_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = var_9_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_object = Obj();
			func_1143(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_563;
		var_1_object = false;
	}
Label_563:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1143(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_688();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_703();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_646();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_860(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_615(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_595(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1143(Obj());
				var_53_object = var_52_object;
				func_1010(var_51_bool, var_52_object);
			}
		} else {
			func_610(var_7_int);
			func_637();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_637();
	} else {
		var_14_string = "";
		func_1090("Neutral");
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		EventDisable(0);
		func_828();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_851(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_532(var_25_object);
		var_264_string = "";
		func_1090("Neutral");
		func_646();
		func_637();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_581(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_865(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1326(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1324(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1328(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1330(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1307(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1143(Obj());
	var_100_object = var_99_object;
	func_952(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_255_bool = var_36_bool == 0; //@nz
	if(var_255_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_934();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_637()
{
	var_266_float = 0; var_267_float = 0;
	rand(var_267_float, (int)8, (int)16);
	SetTimer((int)10, var_267_float);
	return 2;
}


func_646()
{
	KillTimer((int)10);
	return 0;
}


func_1159(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0;
	GetVariable(var_221_string, var_223_int);
	var_223_int = var_220_int;
	return 2;
}


func_1164(var_60_bool, var_61_string, var_62_string)
{
	var_63_object = Obj(); var_64_object = Obj();
	FindActor(var_64_object, var_61_string);
	var_65_bool = var_64_object == 0; //@ne
	if(var_65_bool != 0) {
		var_60_bool = 0;
		return 2;
	}
	Trigger(var_64_object, var_62_string);
	var_60_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_532(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1047(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1176(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1056:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1056;
		}
	}
	var_166_bool = var_148_int == 0; //@nz
	if(var_166_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_168_bool = var_148_int > (int)1;
	if(var_168_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_170_int = var_150_int + (int)1;
	var_171_int = var_147_string + var_170_int;
	@@var_141_object:GetProperty(var_171_int, var_151_string);
	var_172_bool = 0; var_173_string = "";
	var_151_string = var_173_string;
	func_1121(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1176(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_154(var_2_object, var_200_string)
{
	var_201_bool = 0;
	func_1332(var_201_bool);
	var_202_bool = var_201_bool == 0; //@nz
	if(var_202_bool != 0) {
		return 0;
	}
	var_203_bool = var_200_string == var_2_object;
	if(var_203_bool != 0) {
		return 0;
	}
	var_204_string = ""; var_205_bool = 0;
	var_200_string = var_204_string;
	var_207_bool = var_200_string == "";
	if(var_207_bool != 0) {
		var_205_bool = 0;
	} else {
		var_205_bool = 1;
	}
	func_1106(var_204_string, var_205_bool);
	var_2_object = var_200_string;
	return 0;
	
}


func_1307(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x52a";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1185(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_934()
{
	var_257_bool = 0; var_258_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_260_bool = 0;
	func_1332(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		HasAnimationTrack(var_258_bool, "head");
		var_262_bool = var_258_bool;
		if(var_262_bool == 0) goto Label_951;
		UnlookAsync("head");
	}
Label_951:
	return 2;
	
}


func_1192(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1194:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1185(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1194;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1324(var_86_int)
{
	var_86_int = 515540;
	return 0;
}


func_1326(var_85_int)
{
	var_85_int = 502865;
	return 0;
}


func_1328(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
	return 0;
}


func_688()
{
	func_828();
	func_646();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1330(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1332(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_952(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1010(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1047(var_140_bool, var_141_object);
			var_175_bool = var_140_bool == 0; //@nz
			if(var_175_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		irand(var_106_int, (int)2);
		var_177_int = var_106_int;
		if(var_177_int != 0) {
			var_180_int = var_105_int + (int)1;
			var_182_int = var_180_int % (int)3;
			SetVariable("voice_common", var_182_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_185_bool = 0; var_186_object = Obj();
		var_99_object = var_186_object;
		func_1047(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1010(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1008;
	
Label_1008:
	var_98_bool = 1;
	return 4;
	
}


func_1209()
{
	SetVariable("b8q01", (int)3);
	func_1253();
	return 0;
}


func_826(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_828()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_703()
{
	StopGroup0();
	func_646();
	var_8_string = "";
	func_1090("Neutral");
	func_637();
	return 0;
}


func_833(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1090(var_239_string)
{
	var_240_bool = 0; var_241_float = 0; var_242_float = 0; var_243_bool = 0; var_244_float = 0; var_245_float = 0;
	lshHasAnimation(var_243_bool, var_239_string);
	var_246_bool = var_243_bool;
	if(var_246_bool != 0) {
		lshGetAnimTimes(var_239_string, var_244_float, var_245_float);
		lshPlayAnimation(var_244_float, var_245_float, (bool)0);
	} else {
		var_249_int = "Can't find lsh animation : " + var_239_string;
		Trace(var_249_int);
	}
	return 6;
	
}


func_1218()
{
	func_1240();
	var_60_bool = 0; var_61_string = ""; var_62_string = "";
	func_1164(var_60_bool, "quest_b8_01", "fail");
	return 0;
}


func_581(var_0_object)
{
	var_7_bool = 0;
	func_860(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_590:
	func_757();
	goto Label_590;
}
EMIT "Return(); Pop(0)";


func_841(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0;
	GetPosition(var_20_cvector);
	var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
	return 6;
}


func_1228(var_218_bool)
{
	var_220_int = 0; var_221_string = "";
	func_1159(var_220_int, "b8q01");
	var_225_bool = var_220_int == (int)2;
	if(var_225_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_string = "";
		func_154(var_194_object, "Grin");
		@@@var_0_object:SetMessage((int)521402);
		@@@var_0_object:ClearReplies();
		var_218_bool = 0; var_219_object = Obj();
		var_219_object = var_1_object;
		func_1228(var_219_object);
		if(var_218_bool != 0) {
			@@@var_0_object:AddReply((int)523899, (int)25181, (int)25179);
		}
		var_229_bool = 0; var_230_object = Obj();
		var_230_object = var_1_object;
		func_1228(var_230_object);
		if(var_229_bool != 0) {
			@@@var_0_object:AddReply((int)521403, (int)22582, (int)22581);
		}
		@@@var_0_object:AddReply((int)521406, (int)-1, (int)22584);
		goto Label_124;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_124:
	var_237_bool = 0;
	func_1332(var_237_bool);
	if(var_237_bool != 0) {

	Label_128:
		lshWaitForAnimEnd();
		var_238_string = var_3_string;
		if(var_238_string != 0) {
		} else {
			var_239_string = "";
			var_239_string = var_2_object;
			func_1090(var_239_string);
			goto Label_128;
	}
		PlayAnimation("all", "idle");

	Label_143:
		WaitForAnimEnd();
		var_252_string = var_3_string;
		if(var_252_string != 0) {
			goto Label_153;
		}
		PlayAnimation("all", "idle");
		goto Label_143;
	}
	goto Label_153;
	
Label_153:
	return 0;
	
}


func_1106(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0;
	lshHasAnimation(var_211_bool, var_204_string);
	var_214_bool = var_211_bool;
	if(var_214_bool != 0) {
		lshGetAnimTimes(var_204_string, var_212_float, var_213_float);
		lshPlayAnimation(var_212_float, var_213_float, var_205_bool);
	} else {
		var_216_int = "Can't find lsh animation : " + var_204_string;
		Trace(var_216_int);
	}
	return 6;
	
}


func_851(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_841(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_595(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj();
	var_34_object = var_38_object;
	func_851(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1240()
{
	var_52_object = Obj(); var_53_object = Obj();
	CreateDiaryEntry(var_53_object, (int)693, (int)1, (int)535229);
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0;
	var_53_object = var_58_object;
	func_1279(var_57_bool, var_58_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_860(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_865(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1149(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_1332(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_928;
		LookAsyncCamera("head");
	}
Label_928:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_610(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1121(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1332(var_136_bool);
	if(var_136_bool != 0) {
		lshHasSpeech(var_135_bool, var_133_string);
		var_137_bool = var_135_bool;
		if(var_137_bool != 0) {
			lshPlaySpeech(var_133_string);
			var_132_bool = 1;
			return 2;
		}
	}
	var_132_bool = 0;
	return 2;
}


func_1253()
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateDiaryEntry(var_18_object, (int)287, (int)1, (int)521458);
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0;
	var_18_object = var_23_object;
	func_1279(var_22_bool, var_23_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_615(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	FindActor(var_18_object, "player");
	var_21_bool = var_18_object == 0; //@nz
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_float = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_833(var_22_float, var_23_object);
	var_31_bool = var_22_float > (float)90000.0;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_18_object);
	var_19_bool = var_15_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1136()
{
	var_10_bool = 0;
	func_1332(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1010(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1013:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1013;
		}
	}
	var_126_bool = var_117_int == 0; //@nz
	if(var_126_bool != 0) {
		var_109_bool = 0;
		return 10;
	}
	var_119_int = 0;
	var_128_bool = var_117_int > (int)1;
	if(var_128_bool != 0) {
		irand(var_119_int, var_117_int);
	}
	var_130_int = var_119_int + (int)1;
	var_131_int = var_116_string + var_130_int;
	@@var_110_object:GetProperty(var_131_int, var_120_string);
	var_132_bool = 0; var_133_string = "";
	var_120_string = var_133_string;
	func_1121(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1266(var_31_object)
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


func_757()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_860(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1192((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_771:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_860(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_42_bool = var_17_int == 0; //@nz
		if(var_42_bool != 0) {
			Sleep((int)3, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
			} else {
		} else {
				irand(var_20_int, var_17_int);
				irand(var_21_int, (int)5);
				var_50_bool = var_21_int != (int)0;
				if(var_50_bool != 0) {
					var_20_int = 0;
				}
				var_52_string = ""; var_53_int = 0;
				var_20_int = var_53_int;
				func_1185(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_812;
				goto Label_823;
		}
		Label_812:
			var_45_bool = 0;
			func_826(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_823;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_771;

		}
	}
Label_823:
	ResetAAS();
	return 12;
	
}


func_1143(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1149(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0;
	var_69_int = var_65_cvector | var_65_cvector;
	var_68_float = sqrt(var_69_int);
	var_70_float = 9.999999974752427e-07;
	var_71_bool = var_68_float < var_70_float;
	if(var_71_bool != 0) {
		var_64_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_64_cvector = var_65_cvector / var_68_float;
	return 2;
}


func_1279(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_1266(Obj());
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


