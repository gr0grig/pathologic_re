// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Confusion|A:SetMessage|A:ClearReplies|A:AddReply|W:Warning|W:all|W:idle|W:Rage|W:Neutral|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Rubin.png|W:ui/NPC_Rubin_b.png|W:oob4Rubin1|W:b4q01|W:oob4Rubin2|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x2ba
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc4 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x2af vars=object
// @EVENT_26: op=0x2e3 vars=string
// @EVENT_5: op=0x2eb vars=
// @EVENT_6: op=0x2f0 vars=
// @PE: 0x51,0xae,0xc4,0x2af,0x2e3,0x4b3,0x4b9,0x4c2,0x4c8,0x4d4

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_1132();
		var_11_bool = var_7_bool == (int)19669;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1209();
		}
		var_40_bool = var_7_bool == (int)20131;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_1209();
		}
		var_44_bool = var_7_bool == (int)20090;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_1218();
		}
		var_50_bool = var_6_int == (int)19666;
		if(var_50_bool != 0) {
			var_51_bool = 0; var_52_object = Obj();
			var_52_object = var_1_object;
			func_1224(var_52_object);
			if(var_51_bool != 0) {
				var_59_object = Obj(); var_60_object = Obj();
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_1203();
				var_63_string = "";
				func_174(var_7_bool, "Confusion");
				@@@var_0_object:SetMessage((int)518556);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518557, (int)19668, (int)19667);
				@@@var_0_object:AddReply((int)518965, (int)20084, (int)20077);
				return 0;
			}
			var_87_string = "";
			func_174(var_7_bool, "Warning");
			@@@var_0_object:SetMessage((int)518560);
			@@@var_0_object:ClearReplies();
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_1236(var_90_object);
			if(var_89_bool != 0) {
				@@@var_0_object:AddReply((int)518978, (int)20099, (int)20090);
			}
			@@@var_0_object:AddReply((int)518561, (int)-1, (int)19671);
			return 0;
		}
		var_102_bool = var_6_int == (int)20099;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_174(var_7_bool, "Warning");
			@@@var_0_object:SetMessage((int)518984);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518985, (int)20101, (int)20100);
			return 0;
		}
		var_109_bool = var_6_int == (int)20101;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_174(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)518986);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518987, (int)20103, (int)20102);
			return 0;
		}
		var_116_bool = var_6_int == (int)20103;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_174(var_7_bool, "Rage");
			@@@var_0_object:SetMessage((int)518988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518989, (int)-1, (int)20104);
			return 0;
		}
		var_123_bool = var_6_int == (int)20084;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_174(var_7_bool, "Warning");
			@@@var_0_object:SetMessage((int)518972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518973, (int)20086, (int)20085);
			return 0;
		}
		var_130_bool = var_6_int == (int)20086;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_174(var_7_bool, "Warning");
			@@@var_0_object:SetMessage((int)518974);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518976, (int)20089, (int)20088);
			return 0;
		}
		var_137_bool = var_6_int == (int)20089;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_174(var_7_bool, "Warning");
			@@@var_0_object:SetMessage((int)518977);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518979, (int)20092, (int)20091);
			return 0;
		}
		var_144_bool = var_6_int == (int)20092;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_174(var_7_bool, "Rage");
			@@@var_0_object:SetMessage((int)518980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518981, (int)20087, (int)20093);
			return 0;
		}
		var_151_bool = var_6_int == (int)19668;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_174(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)518558);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518966, (int)20087, (int)20078);
			@@@var_0_object:AddReply((int)518967, (int)20080, (int)20079);
			return 0;
		}
		var_161_bool = var_6_int == (int)20080;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_174(var_7_bool, "Warning");
			@@@var_0_object:SetMessage((int)518968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518969, (int)20087, (int)20081);
			@@@var_0_object:AddReply((int)518970, (int)20083, (int)20082);
			return 0;
		}
		var_171_bool = var_6_int == (int)20083;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_174(var_7_bool, "Warning");
			@@@var_0_object:SetMessage((int)518971);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518982, (int)20084, (int)20096);
			return 0;
		}
		var_178_bool = var_6_int == (int)20087;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_174(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)518975);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518993, (int)20110, (int)20108);
			@@@var_0_object:AddReply((int)518994, (int)20110, (int)20109);
			return 0;
		}
		var_188_bool = var_6_int == (int)20110;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_174(var_7_bool, "Rage");
			@@@var_0_object:SetMessage((int)518995);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518996, (int)20113, (int)20112);
			@@@var_0_object:AddReply((int)527917, (int)20113, (int)29266);
			return 0;
		}
		var_198_bool = var_6_int == (int)20113;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_174(var_7_bool, "Rage");
			@@@var_0_object:SetMessage((int)518997);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518998, (int)20115, (int)20114);
			return 0;
		}
		var_205_bool = var_6_int == (int)20115;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_174(var_7_bool, "Rage");
			@@@var_0_object:SetMessage((int)518999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519005, (int)20122, (int)20121);
			@@@var_0_object:AddReply((int)519001, (int)20118, (int)20117);
			return 0;
		}
		var_215_bool = var_6_int == (int)20118;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_174(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519003, (int)20124, (int)20119);
			return 0;
		}
		var_222_bool = var_6_int == (int)20124;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_174(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519007);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519008, (int)20122, (int)20125);
			return 0;
		}
		var_229_bool = var_6_int == (int)20122;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_174(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)519006);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519000, (int)20120, (int)20116);
			return 0;
		}
		var_236_bool = var_6_int == (int)20120;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_174(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)519004);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519009, (int)20128, (int)20127);
			return 0;
		}
		var_243_bool = var_6_int == (int)20128;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_174(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519010);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519011, (int)20130, (int)20129);
			return 0;
		}
		var_250_bool = var_6_int == (int)20130;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_174(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518559, (int)-1, (int)19669);
			@@@var_0_object:AddReply((int)519013, (int)-1, (int)20131);
			return 0;
		}
		var_3_string = true;
		var_259_bool = 0;
		func_1177(var_259_bool);
		if(var_259_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_851();
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_8_bool = var_6_string == "cleanup";
	if(var_8_bool != 0) {
		func_719(var_6_string);
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
		func_768(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_1139(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_699:
	var_8_bool = 0;
	func_856(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_699;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_770();
	goto Label_699;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_861(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1171(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1169(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1173(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1175(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1302(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_1139(Obj());
	var_81_object = var_80_object;
	func_948(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_249_bool = var_17_bool == 0; //@nz
	if(var_249_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_930();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_768(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_770()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_856(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_1186((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_784:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_856(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_817;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_1179(var_53_string, var_54_int);
			PlayAnimation("all", var_53_string);
			WaitForAnimEnd(var_26_bool);
			var_55_bool = var_26_bool == 0; //@nz
			if(var_55_bool != 0) {
			} else {
		} else {
				var_60_bool = var_24_int == (int)1;
				if(var_60_bool != 0) {
					rand(var_27_float, (int)4);
					var_63_int = var_27_float + (int)1;
					Sleep(var_63_int, var_28_bool);
					var_64_bool = var_28_bool == 0; //@nz
					if(var_64_bool != 0) {
						goto Label_846;
					}
					goto Label_835;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_835;
				goto Label_846;
		}
		Label_835:
			var_56_bool = 0;
			func_849(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_846;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_784;

		}
	}
Label_846:
	ResetAAS();
	return 14;
	
}


func_1155(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_1160(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1169(var_67_int)
{
	var_67_int = 515551;
	return 0;
}


func_1171(var_66_int)
{
	var_66_int = 502876;
	return 0;
}


func_1043(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_1160(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_1052:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_1052;
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
	func_1117(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1173(var_68_string)
{
	var_68_string = "ui/NPC_Rubin.png";
	return 0;
}


func_1302(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x525";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_1175(var_69_string)
{
	var_69_string = "ui/NPC_Rubin_b.png";
	return 0;
}


func_1177(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_1179(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_930()
{
	var_251_bool = 0; var_252_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_254_bool = 0;
	func_1177(var_254_bool);
	if(var_254_bool != 0) {
	} else {
		HasAnimationTrack(var_252_bool, "head");
		var_256_bool = var_252_bool;
		if(var_256_bool == 0) goto Label_947;
		UnlookAsync("head");
	}
Label_947:
	return 2;
	
}


func_1186(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_1188:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_1179(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_1188;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_174(var_2_object, var_193_string)
{
	var_194_bool = 0;
	func_1177(var_194_bool);
	var_195_bool = var_194_bool == 0; //@nz
	if(var_195_bool != 0) {
		return 0;
	}
	var_196_bool = var_193_string == var_2_object;
	if(var_196_bool != 0) {
		return 0;
	}
	var_197_string = ""; var_198_bool = 0;
	var_193_string = var_197_string;
	var_200_bool = var_193_string == "";
	if(var_200_bool != 0) {
		var_198_bool = 0;
	} else {
		var_198_bool = 1;
	}
	func_1102(var_197_string, var_198_bool);
	var_2_object = var_193_string;
	return 0;
	
}


func_1203()
{
	SetVariable("oob4Rubin1", (int)1);
	return 0;
}


func_948(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_1006(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_1043(var_121_bool, var_122_object);
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
		func_1043(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_1006(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1004;
	
Label_1004:
	var_79_bool = 1;
	return 4;
	
}


func_1209()
{
	SetVariable("b4q01", (int)1000);
	func_1248();
	return 0;
}


func_1086(var_219_string)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0;
	lshHasAnimation(var_223_bool, var_219_string);
	var_226_bool = var_223_bool;
	if(var_226_bool != 0) {
		lshGetAnimTimes(var_219_string, var_224_float, var_225_float);
		lshPlayAnimation(var_224_float, var_225_float, (bool)0);
	} else {
		var_229_int = "Can't find lsh animation : " + var_219_string;
		Trace(var_229_int);
	}
	return 6;
	
}


func_1218()
{
	SetVariable("oob4Rubin2", (int)1);
	return 0;
}


func_1224(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_1155(var_183_int, "oob4Rubin1");
	var_188_bool = var_183_int == (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_1102(var_197_string, var_198_bool)
{
	var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_bool = 0; var_205_float = 0; var_206_float = 0;
	lshHasAnimation(var_204_bool, var_197_string);
	var_207_bool = var_204_bool;
	if(var_207_bool != 0) {
		lshGetAnimTimes(var_197_string, var_205_float, var_206_float);
		lshPlayAnimation(var_205_float, var_206_float, var_198_bool);
	} else {
		var_209_int = "Can't find lsh animation : " + var_197_string;
		Trace(var_209_int);
	}
	return 6;
	
}


func_719(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_768(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_1139(var_14_object);
		RemoveActor(var_14_object);
	}
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
		func_1224(var_182_object);
		if(var_181_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_1203();
			var_193_string = "";
			func_174(var_175_object, "Confusion");
			@@@var_0_object:SetMessage((int)518556);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518557, (int)19668, (int)19667);
			@@@var_0_object:AddReply((int)518965, (int)20084, (int)20077);
		} else {
				var_235_string = "";
				func_174(var_175_object, "Warning");
				@@@var_0_object:SetMessage((int)518560);
				@@@var_0_object:ClearReplies();
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_1236(var_238_object);
				if(var_237_bool != 0) {
					@@@var_0_object:AddReply((int)518978, (int)20099, (int)20090);
				}
				@@@var_0_object:AddReply((int)518561, (int)-1, (int)19671);
				goto Label_144;
		}
	}
Label_144:
	var_217_bool = 0;
	func_1177(var_217_bool);
	if(var_217_bool != 0) {

	Label_148:
		lshWaitForAnimEnd();
		var_218_string = var_3_string;
		if(var_218_string != 0) {
		} else {
			var_219_string = "";
			var_219_string = var_2_object;
			func_1086(var_219_string);
			goto Label_148;
	}
		PlayAnimation("all", "idle");

	Label_163:
		WaitForAnimEnd();
		var_232_string = var_3_string;
		if(var_232_string != 0) {
			goto Label_173;
		}
		PlayAnimation("all", "idle");
		goto Label_163;

	}
	goto Label_173;
	
Label_173:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_849(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_851()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1236(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_1155(var_239_int, "oob4Rubin2");
	var_242_bool = var_239_int == (int)0;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_856(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_861(var_18_bool, var_19_object, var_20_float)
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
	func_1145(var_45_cvector, var_46_cvector);
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
	func_1177(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_924;
		LookAsyncCamera("head");
	}
Label_924:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_1117(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1177(var_117_bool);
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


func_1248()
{
	var_16_object = Obj(); var_17_object = Obj();
	CreateDiaryEntry(var_17_object, (int)219, (int)1, (int)518597);
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0;
	var_17_object = var_22_object;
	func_1274(var_21_bool, var_22_object, (int)216);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1132()
{
	var_9_bool = 0;
	func_1177(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1261(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	GetDiaryRoot(var_32_object);
	var_33_bool = var_32_object == 0; //@nz
	if(var_33_bool != 0) {
		Trace("Can't retrieve diary root");
		var_30_object = 0;
		return 2;
	}
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1006(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_1009:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_1009;
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
	func_1117(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_1139(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1145(var_45_cvector, var_46_cvector)
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


func_1274(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0;
	func_1261(Obj());
	var_30_object = var_27_object;
	@@var_27_object:Find(var_23_int, var_28_object);
	var_35_bool = var_28_object == 0; //@nz
	if(var_35_bool != 0) {
		var_37_int = "Can't find diary parent with id: " + var_23_int;
		Trace(var_37_int);
		var_21_bool = 0;
		return 6;
	}
	@@var_28_object:AddChild(var_22_object);
	SendWorldWndMessage((int)7);
	@@var_22_object:GetCategory(var_29_int);
	SetDiarySection(var_29_int);
	var_21_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


