// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:b3q01|W:b3q01ButcherGotoBigVlad|W:pt_map_bigvlad|A:AddMark|W:oob3Butcher1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x244
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbf vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x239 vars=object
// @EVENT_26: op=0x26d vars=string
// @EVENT_5: op=0x275 vars=
// @EVENT_6: op=0x27a vars=
// @PE: 0x51,0xa9,0xbf,0x239,0x26d,0x459,0x45f,0x46b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_1014();
		var_11_bool = var_7_bool == (int)20471;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1090();
		}
		var_56_bool = var_7_bool == (int)20472;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_1090();
		}
		var_60_bool = var_7_bool == (int)20821;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_1113();
		}
		var_66_bool = var_6_int == (int)20448;
		if(var_66_bool != 0) {
			var_67_bool = 0; var_68_object = Obj();
			var_68_object = var_1_object;
			func_1131(var_68_object);
			if(var_67_bool != 0) {
				var_75_string = "";
				func_169(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)519294);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519295, (int)20450, (int)20449);
				@@@var_0_object:AddReply((int)519300, (int)20455, (int)20454);
				return 0;
			}
			var_99_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519643);
			@@@var_0_object:ClearReplies();
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_1119(var_102_object);
			if(var_101_bool != 0) {
				@@@var_0_object:AddReply((int)519644, (int)20823, (int)20821);
			}
			@@@var_0_object:AddReply((int)519645, (int)-1, (int)20822);
			return 0;
		}
		var_114_bool = var_6_int == (int)20823;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519647, (int)20825, (int)20824);
			@@@var_0_object:AddReply((int)527865, (int)20825, (int)29210);
			return 0;
		}
		var_124_bool = var_6_int == (int)20825;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519649, (int)-1, (int)20826);
			return 0;
		}
		var_131_bool = var_6_int == (int)20455;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519301);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519304, (int)20459, (int)20458);
			return 0;
		}
		var_138_bool = var_6_int == (int)20450;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519297, (int)20452, (int)20451);
			return 0;
		}
		var_145_bool = var_6_int == (int)20452;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519299, (int)20456, (int)20453);
			@@@var_0_object:AddReply((int)519317, (int)20474, (int)20473);
			return 0;
		}
		var_155_bool = var_6_int == (int)20474;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519319, (int)20476, (int)20475);
			@@@var_0_object:AddReply((int)519322, (int)20456, (int)20479);
			return 0;
		}
		var_165_bool = var_6_int == (int)20476;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519321, (int)20456, (int)20477);
			return 0;
		}
		var_172_bool = var_6_int == (int)20456;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519303, (int)20459, (int)20457);
			return 0;
		}
		var_179_bool = var_6_int == (int)20459;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519305);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519306, (int)20462, (int)20461);
			@@@var_0_object:AddReply((int)519638, (int)20817, (int)20816);
			return 0;
		}
		var_189_bool = var_6_int == (int)20817;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519639);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519640, (int)20470, (int)20818);
			return 0;
		}
		var_196_bool = var_6_int == (int)20462;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519308, (int)20464, (int)20463);
			return 0;
		}
		var_203_bool = var_6_int == (int)20464;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519310, (int)20467, (int)20465);
			@@@var_0_object:AddReply((int)519311, (int)20467, (int)20466);
			return 0;
		}
		var_213_bool = var_6_int == (int)20467;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519312);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519313, (int)20470, (int)20469);
			return 0;
		}
		var_220_bool = var_6_int == (int)20470;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519315, (int)-1, (int)20471);
			@@@var_0_object:AddReply((int)519316, (int)-1, (int)20472);
			return 0;
		}
		var_3_string = true;
		var_229_bool = 0;
		func_1064(var_229_bool);
		if(var_229_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_733();
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
		func_601(var_6_string);
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
		func_650(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_1021(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_581:
	var_8_bool = 0;
	func_738(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_581;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_652();
	goto Label_581;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_743(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1058(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1056(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1060(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1062(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1214(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_1021(Obj());
	var_81_object = var_80_object;
	func_830(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_245_bool = var_17_bool == 0; //@nz
	if(var_245_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_812();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1027(var_45_cvector, var_46_cvector)
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


func_1156(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj();
	GetDiaryRoot(var_48_object);
	var_49_bool = var_48_object == 0; //@nz
	if(var_49_bool != 0) {
		Trace("Can't retrieve diary root");
		var_46_object = 0;
		return 2;
	}
	var_48_object = var_46_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_650(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_652()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_738(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_1073((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_666:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_738(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_699;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_1066(var_53_string, var_54_int);
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
						goto Label_728;
					}
					goto Label_717;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_717;
				goto Label_728;
		}
		Label_717:
			var_56_bool = 0;
			func_731(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_728;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_666;

		}
	}
Label_728:
	ResetAAS();
	return 14;
	
}


func_1037(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_1169(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0;
	func_1156(Obj());
	var_46_object = var_43_object;
	@@var_43_object:Find(var_39_int, var_44_object);
	var_51_bool = var_44_object == 0; //@nz
	if(var_51_bool != 0) {
		var_53_int = "Can't find diary parent with id: " + var_39_int;
		Trace(var_53_int);
		var_37_bool = 0;
		return 6;
	}
	@@var_44_object:AddChild(var_38_object);
	SendWorldWndMessage((int)7);
	@@var_38_object:GetCategory(var_45_int);
	SetDiarySection(var_45_int);
	var_37_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1042(var_29_float)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_31_float = var_29_float;
	return 2;
}


func_1047(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_925(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_1047(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_934:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_934;
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
	func_999(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1056(var_67_int)
{
	var_67_int = 515562;
	return 0;
}


func_1058(var_66_int)
{
	var_66_int = 503347;
	return 0;
}


func_1060(var_68_string)
{
	var_68_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_1062(var_69_string)
{
	var_69_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_1064(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_169(var_2_object, var_189_string)
{
	var_190_bool = 0;
	func_1064(var_190_bool);
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
	func_984(var_193_string, var_194_bool);
	var_2_object = var_189_string;
	return 0;
	
}


func_1066(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_812()
{
	var_247_bool = 0; var_248_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_250_bool = 0;
	func_1064(var_250_bool);
	if(var_250_bool != 0) {
	} else {
		HasAnimationTrack(var_248_bool, "head");
		var_252_bool = var_248_bool;
		if(var_252_bool == 0) goto Label_829;
		UnlookAsync("head");
	}
Label_829:
	return 2;
	
}


func_1197(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetMainOutdoorScene(var_21_object);
	var_23_bool = var_21_object == 0; //@ne
	if(var_23_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_22_object = 0;
		var_22_object = var_18_object;
		return 4;
	}
	@@var_21_object:GetMap(var_22_object);
	var_22_object = var_18_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1073(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_1075:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_1066(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_1075;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_830(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_888(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_925(var_121_bool, var_122_object);
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
		func_925(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_888(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_886;
	
Label_886:
	var_79_bool = 1;
	return 4;
	
}


func_1214(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x4cd";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_1090()
{
	var_14_object = Obj(); var_15_object = Obj();
	SetVariable("b3q01", (int)3);
	func_1197(Obj());
	var_18_object = var_15_object;
	var_29_float = 0;
	func_1042(var_29_float);
	@@var_15_object:AddMark("b3q01ButcherGotoBigVlad", "pt_map_bigvlad", (int)1, (int)519641, var_29_float);
	func_1143();
	return 2;
}
EMIT "Stack[-1] = 0";


func_968(var_215_string)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0;
	lshHasAnimation(var_219_bool, var_215_string);
	var_222_bool = var_219_bool;
	if(var_222_bool != 0) {
		lshGetAnimTimes(var_215_string, var_220_float, var_221_float);
		lshPlayAnimation(var_220_float, var_221_float, (bool)0);
	} else {
		var_225_int = "Can't find lsh animation : " + var_215_string;
		Trace(var_225_int);
	}
	return 6;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_1131(var_182_object);
		if(var_181_bool != 0) {
			var_189_string = "";
			func_169(var_175_object, "Neutral");
			@@@var_0_object:SetMessage((int)519294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519295, (int)20450, (int)20449);
			@@@var_0_object:AddReply((int)519300, (int)20455, (int)20454);
		} else {
				var_231_string = "";
				func_169(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)519643);
				@@@var_0_object:ClearReplies();
				var_233_bool = 0; var_234_object = Obj();
				var_234_object = var_1_object;
				func_1119(var_234_object);
				if(var_233_bool != 0) {
					@@@var_0_object:AddReply((int)519644, (int)20823, (int)20821);
				}
				@@@var_0_object:AddReply((int)519645, (int)-1, (int)20822);
				goto Label_139;
		}
	}
Label_139:
	var_213_bool = 0;
	func_1064(var_213_bool);
	if(var_213_bool != 0) {

	Label_143:
		lshWaitForAnimEnd();
		var_214_string = var_3_string;
		if(var_214_string != 0) {
		} else {
			var_215_string = "";
			var_215_string = var_2_object;
			func_968(var_215_string);
			goto Label_143;
	}
		PlayAnimation("all", "idle");

	Label_158:
		WaitForAnimEnd();
		var_228_string = var_3_string;
		if(var_228_string != 0) {
			goto Label_168;
		}
		PlayAnimation("all", "idle");
		goto Label_158;

	}
	goto Label_168;
	
Label_168:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_984(var_193_string, var_194_bool)
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


func_1113()
{
	SetVariable("oob3Butcher1", (int)1);
	return 0;
}


func_601(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_650(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_1021(var_14_object);
		RemoveActor(var_14_object);
	}
	return 2;
}


func_731(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_733()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1119(var_233_bool)
{
	var_235_int = 0; var_236_string = "";
	func_1037(var_235_int, "oob3Butcher1");
	var_238_bool = var_235_int == (int)0;
	if(var_238_bool != 0) {
		var_233_bool = 1;
		return 0;
	}
	var_233_bool = 0;
	return 0;
}


func_738(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_743(var_18_bool, var_19_object, var_20_float)
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
	func_1027(var_45_cvector, var_46_cvector);
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
	func_1064(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_806;
		LookAsyncCamera("head");
	}
Label_806:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_999(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1064(var_117_bool);
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


func_1131(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_1037(var_183_int, "b3q01");
	var_188_bool = var_183_int == (int)2;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_1014()
{
	var_9_bool = 0;
	func_1064(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1143()
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateDiaryEntry(var_33_object, (int)224, (int)1, (int)519642);
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0;
	var_33_object = var_38_object;
	func_1169(var_37_bool, var_38_object, (int)221);
	return 2;
}
EMIT "Stack[-1] = 0";


func_888(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_891:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_891;
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
	func_999(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_1021(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


