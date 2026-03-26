// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Untrust|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Petr.png|W:ui/NPC_Petr_b.png|W:oob2Petr1|W:branch|W:mt_petr|W:d12_petr
// @GLOBALS: 0:object:
// @RUN_OP: 0x3f1
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x188 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2c9 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3c7 vars=int,int
// @TASK_8: vars=cvector params=0
// @EVENT_7: op=0x43a vars=int
// @EVENT_6: op=0x460 vars=
// @EVENT_5: op=0x46f vars=
// @EVENT_45: op=0x47c vars=bool
// @EVENT_0: op=0x488 vars=object
// @PE: 0x51,0x8b,0xa1,0x133,0x172,0x188,0x274,0x2b3,0x2c9,0x377,0x3b1,0x3c7,0x3f1,0x43a,0x460,0x47c,0x645,0x66d,0x673

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1568();
		var_26_bool = var_21_bool == (int)19178;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_139(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518046, (int)32123, (int)19179);
			@@@var_0_object:AddReply((int)530814, (int)32123, (int)32122);
			return 0;
		}
		var_52_bool = var_21_bool == (int)32123;
		if(var_52_bool != 0) {
			var_53_string = "";
			func_139(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530815);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530816, (int)-1, (int)32125);
			@@@var_0_object:AddReply((int)530817, (int)-1, (int)32126);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_1643(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1568();
		var_26_bool = var_22_cvector == (int)20596;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1645();
		}
		var_32_bool = var_21_bool == (int)19322;
		if(var_32_bool != 0) {
			var_33_string = "";
			func_370(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518209);
			@@@var_0_object:ClearReplies();
			var_51_bool = 0; var_52_object = Obj();
			var_52_object = var_1_object;
			func_1651(var_52_object);
			if(var_51_bool != 0) {
				@@@var_0_object:AddReply((int)519429, (int)20597, (int)20596);
			}
			@@@var_0_object:AddReply((int)518211, (int)-1, (int)19324);
			return 0;
		}
		var_66_bool = var_21_bool == (int)20597;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_370(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519431, (int)20599, (int)20598);
			@@@var_0_object:AddReply((int)519438, (int)-1, (int)20605);
			return 0;
		}
		var_76_bool = var_21_bool == (int)20599;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_370(var_22_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)519432);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519433, (int)20601, (int)20600);
			@@@var_0_object:AddReply((int)519439, (int)20607, (int)20606);
			return 0;
		}
		var_86_bool = var_21_bool == (int)20607;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_370(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519441, (int)20601, (int)20608);
			return 0;
		}
		var_93_bool = var_21_bool == (int)20601;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_370(var_22_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)519434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519435, (int)20603, (int)20602);
			return 0;
		}
		var_100_bool = var_21_bool == (int)20603;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_370(var_22_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)519436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519437, (int)-1, (int)20604);
			return 0;
		}
		var_3_string = true;
		var_106_bool = 0;
		func_1643(var_106_bool);
		if(var_106_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x189";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1568();
		var_26_bool = var_21_bool == (int)36906;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_691(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_55_bool = var_21_bool == (int)36953;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_691(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_65_bool = var_21_bool == (int)36957;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_691(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_74_bool = 0;
		func_1643(var_74_bool);
		if(var_74_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2ca";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	if((int)1 != 0) {
		func_1568();
		var_26_bool = var_21_int == (int)42563;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_945(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_1643(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3c8";
	
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_23_bool = var_21_int == (int)10;
	if(var_23_bool != 0) {
		func_1078();
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = 0;
		func_1292(var_26_bool);
		if(var_26_bool != 0) {
			var_29_bool = 0;
			func_1047(var_29_bool);
			if(var_29_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_46_bool = 0;
			func_1027(var_46_bool);
			if(var_46_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				func_1575(Obj());
				var_67_object = var_66_object;
				func_1442(var_65_bool, var_66_object);
			}
		} else {
			func_1042(var_21_int);
			func_1069();
		}
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1260();
	func_1078();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0();
	func_1078();
	var_22_string = "";
	func_1522("Neutral");
	func_1069();
	return 0;
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		func_1069();
	} else {
		var_28_string = "";
		func_1522("Neutral");
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
		func_1260();
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_1283(var_25_bool, var_26_object);
		EventEnable(0);
		var_39_object = Obj();
		var_21_object = var_39_object;
		func_1680(var_39_object);
		var_462_string = "";
		func_1522("Neutral");
		func_1078();
		func_1069();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1013(var_20_cvector);
	return 0;
}


func_0(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0;
	var_0_object = var_47_object;
	var_57_bool = 0; var_58_object = Obj(); var_59_float = 0;
	var_47_object = var_58_object;
	func_1297(var_57_bool, var_58_object, (float)70.0);
	var_104_bool = var_57_bool == 0; //@nz
	if(var_104_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	CreateDialog(var_53_object);
	var_105_int = 0;
	func_1637(var_105_int);
	@@var_53_object:SetNPCName(var_105_int);
	var_106_int = 0;
	func_1635(var_106_int);
	@@var_53_object:SetNPCDescription(var_106_int);
	var_107_string = "";
	func_1639(var_107_string);
	@@var_53_object:SetPhoto(var_107_string);
	var_108_string = "";
	func_1641(var_108_string);
	@@var_53_object:SetPhoto2(var_108_string);
	var_109_int = 0;
	func_1663(var_109_int);
	@@var_53_object:SetPlayerName(var_109_int);
	IsOverrideActive(var_54_bool);
	var_117_bool = var_54_bool;
	if(var_117_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	DoDialog(var_53_object);
	var_118_bool = 0; var_119_object = Obj();
	func_1575(Obj());
	var_120_object = var_119_object;
	func_1384(var_118_bool, var_119_object);
	var_213_object = Obj(); var_214_object = Obj();
	var_47_object = var_213_object;
	var_53_object = var_214_object;
	TaskCall(1);
	func_81(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object);
	TaskReturn();
	@@var_53_object:IsDialogEnd(var_56_bool);
	
Label_63:
	var_262_bool = var_56_bool == 0; //@nz
	if(var_262_bool != 0) {
		sync();
		@@var_53_object:IsDialogEnd(var_56_bool);
		goto Label_63;
	}
	var_47_object = Obj();
	func_1366();
	StopDialog(var_53_object);
	@@var_53_object:GetReturnValue((int)-1);
	var_55_int = var_46_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1538(var_224_string, var_225_bool)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0;
	lshHasAnimation(var_231_bool, var_224_string);
	var_234_bool = var_231_bool;
	if(var_234_bool != 0) {
		lshGetAnimTimes(var_224_string, var_232_float, var_233_float);
		lshPlayAnimation(var_232_float, var_233_float, var_225_bool);
	} else {
		var_236_int = "Can't find lsh animation : " + var_224_string;
		Trace(var_236_int);
	}
	return 6;
	
}


func_1027(var_46_bool)
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
	func_1283(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1283(var_25_bool, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	@@var_26_object:GetPosition(var_28_cvector);
	var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	var_28_cvector = var_30_cvector;
	func_1273(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
	return 2;
}


func_139(var_2_object, var_220_string)
{
	var_221_bool = 0;
	func_1643(var_221_bool);
	var_222_bool = var_221_bool == 0; //@nz
	if(var_222_bool != 0) {
		return 0;
	}
	var_223_bool = var_220_string == var_2_object;
	if(var_223_bool != 0) {
		return 0;
	}
	var_224_string = ""; var_225_bool = 0;
	var_220_string = var_224_string;
	var_227_bool = var_220_string == "";
	if(var_227_bool != 0) {
		var_225_bool = 0;
	} else {
		var_225_bool = 1;
	}
	func_1538(var_224_string, var_225_bool);
	var_2_object = var_220_string;
	return 0;
	
}


func_1292(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_1680(var_39_object)
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0;
	GetVariable("mt_petr", var_42_int);
	var_45_bool = var_42_int == 0; //@nz
	if(var_45_bool != 0) {
		var_46_int = 0; var_47_object = Obj();
		var_39_object = var_47_object;
		TaskCall(0);
		func_0(var_48_object, var_46_int, var_47_object);
		TaskReturn();
		SetVariable("mt_petr", (int)1);
	}
	var_273_bool = 0; var_274_int = 0;
	func_1605(var_273_bool, (int)2);
	if(var_273_bool != 0) {
		var_276_int = 0; var_277_object = Obj();
		var_39_object = var_277_object;
		TaskCall(2);
		func_226(var_278_object, var_276_int, var_277_object);
		TaskReturn();
		return 4;
	}
	GetVariable("d12_petr", var_43_int);
	var_341_bool = 0;
	var_341_bool = 0;
	var_342_bool = 0; var_343_int = 0;
	func_1605(var_342_bool, (int)12);
	if(var_342_bool != 0) {
		var_344_int = var_43_int;
		if(var_344_int != 0) {
			var_341_bool = 1;
		}
	}
	if(var_341_bool != 0) {
		var_345_int = 0; var_346_object = Obj();
		var_39_object = var_346_object;
		TaskCall(4);
		func_547(var_347_object, var_345_int, var_346_object);
		TaskReturn();
		SetVariable("d12_petr", (int)1);
		return 4;
	}
	var_406_int = 0; var_407_object = Obj();
	var_39_object = var_407_object;
	TaskCall(6);
	func_806(var_408_object, var_406_int, var_407_object);
	TaskReturn();
	return 4;
}


func_1297(var_57_bool, var_58_object, var_59_float)
{
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_bool = 0;
	@@var_58_object:GetPosition(var_70_cvector);
	@@var_58_object:GetEyesHeight(var_69_float);
	var_78_float = GetByIndex(var_70_cvector, 1);
	var_78_float = var_78_float + var_69_float;
	SetByIndex(var_70_cvector, 1) = var_78_float;
	GetPosition(var_71_cvector);
	GetEyesHeight(var_69_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	var_79_float = var_79_float + var_69_float;
	SetByIndex(var_71_cvector, 1) = var_79_float;
	var_72_cvector = var_70_cvector - var_71_cvector;
	var_80_float = GetByIndex(var_72_cvector, 1);
	SetByIndex(var_72_cvector, 1) = (float)0;
	var_81_int = var_72_cvector | var_72_cvector;
	var_82_float = sqrt(var_81_int);
	var_72_cvector = var_72_cvector / var_82_float;
	var_73_cvector = -var_72_cvector;
	var_83_float = var_72_cvector * var_59_float;
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_85_cvector = var_73_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1581(var_84_cvector, var_85_cvector);
	var_93_float = var_84_cvector * (int)25;
	var_94_int = var_83_float + var_93_float;
	var_74_cvector = var_94_int - CVector(0.0, 10.0, 0.0);
	var_75_cvector = var_71_cvector + var_74_cvector;
	IsOverrideActive(var_76_bool);
	var_96_bool = var_76_bool;
	if(var_96_bool != 0) {
		var_57_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_75_cvector, var_73_cvector, (bool)1);
	var_98_float = GetByIndex(var_74_cvector, 0);
	var_99_float = GetByIndex(var_74_cvector, 2);
	Rotate(var_98_float, var_99_float);
	var_100_bool = 0;
	func_1643(var_100_bool);
	if(var_100_bool != 0) {
	} else {
		HasAnimationTrack(var_77_bool, "head");
		var_102_bool = var_77_bool;
		if(var_102_bool == 0) goto Label_1360;
		LookAsyncCamera("head");
	}
Label_1360:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_57_bool = 1;
	return 18;
	
}


func_1042(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_98_float, var_99_float);
	return 0;
}


func_1553(var_152_bool, var_153_string)
{
	var_154_bool = 0; var_155_bool = 0;
	var_156_bool = 0;
	func_1643(var_156_bool);
	if(var_156_bool != 0) {
		lshHasSpeech(var_155_bool, var_153_string);
		var_157_bool = var_155_bool;
		if(var_157_bool != 0) {
			lshPlaySpeech(var_153_string);
			var_152_bool = 1;
			return 2;
		}
	}
	var_152_bool = 0;
	return 2;
}


func_1047(var_29_bool)
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
	func_1265(var_36_float, var_37_object);
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


func_1568()
{
	var_24_bool = 0;
	func_1643(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1442(var_129_bool, var_130_object)
{
	var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; var_136_string = ""; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_string = "";
	var_136_string = "c";
	var_137_int = 0;
	
Label_1445:
	if((int)1 != 0) {
		var_143_int = var_137_int + (int)1;
		var_144_int = var_136_string + var_143_int;
		@@var_130_object:HasProperty(var_144_int, var_138_bool);
		var_145_bool = var_138_bool == 0; //@nz
		if(var_145_bool != 0) {
		} else {
			var_137_int = var_137_int + (int)1;
			goto Label_1445;
		}
	}
	var_146_bool = var_137_int == 0; //@nz
	if(var_146_bool != 0) {
		var_129_bool = 0;
		return 10;
	}
	var_139_int = 0;
	var_148_bool = var_137_int > (int)1;
	if(var_148_bool != 0) {
		irand(var_139_int, var_137_int);
	}
	var_150_int = var_139_int + (int)1;
	var_151_int = var_136_string + var_150_int;
	@@var_130_object:GetProperty(var_151_int, var_140_string);
	var_152_bool = 0; var_153_string = "";
	var_140_string = var_153_string;
	func_1553(var_152_bool, var_153_string);
	var_152_bool = var_129_bool;
	return 10;
	
}


func_547(var_0_object, var_345_int, var_346_object)
{
	var_348_object = Obj(); var_349_bool = 0; var_350_int = 0; var_351_bool = 0; var_352_object = Obj(); var_353_bool = 0; var_354_int = 0; var_355_bool = 0;
	var_0_object = var_346_object;
	var_356_bool = 0; var_357_object = Obj(); var_358_float = 0;
	var_346_object = var_357_object;
	func_1297(var_356_bool, var_357_object, (float)70.0);
	var_359_bool = var_356_bool == 0; //@nz
	if(var_359_bool != 0) {
		var_345_int = -2;
		return 8;
	}
	CreateDialog(var_352_object);
	var_360_int = 0;
	func_1637(var_360_int);
	@@var_352_object:SetNPCName(var_360_int);
	var_361_int = 0;
	func_1635(var_361_int);
	@@var_352_object:SetNPCDescription(var_361_int);
	var_362_string = "";
	func_1639(var_362_string);
	@@var_352_object:SetPhoto(var_362_string);
	var_363_string = "";
	func_1641(var_363_string);
	@@var_352_object:SetPhoto2(var_363_string);
	var_364_int = 0;
	func_1663(var_364_int);
	@@var_352_object:SetPlayerName(var_364_int);
	IsOverrideActive(var_353_bool);
	var_365_bool = var_353_bool;
	if(var_365_bool != 0) {
		var_345_int = -2;
		return 8;
	}
	DoDialog(var_352_object);
	var_366_bool = 0; var_367_object = Obj();
	func_1575(Obj());
	var_368_object = var_367_object;
	func_1384(var_366_bool, var_367_object);
	var_369_object = Obj(); var_370_object = Obj();
	var_346_object = var_369_object;
	var_352_object = var_370_object;
	TaskCall(5);
	func_628(var_371_object, var_372_object, var_373_string, var_374_bool, var_369_object, var_370_object);
	TaskReturn();
	@@var_352_object:IsDialogEnd(var_355_bool);
	
Label_610:
	var_402_bool = var_355_bool == 0; //@nz
	if(var_402_bool != 0) {
		sync();
		@@var_352_object:IsDialogEnd(var_355_bool);
		goto Label_610;
	}
	var_346_object = Obj();
	func_1366();
	StopDialog(var_352_object);
	@@var_352_object:GetReturnValue((int)-1);
	var_354_int = var_345_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1189()
{
	var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0;
	WaitForAnimEnd();
	var_37_bool = 0;
	func_1292(var_37_bool);
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		return 12;
	}
	func_1618((int)0);
	var_39_int = var_31_int;
	var_32_int = 0;
	
Label_1203:
	var_52_bool = 0;
	var_52_bool = 0;
	var_54_bool = var_32_int < (int)5;
	if(var_54_bool != 0) {
		var_55_bool = 0;
		func_1292(var_55_bool);
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
				func_1611(var_66_string, var_67_int);
				PlayAnimation("all", var_66_string);
				WaitForAnimEnd(var_36_bool);
				var_68_bool = var_36_bool == 0; //@nz
				if(var_68_bool == 0) goto Label_1244;
				goto Label_1255;
		}
		Label_1244:
			var_59_bool = 0;
			func_1258(var_59_bool);
			var_60_bool = var_59_bool == 0; //@nz
			if(var_60_bool != 0) {
				goto Label_1255;
			}
			ResetAAS();
			var_32_int = var_32_int + (int)1;
			goto Label_1203;

		}
	}
Label_1255:
	ResetAAS();
	return 12;
	
}


func_806(var_0_object, var_406_int, var_407_object)
{
	var_409_object = Obj(); var_410_bool = 0; var_411_int = 0; var_412_bool = 0; var_413_object = Obj(); var_414_bool = 0; var_415_int = 0; var_416_bool = 0;
	var_0_object = var_407_object;
	var_417_bool = 0; var_418_object = Obj(); var_419_float = 0;
	var_407_object = var_418_object;
	func_1297(var_417_bool, var_418_object, (float)70.0);
	var_420_bool = var_417_bool == 0; //@nz
	if(var_420_bool != 0) {
		var_406_int = -2;
		return 8;
	}
	CreateDialog(var_413_object);
	var_421_int = 0;
	func_1637(var_421_int);
	@@var_413_object:SetNPCName(var_421_int);
	var_422_int = 0;
	func_1635(var_422_int);
	@@var_413_object:SetNPCDescription(var_422_int);
	var_423_string = "";
	func_1639(var_423_string);
	@@var_413_object:SetPhoto(var_423_string);
	var_424_string = "";
	func_1641(var_424_string);
	@@var_413_object:SetPhoto2(var_424_string);
	var_425_int = 0;
	func_1663(var_425_int);
	@@var_413_object:SetPlayerName(var_425_int);
	IsOverrideActive(var_414_bool);
	var_426_bool = var_414_bool;
	if(var_426_bool != 0) {
		var_406_int = -2;
		return 8;
	}
	DoDialog(var_413_object);
	var_427_bool = 0; var_428_object = Obj();
	func_1575(Obj());
	var_429_object = var_428_object;
	func_1384(var_427_bool, var_428_object);
	var_430_object = Obj(); var_431_object = Obj();
	var_407_object = var_430_object;
	var_413_object = var_431_object;
	TaskCall(7);
	func_887(var_432_object, var_433_object, var_434_string, var_435_bool, var_430_object, var_431_object);
	TaskReturn();
	@@var_413_object:IsDialogEnd(var_416_bool);
	
Label_869:
	var_460_bool = var_416_bool == 0; //@nz
	if(var_460_bool != 0) {
		sync();
		@@var_413_object:IsDialogEnd(var_416_bool);
		goto Label_869;
	}
	var_407_object = Obj();
	func_1366();
	StopDialog(var_413_object);
	@@var_413_object:GetReturnValue((int)-1);
	var_415_int = var_406_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1575(var_120_object)
{
	var_121_object = Obj(); var_122_object = Obj();
	self(var_122_object);
	var_122_object = var_120_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1069()
{
	var_464_float = 0; var_465_float = 0;
	rand(var_465_float, (int)8, (int)16);
	SetTimer((int)10, var_465_float);
	return 2;
}


func_1581(var_84_cvector, var_85_cvector)
{
	var_87_float = 0; var_88_float = 0;
	var_89_int = var_85_cvector | var_85_cvector;
	var_88_float = sqrt(var_89_int);
	var_90_float = 9.999999974752427e-07;
	var_91_bool = var_88_float < var_90_float;
	if(var_91_bool != 0) {
		var_84_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_84_cvector = var_85_cvector / var_88_float;
	return 2;
}


func_945(var_2_object, var_437_string)
{
	var_438_bool = 0;
	func_1643(var_438_bool);
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
	func_1538(var_441_string, var_442_bool);
	var_2_object = var_437_string;
	return 0;
	
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_300_object, var_301_object)
{
	var_0_object = var_301_object;
	var_1_object = var_300_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_307_string = "";
		func_370(var_301_object, "Neutral");
		@@@var_0_object:SetMessage((int)518209);
		@@@var_0_object:ClearReplies();
		var_316_bool = 0; var_317_object = Obj();
		var_317_object = var_1_object;
		func_1651(var_317_object);
		if(var_316_bool != 0) {
			@@@var_0_object:AddReply((int)519429, (int)20597, (int)20596);
		}
		@@@var_0_object:AddReply((int)518211, (int)-1, (int)19324);
		goto Label_340;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x137";
	}
Label_340:
	var_330_bool = 0;
	func_1643(var_330_bool);
	if(var_330_bool != 0) {

	Label_344:
		lshWaitForAnimEnd();
		var_331_string = var_3_string;
		if(var_331_string != 0) {
		} else {
			var_332_string = "";
			var_332_string = var_2_object;
			func_1522(var_332_string);
			goto Label_344;
	}
		PlayAnimation("all", "idle");

	Label_359:
		WaitForAnimEnd();
		var_335_string = var_3_string;
		if(var_335_string != 0) {
			goto Label_369;
		}
		PlayAnimation("all", "idle");
		goto Label_359;
	}
	goto Label_369;
	
Label_369:
	return 0;
	
}


func_691(var_2_object, var_376_string)
{
	var_377_bool = 0;
	func_1643(var_377_bool);
	var_378_bool = var_377_bool == 0; //@nz
	if(var_378_bool != 0) {
		return 0;
	}
	var_379_bool = var_376_string == var_2_object;
	if(var_379_bool != 0) {
		return 0;
	}
	var_380_string = ""; var_381_bool = 0;
	var_376_string = var_380_string;
	var_383_bool = var_376_string == "";
	if(var_383_bool != 0) {
		var_381_bool = 0;
	} else {
		var_381_bool = 1;
	}
	func_1538(var_380_string, var_381_bool);
	var_2_object = var_376_string;
	return 0;
	
}


func_1078()
{
	KillTimer((int)10);
	return 0;
}


func_1591(var_318_int, var_319_string)
{
	var_320_int = 0; var_321_int = 0;
	GetVariable(var_319_string, var_321_int);
	var_321_int = var_318_int;
	return 2;
}


func_1596(var_173_int)
{
	var_174_float = 0; var_175_float = 0;
	GetGameTime(var_175_float);
	var_177_int = 0;
	var_177_int = var_175_float / (int)24;
	var_173_int = (int)1 + var_177_int;
	return 2;
}


func_1605(var_273_bool, var_274_int)
{
	var_275_int = 0;
	func_1596(var_275_int);
	var_273_bool = var_275_int == var_274_int;
	return 0;
}


func_1479(var_160_bool, var_161_object)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = "";
	var_173_int = 0;
	func_1596(var_173_int);
	var_179_int = "d" + var_173_int;
	var_167_string = var_179_int + "m";
	var_168_int = 0;
	
Label_1488:
	if((int)1 != 0) {
		var_183_int = var_168_int + (int)1;
		var_184_int = var_167_string + var_183_int;
		@@var_161_object:HasProperty(var_184_int, var_169_bool);
		var_185_bool = var_169_bool == 0; //@nz
		if(var_185_bool != 0) {
		} else {
			var_168_int = var_168_int + (int)1;
			goto Label_1488;
		}
	}
	var_186_bool = var_168_int == 0; //@nz
	if(var_186_bool != 0) {
		var_160_bool = 0;
		return 10;
	}
	var_170_int = 0;
	var_188_bool = var_168_int > (int)1;
	if(var_188_bool != 0) {
		irand(var_170_int, var_168_int);
	}
	var_190_int = var_170_int + (int)1;
	var_191_int = var_167_string + var_190_int;
	@@var_161_object:GetProperty(var_191_int, var_171_string);
	var_192_bool = 0; var_193_string = "";
	var_171_string = var_193_string;
	func_1553(var_192_bool, var_193_string);
	var_192_bool = var_160_bool;
	return 10;
	
}


func_1611(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = "";
	var_49_int = var_46_int;
	if(var_49_int != 0) {
		"idle" = "idle" + var_46_int;
	}
	var_48_string = var_45_string;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_213_object, var_214_object)
{
	var_0_object = var_214_object;
	var_1_object = var_213_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_220_string = "";
		func_139(var_214_object, "Neutral");
		@@@var_0_object:SetMessage((int)518045);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518046, (int)32123, (int)19179);
		@@@var_0_object:AddReply((int)530814, (int)32123, (int)32122);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_244_bool = 0;
	func_1643(var_244_bool);
	if(var_244_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_245_string = var_3_string;
		if(var_245_string != 0) {
		} else {
			var_246_string = "";
			var_246_string = var_2_object;
			func_1522(var_246_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_259_string = var_3_string;
		if(var_259_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_1618(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0;
	var_42_int = 0;
	
Label_1620:
	var_45_string = ""; var_46_int = 0;
	var_42_int = var_46_int;
	func_1611(var_45_string, var_46_int);
	HasAnimation(var_43_bool, "all", var_45_string);
	var_50_bool = var_43_bool == 0; //@nz
	if(var_50_bool != 0) {
	} else {
		var_42_int = var_42_int + (int)1;
		goto Label_1620;
	}
	var_42_int = var_39_int;
	return 4;
	
}


func_1366()
{
	var_264_bool = 0; var_265_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_267_bool = 0;
	func_1643(var_267_bool);
	if(var_267_bool != 0) {
	} else {
		HasAnimationTrack(var_265_bool, "head");
		var_269_bool = var_265_bool;
		if(var_269_bool == 0) goto Label_1383;
		UnlookAsync("head");
	}
Label_1383:
	return 2;
	
}


func_226(var_0_object, var_276_int, var_277_object)
{
	var_279_object = Obj(); var_280_bool = 0; var_281_int = 0; var_282_bool = 0; var_283_object = Obj(); var_284_bool = 0; var_285_int = 0; var_286_bool = 0;
	var_0_object = var_277_object;
	var_287_bool = 0; var_288_object = Obj(); var_289_float = 0;
	var_277_object = var_288_object;
	func_1297(var_287_bool, var_288_object, (float)70.0);
	var_290_bool = var_287_bool == 0; //@nz
	if(var_290_bool != 0) {
		var_276_int = -2;
		return 8;
	}
	CreateDialog(var_283_object);
	var_291_int = 0;
	func_1637(var_291_int);
	@@var_283_object:SetNPCName(var_291_int);
	var_292_int = 0;
	func_1635(var_292_int);
	@@var_283_object:SetNPCDescription(var_292_int);
	var_293_string = "";
	func_1639(var_293_string);
	@@var_283_object:SetPhoto(var_293_string);
	var_294_string = "";
	func_1641(var_294_string);
	@@var_283_object:SetPhoto2(var_294_string);
	var_295_int = 0;
	func_1663(var_295_int);
	@@var_283_object:SetPlayerName(var_295_int);
	IsOverrideActive(var_284_bool);
	var_296_bool = var_284_bool;
	if(var_296_bool != 0) {
		var_276_int = -2;
		return 8;
	}
	DoDialog(var_283_object);
	var_297_bool = 0; var_298_object = Obj();
	func_1575(Obj());
	var_299_object = var_298_object;
	func_1384(var_297_bool, var_298_object);
	var_300_object = Obj(); var_301_object = Obj();
	var_277_object = var_300_object;
	var_283_object = var_301_object;
	TaskCall(3);
	func_307(var_302_object, var_303_object, var_304_string, var_305_bool, var_300_object, var_301_object);
	TaskReturn();
	@@var_283_object:IsDialogEnd(var_286_bool);
	
Label_289:
	var_338_bool = var_286_bool == 0; //@nz
	if(var_338_bool != 0) {
		sync();
		@@var_283_object:IsDialogEnd(var_286_bool);
		goto Label_289;
	}
	var_277_object = Obj();
	func_1366();
	StopDialog(var_283_object);
	@@var_283_object:GetReturnValue((int)-1);
	var_285_int = var_276_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1635(var_106_int)
{
	var_106_int = 515550;
	return 0;
}


func_1637(var_105_int)
{
	var_105_int = 502875;
	return 0;
}


func_1639(var_107_string)
{
	var_107_string = "ui/NPC_Petr.png";
	return 0;
}


func_1384(var_118_bool, var_119_object)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0;
	GetVariable("voice_common", var_125_int);
	var_128_int = var_125_int;
	if(var_128_int != 0) {
		var_129_bool = 0; var_130_object = Obj();
		var_119_object = var_130_object;
		func_1442(var_129_bool, var_130_object);
		var_159_bool = var_129_bool == 0; //@nz
		if(var_159_bool != 0) {
			var_160_bool = 0; var_161_object = Obj();
			var_119_object = var_161_object;
			func_1479(var_160_bool, var_161_object);
			var_195_bool = var_160_bool == 0; //@nz
			if(var_195_bool != 0) {
				var_118_bool = 0;
				return 4;
			}
		}
		irand(var_126_int, (int)2);
		var_197_int = var_126_int;
		if(var_197_int != 0) {
			var_200_int = var_125_int + (int)1;
			var_202_int = var_200_int % (int)3;
			SetVariable("voice_common", var_202_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_205_bool = 0; var_206_object = Obj();
		var_119_object = var_206_object;
		func_1479(var_205_bool, var_206_object);
		var_207_bool = var_205_bool == 0; //@nz
		if(var_207_bool != 0) {
			var_208_bool = 0; var_209_object = Obj();
			var_119_object = var_209_object;
			func_1442(var_208_bool, var_209_object);
			var_210_bool = var_208_bool == 0; //@nz
			if(var_210_bool != 0) {
				var_118_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1440;
	
Label_1440:
	var_118_bool = 1;
	return 4;
	
}


func_1641(var_108_string)
{
	var_108_string = "ui/NPC_Petr_b.png";
	return 0;
}


func_1258(var_59_bool)
{
	var_59_bool = 1;
	return 0;
}


func_1643(var_100_bool)
{
	var_100_bool = 1;
	return 0;
}


func_1260()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1645()
{
	SetVariable("oob2Petr1", (int)1);
	return 0;
}


func_1265(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1522(var_246_string)
{
	var_247_bool = 0; var_248_float = 0; var_249_float = 0; var_250_bool = 0; var_251_float = 0; var_252_float = 0;
	lshHasAnimation(var_250_bool, var_246_string);
	var_253_bool = var_250_bool;
	if(var_253_bool != 0) {
		lshGetAnimTimes(var_246_string, var_251_float, var_252_float);
		lshPlayAnimation(var_251_float, var_252_float, (bool)0);
	} else {
		var_256_int = "Can't find lsh animation : " + var_246_string;
		Trace(var_256_int);
	}
	return 6;
	
}


func_370(var_2_object, var_307_string)
{
	var_308_bool = 0;
	func_1643(var_308_bool);
	var_309_bool = var_308_bool == 0; //@nz
	if(var_309_bool != 0) {
		return 0;
	}
	var_310_bool = var_307_string == var_2_object;
	if(var_310_bool != 0) {
		return 0;
	}
	var_311_string = ""; var_312_bool = 0;
	var_307_string = var_311_string;
	var_314_bool = var_307_string == "";
	if(var_314_bool != 0) {
		var_312_bool = 0;
	} else {
		var_312_bool = 1;
	}
	func_1538(var_311_string, var_312_bool);
	var_2_object = var_307_string;
	return 0;
	
}


func_1651(var_316_bool)
{
	var_318_int = 0; var_319_string = "";
	func_1591(var_318_int, "oob2Petr1");
	var_323_bool = var_318_int == (int)0;
	if(var_323_bool != 0) {
		var_316_bool = 1;
		return 0;
	}
	var_316_bool = 0;
	return 0;
}


func_628(var_0_object, var_1_object, var_2_object, var_3_string, var_369_object, var_370_object)
{
	var_0_object = var_370_object;
	var_1_object = var_369_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_376_string = "";
		func_691(var_370_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_661;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x278";
	}
Label_661:
	var_394_bool = 0;
	func_1643(var_394_bool);
	if(var_394_bool != 0) {

	Label_665:
		lshWaitForAnimEnd();
		var_395_string = var_3_string;
		if(var_395_string != 0) {
		} else {
			var_396_string = "";
			var_396_string = var_2_object;
			func_1522(var_396_string);
			goto Label_665;
	}
		PlayAnimation("all", "idle");

	Label_680:
		WaitForAnimEnd();
		var_399_string = var_3_string;
		if(var_399_string != 0) {
			goto Label_690;
		}
		PlayAnimation("all", "idle");
		goto Label_680;
	}
	goto Label_690;
	
Label_690:
	return 0;
	
}


func_1013(var_0_object)
{
	var_21_bool = 0;
	func_1292(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1022:
	func_1189();
	goto Label_1022;
}
EMIT "Return(); Pop(0)";


func_887(var_0_object, var_1_object, var_2_object, var_3_string, var_430_object, var_431_object)
{
	var_0_object = var_431_object;
	var_1_object = var_430_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_437_string = "";
		func_945(var_431_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_915;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x37b";
	}
Label_915:
	var_452_bool = 0;
	func_1643(var_452_bool);
	if(var_452_bool != 0) {

	Label_919:
		lshWaitForAnimEnd();
		var_453_string = var_3_string;
		if(var_453_string != 0) {
		} else {
			var_454_string = "";
			var_454_string = var_2_object;
			func_1522(var_454_string);
			goto Label_919;
	}
		PlayAnimation("all", "idle");

	Label_934:
		WaitForAnimEnd();
		var_457_string = var_3_string;
		if(var_457_string != 0) {
			goto Label_944;
		}
		PlayAnimation("all", "idle");
		goto Label_934;
	}
	goto Label_944;
	
Label_944:
	return 0;
	
}


func_1273(var_29_bool, var_30_cvector)
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


func_1663(var_109_int)
{
	var_110_int = 0; var_111_int = 0;
	GetVariable("branch", var_111_int);
	var_114_bool = var_111_int == (int)0;
	if(var_114_bool != 0) {
		var_109_int = 1;
		return 2;
	EMIT "GOTO 0x68e";
	}
	var_116_bool = var_111_int == (int)1;
	if(var_116_bool != 0) {
		var_109_int = 2;
		return 2;
	}
	var_109_int = 3;
	return 2;
}


