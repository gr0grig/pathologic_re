// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Distrust|W:Anger|W:Repentance|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|W:reputation|W:ui/NPC_BigVlad.png|W:ui/NPC_BigVlad_b.png|W:ook2BigVlad1|W:k2q01|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x471
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb4 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x24b vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x349 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x447 vars=int,int
// @TASK_8: vars=cvector params=0
// @EVENT_7: op=0x4bd vars=int
// @EVENT_6: op=0x4e3 vars=
// @EVENT_5: op=0x4f2 vars=
// @EVENT_45: op=0x4ff vars=bool
// @EVENT_0: op=0x50b vars=object
// @PE: 0x51,0x9e,0xb4,0x1fb,0x235,0x24b,0x2f4,0x333,0x349,0x3f7,0x431,0x447,0x4bd,0x4e3,0x4ff,0x6e3,0x712,0x748,0x770,0x782,0x788,0x794,0x7b1

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1740();
		var_26_bool = var_22_cvector == (int)26614;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1922();
		}
		var_32_bool = var_22_cvector == (int)26616;
		if(var_32_bool != 0) {
			var_33_object = Obj(); var_34_object = Obj();
			var_33_object = var_1_object;
			var_34_object = var_0_object;
			func_1904(var_34_object);
		}
		var_74_bool = var_22_cvector == (int)44497;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_1911(var_76_object);
		}
		var_100_bool = var_21_bool == (int)26613;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_158(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525245);
			@@@var_0_object:ClearReplies();
			var_119_bool = 0;
			var_119_bool = 0;
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_1928(var_121_object);
			if(var_120_bool != 0) {
				var_128_bool = 0; var_129_object = Obj();
				var_129_object = var_1_object;
				func_1940(var_129_object);
				if(var_128_bool != 0) {
					var_119_bool = 1;
				}
			}
			if(var_119_bool != 0) {
				@@@var_0_object:AddReply((int)525246, (int)44478, (int)26614);
			}
			@@@var_0_object:AddReply((int)525249, (int)-1, (int)26617);
			@@@var_0_object:AddReply((int)529151, (int)-1, (int)30598);
			return 0;
		}
		var_144_bool = var_21_bool == (int)44478;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_158(var_22_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)542162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542163, (int)30599, (int)44479);
			@@@var_0_object:AddReply((int)542164, (int)44481, (int)44480);
			return 0;
		}
		var_154_bool = var_21_bool == (int)44481;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_158(var_22_cvector, "Anger");
			@@@var_0_object:SetMessage((int)542165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542169, (int)30599, (int)44485);
			@@@var_0_object:AddReply((int)542170, (int)-1, (int)44486);
			return 0;
		}
		var_164_bool = var_21_bool == (int)30599;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_158(var_22_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)529152);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529153, (int)30601, (int)30600);
			@@@var_0_object:AddReply((int)529155, (int)30601, (int)30602);
			return 0;
		}
		var_174_bool = var_21_bool == (int)30601;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_158(var_22_cvector, "Anger");
			@@@var_0_object:SetMessage((int)529154);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529156, (int)26615, (int)30604);
			@@@var_0_object:AddReply((int)529157, (int)44482, (int)30605);
			return 0;
		}
		var_184_bool = var_21_bool == (int)44482;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_158(var_22_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)542166);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542167, (int)26615, (int)44483);
			@@@var_0_object:AddReply((int)542168, (int)44494, (int)44484);
			return 0;
		}
		var_194_bool = var_21_bool == (int)26615;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_158(var_22_cvector, "Anger");
			@@@var_0_object:SetMessage((int)525247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542171, (int)44494, (int)44488);
			@@@var_0_object:AddReply((int)542176, (int)44494, (int)44493);
			return 0;
		}
		var_204_bool = var_21_bool == (int)44494;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_158(var_22_cvector, "Repentance");
			@@@var_0_object:SetMessage((int)542177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525248, (int)-1, (int)26616);
			@@@var_0_object:AddReply((int)542178, (int)-1, (int)44497);
			return 0;
		}
		var_3_string = true;
		var_213_bool = 0;
		func_1902(var_213_bool);
		if(var_213_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb5";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1740();
		var_26_bool = var_21_bool == (int)26824;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_565(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525468);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525469, (int)30746, (int)26825);
			@@@var_0_object:AddReply((int)542158, (int)44475, (int)44474);
			return 0;
		}
		var_52_bool = var_21_bool == (int)44475;
		if(var_52_bool != 0) {
			var_53_string = "";
			func_565(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542159);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542160, (int)-1, (int)44476);
			@@@var_0_object:AddReply((int)542161, (int)-1, (int)44477);
			return 0;
		}
		var_62_bool = var_21_bool == (int)30746;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_565(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529292);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529293, (int)-1, (int)30747);
			@@@var_0_object:AddReply((int)529294, (int)-1, (int)30748);
			return 0;
		}
		var_3_string = true;
		var_71_bool = 0;
		func_1902(var_71_bool);
		if(var_71_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x24c";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1740();
		var_26_bool = var_21_bool == (int)36960;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_819(var_22_cvector, "Neutral");
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
			func_819(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_65_bool = var_21_bool == (int)36964;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_819(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_74_bool = 0;
		func_1902(var_74_bool);
		if(var_74_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x34a";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	if((int)1 != 0) {
		func_1740();
		var_26_bool = var_21_int == (int)42554;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_1073(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_1902(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x448";
	
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_23_bool = var_21_int == (int)10;
	if(var_23_bool != 0) {
		func_1209();
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = 0;
		func_1464(var_26_bool);
		if(var_26_bool != 0) {
			var_29_bool = 0;
			func_1178(var_29_bool);
			if(var_29_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_46_bool = 0;
			func_1158(var_46_bool);
			if(var_46_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				func_1747(Obj());
				var_67_object = var_66_object;
				func_1614(var_65_bool, var_66_object);
			}
		} else {
			func_1173(var_21_int);
			func_1200();
		}
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1391();
	func_1209();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0();
	func_1209();
	var_22_string = "";
	func_1694("Neutral");
	func_1200();
	return 0;
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		func_1200();
	} else {
		var_28_string = "";
		func_1694("Neutral");
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
		func_1391();
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_1455(var_25_bool, var_26_object);
		EventEnable(0);
		var_39_object = Obj();
		var_21_object = var_39_object;
		func_1969(var_39_object);
		var_462_string = "";
		func_1694("Neutral");
		func_1209();
		func_1200();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1144(var_20_cvector);
	return 0;
}


func_0(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0;
	var_0_object = var_272_object;
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0;
	var_272_object = var_283_object;
	func_1469(var_282_bool, var_283_object, (float)70.0);
	var_285_bool = var_282_bool == 0; //@nz
	if(var_285_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	CreateDialog(var_278_object);
	var_286_int = 0;
	func_1896(var_286_int);
	@@var_278_object:SetNPCName(var_286_int);
	var_287_int = 0;
	func_1894(var_287_int);
	@@var_278_object:SetNPCDescription(var_287_int);
	var_288_string = "";
	func_1898(var_288_string);
	@@var_278_object:SetPhoto(var_288_string);
	var_289_string = "";
	func_1900(var_289_string);
	@@var_278_object:SetPhoto2(var_289_string);
	var_290_int = 0;
	func_1952(var_290_int);
	@@var_278_object:SetPlayerName(var_290_int);
	IsOverrideActive(var_279_bool);
	var_291_bool = var_279_bool;
	if(var_291_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	DoDialog(var_278_object);
	var_292_bool = 0; var_293_object = Obj();
	func_1747(Obj());
	var_294_object = var_293_object;
	func_1556(var_292_bool, var_293_object);
	var_295_object = Obj(); var_296_object = Obj();
	var_272_object = var_295_object;
	var_278_object = var_296_object;
	TaskCall(1);
	func_81(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object);
	TaskReturn();
	@@var_278_object:IsDialogEnd(var_281_bool);
	
Label_63:
	var_343_bool = var_281_bool == 0; //@nz
	if(var_343_bool != 0) {
		sync();
		@@var_278_object:IsDialogEnd(var_281_bool);
		goto Label_63;
	}
	var_272_object = Obj();
	func_1538();
	StopDialog(var_278_object);
	@@var_278_object:GetReturnValue((int)-1);
	var_280_int = var_271_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1538()
{
	var_260_bool = 0; var_261_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_263_bool = 0;
	func_1902(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		HasAnimationTrack(var_261_bool, "head");
		var_265_bool = var_261_bool;
		if(var_265_bool == 0) goto Label_1555;
		UnlookAsync("head");
	}
Label_1555:
	return 2;
	
}


func_1922()
{
	SetVariable("ook2BigVlad1", (int)1);
	return 0;
}


func_1158(var_46_bool)
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
	func_1455(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1928(var_312_bool)
{
	var_314_int = 0; var_315_string = "";
	func_1774(var_314_int, "k2q01");
	var_319_bool = var_314_int == (int)2;
	if(var_319_bool != 0) {
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_1416(var_46_bool, var_47_object, var_48_string, var_49_float, var_50_float, var_51_float)
{
	var_52_float = 0; var_53_float = 0;
	var_54_bool = 0; var_55_object = Obj(); var_56_string = "";
	var_47_object = var_55_object;
	var_48_string = var_56_string;
	func_1404(var_54_bool, var_55_object, var_56_string);
	var_63_bool = var_54_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	@@var_47_object:GetProperty(var_48_string, var_53_float);
	var_64_float = 0; var_65_float = 0; var_66_float = 0; var_67_float = 0;
	var_65_float = var_53_float + var_49_float;
	var_50_float = var_66_float;
	var_51_float = var_67_float;
	func_1763(var_64_float, var_65_float, var_66_float, var_67_float);
	@@var_47_object:SetProperty(var_48_string, var_64_float);
	var_46_bool = 1;
	return 2;
}


func_1911(var_75_object)
{
	var_77_int = 0; var_78_int = 0;
	irand(var_78_int, (int)1000);
	var_80_object = Obj(); var_81_int = 0;
	var_75_object = var_80_object;
	var_81_int = var_78_int + (int)2000;
	func_1791(var_80_object, var_81_int);
	return 2;
}


func_1810(var_35_bool, var_36_object, var_37_float)
{
	var_38_bool = var_36_object == 0; //@nz
	if(var_38_bool != 0) {
		var_35_bool = 0;
		return 0;
	}
	var_40_bool = var_37_float > (int)0;
	if(var_40_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_71_bool = var_37_float < (int)0;
		if(var_71_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1831;
		}
		var_35_bool = 0;
		return 0;
	}
Label_1831:
	var_42_float = 0;
	var_37_float = var_42_float;
	func_1845(var_42_float);
	var_46_bool = 0; var_47_object = Obj(); var_48_string = ""; var_49_float = 0; var_50_float = 0; var_51_float = 0;
	var_36_object = var_47_object;
	var_37_float = var_49_float;
	func_1416(var_46_bool, var_47_object, "reputation", var_49_float, (float)0, (float)1);
	var_35_bool = 1;
	return 0;
	
}


func_1556(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0;
	GetVariable("voice_common", var_121_int);
	var_124_int = var_121_int;
	if(var_124_int != 0) {
		var_125_bool = 0; var_126_object = Obj();
		var_115_object = var_126_object;
		func_1614(var_125_bool, var_126_object);
		var_155_bool = var_125_bool == 0; //@nz
		if(var_155_bool != 0) {
			var_156_bool = 0; var_157_object = Obj();
			var_115_object = var_157_object;
			func_1651(var_156_bool, var_157_object);
			var_191_bool = var_156_bool == 0; //@nz
			if(var_191_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		irand(var_122_int, (int)2);
		var_193_int = var_122_int;
		if(var_193_int != 0) {
			var_196_int = var_121_int + (int)1;
			var_198_int = var_196_int % (int)3;
			SetVariable("voice_common", var_198_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_201_bool = 0; var_202_object = Obj();
		var_115_object = var_202_object;
		func_1651(var_201_bool, var_202_object);
		var_203_bool = var_201_bool == 0; //@nz
		if(var_203_bool != 0) {
			var_204_bool = 0; var_205_object = Obj();
			var_115_object = var_205_object;
			func_1614(var_204_bool, var_205_object);
			var_206_bool = var_204_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1612;
	
Label_1612:
	var_114_bool = 1;
	return 4;
	
}


func_1940(var_320_bool)
{
	var_322_int = 0; var_323_string = "";
	func_1774(var_322_int, "ook2BigVlad1");
	var_325_bool = var_322_int == (int)0;
	if(var_325_bool != 0) {
		var_320_bool = 1;
		return 0;
	}
	var_320_bool = 0;
	return 0;
}


func_1173(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_98_float, var_99_float);
	return 0;
}


func_1178(var_29_bool)
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
	func_1396(var_36_float, var_37_object);
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


func_1438(var_85_object, var_86_string, var_87_int)
{
	var_88_int = 0; var_89_int = 0;
	@@var_85_object:GetProperty(var_86_string, var_89_int);
	var_90_int = var_89_int + var_87_int;
	@@var_85_object:SetProperty(var_86_string, var_90_int);
	return 2;
}


func_158(var_2_object, var_302_string)
{
	var_303_bool = 0;
	func_1902(var_303_bool);
	var_304_bool = var_303_bool == 0; //@nz
	if(var_304_bool != 0) {
		return 0;
	}
	var_305_bool = var_302_string == var_2_object;
	if(var_305_bool != 0) {
		return 0;
	}
	var_306_string = ""; var_307_bool = 0;
	var_302_string = var_306_string;
	var_309_bool = var_302_string == "";
	if(var_309_bool != 0) {
		var_307_bool = 0;
	} else {
		var_307_bool = 1;
	}
	func_1710(var_306_string, var_307_bool);
	var_2_object = var_302_string;
	return 0;
	
}


func_1952(var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	GetVariable("branch", var_107_int);
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x7af";
	}
	var_112_bool = var_107_int == (int)1;
	if(var_112_bool != 0) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
	return 2;
}


func_1694(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0;
	lshHasAnimation(var_246_bool, var_242_string);
	var_249_bool = var_246_bool;
	if(var_249_bool != 0) {
		lshGetAnimTimes(var_242_string, var_247_float, var_248_float);
		lshPlayAnimation(var_247_float, var_248_float, (bool)0);
	} else {
		var_252_int = "Can't find lsh animation : " + var_242_string;
		Trace(var_252_int);
	}
	return 6;
	
}


func_675(var_0_object, var_347_int, var_348_object)
{
	var_350_object = Obj(); var_351_bool = 0; var_352_int = 0; var_353_bool = 0; var_354_object = Obj(); var_355_bool = 0; var_356_int = 0; var_357_bool = 0;
	var_0_object = var_348_object;
	var_358_bool = 0; var_359_object = Obj(); var_360_float = 0;
	var_348_object = var_359_object;
	func_1469(var_358_bool, var_359_object, (float)70.0);
	var_361_bool = var_358_bool == 0; //@nz
	if(var_361_bool != 0) {
		var_347_int = -2;
		return 8;
	}
	CreateDialog(var_354_object);
	var_362_int = 0;
	func_1896(var_362_int);
	@@var_354_object:SetNPCName(var_362_int);
	var_363_int = 0;
	func_1894(var_363_int);
	@@var_354_object:SetNPCDescription(var_363_int);
	var_364_string = "";
	func_1898(var_364_string);
	@@var_354_object:SetPhoto(var_364_string);
	var_365_string = "";
	func_1900(var_365_string);
	@@var_354_object:SetPhoto2(var_365_string);
	var_366_int = 0;
	func_1952(var_366_int);
	@@var_354_object:SetPlayerName(var_366_int);
	IsOverrideActive(var_355_bool);
	var_367_bool = var_355_bool;
	if(var_367_bool != 0) {
		var_347_int = -2;
		return 8;
	}
	DoDialog(var_354_object);
	var_368_bool = 0; var_369_object = Obj();
	func_1747(Obj());
	var_370_object = var_369_object;
	func_1556(var_368_bool, var_369_object);
	var_371_object = Obj(); var_372_object = Obj();
	var_348_object = var_371_object;
	var_354_object = var_372_object;
	TaskCall(5);
	func_756(var_373_object, var_374_object, var_375_string, var_376_bool, var_371_object, var_372_object);
	TaskReturn();
	@@var_354_object:IsDialogEnd(var_357_bool);
	
Label_738:
	var_404_bool = var_357_bool == 0; //@nz
	if(var_404_bool != 0) {
		sync();
		@@var_354_object:IsDialogEnd(var_357_bool);
		goto Label_738;
	}
	var_348_object = Obj();
	func_1538();
	StopDialog(var_354_object);
	@@var_354_object:GetReturnValue((int)-1);
	var_356_int = var_347_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1445(var_29_bool, var_30_cvector)
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


func_934(var_0_object, var_406_int, var_407_object)
{
	var_409_object = Obj(); var_410_bool = 0; var_411_int = 0; var_412_bool = 0; var_413_object = Obj(); var_414_bool = 0; var_415_int = 0; var_416_bool = 0;
	var_0_object = var_407_object;
	var_417_bool = 0; var_418_object = Obj(); var_419_float = 0;
	var_407_object = var_418_object;
	func_1469(var_417_bool, var_418_object, (float)70.0);
	var_420_bool = var_417_bool == 0; //@nz
	if(var_420_bool != 0) {
		var_406_int = -2;
		return 8;
	}
	CreateDialog(var_413_object);
	var_421_int = 0;
	func_1896(var_421_int);
	@@var_413_object:SetNPCName(var_421_int);
	var_422_int = 0;
	func_1894(var_422_int);
	@@var_413_object:SetNPCDescription(var_422_int);
	var_423_string = "";
	func_1898(var_423_string);
	@@var_413_object:SetPhoto(var_423_string);
	var_424_string = "";
	func_1900(var_424_string);
	@@var_413_object:SetPhoto2(var_424_string);
	var_425_int = 0;
	func_1952(var_425_int);
	@@var_413_object:SetPlayerName(var_425_int);
	IsOverrideActive(var_414_bool);
	var_426_bool = var_414_bool;
	if(var_426_bool != 0) {
		var_406_int = -2;
		return 8;
	}
	DoDialog(var_413_object);
	var_427_bool = 0; var_428_object = Obj();
	func_1747(Obj());
	var_429_object = var_428_object;
	func_1556(var_427_bool, var_428_object);
	var_430_object = Obj(); var_431_object = Obj();
	var_407_object = var_430_object;
	var_413_object = var_431_object;
	TaskCall(7);
	func_1015(var_432_object, var_433_object, var_434_string, var_435_bool, var_430_object, var_431_object);
	TaskReturn();
	@@var_413_object:IsDialogEnd(var_416_bool);
	
Label_997:
	var_460_bool = var_416_bool == 0; //@nz
	if(var_460_bool != 0) {
		sync();
		@@var_413_object:IsDialogEnd(var_416_bool);
		goto Label_997;
	}
	var_407_object = Obj();
	func_1538();
	StopDialog(var_413_object);
	@@var_413_object:GetReturnValue((int)-1);
	var_415_int = var_406_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1320()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0;
	WaitForAnimEnd();
	var_38_bool = 0;
	func_1464(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 12;
	}
	func_1877((int)0);
	var_40_int = var_32_int;
	var_33_int = 0;
	
Label_1334:
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_33_int < (int)5;
	if(var_55_bool != 0) {
		var_56_bool = 0;
		func_1464(var_56_bool);
		if(var_56_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		var_57_bool = var_32_int == 0; //@nz
		if(var_57_bool != 0) {
			Sleep((int)3, var_34_bool);
			var_59_bool = var_34_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
		} else {
				irand(var_35_int, var_32_int);
				irand(var_36_int, (int)5);
				var_65_bool = var_36_int != (int)0;
				if(var_65_bool != 0) {
					var_35_int = 0;
				}
				var_67_string = ""; var_68_int = 0;
				var_35_int = var_68_int;
				func_1870(var_67_string, var_68_int);
				PlayAnimation("all", var_67_string);
				WaitForAnimEnd(var_37_bool);
				var_69_bool = var_37_bool == 0; //@nz
				if(var_69_bool == 0) goto Label_1375;
				goto Label_1386;
		}
		Label_1375:
			var_60_bool = 0;
			func_1389(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_1386;
			}
			ResetAAS();
			var_33_int = var_33_int + (int)1;
			goto Label_1334;

		}
	}
Label_1386:
	ResetAAS();
	return 12;
	
}


func_426(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0;
	var_0_object = var_43_object;
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0;
	var_43_object = var_54_object;
	func_1469(var_53_bool, var_54_object, (float)70.0);
	var_100_bool = var_53_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	CreateDialog(var_49_object);
	var_101_int = 0;
	func_1896(var_101_int);
	@@var_49_object:SetNPCName(var_101_int);
	var_102_int = 0;
	func_1894(var_102_int);
	@@var_49_object:SetNPCDescription(var_102_int);
	var_103_string = "";
	func_1898(var_103_string);
	@@var_49_object:SetPhoto(var_103_string);
	var_104_string = "";
	func_1900(var_104_string);
	@@var_49_object:SetPhoto2(var_104_string);
	var_105_int = 0;
	func_1952(var_105_int);
	@@var_49_object:SetPlayerName(var_105_int);
	IsOverrideActive(var_50_bool);
	var_113_bool = var_50_bool;
	if(var_113_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	DoDialog(var_49_object);
	var_114_bool = 0; var_115_object = Obj();
	func_1747(Obj());
	var_116_object = var_115_object;
	func_1556(var_114_bool, var_115_object);
	var_209_object = Obj(); var_210_object = Obj();
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(3);
	func_507(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	@@var_49_object:IsDialogEnd(var_52_bool);
	
Label_489:
	var_258_bool = var_52_bool == 0; //@nz
	if(var_258_bool != 0) {
		sync();
		@@var_49_object:IsDialogEnd(var_52_bool);
		goto Label_489;
	}
	var_43_object = Obj();
	func_1538();
	StopDialog(var_49_object);
	@@var_49_object:GetReturnValue((int)-1);
	var_51_int = var_42_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1710(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0;
	lshHasAnimation(var_227_bool, var_220_string);
	var_230_bool = var_227_bool;
	if(var_230_bool != 0) {
		lshGetAnimTimes(var_220_string, var_228_float, var_229_float);
		lshPlayAnimation(var_228_float, var_229_float, var_221_bool);
	} else {
		var_232_int = "Can't find lsh animation : " + var_220_string;
		Trace(var_232_int);
	}
	return 6;
	
}


func_1455(var_25_bool, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	@@var_26_object:GetPosition(var_28_cvector);
	var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	var_28_cvector = var_30_cvector;
	func_1445(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
	return 2;
}


func_1200()
{
	var_464_float = 0; var_465_float = 0;
	rand(var_465_float, (int)8, (int)16);
	SetTimer((int)10, var_465_float);
	return 2;
}


func_1073(var_2_object, var_437_string)
{
	var_438_bool = 0;
	func_1902(var_438_bool);
	var_439_bool = var_438_bool == 0; //@nz
	if(var_439_bool != 0) {
		return 0;
	}
	var_440_bool = var_437_string == var_2_object;
	if(var_440_bool != 0) {
		return 0;
	}
	var_441_string = ""; var_442_bool = 0;
	var_437_string = var_441_string;
	var_444_bool = var_437_string == "";
	if(var_444_bool != 0) {
		var_442_bool = 0;
	} else {
		var_442_bool = 1;
	}
	func_1710(var_441_string, var_442_bool);
	var_2_object = var_437_string;
	return 0;
	
}


func_1969(var_39_object)
{
	var_40_bool = GlobalVars[1];
	var_41_bool = var_40_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_42_int = 0; var_43_object = Obj();
		var_39_object = var_43_object;
		TaskCall(2);
		func_426(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_267_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_268_bool = 0; var_269_int = 0;
	func_1864(var_268_bool, (int)2);
	if(var_268_bool != 0) {
		var_271_int = 0; var_272_object = Obj();
		var_39_object = var_272_object;
		TaskCall(0);
		func_0(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	var_345_bool = 0; var_346_int = 0;
	func_1864(var_345_bool, (int)12);
	if(var_345_bool != 0) {
		var_347_int = 0; var_348_object = Obj();
		var_39_object = var_348_object;
		TaskCall(4);
		func_675(var_349_object, var_347_int, var_348_object);
		TaskReturn();
		return 0;
	}
	var_406_int = 0; var_407_object = Obj();
	var_39_object = var_407_object;
	TaskCall(6);
	func_934(var_408_object, var_406_int, var_407_object);
	TaskReturn();
	return 0;
}


func_819(var_2_object, var_378_string)
{
	var_379_bool = 0;
	func_1902(var_379_bool);
	var_380_bool = var_379_bool == 0; //@nz
	if(var_380_bool != 0) {
		return 0;
	}
	var_381_bool = var_378_string == var_2_object;
	if(var_381_bool != 0) {
		return 0;
	}
	var_382_string = ""; var_383_bool = 0;
	var_378_string = var_382_string;
	var_385_bool = var_378_string == "";
	if(var_385_bool != 0) {
		var_383_bool = 0;
	} else {
		var_383_bool = 1;
	}
	func_1710(var_382_string, var_383_bool);
	var_2_object = var_378_string;
	return 0;
	
}


func_565(var_2_object, var_216_string)
{
	var_217_bool = 0;
	func_1902(var_217_bool);
	var_218_bool = var_217_bool == 0; //@nz
	if(var_218_bool != 0) {
		return 0;
	}
	var_219_bool = var_216_string == var_2_object;
	if(var_219_bool != 0) {
		return 0;
	}
	var_220_string = ""; var_221_bool = 0;
	var_216_string = var_220_string;
	var_223_bool = var_216_string == "";
	if(var_223_bool != 0) {
		var_221_bool = 0;
	} else {
		var_221_bool = 1;
	}
	func_1710(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	return 0;
	
}


func_1845(var_42_float)
{
	var_43_object = Obj(); var_44_object = Obj();
	CreateFloatVector(var_44_object);
	@@var_44_object:add(var_42_float);
	SendWorldWndMessage((int)16, var_44_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1464(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0;
	IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
	return 2;
}


func_1209()
{
	KillTimer((int)10);
	return 0;
}


func_1469(var_53_bool, var_54_object, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0;
	@@var_54_object:GetPosition(var_66_cvector);
	@@var_54_object:GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	var_74_float = var_74_float + var_65_float;
	SetByIndex(var_66_cvector, 1) = var_74_float;
	GetPosition(var_67_cvector);
	GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_65_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_77_int = var_68_cvector | var_68_cvector;
	var_78_float = sqrt(var_77_int);
	var_68_cvector = var_68_cvector / var_78_float;
	var_69_cvector = -var_68_cvector;
	var_79_float = var_68_cvector * var_55_float;
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_81_cvector = var_69_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1753(var_80_cvector, var_81_cvector);
	var_89_float = var_80_cvector * (int)25;
	var_90_int = var_79_float + var_89_float;
	var_70_cvector = var_90_int - CVector(0.0, 10.0, 0.0);
	var_71_cvector = var_67_cvector + var_70_cvector;
	IsOverrideActive(var_72_bool);
	var_92_bool = var_72_bool;
	if(var_92_bool != 0) {
		var_53_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_71_cvector, var_69_cvector, (bool)1);
	var_94_float = GetByIndex(var_70_cvector, 0);
	var_95_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_94_float, var_95_float);
	var_96_bool = 0;
	func_1902(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		HasAnimationTrack(var_73_bool, "head");
		var_98_bool = var_73_bool;
		if(var_98_bool == 0) goto Label_1532;
		LookAsyncCamera("head");
	}
Label_1532:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_53_bool = 1;
	return 18;
	
}


func_1725(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0;
	var_152_bool = 0;
	func_1902(var_152_bool);
	if(var_152_bool != 0) {
		lshHasSpeech(var_151_bool, var_149_string);
		var_153_bool = var_151_bool;
		if(var_153_bool != 0) {
			lshPlaySpeech(var_149_string);
			var_148_bool = 1;
			return 2;
		}
	}
	var_148_bool = 0;
	return 2;
}


func_1855(var_169_int)
{
	var_170_float = 0; var_171_float = 0;
	GetGameTime(var_171_float);
	var_173_int = 0;
	var_173_int = var_171_float / (int)24;
	var_169_int = (int)1 + var_173_int;
	return 2;
}


func_1864(var_268_bool, var_269_int)
{
	var_270_int = 0;
	func_1855(var_270_int);
	var_268_bool = var_270_int == var_269_int;
	return 0;
}


func_1740()
{
	var_24_bool = 0;
	func_1902(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1614(var_125_bool, var_126_object)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = "";
	var_132_string = "c";
	var_133_int = 0;
	
Label_1617:
	if((int)1 != 0) {
		var_139_int = var_133_int + (int)1;
		var_140_int = var_132_string + var_139_int;
		@@var_126_object:HasProperty(var_140_int, var_134_bool);
		var_141_bool = var_134_bool == 0; //@nz
		if(var_141_bool != 0) {
		} else {
			var_133_int = var_133_int + (int)1;
			goto Label_1617;
		}
	}
	var_142_bool = var_133_int == 0; //@nz
	if(var_142_bool != 0) {
		var_125_bool = 0;
		return 10;
	}
	var_135_int = 0;
	var_144_bool = var_133_int > (int)1;
	if(var_144_bool != 0) {
		irand(var_135_int, var_133_int);
	}
	var_146_int = var_135_int + (int)1;
	var_147_int = var_132_string + var_146_int;
	@@var_126_object:GetProperty(var_147_int, var_136_string);
	var_148_bool = 0; var_149_string = "";
	var_136_string = var_149_string;
	func_1725(var_148_bool, var_149_string);
	var_148_bool = var_125_bool;
	return 10;
	
}


func_1870(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	var_50_int = var_47_int;
	if(var_50_int != 0) {
		"idle" = "idle" + var_47_int;
	}
	var_49_string = var_46_string;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object;
	var_1_object = var_295_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_302_string = "";
		func_158(var_296_object, "Neutral");
		@@@var_0_object:SetMessage((int)525245);
		@@@var_0_object:ClearReplies();
		var_311_bool = 0;
		var_311_bool = 0;
		var_312_bool = 0; var_313_object = Obj();
		var_313_object = var_1_object;
		func_1928(var_313_object);
		if(var_312_bool != 0) {
			var_320_bool = 0; var_321_object = Obj();
			var_321_object = var_1_object;
			func_1940(var_321_object);
			if(var_320_bool != 0) {
				var_311_bool = 1;
			}
		}
		if(var_311_bool != 0) {
			@@@var_0_object:AddReply((int)525246, (int)44478, (int)26614);
		}
		@@@var_0_object:AddReply((int)525249, (int)-1, (int)26617);
		@@@var_0_object:AddReply((int)529151, (int)-1, (int)30598);
		goto Label_128;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_128:
	var_335_bool = 0;
	func_1902(var_335_bool);
	if(var_335_bool != 0) {

	Label_132:
		lshWaitForAnimEnd();
		var_336_string = var_3_string;
		if(var_336_string != 0) {
		} else {
			var_337_string = "";
			var_337_string = var_2_object;
			func_1694(var_337_string);
			goto Label_132;
	}
		PlayAnimation("all", "idle");

	Label_147:
		WaitForAnimEnd();
		var_340_string = var_3_string;
		if(var_340_string != 0) {
			goto Label_157;
		}
		PlayAnimation("all", "idle");
		goto Label_147;
	}
	goto Label_157;
	
Label_157:
	return 0;
	
}


func_1747(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj();
	self(var_118_object);
	var_118_object = var_116_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1877(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_43_int = 0;
	
Label_1879:
	var_46_string = ""; var_47_int = 0;
	var_43_int = var_47_int;
	func_1870(var_46_string, var_47_int);
	HasAnimation(var_44_bool, "all", var_46_string);
	var_51_bool = var_44_bool == 0; //@nz
	if(var_51_bool != 0) {
	} else {
		var_43_int = var_43_int + (int)1;
		goto Label_1879;
	}
	var_43_int = var_40_int;
	return 4;
	
}


func_1753(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0;
	var_85_int = var_81_cvector | var_81_cvector;
	var_84_float = sqrt(var_85_int);
	var_86_float = 9.999999974752427e-07;
	var_87_bool = var_84_float < var_86_float;
	if(var_87_bool != 0) {
		var_80_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_80_cvector = var_81_cvector / var_84_float;
	return 2;
}


func_1763(var_64_float, var_65_float, var_66_float, var_67_float)
{
	var_68_bool = var_65_float < var_66_float;
	if(var_68_bool != 0) {
		var_66_float = var_64_float;
		return 0;
	}
	var_69_bool = var_65_float > var_67_float;
	if(var_69_bool != 0) {
		var_67_float = var_64_float;
		return 0;
	}
	var_65_float = var_64_float;
	return 0;
}


func_1894(var_102_int)
{
	var_102_int = 515531;
	return 0;
}


func_1896(var_101_int)
{
	var_101_int = 502857;
	return 0;
}


func_1898(var_103_string)
{
	var_103_string = "ui/NPC_BigVlad.png";
	return 0;
}


func_1900(var_104_string)
{
	var_104_string = "ui/NPC_BigVlad_b.png";
	return 0;
}


func_1389(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_1902(var_96_bool)
{
	var_96_bool = 1;
	return 0;
}


func_1391()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1904(var_33_object)
{
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0;
	var_33_object = var_36_object;
	func_1810(var_35_bool, var_36_object, (float)0.019999999552965164);
	return 0;
}


func_1774(var_314_int, var_315_string)
{
	var_316_int = 0; var_317_int = 0;
	GetVariable(var_315_string, var_317_int);
	var_317_int = var_314_int;
	return 2;
}


func_1651(var_156_bool, var_157_object)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = "";
	var_169_int = 0;
	func_1855(var_169_int);
	var_175_int = "d" + var_169_int;
	var_163_string = var_175_int + "m";
	var_164_int = 0;
	
Label_1660:
	if((int)1 != 0) {
		var_179_int = var_164_int + (int)1;
		var_180_int = var_163_string + var_179_int;
		@@var_157_object:HasProperty(var_180_int, var_165_bool);
		var_181_bool = var_165_bool == 0; //@nz
		if(var_181_bool != 0) {
		} else {
			var_164_int = var_164_int + (int)1;
			goto Label_1660;
		}
	}
	var_182_bool = var_164_int == 0; //@nz
	if(var_182_bool != 0) {
		var_156_bool = 0;
		return 10;
	}
	var_166_int = 0;
	var_184_bool = var_164_int > (int)1;
	if(var_184_bool != 0) {
		irand(var_166_int, var_164_int);
	}
	var_186_int = var_166_int + (int)1;
	var_187_int = var_163_string + var_186_int;
	@@var_157_object:GetProperty(var_187_int, var_167_string);
	var_188_bool = 0; var_189_string = "";
	var_167_string = var_189_string;
	func_1725(var_188_bool, var_189_string);
	var_188_bool = var_156_bool;
	return 10;
	
}


func_756(var_0_object, var_1_object, var_2_object, var_3_string, var_371_object, var_372_object)
{
	var_0_object = var_372_object;
	var_1_object = var_371_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_378_string = "";
		func_819(var_372_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_789;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2f8";
	}
Label_789:
	var_396_bool = 0;
	func_1902(var_396_bool);
	if(var_396_bool != 0) {

	Label_793:
		lshWaitForAnimEnd();
		var_397_string = var_3_string;
		if(var_397_string != 0) {
		} else {
			var_398_string = "";
			var_398_string = var_2_object;
			func_1694(var_398_string);
			goto Label_793;
	}
		PlayAnimation("all", "idle");

	Label_808:
		WaitForAnimEnd();
		var_401_string = var_3_string;
		if(var_401_string != 0) {
			goto Label_818;
		}
		PlayAnimation("all", "idle");
		goto Label_808;
	}
	goto Label_818;
	
Label_818:
	return 0;
	
}


func_1396(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1779(var_94_int, var_95_int)
{
	var_96_object = Obj(); var_97_object = Obj();
	CreateIntVector(var_97_object);
	@@var_97_object:add(var_94_int);
	@@var_97_object:add(var_95_int);
	SendWorldWndMessage((int)3, var_97_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1015(var_0_object, var_1_object, var_2_object, var_3_string, var_430_object, var_431_object)
{
	var_0_object = var_431_object;
	var_1_object = var_430_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_437_string = "";
		func_1073(var_431_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_1043;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3fb";
	}
Label_1043:
	var_452_bool = 0;
	func_1902(var_452_bool);
	if(var_452_bool != 0) {

	Label_1047:
		lshWaitForAnimEnd();
		var_453_string = var_3_string;
		if(var_453_string != 0) {
		} else {
			var_454_string = "";
			var_454_string = var_2_object;
			func_1694(var_454_string);
			goto Label_1047;
	}
		PlayAnimation("all", "idle");

	Label_1062:
		WaitForAnimEnd();
		var_457_string = var_3_string;
		if(var_457_string != 0) {
			goto Label_1072;
		}
		PlayAnimation("all", "idle");
		goto Label_1062;
	}
	goto Label_1072;
	
Label_1072:
	return 0;
	
}


func_1144(var_0_object)
{
	var_22_bool = 0;
	func_1464(var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1153:
	func_1320();
	goto Label_1153;
}
EMIT "Return(); Pop(0)";


func_507(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_216_string = "";
		func_565(var_210_object, "Neutral");
		@@@var_0_object:SetMessage((int)525468);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525469, (int)30746, (int)26825);
		@@@var_0_object:AddReply((int)542158, (int)44475, (int)44474);
		goto Label_535;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1ff";
	}
Label_535:
	var_240_bool = 0;
	func_1902(var_240_bool);
	if(var_240_bool != 0) {

	Label_539:
		lshWaitForAnimEnd();
		var_241_string = var_3_string;
		if(var_241_string != 0) {
		} else {
			var_242_string = "";
			var_242_string = var_2_object;
			func_1694(var_242_string);
			goto Label_539;
	}
		PlayAnimation("all", "idle");

	Label_554:
		WaitForAnimEnd();
		var_255_string = var_3_string;
		if(var_255_string != 0) {
			goto Label_564;
		}
		PlayAnimation("all", "idle");
		goto Label_554;
	}
	goto Label_564;
	
Label_564:
	return 0;
	
}


func_1404(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0;
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", (int)2);
	var_62_bool = var_61_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	@@var_55_object:HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
	return 2;
}


func_1791(var_80_object, var_81_int)
{
	var_83_int = 0; var_84_int = 0;
	var_85_object = Obj(); var_86_string = ""; var_87_int = 0;
	var_80_object = var_85_object;
	var_81_int = var_87_int;
	func_1438(var_85_object, "money", var_87_int);
	var_92_bool = var_81_int > (int)0;
	if(var_92_bool != 0) {
		GetInvItemByName(var_84_int, "Money");
		var_94_int = 0; var_95_int = 0;
		var_84_int = var_94_int;
		var_81_int = var_95_int;
		func_1779(var_94_int, var_95_int);
	}
	return 2;
}


