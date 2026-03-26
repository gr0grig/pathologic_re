// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Staring|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Mysterious|W:Neutral|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:quest_d11_06|W:completed|W:d11q06|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Maria.png|W:ui/NPC_Maria_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x20c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x210 vars=string
// @EVENT_6: op=0x224 vars=
// @EVENT_5: op=0x231 vars=
// @EVENT_7: op=0x27a vars=int
// @EVENT_45: op=0x2bc vars=bool
// @EVENT_0: op=0x2c8 vars=object
// @PE: 0x51,0x90,0xa6,0x204,0x20c,0x231,0x27a,0x2a0,0x2bc,0x4a9,0x4b3

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1120();
		var_12_bool = var_8_bool == (int)36172;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1193();
		}
		var_45_bool = var_8_bool == (int)41620;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_1193();
		}
		var_49_bool = var_7_cvector == (int)36173;
		if(var_49_bool != 0) {
			var_50_string = "";
			func_144(var_8_bool, "Staring");
			@@@var_0_object:SetMessage((int)534532);
			@@@var_0_object:ClearReplies();
			var_68_bool = 0; var_69_object = Obj();
			var_69_object = var_1_object;
			func_1203(var_69_object);
			if(var_68_bool != 0) {
				@@@var_0_object:AddReply((int)539632, (int)41601, (int)41578);
			}
			@@@var_0_object:AddReply((int)534533, (int)-1, (int)36174);
			return 0;
		}
		var_83_bool = var_7_cvector == (int)41601;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_144(var_8_bool, "Staring");
			@@@var_0_object:SetMessage((int)539655);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539656, (int)41603, (int)41602);
			@@@var_0_object:AddReply((int)539669, (int)41607, (int)41615);
			return 0;
		}
		var_93_bool = var_7_cvector == (int)41603;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_144(var_8_bool, "Mysterious");
			@@@var_0_object:SetMessage((int)539657);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539658, (int)41605, (int)41604);
			return 0;
		}
		var_100_bool = var_7_cvector == (int)41605;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_144(var_8_bool, "Mysterious");
			@@@var_0_object:SetMessage((int)539659);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539660, (int)41607, (int)41606);
			@@@var_0_object:AddReply((int)539670, (int)41607, (int)41616);
			return 0;
		}
		var_110_bool = var_7_cvector == (int)41607;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_144(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539661);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539662, (int)41609, (int)41608);
			return 0;
		}
		var_117_bool = var_7_cvector == (int)41609;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_144(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539663);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539664, (int)41579, (int)41610);
			return 0;
		}
		var_124_bool = var_7_cvector == (int)41579;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_144(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539633);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539634, (int)41581, (int)41580);
			@@@var_0_object:AddReply((int)539675, (int)41623, (int)41622);
			return 0;
		}
		var_134_bool = var_7_cvector == (int)41623;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_144(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539677, (int)41612, (int)41624);
			return 0;
		}
		var_141_bool = var_7_cvector == (int)41581;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_144(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539635);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539665, (int)41612, (int)41611);
			return 0;
		}
		var_148_bool = var_7_cvector == (int)41612;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_144(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539666);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539667, (int)41614, (int)41613);
			@@@var_0_object:AddReply((int)539678, (int)41627, (int)41626);
			return 0;
		}
		var_158_bool = var_7_cvector == (int)41627;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_144(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539679);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539680, (int)41629, (int)41628);
			@@@var_0_object:AddReply((int)539682, (int)41614, (int)41630);
			return 0;
		}
		var_168_bool = var_7_cvector == (int)41629;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_144(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539681);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539683, (int)41634, (int)41632);
			return 0;
		}
		var_175_bool = var_7_cvector == (int)41634;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_144(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539685, (int)41619, (int)41635);
			@@@var_0_object:AddReply((int)539686, (int)41619, (int)41636);
			return 0;
		}
		var_185_bool = var_7_cvector == (int)41614;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_144(var_8_bool, "Mysterious");
			@@@var_0_object:SetMessage((int)539668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539672, (int)41619, (int)41618);
			return 0;
		}
		var_192_bool = var_7_cvector == (int)41619;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_144(var_8_bool, "Mysterious");
			@@@var_0_object:SetMessage((int)539673);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534531, (int)-1, (int)36172);
			@@@var_0_object:AddReply((int)539674, (int)-1, (int)41620);
			return 0;
		}
		var_3_string = true;
		var_201_bool = 0;
		func_1294(var_201_bool);
		if(var_201_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
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
			func_1127(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_547;
		var_1_object = false;
	}
Label_547:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1127(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_672();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_687();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_630();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_844(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_599(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_579(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1127(Obj());
				var_53_object = var_52_object;
				func_994(var_51_bool, var_52_object);
			}
		} else {
			func_594(var_7_int);
			func_621();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_621();
	} else {
		var_14_string = "";
		func_1074("Neutral");
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
		func_812();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_835(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_516(var_25_object);
		var_259_string = "";
		func_1074("Neutral");
		func_630();
		func_621();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_565(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_849(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1288(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1286(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1290(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1292(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1269(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1127(Obj());
	var_100_object = var_99_object;
	func_936(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_250_bool = var_36_bool == 0; //@nz
	if(var_250_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_918();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_516(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1286(var_86_int)
{
	var_86_int = 515543;
	return 0;
}


func_1031(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1160(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1040:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1040;
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
	func_1105(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1288(var_85_int)
{
	var_85_int = 502868;
	return 0;
}


func_1160(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_1290(var_87_string)
{
	var_87_string = "ui/NPC_Maria.png";
	return 0;
}


func_1292(var_88_string)
{
	var_88_string = "ui/NPC_Maria_b.png";
	return 0;
}


func_1294(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_144(var_2_object, var_200_string)
{
	var_201_bool = 0;
	func_1294(var_201_bool);
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
	func_1090(var_204_string, var_205_bool);
	var_2_object = var_200_string;
	return 0;
	
}


func_1169(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_918()
{
	var_252_bool = 0; var_253_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_255_bool = 0;
	func_1294(var_255_bool);
	if(var_255_bool != 0) {
	} else {
		HasAnimationTrack(var_253_bool, "head");
		var_257_bool = var_253_bool;
		if(var_257_bool == 0) goto Label_935;
		UnlookAsync("head");
	}
Label_935:
	return 2;
	
}


func_1176(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1178:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1169(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1178;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_672()
{
	func_812();
	func_630();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_936(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_994(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1031(var_140_bool, var_141_object);
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
		func_1031(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_994(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_992;
	
Label_992:
	var_98_bool = 1;
	return 4;
	
}


func_1193()
{
	func_1215();
	var_38_bool = 0; var_39_string = ""; var_40_string = "";
	func_1148(var_38_bool, "quest_d11_06", "completed");
	return 0;
}


func_810(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_812()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_687()
{
	StopGroup0();
	func_630();
	var_8_string = "";
	func_1074("Neutral");
	func_621();
	return 0;
}


func_817(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1074(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0;
	lshHasAnimation(var_238_bool, var_234_string);
	var_241_bool = var_238_bool;
	if(var_241_bool != 0) {
		lshGetAnimTimes(var_234_string, var_239_float, var_240_float);
		lshPlayAnimation(var_239_float, var_240_float, (bool)0);
	} else {
		var_244_int = "Can't find lsh animation : " + var_234_string;
		Trace(var_244_int);
	}
	return 6;
	
}


func_1203(var_218_bool)
{
	var_220_int = 0; var_221_string = "";
	func_1143(var_220_int, "d11q06");
	var_225_bool = var_220_int == (int)3;
	if(var_225_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_565(var_0_object)
{
	var_7_bool = 0;
	func_844(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_574:
	func_741();
	goto Label_574;
}
EMIT "Return(); Pop(0)";


func_825(var_15_bool, var_16_cvector)
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


func_1215()
{
	var_15_object = Obj(); var_16_object = Obj();
	CreateDiaryEntry(var_16_object, (int)692, (int)2, (int)534540);
	var_20_bool = 0; var_21_object = Obj(); var_22_int = 0;
	var_16_object = var_21_object;
	func_1241(var_20_bool, var_21_object, (int)686);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1090(var_204_string, var_205_bool)
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


func_835(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_825(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_579(var_32_bool)
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
	func_835(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_844(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1228(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj();
	GetDiaryRoot(var_31_object);
	var_32_bool = var_31_object == 0; //@nz
	if(var_32_bool != 0) {
		Trace("Can't retrieve diary root");
		var_29_object = 0;
		return 2;
	}
	var_31_object = var_29_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_849(var_37_bool, var_38_object, var_39_float)
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
	func_1133(var_64_cvector, var_65_cvector);
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
	func_1294(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_912;
		LookAsyncCamera("head");
	}
Label_912:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_string = "";
		func_144(var_194_object, "Staring");
		@@@var_0_object:SetMessage((int)534532);
		@@@var_0_object:ClearReplies();
		var_218_bool = 0; var_219_object = Obj();
		var_219_object = var_1_object;
		func_1203(var_219_object);
		if(var_218_bool != 0) {
			@@@var_0_object:AddReply((int)539632, (int)41601, (int)41578);
		}
		@@@var_0_object:AddReply((int)534533, (int)-1, (int)36174);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_232_bool = 0;
	func_1294(var_232_bool);
	if(var_232_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_233_string = var_3_string;
		if(var_233_string != 0) {
		} else {
			var_234_string = "";
			var_234_string = var_2_object;
			func_1074(var_234_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_247_string = var_3_string;
		if(var_247_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_594(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1105(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1294(var_136_bool);
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


func_599(var_15_bool)
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
	func_817(var_22_float, var_23_object);
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


func_1241(var_20_bool, var_21_object, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0;
	func_1228(Obj());
	var_29_object = var_26_object;
	@@var_26_object:Find(var_22_int, var_27_object);
	var_34_bool = var_27_object == 0; //@nz
	if(var_34_bool != 0) {
		var_36_int = "Can't find diary parent with id: " + var_22_int;
		Trace(var_36_int);
		var_20_bool = 0;
		return 6;
	}
	@@var_27_object:AddChild(var_21_object);
	SendWorldWndMessage((int)7);
	@@var_21_object:GetCategory(var_28_int);
	SetDiarySection(var_28_int);
	var_20_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1120()
{
	var_10_bool = 0;
	func_1294(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_994(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_997:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_997;
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
	func_1105(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_741()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_844(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1176((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_755:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_844(var_41_bool);
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
				func_1169(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_796;
				goto Label_807;
		}
		Label_796:
			var_45_bool = 0;
			func_810(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_807;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_755;

		}
	}
Label_807:
	ResetAAS();
	return 12;
	
}


func_1127(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_621()
{
	var_261_float = 0; var_262_float = 0;
	rand(var_262_float, (int)8, (int)16);
	SetTimer((int)10, var_262_float);
	return 2;
}


func_1133(var_64_cvector, var_65_cvector)
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


func_1269(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x504";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_630()
{
	KillTimer((int)10);
	return 0;
}


func_1143(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0;
	GetVariable(var_221_string, var_223_int);
	var_223_int = var_220_int;
	return 2;
}


func_1148(var_38_bool, var_39_string, var_40_string)
{
	var_41_object = Obj(); var_42_object = Obj();
	FindActor(var_42_object, var_39_string);
	var_43_bool = var_42_object == 0; //@ne
	if(var_43_bool != 0) {
		var_38_bool = 0;
		return 2;
	}
	Trigger(var_42_object, var_40_string);
	var_38_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


