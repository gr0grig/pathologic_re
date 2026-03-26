// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:itheater@door1|W:ook12TBirdmask1|W:ook12TBirdmask2|W:k12DankoVisit|W:k12BurahVisit|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x3f9
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb8 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x3ff vars=object
// @EVENT_26: op=0x430 vars=string
// @EVENT_6: op=0x438 vars=
// @EVENT_7: op=0x479 vars=int
// @PE: 0x4a,0xa2,0xb8,0x3ff,0x430,0x44f,0x479,0x490,0x5c7,0x5ce,0x5d4,0x5da,0x5e6,0x5f2,0x5fe

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_1410();
		var_17_bool = var_13_bool == (int)43493;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1486();
		}
		var_23_bool = var_13_bool == (int)45156;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_1492();
		}
		var_29_bool = var_12_bool == (int)43100;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_1479();
			var_42_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541007);
			@@@var_0_object:ClearReplies();
			var_60_bool = 0; var_61_object = Obj();
			var_61_object = var_1_object;
			func_1510(var_61_object);
			if(var_60_bool != 0) {
				@@@var_0_object:AddReply((int)541347, (int)43494, (int)43493);
			}
			var_71_bool = 0;
			var_71_bool = 0;
			var_72_bool = 0; var_73_object = Obj();
			var_73_object = var_1_object;
			func_1522(var_73_object);
			if(var_72_bool != 0) {
				var_78_bool = 0; var_79_object = Obj();
				var_79_object = var_1_object;
				func_1510(var_79_object);
				var_80_bool = var_78_bool == 0; //@nz
				if(var_80_bool != 0) {
					var_71_bool = 1;
				}
			}
			if(var_71_bool != 0) {
				@@@var_0_object:AddReply((int)542740, (int)45157, (int)45156);
			}
			@@@var_0_object:AddReply((int)541034, (int)-1, (int)43128);
			return 0;
		}
		var_88_bool = var_12_bool == (int)45157;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542742, (int)45163, (int)45158);
			@@@var_0_object:AddReply((int)542743, (int)45160, (int)45159);
			return 0;
		}
		var_98_bool = var_12_bool == (int)45160;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542744);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542745, (int)45169, (int)45161);
			@@@var_0_object:AddReply((int)542746, (int)-1, (int)45162);
			return 0;
		}
		var_108_bool = var_12_bool == (int)45163;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542747);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542748, (int)45166, (int)45165);
			@@@var_0_object:AddReply((int)542751, (int)45169, (int)45168);
			return 0;
		}
		var_118_bool = var_12_bool == (int)45166;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542750, (int)45169, (int)45167);
			return 0;
		}
		var_125_bool = var_12_bool == (int)45169;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542752);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542753, (int)45173, (int)45172);
			return 0;
		}
		var_132_bool = var_12_bool == (int)45173;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542754);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542755, (int)45177, (int)45174);
			@@@var_0_object:AddReply((int)542756, (int)45178, (int)45175);
			@@@var_0_object:AddReply((int)542757, (int)-1, (int)45176);
			return 0;
		}
		var_145_bool = var_12_bool == (int)45178;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542760, (int)-1, (int)45179);
			@@@var_0_object:AddReply((int)542761, (int)45177, (int)45180);
			return 0;
		}
		var_155_bool = var_12_bool == (int)45177;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542758);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542762, (int)-1, (int)45182);
			return 0;
		}
		var_162_bool = var_12_bool == (int)43494;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541349, (int)43496, (int)43495);
			return 0;
		}
		var_169_bool = var_12_bool == (int)43496;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541351, (int)43498, (int)43497);
			@@@var_0_object:AddReply((int)541356, (int)43503, (int)43502);
			return 0;
		}
		var_179_bool = var_12_bool == (int)43503;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541358, (int)43505, (int)43504);
			@@@var_0_object:AddReply((int)541361, (int)43508, (int)43507);
			return 0;
		}
		var_189_bool = var_12_bool == (int)43508;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541363, (int)43498, (int)43509);
			return 0;
		}
		var_196_bool = var_12_bool == (int)43505;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541360, (int)43498, (int)43506);
			return 0;
		}
		var_203_bool = var_12_bool == (int)43498;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541352);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541353, (int)43500, (int)43499);
			@@@var_0_object:AddReply((int)541364, (int)-1, (int)43510);
			return 0;
		}
		var_213_bool = var_12_bool == (int)43500;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541355, (int)43513, (int)43501);
			@@@var_0_object:AddReply((int)541368, (int)43517, (int)43516);
			return 0;
		}
		var_223_bool = var_12_bool == (int)43517;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541370, (int)43515, (int)43518);
			@@@var_0_object:AddReply((int)541373, (int)43523, (int)43522);
			@@@var_0_object:AddReply((int)542700, (int)45109, (int)45108);
			return 0;
		}
		var_236_bool = var_12_bool == (int)45109;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542702, (int)45111, (int)45110);
			return 0;
		}
		var_243_bool = var_12_bool == (int)45111;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542703);
			@@@var_0_object:ClearReplies();
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_1498(var_247_object);
			if(var_246_bool != 0) {
				@@@var_0_object:AddReply((int)542704, (int)45117, (int)45112);
			}
			@@@var_0_object:AddReply((int)542705, (int)45114, (int)45113);
			return 0;
		}
		var_259_bool = var_12_bool == (int)45114;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542706);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542707, (int)43523, (int)45115);
			return 0;
		}
		var_266_bool = var_12_bool == (int)45117;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542708);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542709, (int)45119, (int)45118);
			return 0;
		}
		var_273_bool = var_12_bool == (int)45119;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542710);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542711, (int)45122, (int)45120);
			@@@var_0_object:AddReply((int)542712, (int)45122, (int)45121);
			return 0;
		}
		var_283_bool = var_12_bool == (int)45122;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542713);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542714, (int)45125, (int)45123);
			return 0;
		}
		var_290_bool = var_12_bool == (int)45125;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542715);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542716, (int)43523, (int)45126);
			@@@var_0_object:AddReply((int)542717, (int)-1, (int)45127);
			return 0;
		}
		var_300_bool = var_12_bool == (int)43513;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541366, (int)43515, (int)43514);
			@@@var_0_object:AddReply((int)541372, (int)43523, (int)43521);
			@@@var_0_object:AddReply((int)542718, (int)45130, (int)45129);
			return 0;
		}
		var_313_bool = var_12_bool == (int)45130;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542719);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542736, (int)45151, (int)45150);
			return 0;
		}
		var_320_bool = var_12_bool == (int)45151;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542738, (int)45153, (int)45152);
			return 0;
		}
		var_327_bool = var_12_bool == (int)45153;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542720, (int)45132, (int)45131);
			return 0;
		}
		var_334_bool = var_12_bool == (int)45132;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542721);
			@@@var_0_object:ClearReplies();
			var_337_bool = 0; var_338_object = Obj();
			var_338_object = var_1_object;
			func_1534(var_338_object);
			if(var_337_bool != 0) {
				@@@var_0_object:AddReply((int)542722, (int)45134, (int)45133);
			}
			@@@var_0_object:AddReply((int)542733, (int)45147, (int)45146);
			return 0;
		}
		var_350_bool = var_12_bool == (int)45147;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542734);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542735, (int)43523, (int)45148);
			return 0;
		}
		var_357_bool = var_12_bool == (int)45134;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542724, (int)45136, (int)45135);
			return 0;
		}
		var_364_bool = var_12_bool == (int)45136;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542725);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542726, (int)45138, (int)45137);
			@@@var_0_object:AddReply((int)542732, (int)45138, (int)45144);
			return 0;
		}
		var_374_bool = var_12_bool == (int)45138;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542727);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542728, (int)45140, (int)45139);
			return 0;
		}
		var_381_bool = var_12_bool == (int)45140;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542729);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542730, (int)43523, (int)45141);
			@@@var_0_object:AddReply((int)542731, (int)-1, (int)45143);
			return 0;
		}
		var_391_bool = var_12_bool == (int)43523;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541375, (int)-1, (int)43525);
			@@@var_0_object:AddReply((int)541376, (int)-1, (int)43526);
			return 0;
		}
		var_401_bool = var_12_bool == (int)43515;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_162(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541367);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541371, (int)-1, (int)43520);
			return 0;
		}
		var_3_string = true;
		var_407_bool = 0;
		func_1571(var_407_bool);
		if(var_407_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb9";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_1168(var_11_bool, var_12_object);
	var_16_int = 0; var_17_object = Obj();
	var_12_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_1052(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_1168(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_1101(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_1417(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_1130(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_1399(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_1167;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_1167:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_1034(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_1281(var_27_bool, var_28_object, (float)130.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_1565(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_1563(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_1567(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_1569(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_1546(var_79_int);
	@@var_23_object:SetPlayerName(var_79_int);
	IsOverrideActive(var_24_bool);
	var_87_bool = var_24_bool;
	if(var_87_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	DoDialog(var_23_object);
	var_88_object = Obj(); var_89_object = Obj();
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	@@var_23_object:IsDialogEnd(var_26_bool);
	
Label_56:
	var_170_bool = var_26_bool == 0; //@nz
	if(var_170_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_1350();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1281(var_27_bool, var_28_object, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0;
	@@var_28_object:GetPosition(var_40_cvector);
	@@var_28_object:GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	var_48_float = var_48_float + var_39_float;
	SetByIndex(var_40_cvector, 1) = var_48_float;
	GetPosition(var_41_cvector);
	GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_39_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_52_float = sqrt(var_51_int);
	var_42_cvector = var_42_cvector / var_52_float;
	var_43_cvector = -var_42_cvector;
	var_53_float = var_42_cvector * var_29_float;
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	var_55_cvector = var_43_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1423(var_54_cvector, var_55_cvector);
	var_63_float = var_54_cvector * (int)25;
	var_64_int = var_53_float + var_63_float;
	var_44_cvector = var_64_int - CVector(0.0, 10.0, 0.0);
	var_45_cvector = var_41_cvector + var_44_cvector;
	IsOverrideActive(var_46_bool);
	var_66_bool = var_46_bool;
	if(var_66_bool != 0) {
		var_27_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_45_cvector, var_43_cvector, (bool)1);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_68_float, var_69_float);
	var_70_bool = 0;
	func_1571(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_1344;
		LookAsyncCamera("head");
	}
Label_1344:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_1410()
{
	var_15_bool = 0;
	func_1571(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1417(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1546(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x619";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_1034(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_1036:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_1103(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_1036;
}
EMIT "Return(); Pop(4)";


func_1423(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_55_cvector | var_55_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_54_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_54_cvector = var_55_cvector / var_58_float;
	return 2;
}


func_1168(var_2_object, var_3_string)
{
	func_1263();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1433(var_127_int, var_128_string)
{
	var_129_int = 0; var_130_int = 0;
	GetVariable(var_128_string, var_130_int);
	var_130_int = var_127_int;
	return 2;
}


func_1563(var_76_int)
{
	var_76_int = 515571;
	return 0;
}


func_1052(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_1276(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_1101(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_1417(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_1565(var_75_int)
{
	var_75_int = 504029;
	return 0;
}


func_1438(var_97_string, var_98_bool)
{
	var_99_object = Obj(); var_100_object = Obj();
	FindActor(var_100_object, var_97_string);
	var_101_bool = var_100_object == 0; //@nz
	if(var_101_bool != 0) {
		var_103_int = "Door " + var_97_string;
		var_105_int = var_103_int + " not found";
		Trace(var_105_int);
	} else {
		@@var_100_object:SetProperty("locked", var_98_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_1182()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_1276(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_1462((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_1196:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_1276(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_1229;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_1455(var_68_string, var_69_int);
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
						goto Label_1258;
					}
					goto Label_1247;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_1247;
				goto Label_1258;
		}
		Label_1247:
			var_71_bool = 0;
			func_1261(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_1258;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_1196;

		}
	}
Label_1258:
	ResetAAS();
	return 14;
	
}


func_1567(var_77_string)
{
	var_77_string = "ui/NPC_bmask.png";
	return 0;
}


func_1569(var_78_string)
{
	var_78_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_162(var_2_object, var_107_string)
{
	var_108_bool = 0;
	func_1571(var_108_bool);
	var_109_bool = var_108_bool == 0; //@nz
	if(var_109_bool != 0) {
		return 0;
	}
	var_110_bool = var_107_string == var_2_object;
	if(var_110_bool != 0) {
		return 0;
	}
	var_111_string = ""; var_112_bool = 0;
	var_107_string = var_111_string;
	var_114_bool = var_107_string == "";
	if(var_114_bool != 0) {
		var_112_bool = 0;
	} else {
		var_112_bool = 1;
	}
	func_1384(var_111_string, var_112_bool);
	var_2_object = var_107_string;
	return 0;
	
}


func_1571(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_1455(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_1462(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_1464:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_1455(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_1464;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_1350()
{
	var_172_bool = 0; var_173_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_175_bool = 0;
	func_1571(var_175_bool);
	if(var_175_bool != 0) {
	} else {
		HasAnimationTrack(var_173_bool, "head");
		var_177_bool = var_173_bool;
		if(var_177_bool == 0) goto Label_1367;
		UnlookAsync("head");
	}
Label_1367:
	return 2;
	
}


func_1479()
{
	var_97_string = ""; var_98_bool = 0;
	func_1438("itheater@door1", (bool)0);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_object = Obj(); var_96_object = Obj();
		var_95_object = var_1_object;
		var_96_object = var_0_object;
		func_1479();
		var_107_string = "";
		func_162(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)541007);
		@@@var_0_object:ClearReplies();
		var_125_bool = 0; var_126_object = Obj();
		var_126_object = var_1_object;
		func_1510(var_126_object);
		if(var_125_bool != 0) {
			@@@var_0_object:AddReply((int)541347, (int)43494, (int)43493);
		}
		var_136_bool = 0;
		var_136_bool = 0;
		var_137_bool = 0; var_138_object = Obj();
		var_138_object = var_1_object;
		func_1522(var_138_object);
		if(var_137_bool != 0) {
			var_143_bool = 0; var_144_object = Obj();
			var_144_object = var_1_object;
			func_1510(var_144_object);
			var_145_bool = var_143_bool == 0; //@nz
			if(var_145_bool != 0) {
				var_136_bool = 1;
			}
		}
		if(var_136_bool != 0) {
			@@@var_0_object:AddReply((int)542740, (int)45157, (int)45156);
		}
		@@@var_0_object:AddReply((int)541034, (int)-1, (int)43128);
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_132:
	var_152_bool = 0;
	func_1571(var_152_bool);
	if(var_152_bool != 0) {

	Label_136:
		lshWaitForAnimEnd();
		var_153_string = var_3_string;
		if(var_153_string != 0) {
		} else {
			var_154_string = "";
			var_154_string = var_2_object;
			func_1368(var_154_string);
			goto Label_136;
	}
		PlayAnimation("all", "idle");

	Label_151:
		WaitForAnimEnd();
		var_167_string = var_3_string;
		if(var_167_string != 0) {
			goto Label_161;
		}
		PlayAnimation("all", "idle");
		goto Label_151;
	}
	goto Label_161;
	
Label_161:
	return 0;
	
}


func_1101(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_1486()
{
	SetVariable("ook12TBirdmask1", (int)1);
	return 0;
}


func_1103(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_1276(var_23_bool);
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
	func_1182();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1492()
{
	SetVariable("ook12TBirdmask2", (int)1);
	return 0;
}


func_1368(var_154_string)
{
	var_155_bool = 0; var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_float = 0; var_160_float = 0;
	lshHasAnimation(var_158_bool, var_154_string);
	var_161_bool = var_158_bool;
	if(var_161_bool != 0) {
		lshGetAnimTimes(var_154_string, var_159_float, var_160_float);
		lshPlayAnimation(var_159_float, var_160_float, (bool)0);
	} else {
		var_164_int = "Can't find lsh animation : " + var_154_string;
		Trace(var_164_int);
	}
	return 6;
	
}


func_1498(var_246_bool)
{
	var_248_int = 0; var_249_string = "";
	func_1433(var_248_int, "k12DankoVisit");
	var_251_bool = var_248_int != (int)0;
	if(var_251_bool != 0) {
		var_246_bool = 1;
		return 0;
	}
	var_246_bool = 0;
	return 0;
}


func_1510(var_125_bool)
{
	var_127_int = 0; var_128_string = "";
	func_1433(var_127_int, "ook12TBirdmask1");
	var_132_bool = var_127_int == (int)0;
	if(var_132_bool != 0) {
		var_125_bool = 1;
		return 0;
	}
	var_125_bool = 0;
	return 0;
}


func_1384(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0;
	lshHasAnimation(var_118_bool, var_111_string);
	var_121_bool = var_118_bool;
	if(var_121_bool != 0) {
		lshGetAnimTimes(var_111_string, var_119_float, var_120_float);
		lshPlayAnimation(var_119_float, var_120_float, var_112_bool);
	} else {
		var_123_int = "Can't find lsh animation : " + var_111_string;
		Trace(var_123_int);
	}
	return 6;
	
}


func_1130(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_1268(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_1261(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_1263()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1522(var_137_bool)
{
	var_139_int = 0; var_140_string = "";
	func_1433(var_139_int, "ook12TBirdmask2");
	var_142_bool = var_139_int == (int)0;
	if(var_142_bool != 0) {
		var_137_bool = 1;
		return 0;
	}
	var_137_bool = 0;
	return 0;
}


func_1268(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_1399(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0);
	@@var_29_object:GetEyesHeight(var_32_float);
	var_33_cvector = CVector(0.0, 0.0, 0.0);
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	LookAsync(var_29_object, "head", var_33_cvector);
	return 4;
}


func_1276(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_1534(var_337_bool)
{
	var_339_int = 0; var_340_string = "";
	func_1433(var_339_int, "k12BurahVisit");
	var_342_bool = var_339_int != (int)0;
	if(var_342_bool != 0) {
		var_337_bool = 1;
		return 0;
	}
	var_337_bool = 0;
	return 0;
}


