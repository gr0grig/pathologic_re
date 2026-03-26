// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Serious|W:Secret|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Spi4ka.png|W:ui/NPC_Spi4ka_b.png|W:k8q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:mt_spi4ka
// @GLOBALS: 0:object:
// @RUN_OP: 0x3f9
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9c vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a7 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2d1 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3cf vars=int,int
// @TASK_8: vars=cvector params=0
// @EVENT_7: op=0x442 vars=int
// @EVENT_6: op=0x468 vars=
// @EVENT_5: op=0x477 vars=
// @EVENT_45: op=0x484 vars=bool
// @EVENT_0: op=0x490 vars=object
// @PE: 0x51,0x86,0x9c,0x14d,0x191,0x1a7,0x27c,0x2bb,0x2d1,0x37f,0x3b9,0x3cf,0x3f9,0x442,0x468,0x484,0x64d,0x675,0x67e

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1576();
		var_26_bool = var_21_bool == (int)26881;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_134(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525525);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525526, (int)30726, (int)26882);
			return 0;
		}
		var_49_bool = var_21_bool == (int)30726;
		if(var_49_bool != 0) {
			var_50_string = "";
			func_134(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529273);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529272, (int)30728, (int)30725);
			@@@var_0_object:AddReply((int)529274, (int)30729, (int)30727);
			return 0;
		}
		var_59_bool = var_21_bool == (int)30729;
		if(var_59_bool != 0) {
			var_60_string = "";
			func_134(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529276);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529278, (int)-1, (int)30731);
			return 0;
		}
		var_66_bool = var_21_bool == (int)30728;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_134(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529277, (int)-1, (int)30730);
			return 0;
		}
		var_3_string = true;
		var_72_bool = 0;
		func_1651(var_72_bool);
		if(var_72_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9d";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1576();
		var_26_bool = var_22_cvector == (int)27693;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1653();
		}
		var_55_bool = var_21_bool == (int)27688;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_401(var_22_cvector, "Serious");
			@@@var_0_object:SetMessage((int)526413);
			@@@var_0_object:ClearReplies();
			var_74_bool = 0; var_75_object = Obj();
			var_75_object = var_1_object;
			func_1662(var_75_object);
			if(var_74_bool != 0) {
				@@@var_0_object:AddReply((int)526414, (int)30415, (int)27689);
			}
			@@@var_0_object:AddReply((int)526419, (int)-1, (int)27694);
			@@@var_0_object:AddReply((int)528977, (int)-1, (int)30414);
			return 0;
		}
		var_92_bool = var_21_bool == (int)30415;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_401(var_22_cvector, "Secret");
			@@@var_0_object:SetMessage((int)528978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528980, (int)30418, (int)30417);
			return 0;
		}
		var_99_bool = var_21_bool == (int)30418;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_401(var_22_cvector, "Secret");
			@@@var_0_object:SetMessage((int)528981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528979, (int)27690, (int)30416);
			return 0;
		}
		var_106_bool = var_21_bool == (int)27690;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_401(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526416, (int)27692, (int)27691);
			return 0;
		}
		var_113_bool = var_21_bool == (int)27692;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_401(var_22_cvector, "Serious");
			@@@var_0_object:SetMessage((int)526417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526418, (int)-1, (int)27693);
			return 0;
		}
		var_3_string = true;
		var_119_bool = 0;
		func_1651(var_119_bool);
		if(var_119_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a8";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1576();
		var_26_bool = var_21_bool == (int)36960;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_699(var_22_cvector, "Neutral");
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
			func_699(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_65_bool = var_21_bool == (int)36964;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_699(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_74_bool = 0;
		func_1651(var_74_bool);
		if(var_74_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2d2";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	if((int)1 != 0) {
		func_1576();
		var_26_bool = var_21_int == (int)42554;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_953(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_1651(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3d0";
	
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_23_bool = var_21_int == (int)10;
	if(var_23_bool != 0) {
		func_1086();
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = 0;
		func_1300(var_26_bool);
		if(var_26_bool != 0) {
			var_29_bool = 0;
			func_1055(var_29_bool);
			if(var_29_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_46_bool = 0;
			func_1035(var_46_bool);
			if(var_46_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				func_1583(Obj());
				var_67_object = var_66_object;
				func_1450(var_65_bool, var_66_object);
			}
		} else {
			func_1050(var_21_int);
			func_1077();
		}
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1268();
	func_1086();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0();
	func_1086();
	var_22_string = "";
	func_1530("Neutral");
	func_1077();
	return 0;
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		func_1077();
	} else {
		var_28_string = "";
		func_1530("Neutral");
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
		func_1268();
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_1291(var_25_bool, var_26_object);
		EventEnable(0);
		var_39_object = Obj();
		var_21_object = var_39_object;
		func_1745(var_39_object);
		var_455_string = "";
		func_1530("Neutral");
		func_1086();
		func_1077();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1021(var_20_cvector);
	return 0;
}


func_0(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_0_object = var_45_object;
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0;
	var_45_object = var_56_object;
	func_1305(var_55_bool, var_56_object, (float)70.0);
	var_102_bool = var_55_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	CreateDialog(var_51_object);
	var_103_int = 0;
	func_1645(var_103_int);
	@@var_51_object:SetNPCName(var_103_int);
	var_104_int = 0;
	func_1643(var_104_int);
	@@var_51_object:SetNPCDescription(var_104_int);
	var_105_string = "";
	func_1647(var_105_string);
	@@var_51_object:SetPhoto(var_105_string);
	var_106_string = "";
	func_1649(var_106_string);
	@@var_51_object:SetPhoto2(var_106_string);
	var_107_int = 0;
	func_1728(var_107_int);
	@@var_51_object:SetPlayerName(var_107_int);
	IsOverrideActive(var_52_bool);
	var_115_bool = var_52_bool;
	if(var_115_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	DoDialog(var_51_object);
	var_116_bool = 0; var_117_object = Obj();
	func_1583(Obj());
	var_118_object = var_117_object;
	func_1392(var_116_bool, var_117_object);
	var_211_object = Obj(); var_212_object = Obj();
	var_45_object = var_211_object;
	var_51_object = var_212_object;
	TaskCall(1);
	func_81(var_213_object, var_214_object, var_215_string, var_216_bool, var_211_object, var_212_object);
	TaskReturn();
	@@var_51_object:IsDialogEnd(var_54_bool);
	
Label_63:
	var_257_bool = var_54_bool == 0; //@nz
	if(var_257_bool != 0) {
		sync();
		@@var_51_object:IsDialogEnd(var_54_bool);
		goto Label_63;
	}
	var_45_object = Obj();
	func_1374();
	StopDialog(var_51_object);
	@@var_51_object:GetReturnValue((int)-1);
	var_53_int = var_44_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1281(var_29_bool, var_30_cvector)
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


func_636(var_0_object, var_1_object, var_2_object, var_3_string, var_364_object, var_365_object)
{
	var_0_object = var_365_object;
	var_1_object = var_364_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_371_string = "";
		func_699(var_365_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_669;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x280";
	}
Label_669:
	var_389_bool = 0;
	func_1651(var_389_bool);
	if(var_389_bool != 0) {

	Label_673:
		lshWaitForAnimEnd();
		var_390_string = var_3_string;
		if(var_390_string != 0) {
		} else {
			var_391_string = "";
			var_391_string = var_2_object;
			func_1530(var_391_string);
			goto Label_673;
	}
		PlayAnimation("all", "idle");

	Label_688:
		WaitForAnimEnd();
		var_394_string = var_3_string;
		if(var_394_string != 0) {
			goto Label_698;
		}
		PlayAnimation("all", "idle");
		goto Label_688;
	}
	goto Label_698;
	
Label_698:
	return 0;
	
}


func_134(var_2_object, var_218_string)
{
	var_219_bool = 0;
	func_1651(var_219_bool);
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
	func_1546(var_222_string, var_223_bool);
	var_2_object = var_218_string;
	return 0;
	
}


func_1546(var_222_string, var_223_bool)
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


func_1291(var_25_bool, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	@@var_26_object:GetPosition(var_28_cvector);
	var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	var_28_cvector = var_30_cvector;
	func_1281(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
	return 2;
}


func_1035(var_46_bool)
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
	func_1291(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1674()
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateDiaryEntry(var_32_object, (int)441, (int)1, (int)526466);
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0;
	var_32_object = var_37_object;
	func_1700(var_36_bool, var_37_object, (int)438);
	return 2;
}
EMIT "Stack[-1] = 0";


func_401(var_2_object, var_302_string)
{
	var_303_bool = 0;
	func_1651(var_303_bool);
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
	func_1546(var_306_string, var_307_bool);
	var_2_object = var_302_string;
	return 0;
	
}


func_1300(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_1687(var_45_object)
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


func_1561(var_150_bool, var_151_string)
{
	var_152_bool = 0; var_153_bool = 0;
	var_154_bool = 0;
	func_1651(var_154_bool);
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


func_1305(var_55_bool, var_56_object, var_57_float)
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
	func_1589(var_82_cvector, var_83_cvector);
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
	func_1651(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		HasAnimationTrack(var_75_bool, "head");
		var_100_bool = var_75_bool;
		if(var_100_bool == 0) goto Label_1368;
		LookAsyncCamera("head");
	}
Label_1368:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_55_bool = 1;
	return 18;
	
}


func_1050(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_98_float, var_99_float);
	return 0;
}


func_1055(var_29_bool)
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
	func_1273(var_36_float, var_37_object);
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


func_1700(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0;
	func_1687(Obj());
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


func_1576()
{
	var_24_bool = 0;
	func_1651(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1450(var_127_bool, var_128_object)
{
	var_129_string = ""; var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_string = ""; var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = "";
	var_134_string = "c";
	var_135_int = 0;
	
Label_1453:
	if((int)1 != 0) {
		var_141_int = var_135_int + (int)1;
		var_142_int = var_134_string + var_141_int;
		@@var_128_object:HasProperty(var_142_int, var_136_bool);
		var_143_bool = var_136_bool == 0; //@nz
		if(var_143_bool != 0) {
		} else {
			var_135_int = var_135_int + (int)1;
			goto Label_1453;
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
	func_1561(var_150_bool, var_151_string);
	var_150_bool = var_127_bool;
	return 10;
	
}


func_555(var_0_object, var_340_int, var_341_object)
{
	var_343_object = Obj(); var_344_bool = 0; var_345_int = 0; var_346_bool = 0; var_347_object = Obj(); var_348_bool = 0; var_349_int = 0; var_350_bool = 0;
	var_0_object = var_341_object;
	var_351_bool = 0; var_352_object = Obj(); var_353_float = 0;
	var_341_object = var_352_object;
	func_1305(var_351_bool, var_352_object, (float)70.0);
	var_354_bool = var_351_bool == 0; //@nz
	if(var_354_bool != 0) {
		var_340_int = -2;
		return 8;
	}
	CreateDialog(var_347_object);
	var_355_int = 0;
	func_1645(var_355_int);
	@@var_347_object:SetNPCName(var_355_int);
	var_356_int = 0;
	func_1643(var_356_int);
	@@var_347_object:SetNPCDescription(var_356_int);
	var_357_string = "";
	func_1647(var_357_string);
	@@var_347_object:SetPhoto(var_357_string);
	var_358_string = "";
	func_1649(var_358_string);
	@@var_347_object:SetPhoto2(var_358_string);
	var_359_int = 0;
	func_1728(var_359_int);
	@@var_347_object:SetPlayerName(var_359_int);
	IsOverrideActive(var_348_bool);
	var_360_bool = var_348_bool;
	if(var_360_bool != 0) {
		var_340_int = -2;
		return 8;
	}
	DoDialog(var_347_object);
	var_361_bool = 0; var_362_object = Obj();
	func_1583(Obj());
	var_363_object = var_362_object;
	func_1392(var_361_bool, var_362_object);
	var_364_object = Obj(); var_365_object = Obj();
	var_341_object = var_364_object;
	var_347_object = var_365_object;
	TaskCall(5);
	func_636(var_366_object, var_367_object, var_368_string, var_369_bool, var_364_object, var_365_object);
	TaskReturn();
	@@var_347_object:IsDialogEnd(var_350_bool);
	
Label_618:
	var_397_bool = var_350_bool == 0; //@nz
	if(var_397_bool != 0) {
		sync();
		@@var_347_object:IsDialogEnd(var_350_bool);
		goto Label_618;
	}
	var_341_object = Obj();
	func_1374();
	StopDialog(var_347_object);
	@@var_347_object:GetReturnValue((int)-1);
	var_349_int = var_340_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1197()
{
	var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0;
	WaitForAnimEnd();
	var_37_bool = 0;
	func_1300(var_37_bool);
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		return 12;
	}
	func_1626((int)0);
	var_39_int = var_31_int;
	var_32_int = 0;
	
Label_1211:
	var_52_bool = 0;
	var_52_bool = 0;
	var_54_bool = var_32_int < (int)5;
	if(var_54_bool != 0) {
		var_55_bool = 0;
		func_1300(var_55_bool);
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
				func_1619(var_66_string, var_67_int);
				PlayAnimation("all", var_66_string);
				WaitForAnimEnd(var_36_bool);
				var_68_bool = var_36_bool == 0; //@nz
				if(var_68_bool == 0) goto Label_1252;
				goto Label_1263;
		}
		Label_1252:
			var_59_bool = 0;
			func_1266(var_59_bool);
			var_60_bool = var_59_bool == 0; //@nz
			if(var_60_bool != 0) {
				goto Label_1263;
			}
			ResetAAS();
			var_32_int = var_32_int + (int)1;
			goto Label_1211;

		}
	}
Label_1263:
	ResetAAS();
	return 12;
	
}


func_814(var_0_object, var_399_int, var_400_object)
{
	var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0; var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0;
	var_0_object = var_400_object;
	var_410_bool = 0; var_411_object = Obj(); var_412_float = 0;
	var_400_object = var_411_object;
	func_1305(var_410_bool, var_411_object, (float)70.0);
	var_413_bool = var_410_bool == 0; //@nz
	if(var_413_bool != 0) {
		var_399_int = -2;
		return 8;
	}
	CreateDialog(var_406_object);
	var_414_int = 0;
	func_1645(var_414_int);
	@@var_406_object:SetNPCName(var_414_int);
	var_415_int = 0;
	func_1643(var_415_int);
	@@var_406_object:SetNPCDescription(var_415_int);
	var_416_string = "";
	func_1647(var_416_string);
	@@var_406_object:SetPhoto(var_416_string);
	var_417_string = "";
	func_1649(var_417_string);
	@@var_406_object:SetPhoto2(var_417_string);
	var_418_int = 0;
	func_1728(var_418_int);
	@@var_406_object:SetPlayerName(var_418_int);
	IsOverrideActive(var_407_bool);
	var_419_bool = var_407_bool;
	if(var_419_bool != 0) {
		var_399_int = -2;
		return 8;
	}
	DoDialog(var_406_object);
	var_420_bool = 0; var_421_object = Obj();
	func_1583(Obj());
	var_422_object = var_421_object;
	func_1392(var_420_bool, var_421_object);
	var_423_object = Obj(); var_424_object = Obj();
	var_400_object = var_423_object;
	var_406_object = var_424_object;
	TaskCall(7);
	func_895(var_425_object, var_426_object, var_427_string, var_428_bool, var_423_object, var_424_object);
	TaskReturn();
	@@var_406_object:IsDialogEnd(var_409_bool);
	
Label_877:
	var_453_bool = var_409_bool == 0; //@nz
	if(var_453_bool != 0) {
		sync();
		@@var_406_object:IsDialogEnd(var_409_bool);
		goto Label_877;
	}
	var_400_object = Obj();
	func_1374();
	StopDialog(var_406_object);
	@@var_406_object:GetReturnValue((int)-1);
	var_408_int = var_399_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1583(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj();
	self(var_120_object);
	var_120_object = var_118_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1077()
{
	var_457_float = 0; var_458_float = 0;
	rand(var_458_float, (int)8, (int)16);
	SetTimer((int)10, var_458_float);
	return 2;
}


func_1589(var_82_cvector, var_83_cvector)
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


func_953(var_2_object, var_430_string)
{
	var_431_bool = 0;
	func_1651(var_431_bool);
	var_432_bool = var_431_bool == 0; //@nz
	if(var_432_bool != 0) {
		return 0;
	}
	var_433_bool = var_430_string == var_2_object;
	if(var_433_bool != 0) {
		return 0;
	}
	var_434_string = ""; var_435_bool = 0;
	var_430_string = var_434_string;
	var_437_bool = var_430_string == "";
	if(var_437_bool != 0) {
		var_435_bool = 0;
	} else {
		var_435_bool = 1;
	}
	func_1546(var_434_string, var_435_bool);
	var_2_object = var_430_string;
	return 0;
	
}


func_699(var_2_object, var_371_string)
{
	var_372_bool = 0;
	func_1651(var_372_bool);
	var_373_bool = var_372_bool == 0; //@nz
	if(var_373_bool != 0) {
		return 0;
	}
	var_374_bool = var_371_string == var_2_object;
	if(var_374_bool != 0) {
		return 0;
	}
	var_375_string = ""; var_376_bool = 0;
	var_371_string = var_375_string;
	var_378_bool = var_371_string == "";
	if(var_378_bool != 0) {
		var_376_bool = 0;
	} else {
		var_376_bool = 1;
	}
	func_1546(var_375_string, var_376_bool);
	var_2_object = var_371_string;
	return 0;
	
}


func_1086()
{
	KillTimer((int)10);
	return 0;
}


func_1599(var_313_int, var_314_string)
{
	var_315_int = 0; var_316_int = 0;
	GetVariable(var_314_string, var_316_int);
	var_316_int = var_313_int;
	return 2;
}


func_1728(var_107_int)
{
	var_108_int = 0; var_109_int = 0;
	GetVariable("branch", var_109_int);
	var_112_bool = var_109_int == (int)0;
	if(var_112_bool != 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0x6cf";
	}
	var_114_bool = var_109_int == (int)1;
	if(var_114_bool != 0) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
	return 2;
}


func_1604(var_171_int)
{
	var_172_float = 0; var_173_float = 0;
	GetGameTime(var_173_float);
	var_175_int = 0;
	var_175_int = var_173_float / (int)24;
	var_171_int = (int)1 + var_175_int;
	return 2;
}


func_333(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object;
	var_1_object = var_295_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_302_string = "";
		func_401(var_296_object, "Serious");
		@@@var_0_object:SetMessage((int)526413);
		@@@var_0_object:ClearReplies();
		var_311_bool = 0; var_312_object = Obj();
		var_312_object = var_1_object;
		func_1662(var_312_object);
		if(var_311_bool != 0) {
			@@@var_0_object:AddReply((int)526414, (int)30415, (int)27689);
		}
		@@@var_0_object:AddReply((int)526419, (int)-1, (int)27694);
		@@@var_0_object:AddReply((int)528977, (int)-1, (int)30414);
		goto Label_371;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x151";
	}
Label_371:
	var_328_bool = 0;
	func_1651(var_328_bool);
	if(var_328_bool != 0) {

	Label_375:
		lshWaitForAnimEnd();
		var_329_string = var_3_string;
		if(var_329_string != 0) {
		} else {
			var_330_string = "";
			var_330_string = var_2_object;
			func_1530(var_330_string);
			goto Label_375;
	}
		PlayAnimation("all", "idle");

	Label_390:
		WaitForAnimEnd();
		var_333_string = var_3_string;
		if(var_333_string != 0) {
			goto Label_400;
		}
		PlayAnimation("all", "idle");
		goto Label_390;
	}
	goto Label_400;
	
Label_400:
	return 0;
	
}


func_1613(var_268_bool, var_269_int)
{
	var_270_int = 0;
	func_1604(var_270_int);
	var_268_bool = var_270_int == var_269_int;
	return 0;
}


func_1487(var_158_bool, var_159_object)
{
	var_160_string = ""; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_string = ""; var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = "";
	var_171_int = 0;
	func_1604(var_171_int);
	var_177_int = "d" + var_171_int;
	var_165_string = var_177_int + "m";
	var_166_int = 0;
	
Label_1496:
	if((int)1 != 0) {
		var_181_int = var_166_int + (int)1;
		var_182_int = var_165_string + var_181_int;
		@@var_159_object:HasProperty(var_182_int, var_167_bool);
		var_183_bool = var_167_bool == 0; //@nz
		if(var_183_bool != 0) {
		} else {
			var_166_int = var_166_int + (int)1;
			goto Label_1496;
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
	func_1561(var_190_bool, var_191_string);
	var_190_bool = var_158_bool;
	return 10;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_211_object, var_212_object)
{
	var_0_object = var_212_object;
	var_1_object = var_211_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_218_string = "";
		func_134(var_212_object, "Neutral");
		@@@var_0_object:SetMessage((int)525525);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525526, (int)30726, (int)26882);
		goto Label_104;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_104:
	var_239_bool = 0;
	func_1651(var_239_bool);
	if(var_239_bool != 0) {

	Label_108:
		lshWaitForAnimEnd();
		var_240_string = var_3_string;
		if(var_240_string != 0) {
		} else {
			var_241_string = "";
			var_241_string = var_2_object;
			func_1530(var_241_string);
			goto Label_108;
	}
		PlayAnimation("all", "idle");

	Label_123:
		WaitForAnimEnd();
		var_254_string = var_3_string;
		if(var_254_string != 0) {
			goto Label_133;
		}
		PlayAnimation("all", "idle");
		goto Label_123;
	}
	goto Label_133;
	
Label_133:
	return 0;
	
}


func_1745(var_39_object)
{
	var_40_int = 0; var_41_int = 0;
	GetVariable("mt_spi4ka", var_41_int);
	var_43_bool = var_41_int == 0; //@nz
	if(var_43_bool != 0) {
		var_44_int = 0; var_45_object = Obj();
		var_39_object = var_45_object;
		TaskCall(0);
		func_0(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		SetVariable("mt_spi4ka", (int)1);
	}
	var_268_bool = 0; var_269_int = 0;
	func_1613(var_268_bool, (int)8);
	if(var_268_bool != 0) {
		var_271_int = 0; var_272_object = Obj();
		var_39_object = var_272_object;
		TaskCall(2);
		func_252(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 2;
	}
	var_338_bool = 0; var_339_int = 0;
	func_1613(var_338_bool, (int)12);
	if(var_338_bool != 0) {
		var_340_int = 0; var_341_object = Obj();
		var_39_object = var_341_object;
		TaskCall(4);
		func_555(var_342_object, var_340_int, var_341_object);
		TaskReturn();
		return 2;
	}
	var_399_int = 0; var_400_object = Obj();
	var_39_object = var_400_object;
	TaskCall(6);
	func_814(var_401_object, var_399_int, var_400_object);
	TaskReturn();
	return 2;
}


func_1619(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = "";
	var_49_int = var_46_int;
	if(var_49_int != 0) {
		"idle" = "idle" + var_46_int;
	}
	var_48_string = var_45_string;
	return 2;
}


func_1626(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0;
	var_42_int = 0;
	
Label_1628:
	var_45_string = ""; var_46_int = 0;
	var_42_int = var_46_int;
	func_1619(var_45_string, var_46_int);
	HasAnimation(var_43_bool, "all", var_45_string);
	var_50_bool = var_43_bool == 0; //@nz
	if(var_50_bool != 0) {
	} else {
		var_42_int = var_42_int + (int)1;
		goto Label_1628;
	}
	var_42_int = var_39_int;
	return 4;
	
}


func_1374()
{
	var_259_bool = 0; var_260_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_262_bool = 0;
	func_1651(var_262_bool);
	if(var_262_bool != 0) {
	} else {
		HasAnimationTrack(var_260_bool, "head");
		var_264_bool = var_260_bool;
		if(var_264_bool == 0) goto Label_1391;
		UnlookAsync("head");
	}
Label_1391:
	return 2;
	
}


func_1643(var_104_int)
{
	var_104_int = 515552;
	return 0;
}


func_1645(var_103_int)
{
	var_103_int = 502877;
	return 0;
}


func_1647(var_105_string)
{
	var_105_string = "ui/NPC_Spi4ka.png";
	return 0;
}


func_1392(var_116_bool, var_117_object)
{
	var_121_int = 0; var_122_int = 0; var_123_int = 0; var_124_int = 0;
	GetVariable("voice_common", var_123_int);
	var_126_int = var_123_int;
	if(var_126_int != 0) {
		var_127_bool = 0; var_128_object = Obj();
		var_117_object = var_128_object;
		func_1450(var_127_bool, var_128_object);
		var_157_bool = var_127_bool == 0; //@nz
		if(var_157_bool != 0) {
			var_158_bool = 0; var_159_object = Obj();
			var_117_object = var_159_object;
			func_1487(var_158_bool, var_159_object);
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
		func_1487(var_203_bool, var_204_object);
		var_205_bool = var_203_bool == 0; //@nz
		if(var_205_bool != 0) {
			var_206_bool = 0; var_207_object = Obj();
			var_117_object = var_207_object;
			func_1450(var_206_bool, var_207_object);
			var_208_bool = var_206_bool == 0; //@nz
			if(var_208_bool != 0) {
				var_116_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1448;
	
Label_1448:
	var_116_bool = 1;
	return 4;
	
}


func_1649(var_106_string)
{
	var_106_string = "ui/NPC_Spi4ka_b.png";
	return 0;
}


func_1266(var_59_bool)
{
	var_59_bool = 1;
	return 0;
}


func_1651(var_98_bool)
{
	var_98_bool = 1;
	return 0;
}


func_1268()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1653()
{
	SetVariable("k8q01", (int)3);
	func_1674();
	return 0;
}


func_1273(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1530(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0;
	lshHasAnimation(var_245_bool, var_241_string);
	var_248_bool = var_245_bool;
	if(var_248_bool != 0) {
		lshGetAnimTimes(var_241_string, var_246_float, var_247_float);
		lshPlayAnimation(var_246_float, var_247_float, (bool)0);
	} else {
		var_251_int = "Can't find lsh animation : " + var_241_string;
		Trace(var_251_int);
	}
	return 6;
	
}


func_252(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0;
	var_0_object = var_272_object;
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0;
	var_272_object = var_283_object;
	func_1305(var_282_bool, var_283_object, (float)70.0);
	var_285_bool = var_282_bool == 0; //@nz
	if(var_285_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	CreateDialog(var_278_object);
	var_286_int = 0;
	func_1645(var_286_int);
	@@var_278_object:SetNPCName(var_286_int);
	var_287_int = 0;
	func_1643(var_287_int);
	@@var_278_object:SetNPCDescription(var_287_int);
	var_288_string = "";
	func_1647(var_288_string);
	@@var_278_object:SetPhoto(var_288_string);
	var_289_string = "";
	func_1649(var_289_string);
	@@var_278_object:SetPhoto2(var_289_string);
	var_290_int = 0;
	func_1728(var_290_int);
	@@var_278_object:SetPlayerName(var_290_int);
	IsOverrideActive(var_279_bool);
	var_291_bool = var_279_bool;
	if(var_291_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	DoDialog(var_278_object);
	var_292_bool = 0; var_293_object = Obj();
	func_1583(Obj());
	var_294_object = var_293_object;
	func_1392(var_292_bool, var_293_object);
	var_295_object = Obj(); var_296_object = Obj();
	var_272_object = var_295_object;
	var_278_object = var_296_object;
	TaskCall(3);
	func_333(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object);
	TaskReturn();
	@@var_278_object:IsDialogEnd(var_281_bool);
	
Label_315:
	var_336_bool = var_281_bool == 0; //@nz
	if(var_336_bool != 0) {
		sync();
		@@var_278_object:IsDialogEnd(var_281_bool);
		goto Label_315;
	}
	var_272_object = Obj();
	func_1374();
	StopDialog(var_278_object);
	@@var_278_object:GetReturnValue((int)-1);
	var_280_int = var_271_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1021(var_0_object)
{
	var_21_bool = 0;
	func_1300(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1030:
	func_1197();
	goto Label_1030;
}
EMIT "Return(); Pop(0)";


func_1662(var_311_bool)
{
	var_313_int = 0; var_314_string = "";
	func_1599(var_313_int, "k8q01");
	var_318_bool = var_313_int == (int)2;
	if(var_318_bool != 0) {
		var_311_bool = 1;
		return 0;
	}
	var_311_bool = 0;
	return 0;
}


func_895(var_0_object, var_1_object, var_2_object, var_3_string, var_423_object, var_424_object)
{
	var_0_object = var_424_object;
	var_1_object = var_423_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_430_string = "";
		func_953(var_424_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_923;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x383";
	}
Label_923:
	var_445_bool = 0;
	func_1651(var_445_bool);
	if(var_445_bool != 0) {

	Label_927:
		lshWaitForAnimEnd();
		var_446_string = var_3_string;
		if(var_446_string != 0) {
		} else {
			var_447_string = "";
			var_447_string = var_2_object;
			func_1530(var_447_string);
			goto Label_927;
	}
		PlayAnimation("all", "idle");

	Label_942:
		WaitForAnimEnd();
		var_450_string = var_3_string;
		if(var_450_string != 0) {
			goto Label_952;
		}
		PlayAnimation("all", "idle");
		goto Label_942;
	}
	goto Label_952;
	
Label_952:
	return 0;
	
}


