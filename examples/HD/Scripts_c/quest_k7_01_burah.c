// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Sorrow|W:Smile|W:Doubt|W:cleanup|W:restore|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|W:pt_map_burah_home|A:ShowMap|W:k7q01CorpseMark|W:k7q01BirdmaskGotoCorpse|W:pt_d7q02_corpse|A:AddMark|W:quest_k7_01|W:place_corpse|W:ook7Burah1|W:k7q01|W:bird_balahon|A:RemoveItemByType|W:k7q03BurahGotoFather|W:quest_k7_03|W:place_family|W:ook7Burah2|W:tvirin 5 is given|W:tvirin|W:completed|W:money2000 is given|W:playsound|W:givemoney|W:giveitem|W:k7q03|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Burah.png|W:ui/NPC_Burah_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x355
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf9 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x359 vars=string
// @EVENT_6: op=0x36d vars=
// @EVENT_5: op=0x37a vars=
// @EVENT_7: op=0x3c3 vars=int
// @EVENT_45: op=0x405 vars=bool
// @EVENT_0: op=0x411 vars=object
// @PE: 0x51,0xe3,0xf9,0x34d,0x355,0x37a,0x3c3,0x3e9,0x405,0x64f,0x67f,0x6b1,0x6b7,0x6c2,0x6cc,0x6d6,0x6dc,0x6e2,0x6ed,0x6f9,0x705,0x711,0x71d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1456();
		var_12_bool = var_8_bool == (int)27656;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1682();
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_1756();
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_1719(var_81_object);
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1615(var_105_object);
		}
		var_131_bool = var_8_bool == (int)27454;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_1663();
		}
		var_137_bool = var_8_bool == (int)27456;
		if(var_137_bool != 0) {
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_1631();
		}
		var_160_bool = var_8_bool == (int)27460;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_1669(var_162_object);
		}
		var_178_bool = var_8_bool == (int)27660;
		if(var_178_bool != 0) {
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_1682();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_1719(var_182_object);
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_object;
			func_1756();
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_1615(var_186_object);
		}
		var_188_bool = var_8_bool == (int)27669;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_1730();
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_1740(var_203_object);
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_1750();
		}
		var_225_bool = var_8_bool == (int)44880;
		if(var_225_bool != 0) {
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_1730();
		}
		var_229_bool = var_7_cvector == (int)27653;
		if(var_229_bool != 0) {
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_1809(var_231_object);
			if(var_230_bool != 0) {
				var_236_object = Obj(); var_237_object = Obj();
				var_236_object = var_1_object;
				var_237_object = var_0_object;
				func_1713();
				var_240_string = "";
				func_227(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)526373);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526374, (int)27655, (int)27654);
				@@@var_0_object:AddReply((int)528676, (int)27655, (int)30089);
				return 0;
			}
			var_264_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526173);
			@@@var_0_object:ClearReplies();
			var_266_bool = 0;
			var_266_bool = 0;
			var_267_bool = 0; var_268_object = Obj();
			var_268_object = var_1_object;
			func_1773(var_268_object);
			if(var_267_bool != 0) {
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_1785(var_274_object);
				if(var_273_bool != 0) {
					var_266_bool = 1;
				}
			}
			if(var_266_bool != 0) {
				@@@var_0_object:AddReply((int)526174, (int)27455, (int)27454);
			}
			var_282_bool = 0;
			var_282_bool = 0;
			var_283_bool = 0; var_284_object = Obj();
			var_284_object = var_1_object;
			func_1773(var_284_object);
			if(var_283_bool != 0) {
				var_285_bool = 0; var_286_object = Obj();
				var_286_object = var_1_object;
				func_1762(var_285_bool, var_286_object);
				if(var_285_bool != 0) {
					var_282_bool = 1;
				}
			}
			if(var_282_bool != 0) {
				@@@var_0_object:AddReply((int)526178, (int)27459, (int)27458);
			}
			var_297_bool = 0; var_298_object = Obj();
			var_298_object = var_1_object;
			func_1797(var_298_object);
			if(var_297_bool != 0) {
				@@@var_0_object:AddReply((int)526378, (int)27659, (int)27658);
			}
			var_306_bool = 0; var_307_object = Obj();
			var_307_object = var_1_object;
			func_1821(var_307_object);
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)526387, (int)44876, (int)27667);
			}
			@@@var_0_object:AddReply((int)526181, (int)-1, (int)27461);
			@@@var_0_object:AddReply((int)528675, (int)-1, (int)30088);
			return 0;
		}
		var_322_bool = var_7_cvector == (int)44876;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_227(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)542490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542491, (int)27668, (int)44877);
			@@@var_0_object:AddReply((int)542492, (int)27668, (int)44878);
			return 0;
		}
		var_332_bool = var_7_cvector == (int)27668;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_227(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)526388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526389, (int)-1, (int)27669);
			@@@var_0_object:AddReply((int)542493, (int)-1, (int)44880);
			return 0;
		}
		var_342_bool = var_7_cvector == (int)27659;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526380, (int)-1, (int)27660);
			return 0;
		}
		var_349_bool = var_7_cvector == (int)27459;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528687, (int)30103, (int)30102);
			return 0;
		}
		var_356_bool = var_7_cvector == (int)30103;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_227(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)528688);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528689, (int)30105, (int)30104);
			return 0;
		}
		var_363_bool = var_7_cvector == (int)30105;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_227(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)528690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528691, (int)30107, (int)30106);
			@@@var_0_object:AddReply((int)528697, (int)30113, (int)30112);
			return 0;
		}
		var_373_bool = var_7_cvector == (int)30113;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528699, (int)30107, (int)30114);
			return 0;
		}
		var_380_bool = var_7_cvector == (int)30107;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528692);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528693, (int)30109, (int)30108);
			return 0;
		}
		var_387_bool = var_7_cvector == (int)30109;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_227(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)528694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528702, (int)30118, (int)30117);
			@@@var_0_object:AddReply((int)528700, (int)30116, (int)30115);
			return 0;
		}
		var_397_bool = var_7_cvector == (int)30116;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528704, (int)30118, (int)30119);
			return 0;
		}
		var_404_bool = var_7_cvector == (int)30118;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_227(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)528703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528695, (int)30111, (int)30110);
			return 0;
		}
		var_411_bool = var_7_cvector == (int)30111;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_227(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)528696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526180, (int)-1, (int)27460);
			return 0;
		}
		var_418_bool = var_7_cvector == (int)27455;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_227(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)526175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528685, (int)30101, (int)30100);
			return 0;
		}
		var_425_bool = var_7_cvector == (int)30101;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_227(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)528686);
			@@@var_0_object:ClearReplies();
			var_428_bool = 0; var_429_object = Obj();
			var_429_object = var_1_object;
			func_1762(var_428_bool, var_429_object);
			var_430_bool = var_428_bool == 0; //@nz
			if(var_430_bool != 0) {
				@@@var_0_object:AddReply((int)526176, (int)-1, (int)27456);
			}
			var_434_bool = 0; var_435_object = Obj();
			var_435_object = var_1_object;
			func_1762(var_434_bool, var_435_object);
			if(var_434_bool != 0) {
				@@@var_0_object:AddReply((int)526177, (int)27459, (int)27457);
			}
			return 0;
		}
		var_440_bool = var_7_cvector == (int)27655;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526375);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528677, (int)30092, (int)30091);
			return 0;
		}
		var_447_bool = var_7_cvector == (int)30092;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_227(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)528678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528679, (int)30094, (int)30093);
			@@@var_0_object:AddReply((int)528681, (int)30094, (int)30095);
			return 0;
		}
		var_457_bool = var_7_cvector == (int)30094;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_227(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)528680);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528682, (int)30098, (int)30097);
			return 0;
		}
		var_464_bool = var_7_cvector == (int)30098;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_227(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528683);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526376, (int)-1, (int)27656);
			@@@var_0_object:AddReply((int)526377, (int)-1, (int)27657);
			return 0;
		}
		var_3_string = true;
		var_473_bool = 0;
		func_2001(var_473_bool);
		if(var_473_bool != 0) {
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
			func_1463(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_876;
		var_1_object = false;
	}
Label_876:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1463(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_1001();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1016();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_959();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_1180(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_928(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_908(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1463(Obj());
				var_53_object = var_52_object;
				func_1330(var_51_bool, var_52_object);
			}
		} else {
			func_923(var_7_int);
			func_950();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_950();
	} else {
		var_14_string = "";
		func_1410("Neutral");
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
		func_1141();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_1171(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_845(var_25_object);
		var_320_string = "";
		func_1410("Neutral");
		func_959();
		func_950();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_894(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_1185(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1995(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1993(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1997(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1999(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1976(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1463(Obj());
	var_100_object = var_99_object;
	func_1272(var_98_bool, var_99_object);
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
	func_1254();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1797(var_287_bool)
{
	var_289_int = 0; var_290_string = "";
	func_1479(var_289_int, "k7q03");
	var_292_bool = var_289_int == (int)0;
	if(var_292_bool != 0) {
		var_287_bool = 1;
		return 0;
	}
	var_287_bool = 0;
	return 0;
}


func_1545(var_83_object, var_84_string, var_85_int)
{
	var_86_object = Obj(); var_87_object = Obj();
	CreateInvItem(var_87_object);
	@@var_87_object:SetItemName(var_84_string);
	var_88_object = Obj(); var_89_object = Obj(); var_90_int = 0;
	var_83_object = var_88_object;
	var_87_object = var_89_object;
	var_85_int = var_90_int;
	func_1526(var_88_object, var_89_object, var_90_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1809(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_1479(var_202_int, "ook7Burah2");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_1558(var_277_bool, var_278_object, var_279_string)
{
	var_280_int = 0; var_281_bool = 0; var_282_int = 0; var_283_bool = 0;
	GetInvItemByName(var_282_int, var_279_string);
	@@var_278_object:HasItem(var_282_int, var_283_bool);
	var_283_bool = var_277_bool;
	return 4;
}


func_1565(var_70_bool, var_71_string, var_72_string)
{
	var_73_object = Obj(); var_74_object = Obj();
	FindActor(var_74_object, var_71_string);
	var_75_bool = var_74_object == 0; //@ne
	if(var_75_bool != 0) {
		var_70_bool = 0;
		return 2;
	}
	Trigger(var_74_object, var_72_string);
	var_70_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1821(var_296_bool)
{
	var_298_int = 0; var_299_string = "";
	func_1479(var_298_int, "k7q03");
	var_301_bool = var_298_int == (int)2;
	if(var_301_bool != 0) {
		var_296_bool = 1;
		return 0;
	}
	var_296_bool = 0;
	return 0;
}


func_1577(var_28_float)
{
	var_29_float = 0; var_30_float = 0;
	GetGameTime(var_30_float);
	var_30_float = var_28_float;
	return 2;
}


func_1833()
{
	var_167_object = Obj(); var_168_object = Obj();
	CreateDiaryEntry(var_168_object, (int)422, (int)1, (int)526221);
	var_172_bool = 0; var_173_object = Obj(); var_174_int = 0;
	var_168_object = var_173_object;
	func_1898(var_172_bool, var_173_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1070()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_1180(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1598((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_1084:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_1180(var_41_bool);
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
				func_1591(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_1125;
				goto Label_1136;
		}
		Label_1125:
			var_45_bool = 0;
			func_1139(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1136;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_1084;

		}
	}
Label_1136:
	ResetAAS();
	return 12;
	
}


func_1582(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_1330(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1333:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1333;
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
	func_1441(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1846()
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateDiaryEntry(var_32_object, (int)434, (int)2, (int)526390);
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0;
	var_32_object = var_37_object;
	func_1898(var_36_bool, var_37_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1591(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1598(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1600:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1591(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1600;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1859()
{
	var_54_object = Obj(); var_55_object = Obj();
	CreateDiaryEntry(var_55_object, (int)435, (int)2, (int)526391);
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0;
	var_55_object = var_60_object;
	func_1898(var_59_bool, var_60_object, (int)434);
	return 2;
}
EMIT "Stack[-1] = 0";


func_845(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1615(var_105_object)
{
	var_106_object = Obj(); var_107_string = ""; var_108_float = 0;
	func_1926(Obj());
	var_109_object = var_106_object;
	func_1943(var_106_object, "pt_map_burah_home", (float)2);
	var_129_object = Obj();
	func_1926(var_129_object);
	@@var_105_object:ShowMap(var_129_object);
	return 0;
}


func_1872()
{
	var_191_object = Obj(); var_192_object = Obj();
	CreateDiaryEntry(var_192_object, (int)437, (int)2, (int)526393);
	var_196_bool = 0; var_197_object = Obj(); var_198_int = 0;
	var_192_object = var_197_object;
	func_1898(var_196_bool, var_197_object, (int)434);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_1809(var_201_object);
		if(var_200_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1713();
			var_212_string = "";
			func_227(var_194_object, "Neutral");
			@@@var_0_object:SetMessage((int)526373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526374, (int)27655, (int)27654);
			@@@var_0_object:AddReply((int)528676, (int)27655, (int)30089);
		} else {
				var_254_string = "";
				func_227(var_194_object, "Neutral");
				@@@var_0_object:SetMessage((int)526173);
				@@@var_0_object:ClearReplies();
				var_256_bool = 0;
				var_256_bool = 0;
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_1773(var_258_object);
				if(var_257_bool != 0) {
					var_263_bool = 0; var_264_object = Obj();
					var_264_object = var_1_object;
					func_1785(var_264_object);
					if(var_263_bool != 0) {
						var_256_bool = 1;
					}
				}
				if(var_256_bool != 0) {
					@@@var_0_object:AddReply((int)526174, (int)27455, (int)27454);
				}
				var_272_bool = 0;
				var_272_bool = 0;
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_1773(var_274_object);
				if(var_273_bool != 0) {
					var_275_bool = 0; var_276_object = Obj();
					var_276_object = var_1_object;
					func_1762(var_275_bool, var_276_object);
					if(var_275_bool != 0) {
						var_272_bool = 1;
					}
				}
				if(var_272_bool != 0) {
					@@@var_0_object:AddReply((int)526178, (int)27459, (int)27458);
				}
				var_287_bool = 0; var_288_object = Obj();
				var_288_object = var_1_object;
				func_1797(var_288_object);
				if(var_287_bool != 0) {
					@@@var_0_object:AddReply((int)526378, (int)27659, (int)27658);
				}
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_1821(var_297_object);
				if(var_296_bool != 0) {
					@@@var_0_object:AddReply((int)526387, (int)44876, (int)27667);
				}
				@@@var_0_object:AddReply((int)526181, (int)-1, (int)27461);
				@@@var_0_object:AddReply((int)528675, (int)-1, (int)30088);
				goto Label_197;
		}
	}
Label_197:
	var_236_bool = 0;
	func_2001(var_236_bool);
	if(var_236_bool != 0) {

	Label_201:
		lshWaitForAnimEnd();
		var_237_string = var_3_string;
		if(var_237_string != 0) {
		} else {
			var_238_string = "";
			var_238_string = var_2_object;
			func_1410(var_238_string);
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


func_1367(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1582(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1376:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1376;
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
	func_1441(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1885(var_45_object)
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


func_1631()
{
	var_140_object = Obj(); var_141_object = Obj();
	var_142_int = 0; var_143_string = "";
	func_1479(var_142_int, "k7q01CorpseMark");
	var_147_bool = var_142_int == (int)0;
	if(var_147_bool != 0) {
		SetVariable("k7q01CorpseMark", (int)1);
		func_1926(Obj());
		var_150_object = var_141_object;
		var_155_float = 0;
		func_1577(var_155_float);
		@@var_141_object:AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", (int)3, (int)526214, var_155_float);
		var_156_bool = 0; var_157_string = ""; var_158_string = "";
		func_1565(var_156_bool, "quest_k7_01", "place_corpse");
		var_141_object = 0;
	}
	return 2;
}


func_1898(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0;
	func_1885(Obj());
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


func_1139(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_1141()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1146(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_894(var_0_object)
{
	var_7_bool = 0;
	func_1180(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_903:
	func_1070();
	goto Label_903;
}
EMIT "Return(); Pop(0)";


func_1663()
{
	SetVariable("ook7Burah1", (int)1);
	return 0;
}


func_1410(var_238_string)
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


func_1154(var_209_object, var_210_string, var_211_int)
{
	var_212_int = 0; var_213_int = 0;
	@@var_209_object:GetProperty(var_210_string, var_213_int);
	var_214_int = var_213_int + var_211_int;
	@@var_209_object:SetProperty(var_210_string, var_214_int);
	return 2;
}


func_1669(var_161_object)
{
	var_163_int = 0; var_164_int = 0;
	SetVariable("k7q01", (int)4);
	func_1833();
	@@var_161_object:RemoveItemByType(var_164_int, "bird_balahon", (int)1);
	return 2;
}


func_1926(var_17_object)
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


func_1161(var_15_bool, var_16_cvector)
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


func_908(var_32_bool)
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
	func_1171(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1426(var_216_string, var_217_bool)
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


func_1682()
{
	var_15_object = Obj(); var_16_object = Obj();
	func_1926(Obj());
	var_17_object = var_16_object;
	var_28_float = 0;
	func_1577(var_28_float);
	@@var_16_object:AddMark("k7q03BurahGotoFather", "pt_map_burah_home", (int)0, (int)526394, var_28_float);
	func_1846();
	func_1859();
	var_62_object = Obj(); var_63_string = "";
	func_1484(var_62_object, "quest_k7_03");
	var_70_bool = 0; var_71_string = ""; var_72_string = "";
	func_1565(var_70_bool, "quest_k7_03", "place_family");
	return 2;
}
EMIT "Stack[-1] = 0";


func_1171(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_1161(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_1943(var_106_object, var_107_string, var_108_float)
{
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_object = Obj(); var_113_bool = 0; var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_object = Obj(); var_117_bool = 0;
	GetMainOutdoorScene(var_116_object);
	var_118_bool = var_116_object == 0; //@ne
	if(var_118_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_116_object:GetLocator(var_107_string, var_117_bool, var_114_cvector, var_115_cvector);
	var_120_bool = var_117_bool == 0; //@nz
	if(var_120_bool != 0) {
		var_122_int = "Warning: outdoor scene locator " + var_107_string;
		var_124_int = var_122_int + " doesnt exist";
		Trace(var_124_int);
	}
	@@var_116_object:GetMap(var_106_object);
	var_125_bool = var_106_object == 0; //@ne
	if(var_125_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_127_float = GetByIndex(var_114_cvector, 0);
	var_128_float = GetByIndex(var_114_cvector, 2);
	@@var_106_object:SetMapParams(var_127_float, var_128_float, var_108_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_923(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1180(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_928(var_15_bool)
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
	func_1146(var_22_float, var_23_object);
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


func_1185(var_37_bool, var_38_object, var_39_float)
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
	func_1469(var_64_cvector, var_65_cvector);
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
	func_2001(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1248;
		LookAsyncCamera("head");
	}
Label_1248:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1441(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_2001(var_136_bool);
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


func_1456()
{
	var_10_bool = 0;
	func_2001(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1713()
{
	SetVariable("ook7Burah2", (int)1);
	return 0;
}


func_950()
{
	var_322_float = 0; var_323_float = 0;
	rand(var_323_float, (int)8, (int)16);
	SetTimer((int)10, var_323_float);
	return 2;
}


func_1463(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1976(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x7c7";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1719(var_80_object)
{
	Trace("tvirin 5 is given");
	var_83_object = Obj(); var_84_string = ""; var_85_int = 0;
	var_80_object = var_83_object;
	func_1545(var_83_object, "tvirin", (int)5);
	return 0;
}


func_1469(var_64_cvector, var_65_cvector)
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


func_959()
{
	KillTimer((int)10);
	return 0;
}


func_1730()
{
	func_1872();
	var_199_bool = 0; var_200_string = ""; var_201_string = "";
	func_1565(var_199_bool, "quest_k7_03", "completed");
	return 0;
}


func_1479(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


func_1993(var_86_int)
{
	var_86_int = 515592;
	return 0;
}


func_1995(var_85_int)
{
	var_85_int = 511961;
	return 0;
}


func_1740(var_202_object)
{
	Trace("money2000 is given");
	var_205_object = Obj(); var_206_int = 0;
	var_202_object = var_205_object;
	func_1507(var_205_object, (int)2000);
	return 0;
}


func_1997(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png";
	return 0;
}


func_1484(var_62_object, var_63_string)
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


func_1999(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png";
	return 0;
}


func_2001(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1750()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_1495(var_99_int, var_100_int)
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateIntVector(var_102_object);
	@@var_102_object:add(var_99_int);
	@@var_102_object:add(var_100_int);
	SendWorldWndMessage((int)3, var_102_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1016()
{
	StopGroup0();
	func_959();
	var_8_string = "";
	func_1410("Neutral");
	func_950();
	return 0;
}


func_1756()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1762(var_275_bool, var_276_object)
{
	var_277_bool = 0; var_278_object = Obj(); var_279_string = "";
	var_276_object = var_278_object;
	func_1558(var_277_bool, var_278_object, "bird_balahon");
	if(var_277_bool != 0) {
		var_275_bool = 1;
		return 0;
	}
	var_275_bool = 0;
	return 0;
}


func_227(var_2_object, var_212_string)
{
	var_213_bool = 0;
	func_2001(var_213_bool);
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
	func_1426(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	return 0;
	
}


func_1507(var_205_object, var_206_int)
{
	var_207_int = 0; var_208_int = 0;
	var_209_object = Obj(); var_210_string = ""; var_211_int = 0;
	var_205_object = var_209_object;
	var_206_int = var_211_int;
	func_1154(var_209_object, "money", var_211_int);
	var_216_bool = var_206_int > (int)0;
	if(var_216_bool != 0) {
		GetInvItemByName(var_208_int, "Money");
		var_218_int = 0; var_219_int = 0;
		var_208_int = var_218_int;
		var_206_int = var_219_int;
		func_1495(var_218_int, var_219_int);
	}
	return 2;
}


func_1254()
{
	var_313_bool = 0; var_314_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_316_bool = 0;
	func_2001(var_316_bool);
	if(var_316_bool != 0) {
	} else {
		HasAnimationTrack(var_314_bool, "head");
		var_318_bool = var_314_bool;
		if(var_318_bool == 0) goto Label_1271;
		UnlookAsync("head");
	}
Label_1271:
	return 2;
	
}


func_1001()
{
	func_1141();
	func_959();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1773(var_257_bool)
{
	var_259_int = 0; var_260_string = "";
	func_1479(var_259_int, "k7q01");
	var_262_bool = var_259_int == (int)3;
	if(var_262_bool != 0) {
		var_257_bool = 1;
		return 0;
	}
	var_257_bool = 0;
	return 0;
}


func_1526(var_88_object, var_89_object, var_90_int)
{
	var_91_int = 0; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_int = 0; var_96_bool = 0;
	@@var_89_object:GetItemID(var_94_int);
	GetInvItemProperty(var_95_int, var_94_int, "Category");
	@@var_88_object:AddItem(var_96_bool, var_89_object, var_95_int, var_90_int);
	var_98_bool = var_96_bool == 0; //@nz
	if(var_98_bool != 0) {
		@@var_88_object:DropItems(var_89_object, var_90_int);
	} else {
		var_99_int = 0; var_100_int = 0;
		var_94_int = var_99_int;
		var_90_int = var_100_int;
		func_1495(var_99_int, var_100_int);
	}
	return 6;
	
}


func_1272(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1330(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1367(var_140_bool, var_141_object);
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
		func_1367(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1330(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1328;
	
Label_1328:
	var_98_bool = 1;
	return 4;
	
}


func_1785(var_263_bool)
{
	var_265_int = 0; var_266_string = "";
	func_1479(var_265_int, "ook7Burah1");
	var_268_bool = var_265_int == (int)0;
	if(var_268_bool != 0) {
		var_263_bool = 1;
		return 0;
	}
	var_263_bool = 0;
	return 0;
}


