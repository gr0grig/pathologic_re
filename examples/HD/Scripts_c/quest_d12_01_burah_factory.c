// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,CreateIntVector/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Smile|W:Doubt|W:Sorrow|W:Agression|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ood12BurahFactory1|W:d12q01BurahInSobor|W:d12q01_Burah|W:d12q01BurahVisit|W:ood12BurahFactory2|W:b12q01ChildsAreVisited|W:game_final|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|A:add|W:vol_|A:size|A:get|W:ui/NPC_Burah.png|W:ui/NPC_Burah_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x2e5
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xff vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x2e9 vars=object
// @EVENT_26: op=0x2f5 vars=string
// @EVENT_6: op=0x311 vars=
// @PE: 0x51,0xe9,0xff,0x2e5,0x2e9,0x457,0x45d,0x466,0x476,0x47c,0x482,0x48c,0x498,0x4a4,0x4b0,0x4bc,0x4c8,0x522

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_1074();
		var_11_bool = var_7_bool == (int)37261;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1126();
		}
		var_46_bool = var_7_bool == (int)37264;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_1117();
		}
		var_60_bool = var_7_bool == (int)37320;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_1117();
		}
		var_64_bool = var_7_bool == (int)42338;
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_1148();
		}
		var_70_bool = var_6_int == (int)37250;
		if(var_70_bool != 0) {
			var_71_bool = 0;
			var_71_bool = 0;
			var_72_bool = 0; var_73_object = Obj();
			var_73_object = var_1_object;
			func_1200(var_73_object);
			if(var_72_bool != 0) {
				var_78_bool = 0; var_79_object = Obj();
				var_79_object = var_1_object;
				func_1176(var_79_object);
				var_84_bool = var_78_bool == 0; //@nz
				if(var_84_bool != 0) {
					var_71_bool = 1;
				}
			}
			if(var_71_bool != 0) {
				var_85_object = Obj(); var_86_object = Obj();
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_1111();
				var_89_object = Obj(); var_90_object = Obj();
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_1142();
				var_93_string = "";
				func_233(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)535567);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535568, (int)37252, (int)37251);
				@@@var_0_object:AddReply((int)535587, (int)42035, (int)37272);
				return 0;
			}
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_1142();
			var_119_string = "";
			func_233(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535630);
			@@@var_0_object:ClearReplies();
			var_121_bool = 0;
			var_121_bool = 0;
			var_122_bool = 0;
			var_122_bool = 0;
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_1188(var_124_object);
			var_129_bool = var_123_bool == 0; //@nz
			if(var_129_bool != 0) {
				var_130_bool = 0; var_131_object = Obj();
				var_131_object = var_1_object;
				func_1154(var_130_bool, var_131_object);
				if(var_130_bool != 0) {
					var_122_bool = 1;
				}
			}
			if(var_122_bool != 0) {
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_object;
				func_1176(var_180_object);
				var_181_bool = var_179_bool == 0; //@nz
				if(var_181_bool != 0) {
					var_121_bool = 1;
				}
			}
			if(var_121_bool != 0) {
				@@@var_0_object:AddReply((int)535631, (int)37319, (int)37317);
			}
			var_185_bool = 0;
			var_185_bool = 0;
			var_186_bool = 0; var_187_object = Obj();
			var_187_object = var_1_object;
			func_1164(var_187_object);
			if(var_186_bool != 0) {
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_1212(var_193_object);
				if(var_192_bool != 0) {
					var_185_bool = 1;
				}
			}
			if(var_185_bool != 0) {
				@@@var_0_object:AddReply((int)540355, (int)42339, (int)42338);
			}
			@@@var_0_object:AddReply((int)535632, (int)-1, (int)37318);
			return 0;
		}
		var_205_bool = var_6_int == (int)42339;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_233(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540357, (int)42341, (int)42340);
			return 0;
		}
		var_212_bool = var_6_int == (int)42341;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_233(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540358);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540359, (int)42343, (int)42342);
			return 0;
		}
		var_219_bool = var_6_int == (int)42343;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_233(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540361, (int)42345, (int)42344);
			return 0;
		}
		var_226_bool = var_6_int == (int)42345;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_233(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540363, (int)42347, (int)42346);
			@@@var_0_object:AddReply((int)540366, (int)-1, (int)42349);
			return 0;
		}
		var_236_bool = var_6_int == (int)42347;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_233(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540364);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540365, (int)-1, (int)42348);
			@@@var_0_object:AddReply((int)540367, (int)-1, (int)42350);
			return 0;
		}
		var_246_bool = var_6_int == (int)37319;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_233(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535633);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535634, (int)-1, (int)37320);
			return 0;
		}
		var_253_bool = var_6_int == (int)37252;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_233(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)535569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535570, (int)42035, (int)37253);
			@@@var_0_object:AddReply((int)540085, (int)42050, (int)42049);
			return 0;
		}
		var_263_bool = var_6_int == (int)42050;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_233(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540087, (int)42035, (int)42051);
			@@@var_0_object:AddReply((int)540090, (int)42055, (int)42056);
			return 0;
		}
		var_273_bool = var_6_int == (int)42035;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_233(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)540072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540073, (int)42037, (int)42036);
			@@@var_0_object:AddReply((int)540084, (int)42039, (int)42047);
			return 0;
		}
		var_283_bool = var_6_int == (int)42037;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_233(var_7_bool, "Doubt");
			@@@var_0_object:SetMessage((int)540074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540088, (int)42055, (int)42054);
			return 0;
		}
		var_290_bool = var_6_int == (int)42055;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_233(var_7_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)540089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540075, (int)42039, (int)42038);
			@@@var_0_object:AddReply((int)541860, (int)37260, (int)44086);
			return 0;
		}
		var_300_bool = var_6_int == (int)42039;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_233(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540077, (int)37260, (int)42040);
			return 0;
		}
		var_307_bool = var_6_int == (int)37260;
		if(var_307_bool != 0) {
			var_308_bool = 0; var_309_object = Obj();
			var_309_object = var_1_object;
			func_1154(var_308_bool, var_309_object);
			var_310_bool = var_308_bool == 0; //@nz
			if(var_310_bool != 0) {
				var_311_string = "";
				func_233(var_7_bool, "Agression");
				@@@var_0_object:SetMessage((int)535577);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540353, (int)42337, (int)42336);
				@@@var_0_object:AddReply((int)535579, (int)-1, (int)37262);
				return 0;
			}
			var_319_bool = 0; var_320_object = Obj();
			var_320_object = var_1_object;
			func_1154(var_319_bool, var_320_object);
			if(var_319_bool != 0) {
				var_321_string = "";
				func_233(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)535580);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535581, (int)-1, (int)37264);
				@@@var_0_object:AddReply((int)535582, (int)-1, (int)37265);
				return 0;
			}
		}
		var_330_bool = var_6_int == (int)42337;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_233(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535578, (int)-1, (int)37261);
			return 0;
		}
		var_3_string = true;
		var_336_bool = 0;
		func_1413(var_336_bool);
		if(var_336_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x100";
	
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
			func_801(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_1081(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_784;
		var_0_object = false;
	}
Label_784:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_801(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_1081(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_753();
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_803(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1407(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1405(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1409(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1411(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1297(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_1081(Obj());
	var_81_object = var_80_object;
	func_890(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_334_bool = var_17_bool == 0; //@nz
	if(var_334_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_872();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1409(var_68_string)
{
	var_68_string = "ui/NPC_Burah.png";
	return 0;
}


func_1154(var_260_bool, var_261_object)
{
	var_262_bool = 0; var_263_object = Obj();
	var_261_object = var_263_object;
	func_1224(var_263_object);
	if(var_262_bool != 0) {
		var_260_bool = 1;
		return 0;
	}
	var_260_bool = 0;
	return 0;
}


func_1411(var_69_string)
{
	var_69_string = "ui/NPC_Burah_b.png";
	return 0;
}


func_1028(var_231_string)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0;
	lshHasAnimation(var_235_bool, var_231_string);
	var_238_bool = var_235_bool;
	if(var_238_bool != 0) {
		lshGetAnimTimes(var_231_string, var_236_float, var_237_float);
		lshPlayAnimation(var_236_float, var_237_float, (bool)0);
	} else {
		var_241_int = "Can't find lsh animation : " + var_231_string;
		Trace(var_241_int);
	}
	return 6;
	
}


func_1413(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_1164(var_316_bool)
{
	var_318_int = 0; var_319_string = "";
	func_1097(var_318_int, "b12q01ChildsAreVisited");
	var_321_bool = var_318_int != (int)0;
	if(var_321_bool != 0) {
		var_316_bool = 1;
		return 0;
	}
	var_316_bool = 0;
	return 0;
}


func_1297(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x520";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_1044(var_209_string, var_210_bool)
{
	var_213_bool = 0; var_214_float = 0; var_215_float = 0; var_216_bool = 0; var_217_float = 0; var_218_float = 0;
	lshHasAnimation(var_216_bool, var_209_string);
	var_219_bool = var_216_bool;
	if(var_219_bool != 0) {
		lshGetAnimTimes(var_209_string, var_217_float, var_218_float);
		lshPlayAnimation(var_217_float, var_218_float, var_210_bool);
	} else {
		var_221_int = "Can't find lsh animation : " + var_209_string;
		Trace(var_221_int);
	}
	return 6;
	
}


func_1176(var_190_bool)
{
	var_192_int = 0; var_193_string = "";
	func_1097(var_192_int, "game_final");
	var_195_bool = var_192_int != (int)0;
	if(var_195_bool != 0) {
		var_190_bool = 1;
		return 0;
	}
	var_190_bool = 0;
	return 0;
}


func_801(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_1314(var_273_object, var_274_bool, var_275_int)
{
	@@var_273_object:add((int)18);
	@@var_273_object:add((int)24);
	@@var_273_object:add((int)20);
	@@var_273_object:add((int)14);
	var_281_bool = var_274_bool == (bool)0;
	if(var_281_bool != 0) {
		@@var_273_object:add((int)10);
		@@var_273_object:add((int)17);
		@@var_273_object:add((int)8);
	} else {
		var_286_bool = var_275_int != (int)1;
		if(var_286_bool == 0) goto Label_1346;
		@@var_273_object:add((int)10);
	}
Label_1346:
	return 0;
	
}


func_803(var_18_bool, var_19_object, var_20_float)
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
	func_1087(var_45_cvector, var_46_cvector);
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
	func_1413(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_866;
		LookAsyncCamera("head");
	}
Label_866:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_1188(var_253_bool)
{
	var_255_int = 0; var_256_string = "";
	func_1097(var_255_int, "d12q01BurahInSobor");
	var_258_bool = var_255_int != (int)0;
	if(var_258_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_1059(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1413(var_117_bool);
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


func_1200(var_182_bool)
{
	var_184_int = 0; var_185_string = "";
	func_1097(var_184_int, "ood12BurahFactory1");
	var_189_bool = var_184_int == (int)0;
	if(var_189_bool != 0) {
		var_182_bool = 1;
		return 0;
	}
	var_182_bool = 0;
	return 0;
}


func_1074()
{
	var_9_bool = 0;
	func_1413(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_948(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_951:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_951;
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
	func_1059(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_1081(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1212(var_322_bool)
{
	var_324_int = 0; var_325_string = "";
	func_1097(var_324_int, "ood12BurahFactory2");
	var_327_bool = var_324_int == (int)0;
	if(var_327_bool != 0) {
		var_322_bool = 1;
		return 0;
	}
	var_322_bool = 0;
	return 0;
}


func_1087(var_45_cvector, var_46_cvector)
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


func_1347(var_299_bool, var_300_int)
{
	var_301_int = 0; var_302_int = 0;
	var_304_int = "vol_" + var_300_int;
	GetVariable(var_304_int, var_302_int);
	var_306_int = var_302_int & (int)4;
	var_299_bool = var_306_int != (int)0;
	return 2;
}


func_1224(var_262_bool)
{
	func_1367((bool)0);
	var_264_bool = var_262_bool;
	return 0;
}


func_1097(var_184_int, var_185_string)
{
	var_186_int = 0; var_187_int = 0;
	GetVariable(var_185_string, var_187_int);
	var_187_int = var_184_int;
	return 2;
}


func_1357(var_290_bool, var_291_int)
{
	var_292_int = 0; var_293_int = 0;
	var_295_int = "vol_" + var_291_int;
	GetVariable(var_295_int, var_293_int);
	var_297_int = var_293_int & (int)16;
	var_290_bool = var_297_int != (int)0;
	return 2;
}


func_1102(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1230()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)700, (int)1, (int)535683);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_1269(var_56_bool, var_57_object, (int)699);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0;
		var_181_bool = 0;
		var_182_bool = 0; var_183_object = Obj();
		var_183_object = var_1_object;
		func_1200(var_183_object);
		if(var_182_bool != 0) {
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_1176(var_191_object);
			var_196_bool = var_190_bool == 0; //@nz
			if(var_196_bool != 0) {
				var_181_bool = 1;
			}
		}
		if(var_181_bool != 0) {
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_1111();
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_1142();
			var_205_string = "";
			func_233(var_175_object, "Neutral");
			@@@var_0_object:SetMessage((int)535567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535568, (int)37252, (int)37251);
			@@@var_0_object:AddReply((int)535587, (int)42035, (int)37272);
		} else {
				var_247_object = Obj(); var_248_object = Obj();
				var_247_object = var_1_object;
				var_248_object = var_0_object;
				func_1142();
				var_249_string = "";
				func_233(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)535630);
				@@@var_0_object:ClearReplies();
				var_251_bool = 0;
				var_251_bool = 0;
				var_252_bool = 0;
				var_252_bool = 0;
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_1188(var_254_object);
				var_259_bool = var_253_bool == 0; //@nz
				if(var_259_bool != 0) {
					var_260_bool = 0; var_261_object = Obj();
					var_261_object = var_1_object;
					func_1154(var_260_bool, var_261_object);
					if(var_260_bool != 0) {
						var_252_bool = 1;
					}
				}
				if(var_252_bool != 0) {
					var_309_bool = 0; var_310_object = Obj();
					var_310_object = var_1_object;
					func_1176(var_310_object);
					var_311_bool = var_309_bool == 0; //@nz
					if(var_311_bool != 0) {
						var_251_bool = 1;
					}
				}
				if(var_251_bool != 0) {
					@@@var_0_object:AddReply((int)535631, (int)37319, (int)37317);
				}
				var_315_bool = 0;
				var_315_bool = 0;
				var_316_bool = 0; var_317_object = Obj();
				var_317_object = var_1_object;
				func_1164(var_317_object);
				if(var_316_bool != 0) {
					var_322_bool = 0; var_323_object = Obj();
					var_323_object = var_1_object;
					func_1212(var_323_object);
					if(var_322_bool != 0) {
						var_315_bool = 1;
					}
				}
				if(var_315_bool != 0) {
					@@@var_0_object:AddReply((int)540355, (int)42339, (int)42338);
				}
				@@@var_0_object:AddReply((int)535632, (int)-1, (int)37318);
				goto Label_203;
		}
	}
Label_203:
	var_229_bool = 0;
	func_1413(var_229_bool);
	if(var_229_bool != 0) {

	Label_207:
		lshWaitForAnimEnd();
		var_230_string = var_3_string;
		if(var_230_string != 0) {
		} else {
			var_231_string = "";
			var_231_string = var_2_object;
			func_1028(var_231_string);
			goto Label_207;
	}
		PlayAnimation("all", "idle");

	Label_222:
		WaitForAnimEnd();
		var_244_string = var_3_string;
		if(var_244_string != 0) {
			goto Label_232;
		}
		PlayAnimation("all", "idle");
		goto Label_222;

	}
	goto Label_232;
	
Label_232:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1111()
{
	SetVariable("ood12BurahFactory1", (int)1);
	return 0;
}


func_1367(var_264_bool)
{
	var_265_object = Obj(); var_266_int = 0; var_267_int = 0; var_268_int = 0; var_269_object = Obj(); var_270_int = 0; var_271_int = 0; var_272_int = 0;
	CreateIntVector(var_269_object);
	var_273_object = Obj(); var_274_bool = 0; var_275_int = 0;
	var_269_object = var_273_object;
	func_1314(var_273_object, (bool)0, (int)-1);
	@@var_269_object:size(var_270_int);
	var_271_int = 0;
	
Label_1379:
	var_288_bool = var_271_int < var_270_int;
	if(var_288_bool != 0) {
		@@var_269_object:get(var_272_int, var_271_int);
		var_289_bool = 0;
		var_289_bool = 1;
		var_290_bool = 0; var_291_int = 0;
		var_272_int = var_291_int;
		func_1357(var_290_bool, var_291_int);
		if(var_290_bool != 1) {
			var_299_bool = 0; var_300_int = 0;
			var_272_int = var_300_int;
			func_1347(var_299_bool, var_300_int);
			if(var_299_bool != 1) {
				var_289_bool = 0;
			}
		}
		if(var_289_bool != 0) {
			var_264_bool = 0;
			var_271_int = var_271_int + (int)1;
			goto Label_1379;
		}
		return 8;
	}
	var_264_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_985(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_1102(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_994:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_994;
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
	func_1059(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1243()
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateDiaryEntry(var_23_object, (int)706, (int)1, (int)535689);
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0;
	var_23_object = var_28_object;
	func_1269(var_27_bool, var_28_object, (int)699);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1117()
{
	SetVariable("d12q01BurahInSobor", (int)1);
	func_1230();
	return 0;
}


func_1126()
{
	var_14_int = 0; var_15_string = "";
	func_1097(var_14_int, "d12q01_Burah");
	var_19_bool = var_14_int == (int)0;
	if(var_19_bool != 0) {
		SetVariable("d12q01_Burah", (int)1);
		func_1243();
	}
	return 0;
}


func_872()
{
	var_336_bool = 0; var_337_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_339_bool = 0;
	func_1413(var_339_bool);
	if(var_339_bool != 0) {
	} else {
		HasAnimationTrack(var_337_bool, "head");
		var_341_bool = var_337_bool;
		if(var_341_bool == 0) goto Label_889;
		UnlookAsync("head");
	}
Label_889:
	return 2;
	
}


func_233(var_2_object, var_205_string)
{
	var_206_bool = 0;
	func_1413(var_206_bool);
	var_207_bool = var_206_bool == 0; //@nz
	if(var_207_bool != 0) {
		return 0;
	}
	var_208_bool = var_205_string == var_2_object;
	if(var_208_bool != 0) {
		return 0;
	}
	var_209_string = ""; var_210_bool = 0;
	var_205_string = var_209_string;
	var_212_bool = var_205_string == "";
	if(var_212_bool != 0) {
		var_210_bool = 0;
	} else {
		var_210_bool = 1;
	}
	func_1044(var_209_string, var_210_bool);
	var_2_object = var_205_string;
	return 0;
	
}


func_1256(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	GetDiaryRoot(var_38_object);
	var_39_bool = var_38_object == 0; //@nz
	if(var_39_bool != 0) {
		Trace("Can't retrieve diary root");
		var_36_object = 0;
		return 2;
	}
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_753()
{
	
Label_753:
	Hold();
	goto Label_753;
}
EMIT "Return(); Pop(0)";


func_1269(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0;
	func_1256(Obj());
	var_36_object = var_33_object;
	@@var_33_object:Find(var_29_int, var_34_object);
	var_41_bool = var_34_object == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Can't find diary parent with id: " + var_29_int;
		Trace(var_43_int);
		var_27_bool = 0;
		return 6;
	}
	@@var_34_object:AddChild(var_28_object);
	SendWorldWndMessage((int)7);
	@@var_28_object:GetCategory(var_35_int);
	SetDiarySection(var_35_int);
	var_27_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1142()
{
	SetVariable("d12q01BurahVisit", (int)1);
	return 0;
}


func_890(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_948(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_985(var_121_bool, var_122_object);
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
		func_985(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_948(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_946;
	
Label_946:
	var_79_bool = 1;
	return 4;
	
}


func_1148()
{
	SetVariable("ood12BurahFactory2", (int)1);
	return 0;
}


func_1405(var_67_int)
{
	var_67_int = 515592;
	return 0;
}


func_1407(var_66_int)
{
	var_66_int = 511961;
	return 0;
}


