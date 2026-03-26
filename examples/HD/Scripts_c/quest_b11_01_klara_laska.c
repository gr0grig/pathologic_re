// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Saveyouall|A:SetMessage|A:ClearReplies|A:AddReply|W:Smile|W:idle|W:Neutral|W:Sly|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png|W:oob11Klara1|W:b11q01KlaraWillHelp|W:oob11Klara2|W:oob11Klara3|W:b11q01|W:b9KlaraLetter|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x331
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x118 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x335 vars=string
// @EVENT_6: op=0x349 vars=
// @EVENT_5: op=0x356 vars=
// @EVENT_7: op=0x39f vars=int
// @EVENT_45: op=0x3e1 vars=bool
// @EVENT_0: op=0x3ed vars=object
// @PE: 0x51,0x102,0x118,0x329,0x331,0x356,0x39f,0x3c5,0x3e1,0x5cc,0x5d2,0x5d8,0x5de,0x5e4,0x5f0,0x5fc,0x608,0x614,0x620,0x62c

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1413();
		var_12_bool = var_8_bool == (int)24461;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1490();
		}
		var_18_bool = var_8_bool == (int)24478;
		if(var_18_bool != 0) {
			var_19_object = Obj(); var_20_object = Obj();
			var_19_object = var_1_object;
			var_20_object = var_0_object;
			func_1490();
		}
		var_22_bool = var_8_bool == (int)24467;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_object;
			var_24_object = var_0_object;
			func_1490();
		}
		var_26_bool = var_8_bool == (int)24468;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1490();
		}
		var_30_bool = var_8_bool == (int)23272;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_1496();
		}
		var_36_bool = var_8_bool == (int)36215;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_1502();
		}
		var_42_bool = var_7_cvector == (int)23268;
		if(var_42_bool != 0) {
			var_43_bool = 0;
			var_43_bool = 1;
			var_44_bool = 0;
			var_44_bool = 0;
			var_45_bool = 0; var_46_object = Obj();
			var_46_object = var_1_object;
			func_1508(var_46_object);
			if(var_45_bool != 0) {
				var_53_bool = 0; var_54_object = Obj();
				var_54_object = var_1_object;
				func_1532(var_54_object);
				if(var_53_bool != 0) {
					var_44_bool = 1;
				}
			}
			if(var_44_bool != 1) {
				var_59_bool = 0;
				var_59_bool = 0;
				var_60_bool = 0; var_61_object = Obj();
				var_61_object = var_1_object;
				func_1520(var_61_object);
				if(var_60_bool != 0) {
					var_66_bool = 0; var_67_object = Obj();
					var_67_object = var_1_object;
					func_1532(var_67_object);
					if(var_66_bool != 0) {
						var_59_bool = 1;
					}
				}
				if(var_59_bool != 1) {
					var_43_bool = 0;
				}
			}
			if(var_43_bool != 0) {
				var_68_object = Obj(); var_69_object = Obj();
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_1484();
				var_72_string = "";
				func_258(var_8_bool, "Saveyouall");
				@@@var_0_object:SetMessage((int)522101);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522102, (int)24452, (int)23269);
				@@@var_0_object:AddReply((int)522103, (int)24448, (int)23270);
				return 0;
			}
			var_96_string = "";
			func_258(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)522104);
			@@@var_0_object:ClearReplies();
			var_98_bool = 0;
			var_98_bool = 0;
			var_99_bool = 0;
			var_99_bool = 0;
			var_100_bool = 0; var_101_object = Obj();
			var_101_object = var_1_object;
			func_1508(var_101_object);
			if(var_100_bool != 0) {
				var_102_bool = 0; var_103_object = Obj();
				var_103_object = var_1_object;
				func_1520(var_103_object);
				if(var_102_bool != 0) {
					var_99_bool = 1;
				}
			}
			if(var_99_bool != 0) {
				var_104_bool = 0; var_105_object = Obj();
				var_105_object = var_1_object;
				func_1544(var_105_object);
				var_110_bool = var_104_bool == 0; //@nz
				if(var_110_bool != 0) {
					var_98_bool = 1;
				}
			}
			if(var_98_bool != 0) {
				@@@var_0_object:AddReply((int)523263, (int)24464, (int)24463);
			}
			var_114_bool = 0;
			var_114_bool = 0;
			var_115_bool = 0; var_116_object = Obj();
			var_116_object = var_1_object;
			func_1544(var_116_object);
			if(var_115_bool != 0) {
				var_117_bool = 0; var_118_object = Obj();
				var_118_object = var_1_object;
				func_1556(var_118_object);
				if(var_117_bool != 0) {
					var_114_bool = 1;
				}
			}
			if(var_114_bool != 0) {
				@@@var_0_object:AddReply((int)522105, (int)24443, (int)23272);
			}
			var_126_bool = 0;
			var_126_bool = 0;
			var_127_bool = 0; var_128_object = Obj();
			var_128_object = var_1_object;
			func_1568(var_128_object);
			if(var_127_bool != 0) {
				var_133_bool = 0; var_134_object = Obj();
				var_134_object = var_1_object;
				func_1580(var_134_object);
				if(var_133_bool != 0) {
					var_126_bool = 1;
				}
			}
			if(var_126_bool != 0) {
				@@@var_0_object:AddReply((int)534577, (int)36216, (int)36215);
			}
			@@@var_0_object:AddReply((int)523242, (int)-1, (int)24442);
			return 0;
		}
		var_146_bool = var_7_cvector == (int)36216;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_258(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534579, (int)36219, (int)36217);
			@@@var_0_object:AddReply((int)534580, (int)-1, (int)36218);
			return 0;
		}
		var_156_bool = var_7_cvector == (int)36219;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_258(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)534581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534582, (int)-1, (int)36220);
			@@@var_0_object:AddReply((int)534583, (int)-1, (int)36221);
			return 0;
		}
		var_166_bool = var_7_cvector == (int)24443;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_258(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)523243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523244, (int)-1, (int)24444);
			@@@var_0_object:AddReply((int)523245, (int)24446, (int)24445);
			return 0;
		}
		var_176_bool = var_7_cvector == (int)24446;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_258(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)523246);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523247, (int)-1, (int)24447);
			return 0;
		}
		var_183_bool = var_7_cvector == (int)24464;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_258(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523265, (int)24466, (int)24465);
			return 0;
		}
		var_190_bool = var_7_cvector == (int)24466;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_258(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)523266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523267, (int)-1, (int)24467);
			@@@var_0_object:AddReply((int)523268, (int)-1, (int)24468);
			return 0;
		}
		var_200_bool = var_7_cvector == (int)24448;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_258(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)523248);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523250, (int)24452, (int)24450);
			@@@var_0_object:AddReply((int)523249, (int)24452, (int)24449);
			return 0;
		}
		var_210_bool = var_7_cvector == (int)24452;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_258(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)523252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523253, (int)24451, (int)24453);
			return 0;
		}
		var_217_bool = var_7_cvector == (int)24451;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_258(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523254, (int)24456, (int)24454);
			@@@var_0_object:AddReply((int)523255, (int)24469, (int)24455);
			return 0;
		}
		var_227_bool = var_7_cvector == (int)24469;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_258(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)523269);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523270, (int)24456, (int)24470);
			return 0;
		}
		var_234_bool = var_7_cvector == (int)24456;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_258(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523256);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523257, (int)24458, (int)24457);
			@@@var_0_object:AddReply((int)523271, (int)24473, (int)24472);
			return 0;
		}
		var_244_bool = var_7_cvector == (int)24473;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_258(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)523272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523273, (int)24475, (int)24474);
			@@@var_0_object:AddReply((int)523275, (int)24475, (int)24476);
			return 0;
		}
		var_254_bool = var_7_cvector == (int)24475;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_258(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)523274);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523276, (int)-1, (int)24478);
			@@@var_0_object:AddReply((int)523277, (int)-1, (int)24479);
			return 0;
		}
		var_264_bool = var_7_cvector == (int)24458;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_258(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523259, (int)24460, (int)24459);
			return 0;
		}
		var_271_bool = var_7_cvector == (int)24460;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_258(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)523260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523261, (int)-1, (int)24461);
			@@@var_0_object:AddReply((int)523262, (int)-1, (int)24462);
			return 0;
		}
		var_3_string = true;
		var_280_bool = 0;
		func_1482(var_280_bool);
		if(var_280_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x119";
	
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
			func_1420(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_840;
		var_1_object = false;
	}
Label_840:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1420(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_965();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_980();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_923();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_1137(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_892(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_872(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1420(Obj());
				var_53_object = var_52_object;
				func_1287(var_51_bool, var_52_object);
			}
		} else {
			func_887(var_7_int);
			func_914();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_914();
	} else {
		var_14_string = "";
		func_1367("Neutral");
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
		func_1105();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_1128(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_809(var_25_object);
		var_329_string = "";
		func_1367("Neutral");
		func_923();
		func_914();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_858(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_1142(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1476(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1474(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1478(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1480(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1592(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1420(Obj());
	var_100_object = var_99_object;
	func_1229(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_320_bool = var_36_bool == 0; //@nz
	if(var_320_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_1211();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_258(var_2_object, var_229_string)
{
	var_230_bool = 0;
	func_1482(var_230_bool);
	var_231_bool = var_230_bool == 0; //@nz
	if(var_231_bool != 0) {
		return 0;
	}
	var_232_bool = var_229_string == var_2_object;
	if(var_232_bool != 0) {
		return 0;
	}
	var_233_string = ""; var_234_bool = 0;
	var_229_string = var_233_string;
	var_236_bool = var_229_string == "";
	if(var_236_bool != 0) {
		var_234_bool = 0;
	} else {
		var_234_bool = 1;
	}
	func_1383(var_233_string, var_234_bool);
	var_2_object = var_229_string;
	return 0;
	
}


func_1413()
{
	var_10_bool = 0;
	func_1482(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1287(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1290:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1290;
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
	func_1398(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1544(var_279_bool)
{
	var_281_int = 0; var_282_string = "";
	func_1436(var_281_int, "b11q01KlaraWillHelp");
	var_284_bool = var_281_int != (int)0;
	if(var_284_bool != 0) {
		var_279_bool = 1;
		return 0;
	}
	var_279_bool = 0;
	return 0;
}


func_1034()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_1137(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1457((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_1048:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_1137(var_41_bool);
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
				func_1450(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_1089;
				goto Label_1100;
		}
		Label_1089:
			var_45_bool = 0;
			func_1103(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1100;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_1048;

		}
	}
Label_1100:
	ResetAAS();
	return 12;
	
}


func_1420(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_914()
{
	var_331_float = 0; var_332_float = 0;
	rand(var_332_float, (int)8, (int)16);
	SetTimer((int)10, var_332_float);
	return 2;
}


func_1426(var_64_cvector, var_65_cvector)
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


func_1556(var_292_bool)
{
	var_294_int = 0; var_295_string = "";
	func_1436(var_294_int, "oob11Klara2");
	var_297_bool = var_294_int == (int)0;
	if(var_297_bool != 0) {
		var_292_bool = 1;
		return 0;
	}
	var_292_bool = 0;
	return 0;
}


func_923()
{
	KillTimer((int)10);
	return 0;
}


func_1436(var_204_int, var_205_string)
{
	var_206_int = 0; var_207_int = 0;
	GetVariable(var_205_string, var_207_int);
	var_207_int = var_204_int;
	return 2;
}


func_1532(var_210_bool)
{
	var_212_int = 0; var_213_string = "";
	func_1436(var_212_int, "oob11Klara1");
	var_215_bool = var_212_int == (int)0;
	if(var_215_bool != 0) {
		var_210_bool = 1;
		return 0;
	}
	var_210_bool = 0;
	return 0;
}


func_1568(var_302_bool)
{
	var_304_int = 0; var_305_string = "";
	func_1436(var_304_int, "b9KlaraLetter");
	var_307_bool = var_304_int != (int)0;
	if(var_307_bool != 0) {
		var_302_bool = 1;
		return 0;
	}
	var_302_bool = 0;
	return 0;
}


func_1441(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_809(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1450(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1580(var_308_bool)
{
	var_310_int = 0; var_311_string = "";
	func_1436(var_310_int, "oob11Klara3");
	var_313_bool = var_310_int == (int)0;
	if(var_313_bool != 0) {
		var_308_bool = 1;
		return 0;
	}
	var_308_bool = 0;
	return 0;
}


func_1324(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1441(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1333:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1333;
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
	func_1398(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1457(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1459:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1450(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1459;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1592(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x647";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1211()
{
	var_322_bool = 0; var_323_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_325_bool = 0;
	func_1482(var_325_bool);
	if(var_325_bool != 0) {
	} else {
		HasAnimationTrack(var_323_bool, "head");
		var_327_bool = var_323_bool;
		if(var_327_bool == 0) goto Label_1228;
		UnlookAsync("head");
	}
Label_1228:
	return 2;
	
}


func_1474(var_86_int)
{
	var_86_int = 515540;
	return 0;
}


func_1476(var_85_int)
{
	var_85_int = 502865;
	return 0;
}


func_965()
{
	func_1105();
	func_923();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1478(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
	return 0;
}


func_1480(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1482(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1484()
{
	SetVariable("oob11Klara1", (int)1);
	return 0;
}


func_1229(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1287(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1324(var_140_bool, var_141_object);
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
		func_1324(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1287(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1285;
	
Label_1285:
	var_98_bool = 1;
	return 4;
	
}


func_1103(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0;
		var_200_bool = 1;
		var_201_bool = 0;
		var_201_bool = 0;
		var_202_bool = 0; var_203_object = Obj();
		var_203_object = var_1_object;
		func_1508(var_203_object);
		if(var_202_bool != 0) {
			var_210_bool = 0; var_211_object = Obj();
			var_211_object = var_1_object;
			func_1532(var_211_object);
			if(var_210_bool != 0) {
				var_201_bool = 1;
			}
		}
		if(var_201_bool != 1) {
			var_216_bool = 0;
			var_216_bool = 0;
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_1520(var_218_object);
			if(var_217_bool != 0) {
				var_223_bool = 0; var_224_object = Obj();
				var_224_object = var_1_object;
				func_1532(var_224_object);
				if(var_223_bool != 0) {
					var_216_bool = 1;
				}
			}
			if(var_216_bool != 1) {
				var_200_bool = 0;
			}
		}
		if(var_200_bool != 0) {
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_1484();
			var_229_string = "";
			func_258(var_194_object, "Saveyouall");
			@@@var_0_object:SetMessage((int)522101);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522102, (int)24452, (int)23269);
			@@@var_0_object:AddReply((int)522103, (int)24448, (int)23270);
		} else {
				var_271_string = "";
				func_258(var_194_object, "Smile");
				@@@var_0_object:SetMessage((int)522104);
				@@@var_0_object:ClearReplies();
				var_273_bool = 0;
				var_273_bool = 0;
				var_274_bool = 0;
				var_274_bool = 0;
				var_275_bool = 0; var_276_object = Obj();
				var_276_object = var_1_object;
				func_1508(var_276_object);
				if(var_275_bool != 0) {
					var_277_bool = 0; var_278_object = Obj();
					var_278_object = var_1_object;
					func_1520(var_278_object);
					if(var_277_bool != 0) {
						var_274_bool = 1;
					}
				}
				if(var_274_bool != 0) {
					var_279_bool = 0; var_280_object = Obj();
					var_280_object = var_1_object;
					func_1544(var_280_object);
					var_285_bool = var_279_bool == 0; //@nz
					if(var_285_bool != 0) {
						var_273_bool = 1;
					}
				}
				if(var_273_bool != 0) {
					@@@var_0_object:AddReply((int)523263, (int)24464, (int)24463);
				}
				var_289_bool = 0;
				var_289_bool = 0;
				var_290_bool = 0; var_291_object = Obj();
				var_291_object = var_1_object;
				func_1544(var_291_object);
				if(var_290_bool != 0) {
					var_292_bool = 0; var_293_object = Obj();
					var_293_object = var_1_object;
					func_1556(var_293_object);
					if(var_292_bool != 0) {
						var_289_bool = 1;
					}
				}
				if(var_289_bool != 0) {
					@@@var_0_object:AddReply((int)522105, (int)24443, (int)23272);
				}
				var_301_bool = 0;
				var_301_bool = 0;
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_1568(var_303_object);
				if(var_302_bool != 0) {
					var_308_bool = 0; var_309_object = Obj();
					var_309_object = var_1_object;
					func_1580(var_309_object);
					if(var_308_bool != 0) {
						var_301_bool = 1;
					}
				}
				if(var_301_bool != 0) {
					@@@var_0_object:AddReply((int)534577, (int)36216, (int)36215);
				}
				@@@var_0_object:AddReply((int)523242, (int)-1, (int)24442);
				goto Label_228;
		}
	}
Label_228:
	var_253_bool = 0;
	func_1482(var_253_bool);
	if(var_253_bool != 0) {

	Label_232:
		lshWaitForAnimEnd();
		var_254_string = var_3_string;
		if(var_254_string != 0) {
		} else {
			var_255_string = "";
			var_255_string = var_2_object;
			func_1367(var_255_string);
			goto Label_232;
	}
		PlayAnimation("all", "idle");

	Label_247:
		WaitForAnimEnd();
		var_268_string = var_3_string;
		if(var_268_string != 0) {
			goto Label_257;
		}
		PlayAnimation("all", "idle");
		goto Label_247;

	}
	goto Label_257;
	
Label_257:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1490()
{
	SetVariable("b11q01KlaraWillHelp", (int)1);
	return 0;
}


func_1105()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_980()
{
	StopGroup0();
	func_923();
	var_8_string = "";
	func_1367("Neutral");
	func_914();
	return 0;
}


func_1110(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1367(var_255_string)
{
	var_256_bool = 0; var_257_float = 0; var_258_float = 0; var_259_bool = 0; var_260_float = 0; var_261_float = 0;
	lshHasAnimation(var_259_bool, var_255_string);
	var_262_bool = var_259_bool;
	if(var_262_bool != 0) {
		lshGetAnimTimes(var_255_string, var_260_float, var_261_float);
		lshPlayAnimation(var_260_float, var_261_float, (bool)0);
	} else {
		var_265_int = "Can't find lsh animation : " + var_255_string;
		Trace(var_265_int);
	}
	return 6;
	
}


func_1496()
{
	SetVariable("oob11Klara2", (int)1);
	return 0;
}


func_858(var_0_object)
{
	var_7_bool = 0;
	func_1137(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_867:
	func_1034();
	goto Label_867;
}
EMIT "Return(); Pop(0)";


func_1502()
{
	SetVariable("oob11Klara3", (int)1);
	return 0;
}


func_1118(var_15_bool, var_16_cvector)
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


func_1508(var_202_bool)
{
	var_204_int = 0; var_205_string = "";
	func_1436(var_204_int, "b11q01");
	var_209_bool = var_204_int == (int)0;
	if(var_209_bool != 0) {
		var_202_bool = 1;
		return 0;
	}
	var_202_bool = 0;
	return 0;
}


func_1383(var_233_string, var_234_bool)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0;
	lshHasAnimation(var_240_bool, var_233_string);
	var_243_bool = var_240_bool;
	if(var_243_bool != 0) {
		lshGetAnimTimes(var_233_string, var_241_float, var_242_float);
		lshPlayAnimation(var_241_float, var_242_float, var_234_bool);
	} else {
		var_245_int = "Can't find lsh animation : " + var_233_string;
		Trace(var_245_int);
	}
	return 6;
	
}


func_1128(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_1118(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_872(var_32_bool)
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
	func_1128(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1520(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_1436(var_219_int, "b11q01");
	var_222_bool = var_219_int == (int)1;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_1137(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1142(var_37_bool, var_38_object, var_39_float)
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
	func_1426(var_64_cvector, var_65_cvector);
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
	func_1482(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1205;
		LookAsyncCamera("head");
	}
Label_1205:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_887(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1398(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1482(var_136_bool);
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


func_892(var_15_bool)
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
	func_1110(var_22_float, var_23_object);
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


