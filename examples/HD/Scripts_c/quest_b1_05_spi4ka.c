// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,FindActor/2,Trigger/2,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Fear|W:Azart|W:Serious|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:oob1Spi4ka1|W:b1q05Spi4kaGotoLaska|W:pt_map_laska|A:AddMark|W:b1q05Spi4kaGotoMishka|W:pt_map_mishka|W:quest_b1_05|W:completed|A:ShowMap|W:vagon_mishka@door1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_spi4ka|W:ui/NPC_Spi4ka.png|W:ui/NPC_Spi4ka_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x308
// @RUN_TASK: 4
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a4 vars=int,int
// @TASK_4: vars=bool params=0
// @EVENT_0: op=0x2fc vars=object
// @EVENT_26: op=0x30c vars=string
// @EVENT_6: op=0x328 vars=
// @PE: 0x51,0x8b,0xa1,0x140,0x18e,0x1a4,0x2fc,0x490,0x4b7,0x4c7,0x4d7,0x4de

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_bool)
{
	if((int)1 != 0) {
		func_1097();
		var_16_bool = var_11_bool == (int)22020;
		if(var_16_bool != 0) {
			var_17_string = "";
			func_139(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520804, (int)29221, (int)22021);
			@@@var_0_object:AddReply((int)527876, (int)29224, (int)29223);
			return 0;
		}
		var_42_bool = var_11_bool == (int)29224;
		if(var_42_bool != 0) {
			var_43_string = "";
			func_139(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)527877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527878, (int)-1, (int)29225);
			return 0;
		}
		var_49_bool = var_11_bool == (int)29221;
		if(var_49_bool != 0) {
			var_50_string = "";
			func_139(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)527874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527875, (int)-1, (int)29222);
			return 0;
		}
		var_3_string = true;
		var_55_bool = 0;
		func_1404(var_55_bool);
		if(var_55_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool)
{
	if((int)1 != 0) {
		func_1097();
		var_16_bool = var_12_bool == (int)32262;
		if(var_16_bool != 0) {
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_1174();
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_1239();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_1207(var_82_object);
		}
		var_108_bool = var_12_bool == (int)32312;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_1174();
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_1239();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_1223(var_114_object);
		}
		var_121_bool = var_11_int == (int)32255;
		if(var_121_bool != 0) {
			var_122_bool = 0; var_123_object = Obj();
			var_123_object = var_1_object;
			func_1246(var_123_object);
			if(var_122_bool != 0) {
				var_130_object = Obj(); var_131_object = Obj();
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_1168();
				var_134_string = "";
				func_398(var_12_bool, "Fear");
				@@@var_0_object:SetMessage((int)530928);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530929, (int)32288, (int)32256);
				return 0;
			}
			var_155_string = "";
			func_398(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530936);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530937, (int)-1, (int)32264);
			return 0;
		}
		var_161_bool = var_11_int == (int)32288;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_398(var_12_bool, "Fear");
			@@@var_0_object:SetMessage((int)530967);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530968, (int)32291, (int)32289);
			@@@var_0_object:AddReply((int)530969, (int)32294, (int)32290);
			return 0;
		}
		var_171_bool = var_11_int == (int)32294;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_398(var_12_bool, "Azart");
			@@@var_0_object:SetMessage((int)530973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530974, (int)32296, (int)32295);
			@@@var_0_object:AddReply((int)530976, (int)32291, (int)32297);
			return 0;
		}
		var_181_bool = var_11_int == (int)32296;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_398(var_12_bool, "Azart");
			@@@var_0_object:SetMessage((int)530975);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530977, (int)32291, (int)32298);
			return 0;
		}
		var_188_bool = var_11_int == (int)32291;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_398(var_12_bool, "Azart");
			@@@var_0_object:SetMessage((int)530970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530971, (int)32293, (int)32292);
			@@@var_0_object:AddReply((int)530989, (int)32315, (int)32314);
			return 0;
		}
		var_198_bool = var_11_int == (int)32315;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_398(var_12_bool, "Serious");
			@@@var_0_object:SetMessage((int)530990);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530991, (int)32293, (int)32316);
			return 0;
		}
		var_205_bool = var_11_int == (int)32293;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_398(var_12_bool, "Azart");
			@@@var_0_object:SetMessage((int)530972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530978, (int)32302, (int)32300);
			return 0;
		}
		var_212_bool = var_11_int == (int)32302;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_398(var_12_bool, "Serious");
			@@@var_0_object:SetMessage((int)530980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530981, (int)32301, (int)32303);
			@@@var_0_object:AddReply((int)530987, (int)32301, (int)32310);
			return 0;
		}
		var_222_bool = var_11_int == (int)32301;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_398(var_12_bool, "Serious");
			@@@var_0_object:SetMessage((int)530979);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530982, (int)32305, (int)32304);
			return 0;
		}
		var_229_bool = var_11_int == (int)32305;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_398(var_12_bool, "Azart");
			@@@var_0_object:SetMessage((int)530983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530931, (int)32259, (int)32258);
			@@@var_0_object:AddReply((int)530984, (int)32307, (int)32306);
			return 0;
		}
		var_239_bool = var_11_int == (int)32307;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_398(var_12_bool, "Azart");
			@@@var_0_object:SetMessage((int)530985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530986, (int)32259, (int)32308);
			return 0;
		}
		var_246_bool = var_11_int == (int)32259;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_398(var_12_bool, "Serious");
			@@@var_0_object:SetMessage((int)530932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530933, (int)32261, (int)32260);
			@@@var_0_object:AddReply((int)530988, (int)-1, (int)32312);
			return 0;
		}
		var_256_bool = var_11_int == (int)32261;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_398(var_12_bool, "Serious");
			@@@var_0_object:SetMessage((int)530934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530935, (int)-1, (int)32262);
			return 0;
		}
		var_3_string = true;
		var_262_bool = 0;
		func_1404(var_262_bool);
		if(var_262_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a5";
	
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_1379(var_12_object);
	var_244_int = 0; var_245_object = Obj();
	var_11_object = var_245_object;
	TaskCall(2);
	func_239(var_246_object, var_244_int, var_245_object);
	TaskReturn();
	return 0;
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool, var_11_string)
{
	var_12_bool = 0; var_13_bool = 0;
	var_15_bool = var_11_string == "cleanup";
	if(var_15_bool != 0) {
		var_0_object = true;
		IsLoaded(var_13_bool);
		var_16_bool = 0;
		var_16_bool = 0;
		var_17_bool = var_13_bool == 0; //@nz
		if(var_17_bool != 0) {
			var_18_bool = 0;
			func_824(var_18_bool);
			if(var_18_bool != 0) {
				var_16_bool = 1;
			}
		}
		if(var_16_bool != 0) {
			var_19_object = Obj();
			func_1104(var_19_object);
			RemoveActor(var_19_object);
		}
	} else {
		var_23_bool = var_11_string == "restore";
		if(var_23_bool == 0) goto Label_807;
		var_0_object = false;
	}
Label_807:
	return 2;
	
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_object = var_0_object;
	if(var_12_object != 0) {
		var_13_bool = 0;
		func_824(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_1104(var_14_object);
		RemoveActor(var_14_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool)
{
	
Label_776:
	Hold();
	goto Label_776;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_0_object = var_18_object;
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0;
	var_18_object = var_29_object;
	func_826(var_28_bool, var_29_object, (float)70.0);
	var_75_bool = var_28_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_76_int = 0;
	func_1398(var_76_int);
	@@var_24_object:SetNPCName(var_76_int);
	var_77_int = 0;
	func_1396(var_77_int);
	@@var_24_object:SetNPCDescription(var_77_int);
	var_78_string = "";
	func_1400(var_78_string);
	@@var_24_object:SetPhoto(var_78_string);
	var_79_string = "";
	func_1402(var_79_string);
	@@var_24_object:SetPhoto2(var_79_string);
	var_80_int = 0;
	func_1362(var_80_int);
	@@var_24_object:SetPlayerName(var_80_int);
	IsOverrideActive(var_25_bool);
	var_88_bool = var_25_bool;
	if(var_88_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	DoDialog(var_24_object);
	var_89_bool = 0; var_90_object = Obj();
	func_1104(Obj());
	var_91_object = var_90_object;
	func_913(var_89_bool, var_90_object);
	var_184_object = Obj(); var_185_object = Obj();
	var_18_object = var_184_object;
	var_24_object = var_185_object;
	TaskCall(1);
	func_81(var_186_object, var_187_object, var_188_string, var_189_bool, var_184_object, var_185_object);
	TaskReturn();
	@@var_24_object:IsDialogEnd(var_27_bool);
	
Label_63:
	var_233_bool = var_27_bool == 0; //@nz
	if(var_233_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_63;
	}
	var_18_object = Obj();
	func_895();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1154(var_32_float)
{
	var_33_float = 0; var_34_float = 0;
	GetGameTime(var_34_float);
	var_34_float = var_32_float;
	return 2;
}


func_1284(var_45_bool, var_46_object, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0;
	func_1271(Obj());
	var_54_object = var_51_object;
	@@var_51_object:Find(var_47_int, var_52_object);
	var_59_bool = var_52_object == 0; //@nz
	if(var_59_bool != 0) {
		var_61_int = "Can't find diary parent with id: " + var_47_int;
		Trace(var_61_int);
		var_45_bool = 0;
		return 6;
	}
	@@var_52_object:AddChild(var_46_object);
	SendWorldWndMessage((int)7);
	@@var_46_object:GetCategory(var_53_int);
	SetDiarySection(var_53_int);
	var_45_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1159(var_144_int)
{
	var_145_float = 0; var_146_float = 0;
	GetGameTime(var_146_float);
	var_148_int = 0;
	var_148_int = var_146_float / (int)24;
	var_144_int = (int)1 + var_148_int;
	return 2;
}


func_139(var_2_object, var_191_string)
{
	var_192_bool = 0;
	func_1404(var_192_bool);
	var_193_bool = var_192_bool == 0; //@nz
	if(var_193_bool != 0) {
		return 0;
	}
	var_194_bool = var_191_string == var_2_object;
	if(var_194_bool != 0) {
		return 0;
	}
	var_195_string = ""; var_196_bool = 0;
	var_191_string = var_195_string;
	var_198_bool = var_191_string == "";
	if(var_198_bool != 0) {
		var_196_bool = 0;
	} else {
		var_196_bool = 1;
	}
	func_1067(var_195_string, var_196_bool);
	var_2_object = var_191_string;
	return 0;
	
}


func_398(var_2_object, var_287_string)
{
	var_288_bool = 0;
	func_1404(var_288_bool);
	var_289_bool = var_288_bool == 0; //@nz
	if(var_289_bool != 0) {
		return 0;
	}
	var_290_bool = var_287_string == var_2_object;
	if(var_290_bool != 0) {
		return 0;
	}
	var_291_string = ""; var_292_bool = 0;
	var_287_string = var_291_string;
	var_294_bool = var_287_string == "";
	if(var_294_bool != 0) {
		var_292_bool = 0;
	} else {
		var_292_bool = 1;
	}
	func_1067(var_291_string, var_292_bool);
	var_2_object = var_287_string;
	return 0;
	
}


func_1168()
{
	SetVariable("oob1Spi4ka1", (int)1);
	return 0;
}


func_913(var_89_bool, var_90_object)
{
	var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0;
	GetVariable("voice_common", var_96_int);
	var_99_int = var_96_int;
	if(var_99_int != 0) {
		var_100_bool = 0; var_101_object = Obj();
		var_90_object = var_101_object;
		func_971(var_100_bool, var_101_object);
		var_130_bool = var_100_bool == 0; //@nz
		if(var_130_bool != 0) {
			var_131_bool = 0; var_132_object = Obj();
			var_90_object = var_132_object;
			func_1008(var_131_bool, var_132_object);
			var_166_bool = var_131_bool == 0; //@nz
			if(var_166_bool != 0) {
				var_89_bool = 0;
				return 4;
			}
		}
		irand(var_97_int, (int)2);
		var_168_int = var_97_int;
		if(var_168_int != 0) {
			var_171_int = var_96_int + (int)1;
			var_173_int = var_171_int % (int)3;
			SetVariable("voice_common", var_173_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_176_bool = 0; var_177_object = Obj();
		var_90_object = var_177_object;
		func_1008(var_176_bool, var_177_object);
		var_178_bool = var_176_bool == 0; //@nz
		if(var_178_bool != 0) {
			var_179_bool = 0; var_180_object = Obj();
			var_90_object = var_180_object;
			func_971(var_179_bool, var_180_object);
			var_181_bool = var_179_bool == 0; //@nz
			if(var_181_bool != 0) {
				var_89_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_969;
	
Label_969:
	var_89_bool = 1;
	return 4;
	
}


func_1174()
{
	var_19_object = Obj(); var_20_object = Obj();
	func_1312(Obj());
	var_21_object = var_20_object;
	var_32_float = 0;
	func_1154(var_32_float);
	@@var_20_object:AddMark("b1q05Spi4kaGotoLaska", "pt_map_laska", (int)3, (int)530954, var_32_float);
	var_39_float = 0;
	func_1154(var_39_float);
	@@var_20_object:AddMark("b1q05Spi4kaGotoMishka", "pt_map_mishka", (int)3, (int)530955, var_39_float);
	func_1258();
	var_63_bool = 0; var_64_string = ""; var_65_string = "";
	func_1142(var_63_bool, "quest_b1_05", "completed");
	return 2;
}
EMIT "Stack[-1] = 0";


func_1051(var_217_string)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0;
	lshHasAnimation(var_221_bool, var_217_string);
	var_224_bool = var_221_bool;
	if(var_224_bool != 0) {
		lshGetAnimTimes(var_217_string, var_222_float, var_223_float);
		lshPlayAnimation(var_222_float, var_223_float, (bool)0);
	} else {
		var_227_int = "Can't find lsh animation : " + var_217_string;
		Trace(var_227_int);
	}
	return 6;
	
}


func_1312(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetMainOutdoorScene(var_24_object);
	var_26_bool = var_24_object == 0; //@ne
	if(var_26_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_25_object = 0;
		var_25_object = var_21_object;
		return 4;
	}
	@@var_24_object:GetMap(var_25_object);
	var_25_object = var_21_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1067(var_195_string, var_196_bool)
{
	var_199_bool = 0; var_200_float = 0; var_201_float = 0; var_202_bool = 0; var_203_float = 0; var_204_float = 0;
	lshHasAnimation(var_202_bool, var_195_string);
	var_205_bool = var_202_bool;
	if(var_205_bool != 0) {
		lshGetAnimTimes(var_195_string, var_203_float, var_204_float);
		lshPlayAnimation(var_203_float, var_204_float, var_196_bool);
	} else {
		var_207_int = "Can't find lsh animation : " + var_195_string;
		Trace(var_207_int);
	}
	return 6;
	
}


func_1329(var_83_object, var_84_string, var_85_float)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_object = Obj(); var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0;
	GetMainOutdoorScene(var_93_object);
	var_95_bool = var_93_object == 0; //@ne
	if(var_95_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_93_object:GetLocator(var_84_string, var_94_bool, var_91_cvector, var_92_cvector);
	var_97_bool = var_94_bool == 0; //@nz
	if(var_97_bool != 0) {
		var_99_int = "Warning: outdoor scene locator " + var_84_string;
		var_101_int = var_99_int + " doesnt exist";
		Trace(var_101_int);
	}
	@@var_93_object:GetMap(var_83_object);
	var_102_bool = var_83_object == 0; //@ne
	if(var_102_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_104_float = GetByIndex(var_91_cvector, 0);
	var_105_float = GetByIndex(var_91_cvector, 2);
	@@var_83_object:SetMapParams(var_104_float, var_105_float, var_85_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1207(var_82_object)
{
	var_83_object = Obj(); var_84_string = ""; var_85_float = 0;
	func_1312(Obj());
	var_86_object = var_83_object;
	func_1329(var_83_object, "pt_map_laska", (float)2);
	var_106_object = Obj();
	func_1312(var_106_object);
	@@var_82_object:ShowMap(var_106_object);
	return 0;
}


func_824(var_13_bool)
{
	var_13_bool = 1;
	return 0;
}


func_1082(var_123_bool, var_124_string)
{
	var_125_bool = 0; var_126_bool = 0;
	var_127_bool = 0;
	func_1404(var_127_bool);
	if(var_127_bool != 0) {
		lshHasSpeech(var_126_bool, var_124_string);
		var_128_bool = var_126_bool;
		if(var_128_bool != 0) {
			lshPlaySpeech(var_124_string);
			var_123_bool = 1;
			return 2;
		}
	}
	var_123_bool = 0;
	return 2;
}


func_826(var_28_bool, var_29_object, var_30_float)
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
	func_1110(var_55_cvector, var_56_cvector);
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
	func_1404(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		HasAnimationTrack(var_48_bool, "head");
		var_73_bool = var_48_bool;
		if(var_73_bool == 0) goto Label_889;
		LookAsyncCamera("head");
	}
Label_889:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 18;
	
}


func_320(var_0_object, var_1_object, var_2_object, var_3_string, var_268_object, var_269_object)
{
	var_0_object = var_269_object;
	var_1_object = var_268_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_275_bool = 0; var_276_object = Obj();
		var_276_object = var_1_object;
		func_1246(var_276_object);
		if(var_275_bool != 0) {
			var_283_object = Obj(); var_284_object = Obj();
			var_283_object = var_1_object;
			var_284_object = var_0_object;
			func_1168();
			var_287_string = "";
			func_398(var_269_object, "Fear");
			@@@var_0_object:SetMessage((int)530928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530929, (int)32288, (int)32256);
		} else {
				var_307_string = "";
				func_398(var_269_object, "Neutral");
				@@@var_0_object:SetMessage((int)530936);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530937, (int)-1, (int)32264);
				goto Label_368;
		}
	}
Label_368:
	var_299_bool = 0;
	func_1404(var_299_bool);
	if(var_299_bool != 0) {

	Label_372:
		lshWaitForAnimEnd();
		var_300_string = var_3_string;
		if(var_300_string != 0) {
		} else {
			var_301_string = "";
			var_301_string = var_2_object;
			func_1051(var_301_string);
			goto Label_372;
	}
		PlayAnimation("all", "idle");

	Label_387:
		WaitForAnimEnd();
		var_304_string = var_3_string;
		if(var_304_string != 0) {
			goto Label_397;
		}
		PlayAnimation("all", "idle");
		goto Label_387;

	}
	goto Label_397;
	
Label_397:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x144";


func_1223(var_114_object)
{
	var_115_object = Obj(); var_116_string = ""; var_117_float = 0;
	func_1312(Obj());
	var_118_object = var_115_object;
	func_1329(var_115_object, "pt_map_mishka", (float)2);
	var_119_object = Obj();
	func_1312(var_119_object);
	@@var_114_object:ShowMap(var_119_object);
	return 0;
}


func_1097()
{
	var_14_bool = 0;
	func_1404(var_14_bool);
	if(var_14_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_971(var_100_bool, var_101_object)
{
	var_102_string = ""; var_103_int = 0; var_104_bool = 0; var_105_int = 0; var_106_string = ""; var_107_string = ""; var_108_int = 0; var_109_bool = 0; var_110_int = 0; var_111_string = "";
	var_107_string = "c";
	var_108_int = 0;
	
Label_974:
	if((int)1 != 0) {
		var_114_int = var_108_int + (int)1;
		var_115_int = var_107_string + var_114_int;
		@@var_101_object:HasProperty(var_115_int, var_109_bool);
		var_116_bool = var_109_bool == 0; //@nz
		if(var_116_bool != 0) {
		} else {
			var_108_int = var_108_int + (int)1;
			goto Label_974;
		}
	}
	var_117_bool = var_108_int == 0; //@nz
	if(var_117_bool != 0) {
		var_100_bool = 0;
		return 10;
	}
	var_110_int = 0;
	var_119_bool = var_108_int > (int)1;
	if(var_119_bool != 0) {
		irand(var_110_int, var_108_int);
	}
	var_121_int = var_110_int + (int)1;
	var_122_int = var_107_string + var_121_int;
	@@var_101_object:GetProperty(var_122_int, var_111_string);
	var_123_bool = 0; var_124_string = "";
	var_111_string = var_124_string;
	func_1082(var_123_bool, var_124_string);
	var_123_bool = var_100_bool;
	return 10;
	
}


func_1104(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	self(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_184_object, var_185_object)
{
	var_0_object = var_185_object;
	var_1_object = var_184_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_191_string = "";
		func_139(var_185_object, "Neutral");
		@@@var_0_object:SetMessage((int)520803);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520804, (int)29221, (int)22021);
		@@@var_0_object:AddReply((int)527876, (int)29224, (int)29223);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_215_bool = 0;
	func_1404(var_215_bool);
	if(var_215_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_216_string = var_3_string;
		if(var_216_string != 0) {
		} else {
			var_217_string = "";
			var_217_string = var_2_object;
			func_1051(var_217_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_230_string = var_3_string;
		if(var_230_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_1362(var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("branch", var_82_int);
	var_85_bool = var_82_int == (int)0;
	if(var_85_bool != 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x561";
	}
	var_87_bool = var_82_int == (int)1;
	if(var_87_bool != 0) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
	return 2;
}


func_1110(var_55_cvector, var_56_cvector)
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


func_1239()
{
	var_71_string = ""; var_72_bool = 0;
	func_1125("vagon_mishka@door1", (bool)0);
	return 0;
}


func_1246(var_275_bool)
{
	var_277_int = 0; var_278_string = "";
	func_1120(var_277_int, "oob1Spi4ka1");
	var_282_bool = var_277_int == (int)0;
	if(var_282_bool != 0) {
		var_275_bool = 1;
		return 0;
	}
	var_275_bool = 0;
	return 0;
}


func_1120(var_277_int, var_278_string)
{
	var_279_int = 0; var_280_int = 0;
	GetVariable(var_278_string, var_280_int);
	var_280_int = var_277_int;
	return 2;
}


func_1379(var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	GetVariable("mt_spi4ka", var_14_int);
	var_16_bool = var_14_int == 0; //@nz
	if(var_16_bool != 0) {
		var_17_int = 0; var_18_object = Obj();
		var_12_object = var_18_object;
		TaskCall(0);
		func_0(var_19_object, var_17_int, var_18_object);
		TaskReturn();
		SetVariable("mt_spi4ka", (int)1);
	}
	return 2;
}


func_1125(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj();
	FindActor(var_74_object, var_71_string);
	var_75_bool = var_74_object == 0; //@nz
	if(var_75_bool != 0) {
		var_77_int = "Door " + var_71_string;
		var_79_int = var_77_int + " not found";
		Trace(var_79_int);
	} else {
		@@var_74_object:SetProperty("locked", var_72_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_1258()
{
	var_40_object = Obj(); var_41_object = Obj();
	CreateDiaryEntry(var_41_object, (int)584, (int)2, (int)530953);
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0;
	var_41_object = var_46_object;
	func_1284(var_45_bool, var_46_object, (int)582);
	return 2;
}
EMIT "Stack[-1] = 0";


func_239(var_0_object, var_244_int, var_245_object)
{
	var_247_object = Obj(); var_248_bool = 0; var_249_int = 0; var_250_bool = 0; var_251_object = Obj(); var_252_bool = 0; var_253_int = 0; var_254_bool = 0;
	var_0_object = var_245_object;
	var_255_bool = 0; var_256_object = Obj(); var_257_float = 0;
	var_245_object = var_256_object;
	func_826(var_255_bool, var_256_object, (float)70.0);
	var_258_bool = var_255_bool == 0; //@nz
	if(var_258_bool != 0) {
		var_244_int = -2;
		return 8;
	}
	CreateDialog(var_251_object);
	var_259_int = 0;
	func_1398(var_259_int);
	@@var_251_object:SetNPCName(var_259_int);
	var_260_int = 0;
	func_1396(var_260_int);
	@@var_251_object:SetNPCDescription(var_260_int);
	var_261_string = "";
	func_1400(var_261_string);
	@@var_251_object:SetPhoto(var_261_string);
	var_262_string = "";
	func_1402(var_262_string);
	@@var_251_object:SetPhoto2(var_262_string);
	var_263_int = 0;
	func_1362(var_263_int);
	@@var_251_object:SetPlayerName(var_263_int);
	IsOverrideActive(var_252_bool);
	var_264_bool = var_252_bool;
	if(var_264_bool != 0) {
		var_244_int = -2;
		return 8;
	}
	DoDialog(var_251_object);
	var_265_bool = 0; var_266_object = Obj();
	func_1104(Obj());
	var_267_object = var_266_object;
	func_913(var_265_bool, var_266_object);
	var_268_object = Obj(); var_269_object = Obj();
	var_245_object = var_268_object;
	var_251_object = var_269_object;
	TaskCall(3);
	func_320(var_270_object, var_271_object, var_272_string, var_273_bool, var_268_object, var_269_object);
	TaskReturn();
	@@var_251_object:IsDialogEnd(var_254_bool);
	
Label_302:
	var_312_bool = var_254_bool == 0; //@nz
	if(var_312_bool != 0) {
		sync();
		@@var_251_object:IsDialogEnd(var_254_bool);
		goto Label_302;
	}
	var_245_object = Obj();
	func_895();
	StopDialog(var_251_object);
	@@var_251_object:GetReturnValue((int)-1);
	var_253_int = var_244_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1008(var_131_bool, var_132_object)
{
	var_133_string = ""; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_string = ""; var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = "";
	var_144_int = 0;
	func_1159(var_144_int);
	var_150_int = "d" + var_144_int;
	var_138_string = var_150_int + "m";
	var_139_int = 0;
	
Label_1017:
	if((int)1 != 0) {
		var_154_int = var_139_int + (int)1;
		var_155_int = var_138_string + var_154_int;
		@@var_132_object:HasProperty(var_155_int, var_140_bool);
		var_156_bool = var_140_bool == 0; //@nz
		if(var_156_bool != 0) {
		} else {
			var_139_int = var_139_int + (int)1;
			goto Label_1017;
		}
	}
	var_157_bool = var_139_int == 0; //@nz
	if(var_157_bool != 0) {
		var_131_bool = 0;
		return 10;
	}
	var_141_int = 0;
	var_159_bool = var_139_int > (int)1;
	if(var_159_bool != 0) {
		irand(var_141_int, var_139_int);
	}
	var_161_int = var_141_int + (int)1;
	var_162_int = var_138_string + var_161_int;
	@@var_132_object:GetProperty(var_162_int, var_142_string);
	var_163_bool = 0; var_164_string = "";
	var_142_string = var_164_string;
	func_1082(var_163_bool, var_164_string);
	var_163_bool = var_131_bool;
	return 10;
	
}


func_1396(var_77_int)
{
	var_77_int = 515552;
	return 0;
}


func_1398(var_76_int)
{
	var_76_int = 502877;
	return 0;
}


func_1142(var_63_bool, var_64_string, var_65_string)
{
	var_66_object = Obj(); var_67_object = Obj();
	FindActor(var_67_object, var_64_string);
	var_68_bool = var_67_object == 0; //@ne
	if(var_68_bool != 0) {
		var_63_bool = 0;
		return 2;
	}
	Trigger(var_67_object, var_65_string);
	var_63_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1400(var_78_string)
{
	var_78_string = "ui/NPC_Spi4ka.png";
	return 0;
}


func_1402(var_79_string)
{
	var_79_string = "ui/NPC_Spi4ka_b.png";
	return 0;
}


func_1271(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj();
	GetDiaryRoot(var_56_object);
	var_57_bool = var_56_object == 0; //@nz
	if(var_57_bool != 0) {
		Trace("Can't retrieve diary root");
		var_54_object = 0;
		return 2;
	}
	var_56_object = var_54_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1404(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_895()
{
	var_235_bool = 0; var_236_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_238_bool = 0;
	func_1404(var_238_bool);
	if(var_238_bool != 0) {
	} else {
		HasAnimationTrack(var_236_bool, "head");
		var_240_bool = var_236_bool;
		if(var_240_bool == 0) goto Label_912;
		UnlookAsync("head");
	}
Label_912:
	return 2;
	
}


