// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,StopGroup0/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,FindActor/2,Trigger/2,Trigger/3,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Tiredness|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Lara.png|W:ui/NPC_Lara_b.png|W:b11q01KnowWhoKilled|W:b11q01VictimChoosed|W:b11q01KillLara|W:volonteers_burah|W:disease|W:lara|W:Lara is diseased|W:oob11Lara1|W:b11q01|W:quest_b11_01|W:open_well_exit|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x285
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xed vars=int,int
// @TASK_2: vars= params=0
// @EVENT_6: op=0x296 vars=
// @EVENT_5: op=0x299 vars=
// @EVENT_0: op=0x29c vars=object
// @PE: 0x51,0xd7,0xed,0x27d,0x41a,0x423,0x436,0x43c,0x447,0x453,0x45f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_979();
		var_10_bool = var_6_int == (int)23190;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_1059();
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_object;
			func_1084();
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_1050();
		}
		var_63_bool = var_6_int == (int)23187;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_1059();
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_1084();
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_1050();
		}
		var_71_bool = var_5_int == (int)23182;
		if(var_71_bool != 0) {
			var_72_bool = 0;
			var_72_bool = 0;
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_1095(var_74_object);
			var_81_bool = var_73_bool == 0; //@nz
			if(var_81_bool != 0) {
				var_82_bool = 0; var_83_object = Obj();
				var_83_object = var_1_object;
				func_1107(var_83_object);
				if(var_82_bool != 0) {
					var_72_bool = 1;
				}
			}
			if(var_72_bool != 0) {
				var_88_object = Obj(); var_89_object = Obj();
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_1078();
				var_92_string = "";
				func_215(var_6_int, "Tiredness");
				@@@var_0_object:SetMessage((int)522012);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523423, (int)24645, (int)24644);
				return 0;
			}
			var_113_bool = 0; var_114_object = Obj();
			var_114_object = var_1_object;
			func_1095(var_114_object);
			var_115_bool = var_113_bool == 0; //@nz
			if(var_115_bool != 0) {
				var_116_string = "";
				func_215(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)522016);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522017, (int)-1, (int)23187);
				@@@var_0_object:AddReply((int)522018, (int)-1, (int)23188);
				return 0;
			}
			var_124_string = "";
			func_215(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)522014);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523455, (int)-1, (int)24681);
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_1119(var_130_object);
			if(var_129_bool != 0) {
				@@@var_0_object:AddReply((int)522015, (int)-1, (int)23185);
			}
			var_138_bool = 0; var_139_object = Obj();
			var_139_object = var_1_object;
			func_1119(var_139_object);
			if(var_138_bool != 0) {
				@@@var_0_object:AddReply((int)523456, (int)-1, (int)24682);
			}
			return 0;
		}
		var_144_bool = var_5_int == (int)24645;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523425, (int)24647, (int)24646);
			@@@var_0_object:AddReply((int)523435, (int)24659, (int)24656);
			@@@var_0_object:AddReply((int)523444, (int)24669, (int)24668);
			return 0;
		}
		var_157_bool = var_5_int == (int)24669;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523446, (int)24671, (int)24670);
			@@@var_0_object:AddReply((int)541844, (int)24674, (int)44062);
			return 0;
		}
		var_167_bool = var_5_int == (int)24674;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523459, (int)24686, (int)24685);
			return 0;
		}
		var_174_bool = var_5_int == (int)24686;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523460);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523450, (int)24663, (int)24675);
			return 0;
		}
		var_181_bool = var_5_int == (int)24671;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523457, (int)24684, (int)24683);
			return 0;
		}
		var_188_bool = var_5_int == (int)24684;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523458);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523461, (int)24688, (int)24687);
			return 0;
		}
		var_195_bool = var_5_int == (int)24688;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523462);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523448, (int)24663, (int)24672);
			return 0;
		}
		var_202_bool = var_5_int == (int)24659;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523438);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523439, (int)24651, (int)24660);
			@@@var_0_object:AddReply((int)523440, (int)24663, (int)24662);
			return 0;
		}
		var_212_bool = var_5_int == (int)24663;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523441);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523442, (int)24651, (int)24664);
			@@@var_0_object:AddReply((int)523443, (int)24651, (int)24666);
			return 0;
		}
		var_222_bool = var_5_int == (int)24647;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523427, (int)24649, (int)24648);
			return 0;
		}
		var_229_bool = var_5_int == (int)24649;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523429, (int)24651, (int)24650);
			return 0;
		}
		var_236_bool = var_5_int == (int)24651;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_215(var_6_int, "Tiredness");
			@@@var_0_object:SetMessage((int)523430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522020, (int)-1, (int)23190);
			@@@var_0_object:AddReply((int)523434, (int)-1, (int)24655);
			return 0;
		}
		var_3_string = true;
		var_245_bool = 0;
		func_1048(var_245_bool);
		if(var_245_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xee";
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	Hold();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0();
	return 0;
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_bool = 0;
	IsOverrideActive(var_7_bool);
	var_8_bool = var_7_bool == 0; //@nz
	if(var_8_bool != 0) {
		EventDisable(0);
		var_9_bool = 0; var_10_object = Obj();
		var_5_object = var_10_object;
		func_694(var_9_bool, var_10_object);
		EventEnable(0);
		var_23_object = Obj();
		var_5_object = var_23_object;
		func_637(var_23_object);
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = 0;
	func_703(var_5_bool);
	var_8_bool = var_5_bool == 0; //@nz
	if(var_8_bool != 0) {
		Hold();
	}
Label_652:
	var_9_string = "";
	func_933("Neutral");
	lshWaitForAnimEnd();
	goto Label_652;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_0_object = var_25_object;
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0;
	var_25_object = var_36_object;
	func_708(var_35_bool, var_36_object, (float)70.0);
	var_82_bool = var_35_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	CreateDialog(var_31_object);
	var_83_int = 0;
	func_1042(var_83_int);
	@@var_31_object:SetNPCName(var_83_int);
	var_84_int = 0;
	func_1040(var_84_int);
	@@var_31_object:SetNPCDescription(var_84_int);
	var_85_string = "";
	func_1044(var_85_string);
	@@var_31_object:SetPhoto(var_85_string);
	var_86_string = "";
	func_1046(var_86_string);
	@@var_31_object:SetPhoto2(var_86_string);
	var_87_int = 0;
	func_1185(var_87_int);
	@@var_31_object:SetPlayerName(var_87_int);
	IsOverrideActive(var_32_bool);
	var_95_bool = var_32_bool;
	if(var_95_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	DoDialog(var_31_object);
	var_96_bool = 0; var_97_object = Obj();
	func_986(Obj());
	var_98_object = var_97_object;
	func_795(var_96_bool, var_97_object);
	var_191_object = Obj(); var_192_object = Obj();
	var_25_object = var_191_object;
	var_31_object = var_192_object;
	TaskCall(1);
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object);
	TaskReturn();
	@@var_31_object:IsDialogEnd(var_34_bool);
	
Label_63:
	var_287_bool = var_34_bool == 0; //@nz
	if(var_287_bool != 0) {
		sync();
		@@var_31_object:IsDialogEnd(var_34_bool);
		goto Label_63;
	}
	var_25_object = Obj();
	func_777();
	StopDialog(var_31_object);
	@@var_31_object:GetReturnValue((int)-1);
	var_33_int = var_24_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1157(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0;
	func_1144(Obj());
	var_53_object = var_50_object;
	@@var_50_object:Find(var_46_int, var_51_object);
	var_58_bool = var_51_object == 0; //@nz
	if(var_58_bool != 0) {
		var_60_int = "Can't find diary parent with id: " + var_46_int;
		Trace(var_60_int);
		var_44_bool = 0;
		return 6;
	}
	@@var_51_object:AddChild(var_45_object);
	SendWorldWndMessage((int)7);
	@@var_45_object:GetCategory(var_52_int);
	SetDiarySection(var_52_int);
	var_44_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1031(var_151_int)
{
	var_152_float = 0; var_153_float = 0;
	GetGameTime(var_153_float);
	var_155_int = 0;
	var_155_int = var_153_float / (int)24;
	var_151_int = (int)1 + var_155_int;
	return 2;
}


func_777()
{
	var_289_bool = 0; var_290_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_292_bool = 0;
	func_1048(var_292_bool);
	if(var_292_bool != 0) {
	} else {
		HasAnimationTrack(var_290_bool, "head");
		var_294_bool = var_290_bool;
		if(var_294_bool == 0) goto Label_794;
		UnlookAsync("head");
	}
Label_794:
	return 2;
	
}


func_1040(var_84_int)
{
	var_84_int = 515541;
	return 0;
}


func_1042(var_83_int)
{
	var_83_int = 502866;
	return 0;
}


func_1044(var_85_string)
{
	var_85_string = "ui/NPC_Lara.png";
	return 0;
}


func_1046(var_86_string)
{
	var_86_string = "ui/NPC_Lara_b.png";
	return 0;
}


func_1048(var_78_bool)
{
	var_78_bool = 1;
	return 0;
}


func_1050()
{
	SetVariable("b11q01KnowWhoKilled", (int)1);
	func_1131();
	return 0;
}


func_795(var_96_bool, var_97_object)
{
	var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0;
	GetVariable("voice_common", var_103_int);
	var_106_int = var_103_int;
	if(var_106_int != 0) {
		var_107_bool = 0; var_108_object = Obj();
		var_97_object = var_108_object;
		func_853(var_107_bool, var_108_object);
		var_137_bool = var_107_bool == 0; //@nz
		if(var_137_bool != 0) {
			var_138_bool = 0; var_139_object = Obj();
			var_97_object = var_139_object;
			func_890(var_138_bool, var_139_object);
			var_173_bool = var_138_bool == 0; //@nz
			if(var_173_bool != 0) {
				var_96_bool = 0;
				return 4;
			}
		}
		irand(var_104_int, (int)2);
		var_175_int = var_104_int;
		if(var_175_int != 0) {
			var_178_int = var_103_int + (int)1;
			var_180_int = var_178_int % (int)3;
			SetVariable("voice_common", var_180_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_183_bool = 0; var_184_object = Obj();
		var_97_object = var_184_object;
		func_890(var_183_bool, var_184_object);
		var_185_bool = var_183_bool == 0; //@nz
		if(var_185_bool != 0) {
			var_186_bool = 0; var_187_object = Obj();
			var_97_object = var_187_object;
			func_853(var_186_bool, var_187_object);
			var_188_bool = var_186_bool == 0; //@nz
			if(var_188_bool != 0) {
				var_96_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_851;
	
Label_851:
	var_96_bool = 1;
	return 4;
	
}


func_1185(var_87_int)
{
	var_88_int = 0; var_89_int = 0;
	GetVariable("branch", var_89_int);
	var_92_bool = var_89_int == (int)0;
	if(var_92_bool != 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x4b0";
	}
	var_94_bool = var_89_int == (int)1;
	if(var_94_bool != 0) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
	return 2;
}


func_1059()
{
	SetVariable("b11q01VictimChoosed", (int)1);
	SetVariable("b11q01KillLara", (int)1);
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; var_20_string = "";
	func_1019(var_17_bool, "volonteers_burah", "disease", "lara");
	Trace("Lara is diseased");
	return 0;
}


func_933(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0;
	lshHasAnimation(var_13_bool, var_9_string);
	var_16_bool = var_13_bool;
	if(var_16_bool != 0) {
		lshGetAnimTimes(var_9_string, var_14_float, var_15_float);
		lshPlayAnimation(var_14_float, var_15_float, (bool)0);
	} else {
		var_19_int = "Can't find lsh animation : " + var_9_string;
		Trace(var_19_int);
	}
	return 6;
	
}


func_684(var_13_bool, var_14_cvector)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0;
	GetPosition(var_18_cvector);
	var_19_cvector = var_14_cvector - var_18_cvector;
	var_21_float = GetByIndex(var_19_cvector, 0);
	var_22_float = GetByIndex(var_19_cvector, 2);
	Rotate(var_21_float, var_22_float, var_20_bool);
	var_20_bool = var_13_bool;
	return 6;
}


func_949(var_222_string, var_223_bool)
{
	var_226_bool = 0; var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_float = 0; var_231_float = 0;
	lshHasAnimation(var_229_bool, var_222_string);
	var_232_bool = var_229_bool;
	if(var_232_bool != 0) {
		lshGetAnimTimes(var_222_string, var_230_float, var_231_float);
		lshPlayAnimation(var_230_float, var_231_float, var_223_bool);
	} else {
		var_234_int = "Can't find lsh animation : " + var_222_string;
		Trace(var_234_int);
	}
	return 6;
	
}


func_1078()
{
	SetVariable("oob11Lara1", (int)1);
	return 0;
}


func_694(var_9_bool, var_10_object)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0);
	@@var_10_object:GetPosition(var_12_cvector);
	var_13_bool = 0; var_14_cvector = CVector(0,0,0);
	var_12_cvector = var_14_cvector;
	func_684(var_13_bool, var_14_cvector);
	var_13_bool = var_9_bool;
	return 2;
}


func_1084()
{
	SetVariable("b11q01", (int)2);
	var_29_bool = 0; var_30_string = ""; var_31_string = "";
	func_1007(var_29_bool, "quest_b11_01", "open_well_exit");
	return 0;
}


func_703(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0;
	IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
	return 2;
}


func_708(var_35_bool, var_36_object, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0;
	@@var_36_object:GetPosition(var_48_cvector);
	@@var_36_object:GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	var_56_float = var_56_float + var_47_float;
	SetByIndex(var_48_cvector, 1) = var_56_float;
	GetPosition(var_49_cvector);
	GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	var_57_float = var_57_float + var_47_float;
	SetByIndex(var_49_cvector, 1) = var_57_float;
	var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_59_int = var_50_cvector | var_50_cvector;
	var_60_float = sqrt(var_59_int);
	var_50_cvector = var_50_cvector / var_60_float;
	var_51_cvector = -var_50_cvector;
	var_61_float = var_50_cvector * var_37_float;
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	var_63_cvector = var_51_cvector ^ CVector(0.0, 1.0, 0.0);
	func_992(var_62_cvector, var_63_cvector);
	var_71_float = var_62_cvector * (int)25;
	var_72_int = var_61_float + var_71_float;
	var_52_cvector = var_72_int - CVector(0.0, 10.0, 0.0);
	var_53_cvector = var_49_cvector + var_52_cvector;
	IsOverrideActive(var_54_bool);
	var_74_bool = var_54_bool;
	if(var_74_bool != 0) {
		var_35_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_53_cvector, var_51_cvector, (bool)1);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	Rotate(var_76_float, var_77_float);
	var_78_bool = 0;
	func_1048(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		HasAnimationTrack(var_55_bool, "head");
		var_80_bool = var_55_bool;
		if(var_80_bool == 0) goto Label_771;
		LookAsyncCamera("head");
	}
Label_771:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_35_bool = 1;
	return 18;
	
}


func_964(var_130_bool, var_131_string)
{
	var_132_bool = 0; var_133_bool = 0;
	var_134_bool = 0;
	func_1048(var_134_bool);
	if(var_134_bool != 0) {
		lshHasSpeech(var_133_bool, var_131_string);
		var_135_bool = var_133_bool;
		if(var_135_bool != 0) {
			lshPlaySpeech(var_131_string);
			var_130_bool = 1;
			return 2;
		}
	}
	var_130_bool = 0;
	return 2;
}


func_1095(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_1002(var_201_int, "b11q01VictimChoosed");
	var_206_bool = var_201_int != (int)0;
	if(var_206_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_191_object, var_192_object)
{
	var_0_object = var_192_object;
	var_1_object = var_191_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_198_bool = 0;
		var_198_bool = 0;
		var_199_bool = 0; var_200_object = Obj();
		var_200_object = var_1_object;
		func_1095(var_200_object);
		var_207_bool = var_199_bool == 0; //@nz
		if(var_207_bool != 0) {
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_1107(var_209_object);
			if(var_208_bool != 0) {
				var_198_bool = 1;
			}
		}
		if(var_198_bool != 0) {
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_1078();
			var_218_string = "";
			func_215(var_192_object, "Tiredness");
			@@@var_0_object:SetMessage((int)522012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523423, (int)24645, (int)24644);
		} else {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_1095(var_258_object);
				var_259_bool = var_257_bool == 0; //@nz
				if(var_259_bool != 0) {
					var_260_string = "";
					func_215(var_192_object, "Neutral");
					@@@var_0_object:SetMessage((int)522016);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)522017, (int)-1, (int)23187);
					@@@var_0_object:AddReply((int)522018, (int)-1, (int)23188);
					goto Label_185;
				}
				var_268_string = "";
				func_215(var_192_object, "Neutral");
				@@@var_0_object:SetMessage((int)522014);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523455, (int)-1, (int)24681);
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_1119(var_274_object);
				if(var_273_bool != 0) {
					@@@var_0_object:AddReply((int)522015, (int)-1, (int)23185);
				}
				var_282_bool = 0; var_283_object = Obj();
				var_283_object = var_1_object;
				func_1119(var_283_object);
				if(var_282_bool != 0) {
					@@@var_0_object:AddReply((int)523456, (int)-1, (int)24682);
				}
				goto Label_185;
		}
	}
Label_185:
	var_239_bool = 0;
	func_1048(var_239_bool);
	if(var_239_bool != 0) {

	Label_189:
		lshWaitForAnimEnd();
		var_240_string = var_3_string;
		if(var_240_string != 0) {
		} else {
			var_241_string = "";
			var_241_string = var_2_object;
			func_933(var_241_string);
			goto Label_189;
	}
		PlayAnimation("all", "idle");

	Label_204:
		WaitForAnimEnd();
		var_254_string = var_3_string;
		if(var_254_string != 0) {
			goto Label_214;
		}
		PlayAnimation("all", "idle");
		goto Label_204;

	}
	goto Label_214;
	
Label_214:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1107(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_1002(var_210_int, "oob11Lara1");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_979()
{
	var_8_bool = 0;
	func_1048(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_853(var_107_bool, var_108_object)
{
	var_109_string = ""; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_string = ""; var_114_string = ""; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_string = "";
	var_114_string = "c";
	var_115_int = 0;
	
Label_856:
	if((int)1 != 0) {
		var_121_int = var_115_int + (int)1;
		var_122_int = var_114_string + var_121_int;
		@@var_108_object:HasProperty(var_122_int, var_116_bool);
		var_123_bool = var_116_bool == 0; //@nz
		if(var_123_bool != 0) {
		} else {
			var_115_int = var_115_int + (int)1;
			goto Label_856;
		}
	}
	var_124_bool = var_115_int == 0; //@nz
	if(var_124_bool != 0) {
		var_107_bool = 0;
		return 10;
	}
	var_117_int = 0;
	var_126_bool = var_115_int > (int)1;
	if(var_126_bool != 0) {
		irand(var_117_int, var_115_int);
	}
	var_128_int = var_117_int + (int)1;
	var_129_int = var_114_string + var_128_int;
	@@var_108_object:GetProperty(var_129_int, var_118_string);
	var_130_bool = 0; var_131_string = "";
	var_118_string = var_131_string;
	func_964(var_130_bool, var_131_string);
	var_130_bool = var_107_bool;
	return 10;
	
}


func_215(var_2_object, var_218_string)
{
	var_219_bool = 0;
	func_1048(var_219_bool);
	var_220_bool = var_219_bool == 0; //@nz
	if(var_220_bool != 0) {
		return 0;
	}
	var_221_bool = var_218_string == var_2_object;
	if(var_221_bool != 0) {
		return 0;
	}
	var_222_string = ""; var_223_bool = 0;
	var_218_string = var_222_string;
	var_225_bool = var_218_string == "";
	if(var_225_bool != 0) {
		var_223_bool = 0;
	} else {
		var_223_bool = 1;
	}
	func_949(var_222_string, var_223_bool);
	var_2_object = var_218_string;
	return 0;
	
}


func_986(var_98_object)
{
	var_99_object = Obj(); var_100_object = Obj();
	self(var_100_object);
	var_100_object = var_98_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1119(var_273_bool)
{
	var_275_int = 0; var_276_string = "";
	func_1002(var_275_int, "b11q01KillLara");
	var_278_bool = var_275_int != (int)0;
	if(var_278_bool != 0) {
		var_273_bool = 1;
		return 0;
	}
	var_273_bool = 0;
	return 0;
}


func_992(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0;
	var_67_int = var_63_cvector | var_63_cvector;
	var_66_float = sqrt(var_67_int);
	var_68_float = 9.999999974752427e-07;
	var_69_bool = var_66_float < var_68_float;
	if(var_69_bool != 0) {
		var_62_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_62_cvector = var_63_cvector / var_66_float;
	return 2;
}


func_1002(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0;
	GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
	return 2;
}


func_1131()
{
	var_39_object = Obj(); var_40_object = Obj();
	CreateDiaryEntry(var_40_object, (int)315, (int)1, (int)522057);
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0;
	var_40_object = var_45_object;
	func_1157(var_44_bool, var_45_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1007(var_29_bool, var_30_string, var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj();
	FindActor(var_33_object, var_30_string);
	var_34_bool = var_33_object == 0; //@ne
	if(var_34_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	Trigger(var_33_object, var_31_string);
	var_29_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1144(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj();
	GetDiaryRoot(var_55_object);
	var_56_bool = var_55_object == 0; //@nz
	if(var_56_bool != 0) {
		Trace("Can't retrieve diary root");
		var_53_object = 0;
		return 2;
	}
	var_55_object = var_53_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_890(var_138_bool, var_139_object)
{
	var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = "";
	var_151_int = 0;
	func_1031(var_151_int);
	var_157_int = "d" + var_151_int;
	var_145_string = var_157_int + "m";
	var_146_int = 0;
	
Label_899:
	if((int)1 != 0) {
		var_161_int = var_146_int + (int)1;
		var_162_int = var_145_string + var_161_int;
		@@var_139_object:HasProperty(var_162_int, var_147_bool);
		var_163_bool = var_147_bool == 0; //@nz
		if(var_163_bool != 0) {
		} else {
			var_146_int = var_146_int + (int)1;
			goto Label_899;
		}
	}
	var_164_bool = var_146_int == 0; //@nz
	if(var_164_bool != 0) {
		var_138_bool = 0;
		return 10;
	}
	var_148_int = 0;
	var_166_bool = var_146_int > (int)1;
	if(var_166_bool != 0) {
		irand(var_148_int, var_146_int);
	}
	var_168_int = var_148_int + (int)1;
	var_169_int = var_145_string + var_168_int;
	@@var_139_object:GetProperty(var_169_int, var_149_string);
	var_170_bool = 0; var_171_string = "";
	var_149_string = var_171_string;
	func_964(var_170_bool, var_171_string);
	var_170_bool = var_138_bool;
	return 10;
	
}


func_1019(var_17_bool, var_18_string, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj();
	FindActor(var_22_object, var_18_string);
	var_23_bool = var_22_object == 0; //@ne
	if(var_23_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	Trigger(var_22_object, var_19_string, var_20_string);
	var_17_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_637(var_23_object)
{
	var_24_int = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	TaskCall(0);
	func_0(var_26_object, var_24_int, var_25_object);
	TaskReturn();
	return 0;
}


