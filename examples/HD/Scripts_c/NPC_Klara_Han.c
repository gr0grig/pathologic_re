// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Doubt|W:Grin|W:Questioning|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Han.png|W:ui/NPC_Han_b.png|W:k9q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:mt_han
// @GLOBALS: 0:object:
// @RUN_OP: 0x448
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x222 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x320 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x41e vars=int,int
// @TASK_8: vars=cvector params=0
// @EVENT_7: op=0x491 vars=int
// @EVENT_6: op=0x4b7 vars=
// @EVENT_5: op=0x4c6 vars=
// @EVENT_45: op=0x4d3 vars=bool
// @EVENT_0: op=0x4df vars=object
// @PE: 0x51,0x95,0xab,0x1d2,0x20c,0x222,0x2cb,0x30a,0x320,0x3ce,0x408,0x41e,0x448,0x491,0x4b7,0x4d3,0x69c,0x6c4,0x6cd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1655();
		var_26_bool = var_22_cvector == (int)30413;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1732();
		}
		var_55_bool = var_21_bool == (int)27787;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_149(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526521);
			@@@var_0_object:ClearReplies();
			var_74_bool = 0; var_75_object = Obj();
			var_75_object = var_1_object;
			func_1741(var_75_object);
			if(var_74_bool != 0) {
				@@@var_0_object:AddReply((int)526522, (int)27789, (int)27788);
			}
			@@@var_0_object:AddReply((int)526525, (int)-1, (int)27791);
			@@@var_0_object:AddReply((int)541603, (int)-1, (int)43771);
			return 0;
		}
		var_92_bool = var_21_bool == (int)27789;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_149(var_22_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)526523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526524, (int)30396, (int)27790);
			@@@var_0_object:AddReply((int)528967, (int)30396, (int)30402);
			return 0;
		}
		var_102_bool = var_21_bool == (int)30396;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_149(var_22_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)528961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528962, (int)30398, (int)30397);
			return 0;
		}
		var_109_bool = var_21_bool == (int)30398;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_149(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528963);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528964, (int)30400, (int)30399);
			return 0;
		}
		var_116_bool = var_21_bool == (int)30400;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_149(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)528965);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528968, (int)30405, (int)30404);
			return 0;
		}
		var_123_bool = var_21_bool == (int)30405;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_149(var_22_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)528969);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528970, (int)30407, (int)30406);
			return 0;
		}
		var_130_bool = var_21_bool == (int)30407;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_149(var_22_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)528971);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528966, (int)30411, (int)30401);
			@@@var_0_object:AddReply((int)528972, (int)30409, (int)30408);
			return 0;
		}
		var_140_bool = var_21_bool == (int)30409;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_149(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528974, (int)30411, (int)30410);
			return 0;
		}
		var_147_bool = var_21_bool == (int)30411;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_149(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528975);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528976, (int)-1, (int)30413);
			return 0;
		}
		var_3_string = true;
		var_153_bool = 0;
		func_1730(var_153_bool);
		if(var_153_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1655();
		var_26_bool = var_21_bool == (int)31138;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_524(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529675);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529676, (int)43773, (int)31139);
			@@@var_0_object:AddReply((int)541604, (int)43774, (int)43772);
			return 0;
		}
		var_52_bool = var_21_bool == (int)43774;
		if(var_52_bool != 0) {
			var_53_string = "";
			func_524(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541607, (int)43773, (int)43775);
			@@@var_0_object:AddReply((int)541608, (int)43773, (int)43776);
			return 0;
		}
		var_62_bool = var_21_bool == (int)43773;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_524(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541605);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541609, (int)-1, (int)43778);
			@@@var_0_object:AddReply((int)541610, (int)-1, (int)43781);
			return 0;
		}
		var_3_string = true;
		var_71_bool = 0;
		func_1730(var_71_bool);
		if(var_71_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x223";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1655();
		var_26_bool = var_21_bool == (int)36960;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_778(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_55_bool = var_21_bool == (int)36962;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_778(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_65_bool = var_21_bool == (int)36964;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_778(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_74_bool = 0;
		func_1730(var_74_bool);
		if(var_74_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x321";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	if((int)1 != 0) {
		func_1655();
		var_26_bool = var_21_int == (int)42554;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_1032(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_1730(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x41f";
	
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_23_bool = var_21_int == (int)10;
	if(var_23_bool != 0) {
		func_1165();
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = 0;
		func_1379(var_26_bool);
		if(var_26_bool != 0) {
			var_29_bool = 0;
			func_1134(var_29_bool);
			if(var_29_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_46_bool = 0;
			func_1114(var_46_bool);
			if(var_46_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				func_1662(Obj());
				var_67_object = var_66_object;
				func_1529(var_65_bool, var_66_object);
			}
		} else {
			func_1129(var_21_int);
			func_1156();
		}
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1347();
	func_1165();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0();
	func_1165();
	var_22_string = "";
	func_1609("Neutral");
	func_1156();
	return 0;
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		func_1156();
	} else {
		var_28_string = "";
		func_1609("Neutral");
	}
	return 0;
	
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsOverrideActive(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		EventDisable(0);
		func_1347();
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_1370(var_25_bool, var_26_object);
		EventEnable(0);
		var_39_object = Obj();
		var_21_object = var_39_object;
		func_1824(var_39_object);
		var_458_string = "";
		func_1609("Neutral");
		func_1165();
		func_1156();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1100(var_20_cvector);
	return 0;
}


func_0(var_0_object, var_274_int, var_275_object)
{
	var_277_object = Obj(); var_278_bool = 0; var_279_int = 0; var_280_bool = 0; var_281_object = Obj(); var_282_bool = 0; var_283_int = 0; var_284_bool = 0;
	var_0_object = var_275_object;
	var_285_bool = 0; var_286_object = Obj(); var_287_float = 0;
	var_275_object = var_286_object;
	func_1384(var_285_bool, var_286_object, (float)70.0);
	var_288_bool = var_285_bool == 0; //@nz
	if(var_288_bool != 0) {
		var_274_int = -2;
		return 8;
	}
	CreateDialog(var_281_object);
	var_289_int = 0;
	func_1724(var_289_int);
	@@var_281_object:SetNPCName(var_289_int);
	var_290_int = 0;
	func_1722(var_290_int);
	@@var_281_object:SetNPCDescription(var_290_int);
	var_291_string = "";
	func_1726(var_291_string);
	@@var_281_object:SetPhoto(var_291_string);
	var_292_string = "";
	func_1728(var_292_string);
	@@var_281_object:SetPhoto2(var_292_string);
	var_293_int = 0;
	func_1807(var_293_int);
	@@var_281_object:SetPlayerName(var_293_int);
	IsOverrideActive(var_282_bool);
	var_294_bool = var_282_bool;
	if(var_294_bool != 0) {
		var_274_int = -2;
		return 8;
	}
	DoDialog(var_281_object);
	var_295_bool = 0; var_296_object = Obj();
	func_1662(Obj());
	var_297_object = var_296_object;
	func_1471(var_295_bool, var_296_object);
	var_298_object = Obj(); var_299_object = Obj();
	var_275_object = var_298_object;
	var_281_object = var_299_object;
	TaskCall(1);
	func_81(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object);
	TaskReturn();
	@@var_281_object:IsDialogEnd(var_284_bool);
	
Label_63:
	var_339_bool = var_284_bool == 0; //@nz
	if(var_339_bool != 0) {
		sync();
		@@var_281_object:IsDialogEnd(var_284_bool);
		goto Label_63;
	}
	var_275_object = Obj();
	func_1453();
	StopDialog(var_281_object);
	@@var_281_object:GetReturnValue((int)-1);
	var_283_int = var_274_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_385(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_0_object = var_45_object;
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0;
	var_45_object = var_56_object;
	func_1384(var_55_bool, var_56_object, (float)70.0);
	var_102_bool = var_55_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	CreateDialog(var_51_object);
	var_103_int = 0;
	func_1724(var_103_int);
	@@var_51_object:SetNPCName(var_103_int);
	var_104_int = 0;
	func_1722(var_104_int);
	@@var_51_object:SetNPCDescription(var_104_int);
	var_105_string = "";
	func_1726(var_105_string);
	@@var_51_object:SetPhoto(var_105_string);
	var_106_string = "";
	func_1728(var_106_string);
	@@var_51_object:SetPhoto2(var_106_string);
	var_107_int = 0;
	func_1807(var_107_int);
	@@var_51_object:SetPlayerName(var_107_int);
	IsOverrideActive(var_52_bool);
	var_115_bool = var_52_bool;
	if(var_115_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	DoDialog(var_51_object);
	var_116_bool = 0; var_117_object = Obj();
	func_1662(Obj());
	var_118_object = var_117_object;
	func_1471(var_116_bool, var_117_object);
	var_211_object = Obj(); var_212_object = Obj();
	var_45_object = var_211_object;
	var_51_object = var_212_object;
	TaskCall(3);
	func_466(var_213_object, var_214_object, var_215_string, var_216_bool, var_211_object, var_212_object);
	TaskReturn();
	@@var_51_object:IsDialogEnd(var_54_bool);
	
Label_448:
	var_260_bool = var_54_bool == 0; //@nz
	if(var_260_bool != 0) {
		sync();
		@@var_51_object:IsDialogEnd(var_54_bool);
		goto Label_448;
	}
	var_45_object = Obj();
	func_1453();
	StopDialog(var_51_object);
	@@var_51_object:GetReturnValue((int)-1);
	var_53_int = var_44_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1156()
{
	var_460_float = 0; var_461_float = 0;
	rand(var_461_float, (int)8, (int)16);
	SetTimer((int)10, var_461_float);
	return 2;
}


func_1668(var_82_cvector, var_83_cvector)
{
	var_85_float = 0; var_86_float = 0;
	var_87_int = var_83_cvector | var_83_cvector;
	var_86_float = sqrt(var_87_int);
	var_88_float = 9.999999974752427e-07;
	var_89_bool = var_86_float < var_88_float;
	if(var_89_bool != 0) {
		var_82_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_82_cvector = var_83_cvector / var_86_float;
	return 2;
}


func_1032(var_2_object, var_433_string)
{
	var_434_bool = 0;
	func_1730(var_434_bool);
	var_435_bool = var_434_bool == 0; //@nz
	if(var_435_bool != 0) {
		return 0;
	}
	var_436_bool = var_433_string == var_2_object;
	if(var_436_bool != 0) {
		return 0;
	}
	var_437_string = ""; var_438_bool = 0;
	var_433_string = var_437_string;
	var_440_bool = var_433_string == "";
	if(var_440_bool != 0) {
		var_438_bool = 0;
	} else {
		var_438_bool = 1;
	}
	func_1625(var_437_string, var_438_bool);
	var_2_object = var_433_string;
	return 0;
	
}


func_778(var_2_object, var_374_string)
{
	var_375_bool = 0;
	func_1730(var_375_bool);
	var_376_bool = var_375_bool == 0; //@nz
	if(var_376_bool != 0) {
		return 0;
	}
	var_377_bool = var_374_string == var_2_object;
	if(var_377_bool != 0) {
		return 0;
	}
	var_378_string = ""; var_379_bool = 0;
	var_374_string = var_378_string;
	var_381_bool = var_374_string == "";
	if(var_381_bool != 0) {
		var_379_bool = 0;
	} else {
		var_379_bool = 1;
	}
	func_1625(var_378_string, var_379_bool);
	var_2_object = var_374_string;
	return 0;
	
}


func_524(var_2_object, var_218_string)
{
	var_219_bool = 0;
	func_1730(var_219_bool);
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
	func_1625(var_222_string, var_223_bool);
	var_2_object = var_218_string;
	return 0;
	
}


func_1165()
{
	KillTimer((int)10);
	return 0;
}


func_1678(var_316_int, var_317_string)
{
	var_318_int = 0; var_319_int = 0;
	GetVariable(var_317_string, var_319_int);
	var_319_int = var_316_int;
	return 2;
}


func_1807(var_107_int)
{
	var_108_int = 0; var_109_int = 0;
	GetVariable("branch", var_109_int);
	var_112_bool = var_109_int == (int)0;
	if(var_112_bool != 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0x71e";
	}
	var_114_bool = var_109_int == (int)1;
	if(var_114_bool != 0) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
	return 2;
}


func_1683(var_171_int)
{
	var_172_float = 0; var_173_float = 0;
	GetGameTime(var_173_float);
	var_175_int = 0;
	var_175_int = var_173_float / (int)24;
	var_171_int = (int)1 + var_175_int;
	return 2;
}


func_149(var_2_object, var_305_string)
{
	var_306_bool = 0;
	func_1730(var_306_bool);
	var_307_bool = var_306_bool == 0; //@nz
	if(var_307_bool != 0) {
		return 0;
	}
	var_308_bool = var_305_string == var_2_object;
	if(var_308_bool != 0) {
		return 0;
	}
	var_309_string = ""; var_310_bool = 0;
	var_305_string = var_309_string;
	var_312_bool = var_305_string == "";
	if(var_312_bool != 0) {
		var_310_bool = 0;
	} else {
		var_310_bool = 1;
	}
	func_1625(var_309_string, var_310_bool);
	var_2_object = var_305_string;
	return 0;
	
}


func_1692(var_271_bool, var_272_int)
{
	var_273_int = 0;
	func_1683(var_273_int);
	var_271_bool = var_273_int == var_272_int;
	return 0;
}


func_1566(var_158_bool, var_159_object)
{
	var_160_string = ""; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_string = ""; var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = "";
	var_171_int = 0;
	func_1683(var_171_int);
	var_177_int = "d" + var_171_int;
	var_165_string = var_177_int + "m";
	var_166_int = 0;
	
Label_1575:
	if((int)1 != 0) {
		var_181_int = var_166_int + (int)1;
		var_182_int = var_165_string + var_181_int;
		@@var_159_object:HasProperty(var_182_int, var_167_bool);
		var_183_bool = var_167_bool == 0; //@nz
		if(var_183_bool != 0) {
		} else {
			var_166_int = var_166_int + (int)1;
			goto Label_1575;
		}
	}
	var_184_bool = var_166_int == 0; //@nz
	if(var_184_bool != 0) {
		var_158_bool = 0;
		return 10;
	}
	var_168_int = 0;
	var_186_bool = var_166_int > (int)1;
	if(var_186_bool != 0) {
		irand(var_168_int, var_166_int);
	}
	var_188_int = var_168_int + (int)1;
	var_189_int = var_165_string + var_188_int;
	@@var_159_object:GetProperty(var_189_int, var_169_string);
	var_190_bool = 0; var_191_string = "";
	var_169_string = var_191_string;
	func_1640(var_190_bool, var_191_string);
	var_190_bool = var_158_bool;
	return 10;
	
}


func_1824(var_39_object)
{
	var_40_int = 0; var_41_int = 0;
	GetVariable("mt_han", var_41_int);
	var_43_bool = var_41_int == 0; //@nz
	if(var_43_bool != 0) {
		var_44_int = 0; var_45_object = Obj();
		var_39_object = var_45_object;
		TaskCall(2);
		func_385(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		SetVariable("mt_han", (int)1);
	}
	var_271_bool = 0; var_272_int = 0;
	func_1692(var_271_bool, (int)9);
	if(var_271_bool != 0) {
		var_274_int = 0; var_275_object = Obj();
		var_39_object = var_275_object;
		TaskCall(0);
		func_0(var_276_object, var_274_int, var_275_object);
		TaskReturn();
		return 2;
	}
	var_341_bool = 0; var_342_int = 0;
	func_1692(var_341_bool, (int)12);
	if(var_341_bool != 0) {
		var_343_int = 0; var_344_object = Obj();
		var_39_object = var_344_object;
		TaskCall(4);
		func_634(var_345_object, var_343_int, var_344_object);
		TaskReturn();
		return 2;
	}
	var_402_int = 0; var_403_object = Obj();
	var_39_object = var_403_object;
	TaskCall(6);
	func_893(var_404_object, var_402_int, var_403_object);
	TaskReturn();
	return 2;
}


func_1698(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = "";
	var_49_int = var_46_int;
	if(var_49_int != 0) {
		"idle" = "idle" + var_46_int;
	}
	var_48_string = var_45_string;
	return 2;
}


func_1705(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0;
	var_42_int = 0;
	
Label_1707:
	var_45_string = ""; var_46_int = 0;
	var_42_int = var_46_int;
	func_1698(var_45_string, var_46_int);
	HasAnimation(var_43_bool, "all", var_45_string);
	var_50_bool = var_43_bool == 0; //@nz
	if(var_50_bool != 0) {
	} else {
		var_42_int = var_42_int + (int)1;
		goto Label_1707;
	}
	var_42_int = var_39_int;
	return 4;
	
}


func_1453()
{
	var_262_bool = 0; var_263_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_265_bool = 0;
	func_1730(var_265_bool);
	if(var_265_bool != 0) {
	} else {
		HasAnimationTrack(var_263_bool, "head");
		var_267_bool = var_263_bool;
		if(var_267_bool == 0) goto Label_1470;
		UnlookAsync("head");
	}
Label_1470:
	return 2;
	
}


func_1722(var_104_int)
{
	var_104_int = 515536;
	return 0;
}


func_1724(var_103_int)
{
	var_103_int = 502861;
	return 0;
}


func_1726(var_105_string)
{
	var_105_string = "ui/NPC_Han.png";
	return 0;
}


func_1471(var_116_bool, var_117_object)
{
	var_121_int = 0; var_122_int = 0; var_123_int = 0; var_124_int = 0;
	GetVariable("voice_common", var_123_int);
	var_126_int = var_123_int;
	if(var_126_int != 0) {
		var_127_bool = 0; var_128_object = Obj();
		var_117_object = var_128_object;
		func_1529(var_127_bool, var_128_object);
		var_157_bool = var_127_bool == 0; //@nz
		if(var_157_bool != 0) {
			var_158_bool = 0; var_159_object = Obj();
			var_117_object = var_159_object;
			func_1566(var_158_bool, var_159_object);
			var_193_bool = var_158_bool == 0; //@nz
			if(var_193_bool != 0) {
				var_116_bool = 0;
				return 4;
			}
		}
		irand(var_124_int, (int)2);
		var_195_int = var_124_int;
		if(var_195_int != 0) {
			var_198_int = var_123_int + (int)1;
			var_200_int = var_198_int % (int)3;
			SetVariable("voice_common", var_200_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_203_bool = 0; var_204_object = Obj();
		var_117_object = var_204_object;
		func_1566(var_203_bool, var_204_object);
		var_205_bool = var_203_bool == 0; //@nz
		if(var_205_bool != 0) {
			var_206_bool = 0; var_207_object = Obj();
			var_117_object = var_207_object;
			func_1529(var_206_bool, var_207_object);
			var_208_bool = var_206_bool == 0; //@nz
			if(var_208_bool != 0) {
				var_116_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1527;
	
Label_1527:
	var_116_bool = 1;
	return 4;
	
}


func_1728(var_106_string)
{
	var_106_string = "ui/NPC_Han_b.png";
	return 0;
}


func_1345(var_59_bool)
{
	var_59_bool = 1;
	return 0;
}


func_1730(var_98_bool)
{
	var_98_bool = 1;
	return 0;
}


func_1347()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1732()
{
	SetVariable("k9q01", (int)6);
	func_1753();
	return 0;
}


func_1352(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1609(var_244_string)
{
	var_245_bool = 0; var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_float = 0; var_250_float = 0;
	lshHasAnimation(var_248_bool, var_244_string);
	var_251_bool = var_248_bool;
	if(var_251_bool != 0) {
		lshGetAnimTimes(var_244_string, var_249_float, var_250_float);
		lshPlayAnimation(var_249_float, var_250_float, (bool)0);
	} else {
		var_254_int = "Can't find lsh animation : " + var_244_string;
		Trace(var_254_int);
	}
	return 6;
	
}


func_715(var_0_object, var_1_object, var_2_object, var_3_string, var_367_object, var_368_object)
{
	var_0_object = var_368_object;
	var_1_object = var_367_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_374_string = "";
		func_778(var_368_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_748;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2cf";
	}
Label_748:
	var_392_bool = 0;
	func_1730(var_392_bool);
	if(var_392_bool != 0) {

	Label_752:
		lshWaitForAnimEnd();
		var_393_string = var_3_string;
		if(var_393_string != 0) {
		} else {
			var_394_string = "";
			var_394_string = var_2_object;
			func_1609(var_394_string);
			goto Label_752;
	}
		PlayAnimation("all", "idle");

	Label_767:
		WaitForAnimEnd();
		var_397_string = var_3_string;
		if(var_397_string != 0) {
			goto Label_777;
		}
		PlayAnimation("all", "idle");
		goto Label_767;
	}
	goto Label_777;
	
Label_777:
	return 0;
	
}


func_1100(var_0_object)
{
	var_21_bool = 0;
	func_1379(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1109:
	func_1276();
	goto Label_1109;
}
EMIT "Return(); Pop(0)";


func_1741(var_314_bool)
{
	var_316_int = 0; var_317_string = "";
	func_1678(var_316_int, "k9q01");
	var_321_bool = var_316_int == (int)5;
	if(var_321_bool != 0) {
		var_314_bool = 1;
		return 0;
	}
	var_314_bool = 0;
	return 0;
}


func_974(var_0_object, var_1_object, var_2_object, var_3_string, var_426_object, var_427_object)
{
	var_0_object = var_427_object;
	var_1_object = var_426_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_433_string = "";
		func_1032(var_427_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_1002;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3d2";
	}
Label_1002:
	var_448_bool = 0;
	func_1730(var_448_bool);
	if(var_448_bool != 0) {

	Label_1006:
		lshWaitForAnimEnd();
		var_449_string = var_3_string;
		if(var_449_string != 0) {
		} else {
			var_450_string = "";
			var_450_string = var_2_object;
			func_1609(var_450_string);
			goto Label_1006;
	}
		PlayAnimation("all", "idle");

	Label_1021:
		WaitForAnimEnd();
		var_453_string = var_3_string;
		if(var_453_string != 0) {
			goto Label_1031;
		}
		PlayAnimation("all", "idle");
		goto Label_1021;
	}
	goto Label_1031;
	
Label_1031:
	return 0;
	
}


func_1360(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0;
	GetPosition(var_34_cvector);
	var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
	return 6;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_298_object, var_299_object)
{
	var_0_object = var_299_object;
	var_1_object = var_298_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_305_string = "";
		func_149(var_299_object, "Neutral");
		@@@var_0_object:SetMessage((int)526521);
		@@@var_0_object:ClearReplies();
		var_314_bool = 0; var_315_object = Obj();
		var_315_object = var_1_object;
		func_1741(var_315_object);
		if(var_314_bool != 0) {
			@@@var_0_object:AddReply((int)526522, (int)27789, (int)27788);
		}
		@@@var_0_object:AddReply((int)526525, (int)-1, (int)27791);
		@@@var_0_object:AddReply((int)541603, (int)-1, (int)43771);
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	var_331_bool = 0;
	func_1730(var_331_bool);
	if(var_331_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_332_string = var_3_string;
		if(var_332_string != 0) {
		} else {
			var_333_string = "";
			var_333_string = var_2_object;
			func_1609(var_333_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_336_string = var_3_string;
		if(var_336_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;
	}
	goto Label_148;
	
Label_148:
	return 0;
	
}


func_466(var_0_object, var_1_object, var_2_object, var_3_string, var_211_object, var_212_object)
{
	var_0_object = var_212_object;
	var_1_object = var_211_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_218_string = "";
		func_524(var_212_object, "Neutral");
		@@@var_0_object:SetMessage((int)529675);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529676, (int)43773, (int)31139);
		@@@var_0_object:AddReply((int)541604, (int)43774, (int)43772);
		goto Label_494;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1d6";
	}
Label_494:
	var_242_bool = 0;
	func_1730(var_242_bool);
	if(var_242_bool != 0) {

	Label_498:
		lshWaitForAnimEnd();
		var_243_string = var_3_string;
		if(var_243_string != 0) {
		} else {
			var_244_string = "";
			var_244_string = var_2_object;
			func_1609(var_244_string);
			goto Label_498;
	}
		PlayAnimation("all", "idle");

	Label_513:
		WaitForAnimEnd();
		var_257_string = var_3_string;
		if(var_257_string != 0) {
			goto Label_523;
		}
		PlayAnimation("all", "idle");
		goto Label_513;
	}
	goto Label_523;
	
Label_523:
	return 0;
	
}


func_1625(var_222_string, var_223_bool)
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


func_1370(var_25_bool, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	@@var_26_object:GetPosition(var_28_cvector);
	var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	var_28_cvector = var_30_cvector;
	func_1360(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
	return 2;
}


func_1114(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj();
	FindActor(var_48_object, "player");
	var_50_bool = var_48_object == 0; //@nz
	if(var_50_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj();
	var_48_object = var_52_object;
	func_1370(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1753()
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateDiaryEntry(var_32_object, (int)523, (int)1, (int)529815);
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0;
	var_32_object = var_37_object;
	func_1779(var_36_bool, var_37_object, (int)517);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1379(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_1766(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	GetDiaryRoot(var_47_object);
	var_48_bool = var_47_object == 0; //@nz
	if(var_48_bool != 0) {
		Trace("Can't retrieve diary root");
		var_45_object = 0;
		return 2;
	}
	var_47_object = var_45_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1384(var_55_bool, var_56_object, var_57_float)
{
	var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0;
	@@var_56_object:GetPosition(var_68_cvector);
	@@var_56_object:GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	var_76_float = var_76_float + var_67_float;
	SetByIndex(var_68_cvector, 1) = var_76_float;
	GetPosition(var_69_cvector);
	GetEyesHeight(var_67_float);
	var_77_float = GetByIndex(var_69_cvector, 1);
	var_77_float = var_77_float + var_67_float;
	SetByIndex(var_69_cvector, 1) = var_77_float;
	var_70_cvector = var_68_cvector - var_69_cvector;
	var_78_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_79_int = var_70_cvector | var_70_cvector;
	var_80_float = sqrt(var_79_int);
	var_70_cvector = var_70_cvector / var_80_float;
	var_71_cvector = -var_70_cvector;
	var_81_float = var_70_cvector * var_57_float;
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0);
	var_83_cvector = var_71_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1668(var_82_cvector, var_83_cvector);
	var_91_float = var_82_cvector * (int)25;
	var_92_int = var_81_float + var_91_float;
	var_72_cvector = var_92_int - CVector(0.0, 10.0, 0.0);
	var_73_cvector = var_69_cvector + var_72_cvector;
	IsOverrideActive(var_74_bool);
	var_94_bool = var_74_bool;
	if(var_94_bool != 0) {
		var_55_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_73_cvector, var_71_cvector, (bool)1);
	var_96_float = GetByIndex(var_72_cvector, 0);
	var_97_float = GetByIndex(var_72_cvector, 2);
	Rotate(var_96_float, var_97_float);
	var_98_bool = 0;
	func_1730(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		HasAnimationTrack(var_75_bool, "head");
		var_100_bool = var_75_bool;
		if(var_100_bool == 0) goto Label_1447;
		LookAsyncCamera("head");
	}
Label_1447:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_55_bool = 1;
	return 18;
	
}


func_1129(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_98_float, var_99_float);
	return 0;
}


func_1640(var_150_bool, var_151_string)
{
	var_152_bool = 0; var_153_bool = 0;
	var_154_bool = 0;
	func_1730(var_154_bool);
	if(var_154_bool != 0) {
		lshHasSpeech(var_153_bool, var_151_string);
		var_155_bool = var_153_bool;
		if(var_155_bool != 0) {
			lshPlaySpeech(var_151_string);
			var_150_bool = 1;
			return 2;
		}
	}
	var_150_bool = 0;
	return 2;
}


func_1134(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0;
	FindActor(var_32_object, "player");
	var_35_bool = var_32_object == 0; //@nz
	if(var_35_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_36_float = 0; var_37_object = Obj();
	var_32_object = var_37_object;
	func_1352(var_36_float, var_37_object);
	var_45_bool = var_36_float > (float)90000.0;
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	CanSee(var_33_bool, var_32_object);
	var_33_bool = var_29_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1779(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0;
	func_1766(Obj());
	var_45_object = var_42_object;
	@@var_42_object:Find(var_38_int, var_43_object);
	var_50_bool = var_43_object == 0; //@nz
	if(var_50_bool != 0) {
		var_52_int = "Can't find diary parent with id: " + var_38_int;
		Trace(var_52_int);
		var_36_bool = 0;
		return 6;
	}
	@@var_43_object:AddChild(var_37_object);
	SendWorldWndMessage((int)7);
	@@var_37_object:GetCategory(var_44_int);
	SetDiarySection(var_44_int);
	var_36_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1655()
{
	var_24_bool = 0;
	func_1730(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1529(var_127_bool, var_128_object)
{
	var_129_string = ""; var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_string = ""; var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = "";
	var_134_string = "c";
	var_135_int = 0;
	
Label_1532:
	if((int)1 != 0) {
		var_141_int = var_135_int + (int)1;
		var_142_int = var_134_string + var_141_int;
		@@var_128_object:HasProperty(var_142_int, var_136_bool);
		var_143_bool = var_136_bool == 0; //@nz
		if(var_143_bool != 0) {
		} else {
			var_135_int = var_135_int + (int)1;
			goto Label_1532;
		}
	}
	var_144_bool = var_135_int == 0; //@nz
	if(var_144_bool != 0) {
		var_127_bool = 0;
		return 10;
	}
	var_137_int = 0;
	var_146_bool = var_135_int > (int)1;
	if(var_146_bool != 0) {
		irand(var_137_int, var_135_int);
	}
	var_148_int = var_137_int + (int)1;
	var_149_int = var_134_string + var_148_int;
	@@var_128_object:GetProperty(var_149_int, var_138_string);
	var_150_bool = 0; var_151_string = "";
	var_138_string = var_151_string;
	func_1640(var_150_bool, var_151_string);
	var_150_bool = var_127_bool;
	return 10;
	
}


func_634(var_0_object, var_343_int, var_344_object)
{
	var_346_object = Obj(); var_347_bool = 0; var_348_int = 0; var_349_bool = 0; var_350_object = Obj(); var_351_bool = 0; var_352_int = 0; var_353_bool = 0;
	var_0_object = var_344_object;
	var_354_bool = 0; var_355_object = Obj(); var_356_float = 0;
	var_344_object = var_355_object;
	func_1384(var_354_bool, var_355_object, (float)70.0);
	var_357_bool = var_354_bool == 0; //@nz
	if(var_357_bool != 0) {
		var_343_int = -2;
		return 8;
	}
	CreateDialog(var_350_object);
	var_358_int = 0;
	func_1724(var_358_int);
	@@var_350_object:SetNPCName(var_358_int);
	var_359_int = 0;
	func_1722(var_359_int);
	@@var_350_object:SetNPCDescription(var_359_int);
	var_360_string = "";
	func_1726(var_360_string);
	@@var_350_object:SetPhoto(var_360_string);
	var_361_string = "";
	func_1728(var_361_string);
	@@var_350_object:SetPhoto2(var_361_string);
	var_362_int = 0;
	func_1807(var_362_int);
	@@var_350_object:SetPlayerName(var_362_int);
	IsOverrideActive(var_351_bool);
	var_363_bool = var_351_bool;
	if(var_363_bool != 0) {
		var_343_int = -2;
		return 8;
	}
	DoDialog(var_350_object);
	var_364_bool = 0; var_365_object = Obj();
	func_1662(Obj());
	var_366_object = var_365_object;
	func_1471(var_364_bool, var_365_object);
	var_367_object = Obj(); var_368_object = Obj();
	var_344_object = var_367_object;
	var_350_object = var_368_object;
	TaskCall(5);
	func_715(var_369_object, var_370_object, var_371_string, var_372_bool, var_367_object, var_368_object);
	TaskReturn();
	@@var_350_object:IsDialogEnd(var_353_bool);
	
Label_697:
	var_400_bool = var_353_bool == 0; //@nz
	if(var_400_bool != 0) {
		sync();
		@@var_350_object:IsDialogEnd(var_353_bool);
		goto Label_697;
	}
	var_344_object = Obj();
	func_1453();
	StopDialog(var_350_object);
	@@var_350_object:GetReturnValue((int)-1);
	var_352_int = var_343_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1276()
{
	var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0;
	WaitForAnimEnd();
	var_37_bool = 0;
	func_1379(var_37_bool);
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		return 12;
	}
	func_1705((int)0);
	var_39_int = var_31_int;
	var_32_int = 0;
	
Label_1290:
	var_52_bool = 0;
	var_52_bool = 0;
	var_54_bool = var_32_int < (int)5;
	if(var_54_bool != 0) {
		var_55_bool = 0;
		func_1379(var_55_bool);
		if(var_55_bool != 0) {
			var_52_bool = 1;
		}
	}
	if(var_52_bool != 0) {
		var_56_bool = var_31_int == 0; //@nz
		if(var_56_bool != 0) {
			Sleep((int)3, var_33_bool);
			var_58_bool = var_33_bool == 0; //@nz
			if(var_58_bool != 0) {
			} else {
		} else {
				irand(var_34_int, var_31_int);
				irand(var_35_int, (int)5);
				var_64_bool = var_35_int != (int)0;
				if(var_64_bool != 0) {
					var_34_int = 0;
				}
				var_66_string = ""; var_67_int = 0;
				var_34_int = var_67_int;
				func_1698(var_66_string, var_67_int);
				PlayAnimation("all", var_66_string);
				WaitForAnimEnd(var_36_bool);
				var_68_bool = var_36_bool == 0; //@nz
				if(var_68_bool == 0) goto Label_1331;
				goto Label_1342;
		}
		Label_1331:
			var_59_bool = 0;
			func_1345(var_59_bool);
			var_60_bool = var_59_bool == 0; //@nz
			if(var_60_bool != 0) {
				goto Label_1342;
			}
			ResetAAS();
			var_32_int = var_32_int + (int)1;
			goto Label_1290;

		}
	}
Label_1342:
	ResetAAS();
	return 12;
	
}


func_893(var_0_object, var_402_int, var_403_object)
{
	var_405_object = Obj(); var_406_bool = 0; var_407_int = 0; var_408_bool = 0; var_409_object = Obj(); var_410_bool = 0; var_411_int = 0; var_412_bool = 0;
	var_0_object = var_403_object;
	var_413_bool = 0; var_414_object = Obj(); var_415_float = 0;
	var_403_object = var_414_object;
	func_1384(var_413_bool, var_414_object, (float)70.0);
	var_416_bool = var_413_bool == 0; //@nz
	if(var_416_bool != 0) {
		var_402_int = -2;
		return 8;
	}
	CreateDialog(var_409_object);
	var_417_int = 0;
	func_1724(var_417_int);
	@@var_409_object:SetNPCName(var_417_int);
	var_418_int = 0;
	func_1722(var_418_int);
	@@var_409_object:SetNPCDescription(var_418_int);
	var_419_string = "";
	func_1726(var_419_string);
	@@var_409_object:SetPhoto(var_419_string);
	var_420_string = "";
	func_1728(var_420_string);
	@@var_409_object:SetPhoto2(var_420_string);
	var_421_int = 0;
	func_1807(var_421_int);
	@@var_409_object:SetPlayerName(var_421_int);
	IsOverrideActive(var_410_bool);
	var_422_bool = var_410_bool;
	if(var_422_bool != 0) {
		var_402_int = -2;
		return 8;
	}
	DoDialog(var_409_object);
	var_423_bool = 0; var_424_object = Obj();
	func_1662(Obj());
	var_425_object = var_424_object;
	func_1471(var_423_bool, var_424_object);
	var_426_object = Obj(); var_427_object = Obj();
	var_403_object = var_426_object;
	var_409_object = var_427_object;
	TaskCall(7);
	func_974(var_428_object, var_429_object, var_430_string, var_431_bool, var_426_object, var_427_object);
	TaskReturn();
	@@var_409_object:IsDialogEnd(var_412_bool);
	
Label_956:
	var_456_bool = var_412_bool == 0; //@nz
	if(var_456_bool != 0) {
		sync();
		@@var_409_object:IsDialogEnd(var_412_bool);
		goto Label_956;
	}
	var_403_object = Obj();
	func_1453();
	StopDialog(var_409_object);
	@@var_409_object:GetReturnValue((int)-1);
	var_411_int = var_402_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1662(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj();
	self(var_120_object);
	var_120_object = var_118_object;
	return 2;
}
EMIT "Stack[-1] = 0";


