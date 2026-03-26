// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,FindActor/2,Trigger/2,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Doubt|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Agression|W:Sorrow|W:Smile|W:Neutral|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:d5q01|W:d5q01BurahMeeting|W:pt_d5q01_girl_corpse1|A:AddMark|W:quest_d5_01|W:burah_free|W:ood5Burah1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:ui/NPC_Burah.png|W:ui/NPC_Burah_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x21d
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x215 vars=object
// @EVENT_26: op=0x221 vars=string
// @EVENT_6: op=0x23d vars=
// @PE: 0x51,0x95,0xab,0x215,0x3b0,0x3b6

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_862();
		var_11_bool = var_7_bool == (int)13708;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_944();
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_916();
		}
		var_66_bool = var_6_int == (int)11632;
		if(var_66_bool != 0) {
			var_67_bool = 0; var_68_object = Obj();
			var_68_object = var_1_object;
			func_950(var_68_object);
			if(var_67_bool != 0) {
				var_75_string = "";
				func_149(var_7_bool, "Doubt");
				@@@var_0_object:SetMessage((int)510543);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)510544, (int)11634, (int)11633);
				@@@var_0_object:AddReply((int)510560, (int)16756, (int)11649);
				@@@var_0_object:AddReply((int)510566, (int)11634, (int)11655);
				return 0;
			}
		}
		var_103_bool = var_6_int == (int)16756;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_149(var_7_bool, "Agression");
			@@@var_0_object:SetMessage((int)515702);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515703, (int)11650, (int)16757);
			return 0;
		}
		var_110_bool = var_6_int == (int)11650;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_149(var_7_bool, "Agression");
			@@@var_0_object:SetMessage((int)510561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510562, (int)11652, (int)11651);
			return 0;
		}
		var_117_bool = var_6_int == (int)11652;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_149(var_7_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)510563);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510564, (int)16749, (int)11653);
			@@@var_0_object:AddReply((int)510565, (int)-1, (int)11654);
			return 0;
		}
		var_127_bool = var_6_int == (int)11634;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_149(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)510545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510546, (int)11636, (int)11635);
			@@@var_0_object:AddReply((int)510553, (int)11643, (int)11642);
			@@@var_0_object:AddReply((int)510557, (int)11647, (int)11646);
			return 0;
		}
		var_140_bool = var_6_int == (int)11647;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_149(var_7_bool, "Agression");
			@@@var_0_object:SetMessage((int)510558);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510559, (int)16743, (int)11648);
			return 0;
		}
		var_147_bool = var_6_int == (int)11643;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_149(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)510554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510555, (int)16743, (int)11644);
			@@@var_0_object:AddReply((int)510556, (int)-1, (int)11645);
			return 0;
		}
		var_157_bool = var_6_int == (int)11636;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_149(var_7_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)510547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510548, (int)16743, (int)11637);
			@@@var_0_object:AddReply((int)510549, (int)11639, (int)11638);
			return 0;
		}
		var_167_bool = var_6_int == (int)11639;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_149(var_7_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)510550);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510551, (int)16743, (int)11640);
			@@@var_0_object:AddReply((int)510552, (int)16743, (int)11641);
			return 0;
		}
		var_177_bool = var_6_int == (int)16743;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_149(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515695);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515696, (int)16749, (int)16748);
			@@@var_0_object:AddReply((int)515701, (int)16752, (int)16754);
			return 0;
		}
		var_187_bool = var_6_int == (int)16749;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_149(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515697);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515698, (int)16752, (int)16750);
			@@@var_0_object:AddReply((int)515699, (int)16752, (int)16751);
			return 0;
		}
		var_197_bool = var_6_int == (int)16752;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_149(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515700);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515704, (int)16760, (int)16759);
			return 0;
		}
		var_204_bool = var_6_int == (int)16760;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_149(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515706, (int)16762, (int)16761);
			@@@var_0_object:AddReply((int)515708, (int)16764, (int)16763);
			return 0;
		}
		var_214_bool = var_6_int == (int)16764;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_149(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515709);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515710, (int)16762, (int)16765);
			return 0;
		}
		var_221_bool = var_6_int == (int)16762;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_149(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512539, (int)-1, (int)13708);
			return 0;
		}
		var_3_string = true;
		var_227_bool = 0;
		func_1058(var_227_bool);
		if(var_227_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_589(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_869(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_572;
		var_0_object = false;
	}
Label_572:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_589(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_869(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_541:
	Hold();
	goto Label_541;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_591(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1052(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1050(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1054(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1056(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1033(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_869(Obj());
	var_81_object = var_80_object;
	func_678(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_234_bool = var_17_bool == 0; //@nz
	if(var_234_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_660();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_773(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_907(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_782:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_782;
		}
	}
	var_147_bool = var_129_int == 0; //@nz
	if(var_147_bool != 0) {
		var_121_bool = 0;
		return 10;
	}
	var_131_int = 0;
	var_149_bool = var_129_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_131_int, var_129_int);
	}
	var_151_int = var_131_int + (int)1;
	var_152_int = var_128_string + var_151_int;
	@@var_122_object:GetProperty(var_152_int, var_132_string);
	var_153_bool = 0; var_154_string = "";
	var_132_string = var_154_string;
	func_847(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_902(var_33_float)
{
	var_34_float = 0; var_35_float = 0;
	GetGameTime(var_35_float);
	var_35_float = var_33_float;
	return 2;
}


func_1033(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x418";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_907(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_660()
{
	var_236_bool = 0; var_237_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_239_bool = 0;
	func_1058(var_239_bool);
	if(var_239_bool != 0) {
	} else {
		HasAnimationTrack(var_237_bool, "head");
		var_241_bool = var_237_bool;
		if(var_241_bool == 0) goto Label_677;
		UnlookAsync("head");
	}
Label_677:
	return 2;
	
}


func_149(var_2_object, var_189_string)
{
	var_190_bool = 0;
	func_1058(var_190_bool);
	var_191_bool = var_190_bool == 0; //@nz
	if(var_191_bool != 0) {
		return 0;
	}
	var_192_bool = var_189_string == var_2_object;
	if(var_192_bool != 0) {
		return 0;
	}
	var_193_string = ""; var_194_bool = 0;
	var_189_string = var_193_string;
	var_196_bool = var_189_string == "";
	if(var_196_bool != 0) {
		var_194_bool = 0;
	} else {
		var_194_bool = 1;
	}
	func_832(var_193_string, var_194_bool);
	var_2_object = var_189_string;
	return 0;
	
}


func_916()
{
	var_18_object = Obj(); var_19_object = Obj();
	SetVariable("d5q01", (int)7);
	func_1016(Obj());
	var_22_object = var_19_object;
	var_33_float = 0;
	func_902(var_33_float);
	@@var_19_object:AddMark("d5q01BurahMeeting", "pt_d5q01_girl_corpse1", (int)1, (int)515351, var_33_float);
	func_962();
	var_59_bool = 0; var_60_string = ""; var_61_string = "";
	func_890(var_59_bool, "quest_d5_01", "burah_free");
	return 2;
}
EMIT "Stack[-1] = 0";


func_1050(var_67_int)
{
	var_67_int = 515592;
	return 0;
}


func_1052(var_66_int)
{
	var_66_int = 511961;
	return 0;
}


func_1054(var_68_string)
{
	var_68_string = "ui/NPC_Burah.png";
	return 0;
}


func_1056(var_69_string)
{
	var_69_string = "ui/NPC_Burah_b.png";
	return 0;
}


func_1058(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_678(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_736(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_773(var_121_bool, var_122_object);
			var_156_bool = var_121_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		irand(var_87_int, (int)2);
		var_158_int = var_87_int;
		if(var_158_int != 0) {
			var_161_int = var_86_int + (int)1;
			var_163_int = var_161_int % (int)3;
			SetVariable("voice_common", var_163_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_166_bool = 0; var_167_object = Obj();
		var_80_object = var_167_object;
		func_773(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_736(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_734;
	
Label_734:
	var_79_bool = 1;
	return 4;
	
}


func_816(var_218_string)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0;
	lshHasAnimation(var_222_bool, var_218_string);
	var_225_bool = var_222_bool;
	if(var_225_bool != 0) {
		lshGetAnimTimes(var_218_string, var_223_float, var_224_float);
		lshPlayAnimation(var_223_float, var_224_float, (bool)0);
	} else {
		var_228_int = "Can't find lsh animation : " + var_218_string;
		Trace(var_228_int);
	}
	return 6;
	
}


func_944()
{
	SetVariable("ood5Burah1", (int)1);
	return 0;
}


func_950(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_885(var_183_int, "ood5Burah1");
	var_188_bool = var_183_int == (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_832(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0;
	lshHasAnimation(var_200_bool, var_193_string);
	var_203_bool = var_200_bool;
	if(var_203_bool != 0) {
		lshGetAnimTimes(var_193_string, var_201_float, var_202_float);
		lshPlayAnimation(var_201_float, var_202_float, var_194_bool);
	} else {
		var_205_int = "Can't find lsh animation : " + var_193_string;
		Trace(var_205_int);
	}
	return 6;
	
}


func_962()
{
	var_36_object = Obj(); var_37_object = Obj();
	CreateDiaryEntry(var_37_object, (int)146, (int)1, (int)515346);
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0;
	var_37_object = var_42_object;
	func_988(var_41_bool, var_42_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_589(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_591(var_18_bool, var_19_object, var_20_float)
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
	func_875(var_45_cvector, var_46_cvector);
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
	func_1058(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_654;
		LookAsyncCamera("head");
	}
Label_654:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_847(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1058(var_117_bool);
	if(var_117_bool != 0) {
		lshHasSpeech(var_116_bool, var_114_string);
		var_118_bool = var_116_bool;
		if(var_118_bool != 0) {
			lshPlaySpeech(var_114_string);
			var_113_bool = 1;
			return 2;
		}
	}
	var_113_bool = 0;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_950(var_182_object);
		if(var_181_bool != 0) {
			var_189_string = "";
			func_149(var_175_object, "Doubt");
			@@@var_0_object:SetMessage((int)510543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510544, (int)11634, (int)11633);
			@@@var_0_object:AddReply((int)510560, (int)16756, (int)11649);
			@@@var_0_object:AddReply((int)510566, (int)11634, (int)11655);
		} else {
				return 0;
		}
	}
	var_216_bool = 0;
	func_1058(var_216_bool);
	if(var_216_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_217_string = var_3_string;
		if(var_217_string != 0) {
		} else {
			var_218_string = "";
			var_218_string = var_2_object;
			func_816(var_218_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_231_string = var_3_string;
		if(var_231_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;

	}
	goto Label_148;
	
Label_148:
	return 0;
	
}
EMIT "GOTO 0x55";


func_975(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj();
	GetDiaryRoot(var_52_object);
	var_53_bool = var_52_object == 0; //@nz
	if(var_53_bool != 0) {
		Trace("Can't retrieve diary root");
		var_50_object = 0;
		return 2;
	}
	var_52_object = var_50_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_988(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0;
	func_975(Obj());
	var_50_object = var_47_object;
	@@var_47_object:Find(var_43_int, var_48_object);
	var_55_bool = var_48_object == 0; //@nz
	if(var_55_bool != 0) {
		var_57_int = "Can't find diary parent with id: " + var_43_int;
		Trace(var_57_int);
		var_41_bool = 0;
		return 6;
	}
	@@var_48_object:AddChild(var_42_object);
	SendWorldWndMessage((int)7);
	@@var_42_object:GetCategory(var_49_int);
	SetDiarySection(var_49_int);
	var_41_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_862()
{
	var_9_bool = 0;
	func_1058(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_736(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_739:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_739;
		}
	}
	var_107_bool = var_98_int == 0; //@nz
	if(var_107_bool != 0) {
		var_90_bool = 0;
		return 10;
	}
	var_100_int = 0;
	var_109_bool = var_98_int > (int)1;
	if(var_109_bool != 0) {
		irand(var_100_int, var_98_int);
	}
	var_111_int = var_100_int + (int)1;
	var_112_int = var_97_string + var_111_int;
	@@var_91_object:GetProperty(var_112_int, var_101_string);
	var_113_bool = 0; var_114_string = "";
	var_101_string = var_114_string;
	func_847(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_869(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_875(var_45_cvector, var_46_cvector)
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


func_885(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_1016(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	GetMainOutdoorScene(var_25_object);
	var_27_bool = var_25_object == 0; //@ne
	if(var_27_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_26_object = 0;
		var_26_object = var_22_object;
		return 4;
	}
	@@var_25_object:GetMap(var_26_object);
	var_26_object = var_22_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_890(var_59_bool, var_60_string, var_61_string)
{
	var_62_object = Obj(); var_63_object = Obj();
	FindActor(var_63_object, var_60_string);
	var_64_bool = var_63_object == 0; //@ne
	if(var_64_bool != 0) {
		var_59_bool = 0;
		return 2;
	}
	Trigger(var_63_object, var_61_string);
	var_59_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


