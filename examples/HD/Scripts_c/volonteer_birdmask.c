// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,GetProperty/2,Trace/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,LookAsync/3,lshStopSpeech/0,GetInvItemByName/2,Trigger/3,GetGameTime/1,HasAnimation/3,TriggerWorld/2,SetVariable/2,GetVariable/2,_strlwr/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:npc|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:HasItem|W:volonteers_danko|W:rescue_oneday|W:volonteers_burah|W:volonteers_klara|W:feromicin|A:RemoveItemByType|W:monomicin|W:playsound|W:giveitem|W:oo|W:1|W:powder|W:burah_serum|W:rescue|W:branch|W:alexandr|W:andrei|W:anna|W:bigvlad|W:eva|W:georg|W:grif|W:han|W:julia|W:kapella|W:katerina|W:laska|W:maria|W:mark|W:mat|W:mishka|W:mladvlad|W:notkin|W:ospina|W:petr|W:rubin|W:spi4ka|W:starshina|W:viktor|W:wasted_woman|W:wasted_male|W:alkash|W:boy|W:girl|W:littleboy|W:littlegirl|W:butcher|W:dohodyaga|W:unosha|W:vaxxabit|W:vaxxabitka|W:worker|W:whitemask|W:birdmask|W:patrol|W:alkash_d|W:boy_d|W:butcher_d|W:dohodyaga_d|W:girl_d|W:littleboy_d|W:littlegirl_d|W:unosha2|W:unosha_d|W:unosha2_d|W:vaxxabit_d|W:vaxxabitka_d|W:wasted_male_d|W:wasted_woman_d|W:worker2|W:worker_d|W:worker2_d|W:gorbun_daughter|W:gorbun|W:albinos|W:aglaja|W:nude|W:block|W:officer|W:doberman|W:grabitel|W:gatherer_wife|W:rat_prophet|W:morlok|W:soldier|W:britva|W:kabaktchik|W:sanitar|W:salesman|W:ayyan|W:petrbirdmask|W:mogila|W:klikusha|W:karlik|W:lisa|W:vol_|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @RUN_OP: 0x46d
// @RUN_TASK: 6
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x120 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x351 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x443 vars=int,int
// @TASK_6: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x477 vars=object
// @EVENT_7: op=0x4dd vars=int
// @PE: 0x4a,0x10a,0x120,0x301,0x33b,0x351,0x3f3,0x42d,0x443,0x4b3,0x4dd,0x649,0x68c,0x697,0x6a2,0x6ac,0x6b7,0x6c2,0x6cc,0x70b,0x729,0x8e1,0x907,0x932

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int, var_19_bool, var_20_bool, var_21_object)
{
	if((int)1 != 0) {
		func_1491();
		var_25_bool = var_21_object == (int)15324;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_1633(var_27_object);
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_1639();
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_1609();
		}
		var_66_bool = var_21_object == (int)15327;
		if(var_66_bool != 0) {
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_1627(var_68_object);
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_1639();
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_1609();
		}
		var_78_bool = var_21_object == (int)33530;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_1560();
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_1603(var_103_object);
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_1609();
		}
		var_111_bool = var_21_object == (int)33533;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_1560();
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_1597(var_115_object);
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_1609();
		}
		var_123_bool = var_20_bool == (int)15312;
		if(var_123_bool != 0) {
			var_124_bool = 0;
			var_124_bool = 0;
			var_125_bool = 0; var_126_object = Obj();
			var_126_object = var_1_object;
			func_1730(var_125_bool, var_126_object);
			if(var_125_bool != 0) {
				var_139_bool = 0; var_140_object = Obj();
				var_140_object = var_1_object;
				func_1698(var_139_bool, var_140_object);
				if(var_139_bool != 0) {
					var_124_bool = 1;
				}
			}
			if(var_124_bool != 0) {
				var_384_object = Obj(); var_385_object = Obj();
				var_384_object = var_1_object;
				var_385_object = var_0_object;
				func_1615();
				var_394_string = "";
				func_266(var_21_object, "Neutral");
				@@@var_0_object:SetMessage((int)514075);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514076, (int)15314, (int)15313);
				@@@var_0_object:AddReply((int)534587, (int)-1, (int)36225);
				return 0;
			}
			var_418_bool = 0;
			var_418_bool = 0;
			var_419_bool = 0; var_420_object = Obj();
			var_420_object = var_1_object;
			func_1730(var_419_bool, var_420_object);
			if(var_419_bool != 0) {
				var_421_bool = 0; var_422_object = Obj();
				var_422_object = var_1_object;
				func_1698(var_421_bool, var_422_object);
				var_423_bool = var_421_bool == 0; //@nz
				if(var_423_bool != 0) {
					var_418_bool = 1;
				}
			}
			if(var_418_bool != 0) {
				var_424_object = Obj(); var_425_object = Obj();
				var_424_object = var_1_object;
				var_425_object = var_0_object;
				func_1615();
				var_426_string = "";
				func_266(var_21_object, "Neutral");
				@@@var_0_object:SetMessage((int)541516);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541517, (int)43681, (int)43680);
				@@@var_0_object:AddReply((int)541523, (int)-1, (int)43686);
				return 0;
			}
			var_434_string = "";
			func_266(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)514079);
			@@@var_0_object:ClearReplies();
			var_436_bool = 0; var_437_object = Obj();
			var_437_object = var_1_object;
			func_1708(var_436_bool, var_437_object);
			if(var_436_bool != 0) {
				@@@var_0_object:AddReply((int)514080, (int)15318, (int)15317);
			}
			var_448_bool = 0; var_449_object = Obj();
			var_449_object = var_1_object;
			func_1719(var_448_bool, var_449_object);
			if(var_448_bool != 0) {
				@@@var_0_object:AddReply((int)514110, (int)15326, (int)15325);
			}
			var_456_bool = 0;
			var_456_bool = 0;
			var_457_bool = 0; var_458_object = Obj();
			var_458_object = var_1_object;
			func_1676(var_457_bool, var_458_object);
			if(var_457_bool != 0) {
				var_462_bool = 0; var_463_object = Obj();
				var_463_object = var_1_object;
				func_1740(var_462_bool, var_463_object);
				var_473_bool = var_462_bool == 0; //@nz
				if(var_473_bool != 0) {
					var_456_bool = 1;
				}
			}
			if(var_456_bool != 0) {
				@@@var_0_object:AddReply((int)532117, (int)33529, (int)33528);
			}
			var_477_bool = 0;
			var_477_bool = 0;
			var_478_bool = 0; var_479_object = Obj();
			var_479_object = var_1_object;
			func_1687(var_478_bool, var_479_object);
			if(var_478_bool != 0) {
				var_483_bool = 0; var_484_object = Obj();
				var_484_object = var_1_object;
				func_1740(var_483_bool, var_484_object);
				var_485_bool = var_483_bool == 0; //@nz
				if(var_485_bool != 0) {
					var_477_bool = 1;
				}
			}
			if(var_477_bool != 0) {
				@@@var_0_object:AddReply((int)532120, (int)33532, (int)33531);
			}
			@@@var_0_object:AddReply((int)514082, (int)-1, (int)15319);
			return 0;
		}
		var_493_bool = var_20_bool == (int)33532;
		if(var_493_bool != 0) {
			var_494_string = "";
			func_266(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)532121);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532122, (int)-1, (int)33533);
			return 0;
		}
		var_500_bool = var_20_bool == (int)33529;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_266(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)532118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532119, (int)-1, (int)33530);
			return 0;
		}
		var_507_bool = var_20_bool == (int)15326;
		if(var_507_bool != 0) {
			var_508_string = "";
			func_266(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)514111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514112, (int)-1, (int)15327);
			@@@var_0_object:AddReply((int)529951, (int)-1, (int)31335);
			return 0;
		}
		var_517_bool = var_20_bool == (int)15318;
		if(var_517_bool != 0) {
			var_518_string = "";
			func_266(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)514081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514109, (int)-1, (int)15324);
			return 0;
		}
		var_524_bool = var_20_bool == (int)43681;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_266(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)541518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541519, (int)-1, (int)43682);
			@@@var_0_object:AddReply((int)541520, (int)43684, (int)43683);
			return 0;
		}
		var_534_bool = var_20_bool == (int)43684;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_266(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)541521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541522, (int)-1, (int)43685);
			return 0;
		}
		var_541_bool = var_20_bool == (int)15314;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_266(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)514077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514078, (int)-1, (int)15315);
			@@@var_0_object:AddReply((int)534588, (int)36227, (int)36226);
			return 0;
		}
		var_551_bool = var_20_bool == (int)36227;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_266(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)534589);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534590, (int)-1, (int)36228);
			return 0;
		}
		var_3_string = true;
		var_557_bool = 0;
		func_2440(var_557_bool);
		if(var_557_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x121";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int, var_19_bool, var_20_bool, var_21_object)
{
	if((int)1 != 0) {
		func_1491();
		var_25_bool = var_20_bool == (int)22691;
		if(var_25_bool != 0) {
			var_26_string = "";
			func_827(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)521530);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521531, (int)36229, (int)22692);
			@@@var_0_object:AddReply((int)534594, (int)36233, (int)36232);
			return 0;
		}
		var_51_bool = var_20_bool == (int)36233;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_827(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)534595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534596, (int)-1, (int)36234);
			@@@var_0_object:AddReply((int)534597, (int)-1, (int)36235);
			return 0;
		}
		var_61_bool = var_20_bool == (int)36229;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_827(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)534591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534592, (int)-1, (int)36230);
			@@@var_0_object:AddReply((int)534593, (int)-1, (int)36231);
			return 0;
		}
		var_3_string = true;
		var_70_bool = 0;
		func_2440(var_70_bool);
		if(var_70_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x352";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_int, var_18_int, var_19_bool, var_20_bool, var_21_object)
{
	if((int)1 != 0) {
		func_1491();
		var_25_bool = var_20_bool == (int)35470;
		if(var_25_bool != 0) {
			var_26_string = "";
			func_1069(var_21_object, "Neutral");
			@@@var_0_object:SetMessage((int)533911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533912, (int)-1, (int)35471);
			@@@var_0_object:AddReply((int)533913, (int)-1, (int)35472);
			return 0;
		}
		var_3_string = true;
		var_50_bool = 0;
		func_2440(var_50_bool);
		if(var_50_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x444";
	
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_bool, var_18_bool, var_19_object, var_20_object)
{
	var_21_string = ""; var_22_string = "";
	GetProperty("npc", var_22_string);
	Trace(var_22_string);
	var_24_int = 0; var_25_string = "";
	var_22_string = var_25_string;
	func_1833(var_24_int, var_25_string);
	Trace(var_24_int);
	var_200_bool = 0; var_201_int = 0;
	var_202_int = 0; var_203_string = "";
	var_22_string = var_203_string;
	func_1833(var_202_int, var_203_string);
	var_202_int = var_201_int;
	func_2422(var_200_bool, var_201_int);
	if(var_200_bool != 0) {
		var_211_int = 0; var_212_object = Obj();
		var_20_object = var_212_object;
		TaskCall(2);
		func_695(var_213_object, var_211_int, var_212_object);
		TaskReturn();
	} else {
		var_341_bool = 0; var_342_int = 0;
		var_343_int = 0; var_344_string = "";
		var_22_string = var_344_string;
		func_1833(var_343_int, var_344_string);
		var_343_int = var_342_int;
		func_2402(var_341_bool, var_342_int);
		if(var_341_bool != 0) {
			var_352_int = 0; var_353_object = Obj();
			var_20_object = var_353_object;
			TaskCall(4);
			func_937(var_354_object, var_352_int, var_353_object);
			TaskReturn();
			goto Label_1202;
		}
		var_405_bool = 0; var_406_int = 0;
		var_407_int = 0; var_408_string = "";
		var_22_string = var_408_string;
		func_1833(var_407_int, var_408_string);
		var_407_int = var_406_int;
		func_2412(var_405_bool, var_406_int);
		if(var_405_bool == 0) goto Label_1202;
		var_416_int = 0; var_417_object = Obj();
		var_20_object = var_417_object;
		TaskCall(0);
		func_0(var_418_object, var_416_int, var_417_object);
		TaskReturn();
	}
Label_1202:
	return 2;
	
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_bool, var_18_bool, var_19_object, var_20_int)
{
	var_22_bool = var_20_int == (int)10;
	if(var_22_bool != 0) {
		var_23_bool = 0;
		func_1230(var_18_bool, var_19_object, var_20_int, var_23_bool);
		if(var_23_bool != 0) {
			var_36_bool = var_2_object == 0; //@nz
			if(var_36_bool != 0) {
				var_37_object = Obj();
				var_37_object = var_4_bool;
				func_1480(var_37_object);
				var_2_object = true;
			}
		} else {
			var_44_object = var_2_object;
			if(var_44_object == 0) goto Label_1267;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_1267:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_bool, var_18_bool, var_19_object)
{
	
Label_1133:
	Sleep((int)3);
	var_21_float = 0; var_22_float = 0;
	func_1203(var_15_int, var_16_int, var_17_bool, var_18_bool, var_19_object, (float)300, (float)100);
	goto Label_1133;
}
EMIT "Return(); Pop(0)";


func_2432(var_271_int)
{
	var_271_int = 515571;
	return 0;
}


func_769(var_0_object, var_1_object, var_2_object, var_3_string, var_283_object, var_284_object)
{
	var_0_object = var_284_object;
	var_1_object = var_283_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_290_string = "";
		func_827(var_284_object, "Neutral");
		@@@var_0_object:SetMessage((int)521530);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)521531, (int)36229, (int)22692);
		@@@var_0_object:AddReply((int)534594, (int)36233, (int)36232);
		goto Label_797;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x305";
	}
Label_797:
	var_314_bool = 0;
	func_2440(var_314_bool);
	if(var_314_bool != 0) {

	Label_801:
		lshWaitForAnimEnd();
		var_315_string = var_3_string;
		if(var_315_string != 0) {
		} else {
			var_316_string = "";
			var_316_string = var_2_object;
			func_1449(var_316_string);
			goto Label_801;
	}
		PlayAnimation("all", "idle");

	Label_816:
		WaitForAnimEnd();
		var_329_string = var_3_string;
		if(var_329_string != 0) {
			goto Label_826;
		}
		PlayAnimation("all", "idle");
		goto Label_816;
	}
	goto Label_826;
	
Label_826:
	return 0;
	
}


func_2434(var_270_int)
{
	var_270_int = 504029;
	return 0;
}


func_0(var_0_object, var_416_int, var_417_object)
{
	var_419_object = Obj(); var_420_bool = 0; var_421_int = 0; var_422_bool = 0; var_423_object = Obj(); var_424_bool = 0; var_425_int = 0; var_426_bool = 0;
	var_0_object = var_417_object;
	var_427_bool = 0; var_428_object = Obj(); var_429_float = 0;
	var_417_object = var_428_object;
	func_1362(var_427_bool, var_428_object, (float)130.0);
	var_430_bool = var_427_bool == 0; //@nz
	if(var_430_bool != 0) {
		var_416_int = -2;
		return 8;
	}
	CreateDialog(var_423_object);
	var_431_int = 0;
	func_2434(var_431_int);
	@@var_423_object:SetNPCName(var_431_int);
	var_432_int = 0;
	func_2432(var_432_int);
	@@var_423_object:SetNPCDescription(var_432_int);
	var_433_string = "";
	func_2436(var_433_string);
	@@var_423_object:SetPhoto(var_433_string);
	var_434_string = "";
	func_2438(var_434_string);
	@@var_423_object:SetPhoto2(var_434_string);
	var_435_int = 0;
	func_1810(var_435_int);
	@@var_423_object:SetPlayerName(var_435_int);
	IsOverrideActive(var_424_bool);
	var_436_bool = var_424_bool;
	if(var_436_bool != 0) {
		var_416_int = -2;
		return 8;
	}
	DoDialog(var_423_object);
	var_437_object = Obj(); var_438_object = Obj();
	var_417_object = var_437_object;
	var_423_object = var_438_object;
	TaskCall(1);
	func_74(var_439_object, var_440_object, var_441_string, var_442_bool, var_437_object, var_438_object);
	TaskReturn();
	@@var_423_object:IsDialogEnd(var_426_bool);
	
Label_56:
	var_640_bool = var_426_bool == 0; //@nz
	if(var_640_bool != 0) {
		sync();
		@@var_423_object:IsDialogEnd(var_426_bool);
		goto Label_56;
	}
	var_417_object = Obj();
	func_1431();
	StopDialog(var_423_object);
	@@var_423_object:GetReturnValue((int)-1);
	var_425_int = var_416_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2436(var_272_string)
{
	var_272_string = "ui/NPC_bmask.png";
	return 0;
}


func_1536(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_2438(var_273_string)
{
	var_273_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_1543(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_1545:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_1536(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_1545;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_2440(var_265_bool)
{
	var_265_bool = 0;
	return 0;
}


func_2311(var_495_bool, var_496_int)
{
	var_498_bool = var_496_int == (int)6;
	if(var_498_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_500_bool = var_496_int == (int)26;
	if(var_500_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_502_bool = var_496_int == (int)2;
	if(var_502_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_504_bool = var_496_int == (int)22;
	if(var_504_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_506_bool = var_496_int == (int)15;
	if(var_506_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_508_bool = var_496_int == (int)5;
	if(var_508_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_510_bool = var_496_int == (int)16;
	if(var_510_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_512_bool = var_496_int == (int)19;
	if(var_512_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_495_bool = 0;
	return 0;
}


func_266(var_2_object, var_543_string)
{
	var_544_bool = 0;
	func_2440(var_544_bool);
	var_545_bool = var_544_bool == 0; //@nz
	if(var_545_bool != 0) {
		return 0;
	}
	var_546_bool = var_543_string == var_2_object;
	if(var_546_bool != 0) {
		return 0;
	}
	var_547_string = ""; var_548_bool = 0;
	var_543_string = var_547_string;
	var_550_bool = var_543_string == "";
	if(var_550_bool != 0) {
		var_548_bool = 0;
	} else {
		var_548_bool = 1;
	}
	func_1465(var_547_string, var_548_bool);
	var_2_object = var_543_string;
	return 0;
	
}


func_1803(var_612_bool)
{
	var_614_int = 0;
	func_1527(var_614_int);
	var_612_bool = var_614_int == (int)12;
	return 0;
}


func_1676(var_605_bool, var_606_object)
{
	var_607_bool = 0; var_608_object = Obj(); var_609_string = "";
	var_606_object = var_608_object;
	func_1508(var_607_bool, var_608_object, "monomicin");
	if(var_607_bool != 0) {
		var_605_bool = 1;
		return 0;
	}
	var_605_bool = 0;
	return 0;
}


func_1810(var_274_int)
{
	var_275_int = 0; var_276_int = 0;
	GetVariable("branch", var_276_int);
	var_279_bool = var_276_int == (int)0;
	if(var_279_bool != 0) {
		var_274_int = 1;
		return 2;
	EMIT "GOTO 0x721";
	}
	var_281_bool = var_276_int == (int)1;
	if(var_281_bool != 0) {
		var_274_int = 2;
		return 2;
	}
	var_274_int = 3;
	return 2;
}


func_1431()
{
	var_334_bool = 0; var_335_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_337_bool = 0;
	func_2440(var_337_bool);
	if(var_337_bool != 0) {
	} else {
		HasAnimationTrack(var_335_bool, "head");
		var_339_bool = var_335_bool;
		if(var_339_bool == 0) goto Label_1448;
		UnlookAsync("head");
	}
Label_1448:
	return 2;
	
}


func_1687(var_626_bool, var_627_object)
{
	var_628_bool = 0; var_629_object = Obj(); var_630_string = "";
	var_627_object = var_629_object;
	func_1508(var_628_bool, var_629_object, "feromicin");
	if(var_628_bool != 0) {
		var_626_bool = 1;
		return 0;
	}
	var_626_bool = 0;
	return 0;
}


func_1560()
{
	var_81_string = ""; var_82_string = "";
	GetProperty("npc", var_82_string);
	var_84_int = 0;
	func_1827(var_84_int);
	var_86_bool = var_84_int == (int)0;
	if(var_86_bool != 0) {
		var_87_bool = 0; var_88_string = ""; var_89_string = ""; var_90_string = "";
		var_82_string = var_90_string;
		func_1515(var_87_bool, "volonteers_danko", "rescue_oneday", var_90_string);
	} else {
		var_91_int = 0;
		func_1827(var_91_int);
		var_93_bool = var_91_int == (int)1;
		if(var_93_bool != 0) {
			var_94_bool = 0; var_95_string = ""; var_96_string = ""; var_97_string = "";
			var_82_string = var_97_string;
			func_1515(var_94_bool, "volonteers_burah", "rescue_oneday", var_97_string);
			goto Label_1596;
		}
		var_98_bool = 0; var_99_string = ""; var_100_string = ""; var_101_string = "";
		var_82_string = var_101_string;
		func_1515(var_98_bool, "volonteers_klara", "rescue_oneday", var_101_string);
	}
Label_1596:
	return 2;
	
}


func_1698(var_459_bool, var_460_object)
{
	var_461_bool = 0; var_462_object = Obj();
	var_460_object = var_462_object;
	func_1750(var_462_object);
	if(var_461_bool != 0) {
		var_459_bool = 1;
		return 0;
	}
	var_459_bool = 0;
	return 0;
}


func_1827(var_470_int)
{
	var_471_int = 0; var_472_int = 0;
	GetVariable("branch", var_472_int);
	var_472_int = var_470_int;
	return 2;
}


func_1449(var_316_string)
{
	var_317_bool = 0; var_318_float = 0; var_319_float = 0; var_320_bool = 0; var_321_float = 0; var_322_float = 0;
	lshHasAnimation(var_320_bool, var_316_string);
	var_323_bool = var_320_bool;
	if(var_323_bool != 0) {
		lshGetAnimTimes(var_316_string, var_321_float, var_322_float);
		lshPlayAnimation(var_321_float, var_322_float, (bool)0);
	} else {
		var_326_int = "Can't find lsh animation : " + var_316_string;
		Trace(var_326_int);
	}
	return 6;
	
}


func_1833(var_24_int, var_25_string)
{
	_strlwr(var_25_string);
	var_27_bool = var_25_string == "alexandr";
	if(var_27_bool != 0) {
		var_24_int = 1;
		return 0;
	}
	var_29_bool = var_25_string == "andrei";
	if(var_29_bool != 0) {
		var_24_int = 2;
		return 0;
	}
	var_31_bool = var_25_string == "anna";
	if(var_31_bool != 0) {
		var_24_int = 3;
		return 0;
	}
	var_33_bool = var_25_string == "bigvlad";
	if(var_33_bool != 0) {
		var_24_int = 4;
		return 0;
	}
	var_35_bool = var_25_string == "eva";
	if(var_35_bool != 0) {
		var_24_int = 5;
		return 0;
	}
	var_37_bool = var_25_string == "georg";
	if(var_37_bool != 0) {
		var_24_int = 6;
		return 0;
	}
	var_39_bool = var_25_string == "grif";
	if(var_39_bool != 0) {
		var_24_int = 7;
		return 0;
	}
	var_41_bool = var_25_string == "han";
	if(var_41_bool != 0) {
		var_24_int = 8;
		return 0;
	}
	var_43_bool = var_25_string == "julia";
	if(var_43_bool != 0) {
		var_24_int = 9;
		return 0;
	}
	var_45_bool = var_25_string == "kapella";
	if(var_45_bool != 0) {
		var_24_int = 10;
		return 0;
	}
	var_47_bool = var_25_string == "katerina";
	if(var_47_bool != 0) {
		var_24_int = 11;
		return 0;
	}
	var_49_bool = var_25_string == "klara";
	if(var_49_bool != 0) {
		var_24_int = 12;
		return 0;
	}
	var_51_bool = var_25_string == "lara";
	if(var_51_bool != 0) {
		var_24_int = 13;
		return 0;
	}
	var_53_bool = var_25_string == "laska";
	if(var_53_bool != 0) {
		var_24_int = 14;
		return 0;
	}
	var_55_bool = var_25_string == "maria";
	if(var_55_bool != 0) {
		var_24_int = 15;
		return 0;
	}
	var_57_bool = var_25_string == "mark";
	if(var_57_bool != 0) {
		var_24_int = 16;
		return 0;
	}
	var_59_bool = var_25_string == "mat";
	if(var_59_bool != 0) {
		var_24_int = 17;
		return 0;
	}
	var_61_bool = var_25_string == "mishka";
	if(var_61_bool != 0) {
		var_24_int = 18;
		return 0;
	}
	var_63_bool = var_25_string == "mladvlad";
	if(var_63_bool != 0) {
		var_24_int = 19;
		return 0;
	}
	var_65_bool = var_25_string == "notkin";
	if(var_65_bool != 0) {
		var_24_int = 20;
		return 0;
	}
	var_67_bool = var_25_string == "ospina";
	if(var_67_bool != 0) {
		var_24_int = 21;
		return 0;
	}
	var_69_bool = var_25_string == "petr";
	if(var_69_bool != 0) {
		var_24_int = 22;
		return 0;
	}
	var_71_bool = var_25_string == "rubin";
	if(var_71_bool != 0) {
		var_24_int = 23;
		return 0;
	}
	var_73_bool = var_25_string == "spi4ka";
	if(var_73_bool != 0) {
		var_24_int = 24;
		return 0;
	}
	var_75_bool = var_25_string == "starshina";
	if(var_75_bool != 0) {
		var_24_int = 25;
		return 0;
	}
	var_77_bool = var_25_string == "viktor";
	if(var_77_bool != 0) {
		var_24_int = 26;
		return 0;
	}
	var_79_bool = var_25_string == "wasted_woman";
	if(var_79_bool != 0) {
		var_24_int = 27;
		return 0;
	}
	var_81_bool = var_25_string == "wasted_male";
	if(var_81_bool != 0) {
		var_24_int = 28;
		return 0;
	}
	var_83_bool = var_25_string == "alkash";
	if(var_83_bool != 0) {
		var_24_int = 29;
		return 0;
	}
	var_85_bool = var_25_string == "boy";
	if(var_85_bool != 0) {
		var_24_int = 30;
		return 0;
	}
	var_87_bool = var_25_string == "girl";
	if(var_87_bool != 0) {
		var_24_int = 31;
		return 0;
	}
	var_89_bool = var_25_string == "littleboy";
	if(var_89_bool != 0) {
		var_24_int = 32;
		return 0;
	}
	var_91_bool = var_25_string == "littlegirl";
	if(var_91_bool != 0) {
		var_24_int = 33;
		return 0;
	}
	var_93_bool = var_25_string == "butcher";
	if(var_93_bool != 0) {
		var_24_int = 34;
		return 0;
	}
	var_95_bool = var_25_string == "dohodyaga";
	if(var_95_bool != 0) {
		var_24_int = 35;
		return 0;
	}
	var_97_bool = var_25_string == "unosha";
	if(var_97_bool != 0) {
		var_24_int = 36;
		return 0;
	}
	var_99_bool = var_25_string == "vaxxabit";
	if(var_99_bool != 0) {
		var_24_int = 37;
		return 0;
	}
	var_101_bool = var_25_string == "vaxxabitka";
	if(var_101_bool != 0) {
		var_24_int = 38;
		return 0;
	}
	var_103_bool = var_25_string == "woman";
	if(var_103_bool != 0) {
		var_24_int = 39;
		return 0;
	}
	var_105_bool = var_25_string == "worker";
	if(var_105_bool != 0) {
		var_24_int = 40;
		return 0;
	}
	var_107_bool = var_25_string == "whitemask";
	if(var_107_bool != 0) {
		var_24_int = 42;
		return 0;
	}
	var_109_bool = var_25_string == "birdmask";
	if(var_109_bool != 0) {
		var_24_int = 43;
		return 0;
	}
	var_111_bool = var_25_string == "birdmask";
	if(var_111_bool != 0) {
		var_24_int = 44;
		return 0;
	}
	var_113_bool = var_25_string == "patrol";
	if(var_113_bool != 0) {
		var_24_int = 46;
		return 0;
	}
	var_115_bool = var_25_string == "danko";
	if(var_115_bool != 0) {
		var_24_int = 47;
		return 0;
	}
	var_117_bool = var_25_string == "alkash_d";
	if(var_117_bool != 0) {
		var_24_int = 48;
		return 0;
	}
	var_119_bool = var_25_string == "boy_d";
	if(var_119_bool != 0) {
		var_24_int = 49;
		return 0;
	}
	var_121_bool = var_25_string == "butcher_d";
	if(var_121_bool != 0) {
		var_24_int = 50;
		return 0;
	}
	var_123_bool = var_25_string == "dohodyaga_d";
	if(var_123_bool != 0) {
		var_24_int = 51;
		return 0;
	}
	var_125_bool = var_25_string == "girl_d";
	if(var_125_bool != 0) {
		var_24_int = 52;
		return 0;
	}
	var_127_bool = var_25_string == "littleboy_d";
	if(var_127_bool != 0) {
		var_24_int = 53;
		return 0;
	}
	var_129_bool = var_25_string == "littlegirl_d";
	if(var_129_bool != 0) {
		var_24_int = 54;
		return 0;
	}
	var_131_bool = var_25_string == "unosha2";
	if(var_131_bool != 0) {
		var_24_int = 55;
		return 0;
	}
	var_133_bool = var_25_string == "unosha_d";
	if(var_133_bool != 0) {
		var_24_int = 56;
		return 0;
	}
	var_135_bool = var_25_string == "unosha2_d";
	if(var_135_bool != 0) {
		var_24_int = 57;
		return 0;
	}
	var_137_bool = var_25_string == "vaxxabit_d";
	if(var_137_bool != 0) {
		var_24_int = 58;
		return 0;
	}
	var_139_bool = var_25_string == "vaxxabitka_d";
	if(var_139_bool != 0) {
		var_24_int = 59;
		return 0;
	}
	var_141_bool = var_25_string == "wasted_male_d";
	if(var_141_bool != 0) {
		var_24_int = 60;
		return 0;
	}
	var_143_bool = var_25_string == "wasted_woman_d";
	if(var_143_bool != 0) {
		var_24_int = 61;
		return 0;
	}
	var_145_bool = var_25_string == "woman_d";
	if(var_145_bool != 0) {
		var_24_int = 62;
		return 0;
	}
	var_147_bool = var_25_string == "worker2";
	if(var_147_bool != 0) {
		var_24_int = 63;
		return 0;
	}
	var_149_bool = var_25_string == "worker_d";
	if(var_149_bool != 0) {
		var_24_int = 64;
		return 0;
	}
	var_151_bool = var_25_string == "worker2_d";
	if(var_151_bool != 0) {
		var_24_int = 65;
		return 0;
	}
	var_153_bool = var_25_string == "burah";
	if(var_153_bool != 0) {
		var_24_int = 66;
		return 0;
	}
	var_155_bool = var_25_string == "gorbun_daughter";
	if(var_155_bool != 0) {
		var_24_int = 67;
		return 0;
	}
	var_157_bool = var_25_string == "gorbun";
	if(var_157_bool != 0) {
		var_24_int = 68;
		return 0;
	}
	var_159_bool = var_25_string == "albinos";
	if(var_159_bool != 0) {
		var_24_int = 69;
		return 0;
	}
	var_161_bool = var_25_string == "aglaja";
	if(var_161_bool != 0) {
		var_24_int = 70;
		return 0;
	}
	var_163_bool = var_25_string == "nude";
	if(var_163_bool != 0) {
		var_24_int = 71;
		return 0;
	}
	var_165_bool = var_25_string == "block";
	if(var_165_bool != 0) {
		var_24_int = 72;
		return 0;
	}
	var_167_bool = var_25_string == "officer";
	if(var_167_bool != 0) {
		var_24_int = 73;
		return 0;
	}
	var_169_bool = var_25_string == "doberman";
	if(var_169_bool != 0) {
		var_24_int = 74;
		return 0;
	}
	var_171_bool = var_25_string == "grabitel";
	if(var_171_bool != 0) {
		var_24_int = 75;
		return 0;
	}
	var_173_bool = var_25_string == "gatherer_wife";
	if(var_173_bool != 0) {
		var_24_int = 76;
		return 0;
	}
	var_175_bool = var_25_string == "rat_prophet";
	if(var_175_bool != 0) {
		var_24_int = 77;
		return 0;
	}
	var_177_bool = var_25_string == "morlok";
	if(var_177_bool != 0) {
		var_24_int = 78;
		return 0;
	}
	var_179_bool = var_25_string == "soldier";
	if(var_179_bool != 0) {
		var_24_int = 79;
		return 0;
	}
	var_181_bool = var_25_string == "britva";
	if(var_181_bool != 0) {
		var_24_int = 80;
		return 0;
	}
	var_183_bool = var_25_string == "kabaktchik";
	if(var_183_bool != 0) {
		var_24_int = 81;
		return 0;
	}
	var_185_bool = var_25_string == "sanitar";
	if(var_185_bool != 0) {
		var_24_int = 82;
		return 0;
	}
	var_187_bool = var_25_string == "salesman";
	if(var_187_bool != 0) {
		var_24_int = 83;
		return 0;
	}
	var_189_bool = var_25_string == "ayyan";
	if(var_189_bool != 0) {
		var_24_int = 84;
		return 0;
	}
	var_191_bool = var_25_string == "petrbirdmask";
	if(var_191_bool != 0) {
		var_24_int = 85;
		return 0;
	}
	var_193_bool = var_25_string == "mogila";
	if(var_193_bool != 0) {
		var_24_int = 86;
		return 0;
	}
	var_195_bool = var_25_string == "klikusha";
	if(var_195_bool != 0) {
		var_24_int = 87;
		return 0;
	}
	var_197_bool = var_25_string == "karlik";
	if(var_197_bool != 0) {
		var_24_int = 88;
		return 0;
	}
	var_199_bool = var_25_string == "lisa";
	if(var_199_bool != 0) {
		var_24_int = 89;
		return 0;
	}
	var_24_int = -1;
	return 0;
}


func_937(var_0_object, var_352_int, var_353_object)
{
	var_355_object = Obj(); var_356_bool = 0; var_357_int = 0; var_358_bool = 0; var_359_object = Obj(); var_360_bool = 0; var_361_int = 0; var_362_bool = 0;
	var_0_object = var_353_object;
	var_363_bool = 0; var_364_object = Obj(); var_365_float = 0;
	var_353_object = var_364_object;
	func_1362(var_363_bool, var_364_object, (float)130.0);
	var_366_bool = var_363_bool == 0; //@nz
	if(var_366_bool != 0) {
		var_352_int = -2;
		return 8;
	}
	CreateDialog(var_359_object);
	var_367_int = 0;
	func_2434(var_367_int);
	@@var_359_object:SetNPCName(var_367_int);
	var_368_int = 0;
	func_2432(var_368_int);
	@@var_359_object:SetNPCDescription(var_368_int);
	var_369_string = "";
	func_2436(var_369_string);
	@@var_359_object:SetPhoto(var_369_string);
	var_370_string = "";
	func_2438(var_370_string);
	@@var_359_object:SetPhoto2(var_370_string);
	var_371_int = 0;
	func_1810(var_371_int);
	@@var_359_object:SetPlayerName(var_371_int);
	IsOverrideActive(var_360_bool);
	var_372_bool = var_360_bool;
	if(var_372_bool != 0) {
		var_352_int = -2;
		return 8;
	}
	DoDialog(var_359_object);
	var_373_object = Obj(); var_374_object = Obj();
	var_353_object = var_373_object;
	var_359_object = var_374_object;
	TaskCall(5);
	func_1011(var_375_object, var_376_object, var_377_string, var_378_bool, var_373_object, var_374_object);
	TaskReturn();
	@@var_359_object:IsDialogEnd(var_362_bool);
	
Label_993:
	var_403_bool = var_362_bool == 0; //@nz
	if(var_403_bool != 0) {
		sync();
		@@var_359_object:IsDialogEnd(var_362_bool);
		goto Label_993;
	}
	var_353_object = Obj();
	func_1431();
	StopDialog(var_359_object);
	@@var_359_object:GetReturnValue((int)-1);
	var_361_int = var_352_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1708(var_584_bool, var_585_object)
{
	var_586_bool = 0; var_587_object = Obj(); var_588_string = "";
	var_585_object = var_587_object;
	func_1508(var_586_bool, var_587_object, "burah_serum");
	if(var_586_bool != 0) {
		var_584_bool = 1;
		return 0;
	}
	var_584_bool = 0;
	return 0;
}


func_1069(var_2_object, var_380_string)
{
	var_381_bool = 0;
	func_2440(var_381_bool);
	var_382_bool = var_381_bool == 0; //@nz
	if(var_382_bool != 0) {
		return 0;
	}
	var_383_bool = var_380_string == var_2_object;
	if(var_383_bool != 0) {
		return 0;
	}
	var_384_string = ""; var_385_bool = 0;
	var_380_string = var_384_string;
	var_387_bool = var_380_string == "";
	if(var_387_bool != 0) {
		var_385_bool = 0;
	} else {
		var_385_bool = 1;
	}
	func_1465(var_384_string, var_385_bool);
	var_2_object = var_380_string;
	return 0;
	
}


func_2354(var_513_bool, var_514_int)
{
	var_516_bool = var_514_int == (int)7;
	if(var_516_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_518_bool = var_514_int == (int)23;
	if(var_518_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_520_bool = var_514_int == (int)21;
	if(var_520_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_522_bool = var_514_int == (int)9;
	if(var_522_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_524_bool = var_514_int == (int)3;
	if(var_524_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_526_bool = var_514_int == (int)1;
	if(var_526_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_528_bool = var_514_int == (int)11;
	if(var_528_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_530_bool = var_514_int == (int)13;
	if(var_530_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_532_bool = var_514_int == (int)25;
	if(var_532_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_513_bool = 0;
	return 0;
}


func_1203(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_1357(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	SetTimer((int)10, (float)1.0);
	func_1268();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1719(var_596_bool, var_597_object)
{
	var_598_bool = 0; var_599_object = Obj(); var_600_string = "";
	var_597_object = var_599_object;
	func_1508(var_598_bool, var_599_object, "powder");
	if(var_598_bool != 0) {
		var_596_bool = 1;
		return 0;
	}
	var_596_bool = 0;
	return 0;
}


func_695(var_0_object, var_211_int, var_212_object)
{
	var_214_object = Obj(); var_215_bool = 0; var_216_int = 0; var_217_bool = 0; var_218_object = Obj(); var_219_bool = 0; var_220_int = 0; var_221_bool = 0;
	var_0_object = var_212_object;
	var_222_bool = 0; var_223_object = Obj(); var_224_float = 0;
	var_212_object = var_223_object;
	func_1362(var_222_bool, var_223_object, (float)130.0);
	var_269_bool = var_222_bool == 0; //@nz
	if(var_269_bool != 0) {
		var_211_int = -2;
		return 8;
	}
	CreateDialog(var_218_object);
	var_270_int = 0;
	func_2434(var_270_int);
	@@var_218_object:SetNPCName(var_270_int);
	var_271_int = 0;
	func_2432(var_271_int);
	@@var_218_object:SetNPCDescription(var_271_int);
	var_272_string = "";
	func_2436(var_272_string);
	@@var_218_object:SetPhoto(var_272_string);
	var_273_string = "";
	func_2438(var_273_string);
	@@var_218_object:SetPhoto2(var_273_string);
	var_274_int = 0;
	func_1810(var_274_int);
	@@var_218_object:SetPlayerName(var_274_int);
	IsOverrideActive(var_219_bool);
	var_282_bool = var_219_bool;
	if(var_282_bool != 0) {
		var_211_int = -2;
		return 8;
	}
	DoDialog(var_218_object);
	var_283_object = Obj(); var_284_object = Obj();
	var_212_object = var_283_object;
	var_218_object = var_284_object;
	TaskCall(3);
	func_769(var_285_object, var_286_object, var_287_string, var_288_bool, var_283_object, var_284_object);
	TaskReturn();
	@@var_218_object:IsDialogEnd(var_221_bool);
	
Label_751:
	var_332_bool = var_221_bool == 0; //@nz
	if(var_332_bool != 0) {
		sync();
		@@var_218_object:IsDialogEnd(var_221_bool);
		goto Label_751;
	}
	var_212_object = Obj();
	func_1431();
	StopDialog(var_218_object);
	@@var_218_object:GetReturnValue((int)-1);
	var_220_int = var_211_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1465(var_294_string, var_295_bool)
{
	var_298_bool = 0; var_299_float = 0; var_300_float = 0; var_301_bool = 0; var_302_float = 0; var_303_float = 0;
	lshHasAnimation(var_301_bool, var_294_string);
	var_304_bool = var_301_bool;
	if(var_304_bool != 0) {
		lshGetAnimTimes(var_294_string, var_302_float, var_303_float);
		lshPlayAnimation(var_302_float, var_303_float, var_295_bool);
	} else {
		var_306_int = "Can't find lsh animation : " + var_294_string;
		Trace(var_306_int);
	}
	return 6;
	
}


func_827(var_2_object, var_290_string)
{
	var_291_bool = 0;
	func_2440(var_291_bool);
	var_292_bool = var_291_bool == 0; //@nz
	if(var_292_bool != 0) {
		return 0;
	}
	var_293_bool = var_290_string == var_2_object;
	if(var_293_bool != 0) {
		return 0;
	}
	var_294_string = ""; var_295_bool = 0;
	var_290_string = var_294_string;
	var_297_bool = var_290_string == "";
	if(var_297_bool != 0) {
		var_295_bool = 0;
	} else {
		var_295_bool = 1;
	}
	func_1465(var_294_string, var_295_bool);
	var_2_object = var_290_string;
	return 0;
	
}


func_1597(var_114_object)
{
	var_116_int = 0; var_117_int = 0;
	@@var_114_object:RemoveItemByType(var_117_int, "feromicin", (int)1);
	return 2;
}


func_1730(var_445_bool, var_446_object)
{
	var_447_bool = 0; var_448_object = Obj();
	var_446_object = var_448_object;
	func_1790(var_448_object);
	if(var_447_bool != 0) {
		var_445_bool = 1;
		return 0;
	}
	var_445_bool = 0;
	return 0;
}


func_1603(var_102_object)
{
	var_104_int = 0; var_105_int = 0;
	@@var_102_object:RemoveItemByType(var_105_int, "monomicin", (int)1);
	return 2;
}


func_1347(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_1349(var_27_float, var_28_object)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0);
	GetPosition(var_32_cvector);
	@@var_28_object:GetPosition(var_33_cvector);
	var_34_cvector = var_33_cvector - var_32_cvector;
	var_27_float = var_34_cvector | var_34_cvector;
	return 6;
}


func_1480(var_37_object)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0);
	@@var_37_object:GetEyesHeight(var_40_float);
	var_41_cvector = CVector(0.0, 0.0, 0.0);
	var_42_float = GetByIndex(var_41_cvector, 1);
	var_40_float = var_42_float;
	SetByIndex(var_41_cvector, 1) = var_42_float;
	LookAsync(var_37_object, "head", var_41_cvector);
	return 4;
}


func_1609()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_437_object, var_438_object)
{
	var_0_object = var_438_object;
	var_1_object = var_437_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_444_bool = 0;
		var_444_bool = 0;
		var_445_bool = 0; var_446_object = Obj();
		var_446_object = var_1_object;
		func_1730(var_445_bool, var_446_object);
		if(var_445_bool != 0) {
			var_459_bool = 0; var_460_object = Obj();
			var_460_object = var_1_object;
			func_1698(var_459_bool, var_460_object);
			if(var_459_bool != 0) {
				var_444_bool = 1;
			}
		}
		if(var_444_bool != 0) {
			var_533_object = Obj(); var_534_object = Obj();
			var_533_object = var_1_object;
			var_534_object = var_0_object;
			func_1615();
			var_543_string = "";
			func_266(var_438_object, "Neutral");
			@@@var_0_object:SetMessage((int)514075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514076, (int)15314, (int)15313);
			@@@var_0_object:AddReply((int)534587, (int)-1, (int)36225);
		} else {
				var_566_bool = 0;
				var_566_bool = 0;
				var_567_bool = 0; var_568_object = Obj();
				var_568_object = var_1_object;
				func_1730(var_567_bool, var_568_object);
				if(var_567_bool != 0) {
					var_569_bool = 0; var_570_object = Obj();
					var_570_object = var_1_object;
					func_1698(var_569_bool, var_570_object);
					var_571_bool = var_569_bool == 0; //@nz
					if(var_571_bool != 0) {
						var_566_bool = 1;
					}
				}
				if(var_566_bool != 0) {
					var_572_object = Obj(); var_573_object = Obj();
					var_572_object = var_1_object;
					var_573_object = var_0_object;
					func_1615();
					var_574_string = "";
					func_266(var_438_object, "Neutral");
					@@@var_0_object:SetMessage((int)541516);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)541517, (int)43681, (int)43680);
					@@@var_0_object:AddReply((int)541523, (int)-1, (int)43686);
					goto Label_236;
				}
				var_582_string = "";
				func_266(var_438_object, "Neutral");
				@@@var_0_object:SetMessage((int)514079);
				@@@var_0_object:ClearReplies();
				var_584_bool = 0; var_585_object = Obj();
				var_585_object = var_1_object;
				func_1708(var_584_bool, var_585_object);
				if(var_584_bool != 0) {
					@@@var_0_object:AddReply((int)514080, (int)15318, (int)15317);
				}
				var_596_bool = 0; var_597_object = Obj();
				var_597_object = var_1_object;
				func_1719(var_596_bool, var_597_object);
				if(var_596_bool != 0) {
					@@@var_0_object:AddReply((int)514110, (int)15326, (int)15325);
				}
				var_604_bool = 0;
				var_604_bool = 0;
				var_605_bool = 0; var_606_object = Obj();
				var_606_object = var_1_object;
				func_1676(var_605_bool, var_606_object);
				if(var_605_bool != 0) {
					var_610_bool = 0; var_611_object = Obj();
					var_611_object = var_1_object;
					func_1740(var_610_bool, var_611_object);
					var_621_bool = var_610_bool == 0; //@nz
					if(var_621_bool != 0) {
						var_604_bool = 1;
					}
				}
				if(var_604_bool != 0) {
					@@@var_0_object:AddReply((int)532117, (int)33529, (int)33528);
				}
				var_625_bool = 0;
				var_625_bool = 0;
				var_626_bool = 0; var_627_object = Obj();
				var_627_object = var_1_object;
				func_1687(var_626_bool, var_627_object);
				if(var_626_bool != 0) {
					var_631_bool = 0; var_632_object = Obj();
					var_632_object = var_1_object;
					func_1740(var_631_bool, var_632_object);
					var_633_bool = var_631_bool == 0; //@nz
					if(var_633_bool != 0) {
						var_625_bool = 1;
					}
				}
				if(var_625_bool != 0) {
					@@@var_0_object:AddReply((int)532120, (int)33532, (int)33531);
				}
				@@@var_0_object:AddReply((int)514082, (int)-1, (int)15319);
				goto Label_236;
		}
	}
Label_236:
	var_558_bool = 0;
	func_2440(var_558_bool);
	if(var_558_bool != 0) {

	Label_240:
		lshWaitForAnimEnd();
		var_559_string = var_3_string;
		if(var_559_string != 0) {
		} else {
			var_560_string = "";
			var_560_string = var_2_object;
			func_1449(var_560_string);
			goto Label_240;
	}
		PlayAnimation("all", "idle");

	Label_255:
		WaitForAnimEnd();
		var_563_string = var_3_string;
		if(var_563_string != 0) {
			goto Label_265;
		}
		PlayAnimation("all", "idle");
		goto Label_255;

	}
	goto Label_265;
	
Label_265:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_1740(var_610_bool, var_611_object)
{
	var_612_bool = 0; var_613_object = Obj();
	var_611_object = var_613_object;
	func_1803(var_613_object);
	if(var_612_bool != 0) {
		var_610_bool = 1;
		return 0;
	}
	var_610_bool = 0;
	return 0;
}


func_1357(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_1230(var_0_object, var_1_object, var_4_bool, var_23_bool)
{
	var_24_float = 0; var_25_float = 0;
	var_26_bool = var_4_bool == 0; //@ne
	if(var_26_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	var_27_float = 0; var_28_object = Obj();
	var_28_object = var_4_bool;
	func_1349(var_27_float, var_28_object);
	var_25_float = sqrt(var_27_float);
	var_35_object = var_2_object;
	if(var_35_object != 0) {
		var_25_float = var_25_float - var_1_object;
	}
	var_23_bool = var_25_float < var_0_object;
	return 2;
}


func_1615()
{
	var_535_string = ""; var_536_string = "";
	GetProperty("npc", var_536_string);
	var_539_int = "oo" + var_536_string;
	var_541_int = var_539_int + "1";
	SetVariable(var_541_int, (int)1);
	return 2;
}


func_1362(var_222_bool, var_223_object, var_224_float)
{
	var_225_float = 0; var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_bool = 0; var_233_bool = 0; var_234_float = 0; var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_bool = 0; var_242_bool = 0;
	@@var_223_object:GetPosition(var_235_cvector);
	@@var_223_object:GetEyesHeight(var_234_float);
	var_243_float = GetByIndex(var_235_cvector, 1);
	var_243_float = var_243_float + var_234_float;
	SetByIndex(var_235_cvector, 1) = var_243_float;
	GetPosition(var_236_cvector);
	GetEyesHeight(var_234_float);
	var_244_float = GetByIndex(var_236_cvector, 1);
	var_244_float = var_244_float + var_234_float;
	SetByIndex(var_236_cvector, 1) = var_244_float;
	var_237_cvector = var_235_cvector - var_236_cvector;
	var_245_float = GetByIndex(var_237_cvector, 1);
	SetByIndex(var_237_cvector, 1) = (float)0;
	var_246_int = var_237_cvector | var_237_cvector;
	var_247_float = sqrt(var_246_int);
	var_237_cvector = var_237_cvector / var_247_float;
	var_238_cvector = -var_237_cvector;
	var_248_float = var_237_cvector * var_224_float;
	var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0);
	var_250_cvector = var_238_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1498(var_249_cvector, var_250_cvector);
	var_258_float = var_249_cvector * (int)25;
	var_259_int = var_248_float + var_258_float;
	var_239_cvector = var_259_int - CVector(0.0, 10.0, 0.0);
	var_240_cvector = var_236_cvector + var_239_cvector;
	IsOverrideActive(var_241_bool);
	var_261_bool = var_241_bool;
	if(var_261_bool != 0) {
		var_222_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_240_cvector, var_238_cvector, (bool)1);
	var_263_float = GetByIndex(var_239_cvector, 0);
	var_264_float = GetByIndex(var_239_cvector, 2);
	Rotate(var_263_float, var_264_float);
	var_265_bool = 0;
	func_2440(var_265_bool);
	if(var_265_bool != 0) {
	} else {
		HasAnimationTrack(var_242_bool, "head");
		var_267_bool = var_242_bool;
		if(var_267_bool == 0) goto Label_1425;
		LookAsyncCamera("head");
	}
Label_1425:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_222_bool = 1;
	return 18;
	
}


func_1491()
{
	var_23_bool = 0;
	func_2440(var_23_bool);
	if(var_23_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1750(var_461_bool)
{
	var_463_string = ""; var_464_int = 0; var_465_string = ""; var_466_int = 0;
	GetProperty("npc", var_465_string);
	var_468_int = 0; var_469_string = "";
	var_465_string = var_469_string;
	func_1833(var_468_int, var_469_string);
	var_468_int = var_466_int;
	var_470_int = 0;
	func_1827(var_470_int);
	var_475_bool = var_470_int == (int)1;
	if(var_475_bool != 0) {
		var_476_bool = 0; var_477_int = 0;
		var_466_int = var_477_int;
		func_2273(var_476_bool, var_477_int);
		var_476_bool = var_461_bool;
		return 4;
	EMIT "GOTO 0x6f8";
	}
	var_492_int = 0;
	func_1827(var_492_int);
	var_494_bool = var_492_int == (int)0;
	if(var_494_bool != 0) {
		var_495_bool = 0; var_496_int = 0;
		var_466_int = var_496_int;
		func_2311(var_495_bool, var_496_int);
		var_495_bool = var_461_bool;
		return 4;
	}
	var_513_bool = 0; var_514_int = 0;
	var_466_int = var_514_int;
	func_2354(var_513_bool, var_514_int);
	var_513_bool = var_461_bool;
	return 4;
}


func_1498(var_249_cvector, var_250_cvector)
{
	var_252_float = 0; var_253_float = 0;
	var_254_int = var_250_cvector | var_250_cvector;
	var_253_float = sqrt(var_254_int);
	var_255_float = 9.999999974752427e-07;
	var_256_bool = var_253_float < var_255_float;
	if(var_256_bool != 0) {
		var_249_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_249_cvector = var_250_cvector / var_253_float;
	return 2;
}


func_1627(var_67_object)
{
	var_69_int = 0; var_70_int = 0;
	@@var_67_object:RemoveItemByType(var_70_int, "powder", (int)1);
	return 2;
}


func_1633(var_26_object)
{
	var_28_int = 0; var_29_int = 0;
	@@var_26_object:RemoveItemByType(var_29_int, "burah_serum", (int)1);
	return 2;
}


func_2402(var_341_bool, var_342_int)
{
	var_345_int = 0; var_346_int = 0;
	var_348_int = "vol_" + var_342_int;
	GetVariable(var_348_int, var_346_int);
	var_350_int = var_346_int & (int)32;
	var_341_bool = var_350_int != (int)0;
	return 2;
}


func_2273(var_476_bool, var_477_int)
{
	var_479_bool = var_477_int == (int)18;
	if(var_479_bool != 0) {
		var_476_bool = 1;
		return 0;
	}
	var_481_bool = var_477_int == (int)24;
	if(var_481_bool != 0) {
		var_476_bool = 1;
		return 0;
	}
	var_483_bool = var_477_int == (int)20;
	if(var_483_bool != 0) {
		var_476_bool = 1;
		return 0;
	}
	var_485_bool = var_477_int == (int)14;
	if(var_485_bool != 0) {
		var_476_bool = 1;
		return 0;
	}
	var_487_bool = var_477_int == (int)10;
	if(var_487_bool != 0) {
		var_476_bool = 1;
		return 0;
	}
	var_489_bool = var_477_int == (int)17;
	if(var_489_bool != 0) {
		var_476_bool = 1;
		return 0;
	}
	var_491_bool = var_477_int == (int)8;
	if(var_491_bool != 0) {
		var_476_bool = 1;
		return 0;
	}
	var_476_bool = 0;
	return 0;
}


func_1508(var_586_bool, var_587_object, var_588_string)
{
	var_589_int = 0; var_590_bool = 0; var_591_int = 0; var_592_bool = 0;
	GetInvItemByName(var_591_int, var_588_string);
	@@var_587_object:HasItem(var_591_int, var_592_bool);
	var_592_bool = var_586_bool;
	return 4;
}


func_1639()
{
	var_34_string = ""; var_35_string = "";
	GetProperty("npc", var_35_string);
	var_37_int = 0;
	func_1827(var_37_int);
	var_42_bool = var_37_int == (int)0;
	if(var_42_bool != 0) {
		var_43_bool = 0; var_44_string = ""; var_45_string = ""; var_46_string = "";
		var_35_string = var_46_string;
		func_1515(var_43_bool, "volonteers_danko", "rescue", var_46_string);
	} else {
		var_50_int = 0;
		func_1827(var_50_int);
		var_52_bool = var_50_int == (int)1;
		if(var_52_bool != 0) {
			var_53_bool = 0; var_54_string = ""; var_55_string = ""; var_56_string = "";
			var_35_string = var_56_string;
			func_1515(var_53_bool, "volonteers_burah", "rescue", var_56_string);
			goto Label_1675;
		}
		var_57_bool = 0; var_58_string = ""; var_59_string = ""; var_60_string = "";
		var_35_string = var_60_string;
		func_1515(var_57_bool, "volonteers_klara", "rescue", var_60_string);
	}
Label_1675:
	return 2;
	
}


func_1515(var_43_bool, var_44_string, var_45_string, var_46_string)
{
	var_47_object = Obj(); var_48_object = Obj();
	FindActor(var_48_object, var_44_string);
	var_49_bool = var_48_object == 0; //@ne
	if(var_49_bool != 0) {
		var_43_bool = 0;
		return 2;
	}
	Trigger(var_48_object, var_45_string, var_46_string);
	var_43_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2412(var_405_bool, var_406_int)
{
	var_409_int = 0; var_410_int = 0;
	var_412_int = "vol_" + var_406_int;
	GetVariable(var_412_int, var_410_int);
	var_414_int = var_410_int & (int)4;
	var_405_bool = var_414_int != (int)0;
	return 2;
}


func_1011(var_0_object, var_1_object, var_2_object, var_3_string, var_373_object, var_374_object)
{
	var_0_object = var_374_object;
	var_1_object = var_373_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_380_string = "";
		func_1069(var_374_object, "Neutral");
		@@@var_0_object:SetMessage((int)533911);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)533912, (int)-1, (int)35471);
		@@@var_0_object:AddReply((int)533913, (int)-1, (int)35472);
		goto Label_1039;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3f7";
	}
Label_1039:
	var_395_bool = 0;
	func_2440(var_395_bool);
	if(var_395_bool != 0) {

	Label_1043:
		lshWaitForAnimEnd();
		var_396_string = var_3_string;
		if(var_396_string != 0) {
		} else {
			var_397_string = "";
			var_397_string = var_2_object;
			func_1449(var_397_string);
			goto Label_1043;
	}
		PlayAnimation("all", "idle");

	Label_1058:
		WaitForAnimEnd();
		var_400_string = var_3_string;
		if(var_400_string != 0) {
			goto Label_1068;
		}
		PlayAnimation("all", "idle");
		goto Label_1058;
	}
	goto Label_1068;
	
Label_1068:
	return 0;
	
}


func_1268()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_1357(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_1543((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_1282:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_1357(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_1315;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_1536(var_68_string, var_69_int);
			PlayAnimation("all", var_68_string);
			WaitForAnimEnd(var_41_bool);
			var_70_bool = var_41_bool == 0; //@nz
			if(var_70_bool != 0) {
			} else {
		} else {
				var_75_bool = var_39_int == (int)1;
				if(var_75_bool != 0) {
					rand(var_42_float, (int)4);
					var_78_int = var_42_float + (int)1;
					Sleep(var_78_int, var_43_bool);
					var_79_bool = var_43_bool == 0; //@nz
					if(var_79_bool != 0) {
						goto Label_1344;
					}
					goto Label_1333;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_1333;
				goto Label_1344;
		}
		Label_1333:
			var_71_bool = 0;
			func_1347(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_1344;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_1282;

		}
	}
Label_1344:
	ResetAAS();
	return 14;
	
}


func_2422(var_200_bool, var_201_int)
{
	var_204_int = 0; var_205_int = 0;
	var_207_int = "vol_" + var_201_int;
	GetVariable(var_207_int, var_205_int);
	var_209_int = var_205_int & (int)16;
	var_200_bool = var_209_int != (int)0;
	return 2;
}


func_1527(var_614_int)
{
	var_615_float = 0; var_616_float = 0;
	GetGameTime(var_616_float);
	var_618_int = 0;
	var_618_int = var_616_float / (int)24;
	var_614_int = (int)1 + var_618_int;
	return 2;
}


func_1790(var_447_bool)
{
	var_449_string = ""; var_450_int = 0; var_451_string = ""; var_452_int = 0;
	GetProperty("npc", var_451_string);
	var_455_int = "oo" + var_451_string;
	var_457_int = var_455_int + "1";
	GetVariable(var_457_int, var_452_int);
	var_447_bool = var_452_int == (int)0;
	return 4;
}


