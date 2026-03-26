// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Dream|W:Suspicion|W:Fear|W:Autizm|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:Can't find lsh animation : |W:ui/NPC_Mishka.png|W:ui/NPC_Mishka_b.png|W:ood6Mishka1|W:KnowMishka|W:d6q01|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x513
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1d2 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2a6 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3eb vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4e9 vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0x55f vars=int
// @EVENT_6: op=0x585 vars=
// @EVENT_5: op=0x594 vars=
// @EVENT_45: op=0x5a1 vars=bool
// @EVENT_0: op=0x5ad vars=object
// @PE: 0x51,0x95,0xab,0x187,0x1bc,0x1d2,0x248,0x290,0x2a6,0x396,0x3d5,0x3eb,0x499,0x4d3,0x4e9,0x55f,0x585,0x5a1,0x76a,0x792,0x798,0x79e,0x7aa,0x7c7

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_1861();
		var_31_bool = var_26_bool == (int)526;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_1944();
			var_36_string = "";
			func_149(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500458, (int)530, (int)527);
			@@@var_0_object:AddReply((int)500459, (int)532, (int)528);
			@@@var_0_object:AddReply((int)500460, (int)530, (int)529);
			return 0;
		}
		var_64_bool = var_26_bool == (int)532;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_149(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500462);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500466, (int)538, (int)536);
			@@@var_0_object:AddReply((int)500467, (int)-1, (int)537);
			return 0;
		}
		var_74_bool = var_26_bool == (int)538;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_149(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500468);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500470, (int)-1, (int)540);
			@@@var_0_object:AddReply((int)500471, (int)-1, (int)541);
			return 0;
		}
		var_84_bool = var_26_bool == (int)530;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_149(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500461);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500463, (int)535, (int)533);
			@@@var_0_object:AddReply((int)500464, (int)-1, (int)534);
			return 0;
		}
		var_94_bool = var_26_bool == (int)535;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_149(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500465);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506269, (int)-1, (int)6939);
			return 0;
		}
		var_3_string = true;
		var_100_bool = 0;
		func_1936(var_100_bool);
		if(var_100_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_1861();
		var_31_bool = var_26_bool == (int)11026;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_444(var_27_cvector, "Dream");
			@@@var_0_object:SetMessage((int)510004);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510015, (int)-1, (int)11037);
			return 0;
		}
		var_3_string = true;
		var_53_bool = 0;
		func_1936(var_53_bool);
		if(var_53_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1d3";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_1861();
		var_31_bool = var_27_cvector == (int)14011;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_1938();
		}
		var_37_bool = var_26_bool == (int)13999;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_656(var_27_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)512800);
			@@@var_0_object:ClearReplies();
			var_56_bool = 0;
			var_56_bool = 0;
			var_57_bool = 0; var_58_object = Obj();
			var_58_object = var_1_object;
			func_1950(var_58_object);
			if(var_57_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				var_66_object = var_1_object;
				func_1962(var_66_object);
				if(var_65_bool != 0) {
					var_56_bool = 1;
				}
			}
			if(var_56_bool != 0) {
				@@@var_0_object:AddReply((int)512801, (int)14001, (int)14000);
			}
			@@@var_0_object:AddReply((int)512813, (int)-1, (int)14013);
			return 0;
		}
		var_78_bool = var_26_bool == (int)14001;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_656(var_27_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)512802);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512803, (int)14003, (int)14002);
			return 0;
		}
		var_85_bool = var_26_bool == (int)14003;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_656(var_27_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)512804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512805, (int)14005, (int)14004);
			@@@var_0_object:AddReply((int)512808, (int)14005, (int)14007);
			return 0;
		}
		var_95_bool = var_26_bool == (int)14005;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_656(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512807, (int)14008, (int)14006);
			return 0;
		}
		var_102_bool = var_26_bool == (int)14008;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_656(var_27_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512810, (int)14010, (int)14009);
			return 0;
		}
		var_109_bool = var_26_bool == (int)14010;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_656(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)512811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512812, (int)-1, (int)14011);
			return 0;
		}
		var_3_string = true;
		var_115_bool = 0;
		func_1936(var_115_bool);
		if(var_115_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2a7";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_1861();
		var_31_bool = var_26_bool == (int)36960;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_981(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_60_bool = var_26_bool == (int)36962;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_981(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_70_bool = var_26_bool == (int)36964;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_981(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_79_bool = 0;
		func_1936(var_79_bool);
		if(var_79_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3ec";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_1861();
		var_31_bool = var_26_int == (int)42557;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1235(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_1936(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4ea";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_1371();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_1585(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_1340(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_1320(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_1868(Obj());
				var_72_object = var_71_object;
				func_1735(var_70_bool, var_71_object);
			}
		} else {
			func_1335(var_26_int);
			func_1362();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1553();
	func_1371();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_1371();
	var_27_string = "";
	func_1815("Neutral");
	func_1362();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_1362();
	} else {
		var_33_string = "";
		func_1815("Neutral");
	}
	return 0;
	
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	IsOverrideActive(var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
		EventDisable(0);
		func_1553();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_1576(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_1991(var_44_object);
		var_526_string = "";
		func_1815("Neutral");
		func_1371();
		func_1362();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	var_26_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1306(var_25_cvector);
	return 0;
}


func_0(var_0_object, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0;
	var_0_object = var_48_object;
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0;
	var_48_object = var_59_object;
	func_1590(var_58_bool, var_59_object, (float)70.0);
	var_105_bool = var_58_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	CreateDialog(var_54_object);
	var_106_int = 0;
	func_1930(var_106_int);
	@@var_54_object:SetNPCName(var_106_int);
	var_107_int = 0;
	func_1928(var_107_int);
	@@var_54_object:SetNPCDescription(var_107_int);
	var_108_string = "";
	func_1932(var_108_string);
	@@var_54_object:SetPhoto(var_108_string);
	var_109_string = "";
	func_1934(var_109_string);
	@@var_54_object:SetPhoto2(var_109_string);
	var_110_int = 0;
	func_1974(var_110_int);
	@@var_54_object:SetPlayerName(var_110_int);
	IsOverrideActive(var_55_bool);
	var_118_bool = var_55_bool;
	if(var_118_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	DoDialog(var_54_object);
	var_119_bool = 0; var_120_object = Obj();
	func_1868(Obj());
	var_121_object = var_120_object;
	func_1677(var_119_bool, var_120_object);
	var_214_object = Obj(); var_215_object = Obj();
	var_48_object = var_214_object;
	var_54_object = var_215_object;
	TaskCall(1);
	func_81(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object);
	TaskReturn();
	@@var_54_object:IsDialogEnd(var_57_bool);
	
Label_63:
	var_270_bool = var_57_bool == 0; //@nz
	if(var_270_bool != 0) {
		sync();
		@@var_54_object:IsDialogEnd(var_57_bool);
		goto Label_63;
	}
	var_48_object = Obj();
	func_1659();
	StopDialog(var_54_object);
	@@var_54_object:GetReturnValue((int)-1);
	var_56_int = var_47_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_391(var_0_object, var_1_object, var_2_object, var_3_string, var_307_object, var_308_object)
{
	var_0_object = var_308_object;
	var_1_object = var_307_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_314_string = "";
		func_444(var_308_object, "Dream");
		@@@var_0_object:SetMessage((int)510004);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)510015, (int)-1, (int)11037);
		goto Label_414;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x18b";
	}
Label_414:
	var_326_bool = 0;
	func_1936(var_326_bool);
	if(var_326_bool != 0) {

	Label_418:
		lshWaitForAnimEnd();
		var_327_string = var_3_string;
		if(var_327_string != 0) {
		} else {
			var_328_string = "";
			var_328_string = var_2_object;
			func_1815(var_328_string);
			goto Label_418;
	}
		PlayAnimation("all", "idle");

	Label_433:
		WaitForAnimEnd();
		var_331_string = var_3_string;
		if(var_331_string != 0) {
			goto Label_443;
		}
		PlayAnimation("all", "idle");
		goto Label_433;
	}
	goto Label_443;
	
Label_443:
	return 0;
	
}


func_1928(var_107_int)
{
	var_107_int = 515546;
	return 0;
}


func_1930(var_106_int)
{
	var_106_int = 502871;
	return 0;
}


func_1932(var_108_string)
{
	var_108_string = "ui/NPC_Mishka.png";
	return 0;
}


func_1677(var_119_bool, var_120_object)
{
	var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0;
	GetVariable("voice_common", var_126_int);
	var_129_int = var_126_int;
	if(var_129_int != 0) {
		var_130_bool = 0; var_131_object = Obj();
		var_120_object = var_131_object;
		func_1735(var_130_bool, var_131_object);
		var_160_bool = var_130_bool == 0; //@nz
		if(var_160_bool != 0) {
			var_161_bool = 0; var_162_object = Obj();
			var_120_object = var_162_object;
			func_1772(var_161_bool, var_162_object);
			var_196_bool = var_161_bool == 0; //@nz
			if(var_196_bool != 0) {
				var_119_bool = 0;
				return 4;
			}
		}
		irand(var_127_int, (int)2);
		var_198_int = var_127_int;
		if(var_198_int != 0) {
			var_201_int = var_126_int + (int)1;
			var_203_int = var_201_int % (int)3;
			SetVariable("voice_common", var_203_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_206_bool = 0; var_207_object = Obj();
		var_120_object = var_207_object;
		func_1772(var_206_bool, var_207_object);
		var_208_bool = var_206_bool == 0; //@nz
		if(var_208_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_120_object = var_210_object;
			func_1735(var_209_bool, var_210_object);
			var_211_bool = var_209_bool == 0; //@nz
			if(var_211_bool != 0) {
				var_119_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1733;
	
Label_1733:
	var_119_bool = 1;
	return 4;
	
}


func_1934(var_109_string)
{
	var_109_string = "ui/NPC_Mishka_b.png";
	return 0;
}


func_1551(var_65_bool)
{
	var_65_bool = 1;
	return 0;
}


func_1936(var_101_bool)
{
	var_101_bool = 1;
	return 0;
}


func_656(var_2_object, var_369_string)
{
	var_370_bool = 0;
	func_1936(var_370_bool);
	var_371_bool = var_370_bool == 0; //@nz
	if(var_371_bool != 0) {
		return 0;
	}
	var_372_bool = var_369_string == var_2_object;
	if(var_372_bool != 0) {
		return 0;
	}
	var_373_string = ""; var_374_bool = 0;
	var_369_string = var_373_string;
	var_376_bool = var_369_string == "";
	if(var_376_bool != 0) {
		var_374_bool = 0;
	} else {
		var_374_bool = 1;
	}
	func_1831(var_373_string, var_374_bool);
	var_2_object = var_369_string;
	return 0;
	
}


func_1938()
{
	SetVariable("ood6Mishka1", (int)1);
	return 0;
}


func_1553()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1911(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_48_int = 0;
	
Label_1913:
	var_51_string = ""; var_52_int = 0;
	var_48_int = var_52_int;
	func_1904(var_51_string, var_52_int);
	HasAnimation(var_49_bool, "all", var_51_string);
	var_56_bool = var_49_bool == 0; //@nz
	if(var_56_bool != 0) {
	} else {
		var_48_int = var_48_int + (int)1;
		goto Label_1913;
	}
	var_48_int = var_45_int;
	return 4;
	
}


func_149(var_2_object, var_225_string)
{
	var_226_bool = 0;
	func_1936(var_226_bool);
	var_227_bool = var_226_bool == 0; //@nz
	if(var_227_bool != 0) {
		return 0;
	}
	var_228_bool = var_225_string == var_2_object;
	if(var_228_bool != 0) {
		return 0;
	}
	var_229_string = ""; var_230_bool = 0;
	var_225_string = var_229_string;
	var_232_bool = var_225_string == "";
	if(var_232_bool != 0) {
		var_230_bool = 0;
	} else {
		var_230_bool = 1;
	}
	func_1831(var_229_string, var_230_bool);
	var_2_object = var_225_string;
	return 0;
	
}


func_918(var_0_object, var_1_object, var_2_object, var_3_string, var_435_object, var_436_object)
{
	var_0_object = var_436_object;
	var_1_object = var_435_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_442_string = "";
		func_981(var_436_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_951;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x39a";
	}
Label_951:
	var_460_bool = 0;
	func_1936(var_460_bool);
	if(var_460_bool != 0) {

	Label_955:
		lshWaitForAnimEnd();
		var_461_string = var_3_string;
		if(var_461_string != 0) {
		} else {
			var_462_string = "";
			var_462_string = var_2_object;
			func_1815(var_462_string);
			goto Label_955;
	}
		PlayAnimation("all", "idle");

	Label_970:
		WaitForAnimEnd();
		var_465_string = var_3_string;
		if(var_465_string != 0) {
			goto Label_980;
		}
		PlayAnimation("all", "idle");
		goto Label_970;
	}
	goto Label_980;
	
Label_980:
	return 0;
	
}


func_1815(var_254_string)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0;
	lshHasAnimation(var_258_bool, var_254_string);
	var_261_bool = var_258_bool;
	if(var_261_bool != 0) {
		lshGetAnimTimes(var_254_string, var_259_float, var_260_float);
		lshPlayAnimation(var_259_float, var_260_float, (bool)0);
	} else {
		var_264_int = "Can't find lsh animation : " + var_254_string;
		Trace(var_264_int);
	}
	return 6;
	
}


func_1944()
{
	SetVariable("KnowMishka", (int)1);
	return 0;
}


func_1177(var_0_object, var_1_object, var_2_object, var_3_string, var_494_object, var_495_object)
{
	var_0_object = var_495_object;
	var_1_object = var_494_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_501_string = "";
		func_1235(var_495_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_1205;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x49d";
	}
Label_1205:
	var_516_bool = 0;
	func_1936(var_516_bool);
	if(var_516_bool != 0) {

	Label_1209:
		lshWaitForAnimEnd();
		var_517_string = var_3_string;
		if(var_517_string != 0) {
		} else {
			var_518_string = "";
			var_518_string = var_2_object;
			func_1815(var_518_string);
			goto Label_1209;
	}
		PlayAnimation("all", "idle");

	Label_1224:
		WaitForAnimEnd();
		var_521_string = var_3_string;
		if(var_521_string != 0) {
			goto Label_1234;
		}
		PlayAnimation("all", "idle");
		goto Label_1224;
	}
	goto Label_1234;
	
Label_1234:
	return 0;
	
}


func_1306(var_0_object)
{
	var_27_bool = 0;
	func_1585(var_27_bool);
	var_30_bool = var_27_bool == 0; //@nz
	if(var_30_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1315:
	func_1482();
	goto Label_1315;
}
EMIT "Return(); Pop(0)";


func_1558(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_1950(var_379_bool)
{
	var_381_int = 0; var_382_string = "";
	func_1884(var_381_int, "d6q01");
	var_386_bool = var_381_int == (int)4;
	if(var_386_bool != 0) {
		var_379_bool = 1;
		return 0;
	}
	var_379_bool = 0;
	return 0;
}


func_1566(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0;
	GetPosition(var_39_cvector);
	var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
	return 6;
}


func_1831(var_229_string, var_230_bool)
{
	var_233_bool = 0; var_234_float = 0; var_235_float = 0; var_236_bool = 0; var_237_float = 0; var_238_float = 0;
	lshHasAnimation(var_236_bool, var_229_string);
	var_239_bool = var_236_bool;
	if(var_239_bool != 0) {
		lshGetAnimTimes(var_229_string, var_237_float, var_238_float);
		lshPlayAnimation(var_237_float, var_238_float, var_230_bool);
	} else {
		var_241_int = "Can't find lsh animation : " + var_229_string;
		Trace(var_241_int);
	}
	return 6;
	
}


func_1576(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_1566(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_1320(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj();
	FindActor(var_53_object, "player");
	var_55_bool = var_53_object == 0; //@nz
	if(var_55_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	var_56_bool = 0; var_57_object = Obj();
	var_53_object = var_57_object;
	func_1576(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1962(var_387_bool)
{
	var_389_int = 0; var_390_string = "";
	func_1884(var_389_int, "ood6Mishka1");
	var_392_bool = var_389_int == (int)0;
	if(var_392_bool != 0) {
		var_387_bool = 1;
		return 0;
	}
	var_387_bool = 0;
	return 0;
}


func_1585(var_27_bool)
{
	var_28_bool = 0; var_29_bool = 0;
	IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
	return 2;
}


func_1590(var_58_bool, var_59_object, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0;
	@@var_59_object:GetPosition(var_71_cvector);
	@@var_59_object:GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	var_79_float = var_79_float + var_70_float;
	SetByIndex(var_71_cvector, 1) = var_79_float;
	GetPosition(var_72_cvector);
	GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	var_80_float = var_80_float + var_70_float;
	SetByIndex(var_72_cvector, 1) = var_80_float;
	var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_82_int = var_73_cvector | var_73_cvector;
	var_83_float = sqrt(var_82_int);
	var_73_cvector = var_73_cvector / var_83_float;
	var_74_cvector = -var_73_cvector;
	var_84_float = var_73_cvector * var_60_float;
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_86_cvector = var_74_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1874(var_85_cvector, var_86_cvector);
	var_94_float = var_85_cvector * (int)25;
	var_95_int = var_84_float + var_94_float;
	var_75_cvector = var_95_int - CVector(0.0, 10.0, 0.0);
	var_76_cvector = var_72_cvector + var_75_cvector;
	IsOverrideActive(var_77_bool);
	var_97_bool = var_77_bool;
	if(var_97_bool != 0) {
		var_58_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_76_cvector, var_74_cvector, (bool)1);
	var_99_float = GetByIndex(var_75_cvector, 0);
	var_100_float = GetByIndex(var_75_cvector, 2);
	Rotate(var_99_float, var_100_float);
	var_101_bool = 0;
	func_1936(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		HasAnimationTrack(var_78_bool, "head");
		var_103_bool = var_78_bool;
		if(var_103_bool == 0) goto Label_1653;
		LookAsyncCamera("head");
	}
Label_1653:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_58_bool = 1;
	return 18;
	
}


func_1974(var_110_int)
{
	var_111_int = 0; var_112_int = 0;
	GetVariable("branch", var_112_int);
	var_115_bool = var_112_int == (int)0;
	if(var_115_bool != 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0x7c5";
	}
	var_117_bool = var_112_int == (int)1;
	if(var_117_bool != 0) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
	return 2;
}


func_1335(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_1846(var_153_bool, var_154_string)
{
	var_155_bool = 0; var_156_bool = 0;
	var_157_bool = 0;
	func_1936(var_157_bool);
	if(var_157_bool != 0) {
		lshHasSpeech(var_156_bool, var_154_string);
		var_158_bool = var_156_bool;
		if(var_158_bool != 0) {
			lshPlaySpeech(var_154_string);
			var_153_bool = 1;
			return 2;
		}
	}
	var_153_bool = 0;
	return 2;
}


func_310(var_0_object, var_283_int, var_284_object)
{
	var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0; var_290_object = Obj(); var_291_bool = 0; var_292_int = 0; var_293_bool = 0;
	var_0_object = var_284_object;
	var_294_bool = 0; var_295_object = Obj(); var_296_float = 0;
	var_284_object = var_295_object;
	func_1590(var_294_bool, var_295_object, (float)70.0);
	var_297_bool = var_294_bool == 0; //@nz
	if(var_297_bool != 0) {
		var_283_int = -2;
		return 8;
	}
	CreateDialog(var_290_object);
	var_298_int = 0;
	func_1930(var_298_int);
	@@var_290_object:SetNPCName(var_298_int);
	var_299_int = 0;
	func_1928(var_299_int);
	@@var_290_object:SetNPCDescription(var_299_int);
	var_300_string = "";
	func_1932(var_300_string);
	@@var_290_object:SetPhoto(var_300_string);
	var_301_string = "";
	func_1934(var_301_string);
	@@var_290_object:SetPhoto2(var_301_string);
	var_302_int = 0;
	func_1974(var_302_int);
	@@var_290_object:SetPlayerName(var_302_int);
	IsOverrideActive(var_291_bool);
	var_303_bool = var_291_bool;
	if(var_303_bool != 0) {
		var_283_int = -2;
		return 8;
	}
	DoDialog(var_290_object);
	var_304_bool = 0; var_305_object = Obj();
	func_1868(Obj());
	var_306_object = var_305_object;
	func_1677(var_304_bool, var_305_object);
	var_307_object = Obj(); var_308_object = Obj();
	var_284_object = var_307_object;
	var_290_object = var_308_object;
	TaskCall(3);
	func_391(var_309_object, var_310_object, var_311_string, var_312_bool, var_307_object, var_308_object);
	TaskReturn();
	@@var_290_object:IsDialogEnd(var_293_bool);
	
Label_373:
	var_334_bool = var_293_bool == 0; //@nz
	if(var_334_bool != 0) {
		sync();
		@@var_290_object:IsDialogEnd(var_293_bool);
		goto Label_373;
	}
	var_284_object = Obj();
	func_1659();
	StopDialog(var_290_object);
	@@var_290_object:GetReturnValue((int)-1);
	var_292_int = var_283_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_444(var_2_object, var_314_string)
{
	var_315_bool = 0;
	func_1936(var_315_bool);
	var_316_bool = var_315_bool == 0; //@nz
	if(var_316_bool != 0) {
		return 0;
	}
	var_317_bool = var_314_string == var_2_object;
	if(var_317_bool != 0) {
		return 0;
	}
	var_318_string = ""; var_319_bool = 0;
	var_314_string = var_318_string;
	var_321_bool = var_314_string == "";
	if(var_321_bool != 0) {
		var_319_bool = 0;
	} else {
		var_319_bool = 1;
	}
	func_1831(var_318_string, var_319_bool);
	var_2_object = var_314_string;
	return 0;
	
}


func_1340(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0;
	FindActor(var_37_object, "player");
	var_40_bool = var_37_object == 0; //@nz
	if(var_40_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_41_float = 0; var_42_object = Obj();
	var_37_object = var_42_object;
	func_1558(var_41_float, var_42_object);
	var_50_bool = var_41_float > (float)90000.0;
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	CanSee(var_38_bool, var_37_object);
	var_38_bool = var_34_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1861()
{
	var_29_bool = 0;
	func_1936(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_837(var_0_object, var_411_int, var_412_object)
{
	var_414_object = Obj(); var_415_bool = 0; var_416_int = 0; var_417_bool = 0; var_418_object = Obj(); var_419_bool = 0; var_420_int = 0; var_421_bool = 0;
	var_0_object = var_412_object;
	var_422_bool = 0; var_423_object = Obj(); var_424_float = 0;
	var_412_object = var_423_object;
	func_1590(var_422_bool, var_423_object, (float)70.0);
	var_425_bool = var_422_bool == 0; //@nz
	if(var_425_bool != 0) {
		var_411_int = -2;
		return 8;
	}
	CreateDialog(var_418_object);
	var_426_int = 0;
	func_1930(var_426_int);
	@@var_418_object:SetNPCName(var_426_int);
	var_427_int = 0;
	func_1928(var_427_int);
	@@var_418_object:SetNPCDescription(var_427_int);
	var_428_string = "";
	func_1932(var_428_string);
	@@var_418_object:SetPhoto(var_428_string);
	var_429_string = "";
	func_1934(var_429_string);
	@@var_418_object:SetPhoto2(var_429_string);
	var_430_int = 0;
	func_1974(var_430_int);
	@@var_418_object:SetPlayerName(var_430_int);
	IsOverrideActive(var_419_bool);
	var_431_bool = var_419_bool;
	if(var_431_bool != 0) {
		var_411_int = -2;
		return 8;
	}
	DoDialog(var_418_object);
	var_432_bool = 0; var_433_object = Obj();
	func_1868(Obj());
	var_434_object = var_433_object;
	func_1677(var_432_bool, var_433_object);
	var_435_object = Obj(); var_436_object = Obj();
	var_412_object = var_435_object;
	var_418_object = var_436_object;
	TaskCall(7);
	func_918(var_437_object, var_438_object, var_439_string, var_440_bool, var_435_object, var_436_object);
	TaskReturn();
	@@var_418_object:IsDialogEnd(var_421_bool);
	
Label_900:
	var_468_bool = var_421_bool == 0; //@nz
	if(var_468_bool != 0) {
		sync();
		@@var_418_object:IsDialogEnd(var_421_bool);
		goto Label_900;
	}
	var_412_object = Obj();
	func_1659();
	StopDialog(var_418_object);
	@@var_418_object:GetReturnValue((int)-1);
	var_420_int = var_411_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1735(var_130_bool, var_131_object)
{
	var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = "";
	var_137_string = "c";
	var_138_int = 0;
	
Label_1738:
	if((int)1 != 0) {
		var_144_int = var_138_int + (int)1;
		var_145_int = var_137_string + var_144_int;
		@@var_131_object:HasProperty(var_145_int, var_139_bool);
		var_146_bool = var_139_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_138_int = var_138_int + (int)1;
			goto Label_1738;
		}
	}
	var_147_bool = var_138_int == 0; //@nz
	if(var_147_bool != 0) {
		var_130_bool = 0;
		return 10;
	}
	var_140_int = 0;
	var_149_bool = var_138_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_140_int, var_138_int);
	}
	var_151_int = var_140_int + (int)1;
	var_152_int = var_137_string + var_151_int;
	@@var_131_object:GetProperty(var_152_int, var_141_string);
	var_153_bool = 0; var_154_string = "";
	var_141_string = var_154_string;
	func_1846(var_153_bool, var_154_string);
	var_153_bool = var_130_bool;
	return 10;
	
}


func_584(var_0_object, var_1_object, var_2_object, var_3_string, var_362_object, var_363_object)
{
	var_0_object = var_363_object;
	var_1_object = var_362_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_369_string = "";
		func_656(var_363_object, "Suspicion");
		@@@var_0_object:SetMessage((int)512800);
		@@@var_0_object:ClearReplies();
		var_378_bool = 0;
		var_378_bool = 0;
		var_379_bool = 0; var_380_object = Obj();
		var_380_object = var_1_object;
		func_1950(var_380_object);
		if(var_379_bool != 0) {
			var_387_bool = 0; var_388_object = Obj();
			var_388_object = var_1_object;
			func_1962(var_388_object);
			if(var_387_bool != 0) {
				var_378_bool = 1;
			}
		}
		if(var_378_bool != 0) {
			@@@var_0_object:AddReply((int)512801, (int)14001, (int)14000);
		}
		@@@var_0_object:AddReply((int)512813, (int)-1, (int)14013);
		goto Label_626;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24c";
	}
Label_626:
	var_399_bool = 0;
	func_1936(var_399_bool);
	if(var_399_bool != 0) {

	Label_630:
		lshWaitForAnimEnd();
		var_400_string = var_3_string;
		if(var_400_string != 0) {
		} else {
			var_401_string = "";
			var_401_string = var_2_object;
			func_1815(var_401_string);
			goto Label_630;
	}
		PlayAnimation("all", "idle");

	Label_645:
		WaitForAnimEnd();
		var_404_string = var_3_string;
		if(var_404_string != 0) {
			goto Label_655;
		}
		PlayAnimation("all", "idle");
		goto Label_645;
	}
	goto Label_655;
	
Label_655:
	return 0;
	
}


func_1991(var_44_object)
{
	var_45_bool = GlobalVars[1];
	var_46_bool = var_45_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_47_int = 0; var_48_object = Obj();
		var_44_object = var_48_object;
		TaskCall(0);
		func_0(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_279_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_280_bool = 0; var_281_int = 0;
	func_1898(var_280_bool, (int)3);
	if(var_280_bool != 0) {
		var_283_int = 0; var_284_object = Obj();
		var_44_object = var_284_object;
		TaskCall(2);
		func_310(var_285_object, var_283_int, var_284_object);
		TaskReturn();
		return 0;
	}
	var_336_bool = 0; var_337_int = 0;
	func_1898(var_336_bool, (int)6);
	if(var_336_bool != 0) {
		var_338_int = 0; var_339_object = Obj();
		var_44_object = var_339_object;
		TaskCall(4);
		func_503(var_340_object, var_338_int, var_339_object);
		TaskReturn();
		return 0;
	}
	var_409_bool = 0; var_410_int = 0;
	func_1898(var_409_bool, (int)12);
	if(var_409_bool != 0) {
		var_411_int = 0; var_412_object = Obj();
		var_44_object = var_412_object;
		TaskCall(6);
		func_837(var_413_object, var_411_int, var_412_object);
		TaskReturn();
		return 0;
	}
	var_470_int = 0; var_471_object = Obj();
	var_44_object = var_471_object;
	TaskCall(8);
	func_1096(var_472_object, var_470_int, var_471_object);
	TaskReturn();
	return 0;
}


func_1482()
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0;
	WaitForAnimEnd();
	var_43_bool = 0;
	func_1585(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 12;
	}
	func_1911((int)0);
	var_45_int = var_37_int;
	var_38_int = 0;
	
Label_1496:
	var_58_bool = 0;
	var_58_bool = 0;
	var_60_bool = var_38_int < (int)5;
	if(var_60_bool != 0) {
		var_61_bool = 0;
		func_1585(var_61_bool);
		if(var_61_bool != 0) {
			var_58_bool = 1;
		}
	}
	if(var_58_bool != 0) {
		var_62_bool = var_37_int == 0; //@nz
		if(var_62_bool != 0) {
			Sleep((int)3, var_39_bool);
			var_64_bool = var_39_bool == 0; //@nz
			if(var_64_bool != 0) {
			} else {
		} else {
				irand(var_40_int, var_37_int);
				irand(var_41_int, (int)5);
				var_70_bool = var_41_int != (int)0;
				if(var_70_bool != 0) {
					var_40_int = 0;
				}
				var_72_string = ""; var_73_int = 0;
				var_40_int = var_73_int;
				func_1904(var_72_string, var_73_int);
				PlayAnimation("all", var_72_string);
				WaitForAnimEnd(var_42_bool);
				var_74_bool = var_42_bool == 0; //@nz
				if(var_74_bool == 0) goto Label_1537;
				goto Label_1548;
		}
		Label_1537:
			var_65_bool = 0;
			func_1551(var_65_bool);
			var_66_bool = var_65_bool == 0; //@nz
			if(var_66_bool != 0) {
				goto Label_1548;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_1496;

		}
	}
Label_1548:
	ResetAAS();
	return 12;
	
}


func_1096(var_0_object, var_470_int, var_471_object)
{
	var_473_object = Obj(); var_474_bool = 0; var_475_int = 0; var_476_bool = 0; var_477_object = Obj(); var_478_bool = 0; var_479_int = 0; var_480_bool = 0;
	var_0_object = var_471_object;
	var_481_bool = 0; var_482_object = Obj(); var_483_float = 0;
	var_471_object = var_482_object;
	func_1590(var_481_bool, var_482_object, (float)70.0);
	var_484_bool = var_481_bool == 0; //@nz
	if(var_484_bool != 0) {
		var_470_int = -2;
		return 8;
	}
	CreateDialog(var_477_object);
	var_485_int = 0;
	func_1930(var_485_int);
	@@var_477_object:SetNPCName(var_485_int);
	var_486_int = 0;
	func_1928(var_486_int);
	@@var_477_object:SetNPCDescription(var_486_int);
	var_487_string = "";
	func_1932(var_487_string);
	@@var_477_object:SetPhoto(var_487_string);
	var_488_string = "";
	func_1934(var_488_string);
	@@var_477_object:SetPhoto2(var_488_string);
	var_489_int = 0;
	func_1974(var_489_int);
	@@var_477_object:SetPlayerName(var_489_int);
	IsOverrideActive(var_478_bool);
	var_490_bool = var_478_bool;
	if(var_490_bool != 0) {
		var_470_int = -2;
		return 8;
	}
	DoDialog(var_477_object);
	var_491_bool = 0; var_492_object = Obj();
	func_1868(Obj());
	var_493_object = var_492_object;
	func_1677(var_491_bool, var_492_object);
	var_494_object = Obj(); var_495_object = Obj();
	var_471_object = var_494_object;
	var_477_object = var_495_object;
	TaskCall(9);
	func_1177(var_496_object, var_497_object, var_498_string, var_499_bool, var_494_object, var_495_object);
	TaskReturn();
	@@var_477_object:IsDialogEnd(var_480_bool);
	
Label_1159:
	var_524_bool = var_480_bool == 0; //@nz
	if(var_524_bool != 0) {
		sync();
		@@var_477_object:IsDialogEnd(var_480_bool);
		goto Label_1159;
	}
	var_471_object = Obj();
	func_1659();
	StopDialog(var_477_object);
	@@var_477_object:GetReturnValue((int)-1);
	var_479_int = var_470_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1868(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj();
	self(var_123_object);
	var_123_object = var_121_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_214_object, var_215_object)
{
	var_0_object = var_215_object;
	var_1_object = var_214_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_221_object = Obj(); var_222_object = Obj();
		var_221_object = var_1_object;
		var_222_object = var_0_object;
		func_1944();
		var_225_string = "";
		func_149(var_215_object, "Neutral");
		@@@var_0_object:SetMessage((int)500457);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500458, (int)530, (int)527);
		@@@var_0_object:AddReply((int)500459, (int)532, (int)528);
		@@@var_0_object:AddReply((int)500460, (int)530, (int)529);
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	var_252_bool = 0;
	func_1936(var_252_bool);
	if(var_252_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_253_string = var_3_string;
		if(var_253_string != 0) {
		} else {
			var_254_string = "";
			var_254_string = var_2_object;
			func_1815(var_254_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_267_string = var_3_string;
		if(var_267_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;
	}
	goto Label_148;
	
Label_148:
	return 0;
	
}


func_1362()
{
	var_528_float = 0; var_529_float = 0;
	rand(var_529_float, (int)8, (int)16);
	SetTimer((int)10, var_529_float);
	return 2;
}


func_1235(var_2_object, var_501_string)
{
	var_502_bool = 0;
	func_1936(var_502_bool);
	var_503_bool = var_502_bool == 0; //@nz
	if(var_503_bool != 0) {
		return 0;
	}
	var_504_bool = var_501_string == var_2_object;
	if(var_504_bool != 0) {
		return 0;
	}
	var_505_string = ""; var_506_bool = 0;
	var_501_string = var_505_string;
	var_508_bool = var_501_string == "";
	if(var_508_bool != 0) {
		var_506_bool = 0;
	} else {
		var_506_bool = 1;
	}
	func_1831(var_505_string, var_506_bool);
	var_2_object = var_501_string;
	return 0;
	
}


func_1874(var_85_cvector, var_86_cvector)
{
	var_88_float = 0; var_89_float = 0;
	var_90_int = var_86_cvector | var_86_cvector;
	var_89_float = sqrt(var_90_int);
	var_91_float = 9.999999974752427e-07;
	var_92_bool = var_89_float < var_91_float;
	if(var_92_bool != 0) {
		var_85_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_85_cvector = var_86_cvector / var_89_float;
	return 2;
}


func_981(var_2_object, var_442_string)
{
	var_443_bool = 0;
	func_1936(var_443_bool);
	var_444_bool = var_443_bool == 0; //@nz
	if(var_444_bool != 0) {
		return 0;
	}
	var_445_bool = var_442_string == var_2_object;
	if(var_445_bool != 0) {
		return 0;
	}
	var_446_string = ""; var_447_bool = 0;
	var_442_string = var_446_string;
	var_449_bool = var_442_string == "";
	if(var_449_bool != 0) {
		var_447_bool = 0;
	} else {
		var_447_bool = 1;
	}
	func_1831(var_446_string, var_447_bool);
	var_2_object = var_442_string;
	return 0;
	
}


func_1371()
{
	KillTimer((int)10);
	return 0;
}


func_1884(var_381_int, var_382_string)
{
	var_383_int = 0; var_384_int = 0;
	GetVariable(var_382_string, var_384_int);
	var_384_int = var_381_int;
	return 2;
}


func_1889(var_174_int)
{
	var_175_float = 0; var_176_float = 0;
	GetGameTime(var_176_float);
	var_178_int = 0;
	var_178_int = var_176_float / (int)24;
	var_174_int = (int)1 + var_178_int;
	return 2;
}


func_1898(var_280_bool, var_281_int)
{
	var_282_int = 0;
	func_1889(var_282_int);
	var_280_bool = var_282_int == var_281_int;
	return 0;
}


func_1772(var_161_bool, var_162_object)
{
	var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = "";
	var_174_int = 0;
	func_1889(var_174_int);
	var_180_int = "d" + var_174_int;
	var_168_string = var_180_int + "m";
	var_169_int = 0;
	
Label_1781:
	if((int)1 != 0) {
		var_184_int = var_169_int + (int)1;
		var_185_int = var_168_string + var_184_int;
		@@var_162_object:HasProperty(var_185_int, var_170_bool);
		var_186_bool = var_170_bool == 0; //@nz
		if(var_186_bool != 0) {
		} else {
			var_169_int = var_169_int + (int)1;
			goto Label_1781;
		}
	}
	var_187_bool = var_169_int == 0; //@nz
	if(var_187_bool != 0) {
		var_161_bool = 0;
		return 10;
	}
	var_171_int = 0;
	var_189_bool = var_169_int > (int)1;
	if(var_189_bool != 0) {
		irand(var_171_int, var_169_int);
	}
	var_191_int = var_171_int + (int)1;
	var_192_int = var_168_string + var_191_int;
	@@var_162_object:GetProperty(var_192_int, var_172_string);
	var_193_bool = 0; var_194_string = "";
	var_172_string = var_194_string;
	func_1846(var_193_bool, var_194_string);
	var_193_bool = var_161_bool;
	return 10;
	
}


func_1904(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = "";
	var_55_int = var_52_int;
	if(var_55_int != 0) {
		"idle" = "idle" + var_52_int;
	}
	var_54_string = var_51_string;
	return 2;
}


func_503(var_0_object, var_338_int, var_339_object)
{
	var_341_object = Obj(); var_342_bool = 0; var_343_int = 0; var_344_bool = 0; var_345_object = Obj(); var_346_bool = 0; var_347_int = 0; var_348_bool = 0;
	var_0_object = var_339_object;
	var_349_bool = 0; var_350_object = Obj(); var_351_float = 0;
	var_339_object = var_350_object;
	func_1590(var_349_bool, var_350_object, (float)70.0);
	var_352_bool = var_349_bool == 0; //@nz
	if(var_352_bool != 0) {
		var_338_int = -2;
		return 8;
	}
	CreateDialog(var_345_object);
	var_353_int = 0;
	func_1930(var_353_int);
	@@var_345_object:SetNPCName(var_353_int);
	var_354_int = 0;
	func_1928(var_354_int);
	@@var_345_object:SetNPCDescription(var_354_int);
	var_355_string = "";
	func_1932(var_355_string);
	@@var_345_object:SetPhoto(var_355_string);
	var_356_string = "";
	func_1934(var_356_string);
	@@var_345_object:SetPhoto2(var_356_string);
	var_357_int = 0;
	func_1974(var_357_int);
	@@var_345_object:SetPlayerName(var_357_int);
	IsOverrideActive(var_346_bool);
	var_358_bool = var_346_bool;
	if(var_358_bool != 0) {
		var_338_int = -2;
		return 8;
	}
	DoDialog(var_345_object);
	var_359_bool = 0; var_360_object = Obj();
	func_1868(Obj());
	var_361_object = var_360_object;
	func_1677(var_359_bool, var_360_object);
	var_362_object = Obj(); var_363_object = Obj();
	var_339_object = var_362_object;
	var_345_object = var_363_object;
	TaskCall(5);
	func_584(var_364_object, var_365_object, var_366_string, var_367_bool, var_362_object, var_363_object);
	TaskReturn();
	@@var_345_object:IsDialogEnd(var_348_bool);
	
Label_566:
	var_407_bool = var_348_bool == 0; //@nz
	if(var_407_bool != 0) {
		sync();
		@@var_345_object:IsDialogEnd(var_348_bool);
		goto Label_566;
	}
	var_339_object = Obj();
	func_1659();
	StopDialog(var_345_object);
	@@var_345_object:GetReturnValue((int)-1);
	var_347_int = var_338_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1659()
{
	var_272_bool = 0; var_273_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_275_bool = 0;
	func_1936(var_275_bool);
	if(var_275_bool != 0) {
	} else {
		HasAnimationTrack(var_273_bool, "head");
		var_277_bool = var_273_bool;
		if(var_277_bool == 0) goto Label_1676;
		UnlookAsync("head");
	}
Label_1676:
	return 2;
	
}


