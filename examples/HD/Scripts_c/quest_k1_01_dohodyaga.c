// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ook1Dohodyaga1|W:ook1Dohodyaga2|W:k1q01ooStationGotoLaska|W:k1q01StationGotoLaska|W:pt_map_laska|A:AddMark|A:ShowMap|W:k1q01DobermanDead|W:k1q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x299
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf2 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x2a3 vars=object
// @EVENT_7: op=0x2d8 vars=int
// @PE: 0x4a,0xdc,0xf2,0x2a3,0x2ae,0x2d8,0x2ef,0x414,0x41a,0x43e,0x459,0x465,0x471,0x47d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_993();
		var_15_bool = var_11_object == (int)28060;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1056();
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_1086(var_66_object);
		}
		var_98_bool = var_11_object == (int)28061;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_1056();
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_1086(var_102_object);
		}
		var_104_bool = var_11_object == (int)28062;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_1056();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_1086(var_108_object);
		}
		var_110_bool = var_11_object == (int)26008;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_1056();
		}
		var_114_bool = var_10_bool == (int)26011;
		if(var_114_bool != 0) {
			var_115_bool = 0;
			var_115_bool = 0;
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_1113(var_117_object);
			if(var_116_bool != 0) {
				var_122_bool = 0; var_123_object = Obj();
				var_123_object = var_1_object;
				func_1125(var_123_object);
				if(var_122_bool != 0) {
					var_115_bool = 1;
				}
			}
			if(var_115_bool != 0) {
				var_128_object = Obj(); var_129_object = Obj();
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_1044();
				var_132_string = "";
				func_220(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)524672);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526770, (int)28048, (int)28047);
				@@@var_0_object:AddReply((int)526776, (int)28048, (int)28053);
				return 0;
			}
			var_156_bool = 0;
			var_156_bool = 0;
			var_157_bool = 0;
			var_157_bool = 0;
			var_158_bool = 0; var_159_object = Obj();
			var_159_object = var_1_object;
			func_1137(var_159_object);
			if(var_158_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_1149(var_165_object);
				if(var_164_bool != 0) {
					var_157_bool = 1;
				}
			}
			if(var_157_bool != 0) {
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_1125(var_171_object);
				var_172_bool = var_170_bool == 0; //@nz
				if(var_172_bool != 0) {
					var_156_bool = 1;
				}
			}
			if(var_156_bool != 0) {
				var_173_object = Obj(); var_174_object = Obj();
				var_173_object = var_1_object;
				var_174_object = var_0_object;
				func_1050();
				var_177_string = "";
				func_220(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)524668);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526760, (int)28045, (int)28037);
				@@@var_0_object:AddReply((int)541744, (int)28042, (int)43941);
				return 0;
			}
			var_185_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)524670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524671, (int)-1, (int)26010);
			@@@var_0_object:AddReply((int)541781, (int)-1, (int)43987);
			return 0;
		}
		var_194_bool = var_10_bool == (int)28045;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526768);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526769, (int)28038, (int)28046);
			return 0;
		}
		var_201_bool = var_10_bool == (int)28038;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526762, (int)28040, (int)28039);
			@@@var_0_object:AddReply((int)541750, (int)28042, (int)43949);
			return 0;
		}
		var_211_bool = var_10_bool == (int)28040;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526763);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526764, (int)28042, (int)28041);
			return 0;
		}
		var_218_bool = var_10_bool == (int)28042;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526765);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541745, (int)43944, (int)43943);
			@@@var_0_object:AddReply((int)541748, (int)43948, (int)43947);
			return 0;
		}
		var_228_bool = var_10_bool == (int)43948;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)541749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526766, (int)28044, (int)28043);
			return 0;
		}
		var_235_bool = var_10_bool == (int)28044;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524669, (int)-1, (int)26008);
			return 0;
		}
		var_242_bool = var_10_bool == (int)43944;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)541746);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541747, (int)28044, (int)43945);
			return 0;
		}
		var_249_bool = var_10_bool == (int)28048;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526771);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526772, (int)28050, (int)28049);
			@@@var_0_object:AddReply((int)526777, (int)28052, (int)28055);
			return 0;
		}
		var_259_bool = var_10_bool == (int)28050;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526774, (int)28052, (int)28051);
			@@@var_0_object:AddReply((int)526778, (int)28052, (int)28056);
			return 0;
		}
		var_269_bool = var_10_bool == (int)28052;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524673, (int)26013, (int)26012);
			return 0;
		}
		var_276_bool = var_10_bool == (int)26013;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)524674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524675, (int)28059, (int)26014);
			@@@var_0_object:AddReply((int)526782, (int)-1, (int)28062);
			return 0;
		}
		var_286_bool = var_10_bool == (int)28059;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_220(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526779);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526780, (int)-1, (int)28060);
			@@@var_0_object:AddReply((int)526781, (int)-1, (int)28061);
			return 0;
		}
		var_3_string = true;
		var_295_bool = 0;
		func_1290(var_295_bool);
		if(var_295_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf3";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_751(var_9_object, var_10_object);
	var_14_int = 0; var_15_object = Obj();
	var_10_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_713(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_982(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_750;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_750:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_665:
	Sleep((int)3);
	var_11_float = 0; var_12_float = 0;
	func_686(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	goto Label_665;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_864(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_1284(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_1282(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_1286(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_1288(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_1265(var_77_int);
	@@var_21_object:SetPlayerName(var_77_int);
	IsOverrideActive(var_22_bool);
	var_85_bool = var_22_bool;
	if(var_85_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_86_object = Obj(); var_87_object = Obj();
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_56:
	var_191_bool = var_24_bool == 0; //@nz
	if(var_191_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_933();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1282(var_74_int)
{
	var_74_int = 515563;
	return 0;
}


func_1027(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_1029:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_1020(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_1029;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_1284(var_73_int)
{
	var_73_int = 503348;
	return 0;
}


func_1286(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_1288(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_1161()
{
	var_42_object = Obj(); var_43_object = Obj();
	CreateDiaryEntry(var_43_object, (int)775, (int)1, (int)541529);
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0;
	var_43_object = var_48_object;
	func_1187(var_47_bool, var_48_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1290(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_1044()
{
	SetVariable("ook1Dohodyaga1", (int)1);
	return 0;
}


func_1149(var_162_bool)
{
	var_164_int = 0; var_165_string = "";
	func_1010(var_164_int, "ook1Dohodyaga2");
	var_167_bool = var_164_int == (int)0;
	if(var_167_bool != 0) {
		var_162_bool = 1;
		return 0;
	}
	var_162_bool = 0;
	return 0;
}


func_1174(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj();
	GetDiaryRoot(var_58_object);
	var_59_bool = var_58_object == 0; //@nz
	if(var_59_bool != 0) {
		Trace("Can't retrieve diary root");
		var_56_object = 0;
		return 2;
	}
	var_58_object = var_56_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1050()
{
	SetVariable("ook1Dohodyaga2", (int)1);
	return 0;
}


func_1056()
{
	var_18_object = Obj(); var_19_object = Obj();
	var_20_int = 0; var_21_string = "";
	func_1010(var_20_int, "k1q01ooStationGotoLaska");
	var_25_bool = var_20_int == (int)0;
	if(var_25_bool != 0) {
		SetVariable("k1q01ooStationGotoLaska", (int)1);
		func_1215(Obj());
		var_28_object = var_19_object;
		var_39_float = 0;
		func_1015(var_39_float);
		@@var_19_object:AddMark("k1q01StationGotoLaska", "pt_map_laska", (int)1, (int)524730, var_39_float);
		func_1161();
		var_19_object = 0;
	}
	return 2;
}


func_1187(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0;
	func_1174(Obj());
	var_56_object = var_53_object;
	@@var_53_object:Find(var_49_int, var_54_object);
	var_61_bool = var_54_object == 0; //@nz
	if(var_61_bool != 0) {
		var_63_int = "Can't find diary parent with id: " + var_49_int;
		Trace(var_63_int);
		var_47_bool = 0;
		return 6;
	}
	@@var_54_object:AddChild(var_48_object);
	SendWorldWndMessage((int)7);
	@@var_48_object:GetCategory(var_55_int);
	SetDiarySection(var_55_int);
	var_47_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_933()
{
	var_193_bool = 0; var_194_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_196_bool = 0;
	func_1290(var_196_bool);
	if(var_196_bool != 0) {
	} else {
		HasAnimationTrack(var_194_bool, "head");
		var_198_bool = var_194_bool;
		if(var_198_bool == 0) goto Label_950;
		UnlookAsync("head");
	}
Label_950:
	return 2;
	
}


func_686(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_859(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	SetTimer((int)10, (float)1.0);
	func_765();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_951(var_138_string)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0;
	lshHasAnimation(var_142_bool, var_138_string);
	var_145_bool = var_142_bool;
	if(var_145_bool != 0) {
		lshGetAnimTimes(var_138_string, var_143_float, var_144_float);
		lshPlayAnimation(var_143_float, var_144_float, (bool)0);
	} else {
		var_148_int = "Can't find lsh animation : " + var_138_string;
		Trace(var_148_int);
	}
	return 6;
	
}


func_1086(var_66_object)
{
	var_67_int = 0; var_68_string = "";
	func_1010(var_67_int, "k1q01ooStationGotoLaska");
	var_70_bool = var_67_int == (int)0;
	if(var_70_bool != 0) {
		SetVariable("k1q01ooStationGotoLaska", (int)1);
		var_73_object = Obj(); var_74_string = ""; var_75_float = 0;
		func_1215(Obj());
		var_76_object = var_73_object;
		func_1232(var_73_object, "pt_map_laska", (float)2);
		var_96_object = Obj();
		func_1215(var_96_object);
		@@var_66_object:ShowMap(var_96_object);
	}
	return 0;
}


func_1215(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	GetMainOutdoorScene(var_31_object);
	var_33_bool = var_31_object == 0; //@ne
	if(var_33_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_32_object = 0;
		var_32_object = var_28_object;
		return 4;
	}
	@@var_31_object:GetMap(var_32_object);
	var_32_object = var_28_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_967(var_116_string, var_117_bool)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0;
	lshHasAnimation(var_123_bool, var_116_string);
	var_126_bool = var_123_bool;
	if(var_126_bool != 0) {
		lshGetAnimTimes(var_116_string, var_124_float, var_125_float);
		lshPlayAnimation(var_124_float, var_125_float, var_117_bool);
	} else {
		var_128_int = "Can't find lsh animation : " + var_116_string;
		Trace(var_128_int);
	}
	return 6;
	
}


func_713(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_851(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0;
		var_93_bool = 0;
		var_94_bool = 0; var_95_object = Obj();
		var_95_object = var_1_object;
		func_1113(var_95_object);
		if(var_94_bool != 0) {
			var_102_bool = 0; var_103_object = Obj();
			var_103_object = var_1_object;
			func_1125(var_103_object);
			if(var_102_bool != 0) {
				var_93_bool = 1;
			}
		}
		if(var_93_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_1044();
			var_112_string = "";
			func_220(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)524672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526770, (int)28048, (int)28047);
			@@@var_0_object:AddReply((int)526776, (int)28048, (int)28053);
		} else {
				var_154_bool = 0;
				var_154_bool = 0;
				var_155_bool = 0;
				var_155_bool = 0;
				var_156_bool = 0; var_157_object = Obj();
				var_157_object = var_1_object;
				func_1137(var_157_object);
				if(var_156_bool != 0) {
					var_162_bool = 0; var_163_object = Obj();
					var_163_object = var_1_object;
					func_1149(var_163_object);
					if(var_162_bool != 0) {
						var_155_bool = 1;
					}
				}
				if(var_155_bool != 0) {
					var_168_bool = 0; var_169_object = Obj();
					var_169_object = var_1_object;
					func_1125(var_169_object);
					var_170_bool = var_168_bool == 0; //@nz
					if(var_170_bool != 0) {
						var_154_bool = 1;
					}
				}
				if(var_154_bool != 0) {
					var_171_object = Obj(); var_172_object = Obj();
					var_171_object = var_1_object;
					var_172_object = var_0_object;
					func_1050();
					var_175_string = "";
					func_220(var_87_object, "Neutral");
					@@@var_0_object:SetMessage((int)524668);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)526760, (int)28045, (int)28037);
					@@@var_0_object:AddReply((int)541744, (int)28042, (int)43941);
					goto Label_190;
				}
				var_183_string = "";
				func_220(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)524670);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524671, (int)-1, (int)26010);
				@@@var_0_object:AddReply((int)541781, (int)-1, (int)43987);
				goto Label_190;
		}
	}
Label_190:
	var_136_bool = 0;
	func_1290(var_136_bool);
	if(var_136_bool != 0) {

	Label_194:
		lshWaitForAnimEnd();
		var_137_string = var_3_string;
		if(var_137_string != 0) {
		} else {
			var_138_string = "";
			var_138_string = var_2_object;
			func_951(var_138_string);
			goto Label_194;
	}
		PlayAnimation("all", "idle");

	Label_209:
		WaitForAnimEnd();
		var_151_string = var_3_string;
		if(var_151_string != 0) {
			goto Label_219;
		}
		PlayAnimation("all", "idle");
		goto Label_209;

	}
	goto Label_219;
	
Label_219:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_844(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_846()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1232(var_73_object, var_74_string, var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0;
	GetMainOutdoorScene(var_83_object);
	var_85_bool = var_83_object == 0; //@ne
	if(var_85_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_83_object:GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector);
	var_87_bool = var_84_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_89_int = "Warning: outdoor scene locator " + var_74_string;
		var_91_int = var_89_int + " doesnt exist";
		Trace(var_91_int);
	}
	@@var_83_object:GetMap(var_73_object);
	var_92_bool = var_73_object == 0; //@ne
	if(var_92_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_94_float = GetByIndex(var_81_cvector, 0);
	var_95_float = GetByIndex(var_81_cvector, 2);
	@@var_73_object:SetMapParams(var_94_float, var_95_float, var_75_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_851(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_982(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0);
	@@var_27_object:GetEyesHeight(var_30_float);
	var_31_cvector = CVector(0.0, 0.0, 0.0);
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	LookAsync(var_27_object, "head", var_31_cvector);
	return 4;
}


func_1113(var_94_bool)
{
	var_96_int = 0; var_97_string = "";
	func_1010(var_96_int, "ook1Dohodyaga1");
	var_101_bool = var_96_int == (int)0;
	if(var_101_bool != 0) {
		var_94_bool = 1;
		return 0;
	}
	var_94_bool = 0;
	return 0;
}


func_859(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_220(var_2_object, var_112_string)
{
	var_113_bool = 0;
	func_1290(var_113_bool);
	var_114_bool = var_113_bool == 0; //@nz
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_bool = var_112_string == var_2_object;
	if(var_115_bool != 0) {
		return 0;
	}
	var_116_string = ""; var_117_bool = 0;
	var_112_string = var_116_string;
	var_119_bool = var_112_string == "";
	if(var_119_bool != 0) {
		var_117_bool = 0;
	} else {
		var_117_bool = 1;
	}
	func_967(var_116_string, var_117_bool);
	var_2_object = var_112_string;
	return 0;
	
}


func_864(var_25_bool, var_26_object, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0;
	@@var_26_object:GetPosition(var_38_cvector);
	@@var_26_object:GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_37_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	GetPosition(var_39_cvector);
	GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	var_47_float = var_47_float + var_37_float;
	SetByIndex(var_39_cvector, 1) = var_47_float;
	var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_int = var_40_cvector | var_40_cvector;
	var_50_float = sqrt(var_49_int);
	var_40_cvector = var_40_cvector / var_50_float;
	var_41_cvector = -var_40_cvector;
	var_51_float = var_40_cvector * var_27_float;
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_41_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1000(var_52_cvector, var_53_cvector);
	var_61_float = var_52_cvector * (int)25;
	var_62_int = var_51_float + var_61_float;
	var_42_cvector = var_62_int - CVector(0.0, 10.0, 0.0);
	var_43_cvector = var_39_cvector + var_42_cvector;
	IsOverrideActive(var_44_bool);
	var_64_bool = var_44_bool;
	if(var_64_bool != 0) {
		var_25_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_43_cvector, var_41_cvector, (bool)1);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	Rotate(var_66_float, var_67_float);
	var_68_bool = 0;
	func_1290(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_927;
		LookAsyncCamera("head");
	}
Label_927:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_993()
{
	var_13_bool = 0;
	func_1290(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1125(var_102_bool)
{
	var_104_int = 0; var_105_string = "";
	func_1010(var_104_int, "k1q01DobermanDead");
	var_107_bool = var_104_int != (int)0;
	if(var_107_bool != 0) {
		var_102_bool = 1;
		return 0;
	}
	var_102_bool = 0;
	return 0;
}


func_1000(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_53_cvector | var_53_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_56_float;
	return 2;
}


func_751(var_2_object, var_3_string)
{
	func_846();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1265(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x500";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_1137(var_156_bool)
{
	var_158_int = 0; var_159_string = "";
	func_1010(var_158_int, "k1q01");
	var_161_bool = var_158_int == (int)4;
	if(var_161_bool != 0) {
		var_156_bool = 1;
		return 0;
	}
	var_156_bool = 0;
	return 0;
}


func_1010(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0;
	GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
	return 2;
}


func_1015(var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	GetGameTime(var_41_float);
	var_41_float = var_39_float;
	return 2;
}


func_1020(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_765()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_859(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_1027((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_779:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_859(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_812;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_1020(var_58_string, var_59_int);
			PlayAnimation("all", var_58_string);
			WaitForAnimEnd(var_31_bool);
			var_60_bool = var_31_bool == 0; //@nz
			if(var_60_bool != 0) {
			} else {
		} else {
				var_65_bool = var_29_int == (int)1;
				if(var_65_bool != 0) {
					rand(var_32_float, (int)4);
					var_68_int = var_32_float + (int)1;
					Sleep(var_68_int, var_33_bool);
					var_69_bool = var_33_bool == 0; //@nz
					if(var_69_bool != 0) {
						goto Label_841;
					}
					goto Label_830;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_830;
				goto Label_841;
		}
		Label_830:
			var_61_bool = 0;
			func_844(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_841;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_779;

		}
	}
Label_841:
	ResetAAS();
	return 14;
	
}


