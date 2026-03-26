// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateInvItem/1,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Untrust|W:Smile|W:Menace|W:Sorrow|W:cleanup|W:restore|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:HasItem|W:reputation|W:k7q01CorpseMark|W:k7q01BirdmaskGotoCorpse|W:pt_d7q02_corpse|A:AddMark|W:quest_k7_01|W:place_corpse|W:ook7DankoTheater1|W:k7q01|W:bird_mask|A:RemoveItemByType|W:ook7DankoTheater2|W:k7q02DankoGotoGatherer|W:pt_gatherer3|W:quest_k7_02|W:completed|A:ShowMap|W:playsound|W:givemoney|W:giveitem|W:money 5000 is given|W:Samopal is given|W:Samopal|A:SetItemName|W:durability|W:k7q02|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Bakalavr.png|W:ui/NPC_Bakalavr_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x35f
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf9 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x363 vars=string
// @EVENT_6: op=0x377 vars=
// @EVENT_5: op=0x384 vars=
// @EVENT_7: op=0x3cd vars=int
// @EVENT_45: op=0x40f vars=bool
// @EVENT_0: op=0x41b vars=object
// @PE: 0x51,0xe3,0xf9,0x357,0x35f,0x384,0x3cd,0x3f3,0x40f,0x5f3,0x647,0x6a6,0x6cd,0x6e0,0x700,0x70a,0x71a,0x720,0x726,0x745,0x751,0x75c,0x768,0x774,0x780

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1500();
		var_12_bool = var_8_bool == (int)27639;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1766();
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_1840(var_71_object);
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_1824();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_1802(var_99_object);
		}
		var_125_bool = var_8_bool == (int)27440;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_1741();
		}
		var_131_bool = var_8_bool == (int)27442;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_1709();
		}
		var_157_bool = var_8_bool == (int)27451;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_1747(var_159_object);
		}
		var_175_bool = var_8_bool == (int)27643;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_1766();
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_1824();
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_1840(var_181_object);
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_1802(var_183_object);
		}
		var_185_bool = var_8_bool == (int)27652;
		if(var_185_bool != 0) {
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_1792();
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_object;
			func_1830(var_200_object);
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_object;
			func_1818();
		}
		var_222_bool = var_8_bool == (int)43156;
		if(var_222_bool != 0) {
			var_223_object = Obj(); var_224_object = Obj();
			var_223_object = var_1_object;
			var_224_object = var_0_object;
			func_1792();
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_1702(var_226_object);
		}
		var_266_bool = var_7_cvector == (int)27636;
		if(var_266_bool != 0) {
			var_267_bool = 0; var_268_object = Obj();
			var_268_object = var_1_object;
			func_1896(var_268_object);
			if(var_267_bool != 0) {
				var_273_object = Obj(); var_274_object = Obj();
				var_273_object = var_1_object;
				var_274_object = var_0_object;
				func_1760();
				var_277_string = "";
				func_227(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)526351);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526352, (int)27638, (int)27637);
				@@@var_0_object:AddReply((int)528648, (int)27638, (int)30055);
				return 0;
			}
			var_301_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526160);
			@@@var_0_object:ClearReplies();
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_1861(var_305_object);
			if(var_304_bool != 0) {
				var_310_bool = 0; var_311_object = Obj();
				var_311_object = var_1_object;
				func_1884(var_311_object);
				if(var_310_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 0) {
				@@@var_0_object:AddReply((int)526161, (int)27441, (int)27440);
			}
			var_319_bool = 0;
			var_319_bool = 0;
			var_320_bool = 0; var_321_object = Obj();
			var_321_object = var_1_object;
			func_1861(var_321_object);
			if(var_320_bool != 0) {
				var_322_bool = 0; var_323_object = Obj();
				var_323_object = var_1_object;
				func_1873(var_322_bool, var_323_object);
				if(var_322_bool != 0) {
					var_319_bool = 1;
				}
			}
			if(var_319_bool != 0) {
				@@@var_0_object:AddReply((int)526165, (int)30046, (int)27444);
			}
			var_334_bool = 0; var_335_object = Obj();
			var_335_object = var_1_object;
			func_1908(var_335_object);
			if(var_334_bool != 0) {
				@@@var_0_object:AddReply((int)526356, (int)27642, (int)27641);
			}
			var_343_bool = 0; var_344_object = Obj();
			var_344_object = var_1_object;
			func_1920(var_344_object);
			if(var_343_bool != 0) {
				@@@var_0_object:AddReply((int)526365, (int)27651, (int)27650);
			}
			@@@var_0_object:AddReply((int)526166, (int)-1, (int)27445);
			@@@var_0_object:AddReply((int)528636, (int)-1, (int)30041);
			return 0;
		}
		var_359_bool = var_7_cvector == (int)27651;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528637, (int)30043, (int)30042);
			return 0;
		}
		var_366_bool = var_7_cvector == (int)30043;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528639, (int)30045, (int)30044);
			return 0;
		}
		var_373_bool = var_7_cvector == (int)30045;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_227(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)528640);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526367, (int)-1, (int)27652);
			@@@var_0_object:AddReply((int)541054, (int)-1, (int)43156);
			return 0;
		}
		var_383_bool = var_7_cvector == (int)27642;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_227(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)526357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526358, (int)-1, (int)27643);
			return 0;
		}
		var_390_bool = var_7_cvector == (int)30046;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_227(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)528641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528642, (int)30049, (int)30047);
			@@@var_0_object:AddReply((int)528643, (int)30049, (int)30048);
			return 0;
		}
		var_400_bool = var_7_cvector == (int)30049;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528645, (int)30052, (int)30050);
			return 0;
		}
		var_407_bool = var_7_cvector == (int)30052;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528647, (int)27447, (int)30054);
			@@@var_0_object:AddReply((int)541055, (int)30070, (int)43157);
			return 0;
		}
		var_417_bool = var_7_cvector == (int)27447;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_227(var_8_bool, "Menace");
			@@@var_0_object:SetMessage((int)526168);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528657, (int)30068, (int)30067);
			return 0;
		}
		var_424_bool = var_7_cvector == (int)30068;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_227(var_8_bool, "Menace");
			@@@var_0_object:SetMessage((int)528658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528659, (int)30070, (int)30069);
			return 0;
		}
		var_431_bool = var_7_cvector == (int)30070;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_227(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)528660);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526169, (int)27450, (int)27448);
			@@@var_0_object:AddReply((int)528661, (int)30072, (int)30071);
			return 0;
		}
		var_441_bool = var_7_cvector == (int)30072;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_227(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)528662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528663, (int)27450, (int)30073);
			return 0;
		}
		var_448_bool = var_7_cvector == (int)27450;
		if(var_448_bool != 0) {
			var_449_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526171, (int)-1, (int)27451);
			return 0;
		}
		var_455_bool = var_7_cvector == (int)27441;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_227(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)526162);
			@@@var_0_object:ClearReplies();
			var_458_bool = 0; var_459_object = Obj();
			var_459_object = var_1_object;
			func_1873(var_458_bool, var_459_object);
			if(var_458_bool != 0) {
				@@@var_0_object:AddReply((int)526167, (int)30046, (int)27446);
			}
			var_463_bool = 0; var_464_object = Obj();
			var_464_object = var_1_object;
			func_1873(var_463_bool, var_464_object);
			var_465_bool = var_463_bool == 0; //@nz
			if(var_465_bool != 0) {
				@@@var_0_object:AddReply((int)541052, (int)43155, (int)43154);
			}
			return 0;
		}
		var_470_bool = var_7_cvector == (int)43155;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_227(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)541053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526163, (int)-1, (int)27442);
			return 0;
		}
		var_477_bool = var_7_cvector == (int)27638;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_227(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)526353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528654, (int)30064, (int)30063);
			@@@var_0_object:AddReply((int)528656, (int)30064, (int)30065);
			return 0;
		}
		var_487_bool = var_7_cvector == (int)30064;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_227(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)528655);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528650, (int)30060, (int)30057);
			@@@var_0_object:AddReply((int)528651, (int)30056, (int)30058);
			return 0;
		}
		var_497_bool = var_7_cvector == (int)30056;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528653, (int)30060, (int)30061);
			return 0;
		}
		var_504_bool = var_7_cvector == (int)30060;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_227(var_8_bool, "Menace");
			@@@var_0_object:SetMessage((int)528652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526354, (int)-1, (int)27639);
			@@@var_0_object:AddReply((int)526355, (int)-1, (int)27640);
			return 0;
		}
		var_3_string = true;
		var_513_bool = 0;
		func_2100(var_513_bool);
		if(var_513_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfa";
	
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
			func_1507(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_886;
		var_1_object = false;
	}
Label_886:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1507(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_1011();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1026();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_969();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_1224(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_938(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_918(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1507(Obj());
				var_53_object = var_52_object;
				func_1374(var_51_bool, var_52_object);
			}
		} else {
			func_933(var_7_int);
			func_960();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_960();
	} else {
		var_14_string = "";
		func_1454("Neutral");
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
		func_1151();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_1215(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_855(var_25_object);
		var_320_string = "";
		func_1454("Neutral");
		func_969();
		func_960();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_904(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_1229(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_2094(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_2092(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_2096(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_2098(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_2075(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1507(Obj());
	var_100_object = var_99_object;
	func_1316(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_311_bool = var_36_bool == 0; //@nz
	if(var_311_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_1298();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1792()
{
	func_1958();
	var_196_bool = 0; var_197_string = ""; var_198_string = "";
	func_1652(var_196_bool, "quest_k7_02", "completed");
	return 0;
}


func_1026()
{
	StopGroup0();
	func_969();
	var_8_string = "";
	func_1454("Neutral");
	func_960();
	return 0;
}


func_1539(var_62_object, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj();
	GetMainOutdoorScene(var_66_object);
	var_69_int = var_63_string + ".bin";
	AddBlankActor(var_67_object, var_66_object, var_63_string, var_69_int);
	var_67_object = var_62_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1802(var_99_object)
{
	var_100_object = Obj(); var_101_string = ""; var_102_float = 0;
	func_2025(Obj());
	var_103_object = var_100_object;
	func_2042(var_100_object, "pt_gatherer3", (float)2);
	var_123_object = Obj();
	func_2025(var_123_object);
	@@var_99_object:ShowMap(var_123_object);
	return 0;
}


func_1550(var_89_int, var_90_int)
{
	var_91_object = Obj(); var_92_object = Obj();
	CreateIntVector(var_92_object);
	@@var_92_object:add(var_89_int);
	@@var_92_object:add(var_90_int);
	SendWorldWndMessage((int)3, var_92_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1298()
{
	var_313_bool = 0; var_314_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_316_bool = 0;
	func_2100(var_316_bool);
	if(var_316_bool != 0) {
	} else {
		HasAnimationTrack(var_314_bool, "head");
		var_318_bool = var_314_bool;
		if(var_318_bool == 0) goto Label_1315;
		UnlookAsync("head");
	}
Label_1315:
	return 2;
	
}


func_1562(var_202_object, var_203_int)
{
	var_204_int = 0; var_205_int = 0;
	var_206_object = Obj(); var_207_string = ""; var_208_int = 0;
	var_202_object = var_206_object;
	var_203_int = var_208_int;
	func_1198(var_206_object, "money", var_208_int);
	var_213_bool = var_203_int > (int)0;
	if(var_213_bool != 0) {
		GetInvItemByName(var_205_int, "Money");
		var_215_int = 0; var_216_int = 0;
		var_205_int = var_215_int;
		var_203_int = var_216_int;
		func_1550(var_215_int, var_216_int);
	}
	return 2;
}


func_2075(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x82a";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1818()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_1824()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1316(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1374(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1411(var_140_bool, var_141_object);
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
		func_1411(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1374(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1372;
	
Label_1372:
	var_98_bool = 1;
	return 4;
	
}


func_1830(var_199_object)
{
	Trace("money 5000 is given");
	var_202_object = Obj(); var_203_int = 0;
	var_199_object = var_202_object;
	func_1562(var_202_object, (int)5000);
	return 0;
}


func_2092(var_86_int)
{
	var_86_int = 515573;
	return 0;
}


func_1581(var_78_object, var_79_object, var_80_int)
{
	var_81_int = 0; var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_int = 0; var_86_bool = 0;
	@@var_79_object:GetItemID(var_84_int);
	GetInvItemProperty(var_85_int, var_84_int, "Category");
	@@var_78_object:AddItem(var_86_bool, var_79_object, var_85_int, var_80_int);
	var_88_bool = var_86_bool == 0; //@nz
	if(var_88_bool != 0) {
		@@var_78_object:DropItems(var_79_object, var_80_int);
	} else {
		var_89_int = 0; var_90_int = 0;
		var_84_int = var_89_int;
		var_80_int = var_90_int;
		func_1550(var_89_int, var_90_int);
	}
	return 6;
	
}


func_2094(var_85_int)
{
	var_85_int = 504032;
	return 0;
}


func_2096(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png";
	return 0;
}


func_1840(var_70_object)
{
	var_72_object = Obj(); var_73_object = Obj();
	Trace("Samopal is given");
	CreateInvItem(var_73_object);
	@@var_73_object:SetItemName("Samopal");
	@@var_73_object:SetProperty("durability", (int)30);
	var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0;
	var_70_object = var_78_object;
	var_73_object = var_79_object;
	func_1581(var_78_object, var_79_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2098(var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png";
	return 0;
}


func_2100(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1080()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_1224(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1685((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_1094:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_1224(var_41_bool);
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
				func_1678(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_1135;
				goto Label_1146;
		}
		Label_1135:
			var_45_bool = 0;
			func_1149(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1146;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_1094;

		}
	}
Label_1146:
	ResetAAS();
	return 12;
	
}


func_1600(var_277_bool, var_278_object, var_279_string)
{
	var_280_int = 0; var_281_bool = 0; var_282_int = 0; var_283_bool = 0;
	GetInvItemByName(var_282_int, var_279_string);
	@@var_278_object:HasItem(var_282_int, var_283_bool);
	var_283_bool = var_277_bool;
	return 4;
}


func_1861(var_257_bool)
{
	var_259_int = 0; var_260_string = "";
	func_1534(var_259_int, "k7q01");
	var_262_bool = var_259_int == (int)2;
	if(var_262_bool != 0) {
		var_257_bool = 1;
		return 0;
	}
	var_257_bool = 0;
	return 0;
}


func_1607(var_227_bool, var_228_object, var_229_float)
{
	var_230_bool = var_228_object == 0; //@nz
	if(var_230_bool != 0) {
		var_227_bool = 0;
		return 0;
	}
	var_232_bool = var_229_float > (int)0;
	if(var_232_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_263_bool = var_229_float < (int)0;
		if(var_263_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1628;
		}
		var_227_bool = 0;
		return 0;
	}
Label_1628:
	var_234_float = 0;
	var_229_float = var_234_float;
	func_1642(var_234_float);
	var_238_bool = 0; var_239_object = Obj(); var_240_string = ""; var_241_float = 0; var_242_float = 0; var_243_float = 0;
	var_228_object = var_239_object;
	var_229_float = var_241_float;
	func_1176(var_238_bool, var_239_object, "reputation", var_241_float, (float)0, (float)1);
	var_227_bool = 1;
	return 0;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_1896(var_201_object);
		if(var_200_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1760();
			var_212_string = "";
			func_227(var_194_object, "Neutral");
			@@@var_0_object:SetMessage((int)526351);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526352, (int)27638, (int)27637);
			@@@var_0_object:AddReply((int)528648, (int)27638, (int)30055);
		} else {
				var_254_string = "";
				func_227(var_194_object, "Neutral");
				@@@var_0_object:SetMessage((int)526160);
				@@@var_0_object:ClearReplies();
				var_256_bool = 0;
				var_256_bool = 0;
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_1861(var_258_object);
				if(var_257_bool != 0) {
					var_263_bool = 0; var_264_object = Obj();
					var_264_object = var_1_object;
					func_1884(var_264_object);
					if(var_263_bool != 0) {
						var_256_bool = 1;
					}
				}
				if(var_256_bool != 0) {
					@@@var_0_object:AddReply((int)526161, (int)27441, (int)27440);
				}
				var_272_bool = 0;
				var_272_bool = 0;
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_1861(var_274_object);
				if(var_273_bool != 0) {
					var_275_bool = 0; var_276_object = Obj();
					var_276_object = var_1_object;
					func_1873(var_275_bool, var_276_object);
					if(var_275_bool != 0) {
						var_272_bool = 1;
					}
				}
				if(var_272_bool != 0) {
					@@@var_0_object:AddReply((int)526165, (int)30046, (int)27444);
				}
				var_287_bool = 0; var_288_object = Obj();
				var_288_object = var_1_object;
				func_1908(var_288_object);
				if(var_287_bool != 0) {
					@@@var_0_object:AddReply((int)526356, (int)27642, (int)27641);
				}
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_1920(var_297_object);
				if(var_296_bool != 0) {
					@@@var_0_object:AddReply((int)526365, (int)27651, (int)27650);
				}
				@@@var_0_object:AddReply((int)526166, (int)-1, (int)27445);
				@@@var_0_object:AddReply((int)528636, (int)-1, (int)30041);
				goto Label_197;
		}
	}
Label_197:
	var_236_bool = 0;
	func_2100(var_236_bool);
	if(var_236_bool != 0) {

	Label_201:
		lshWaitForAnimEnd();
		var_237_string = var_3_string;
		if(var_237_string != 0) {
		} else {
			var_238_string = "";
			var_238_string = var_2_object;
			func_1454(var_238_string);
			goto Label_201;
	}
		PlayAnimation("all", "idle");

	Label_216:
		WaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
			goto Label_226;
		}
		PlayAnimation("all", "idle");
		goto Label_216;

	}
	goto Label_226;
	
Label_226:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1873(var_275_bool, var_276_object)
{
	var_277_bool = 0; var_278_object = Obj(); var_279_string = "";
	var_276_object = var_278_object;
	func_1600(var_277_bool, var_278_object, "bird_mask");
	if(var_277_bool != 0) {
		var_275_bool = 1;
		return 0;
	}
	var_275_bool = 0;
	return 0;
}


func_855(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1884(var_263_bool)
{
	var_265_int = 0; var_266_string = "";
	func_1534(var_265_int, "ook7DankoTheater1");
	var_268_bool = var_265_int == (int)0;
	if(var_268_bool != 0) {
		var_263_bool = 1;
		return 0;
	}
	var_263_bool = 0;
	return 0;
}


func_1374(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1377:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1377;
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
	func_1485(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1896(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_1534(var_202_int, "ook7DankoTheater2");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_1642(var_234_float)
{
	var_235_object = Obj(); var_236_object = Obj();
	CreateFloatVector(var_236_object);
	@@var_236_object:add(var_234_float);
	SendWorldWndMessage((int)16, var_236_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1652(var_150_bool, var_151_string, var_152_string)
{
	var_153_object = Obj(); var_154_object = Obj();
	FindActor(var_154_object, var_151_string);
	var_155_bool = var_154_object == 0; //@ne
	if(var_155_bool != 0) {
		var_150_bool = 0;
		return 2;
	}
	Trigger(var_154_object, var_152_string);
	var_150_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1908(var_287_bool)
{
	var_289_int = 0; var_290_string = "";
	func_1534(var_289_int, "k7q02");
	var_292_bool = var_289_int == (int)0;
	if(var_292_bool != 0) {
		var_287_bool = 1;
		return 0;
	}
	var_287_bool = 0;
	return 0;
}


func_1149(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_1151()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1664(var_28_float)
{
	var_29_float = 0; var_30_float = 0;
	GetGameTime(var_30_float);
	var_30_float = var_28_float;
	return 2;
}


func_1920(var_296_bool)
{
	var_298_int = 0; var_299_string = "";
	func_1534(var_298_int, "k7q02");
	var_301_bool = var_298_int == (int)2;
	if(var_301_bool != 0) {
		var_296_bool = 1;
		return 0;
	}
	var_296_bool = 0;
	return 0;
}


func_1411(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1669(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1420:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1420;
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
	func_1485(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1156(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1669(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_904(var_0_object)
{
	var_7_bool = 0;
	func_1224(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_913:
	func_1080();
	goto Label_913;
}
EMIT "Return(); Pop(0)";


func_1164(var_246_bool, var_247_object, var_248_string)
{
	var_249_bool = 0; var_250_bool = 0;
	var_253_bool = IsFuncExist(var_247_object, "HasProperty", (int)2);
	var_254_bool = var_253_bool == 0; //@nz
	if(var_254_bool != 0) {
		var_246_bool = 0;
		return 2;
	}
	@@var_247_object:HasProperty(var_248_string, var_250_bool);
	var_250_bool = var_246_bool;
	return 2;
}


func_1932()
{
	var_164_object = Obj(); var_165_object = Obj();
	CreateDiaryEntry(var_165_object, (int)420, (int)1, (int)526219);
	var_169_bool = 0; var_170_object = Obj(); var_171_int = 0;
	var_165_object = var_170_object;
	func_1997(var_169_bool, var_170_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1678(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1685(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1687:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1678(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1687;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_918(var_32_bool)
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
	func_1215(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1176(var_238_bool, var_239_object, var_240_string, var_241_float, var_242_float, var_243_float)
{
	var_244_float = 0; var_245_float = 0;
	var_246_bool = 0; var_247_object = Obj(); var_248_string = "";
	var_239_object = var_247_object;
	var_240_string = var_248_string;
	func_1164(var_246_bool, var_247_object, var_248_string);
	var_255_bool = var_246_bool == 0; //@nz
	if(var_255_bool != 0) {
		var_238_bool = 0;
		return 2;
	}
	@@var_239_object:GetProperty(var_240_string, var_245_float);
	var_256_float = 0; var_257_float = 0; var_258_float = 0; var_259_float = 0;
	var_257_float = var_245_float + var_241_float;
	var_242_float = var_258_float;
	var_243_float = var_259_float;
	func_1523(var_256_float, var_257_float, var_258_float, var_259_float);
	@@var_239_object:SetProperty(var_240_string, var_256_float);
	var_238_bool = 1;
	return 2;
}


func_1945()
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateDiaryEntry(var_32_object, (int)430, (int)2, (int)526368);
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0;
	var_32_object = var_37_object;
	func_1997(var_36_bool, var_37_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_933(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1702(var_225_object)
{
	var_227_bool = 0; var_228_object = Obj(); var_229_float = 0;
	var_225_object = var_228_object;
	func_1607(var_227_bool, var_228_object, (float)0.05000000074505806);
	return 0;
}


func_1958()
{
	var_188_object = Obj(); var_189_object = Obj();
	CreateDiaryEntry(var_189_object, (int)433, (int)2, (int)526371);
	var_193_bool = 0; var_194_object = Obj(); var_195_int = 0;
	var_189_object = var_194_object;
	func_1997(var_193_bool, var_194_object, (int)430);
	return 2;
}
EMIT "Stack[-1] = 0";


func_938(var_15_bool)
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
	func_1156(var_22_float, var_23_object);
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


func_1709()
{
	var_134_object = Obj(); var_135_object = Obj();
	var_136_int = 0; var_137_string = "";
	func_1534(var_136_int, "k7q01CorpseMark");
	var_141_bool = var_136_int == (int)0;
	if(var_141_bool != 0) {
		SetVariable("k7q01CorpseMark", (int)1);
		func_2025(Obj());
		var_144_object = var_135_object;
		var_149_float = 0;
		func_1664(var_149_float);
		@@var_135_object:AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", (int)3, (int)526214, var_149_float);
		var_150_bool = 0; var_151_string = ""; var_152_string = "";
		func_1652(var_150_bool, "quest_k7_01", "place_corpse");
		var_135_object = 0;
	}
	return 2;
}


func_1198(var_206_object, var_207_string, var_208_int)
{
	var_209_int = 0; var_210_int = 0;
	@@var_206_object:GetProperty(var_207_string, var_210_int);
	var_211_int = var_210_int + var_208_int;
	@@var_206_object:SetProperty(var_207_string, var_211_int);
	return 2;
}


func_1454(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0;
	lshHasAnimation(var_242_bool, var_238_string);
	var_245_bool = var_242_bool;
	if(var_245_bool != 0) {
		lshGetAnimTimes(var_238_string, var_243_float, var_244_float);
		lshPlayAnimation(var_243_float, var_244_float, (bool)0);
	} else {
		var_248_int = "Can't find lsh animation : " + var_238_string;
		Trace(var_248_int);
	}
	return 6;
	
}


func_1971()
{
	var_54_object = Obj(); var_55_object = Obj();
	CreateDiaryEntry(var_55_object, (int)431, (int)2, (int)526369);
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0;
	var_55_object = var_60_object;
	func_1997(var_59_bool, var_60_object, (int)430);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1205(var_15_bool, var_16_cvector)
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


func_1470(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0;
	lshHasAnimation(var_223_bool, var_216_string);
	var_226_bool = var_223_bool;
	if(var_226_bool != 0) {
		lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		var_228_int = "Can't find lsh animation : " + var_216_string;
		Trace(var_228_int);
	}
	return 6;
	
}


func_1215(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_1205(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_960()
{
	var_322_float = 0; var_323_float = 0;
	rand(var_323_float, (int)8, (int)16);
	SetTimer((int)10, var_323_float);
	return 2;
}


func_1984(var_45_object)
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


func_1224(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_969()
{
	KillTimer((int)10);
	return 0;
}


func_1229(var_37_bool, var_38_object, var_39_float)
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
	func_1513(var_64_cvector, var_65_cvector);
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
	func_2100(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1292;
		LookAsyncCamera("head");
	}
Label_1292:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1741()
{
	SetVariable("ook7DankoTheater1", (int)1);
	return 0;
}


func_1485(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_2100(var_136_bool);
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


func_1997(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0;
	func_1984(Obj());
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


func_1747(var_158_object)
{
	var_160_int = 0; var_161_int = 0;
	SetVariable("k7q01", (int)3);
	func_1932();
	@@var_158_object:RemoveItemByType(var_161_int, "bird_mask", (int)1);
	return 2;
}


func_1500()
{
	var_10_bool = 0;
	func_2100(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1760()
{
	SetVariable("ook7DankoTheater2", (int)1);
	return 0;
}


func_227(var_2_object, var_212_string)
{
	var_213_bool = 0;
	func_2100(var_213_bool);
	var_214_bool = var_213_bool == 0; //@nz
	if(var_214_bool != 0) {
		return 0;
	}
	var_215_bool = var_212_string == var_2_object;
	if(var_215_bool != 0) {
		return 0;
	}
	var_216_string = ""; var_217_bool = 0;
	var_212_string = var_216_string;
	var_219_bool = var_212_string == "";
	if(var_219_bool != 0) {
		var_217_bool = 0;
	} else {
		var_217_bool = 1;
	}
	func_1470(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	return 0;
	
}


func_1507(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1766()
{
	var_15_object = Obj(); var_16_object = Obj();
	func_2025(Obj());
	var_17_object = var_16_object;
	var_28_float = 0;
	func_1664(var_28_float);
	@@var_16_object:AddMark("k7q02DankoGotoGatherer", "pt_gatherer3", (int)0, (int)526372, var_28_float);
	func_1945();
	func_1971();
	var_62_object = Obj(); var_63_string = "";
	func_1539(var_62_object, "quest_k7_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_1513(var_64_cvector, var_65_cvector)
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


func_2025(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj();
	GetMainOutdoorScene(var_20_object);
	var_22_bool = var_20_object == 0; //@ne
	if(var_22_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_21_object = 0;
		var_21_object = var_17_object;
		return 4;
	}
	@@var_20_object:GetMap(var_21_object);
	var_21_object = var_17_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1011()
{
	func_1151();
	func_969();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1523(var_256_float, var_257_float, var_258_float, var_259_float)
{
	var_260_bool = var_257_float < var_258_float;
	if(var_260_bool != 0) {
		var_258_float = var_256_float;
		return 0;
	}
	var_261_bool = var_257_float > var_259_float;
	if(var_261_bool != 0) {
		var_259_float = var_256_float;
		return 0;
	}
	var_257_float = var_256_float;
	return 0;
}


func_2042(var_100_object, var_101_string, var_102_float)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_object = Obj(); var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0;
	GetMainOutdoorScene(var_110_object);
	var_112_bool = var_110_object == 0; //@ne
	if(var_112_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_110_object:GetLocator(var_101_string, var_111_bool, var_108_cvector, var_109_cvector);
	var_114_bool = var_111_bool == 0; //@nz
	if(var_114_bool != 0) {
		var_116_int = "Warning: outdoor scene locator " + var_101_string;
		var_118_int = var_116_int + " doesnt exist";
		Trace(var_118_int);
	}
	@@var_110_object:GetMap(var_100_object);
	var_119_bool = var_100_object == 0; //@ne
	if(var_119_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_121_float = GetByIndex(var_108_cvector, 0);
	var_122_float = GetByIndex(var_108_cvector, 2);
	@@var_100_object:SetMapParams(var_121_float, var_122_float, var_102_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1534(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


