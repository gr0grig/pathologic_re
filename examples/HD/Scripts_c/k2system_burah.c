// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetProperty/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Burah.png|W:ui/NPC_Burah_b.png|W:beta_pills 5 is given|W:beta_pills|W:playsound|W:giveitem|W:burah_serum is given|W:burah_serum|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:klara2_npc_positioner|W:remove_danko|W:remove_burah|W:k2system_klara_day|W:k2system_burah_day|W:k2system_danko_day|W:k2system_burah_state|W:k2system_danko_state|W:k2system_klara_state
// @GLOBALS: 0:object:
// @RUN_OP: 0x305
// @RUN_TASK: 4
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1ab vars=int,int
// @TASK_4: vars=cvector,bool params=0
// @EVENT_26: op=0x30d vars=string
// @EVENT_6: op=0x321 vars=
// @EVENT_5: op=0x32e vars=
// @EVENT_7: op=0x377 vars=int
// @EVENT_45: op=0x3b9 vars=bool
// @EVENT_0: op=0x3c5 vars=object
// @PE: 0x51,0x8b,0xa1,0x133,0x195,0x1ab,0x305,0x309,0x32e,0x377,0x39d,0x3b9,0x596,0x5cd,0x631,0x638,0x63f,0x64a,0x650,0x65b,0x660,0x665,0x66a,0x66f,0x674,0x679,0x680,0x68a,0x694,0x69e,0x6a4,0x6aa,0x76e,0x77c,0x784

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_bool)
{
	if((int)1 != 0) {
		func_1407();
		var_17_bool = var_12_cvector == (int)41008;
		if(var_17_bool != 0) {
			var_18_string = "";
			func_139(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539060);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539061, (int)43176, (int)41009);
			@@@var_0_object:AddReply((int)541070, (int)-1, (int)43175);
			return 0;
		}
		var_43_bool = var_12_cvector == (int)43176;
		if(var_43_bool != 0) {
			var_44_string = "";
			func_139(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541072, (int)-1, (int)43177);
			@@@var_0_object:AddReply((int)541073, (int)-1, (int)43178);
			return 0;
		}
		var_3_string = true;
		var_52_bool = 0;
		func_1583(var_52_bool);
		if(var_52_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_cvector, var_13_bool)
{
	if((int)1 != 0) {
		func_1407();
		var_17_bool = var_13_bool == (int)41701;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1627();
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_1647();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_1585(var_61_object);
		}
		var_101_bool = var_13_bool == (int)41704;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_1632();
		}
		var_114_bool = var_13_bool == (int)41707;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_1637();
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_1647();
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_1652();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_1592(var_142_object);
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_1599(var_147_object);
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_1610();
		}
		var_175_bool = var_13_bool == (int)41710;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_1642();
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_1616(var_188_object);
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_1610();
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_1657(var_196_object);
		}
		var_201_bool = var_12_cvector == (int)41011;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539063);
			@@@var_0_object:ClearReplies();
			var_220_bool = 0; var_221_object = Obj();
			var_221_object = var_1_object;
			func_1664(var_220_bool, var_221_object);
			if(var_220_bool != 0) {
				@@@var_0_object:AddReply((int)539064, (int)41700, (int)41012);
			}
			var_237_bool = 0; var_238_object = Obj();
			var_238_object = var_1_object;
			func_1664(var_237_bool, var_238_object);
			if(var_237_bool != 0) {
				@@@var_0_object:AddReply((int)539750, (int)41703, (int)41702);
			}
			var_242_bool = 0; var_243_object = Obj();
			var_243_object = var_1_object;
			func_1674(var_242_bool, var_243_object);
			if(var_242_bool != 0) {
				@@@var_0_object:AddReply((int)539753, (int)41706, (int)41705);
			}
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_1684(var_259_bool, var_260_object);
			if(var_259_bool != 0) {
				@@@var_0_object:AddReply((int)539756, (int)41709, (int)41708);
			}
			@@@var_0_object:AddReply((int)539759, (int)-1, (int)41711);
			@@@var_0_object:AddReply((int)541075, (int)-1, (int)43180);
			return 0;
		}
		var_283_bool = var_12_cvector == (int)41709;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539758, (int)-1, (int)41710);
			return 0;
		}
		var_290_bool = var_12_cvector == (int)41706;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539754);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541088, (int)43197, (int)43196);
			@@@var_0_object:AddReply((int)541090, (int)43197, (int)43198);
			return 0;
		}
		var_300_bool = var_12_cvector == (int)43197;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539755, (int)-1, (int)41707);
			return 0;
		}
		var_307_bool = var_12_cvector == (int)41703;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541077, (int)43183, (int)43182);
			return 0;
		}
		var_314_bool = var_12_cvector == (int)43183;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541078);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541085, (int)43194, (int)43192);
			@@@var_0_object:AddReply((int)541086, (int)43194, (int)43193);
			return 0;
		}
		var_324_bool = var_12_cvector == (int)43194;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539752, (int)-1, (int)41704);
			return 0;
		}
		var_331_bool = var_12_cvector == (int)41700;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541079, (int)43186, (int)43184);
			@@@var_0_object:AddReply((int)541080, (int)43186, (int)43185);
			return 0;
		}
		var_341_bool = var_12_cvector == (int)43186;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541082, (int)43189, (int)43187);
			@@@var_0_object:AddReply((int)541083, (int)43189, (int)43188);
			return 0;
		}
		var_351_bool = var_12_cvector == (int)43189;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_405(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539749, (int)-1, (int)41701);
			return 0;
		}
		var_3_string = true;
		var_357_bool = 0;
		func_1583(var_357_bool);
		if(var_357_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1ac";
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0;
	var_16_bool = var_12_string == "cleanup";
	if(var_16_bool != 0) {
		var_1_object = true;
		IsLoaded(var_14_bool);
		var_17_bool = var_14_bool == 0; //@nz
		if(var_17_bool != 0) {
			var_18_object = Obj();
			func_1414(var_18_object);
			RemoveActor(var_18_object);
		}
	} else {
		var_22_bool = var_12_string == "restore";
		if(var_22_bool == 0) goto Label_800;
		var_1_object = false;
	}
Label_800:
	return 2;
	
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	var_12_object = var_1_object;
	if(var_12_object != 0) {
		var_13_object = Obj();
		func_1414(var_13_object);
		RemoveActor(var_13_object);
		Hold();
	}
	func_925();
	return 0;
}


task_4_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	func_940();
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		func_883();
		var_16_bool = 0;
		var_16_bool = 0;
		var_17_bool = 0;
		func_1131(var_17_bool);
		if(var_17_bool != 0) {
			var_20_bool = 0;
			func_852(var_20_bool);
			if(var_20_bool != 0) {
				var_16_bool = 1;
			}
		}
		if(var_16_bool != 0) {
			var_37_bool = 0;
			func_832(var_37_bool);
			if(var_37_bool != 0) {
				var_56_bool = 0; var_57_object = Obj();
				func_1414(Obj());
				var_58_object = var_57_object;
				func_1281(var_56_bool, var_57_object);
			}
		} else {
			func_847(var_12_int);
			func_874();
		}
	}
	return 0;
	
}


task_4_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_bool)
{
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		func_874();
	} else {
		var_19_string = "";
		func_1361("Neutral");
	}
	return 0;
	
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	IsOverrideActive(var_14_bool);
	var_15_bool = var_14_bool == 0; //@nz
	if(var_15_bool != 0) {
		EventDisable(0);
		func_1065();
		var_16_bool = 0; var_17_object = Obj();
		var_12_object = var_17_object;
		func_1122(var_16_bool, var_17_object);
		EventEnable(0);
		var_30_object = Obj();
		var_12_object = var_30_object;
		func_1949(var_30_object);
		var_382_string = "";
		func_1361("Neutral");
		func_883();
		func_874();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	func_777();
	return 0;
}


func_0(var_0_object, var_326_int, var_327_object)
{
	var_329_object = Obj(); var_330_bool = 0; var_331_int = 0; var_332_bool = 0; var_333_object = Obj(); var_334_bool = 0; var_335_int = 0; var_336_bool = 0;
	var_0_object = var_327_object;
	var_337_bool = 0; var_338_object = Obj(); var_339_float = 0;
	var_327_object = var_338_object;
	func_1136(var_337_bool, var_338_object, (float)70.0);
	var_340_bool = var_337_bool == 0; //@nz
	if(var_340_bool != 0) {
		var_326_int = -2;
		return 8;
	}
	CreateDialog(var_333_object);
	var_341_int = 0;
	func_1577(var_341_int);
	@@var_333_object:SetNPCName(var_341_int);
	var_342_int = 0;
	func_1575(var_342_int);
	@@var_333_object:SetNPCDescription(var_342_int);
	var_343_string = "";
	func_1579(var_343_string);
	@@var_333_object:SetPhoto(var_343_string);
	var_344_string = "";
	func_1581(var_344_string);
	@@var_333_object:SetPhoto2(var_344_string);
	var_345_int = 0;
	func_1792(var_345_int);
	@@var_333_object:SetPlayerName(var_345_int);
	IsOverrideActive(var_334_bool);
	var_346_bool = var_334_bool;
	if(var_346_bool != 0) {
		var_326_int = -2;
		return 8;
	}
	DoDialog(var_333_object);
	var_347_bool = 0; var_348_object = Obj();
	func_1414(Obj());
	var_349_object = var_348_object;
	func_1223(var_347_bool, var_348_object);
	var_350_object = Obj(); var_351_object = Obj();
	var_327_object = var_350_object;
	var_333_object = var_351_object;
	TaskCall(1);
	func_81(var_352_object, var_353_object, var_354_string, var_355_bool, var_350_object, var_351_object);
	TaskReturn();
	@@var_333_object:IsDialogEnd(var_336_bool);
	
Label_63:
	var_380_bool = var_336_bool == 0; //@nz
	if(var_380_bool != 0) {
		sync();
		@@var_333_object:IsDialogEnd(var_336_bool);
		goto Label_63;
	}
	var_327_object = Obj();
	func_1205();
	StopDialog(var_333_object);
	@@var_333_object:GetReturnValue((int)-1);
	var_335_int = var_326_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1792(var_104_int)
{
	var_105_int = 0; var_106_int = 0;
	GetVariable("branch", var_106_int);
	var_109_bool = var_106_int == (int)0;
	if(var_109_bool != 0) {
		var_104_int = 1;
		return 2;
	EMIT "GOTO 0x70f";
	}
	var_111_bool = var_106_int == (int)1;
	if(var_111_bool != 0) {
		var_104_int = 2;
		return 2;
	}
	var_104_int = 3;
	return 2;
}


func_1281(var_124_bool, var_125_object)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = "";
	var_131_string = "c";
	var_132_int = 0;
	
Label_1284:
	if((int)1 != 0) {
		var_138_int = var_132_int + (int)1;
		var_139_int = var_131_string + var_138_int;
		@@var_125_object:HasProperty(var_139_int, var_133_bool);
		var_140_bool = var_133_bool == 0; //@nz
		if(var_140_bool != 0) {
		} else {
			var_132_int = var_132_int + (int)1;
			goto Label_1284;
		}
	}
	var_141_bool = var_132_int == 0; //@nz
	if(var_141_bool != 0) {
		var_124_bool = 0;
		return 10;
	}
	var_134_int = 0;
	var_143_bool = var_132_int > (int)1;
	if(var_143_bool != 0) {
		irand(var_134_int, var_132_int);
	}
	var_145_int = var_134_int + (int)1;
	var_146_int = var_131_string + var_145_int;
	@@var_125_object:GetProperty(var_146_int, var_135_string);
	var_147_bool = 0; var_148_string = "";
	var_135_string = var_148_string;
	func_1392(var_147_bool, var_148_string);
	var_147_bool = var_124_bool;
	return 10;
	
}


func_1542(var_34_int)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_38_int = 0;
	var_38_int = var_36_float / (int)24;
	var_34_int = (int)1 + var_38_int;
	return 2;
}


func_777()
{
	func_818(var_11_bool);
	return 0;
}


func_1551(var_36_string, var_37_int)
{
	var_38_string = ""; var_39_string = "";
	var_40_int = var_37_int;
	if(var_40_int != 0) {
		"idle" = "idle" + var_37_int;
	}
	var_39_string = var_36_string;
	return 2;
}


func_1809()
{
	var_138_bool = 0; var_139_string = ""; var_140_string = "";
	func_1530(var_138_bool, "klara2_npc_positioner", "remove_danko");
	return 0;
}


func_1558(var_30_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_33_int = 0;
	
Label_1560:
	var_36_string = ""; var_37_int = 0;
	var_33_int = var_37_int;
	func_1551(var_36_string, var_37_int);
	HasAnimation(var_34_bool, "all", var_36_string);
	var_41_bool = var_34_bool == 0; //@nz
	if(var_41_bool != 0) {
	} else {
		var_33_int = var_33_int + (int)1;
		goto Label_1560;
	}
	var_33_int = var_30_int;
	return 4;
	
}


func_1815()
{
	var_54_bool = 0; var_55_string = ""; var_56_string = "";
	func_1530(var_54_bool, "klara2_npc_positioner", "remove_burah");
	return 0;
}


func_1821(var_283_int)
{
	var_284_int = 0; var_285_int = 0;
	GetVariable("k2system_klara_day", var_285_int);
	var_285_int = var_283_int;
	return 2;
}


func_1827(var_238_int)
{
	var_239_int = 0; var_240_int = 0;
	GetVariable("k2system_burah_day", var_240_int);
	var_240_int = var_238_int;
	return 2;
}


func_1318(var_155_bool, var_156_object)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = "";
	var_168_int = 0;
	func_1542(var_168_int);
	var_169_int = "d" + var_168_int;
	var_162_string = var_169_int + "m";
	var_163_int = 0;
	
Label_1327:
	if((int)1 != 0) {
		var_173_int = var_163_int + (int)1;
		var_174_int = var_162_string + var_173_int;
		@@var_156_object:HasProperty(var_174_int, var_164_bool);
		var_175_bool = var_164_bool == 0; //@nz
		if(var_175_bool != 0) {
		} else {
			var_163_int = var_163_int + (int)1;
			goto Label_1327;
		}
	}
	var_176_bool = var_163_int == 0; //@nz
	if(var_176_bool != 0) {
		var_155_bool = 0;
		return 10;
	}
	var_165_int = 0;
	var_178_bool = var_163_int > (int)1;
	if(var_178_bool != 0) {
		irand(var_165_int, var_163_int);
	}
	var_180_int = var_165_int + (int)1;
	var_181_int = var_162_string + var_180_int;
	@@var_156_object:GetProperty(var_181_int, var_166_string);
	var_182_bool = 0; var_183_string = "";
	var_166_string = var_183_string;
	func_1392(var_182_bool, var_183_string);
	var_182_bool = var_155_bool;
	return 10;
	
}


func_1575(var_101_int)
{
	var_101_int = 515592;
	return 0;
}


func_1063(var_50_bool)
{
	var_50_bool = 1;
	return 0;
}


func_1577(var_100_int)
{
	var_100_int = 511961;
	return 0;
}


func_1065()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1579(var_102_string)
{
	var_102_string = "ui/NPC_Burah.png";
	return 0;
}


func_1833(var_263_int)
{
	var_264_int = 0; var_265_int = 0;
	GetVariable("k2system_danko_day", var_265_int);
	var_265_int = var_263_int;
	return 2;
}


func_1581(var_103_string)
{
	var_103_string = "ui/NPC_Burah_b.png";
	return 0;
}


func_1070(var_27_float, var_28_object)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0);
	GetPosition(var_32_cvector);
	@@var_28_object:GetPosition(var_33_cvector);
	var_34_cvector = var_33_cvector - var_32_cvector;
	var_27_float = var_34_cvector | var_34_cvector;
	return 6;
}


func_1583(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_1839(var_233_int)
{
	var_234_int = 0; var_235_int = 0; var_236_int = 0; var_237_int = 0;
	func_1827((int)0);
	var_238_int = var_236_int;
	var_243_int = "k2system_burah_state" + var_236_int;
	GetVariable(var_243_int, var_237_int);
	var_237_int = var_233_int;
	return 4;
}


func_1585(var_60_object)
{
	var_62_bool = 0; var_63_object = Obj(); var_64_float = 0;
	var_60_object = var_63_object;
	func_1485(var_62_bool, var_63_object, (float)0.05000000074505806);
	return 0;
}


func_818(var_0_object)
{
	var_12_bool = 0;
	func_1131(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_827:
	func_994();
	goto Label_827;
}
EMIT "Return(); Pop(0)";


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_203_object, var_204_object)
{
	var_0_object = var_204_object;
	var_1_object = var_203_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_210_string = "";
		func_405(var_204_object, "Neutral");
		@@@var_0_object:SetMessage((int)539063);
		@@@var_0_object:ClearReplies();
		var_228_bool = 0; var_229_object = Obj();
		var_229_object = var_1_object;
		func_1664(var_228_bool, var_229_object);
		if(var_228_bool != 0) {
			@@@var_0_object:AddReply((int)539064, (int)41700, (int)41012);
		}
		var_248_bool = 0; var_249_object = Obj();
		var_249_object = var_1_object;
		func_1664(var_248_bool, var_249_object);
		if(var_248_bool != 0) {
			@@@var_0_object:AddReply((int)539750, (int)41703, (int)41702);
		}
		var_253_bool = 0; var_254_object = Obj();
		var_254_object = var_1_object;
		func_1674(var_253_bool, var_254_object);
		if(var_253_bool != 0) {
			@@@var_0_object:AddReply((int)539753, (int)41706, (int)41705);
		}
		var_273_bool = 0; var_274_object = Obj();
		var_274_object = var_1_object;
		func_1684(var_273_bool, var_274_object);
		if(var_273_bool != 0) {
			@@@var_0_object:AddReply((int)539756, (int)41709, (int)41708);
		}
		@@@var_0_object:AddReply((int)539759, (int)-1, (int)41711);
		@@@var_0_object:AddReply((int)541075, (int)-1, (int)43180);
		goto Label_375;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x137";
	}
Label_375:
	var_299_bool = 0;
	func_1583(var_299_bool);
	if(var_299_bool != 0) {

	Label_379:
		lshWaitForAnimEnd();
		var_300_string = var_3_string;
		if(var_300_string != 0) {
		} else {
			var_301_string = "";
			var_301_string = var_2_object;
			func_1361(var_301_string);
			goto Label_379;
	}
		PlayAnimation("all", "idle");

	Label_394:
		WaitForAnimEnd();
		var_314_string = var_3_string;
		if(var_314_string != 0) {
			goto Label_404;
		}
		PlayAnimation("all", "idle");
		goto Label_394;
	}
	goto Label_404;
	
Label_404:
	return 0;
	
}


func_1078(var_81_bool, var_82_object, var_83_string)
{
	var_84_bool = 0; var_85_bool = 0;
	var_88_bool = IsFuncExist(var_82_object, "HasProperty", (int)2);
	var_89_bool = var_88_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_81_bool = 0;
		return 2;
	}
	@@var_82_object:HasProperty(var_83_string, var_85_bool);
	var_85_bool = var_81_bool;
	return 2;
}


func_1592(var_141_object)
{
	var_143_bool = 0; var_144_object = Obj(); var_145_float = 0;
	var_141_object = var_144_object;
	func_1485(var_143_bool, var_144_object, (float)-0.05000000074505806);
	return 0;
}


func_1850(var_43_int)
{
	var_44_int = 0; var_45_int = 0;
	func_1827((int)0);
	var_46_int = var_45_int;
	var_51_int = "k2system_burah_state" + var_45_int;
	SetVariable(var_51_int, var_43_int);
	return 2;
}


func_1599(var_146_object)
{
	Trace("beta_pills 5 is given");
	var_149_object = Obj(); var_150_string = ""; var_151_int = 0;
	var_146_object = var_149_object;
	func_1472(var_149_object, "beta_pills", (int)5);
	return 0;
}


func_832(var_37_bool)
{
	var_38_object = Obj(); var_39_object = Obj();
	FindActor(var_39_object, "player");
	var_41_bool = var_39_object == 0; //@nz
	if(var_41_bool != 0) {
		var_37_bool = 0;
		return 2;
	}
	var_42_bool = 0; var_43_object = Obj();
	var_39_object = var_43_object;
	func_1122(var_42_bool, var_43_object);
	var_42_bool = var_37_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1090(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float)
{
	var_79_float = 0; var_80_float = 0;
	var_81_bool = 0; var_82_object = Obj(); var_83_string = "";
	var_74_object = var_82_object;
	var_75_string = var_83_string;
	func_1078(var_81_bool, var_82_object, var_83_string);
	var_90_bool = var_81_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_73_bool = 0;
		return 2;
	}
	@@var_74_object:GetProperty(var_75_string, var_80_float);
	var_91_float = 0; var_92_float = 0; var_93_float = 0; var_94_float = 0;
	var_92_float = var_80_float + var_76_float;
	var_77_float = var_93_float;
	var_78_float = var_94_float;
	func_1430(var_91_float, var_92_float, var_93_float, var_94_float);
	@@var_74_object:SetProperty(var_75_string, var_91_float);
	var_73_bool = 1;
	return 2;
}


func_1860(var_258_int)
{
	var_259_int = 0; var_260_int = 0; var_261_int = 0; var_262_int = 0;
	func_1833((int)0);
	var_263_int = var_261_int;
	var_268_int = "k2system_danko_state" + var_261_int;
	GetVariable(var_268_int, var_262_int);
	var_262_int = var_258_int;
	return 4;
}


func_1610()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_847(var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0);
	var_90_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_89_float, var_90_float);
	return 0;
}


func_1616(var_187_object)
{
	Trace("burah_serum is given");
	var_190_object = Obj(); var_191_string = ""; var_192_int = 0;
	var_187_object = var_190_object;
	func_1472(var_190_object, "burah_serum", (int)1);
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_350_object, var_351_object)
{
	var_0_object = var_351_object;
	var_1_object = var_350_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_357_string = "";
		func_139(var_351_object, "Neutral");
		@@@var_0_object:SetMessage((int)539060);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)539061, (int)43176, (int)41009);
		@@@var_0_object:AddReply((int)541070, (int)-1, (int)43175);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_372_bool = 0;
	func_1583(var_372_bool);
	if(var_372_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_373_string = var_3_string;
		if(var_373_string != 0) {
		} else {
			var_374_string = "";
			var_374_string = var_2_object;
			func_1361(var_374_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_377_string = var_3_string;
		if(var_377_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_1871(var_125_int)
{
	var_126_int = 0; var_127_int = 0;
	func_1833((int)0);
	var_128_int = var_127_int;
	var_133_int = "k2system_danko_state" + var_127_int;
	SetVariable(var_133_int, var_125_int);
	return 2;
}


func_1361(var_301_string)
{
	var_302_bool = 0; var_303_float = 0; var_304_float = 0; var_305_bool = 0; var_306_float = 0; var_307_float = 0;
	lshHasAnimation(var_305_bool, var_301_string);
	var_308_bool = var_305_bool;
	if(var_308_bool != 0) {
		lshGetAnimTimes(var_301_string, var_306_float, var_307_float);
		lshPlayAnimation(var_306_float, var_307_float, (bool)0);
	} else {
		var_311_int = "Can't find lsh animation : " + var_301_string;
		Trace(var_311_int);
	}
	return 6;
	
}


func_852(var_20_bool)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0;
	FindActor(var_23_object, "player");
	var_26_bool = var_23_object == 0; //@nz
	if(var_26_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	var_27_float = 0; var_28_object = Obj();
	var_23_object = var_28_object;
	func_1070(var_27_float, var_28_object);
	var_36_bool = var_27_float > (float)90000.0;
	if(var_36_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	CanSee(var_24_bool, var_23_object);
	var_24_bool = var_20_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1112(var_20_bool, var_21_cvector)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0;
	GetPosition(var_25_cvector);
	var_26_cvector = var_21_cvector - var_25_cvector;
	var_28_float = GetByIndex(var_26_cvector, 0);
	var_29_float = GetByIndex(var_26_cvector, 2);
	Rotate(var_28_float, var_29_float, var_27_bool);
	var_27_bool = var_20_bool;
	return 6;
}


func_1881(var_278_int)
{
	var_279_int = 0; var_280_int = 0; var_281_int = 0; var_282_int = 0;
	func_1821((int)0);
	var_283_int = var_281_int;
	var_288_int = "k2system_klara_state" + var_281_int;
	GetVariable(var_288_int, var_282_int);
	var_282_int = var_278_int;
	return 4;
}


func_1627()
{
	func_1916();
	return 0;
}


func_1632()
{
	func_1924();
	return 0;
}


func_1377(var_214_string, var_215_bool)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0;
	lshHasAnimation(var_221_bool, var_214_string);
	var_224_bool = var_221_bool;
	if(var_224_bool != 0) {
		lshGetAnimTimes(var_214_string, var_222_float, var_223_float);
		lshPlayAnimation(var_222_float, var_223_float, var_215_bool);
	} else {
		var_226_int = "Can't find lsh animation : " + var_214_string;
		Trace(var_226_int);
	}
	return 6;
	
}


func_1122(var_16_bool, var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	@@var_17_object:GetPosition(var_19_cvector);
	var_20_bool = 0; var_21_cvector = CVector(0,0,0);
	var_19_cvector = var_21_cvector;
	func_1112(var_20_bool, var_21_cvector);
	var_20_bool = var_16_bool;
	return 2;
}


func_1892(var_178_int)
{
	var_179_int = 0; var_180_int = 0;
	func_1821((int)0);
	var_181_int = var_180_int;
	var_186_int = "k2system_klara_state" + var_180_int;
	SetVariable(var_186_int, var_178_int);
	return 2;
}


func_1637()
{
	func_1902();
	return 0;
}


func_1642()
{
	func_1944();
	return 0;
}


func_1131(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_874()
{
	var_384_float = 0; var_385_float = 0;
	rand(var_385_float, (int)8, (int)16);
	SetTimer((int)10, var_385_float);
	return 2;
}


func_1902()
{
	func_1738();
	var_125_int = 0;
	func_1871((int)3);
	return 0;
}


func_1647()
{
	func_1815();
	return 0;
}


func_1136(var_52_bool, var_53_object, var_54_float)
{
	var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_bool = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0;
	@@var_53_object:GetPosition(var_65_cvector);
	@@var_53_object:GetEyesHeight(var_64_float);
	var_73_float = GetByIndex(var_65_cvector, 1);
	var_73_float = var_73_float + var_64_float;
	SetByIndex(var_65_cvector, 1) = var_73_float;
	GetPosition(var_66_cvector);
	GetEyesHeight(var_64_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	var_74_float = var_74_float + var_64_float;
	SetByIndex(var_66_cvector, 1) = var_74_float;
	var_67_cvector = var_65_cvector - var_66_cvector;
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (float)0;
	var_76_int = var_67_cvector | var_67_cvector;
	var_77_float = sqrt(var_76_int);
	var_67_cvector = var_67_cvector / var_77_float;
	var_68_cvector = -var_67_cvector;
	var_78_float = var_67_cvector * var_54_float;
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0);
	var_80_cvector = var_68_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1420(var_79_cvector, var_80_cvector);
	var_88_float = var_79_cvector * (int)25;
	var_89_int = var_78_float + var_88_float;
	var_69_cvector = var_89_int - CVector(0.0, 10.0, 0.0);
	var_70_cvector = var_66_cvector + var_69_cvector;
	IsOverrideActive(var_71_bool);
	var_91_bool = var_71_bool;
	if(var_91_bool != 0) {
		var_52_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_70_cvector, var_68_cvector, (bool)1);
	var_93_float = GetByIndex(var_69_cvector, 0);
	var_94_float = GetByIndex(var_69_cvector, 2);
	Rotate(var_93_float, var_94_float);
	var_95_bool = 0;
	func_1583(var_95_bool);
	if(var_95_bool != 0) {
	} else {
		HasAnimationTrack(var_72_bool, "head");
		var_97_bool = var_72_bool;
		if(var_97_bool == 0) goto Label_1199;
		LookAsyncCamera("head");
	}
Label_1199:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_52_bool = 1;
	return 18;
	
}


func_1392(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0;
	var_151_bool = 0;
	func_1583(var_151_bool);
	if(var_151_bool != 0) {
		lshHasSpeech(var_150_bool, var_148_string);
		var_152_bool = var_150_bool;
		if(var_152_bool != 0) {
			lshPlaySpeech(var_148_string);
			var_147_bool = 1;
			return 2;
		}
	}
	var_147_bool = 0;
	return 2;
}


func_883()
{
	KillTimer((int)10);
	return 0;
}


func_1652()
{
	func_1809();
	return 0;
}


func_1910(var_257_bool)
{
	var_258_int = 0;
	func_1860(var_258_int);
	var_257_bool = var_258_int == (int)1;
	return 0;
}


func_1657(var_195_object)
{
	var_197_bool = 0; var_198_object = Obj(); var_199_float = 0;
	var_195_object = var_198_object;
	func_1485(var_197_bool, var_198_object, (float)-0.30000001192092896);
	return 0;
}


func_1916()
{
	func_1712();
	var_43_int = 0;
	func_1850((int)2);
	return 0;
}


func_1407()
{
	var_15_bool = 0;
	func_1583(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1664(var_228_bool, var_229_object)
{
	var_230_bool = 0; var_231_object = Obj();
	var_229_object = var_231_object;
	func_1694(var_231_object);
	if(var_230_bool != 0) {
		var_228_bool = 1;
		return 0;
	}
	var_228_bool = 0;
	return 0;
}


func_1924()
{
	func_1725();
	var_112_int = 0;
	func_1850((int)1);
	return 0;
}


func_1414(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj();
	self(var_117_object);
	var_117_object = var_115_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1674(var_253_bool, var_254_object)
{
	var_255_bool = 0; var_256_object = Obj();
	var_254_object = var_256_object;
	func_1700(var_256_object);
	if(var_255_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_139(var_2_object, var_357_string)
{
	var_358_bool = 0;
	func_1583(var_358_bool);
	var_359_bool = var_358_bool == 0; //@nz
	if(var_359_bool != 0) {
		return 0;
	}
	var_360_bool = var_357_string == var_2_object;
	if(var_360_bool != 0) {
		return 0;
	}
	var_361_string = ""; var_362_bool = 0;
	var_357_string = var_361_string;
	var_364_bool = var_357_string == "";
	if(var_364_bool != 0) {
		var_362_bool = 0;
	} else {
		var_362_bool = 1;
	}
	func_1377(var_361_string, var_362_bool);
	var_2_object = var_357_string;
	return 0;
	
}


func_1420(var_79_cvector, var_80_cvector)
{
	var_82_float = 0; var_83_float = 0;
	var_84_int = var_80_cvector | var_80_cvector;
	var_83_float = sqrt(var_84_int);
	var_85_float = 9.999999974752427e-07;
	var_86_bool = var_83_float < var_85_float;
	if(var_86_bool != 0) {
		var_79_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_79_cvector = var_80_cvector / var_83_float;
	return 2;
}


func_1932(var_232_bool)
{
	var_233_int = 0;
	func_1839(var_233_int);
	var_232_bool = var_233_int == (int)0;
	return 0;
}


func_1938(var_277_bool)
{
	var_278_int = 0;
	func_1881(var_278_int);
	var_277_bool = var_278_int == (int)1;
	return 0;
}


func_1684(var_273_bool, var_274_object)
{
	var_275_bool = 0; var_276_object = Obj();
	var_274_object = var_276_object;
	func_1706(var_276_object);
	if(var_275_bool != 0) {
		var_273_bool = 1;
		return 0;
	}
	var_273_bool = 0;
	return 0;
}


func_405(var_2_object, var_210_string)
{
	var_211_bool = 0;
	func_1583(var_211_bool);
	var_212_bool = var_211_bool == 0; //@nz
	if(var_212_bool != 0) {
		return 0;
	}
	var_213_bool = var_210_string == var_2_object;
	if(var_213_bool != 0) {
		return 0;
	}
	var_214_string = ""; var_215_bool = 0;
	var_210_string = var_214_string;
	var_217_bool = var_210_string == "";
	if(var_217_bool != 0) {
		var_215_bool = 0;
	} else {
		var_215_bool = 1;
	}
	func_1377(var_214_string, var_215_bool);
	var_2_object = var_210_string;
	return 0;
	
}


func_1430(var_91_float, var_92_float, var_93_float, var_94_float)
{
	var_95_bool = var_92_float < var_93_float;
	if(var_95_bool != 0) {
		var_93_float = var_91_float;
		return 0;
	}
	var_96_bool = var_92_float > var_94_float;
	if(var_96_bool != 0) {
		var_94_float = var_91_float;
		return 0;
	}
	var_92_float = var_91_float;
	return 0;
}


func_1944()
{
	var_178_int = 0;
	func_1892((int)3);
	return 0;
}


func_925()
{
	func_1065();
	func_883();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1694(var_230_bool)
{
	func_1932((bool)0);
	var_232_bool = var_230_bool;
	return 0;
}


func_1949(var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	GetProperty("day", var_32_int);
	var_34_int = 0;
	func_1542(var_34_int);
	var_40_bool = var_32_int == var_34_int;
	if(var_40_bool != 0) {
		var_41_int = 0; var_42_object = Obj();
		var_30_object = var_42_object;
		TaskCall(2);
		func_226(var_43_object, var_41_int, var_42_object);
		TaskReturn();
	} else {
		var_326_int = 0; var_327_object = Obj();
		var_30_object = var_327_object;
		TaskCall(0);
		func_0(var_328_object, var_326_int, var_327_object);
		TaskReturn();
	}
	return 2;
	
}


func_1441(var_165_int, var_166_int)
{
	var_167_object = Obj(); var_168_object = Obj();
	CreateIntVector(var_168_object);
	@@var_168_object:add(var_165_int);
	@@var_168_object:add(var_166_int);
	SendWorldWndMessage((int)3, var_168_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1700(var_255_bool)
{
	func_1910((bool)0);
	var_257_bool = var_255_bool;
	return 0;
}


func_1706(var_275_bool)
{
	func_1938((bool)0);
	var_277_bool = var_275_bool;
	return 0;
}


func_940()
{
	StopGroup0();
	func_883();
	var_13_string = "";
	func_1361("Neutral");
	func_874();
	return 0;
}


func_1453(var_154_object, var_155_object, var_156_int)
{
	var_157_int = 0; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_int = 0; var_162_bool = 0;
	@@var_155_object:GetItemID(var_160_int);
	GetInvItemProperty(var_161_int, var_160_int, "Category");
	@@var_154_object:AddItem(var_162_bool, var_155_object, var_161_int, var_156_int);
	var_164_bool = var_162_bool == 0; //@nz
	if(var_164_bool != 0) {
		@@var_154_object:DropItems(var_155_object, var_156_int);
	} else {
		var_165_int = 0; var_166_int = 0;
		var_160_int = var_165_int;
		var_156_int = var_166_int;
		func_1441(var_165_int, var_166_int);
	}
	return 6;
	
}


func_1712()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)753, (int)2, (int)539738);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_1764(var_25_bool, var_26_object, (int)751);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1205()
{
	var_319_bool = 0; var_320_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_322_bool = 0;
	func_1583(var_322_bool);
	if(var_322_bool != 0) {
	} else {
		HasAnimationTrack(var_320_bool, "head");
		var_324_bool = var_320_bool;
		if(var_324_bool == 0) goto Label_1222;
		UnlookAsync("head");
	}
Label_1222:
	return 2;
	
}


func_1725()
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateDiaryEntry(var_105_object, (int)754, (int)2, (int)539739);
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0;
	var_105_object = var_110_object;
	func_1764(var_109_bool, var_110_object, (int)751);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1472(var_149_object, var_150_string, var_151_int)
{
	var_152_object = Obj(); var_153_object = Obj();
	CreateInvItem(var_153_object);
	@@var_153_object:SetItemName(var_150_string);
	var_154_object = Obj(); var_155_object = Obj(); var_156_int = 0;
	var_149_object = var_154_object;
	var_153_object = var_155_object;
	var_151_int = var_156_int;
	func_1453(var_154_object, var_155_object, var_156_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1223(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0;
	GetVariable("voice_common", var_120_int);
	var_123_int = var_120_int;
	if(var_123_int != 0) {
		var_124_bool = 0; var_125_object = Obj();
		var_114_object = var_125_object;
		func_1281(var_124_bool, var_125_object);
		var_154_bool = var_124_bool == 0; //@nz
		if(var_154_bool != 0) {
			var_155_bool = 0; var_156_object = Obj();
			var_114_object = var_156_object;
			func_1318(var_155_bool, var_156_object);
			var_185_bool = var_155_bool == 0; //@nz
			if(var_185_bool != 0) {
				var_113_bool = 0;
				return 4;
			}
		}
		irand(var_121_int, (int)2);
		var_187_int = var_121_int;
		if(var_187_int != 0) {
			var_190_int = var_120_int + (int)1;
			var_192_int = var_190_int % (int)3;
			SetVariable("voice_common", var_192_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_195_bool = 0; var_196_object = Obj();
		var_114_object = var_196_object;
		func_1318(var_195_bool, var_196_object);
		var_197_bool = var_195_bool == 0; //@nz
		if(var_197_bool != 0) {
			var_198_bool = 0; var_199_object = Obj();
			var_114_object = var_199_object;
			func_1281(var_198_bool, var_199_object);
			var_200_bool = var_198_bool == 0; //@nz
			if(var_200_bool != 0) {
				var_113_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1279;
	
Label_1279:
	var_113_bool = 1;
	return 4;
	
}


func_1738()
{
	var_117_object = Obj(); var_118_object = Obj();
	CreateDiaryEntry(var_118_object, (int)761, (int)2, (int)539746);
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0;
	var_118_object = var_123_object;
	func_1764(var_122_bool, var_123_object, (int)757);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1485(var_62_bool, var_63_object, var_64_float)
{
	var_65_bool = var_63_object == 0; //@nz
	if(var_65_bool != 0) {
		var_62_bool = 0;
		return 0;
	}
	var_67_bool = var_64_float > (int)0;
	if(var_67_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_98_bool = var_64_float < (int)0;
		if(var_98_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1506;
		}
		var_62_bool = 0;
		return 0;
	}
Label_1506:
	var_69_float = 0;
	var_64_float = var_69_float;
	func_1520(var_69_float);
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; var_76_float = 0; var_77_float = 0; var_78_float = 0;
	var_63_object = var_74_object;
	var_64_float = var_76_float;
	func_1090(var_73_bool, var_74_object, "reputation", var_76_float, (float)0, (float)1);
	var_62_bool = 1;
	return 0;
	
}


func_1751(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	GetDiaryRoot(var_36_object);
	var_37_bool = var_36_object == 0; //@nz
	if(var_37_bool != 0) {
		Trace("Can't retrieve diary root");
		var_34_object = 0;
		return 2;
	}
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_226(var_0_object, var_41_int, var_42_object)
{
	var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0;
	var_0_object = var_42_object;
	var_52_bool = 0; var_53_object = Obj(); var_54_float = 0;
	var_42_object = var_53_object;
	func_1136(var_52_bool, var_53_object, (float)70.0);
	var_99_bool = var_52_bool == 0; //@nz
	if(var_99_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	CreateDialog(var_48_object);
	var_100_int = 0;
	func_1577(var_100_int);
	@@var_48_object:SetNPCName(var_100_int);
	var_101_int = 0;
	func_1575(var_101_int);
	@@var_48_object:SetNPCDescription(var_101_int);
	var_102_string = "";
	func_1579(var_102_string);
	@@var_48_object:SetPhoto(var_102_string);
	var_103_string = "";
	func_1581(var_103_string);
	@@var_48_object:SetPhoto2(var_103_string);
	var_104_int = 0;
	func_1792(var_104_int);
	@@var_48_object:SetPlayerName(var_104_int);
	IsOverrideActive(var_49_bool);
	var_112_bool = var_49_bool;
	if(var_112_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	DoDialog(var_48_object);
	var_113_bool = 0; var_114_object = Obj();
	func_1414(Obj());
	var_115_object = var_114_object;
	func_1223(var_113_bool, var_114_object);
	var_203_object = Obj(); var_204_object = Obj();
	var_42_object = var_203_object;
	var_48_object = var_204_object;
	TaskCall(3);
	func_307(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object);
	TaskReturn();
	@@var_48_object:IsDialogEnd(var_51_bool);
	
Label_289:
	var_317_bool = var_51_bool == 0; //@nz
	if(var_317_bool != 0) {
		sync();
		@@var_48_object:IsDialogEnd(var_51_bool);
		goto Label_289;
	}
	var_42_object = Obj();
	func_1205();
	StopDialog(var_48_object);
	@@var_48_object:GetReturnValue((int)-1);
	var_50_int = var_41_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_994()
{
	var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0;
	WaitForAnimEnd();
	var_28_bool = 0;
	func_1131(var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
		return 12;
	}
	func_1558((int)0);
	var_30_int = var_22_int;
	var_23_int = 0;
	
Label_1008:
	var_43_bool = 0;
	var_43_bool = 0;
	var_45_bool = var_23_int < (int)5;
	if(var_45_bool != 0) {
		var_46_bool = 0;
		func_1131(var_46_bool);
		if(var_46_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_47_bool = var_22_int == 0; //@nz
		if(var_47_bool != 0) {
			Sleep((int)3, var_24_bool);
			var_49_bool = var_24_bool == 0; //@nz
			if(var_49_bool != 0) {
			} else {
		} else {
				irand(var_25_int, var_22_int);
				irand(var_26_int, (int)5);
				var_55_bool = var_26_int != (int)0;
				if(var_55_bool != 0) {
					var_25_int = 0;
				}
				var_57_string = ""; var_58_int = 0;
				var_25_int = var_58_int;
				func_1551(var_57_string, var_58_int);
				PlayAnimation("all", var_57_string);
				WaitForAnimEnd(var_27_bool);
				var_59_bool = var_27_bool == 0; //@nz
				if(var_59_bool == 0) goto Label_1049;
				goto Label_1060;
		}
		Label_1049:
			var_50_bool = 0;
			func_1063(var_50_bool);
			var_51_bool = var_50_bool == 0; //@nz
			if(var_51_bool != 0) {
				goto Label_1060;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_1008;

		}
	}
Label_1060:
	ResetAAS();
	return 12;
	
}


func_1764(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_1751(Obj());
	var_34_object = var_31_object;
	@@var_31_object:Find(var_27_int, var_32_object);
	var_39_bool = var_32_object == 0; //@nz
	if(var_39_bool != 0) {
		var_41_int = "Can't find diary parent with id: " + var_27_int;
		Trace(var_41_int);
		var_25_bool = 0;
		return 6;
	}
	@@var_32_object:AddChild(var_26_object);
	SendWorldWndMessage((int)7);
	@@var_26_object:GetCategory(var_33_int);
	SetDiarySection(var_33_int);
	var_25_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1520(var_69_float)
{
	var_70_object = Obj(); var_71_object = Obj();
	CreateFloatVector(var_71_object);
	@@var_71_object:add(var_69_float);
	SendWorldWndMessage((int)16, var_71_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1530(var_54_bool, var_55_string, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj();
	FindActor(var_58_object, var_55_string);
	var_59_bool = var_58_object == 0; //@ne
	if(var_59_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	Trigger(var_58_object, var_56_string);
	var_54_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


