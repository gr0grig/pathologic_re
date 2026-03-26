// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,AddItem/3,AddItem/4,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1,ClearSubContainer/1
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:Smile|W:What|W:Grin|W:Untrust|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|W:ui/NPC_Andrei.png|W:ui/NPC_Andrei_b.png|W:oob5Andrei1|W:oob2Andrei1|W:money 4000 is given|W:playsound|W:givemoney|W:oob2Andrei2|W:b2q03|W:quest_b2_03|W:place_maria|W:b2q03GoodShop|W:pt_b2q03_good_shop|A:AddMark|W:grass_brown_tvir|A:RemoveItemByType|W:completed|W:b2AndreiVisit|A:ShowMap|W:b2q03_1|W:oob2Andrei3|A:SetReturnValue|W:b5q01|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:samopal_ammo|W:rifle_ammo|W:revolver_ammo|W:tvirin|W:Samopal|W:branch|W:tr_andrei|W:mt_andrei|W:d12_andrei
// @GLOBALS: 0:object:
// @RUN_OP: 0x8d8
// @RUN_TASK: 13
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc4 vars=int,int
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x25c vars=int,int
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x581 vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6d8 vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7b0 vars=int,int
// @TASK_11: vars=object params=2
// @TASK_12: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8ae vars=int,int
// @TASK_13: vars=cvector params=0
// @EVENT_7: op=0x921 vars=int
// @EVENT_6: op=0x947 vars=
// @EVENT_5: op=0x956 vars=
// @EVENT_45: op=0x963 vars=bool
// @EVENT_0: op=0x96f vars=object
// @PE: 0x0,0x1a,0x79,0xae,0xc4,0x19b,0x246,0x25c,0x51e,0x56b,0x581,0x688,0x6c2,0x6d8,0x75b,0x79a,0x7b0,0x85e,0x898,0x8ae,0x8d8,0x921,0x947,0x963,0xae0,0xb18,0xbbf,0xbe7,0xbed,0xbf3,0xbfd,0xc03,0xc09,0xc36,0xc3c,0xc4c,0xc58,0xc64,0xc6a,0xc6f,0xc7b,0xc87,0xc93,0xc9d,0xca9,0xcb5,0xcc1,0xccd,0xcd9,0xce5

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_bool = 0;
	func_3045(var_33_bool);
	if(var_33_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2891();
		var_37_bool = var_32_bool == (int)19127;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_174(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)517994);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517995, (int)23147, (int)19128);
			return 0;
		}
		var_60_bool = var_32_bool == (int)23147;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_174(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)521978);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521979, (int)23149, (int)23148);
			@@@var_0_bool:AddReply((int)521984, (int)-1, (int)23153);
			return 0;
		}
		var_70_bool = var_32_bool == (int)23149;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_174(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)521980);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521981, (int)23151, (int)23150);
			@@@var_0_bool:AddReply((int)521985, (int)23157, (int)23154);
			return 0;
		}
		var_80_bool = var_32_bool == (int)23151;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_174(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)521982);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521987, (int)-1, (int)23156);
			@@@var_0_bool:AddReply((int)521983, (int)23157, (int)23152);
			@@@var_0_bool:AddReply((int)521986, (int)-1, (int)23155);
			return 0;
		}
		var_93_bool = var_32_bool == (int)23157;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_174(var_33_cvector, "What");
			@@@var_0_bool:SetMessage((int)521988);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521989, (int)-1, (int)23158);
			@@@var_0_bool:AddReply((int)521990, (int)-1, (int)23159);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_3045(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5";
	
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2891();
		var_37_bool = var_33_cvector == (int)32376;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_bool;
			func_3081();
		}
		var_80_bool = var_33_cvector == (int)32374;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_bool;
			func_3081();
		}
		var_84_bool = var_33_cvector == (int)32379;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_bool;
			func_3098(var_86_object);
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_bool;
			func_3059(var_119_object);
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_bool;
			func_3069();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_bool;
			func_3160();
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_bool;
			func_3132(var_160_object);
		}
		var_186_bool = var_33_cvector == (int)32401;
		if(var_186_bool != 0) {
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_bool;
			func_3172();
		}
		var_192_bool = var_33_cvector == (int)32403;
		if(var_192_bool != 0) {
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_bool;
			func_3148();
		}
		var_214_bool = var_33_cvector == (int)20575;
		if(var_214_bool != 0) {
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_bool;
			func_3053();
		}
		var_220_bool = var_33_cvector == (int)20587;
		if(var_220_bool != 0) {
			var_221_object = Obj(); var_222_object = Obj();
			var_221_object = var_1_object;
			var_222_object = var_0_bool;
			func_3178(var_222_object);
		}
		var_225_bool = var_32_bool == (int)32369;
		if(var_225_bool != 0) {
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_3183(var_227_object);
			if(var_226_bool != 0) {
				var_232_object = Obj(); var_233_object = Obj();
				var_232_object = var_1_object;
				var_233_object = var_0_bool;
				func_3075();
				var_236_object = Obj(); var_237_object = Obj();
				var_236_object = var_1_object;
				var_237_object = var_0_bool;
				func_3126();
				var_240_string = "";
				func_582(var_33_cvector, "Neutral");
				@@@var_0_bool:SetMessage((int)531038);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)531227, (int)32541, (int)32540);
				@@@var_0_bool:AddReply((int)531231, (int)32545, (int)32544);
				return 0;
			}
			var_264_string = "";
			func_582(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)518214);
			@@@var_0_bool:ClearReplies();
			var_266_bool = 0; var_267_object = Obj();
			var_267_object = var_1_object;
			func_3207(var_267_object);
			if(var_266_bool != 0) {
				@@@var_0_bool:AddReply((int)531041, (int)32373, (int)32372);
			}
			var_275_bool = 0;
			var_275_bool = 0;
			var_276_bool = 0;
			var_276_bool = 0;
			var_277_bool = 0; var_278_object = Obj();
			var_278_object = var_1_object;
			func_3219(var_277_bool, var_278_object);
			if(var_277_bool != 0) {
				var_286_bool = 0; var_287_object = Obj();
				var_287_object = var_1_object;
				func_3195(var_287_object);
				if(var_286_bool != 0) {
					var_276_bool = 1;
				}
			}
			if(var_276_bool != 0) {
				var_292_bool = 0; var_293_object = Obj();
				var_293_object = var_1_object;
				func_3253(var_293_object);
				var_298_bool = var_292_bool == 0; //@nz
				if(var_298_bool != 0) {
					var_275_bool = 1;
				}
			}
			if(var_275_bool != 0) {
				@@@var_0_bool:AddReply((int)531048, (int)32378, (int)32377);
			}
			var_302_bool = 0;
			var_302_bool = 0;
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_3241(var_305_object);
			if(var_304_bool != 0) {
				var_310_bool = 0; var_311_object = Obj();
				var_311_object = var_1_object;
				func_3229(var_311_object);
				var_316_bool = var_310_bool == 0; //@nz
				if(var_316_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 0) {
				var_317_bool = 0; var_318_object = Obj();
				var_318_object = var_1_object;
				func_3265(var_318_object);
				if(var_317_bool != 0) {
					var_302_bool = 1;
				}
			}
			if(var_302_bool != 0) {
				@@@var_0_bool:AddReply((int)531081, (int)32402, (int)32401);
			}
			var_326_bool = 0; var_327_object = Obj();
			var_327_object = var_1_object;
			func_3301(var_327_object);
			if(var_326_bool != 0) {
				@@@var_0_bool:AddReply((int)519410, (int)20576, (int)20575);
			}
			@@@var_0_bool:AddReply((int)518215, (int)20584, (int)19328);
			@@@var_0_bool:AddReply((int)518216, (int)-1, (int)19329);
			return 0;
		}
		var_342_bool = var_32_bool == (int)20584;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519419);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519420, (int)20586, (int)20585);
			@@@var_0_bool:AddReply((int)519424, (int)20586, (int)20589);
			return 0;
		}
		var_352_bool = var_32_bool == (int)20586;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519421);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519422, (int)-1, (int)20587);
			@@@var_0_bool:AddReply((int)519423, (int)-1, (int)20588);
			return 0;
		}
		var_362_bool = var_32_bool == (int)20576;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_582(var_33_cvector, "Grin");
			@@@var_0_bool:SetMessage((int)519411);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519412, (int)20578, (int)20577);
			@@@var_0_bool:AddReply((int)519425, (int)20582, (int)20591);
			return 0;
		}
		var_372_bool = var_32_bool == (int)20578;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_582(var_33_cvector, "Grin");
			@@@var_0_bool:SetMessage((int)519413);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519414, (int)20580, (int)20579);
			@@@var_0_bool:AddReply((int)519426, (int)20582, (int)20592);
			return 0;
		}
		var_382_bool = var_32_bool == (int)20580;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519415);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519416, (int)20582, (int)20581);
			@@@var_0_bool:AddReply((int)519427, (int)-1, (int)20594);
			return 0;
		}
		var_392_bool = var_32_bool == (int)20582;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519417);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519418, (int)-1, (int)20583);
			@@@var_0_bool:AddReply((int)519428, (int)-1, (int)20595);
			return 0;
		}
		var_402_bool = var_32_bool == (int)32402;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)531082);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531217, (int)32529, (int)32528);
			@@@var_0_bool:AddReply((int)531221, (int)32536, (int)32532);
			return 0;
		}
		var_412_bool = var_32_bool == (int)32529;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)531218);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531219, (int)32531, (int)32530);
			@@@var_0_bool:AddReply((int)531222, (int)32536, (int)32533);
			return 0;
		}
		var_422_bool = var_32_bool == (int)32536;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_582(var_33_cvector, "Grin");
			@@@var_0_bool:SetMessage((int)531224);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531225, (int)-1, (int)32538);
			@@@var_0_bool:AddReply((int)531226, (int)-1, (int)32539);
			return 0;
		}
		var_432_bool = var_32_bool == (int)32531;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)531220);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531083, (int)-1, (int)32403);
			return 0;
		}
		var_439_bool = var_32_bool == (int)32378;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_582(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)531049);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531214, (int)32526, (int)32524);
			@@@var_0_bool:AddReply((int)531215, (int)32526, (int)32525);
			return 0;
		}
		var_449_bool = var_32_bool == (int)32526;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)531216);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531050, (int)-1, (int)32379);
			return 0;
		}
		var_456_bool = var_32_bool == (int)32373;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)531042);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531043, (int)-1, (int)32374);
			return 0;
		}
		var_463_bool = var_32_bool == (int)32545;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)531232);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531233, (int)32541, (int)32546);
			@@@var_0_bool:AddReply((int)531234, (int)-1, (int)32547);
			return 0;
		}
		var_473_bool = var_32_bool == (int)32541;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_582(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)531228);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531238, (int)32553, (int)32552);
			@@@var_0_bool:AddReply((int)531229, (int)32543, (int)32542);
			return 0;
		}
		var_483_bool = var_32_bool == (int)32543;
		if(var_483_bool != 0) {
			var_484_string = "";
			func_582(var_33_cvector, "Untrust");
			@@@var_0_bool:SetMessage((int)531230);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531235, (int)-1, (int)32549);
			@@@var_0_bool:AddReply((int)531240, (int)32553, (int)32554);
			return 0;
		}
		var_493_bool = var_32_bool == (int)32553;
		if(var_493_bool != 0) {
			var_494_string = "";
			func_582(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)531239);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531236, (int)32551, (int)32550);
			return 0;
		}
		var_500_bool = var_32_bool == (int)32551;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_582(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)531237);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531045, (int)-1, (int)32376);
			@@@var_0_bool:AddReply((int)531040, (int)-1, (int)32371);
			return 0;
		}
		var_3_object = true;
		var_509_bool = 0;
		func_3045(var_509_bool);
		if(var_509_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x25d";
	
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2891();
		var_37_bool = var_33_cvector == (int)20030;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_bool;
			func_3047();
		}
		var_43_bool = var_33_cvector == (int)33368;
		if(var_43_bool != 0) {
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_bool;
			func_3178(var_45_object);
		}
		var_48_bool = var_32_bool == (int)20028;
		if(var_48_bool != 0) {
			var_49_string = "";
			func_1387(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)518917);
			@@@var_0_bool:ClearReplies();
			var_67_bool = 0;
			var_67_bool = 0;
			var_68_bool = 0; var_69_object = Obj();
			var_69_object = var_1_object;
			func_3277(var_69_object);
			if(var_68_bool != 0) {
				var_76_bool = 0; var_77_object = Obj();
				var_77_object = var_1_object;
				func_3289(var_77_object);
				if(var_76_bool != 0) {
					var_67_bool = 1;
				}
			}
			if(var_67_bool != 0) {
				@@@var_0_bool:AddReply((int)518919, (int)20031, (int)20030);
			}
			@@@var_0_bool:AddReply((int)531963, (int)-1, (int)33368);
			@@@var_0_bool:AddReply((int)518918, (int)-1, (int)20029);
			return 0;
		}
		var_92_bool = var_32_bool == (int)20031;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_1387(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)518920);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518923, (int)20039, (int)20034);
			@@@var_0_bool:AddReply((int)518921, (int)20033, (int)20032);
			return 0;
		}
		var_102_bool = var_32_bool == (int)20033;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_1387(var_33_cvector, "Grin");
			@@@var_0_bool:SetMessage((int)518922);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518924, (int)20037, (int)20035);
			@@@var_0_bool:AddReply((int)518925, (int)-1, (int)20036);
			return 0;
		}
		var_112_bool = var_32_bool == (int)20037;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_1387(var_33_cvector, "What");
			@@@var_0_bool:SetMessage((int)518926);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518927, (int)-1, (int)20038);
			return 0;
		}
		var_119_bool = var_32_bool == (int)20039;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_1387(var_33_cvector, "Grin");
			@@@var_0_bool:SetMessage((int)518928);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518930, (int)20042, (int)20041);
			@@@var_0_bool:AddReply((int)518929, (int)-1, (int)20040);
			return 0;
		}
		var_129_bool = var_32_bool == (int)20042;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_1387(var_33_cvector, "Grin");
			@@@var_0_bool:SetMessage((int)518931);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518932, (int)-1, (int)20043);
			return 0;
		}
		var_3_object = true;
		var_135_bool = 0;
		func_3045(var_135_bool);
		if(var_135_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x582";
	
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2891();
		var_37_bool = var_33_cvector == (int)33378;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_bool;
			func_3178(var_39_object);
		}
		var_42_bool = var_32_bool == (int)33377;
		if(var_42_bool != 0) {
			var_43_string = "";
			func_1730(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)531971);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531972, (int)-1, (int)33378);
			@@@var_0_bool:AddReply((int)531973, (int)-1, (int)33379);
			return 0;
		}
		var_3_object = true;
		var_67_bool = 0;
		func_3045(var_67_bool);
		if(var_67_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6d9";
	
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2891();
		var_37_bool = var_32_bool == (int)36906;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_1946(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535231);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_bool:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_bool:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_66_bool = var_32_bool == (int)36953;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_1946(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535277);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_bool:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_76_bool = var_32_bool == (int)36957;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_1946(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535281);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_bool:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_object = true;
		var_85_bool = 0;
		func_3045(var_85_bool);
		if(var_85_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7b1";
	
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_cvector)
{
	if((int)1 != 0) {
		func_2891();
		var_37_bool = var_32_int == (int)42563;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_2200(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)540554);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_bool:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_object = true;
		var_62_bool = 0;
		func_3045(var_62_bool);
		if(var_62_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8af";
	
}


task_13_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_int)
{
	var_34_bool = var_32_int == (int)10;
	if(var_34_bool != 0) {
		func_2333();
		var_36_bool = 0;
		var_36_bool = 0;
		var_37_bool = 0;
		func_2554(var_37_bool);
		if(var_37_bool != 0) {
			var_40_bool = 0;
			func_2302(var_40_bool);
			if(var_40_bool != 0) {
				var_36_bool = 1;
			}
		}
		if(var_36_bool != 0) {
			var_57_bool = 0;
			func_2282(var_57_bool);
			if(var_57_bool != 0) {
				var_76_bool = 0; var_77_object = Obj();
				func_2924(Obj());
				var_78_object = var_77_object;
				func_2704(var_76_bool, var_77_object);
			}
		} else {
			func_2297(var_32_int);
			func_2324();
		}
	}
	return 0;
	
}


task_13_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_2515();
	func_2333();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_13_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	StopGroup0();
	func_2333();
	var_33_string = "";
	func_2845("Neutral");
	func_2324();
	return 0;
}


task_13_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_bool)
{
	var_33_bool = var_32_bool;
	if(var_33_bool != 0) {
		func_2324();
	} else {
		var_39_string = "";
		func_2845("Neutral");
	}
	return 0;
	
}


task_13_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	IsOverrideActive(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		EventDisable(0);
		func_2515();
		var_36_bool = 0; var_37_object = Obj();
		var_32_object = var_37_object;
		func_2545(var_36_bool, var_37_object);
		EventEnable(0);
		var_50_object = Obj();
		var_32_object = var_50_object;
		func_3556(var_32_object, var_33_bool, var_34_bool, var_50_object);
		var_818_string = "";
		func_2845("Neutral");
		func_2333();
		func_2324();
	}
	return 2;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_2268(var_31_cvector);
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_520_bool = 0;
	func_3045(var_520_bool);
	if(var_520_bool != 0) {
		var_521_string = "";
		func_2845("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_522_bool = var_0_bool;
	if(var_522_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_3075()
{
	SetVariable("oob2Andrei2", (int)1);
	return 0;
}


func_3081()
{
	SetVariable("b2q03", (int)1);
	func_3324();
	func_3337();
	var_73_bool = 0; var_74_string = ""; var_75_string = "";
	func_2981(var_73_bool, "quest_b2_03", "place_maria");
	return 0;
}


func_3337()
{
	var_65_object = Obj(); var_66_object = Obj();
	CreateDiaryEntry(var_66_object, (int)586, (int)2, (int)531047);
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0;
	var_66_object = var_71_object;
	func_3415(var_70_bool, var_71_object, (int)585);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1802(var_0_bool, var_701_int, var_702_object)
{
	var_704_object = Obj(); var_705_bool = 0; var_706_int = 0; var_707_bool = 0; var_708_object = Obj(); var_709_bool = 0; var_710_int = 0; var_711_bool = 0;
	var_0_bool = var_702_object;
	var_712_bool = 0; var_713_object = Obj(); var_714_float = 0;
	var_702_object = var_713_object;
	func_2559(var_712_bool, var_713_object, (float)70.0);
	var_715_bool = var_712_bool == 0; //@nz
	if(var_715_bool != 0) {
		var_701_int = -2;
		return 8;
	}
	CreateDialog(var_708_object);
	var_716_int = 0;
	func_3039(var_716_int);
	@@var_708_object:SetNPCName(var_716_int);
	var_717_int = 0;
	func_3037(var_717_int);
	@@var_708_object:SetNPCDescription(var_717_int);
	var_718_string = "";
	func_3041(var_718_string);
	@@var_708_object:SetPhoto(var_718_string);
	var_719_string = "";
	func_3043(var_719_string);
	@@var_708_object:SetPhoto2(var_719_string);
	var_720_int = 0;
	func_3539(var_720_int);
	@@var_708_object:SetPlayerName(var_720_int);
	IsOverrideActive(var_709_bool);
	var_721_bool = var_709_bool;
	if(var_721_bool != 0) {
		var_701_int = -2;
		return 8;
	}
	DoDialog(var_708_object);
	var_722_bool = 0; var_723_object = Obj();
	func_2924(Obj());
	var_724_object = var_723_object;
	func_2646(var_722_bool, var_723_object);
	var_725_object = Obj(); var_726_object = Obj();
	var_702_object = var_725_object;
	var_708_object = var_726_object;
	TaskCall(10);
	func_1883(var_727_object, var_728_object, var_729_string, var_730_bool, var_725_object, var_726_object);
	TaskReturn();
	@@var_708_object:IsDialogEnd(var_711_bool);
	
Label_1865:
	var_758_bool = var_711_bool == 0; //@nz
	if(var_758_bool != 0) {
		sync();
		@@var_708_object:IsDialogEnd(var_711_bool);
		goto Label_1865;
	}
	var_702_object = Obj();
	func_2628();
	StopDialog(var_708_object);
	@@var_708_object:GetReturnValue((int)-1);
	var_710_int = var_701_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2061(var_0_bool, var_762_int, var_763_object)
{
	var_765_object = Obj(); var_766_bool = 0; var_767_int = 0; var_768_bool = 0; var_769_object = Obj(); var_770_bool = 0; var_771_int = 0; var_772_bool = 0;
	var_0_bool = var_763_object;
	var_773_bool = 0; var_774_object = Obj(); var_775_float = 0;
	var_763_object = var_774_object;
	func_2559(var_773_bool, var_774_object, (float)70.0);
	var_776_bool = var_773_bool == 0; //@nz
	if(var_776_bool != 0) {
		var_762_int = -2;
		return 8;
	}
	CreateDialog(var_769_object);
	var_777_int = 0;
	func_3039(var_777_int);
	@@var_769_object:SetNPCName(var_777_int);
	var_778_int = 0;
	func_3037(var_778_int);
	@@var_769_object:SetNPCDescription(var_778_int);
	var_779_string = "";
	func_3041(var_779_string);
	@@var_769_object:SetPhoto(var_779_string);
	var_780_string = "";
	func_3043(var_780_string);
	@@var_769_object:SetPhoto2(var_780_string);
	var_781_int = 0;
	func_3539(var_781_int);
	@@var_769_object:SetPlayerName(var_781_int);
	IsOverrideActive(var_770_bool);
	var_782_bool = var_770_bool;
	if(var_782_bool != 0) {
		var_762_int = -2;
		return 8;
	}
	DoDialog(var_769_object);
	var_783_bool = 0; var_784_object = Obj();
	func_2924(Obj());
	var_785_object = var_784_object;
	func_2646(var_783_bool, var_784_object);
	var_786_object = Obj(); var_787_object = Obj();
	var_763_object = var_786_object;
	var_769_object = var_787_object;
	TaskCall(12);
	func_2142(var_788_object, var_789_object, var_790_string, var_791_bool, var_786_object, var_787_object);
	TaskReturn();
	@@var_769_object:IsDialogEnd(var_772_bool);
	
Label_2124:
	var_816_bool = var_772_bool == 0; //@nz
	if(var_816_bool != 0) {
		sync();
		@@var_769_object:IsDialogEnd(var_772_bool);
		goto Label_2124;
	}
	var_763_object = Obj();
	func_2628();
	StopDialog(var_769_object);
	@@var_769_object:GetReturnValue((int)-1);
	var_771_int = var_762_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2324()
{
	var_820_float = 0; var_821_float = 0;
	rand(var_821_float, (int)8, (int)16);
	SetTimer((int)10, var_821_float);
	return 2;
}


func_3350()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)587, (int)2, (int)531051);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_3415(var_110_bool, var_111_object, (int)585);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2840()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_3098(var_85_object)
{
	var_87_object = Obj(); var_88_int = 0; var_89_object = Obj(); var_90_int = 0;
	func_3443(Obj());
	var_91_object = var_89_object;
	var_102_float = 0;
	func_2993(var_102_float);
	@@var_89_object:AddMark("b2q03GoodShop", "pt_b2q03_good_shop", (int)3, (int)531061, var_102_float);
	func_3350();
	@@var_85_object:RemoveItemByType(var_90_int, "grass_brown_tvir", (int)10);
	var_115_bool = 0; var_116_string = ""; var_117_string = "";
	func_2981(var_115_bool, "quest_b2_03", "completed");
	return 4;
}
EMIT "Stack[-2] = 0";


func_2845(var_304_string)
{
	var_305_bool = 0; var_306_float = 0; var_307_float = 0; var_308_bool = 0; var_309_float = 0; var_310_float = 0;
	lshHasAnimation(var_308_bool, var_304_string);
	var_311_bool = var_308_bool;
	if(var_311_bool != 0) {
		lshGetAnimTimes(var_304_string, var_309_float, var_310_float);
		lshPlayAnimation(var_309_float, var_310_float, (bool)0);
	} else {
		var_314_int = "Can't find lsh animation : " + var_304_string;
		Trace(var_314_int);
	}
	return 6;
	
}


func_1310(var_0_bool, var_1_object, var_2_object, var_3_object, var_554_object, var_555_object)
{
	var_0_bool = var_555_object;
	var_1_object = var_554_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_561_string = "";
		func_1387(var_555_object, "Smile");
		@@@var_0_bool:SetMessage((int)518917);
		@@@var_0_bool:ClearReplies();
		var_570_bool = 0;
		var_570_bool = 0;
		var_571_bool = 0; var_572_object = Obj();
		var_572_object = var_1_object;
		func_3277(var_572_object);
		if(var_571_bool != 0) {
			var_577_bool = 0; var_578_object = Obj();
			var_578_object = var_1_object;
			func_3289(var_578_object);
			if(var_577_bool != 0) {
				var_570_bool = 1;
			}
		}
		if(var_570_bool != 0) {
			@@@var_0_bool:AddReply((int)518919, (int)20031, (int)20030);
		}
		@@@var_0_bool:AddReply((int)531963, (int)-1, (int)33368);
		@@@var_0_bool:AddReply((int)518918, (int)-1, (int)20029);
		goto Label_1357;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x522";
	}
Label_1357:
	var_592_bool = 0;
	func_3045(var_592_bool);
	if(var_592_bool != 0) {

	Label_1361:
		lshWaitForAnimEnd();
		var_593_object = var_3_object;
		if(var_593_object != 0) {
		} else {
			var_594_string = "";
			var_594_string = var_2_object;
			func_2845(var_594_string);
			goto Label_1361;
	}
		PlayAnimation("all", "idle");

	Label_1376:
		WaitForAnimEnd();
		var_597_object = var_3_object;
		if(var_597_object != 0) {
			goto Label_1386;
		}
		PlayAnimation("all", "idle");
		goto Label_1376;
	}
	goto Label_1386;
	
Label_1386:
	return 0;
	
}


func_2333()
{
	KillTimer((int)10);
	return 0;
}


func_3363()
{
	var_205_object = Obj(); var_206_object = Obj();
	CreateDiaryEntry(var_206_object, (int)592, (int)2, (int)531080);
	var_210_bool = 0; var_211_object = Obj(); var_212_int = 0;
	var_206_object = var_211_object;
	func_3415(var_210_bool, var_211_object, (int)585);
	return 2;
}
EMIT "Stack[-1] = 0";


func_40(var_0_bool, var_112_int, var_113_object)
{
	var_115_object = Obj(); var_116_bool = 0; var_117_int = 0; var_118_bool = 0; var_119_object = Obj(); var_120_bool = 0; var_121_int = 0; var_122_bool = 0;
	var_0_bool = var_113_object;
	var_123_bool = 0; var_124_object = Obj(); var_125_float = 0;
	var_113_object = var_124_object;
	func_2559(var_123_bool, var_124_object, (float)70.0);
	var_170_bool = var_123_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_112_int = -2;
		return 8;
	}
	CreateDialog(var_119_object);
	var_171_int = 0;
	func_3039(var_171_int);
	@@var_119_object:SetNPCName(var_171_int);
	var_172_int = 0;
	func_3037(var_172_int);
	@@var_119_object:SetNPCDescription(var_172_int);
	var_173_string = "";
	func_3041(var_173_string);
	@@var_119_object:SetPhoto(var_173_string);
	var_174_string = "";
	func_3043(var_174_string);
	@@var_119_object:SetPhoto2(var_174_string);
	var_175_int = 0;
	func_3539(var_175_int);
	@@var_119_object:SetPlayerName(var_175_int);
	IsOverrideActive(var_120_bool);
	var_183_bool = var_120_bool;
	if(var_183_bool != 0) {
		var_112_int = -2;
		return 8;
	}
	DoDialog(var_119_object);
	var_184_bool = 0; var_185_object = Obj();
	func_2924(Obj());
	var_186_object = var_185_object;
	func_2646(var_184_bool, var_185_object);
	var_274_object = Obj(); var_275_object = Obj();
	var_113_object = var_274_object;
	var_119_object = var_275_object;
	TaskCall(2);
	func_121(var_276_object, var_277_object, var_278_string, var_279_bool, var_274_object, var_275_object);
	TaskReturn();
	@@var_119_object:IsDialogEnd(var_122_bool);
	
Label_103:
	var_320_bool = var_122_bool == 0; //@nz
	if(var_320_bool != 0) {
		sync();
		@@var_119_object:IsDialogEnd(var_122_bool);
		goto Label_103;
	}
	var_113_object = Obj();
	func_2628();
	StopDialog(var_119_object);
	@@var_119_object:GetReturnValue((int)-1);
	var_121_int = var_112_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2861(var_285_string, var_286_bool)
{
	var_289_bool = 0; var_290_float = 0; var_291_float = 0; var_292_bool = 0; var_293_float = 0; var_294_float = 0;
	lshHasAnimation(var_292_bool, var_285_string);
	var_295_bool = var_292_bool;
	if(var_295_bool != 0) {
		lshGetAnimTimes(var_285_string, var_293_float, var_294_float);
		lshPlayAnimation(var_293_float, var_294_float, var_286_bool);
	} else {
		var_297_int = "Can't find lsh animation : " + var_285_string;
		Trace(var_297_int);
	}
	return 6;
	
}


func_3376()
{
	var_197_object = Obj(); var_198_object = Obj();
	CreateDiaryEntry(var_198_object, (int)591, (int)2, (int)531079);
	var_202_bool = 0; var_203_object = Obj(); var_204_int = 0;
	var_198_object = var_203_object;
	func_3415(var_202_bool, var_203_object, (int)588);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3126()
{
	SetVariable("b2AndreiVisit", (int)1);
	return 0;
}


func_1591(var_0_bool, var_633_int, var_634_object)
{
	var_636_object = Obj(); var_637_bool = 0; var_638_int = 0; var_639_bool = 0; var_640_object = Obj(); var_641_bool = 0; var_642_int = 0; var_643_bool = 0;
	var_0_bool = var_634_object;
	var_644_bool = 0; var_645_object = Obj(); var_646_float = 0;
	var_634_object = var_645_object;
	func_2559(var_644_bool, var_645_object, (float)70.0);
	var_647_bool = var_644_bool == 0; //@nz
	if(var_647_bool != 0) {
		var_633_int = -2;
		return 8;
	}
	CreateDialog(var_640_object);
	var_648_int = 0;
	func_3039(var_648_int);
	@@var_640_object:SetNPCName(var_648_int);
	var_649_int = 0;
	func_3037(var_649_int);
	@@var_640_object:SetNPCDescription(var_649_int);
	var_650_string = "";
	func_3041(var_650_string);
	@@var_640_object:SetPhoto(var_650_string);
	var_651_string = "";
	func_3043(var_651_string);
	@@var_640_object:SetPhoto2(var_651_string);
	var_652_int = 0;
	func_3539(var_652_int);
	@@var_640_object:SetPlayerName(var_652_int);
	IsOverrideActive(var_641_bool);
	var_653_bool = var_641_bool;
	if(var_653_bool != 0) {
		var_633_int = -2;
		return 8;
	}
	DoDialog(var_640_object);
	var_654_bool = 0; var_655_object = Obj();
	func_2924(Obj());
	var_656_object = var_655_object;
	func_2646(var_654_bool, var_655_object);
	var_657_object = Obj(); var_658_object = Obj();
	var_634_object = var_657_object;
	var_640_object = var_658_object;
	TaskCall(8);
	func_1672(var_659_object, var_660_object, var_661_string, var_662_bool, var_657_object, var_658_object);
	TaskReturn();
	@@var_640_object:IsDialogEnd(var_643_bool);
	
Label_1654:
	var_687_bool = var_643_bool == 0; //@nz
	if(var_687_bool != 0) {
		sync();
		@@var_640_object:IsDialogEnd(var_643_bool);
		goto Label_1654;
	}
	var_634_object = Obj();
	func_2628();
	StopDialog(var_640_object);
	@@var_640_object:GetReturnValue((int)-1);
	var_642_int = var_633_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3132(var_160_object)
{
	var_161_object = Obj(); var_162_string = ""; var_163_float = 0;
	func_3443(Obj());
	var_164_object = var_161_object;
	func_3460(var_161_object, "pt_b2q03_good_shop", (float)2);
	var_184_object = Obj();
	func_3443(var_184_object);
	@@var_160_object:ShowMap(var_184_object);
	return 0;
}


func_2876(var_218_bool, var_219_string)
{
	var_220_bool = 0; var_221_bool = 0;
	var_222_bool = 0;
	func_3045(var_222_bool);
	if(var_222_bool != 0) {
		lshHasSpeech(var_221_bool, var_219_string);
		var_223_bool = var_221_bool;
		if(var_223_bool != 0) {
			lshPlaySpeech(var_219_string);
			var_218_bool = 1;
			return 2;
		}
	}
	var_218_bool = 0;
	return 2;
}


func_3389()
{
	var_151_object = Obj(); var_152_object = Obj();
	CreateDiaryEntry(var_152_object, (int)612, (int)2, (int)531559);
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0;
	var_152_object = var_157_object;
	func_3415(var_156_bool, var_157_object, (int)588);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2628()
{
	var_322_bool = 0; var_323_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_325_bool = 0;
	func_3045(var_325_bool);
	if(var_325_bool != 0) {
	} else {
		HasAnimationTrack(var_323_bool, "head");
		var_327_bool = var_323_bool;
		if(var_327_bool == 0) goto Label_2645;
		UnlookAsync("head");
	}
Label_2645:
	return 2;
	
}


func_582(var_2_object, var_382_string)
{
	var_383_bool = 0;
	func_3045(var_383_bool);
	var_384_bool = var_383_bool == 0; //@nz
	if(var_384_bool != 0) {
		return 0;
	}
	var_385_bool = var_382_string == var_2_object;
	if(var_385_bool != 0) {
		return 0;
	}
	var_386_string = ""; var_387_bool = 0;
	var_382_string = var_386_string;
	var_389_bool = var_382_string == "";
	if(var_389_bool != 0) {
		var_387_bool = 0;
	} else {
		var_387_bool = 1;
	}
	func_2861(var_386_string, var_387_bool);
	var_2_object = var_382_string;
	return 0;
	
}


func_3402(var_56_object)
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


func_2891()
{
	var_35_bool = 0;
	func_3045(var_35_bool);
	if(var_35_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3148()
{
	SetVariable("b2q03_1", (int)2);
	func_3376();
	func_3363();
	return 0;
}


func_330(var_0_bool, var_335_int, var_336_object)
{
	var_338_object = Obj(); var_339_bool = 0; var_340_int = 0; var_341_bool = 0; var_342_object = Obj(); var_343_bool = 0; var_344_int = 0; var_345_bool = 0;
	var_0_bool = var_336_object;
	var_346_bool = 0; var_347_object = Obj(); var_348_float = 0;
	var_336_object = var_347_object;
	func_2559(var_346_bool, var_347_object, (float)70.0);
	var_349_bool = var_346_bool == 0; //@nz
	if(var_349_bool != 0) {
		var_335_int = -2;
		return 8;
	}
	CreateDialog(var_342_object);
	var_350_int = 0;
	func_3039(var_350_int);
	@@var_342_object:SetNPCName(var_350_int);
	var_351_int = 0;
	func_3037(var_351_int);
	@@var_342_object:SetNPCDescription(var_351_int);
	var_352_string = "";
	func_3041(var_352_string);
	@@var_342_object:SetPhoto(var_352_string);
	var_353_string = "";
	func_3043(var_353_string);
	@@var_342_object:SetPhoto2(var_353_string);
	var_354_int = 0;
	func_3539(var_354_int);
	@@var_342_object:SetPlayerName(var_354_int);
	IsOverrideActive(var_343_bool);
	var_355_bool = var_343_bool;
	if(var_355_bool != 0) {
		var_335_int = -2;
		return 8;
	}
	DoDialog(var_342_object);
	var_356_bool = 0; var_357_object = Obj();
	func_2924(Obj());
	var_358_object = var_357_object;
	func_2646(var_356_bool, var_357_object);
	var_359_object = Obj(); var_360_object = Obj();
	var_336_object = var_359_object;
	var_342_object = var_360_object;
	TaskCall(4);
	func_411(var_361_object, var_362_object, var_363_string, var_364_bool, var_359_object, var_360_object);
	TaskReturn();
	@@var_342_object:IsDialogEnd(var_345_bool);
	
Label_393:
	var_482_bool = var_345_bool == 0; //@nz
	if(var_482_bool != 0) {
		sync();
		@@var_342_object:IsDialogEnd(var_345_bool);
		goto Label_393;
	}
	var_336_object = Obj();
	func_2628();
	StopDialog(var_342_object);
	@@var_342_object:GetReturnValue((int)-1);
	var_344_int = var_335_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2898(var_99_string, var_100_int, var_101_int)
{
	var_102_bool = 0; var_103_bool = 0;
	var_104_bool = 0; var_105_int = 0; var_106_int = 0;
	var_100_int = var_105_int;
	var_101_int = var_106_int;
	func_2940(var_104_bool, var_105_int, var_106_int);
	if(var_104_bool != 0) {
		AddItem(var_103_bool, var_99_string, (int)0);
	}
	return 2;
}


func_2646(var_184_bool, var_185_object)
{
	var_189_int = 0; var_190_int = 0; var_191_int = 0; var_192_int = 0;
	GetVariable("voice_common", var_191_int);
	var_194_int = var_191_int;
	if(var_194_int != 0) {
		var_195_bool = 0; var_196_object = Obj();
		var_185_object = var_196_object;
		func_2704(var_195_bool, var_196_object);
		var_225_bool = var_195_bool == 0; //@nz
		if(var_225_bool != 0) {
			var_226_bool = 0; var_227_object = Obj();
			var_185_object = var_227_object;
			func_2741(var_226_bool, var_227_object);
			var_256_bool = var_226_bool == 0; //@nz
			if(var_256_bool != 0) {
				var_184_bool = 0;
				return 4;
			}
		}
		irand(var_192_int, (int)2);
		var_258_int = var_192_int;
		if(var_258_int != 0) {
			var_261_int = var_191_int + (int)1;
			var_263_int = var_261_int % (int)3;
			SetVariable("voice_common", var_263_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_266_bool = 0; var_267_object = Obj();
		var_185_object = var_267_object;
		func_2741(var_266_bool, var_267_object);
		var_268_bool = var_266_bool == 0; //@nz
		if(var_268_bool != 0) {
			var_269_bool = 0; var_270_object = Obj();
			var_185_object = var_270_object;
			func_2704(var_269_bool, var_270_object);
			var_271_bool = var_269_bool == 0; //@nz
			if(var_271_bool != 0) {
				var_184_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2702;
	
Label_2702:
	var_184_bool = 1;
	return 4;
	
}


func_3415(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0;
	func_3402(Obj());
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


func_3160()
{
	var_145_int = 0; var_146_string = "";
	func_2945(var_145_int, "b2q03_1");
	var_150_bool = var_145_int != (int)0;
	if(var_150_bool != 0) {
		func_3389();
	}
	return 0;
}


func_1883(var_0_bool, var_1_object, var_2_object, var_3_object, var_725_object, var_726_object)
{
	var_0_bool = var_726_object;
	var_1_object = var_725_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_732_string = "";
		func_1946(var_726_object, "Neutral");
		@@@var_0_bool:SetMessage((int)535231);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_bool:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_bool:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_1916;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x75f";
	}
Label_1916:
	var_750_bool = 0;
	func_3045(var_750_bool);
	if(var_750_bool != 0) {

	Label_1920:
		lshWaitForAnimEnd();
		var_751_object = var_3_object;
		if(var_751_object != 0) {
		} else {
			var_752_string = "";
			var_752_string = var_2_object;
			func_2845(var_752_string);
			goto Label_1920;
	}
		PlayAnimation("all", "idle");

	Label_1935:
		WaitForAnimEnd();
		var_755_object = var_3_object;
		if(var_755_object != 0) {
			goto Label_1945;
		}
		PlayAnimation("all", "idle");
		goto Label_1935;
	}
	goto Label_1945;
	
Label_1945:
	return 0;
	
}


func_2909(var_69_string, var_70_int, var_71_int, var_72_int)
{
	var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_bool = 0;
	var_77_bool = 0; var_78_int = 0; var_79_int = 0;
	var_70_int = var_78_int;
	var_71_int = var_79_int;
	func_2940(var_77_bool, var_78_int, var_79_int);
	if(var_77_bool != 0) {
		irand(var_75_int, var_72_int);
		var_84_int = var_75_int + (int)1;
		AddItem(var_76_bool, var_69_string, (int)0, var_84_int);
	}
	return 4;
}


func_2142(var_0_bool, var_1_object, var_2_object, var_3_object, var_786_object, var_787_object)
{
	var_0_bool = var_787_object;
	var_1_object = var_786_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_793_string = "";
		func_2200(var_787_object, "Neutral");
		@@@var_0_bool:SetMessage((int)540554);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_bool:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_2170;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x862";
	}
Label_2170:
	var_808_bool = 0;
	func_3045(var_808_bool);
	if(var_808_bool != 0) {

	Label_2174:
		lshWaitForAnimEnd();
		var_809_object = var_3_object;
		if(var_809_object != 0) {
		} else {
			var_810_string = "";
			var_810_string = var_2_object;
			func_2845(var_810_string);
			goto Label_2174;
	}
		PlayAnimation("all", "idle");

	Label_2189:
		WaitForAnimEnd();
		var_813_object = var_3_object;
		if(var_813_object != 0) {
			goto Label_2199;
		}
		PlayAnimation("all", "idle");
		goto Label_2189;
	}
	goto Label_2199;
	
Label_2199:
	return 0;
	
}


func_3172()
{
	SetVariable("oob2Andrei3", (int)1);
	return 0;
}


func_3178(var_39_object)
{
	@@var_39_object:SetReturnValue((int)1000);
	return 0;
}


func_1387(var_2_object, var_561_string)
{
	var_562_bool = 0;
	func_3045(var_562_bool);
	var_563_bool = var_562_bool == 0; //@nz
	if(var_563_bool != 0) {
		return 0;
	}
	var_564_bool = var_561_string == var_2_object;
	if(var_564_bool != 0) {
		return 0;
	}
	var_565_string = ""; var_566_bool = 0;
	var_561_string = var_565_string;
	var_568_bool = var_561_string == "";
	if(var_568_bool != 0) {
		var_566_bool = 0;
	} else {
		var_566_bool = 1;
	}
	func_2861(var_565_string, var_566_bool);
	var_2_object = var_561_string;
	return 0;
	
}


func_2924(var_186_object)
{
	var_187_object = Obj(); var_188_object = Obj();
	self(var_188_object);
	var_188_object = var_186_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3183(var_366_bool)
{
	var_368_int = 0; var_369_string = "";
	func_2945(var_368_int, "oob2Andrei2");
	var_373_bool = var_368_int == (int)0;
	if(var_373_bool != 0) {
		var_366_bool = 1;
		return 0;
	}
	var_366_bool = 0;
	return 0;
}


func_2930(var_150_cvector, var_151_cvector)
{
	var_153_float = 0; var_154_float = 0;
	var_155_int = var_151_cvector | var_151_cvector;
	var_154_float = sqrt(var_155_int);
	var_156_float = 9.999999974752427e-07;
	var_157_bool = var_154_float < var_156_float;
	if(var_157_bool != 0) {
		var_150_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_150_cvector = var_151_cvector / var_154_float;
	return 2;
}


func_3443(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj();
	GetMainOutdoorScene(var_94_object);
	var_96_bool = var_94_object == 0; //@ne
	if(var_96_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_95_object = 0;
		var_95_object = var_91_object;
		return 4;
	}
	@@var_94_object:GetMap(var_95_object);
	var_95_object = var_91_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_121(var_0_bool, var_1_object, var_2_object, var_3_object, var_274_object, var_275_object)
{
	var_0_bool = var_275_object;
	var_1_object = var_274_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_281_string = "";
		func_174(var_275_object, "Neutral");
		@@@var_0_bool:SetMessage((int)517994);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)517995, (int)23147, (int)19128);
		goto Label_144;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7d";
	}
Label_144:
	var_302_bool = 0;
	func_3045(var_302_bool);
	if(var_302_bool != 0) {

	Label_148:
		lshWaitForAnimEnd();
		var_303_object = var_3_object;
		if(var_303_object != 0) {
		} else {
			var_304_string = "";
			var_304_string = var_2_object;
			func_2845(var_304_string);
			goto Label_148;
	}
		PlayAnimation("all", "idle");

	Label_163:
		WaitForAnimEnd();
		var_317_object = var_3_object;
		if(var_317_object != 0) {
			goto Label_173;
		}
		PlayAnimation("all", "idle");
		goto Label_163;
	}
	goto Label_173;
	
Label_173:
	return 0;
	
}


func_3195(var_427_bool)
{
	var_429_int = 0; var_430_string = "";
	func_2945(var_429_int, "b2q03");
	var_432_bool = var_429_int == (int)1;
	if(var_432_bool != 0) {
		var_427_bool = 1;
		return 0;
	}
	var_427_bool = 0;
	return 0;
}


func_2940(var_77_bool, var_78_int, var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	irand(var_81_int, var_79_int);
	var_77_bool = var_81_int < var_78_int;
	return 2;
}


func_2945(var_368_int, var_369_string)
{
	var_370_int = 0; var_371_int = 0;
	GetVariable(var_369_string, var_371_int);
	var_371_int = var_368_int;
	return 2;
}


func_3460(var_161_object, var_162_string, var_163_float)
{
	var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_object = Obj(); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_bool = 0;
	GetMainOutdoorScene(var_171_object);
	var_173_bool = var_171_object == 0; //@ne
	if(var_173_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_171_object:GetLocator(var_162_string, var_172_bool, var_169_cvector, var_170_cvector);
	var_175_bool = var_172_bool == 0; //@nz
	if(var_175_bool != 0) {
		var_177_int = "Warning: outdoor scene locator " + var_162_string;
		var_179_int = var_177_int + " doesnt exist";
		Trace(var_179_int);
	}
	@@var_171_object:GetMap(var_161_object);
	var_180_bool = var_161_object == 0; //@ne
	if(var_180_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_182_float = GetByIndex(var_169_cvector, 0);
	var_183_float = GetByIndex(var_169_cvector, 2);
	@@var_161_object:SetMapParams(var_182_float, var_183_float, var_163_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2950(var_134_int, var_135_int)
{
	var_136_object = Obj(); var_137_object = Obj();
	CreateIntVector(var_137_object);
	@@var_137_object:add(var_134_int);
	@@var_137_object:add(var_135_int);
	SendWorldWndMessage((int)3, var_137_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3207(var_407_bool)
{
	var_409_int = 0; var_410_string = "";
	func_2945(var_409_int, "b2q03");
	var_412_bool = var_409_int == (int)0;
	if(var_412_bool != 0) {
		var_407_bool = 1;
		return 0;
	}
	var_407_bool = 0;
	return 0;
}


func_1672(var_0_bool, var_1_object, var_2_object, var_3_object, var_657_object, var_658_object)
{
	var_0_bool = var_658_object;
	var_1_object = var_657_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_664_string = "";
		func_1730(var_658_object, "Neutral");
		@@@var_0_bool:SetMessage((int)531971);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)531972, (int)-1, (int)33378);
		@@@var_0_bool:AddReply((int)531973, (int)-1, (int)33379);
		goto Label_1700;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x68c";
	}
Label_1700:
	var_679_bool = 0;
	func_3045(var_679_bool);
	if(var_679_bool != 0) {

	Label_1704:
		lshWaitForAnimEnd();
		var_680_object = var_3_object;
		if(var_680_object != 0) {
		} else {
			var_681_string = "";
			var_681_string = var_2_object;
			func_2845(var_681_string);
			goto Label_1704;
	}
		PlayAnimation("all", "idle");

	Label_1719:
		WaitForAnimEnd();
		var_684_object = var_3_object;
		if(var_684_object != 0) {
			goto Label_1729;
		}
		PlayAnimation("all", "idle");
		goto Label_1719;
	}
	goto Label_1729;
	
Label_1729:
	return 0;
	
}


func_2444()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	WaitForAnimEnd();
	var_48_bool = 0;
	func_2554(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 12;
	}
	func_3020((int)0);
	var_50_int = var_42_int;
	var_43_int = 0;
	
Label_2458:
	var_63_bool = 0;
	var_63_bool = 0;
	var_65_bool = var_43_int < (int)5;
	if(var_65_bool != 0) {
		var_66_bool = 0;
		func_2554(var_66_bool);
		if(var_66_bool != 0) {
			var_63_bool = 1;
		}
	}
	if(var_63_bool != 0) {
		var_67_bool = var_42_int == 0; //@nz
		if(var_67_bool != 0) {
			Sleep((int)3, var_44_bool);
			var_69_bool = var_44_bool == 0; //@nz
			if(var_69_bool != 0) {
			} else {
		} else {
				irand(var_45_int, var_42_int);
				irand(var_46_int, (int)5);
				var_75_bool = var_46_int != (int)0;
				if(var_75_bool != 0) {
					var_45_int = 0;
				}
				var_77_string = ""; var_78_int = 0;
				var_45_int = var_78_int;
				func_3013(var_77_string, var_78_int);
				PlayAnimation("all", var_77_string);
				WaitForAnimEnd(var_47_bool);
				var_79_bool = var_47_bool == 0; //@nz
				if(var_79_bool == 0) goto Label_2499;
				goto Label_2510;
		}
		Label_2499:
			var_70_bool = 0;
			func_2513(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_2510;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_2458;

		}
	}
Label_2510:
	ResetAAS();
	return 12;
	
}


func_2704(var_195_bool, var_196_object)
{
	var_197_string = ""; var_198_int = 0; var_199_bool = 0; var_200_int = 0; var_201_string = ""; var_202_string = ""; var_203_int = 0; var_204_bool = 0; var_205_int = 0; var_206_string = "";
	var_202_string = "c";
	var_203_int = 0;
	
Label_2707:
	if((int)1 != 0) {
		var_209_int = var_203_int + (int)1;
		var_210_int = var_202_string + var_209_int;
		@@var_196_object:HasProperty(var_210_int, var_204_bool);
		var_211_bool = var_204_bool == 0; //@nz
		if(var_211_bool != 0) {
		} else {
			var_203_int = var_203_int + (int)1;
			goto Label_2707;
		}
	}
	var_212_bool = var_203_int == 0; //@nz
	if(var_212_bool != 0) {
		var_195_bool = 0;
		return 10;
	}
	var_205_int = 0;
	var_214_bool = var_203_int > (int)1;
	if(var_214_bool != 0) {
		irand(var_205_int, var_203_int);
	}
	var_216_int = var_205_int + (int)1;
	var_217_int = var_202_string + var_216_int;
	@@var_196_object:GetProperty(var_217_int, var_206_string);
	var_218_bool = 0; var_219_string = "";
	var_206_string = var_219_string;
	func_2876(var_218_bool, var_219_string);
	var_218_bool = var_195_bool;
	return 10;
	
}


func_2962(var_121_object, var_122_int)
{
	var_123_int = 0; var_124_int = 0;
	var_125_object = Obj(); var_126_string = ""; var_127_int = 0;
	var_121_object = var_125_object;
	var_122_int = var_127_int;
	func_2528(var_125_object, "money", var_127_int);
	var_132_bool = var_122_int > (int)0;
	if(var_132_bool != 0) {
		GetInvItemByName(var_124_int, "Money");
		var_134_int = 0; var_135_int = 0;
		var_124_int = var_134_int;
		var_122_int = var_135_int;
		func_2950(var_134_int, var_135_int);
	}
	return 2;
}


func_3219(var_418_bool, var_419_object)
{
	var_420_bool = 0; var_421_object = Obj();
	var_419_object = var_421_object;
	func_3313(var_420_bool, var_421_object);
	if(var_420_bool != 0) {
		var_418_bool = 1;
		return 0;
	}
	var_418_bool = 0;
	return 0;
}


func_2200(var_2_object, var_793_string)
{
	var_794_bool = 0;
	func_3045(var_794_bool);
	var_795_bool = var_794_bool == 0; //@nz
	if(var_795_bool != 0) {
		return 0;
	}
	var_796_bool = var_793_string == var_2_object;
	if(var_796_bool != 0) {
		return 0;
	}
	var_797_string = ""; var_798_bool = 0;
	var_793_string = var_797_string;
	var_800_bool = var_793_string == "";
	if(var_800_bool != 0) {
		var_798_bool = 0;
	} else {
		var_798_bool = 1;
	}
	func_2861(var_797_string, var_798_bool);
	var_2_object = var_793_string;
	return 0;
	
}


func_1946(var_2_object, var_732_string)
{
	var_733_bool = 0;
	func_3045(var_733_bool);
	var_734_bool = var_733_bool == 0; //@nz
	if(var_734_bool != 0) {
		return 0;
	}
	var_735_bool = var_732_string == var_2_object;
	if(var_735_bool != 0) {
		return 0;
	}
	var_736_string = ""; var_737_bool = 0;
	var_732_string = var_736_string;
	var_739_bool = var_732_string == "";
	if(var_739_bool != 0) {
		var_737_bool = 0;
	} else {
		var_737_bool = 1;
	}
	func_2861(var_736_string, var_737_bool);
	var_2_object = var_732_string;
	return 0;
	
}


func_411(var_0_bool, var_1_object, var_2_object, var_3_object, var_359_object, var_360_object)
{
	var_0_bool = var_360_object;
	var_1_object = var_359_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_366_bool = 0; var_367_object = Obj();
		var_367_object = var_1_object;
		func_3183(var_367_object);
		if(var_366_bool != 0) {
			var_374_object = Obj(); var_375_object = Obj();
			var_374_object = var_1_object;
			var_375_object = var_0_bool;
			func_3075();
			var_378_object = Obj(); var_379_object = Obj();
			var_378_object = var_1_object;
			var_379_object = var_0_bool;
			func_3126();
			var_382_string = "";
			func_582(var_360_object, "Neutral");
			@@@var_0_bool:SetMessage((int)531038);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531227, (int)32541, (int)32540);
			@@@var_0_bool:AddReply((int)531231, (int)32545, (int)32544);
		} else {
				var_405_string = "";
				func_582(var_360_object, "Smile");
				@@@var_0_bool:SetMessage((int)518214);
				@@@var_0_bool:ClearReplies();
				var_407_bool = 0; var_408_object = Obj();
				var_408_object = var_1_object;
				func_3207(var_408_object);
				if(var_407_bool != 0) {
					@@@var_0_bool:AddReply((int)531041, (int)32373, (int)32372);
				}
				var_416_bool = 0;
				var_416_bool = 0;
				var_417_bool = 0;
				var_417_bool = 0;
				var_418_bool = 0; var_419_object = Obj();
				var_419_object = var_1_object;
				func_3219(var_418_bool, var_419_object);
				if(var_418_bool != 0) {
					var_427_bool = 0; var_428_object = Obj();
					var_428_object = var_1_object;
					func_3195(var_428_object);
					if(var_427_bool != 0) {
						var_417_bool = 1;
					}
				}
				if(var_417_bool != 0) {
					var_433_bool = 0; var_434_object = Obj();
					var_434_object = var_1_object;
					func_3253(var_434_object);
					var_439_bool = var_433_bool == 0; //@nz
					if(var_439_bool != 0) {
						var_416_bool = 1;
					}
				}
				if(var_416_bool != 0) {
					@@@var_0_bool:AddReply((int)531048, (int)32378, (int)32377);
				}
				var_443_bool = 0;
				var_443_bool = 0;
				var_444_bool = 0;
				var_444_bool = 0;
				var_445_bool = 0; var_446_object = Obj();
				var_446_object = var_1_object;
				func_3241(var_446_object);
				if(var_445_bool != 0) {
					var_451_bool = 0; var_452_object = Obj();
					var_452_object = var_1_object;
					func_3229(var_452_object);
					var_457_bool = var_451_bool == 0; //@nz
					if(var_457_bool != 0) {
						var_444_bool = 1;
					}
				}
				if(var_444_bool != 0) {
					var_458_bool = 0; var_459_object = Obj();
					var_459_object = var_1_object;
					func_3265(var_459_object);
					if(var_458_bool != 0) {
						var_443_bool = 1;
					}
				}
				if(var_443_bool != 0) {
					@@@var_0_bool:AddReply((int)531081, (int)32402, (int)32401);
				}
				var_467_bool = 0; var_468_object = Obj();
				var_468_object = var_1_object;
				func_3301(var_468_object);
				if(var_467_bool != 0) {
					@@@var_0_bool:AddReply((int)519410, (int)20576, (int)20575);
				}
				@@@var_0_bool:AddReply((int)518215, (int)20584, (int)19328);
				@@@var_0_bool:AddReply((int)518216, (int)-1, (int)19329);
				goto Label_552;
		}
	}
Label_552:
	var_397_bool = 0;
	func_3045(var_397_bool);
	if(var_397_bool != 0) {

	Label_556:
		lshWaitForAnimEnd();
		var_398_object = var_3_object;
		if(var_398_object != 0) {
		} else {
			var_399_string = "";
			var_399_string = var_2_object;
			func_2845(var_399_string);
			goto Label_556;
	}
		PlayAnimation("all", "idle");

	Label_571:
		WaitForAnimEnd();
		var_402_object = var_3_object;
		if(var_402_object != 0) {
			goto Label_581;
		}
		PlayAnimation("all", "idle");
		goto Label_571;

	}
	goto Label_581;
	
Label_581:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x19f";


func_3229(var_451_bool)
{
	var_453_int = 0; var_454_string = "";
	func_2945(var_453_int, "b2q03");
	var_456_bool = var_453_int == (int)1000;
	if(var_456_bool != 0) {
		var_451_bool = 1;
		return 0;
	}
	var_451_bool = 0;
	return 0;
}


func_2981(var_73_bool, var_74_string, var_75_string)
{
	var_76_object = Obj(); var_77_object = Obj();
	FindActor(var_77_object, var_74_string);
	var_78_bool = var_77_object == 0; //@ne
	if(var_78_bool != 0) {
		var_73_bool = 0;
		return 2;
	}
	Trigger(var_77_object, var_75_string);
	var_73_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3493()
{
	var_65_int = 0; var_66_int = 0;
	ClearSubContainer((int)0);
	func_2998((int)0);
	var_68_int = var_66_int;
	var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0;
	func_2909("samopal_ammo", (int)1, (int)1, (int)6);
	var_85_string = ""; var_86_int = 0; var_87_int = 0; var_88_int = 0;
	func_2909("rifle_ammo", (int)1, (int)1, (int)8);
	var_89_string = ""; var_90_int = 0; var_91_int = 0; var_92_int = 0;
	func_2909("revolver_ammo", (int)1, (int)1, (int)8);
	var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0;
	func_2909("tvirin", (int)1, (int)1, (int)3);
	var_98_bool = var_66_int >= (int)5;
	if(var_98_bool != 0) {
		var_99_string = ""; var_100_int = 0; var_101_int = 0;
		func_2898("Samopal", (int)1, (int)1);
	}
	return 2;
}


func_3241(var_445_bool)
{
	var_447_int = 0; var_448_string = "";
	func_2945(var_447_int, "b2q03_1");
	var_450_bool = var_447_int == (int)1;
	if(var_450_bool != 0) {
		var_445_bool = 1;
		return 0;
	}
	var_445_bool = 0;
	return 0;
}


func_174(var_2_object, var_281_string)
{
	var_282_bool = 0;
	func_3045(var_282_bool);
	var_283_bool = var_282_bool == 0; //@nz
	if(var_283_bool != 0) {
		return 0;
	}
	var_284_bool = var_281_string == var_2_object;
	if(var_284_bool != 0) {
		return 0;
	}
	var_285_string = ""; var_286_bool = 0;
	var_281_string = var_285_string;
	var_288_bool = var_281_string == "";
	if(var_288_bool != 0) {
		var_286_bool = 0;
	} else {
		var_286_bool = 1;
	}
	func_2861(var_285_string, var_286_bool);
	var_2_object = var_281_string;
	return 0;
	
}


func_2993(var_102_float)
{
	var_103_float = 0; var_104_float = 0;
	GetGameTime(var_104_float);
	var_104_float = var_102_float;
	return 2;
}


func_3253(var_433_bool)
{
	var_435_int = 0; var_436_string = "";
	func_2945(var_435_int, "b2q03_1");
	var_438_bool = var_435_int == (int)2;
	if(var_438_bool != 0) {
		var_433_bool = 1;
		return 0;
	}
	var_433_bool = 0;
	return 0;
}


func_2741(var_226_bool, var_227_object)
{
	var_228_string = ""; var_229_int = 0; var_230_bool = 0; var_231_int = 0; var_232_string = ""; var_233_string = ""; var_234_int = 0; var_235_bool = 0; var_236_int = 0; var_237_string = "";
	var_239_int = 0;
	func_2998(var_239_int);
	var_240_int = "d" + var_239_int;
	var_233_string = var_240_int + "m";
	var_234_int = 0;
	
Label_2750:
	if((int)1 != 0) {
		var_244_int = var_234_int + (int)1;
		var_245_int = var_233_string + var_244_int;
		@@var_227_object:HasProperty(var_245_int, var_235_bool);
		var_246_bool = var_235_bool == 0; //@nz
		if(var_246_bool != 0) {
		} else {
			var_234_int = var_234_int + (int)1;
			goto Label_2750;
		}
	}
	var_247_bool = var_234_int == 0; //@nz
	if(var_247_bool != 0) {
		var_226_bool = 0;
		return 10;
	}
	var_236_int = 0;
	var_249_bool = var_234_int > (int)1;
	if(var_249_bool != 0) {
		irand(var_236_int, var_234_int);
	}
	var_251_int = var_236_int + (int)1;
	var_252_int = var_233_string + var_251_int;
	@@var_227_object:GetProperty(var_252_int, var_237_string);
	var_253_bool = 0; var_254_string = "";
	var_237_string = var_254_string;
	func_2876(var_253_bool, var_254_string);
	var_253_bool = var_226_bool;
	return 10;
	
}


func_2998(var_58_int)
{
	var_59_float = 0; var_60_float = 0;
	GetGameTime(var_60_float);
	var_62_int = 0;
	var_62_int = var_60_float / (int)24;
	var_58_int = (int)1 + var_62_int;
	return 2;
}


func_3007(var_331_bool, var_332_int)
{
	var_333_int = 0;
	func_2998(var_333_int);
	var_331_bool = var_333_int == var_332_int;
	return 0;
}


func_3265(var_458_bool)
{
	var_460_int = 0; var_461_string = "";
	func_2945(var_460_int, "oob2Andrei3");
	var_463_bool = var_460_int == (int)0;
	if(var_463_bool != 0) {
		var_458_bool = 1;
		return 0;
	}
	var_458_bool = 0;
	return 0;
}


func_1730(var_2_object, var_664_string)
{
	var_665_bool = 0;
	func_3045(var_665_bool);
	var_666_bool = var_665_bool == 0; //@nz
	if(var_666_bool != 0) {
		return 0;
	}
	var_667_bool = var_664_string == var_2_object;
	if(var_667_bool != 0) {
		return 0;
	}
	var_668_string = ""; var_669_bool = 0;
	var_664_string = var_668_string;
	var_671_bool = var_664_string == "";
	if(var_671_bool != 0) {
		var_669_bool = 0;
	} else {
		var_669_bool = 1;
	}
	func_2861(var_668_string, var_669_bool);
	var_2_object = var_664_string;
	return 0;
	
}


func_3013(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = "";
	var_60_int = var_57_int;
	if(var_60_int != 0) {
		"idle" = "idle" + var_57_int;
	}
	var_59_string = var_56_string;
	return 2;
}


func_3020(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_53_int = 0;
	
Label_3022:
	var_56_string = ""; var_57_int = 0;
	var_53_int = var_57_int;
	func_3013(var_56_string, var_57_int);
	HasAnimation(var_54_bool, "all", var_56_string);
	var_61_bool = var_54_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_53_int = var_53_int + (int)1;
		goto Label_3022;
	}
	var_53_int = var_50_int;
	return 4;
	
}


func_3277(var_571_bool)
{
	var_573_int = 0; var_574_string = "";
	func_2945(var_573_int, "b5q01");
	var_576_bool = var_573_int == (int)1;
	if(var_576_bool != 0) {
		var_571_bool = 1;
		return 0;
	}
	var_571_bool = 0;
	return 0;
}


func_1229(var_0_bool, var_530_int, var_531_object)
{
	var_533_object = Obj(); var_534_bool = 0; var_535_int = 0; var_536_bool = 0; var_537_object = Obj(); var_538_bool = 0; var_539_int = 0; var_540_bool = 0;
	var_0_bool = var_531_object;
	var_541_bool = 0; var_542_object = Obj(); var_543_float = 0;
	var_531_object = var_542_object;
	func_2559(var_541_bool, var_542_object, (float)70.0);
	var_544_bool = var_541_bool == 0; //@nz
	if(var_544_bool != 0) {
		var_530_int = -2;
		return 8;
	}
	CreateDialog(var_537_object);
	var_545_int = 0;
	func_3039(var_545_int);
	@@var_537_object:SetNPCName(var_545_int);
	var_546_int = 0;
	func_3037(var_546_int);
	@@var_537_object:SetNPCDescription(var_546_int);
	var_547_string = "";
	func_3041(var_547_string);
	@@var_537_object:SetPhoto(var_547_string);
	var_548_string = "";
	func_3043(var_548_string);
	@@var_537_object:SetPhoto2(var_548_string);
	var_549_int = 0;
	func_3539(var_549_int);
	@@var_537_object:SetPlayerName(var_549_int);
	IsOverrideActive(var_538_bool);
	var_550_bool = var_538_bool;
	if(var_550_bool != 0) {
		var_530_int = -2;
		return 8;
	}
	DoDialog(var_537_object);
	var_551_bool = 0; var_552_object = Obj();
	func_2924(Obj());
	var_553_object = var_552_object;
	func_2646(var_551_bool, var_552_object);
	var_554_object = Obj(); var_555_object = Obj();
	var_531_object = var_554_object;
	var_537_object = var_555_object;
	TaskCall(6);
	func_1310(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object);
	TaskReturn();
	@@var_537_object:IsDialogEnd(var_540_bool);
	
Label_1292:
	var_600_bool = var_540_bool == 0; //@nz
	if(var_600_bool != 0) {
		sync();
		@@var_537_object:IsDialogEnd(var_540_bool);
		goto Label_1292;
	}
	var_531_object = Obj();
	func_2628();
	StopDialog(var_537_object);
	@@var_537_object:GetReturnValue((int)-1);
	var_539_int = var_530_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2513(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_3539(var_175_int)
{
	var_176_int = 0; var_177_int = 0;
	GetVariable("branch", var_177_int);
	var_180_bool = var_177_int == (int)0;
	if(var_180_bool != 0) {
		var_175_int = 1;
		return 2;
	EMIT "GOTO 0xde2";
	}
	var_182_bool = var_177_int == (int)1;
	if(var_182_bool != 0) {
		var_175_int = 2;
		return 2;
	}
	var_175_int = 3;
	return 2;
}


func_2515()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2520(var_47_float, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_52_cvector);
	@@var_48_object:GetPosition(var_53_cvector);
	var_54_cvector = var_53_cvector - var_52_cvector;
	var_47_float = var_54_cvector | var_54_cvector;
	return 6;
}


func_3289(var_577_bool)
{
	var_579_int = 0; var_580_string = "";
	func_2945(var_579_int, "oob5Andrei1");
	var_582_bool = var_579_int == (int)0;
	if(var_582_bool != 0) {
		var_577_bool = 1;
		return 0;
	}
	var_577_bool = 0;
	return 0;
}


func_2268(var_0_bool)
{
	var_32_bool = 0;
	func_2554(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		Hold();
	}
	GetDirection(var_0_bool);
	
Label_2277:
	func_2444();
	goto Label_2277;
}
EMIT "Return(); Pop(0)";


func_3037(var_172_int)
{
	var_172_int = 515529;
	return 0;
}


func_3039(var_171_int)
{
	var_171_int = 502855;
	return 0;
}


func_2784(var_485_bool, var_486_object)
{
	var_487_bool = 0; var_488_object = Obj(); var_489_float = 0;
	var_486_object = var_488_object;
	func_2792(var_487_bool, var_488_object, (float)70);
	var_487_bool = var_485_bool;
	return 0;
}


func_2528(var_125_object, var_126_string, var_127_int)
{
	var_128_int = 0; var_129_int = 0;
	@@var_125_object:GetProperty(var_126_string, var_129_int);
	var_130_int = var_129_int + var_127_int;
	@@var_125_object:SetProperty(var_126_string, var_130_int);
	return 2;
}


func_3041(var_173_string)
{
	var_173_string = "ui/NPC_Andrei.png";
	return 0;
}


func_3043(var_174_string)
{
	var_174_string = "ui/NPC_Andrei_b.png";
	return 0;
}


func_3556(var_50_object, var_337_object, var_532_object, var_635_object)
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0;
	GetVariable("tr_andrei", var_54_int);
	var_58_int = 0;
	func_2998(var_58_int);
	var_64_bool = var_54_int != var_58_int;
	if(var_64_bool != 0) {
		func_3493();
		var_109_int = 0;
		func_2998(var_109_int);
		SetVariable("tr_andrei", var_109_int);
	}
	GetVariable("mt_andrei", var_55_int);
	var_111_bool = var_55_int == 0; //@nz
	if(var_111_bool != 0) {
		var_112_int = 0; var_113_object = Obj();
		var_50_object = var_113_object;
		TaskCall(1);
		func_40(var_114_object, var_112_int, var_113_object);
		TaskReturn();
		SetVariable("mt_andrei", (int)1);
	}
	var_331_bool = 0; var_332_int = 0;
	func_3007(var_331_bool, (int)2);
	if(var_331_bool != 0) {
		var_335_int = 0; var_336_object = Obj();
		var_50_object = var_336_object;
		TaskCall(3);
		func_330(var_337_object, var_335_int, var_336_object);
		TaskReturn();
		var_484_bool = (int)1000 == var_337_object;
		if(var_484_bool != 0) {
			var_485_bool = 0; var_486_object = Obj();
			var_50_object = var_486_object;
			func_2784(var_485_bool, var_486_object);
			var_517_bool = var_485_bool == 0; //@nz
			if(var_517_bool != 0) {
				return 6;
			}
			var_518_object = Obj();
			var_50_object = var_518_object;
			TaskCall(0);
			func_0(var_518_object);
			TaskReturn();
			var_50_object = Obj();
			func_2840();
		}
		return 6;
	}
	var_527_bool = 0; var_528_int = 0;
	func_3007(var_527_bool, (int)5);
	if(var_527_bool != 0) {
		var_530_int = 0; var_531_object = Obj();
		var_50_object = var_531_object;
		TaskCall(5);
		func_1229(var_532_object, var_530_int, var_531_object);
		TaskReturn();
		var_602_bool = (int)1000 == var_532_object;
		if(var_602_bool != 0) {
			var_603_bool = 0; var_604_object = Obj();
			var_50_object = var_604_object;
			func_2784(var_603_bool, var_604_object);
			var_605_bool = var_603_bool == 0; //@nz
			if(var_605_bool != 0) {
				return 6;
			}
			var_606_object = Obj();
			var_50_object = var_606_object;
			TaskCall(0);
			func_0(var_606_object);
			TaskReturn();
			var_50_object = Obj();
			func_2840();
		}
		return 6;
	}
	var_609_bool = 0;
	var_609_bool = 1;
	var_610_bool = 0;
	var_610_bool = 1;
	var_611_bool = 0;
	var_611_bool = 1;
	var_612_bool = 0;
	var_612_bool = 1;
	var_613_bool = 0;
	var_613_bool = 1;
	var_614_bool = 0;
	var_614_bool = 1;
	var_615_bool = 0;
	var_615_bool = 1;
	var_616_bool = 0; var_617_int = 0;
	func_3007(var_616_bool, (int)3);
	if(var_616_bool != 1) {
		var_618_bool = 0; var_619_int = 0;
		func_3007(var_618_bool, (int)4);
		if(var_618_bool != 1) {
			var_615_bool = 0;
		}
	}
	if(var_615_bool != 1) {
		var_620_bool = 0; var_621_int = 0;
		func_3007(var_620_bool, (int)6);
		if(var_620_bool != 1) {
			var_614_bool = 0;
		}
	}
	if(var_614_bool != 1) {
		var_622_bool = 0; var_623_int = 0;
		func_3007(var_622_bool, (int)7);
		if(var_622_bool != 1) {
			var_613_bool = 0;
		}
	}
	if(var_613_bool != 1) {
		var_624_bool = 0; var_625_int = 0;
		func_3007(var_624_bool, (int)8);
		if(var_624_bool != 1) {
			var_612_bool = 0;
		}
	}
	if(var_612_bool != 1) {
		var_626_bool = 0; var_627_int = 0;
		func_3007(var_626_bool, (int)9);
		if(var_626_bool != 1) {
			var_611_bool = 0;
		}
	}
	if(var_611_bool != 1) {
		var_628_bool = 0; var_629_int = 0;
		func_3007(var_628_bool, (int)10);
		if(var_628_bool != 1) {
			var_610_bool = 0;
		}
	}
	if(var_610_bool != 1) {
		var_630_bool = 0; var_631_int = 0;
		func_3007(var_630_bool, (int)11);
		if(var_630_bool != 1) {
			var_609_bool = 0;
		}
	}
	if(var_609_bool != 0) {
		var_633_int = 0; var_634_object = Obj();
		var_50_object = var_634_object;
		TaskCall(7);
		func_1591(var_635_object, var_633_int, var_634_object);
		TaskReturn();
		var_689_bool = (int)1000 == var_635_object;
		if(var_689_bool != 0) {
			var_690_bool = 0; var_691_object = Obj();
			var_50_object = var_691_object;
			func_2784(var_690_bool, var_691_object);
			var_692_bool = var_690_bool == 0; //@nz
			if(var_692_bool != 0) {
				return 6;
			}
			var_693_object = Obj();
			var_50_object = var_693_object;
			TaskCall(0);
			func_0(var_693_object);
			TaskReturn();
			var_50_object = Obj();
			func_2840();
		}
		return 6;
	}
	GetVariable("d12_andrei", var_56_int);
	var_697_bool = 0;
	var_697_bool = 0;
	var_698_bool = 0; var_699_int = 0;
	func_3007(var_698_bool, (int)12);
	if(var_698_bool != 0) {
		var_700_bool = var_56_int == 0; //@nz
		if(var_700_bool != 0) {
			var_697_bool = 1;
		}
	}
	if(var_697_bool != 0) {
		var_701_int = 0; var_702_object = Obj();
		var_50_object = var_702_object;
		TaskCall(9);
		func_1802(var_703_object, var_701_int, var_702_object);
		TaskReturn();
		SetVariable("d12_andrei", (int)1);
		return 6;
	}
	var_762_int = 0; var_763_object = Obj();
	var_50_object = var_763_object;
	TaskCall(11);
	func_2061(var_764_object, var_762_int, var_763_object);
	TaskReturn();
	return 6;
}


func_3301(var_467_bool)
{
	var_469_int = 0; var_470_string = "";
	func_2945(var_469_int, "oob2Andrei1");
	var_472_bool = var_469_int == (int)0;
	if(var_472_bool != 0) {
		var_467_bool = 1;
		return 0;
	}
	var_467_bool = 0;
	return 0;
}


func_3045(var_166_bool)
{
	var_166_bool = 1;
	return 0;
}


func_3047()
{
	SetVariable("oob5Andrei1", (int)1);
	return 0;
}


func_2792(var_487_bool, var_488_object, var_489_float)
{
	var_490_float = 0; var_491_cvector = CVector(0,0,0); var_492_cvector = CVector(0,0,0); var_493_cvector = CVector(0,0,0); var_494_cvector = CVector(0,0,0); var_495_cvector = CVector(0,0,0); var_496_cvector = CVector(0,0,0); var_497_bool = 0; var_498_float = 0; var_499_cvector = CVector(0,0,0); var_500_cvector = CVector(0,0,0); var_501_cvector = CVector(0,0,0); var_502_cvector = CVector(0,0,0); var_503_cvector = CVector(0,0,0); var_504_cvector = CVector(0,0,0); var_505_bool = 0;
	@@var_488_object:GetPosition(var_499_cvector);
	@@var_488_object:GetEyesHeight(var_498_float);
	var_506_float = GetByIndex(var_499_cvector, 1);
	var_506_float = var_506_float + var_498_float;
	SetByIndex(var_499_cvector, 1) = var_506_float;
	GetPosition(var_500_cvector);
	GetEyesHeight(var_498_float);
	var_507_float = GetByIndex(var_500_cvector, 1);
	var_507_float = var_507_float + var_498_float;
	SetByIndex(var_500_cvector, 1) = var_507_float;
	var_501_cvector = var_499_cvector - var_500_cvector;
	var_508_float = GetByIndex(var_501_cvector, 1);
	SetByIndex(var_501_cvector, 1) = (float)0;
	var_509_int = var_501_cvector | var_501_cvector;
	var_510_float = sqrt(var_509_int);
	var_501_cvector = var_501_cvector / var_510_float;
	var_502_cvector = -var_501_cvector;
	var_511_float = var_501_cvector * var_489_float;
	var_503_cvector = var_511_float - CVector(0.0, 10.0, 0.0);
	var_504_cvector = var_500_cvector + var_503_cvector;
	IsOverrideActive(var_505_bool);
	var_513_bool = var_505_bool;
	if(var_513_bool != 0) {
		var_487_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_504_cvector, var_502_cvector, (bool)1);
	var_515_float = GetByIndex(var_503_cvector, 0);
	var_516_float = GetByIndex(var_503_cvector, 2);
	Rotate(var_515_float, var_516_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_487_bool = 1;
	return 16;
}


func_2535(var_40_bool, var_41_cvector)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0;
	GetPosition(var_45_cvector);
	var_46_cvector = var_41_cvector - var_45_cvector;
	var_48_float = GetByIndex(var_46_cvector, 0);
	var_49_float = GetByIndex(var_46_cvector, 2);
	Rotate(var_48_float, var_49_float, var_47_bool);
	var_47_bool = var_40_bool;
	return 6;
}


func_2282(var_57_bool)
{
	var_58_object = Obj(); var_59_object = Obj();
	FindActor(var_59_object, "player");
	var_61_bool = var_59_object == 0; //@nz
	if(var_61_bool != 0) {
		var_57_bool = 0;
		return 2;
	}
	var_62_bool = 0; var_63_object = Obj();
	var_59_object = var_63_object;
	func_2545(var_62_bool, var_63_object);
	var_62_bool = var_57_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3053()
{
	SetVariable("oob2Andrei1", (int)1);
	return 0;
}


func_3313(var_420_bool, var_421_object)
{
	var_422_int = 0; var_423_int = 0;
	@@var_421_object:GetItemCountOfType(var_423_int, "grass_brown_tvir");
	var_426_bool = var_423_int >= (int)10;
	if(var_426_bool != 0) {
		var_420_bool = 1;
		return 2;
	}
	var_420_bool = 0;
	return 2;
}


func_2545(var_36_bool, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	@@var_37_object:GetPosition(var_39_cvector);
	var_40_bool = 0; var_41_cvector = CVector(0,0,0);
	var_39_cvector = var_41_cvector;
	func_2535(var_40_bool, var_41_cvector);
	var_40_bool = var_36_bool;
	return 2;
}


func_3059(var_118_object)
{
	Trace("money 4000 is given");
	var_121_object = Obj(); var_122_int = 0;
	var_118_object = var_121_object;
	func_2962(var_121_object, (int)4000);
	return 0;
}


func_2297(var_0_bool)
{
	var_109_float = GetByIndex(var_0_bool, 0);
	var_110_float = GetByIndex(var_0_bool, 2);
	RotateAsync(var_109_float, var_110_float);
	return 0;
}


func_2554(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_3324()
{
	var_42_object = Obj(); var_43_object = Obj();
	CreateDiaryEntry(var_43_object, (int)585, (int)2, (int)531046);
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0;
	var_43_object = var_48_object;
	func_3415(var_47_bool, var_48_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3069()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_2302(var_40_bool)
{
	var_41_object = Obj(); var_42_bool = 0; var_43_object = Obj(); var_44_bool = 0;
	FindActor(var_43_object, "player");
	var_46_bool = var_43_object == 0; //@nz
	if(var_46_bool != 0) {
		var_40_bool = 0;
		return 4;
	}
	var_47_float = 0; var_48_object = Obj();
	var_43_object = var_48_object;
	func_2520(var_47_float, var_48_object);
	var_56_bool = var_47_float > (float)90000.0;
	if(var_56_bool != 0) {
		var_40_bool = 0;
		return 4;
	}
	CanSee(var_44_bool, var_43_object);
	var_44_bool = var_40_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2559(var_123_bool, var_124_object, var_125_float)
{
	var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_bool = 0; var_134_bool = 0; var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_bool = 0; var_143_bool = 0;
	@@var_124_object:GetPosition(var_136_cvector);
	@@var_124_object:GetEyesHeight(var_135_float);
	var_144_float = GetByIndex(var_136_cvector, 1);
	var_144_float = var_144_float + var_135_float;
	SetByIndex(var_136_cvector, 1) = var_144_float;
	GetPosition(var_137_cvector);
	GetEyesHeight(var_135_float);
	var_145_float = GetByIndex(var_137_cvector, 1);
	var_145_float = var_145_float + var_135_float;
	SetByIndex(var_137_cvector, 1) = var_145_float;
	var_138_cvector = var_136_cvector - var_137_cvector;
	var_146_float = GetByIndex(var_138_cvector, 1);
	SetByIndex(var_138_cvector, 1) = (float)0;
	var_147_int = var_138_cvector | var_138_cvector;
	var_148_float = sqrt(var_147_int);
	var_138_cvector = var_138_cvector / var_148_float;
	var_139_cvector = -var_138_cvector;
	var_149_float = var_138_cvector * var_125_float;
	var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0);
	var_151_cvector = var_139_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2930(var_150_cvector, var_151_cvector);
	var_159_float = var_150_cvector * (int)25;
	var_160_int = var_149_float + var_159_float;
	var_140_cvector = var_160_int - CVector(0.0, 10.0, 0.0);
	var_141_cvector = var_137_cvector + var_140_cvector;
	IsOverrideActive(var_142_bool);
	var_162_bool = var_142_bool;
	if(var_162_bool != 0) {
		var_123_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_141_cvector, var_139_cvector, (bool)1);
	var_164_float = GetByIndex(var_140_cvector, 0);
	var_165_float = GetByIndex(var_140_cvector, 2);
	Rotate(var_164_float, var_165_float);
	var_166_bool = 0;
	func_3045(var_166_bool);
	if(var_166_bool != 0) {
	} else {
		HasAnimationTrack(var_143_bool, "head");
		var_168_bool = var_143_bool;
		if(var_168_bool == 0) goto Label_2622;
		LookAsyncCamera("head");
	}
Label_2622:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_123_bool = 1;
	return 18;
	
}


