// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Questioning|W:Grin|W:Suspicion|W:Doubt|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Han.png|W:ui/NPC_Han_b.png|W:b11q02|W:quest_b11_02|W:fail|W:oob12Han1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x4ce
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x195 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x34c vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4a4 vars=int,int
// @TASK_8: vars=cvector params=0
// @EVENT_7: op=0x51a vars=int
// @EVENT_6: op=0x540 vars=
// @EVENT_5: op=0x54f vars=
// @EVENT_45: op=0x55c vars=bool
// @EVENT_0: op=0x568 vars=object
// @PE: 0x51,0x8b,0xa1,0x12c,0x17f,0x195,0x2f7,0x336,0x34c,0x454,0x48e,0x4a4,0x51a,0x540,0x55c,0x731,0x759,0x762,0x76c,0x772,0x77e,0x7de

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1792();
		var_26_bool = var_21_bool == (int)19142;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_139(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518009);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518010, (int)32920, (int)19143);
			@@@var_0_object:AddReply((int)531560, (int)-1, (int)32919);
			return 0;
		}
		var_52_bool = var_21_bool == (int)32920;
		if(var_52_bool != 0) {
			var_53_string = "";
			func_139(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531562, (int)-1, (int)32921);
			@@@var_0_object:AddReply((int)531563, (int)-1, (int)32922);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_1879(var_61_bool);
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
		func_1792();
		var_26_bool = var_22_cvector == (int)32444;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1881();
		}
		var_55_bool = var_22_cvector == (int)32756;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_1881();
		}
		var_59_bool = var_22_cvector == (int)32750;
		if(var_59_bool != 0) {
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_1890();
		}
		var_77_bool = var_21_bool == (int)32441;
		if(var_77_bool != 0) {
			var_78_bool = 0; var_79_object = Obj();
			var_79_object = var_1_object;
			func_1906(var_79_object);
			if(var_78_bool != 0) {
				var_86_string = "";
				func_383(var_22_cvector, "Questioning");
				@@@var_0_object:SetMessage((int)531123);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531124, (int)32443, (int)32442);
				@@@var_0_object:AddReply((int)531403, (int)32745, (int)32744);
				return 0;
			}
			var_110_string = "";
			func_383(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531128, (int)-1, (int)32446);
			@@@var_0_object:AddReply((int)531398, (int)-1, (int)32739);
			return 0;
		}
		var_119_bool = var_21_bool == (int)32745;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_383(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)531404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531405, (int)32749, (int)32746);
			@@@var_0_object:AddReply((int)531406, (int)32443, (int)32747);
			return 0;
		}
		var_129_bool = var_21_bool == (int)32443;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_383(var_22_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)531125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531399, (int)32741, (int)32740);
			return 0;
		}
		var_136_bool = var_21_bool == (int)32741;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_383(var_22_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)531400);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531401, (int)32757, (int)32742);
			@@@var_0_object:AddReply((int)531407, (int)32749, (int)32748);
			return 0;
		}
		var_146_bool = var_21_bool == (int)32749;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_383(var_22_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)531408);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531409, (int)-1, (int)32750);
			return 0;
		}
		var_153_bool = var_21_bool == (int)32757;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_383(var_22_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)531415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531417, (int)32760, (int)32759);
			@@@var_0_object:AddReply((int)531416, (int)32743, (int)32758);
			return 0;
		}
		var_163_bool = var_21_bool == (int)32743;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_383(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)531402);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531126, (int)-1, (int)32444);
			@@@var_0_object:AddReply((int)531410, (int)32753, (int)32752);
			return 0;
		}
		var_173_bool = var_21_bool == (int)32753;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_383(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531411);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531412, (int)32755, (int)32754);
			return 0;
		}
		var_180_bool = var_21_bool == (int)32755;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_383(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)531413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531414, (int)-1, (int)32756);
			return 0;
		}
		var_187_bool = var_21_bool == (int)32760;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_383(var_22_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)531418);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531419, (int)32743, (int)32761);
			return 0;
		}
		var_3_string = true;
		var_193_bool = 0;
		func_1879(var_193_bool);
		if(var_193_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x196";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1792();
		var_26_bool = var_22_cvector == (int)36944;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1900();
		}
		var_32_bool = var_21_bool == (int)36943;
		if(var_32_bool != 0) {
			var_33_string = "";
			func_822(var_22_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)535268);
			@@@var_0_object:ClearReplies();
			var_51_bool = 0; var_52_object = Obj();
			var_52_object = var_1_object;
			func_1918(var_52_object);
			if(var_51_bool != 0) {
				@@@var_0_object:AddReply((int)535269, (int)37004, (int)36944);
			}
			@@@var_0_object:AddReply((int)535322, (int)-1, (int)37003);
			return 0;
		}
		var_66_bool = var_21_bool == (int)37004;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_822(var_22_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)535323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535325, (int)37007, (int)37006);
			@@@var_0_object:AddReply((int)535324, (int)37008, (int)37005);
			return 0;
		}
		var_76_bool = var_21_bool == (int)37008;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_822(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)535327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535328, (int)37015, (int)37009);
			@@@var_0_object:AddReply((int)535329, (int)37011, (int)37010);
			return 0;
		}
		var_86_bool = var_21_bool == (int)37011;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_822(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)535330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535331, (int)37007, (int)37012);
			return 0;
		}
		var_93_bool = var_21_bool == (int)37015;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_822(var_22_cvector, "Grin");
			@@@var_0_object:SetMessage((int)535334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535336, (int)-1, (int)37017);
			@@@var_0_object:AddReply((int)535335, (int)-1, (int)37016);
			return 0;
		}
		var_103_bool = var_21_bool == (int)37007;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_822(var_22_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)535326);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535332, (int)37014, (int)37013);
			return 0;
		}
		var_110_bool = var_21_bool == (int)37014;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_822(var_22_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)535333);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535337, (int)-1, (int)37019);
			@@@var_0_object:AddReply((int)535338, (int)-1, (int)37020);
			return 0;
		}
		var_3_string = true;
		var_119_bool = 0;
		func_1879(var_119_bool);
		if(var_119_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x34d";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	if((int)1 != 0) {
		func_1792();
		var_26_bool = var_21_int == (int)42563;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_1166(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_1879(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4a5";
	
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_23_bool = var_21_int == (int)10;
	if(var_23_bool != 0) {
		func_1302();
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = 0;
		func_1516(var_26_bool);
		if(var_26_bool != 0) {
			var_29_bool = 0;
			func_1271(var_29_bool);
			if(var_29_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_46_bool = 0;
			func_1251(var_46_bool);
			if(var_46_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				func_1799(Obj());
				var_67_object = var_66_object;
				func_1666(var_65_bool, var_66_object);
			}
		} else {
			func_1266(var_21_int);
			func_1293();
		}
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1484();
	func_1302();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0();
	func_1302();
	var_22_string = "";
	func_1746("Neutral");
	func_1293();
	return 0;
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		func_1293();
	} else {
		var_28_string = "";
		func_1746("Neutral");
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
		func_1484();
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_1507(var_25_bool, var_26_object);
		EventEnable(0);
		var_39_object = Obj();
		var_21_object = var_39_object;
		func_2014(var_39_object);
		var_460_string = "";
		func_1746("Neutral");
		func_1302();
		func_1293();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1237(var_20_cvector);
	return 0;
}


func_1792()
{
	var_24_bool = 0;
	func_1879(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0;
	var_0_object = var_43_object;
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0;
	var_43_object = var_54_object;
	func_1521(var_53_bool, var_54_object, (float)70.0);
	var_100_bool = var_53_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	CreateDialog(var_49_object);
	var_101_int = 0;
	func_1873(var_101_int);
	@@var_49_object:SetNPCName(var_101_int);
	var_102_int = 0;
	func_1871(var_102_int);
	@@var_49_object:SetNPCDescription(var_102_int);
	var_103_string = "";
	func_1875(var_103_string);
	@@var_49_object:SetPhoto(var_103_string);
	var_104_string = "";
	func_1877(var_104_string);
	@@var_49_object:SetPhoto2(var_104_string);
	var_105_int = 0;
	func_1997(var_105_int);
	@@var_49_object:SetPlayerName(var_105_int);
	IsOverrideActive(var_50_bool);
	var_113_bool = var_50_bool;
	if(var_113_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	DoDialog(var_49_object);
	var_114_bool = 0; var_115_object = Obj();
	func_1799(Obj());
	var_116_object = var_115_object;
	func_1608(var_114_bool, var_115_object);
	var_209_object = Obj(); var_210_object = Obj();
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(1);
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	@@var_49_object:IsDialogEnd(var_52_bool);
	
Label_63:
	var_258_bool = var_52_bool == 0; //@nz
	if(var_258_bool != 0) {
		sync();
		@@var_49_object:IsDialogEnd(var_52_bool);
		goto Label_63;
	}
	var_43_object = Obj();
	func_1590();
	StopDialog(var_49_object);
	@@var_49_object:GetReturnValue((int)-1);
	var_51_int = var_42_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1666(var_125_bool, var_126_object)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = "";
	var_132_string = "c";
	var_133_int = 0;
	
Label_1669:
	if((int)1 != 0) {
		var_139_int = var_133_int + (int)1;
		var_140_int = var_132_string + var_139_int;
		@@var_126_object:HasProperty(var_140_int, var_134_bool);
		var_141_bool = var_134_bool == 0; //@nz
		if(var_141_bool != 0) {
		} else {
			var_133_int = var_133_int + (int)1;
			goto Label_1669;
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
	func_1777(var_148_bool, var_149_string);
	var_148_bool = var_125_bool;
	return 10;
	
}


func_1027(var_0_object, var_404_int, var_405_object)
{
	var_407_object = Obj(); var_408_bool = 0; var_409_int = 0; var_410_bool = 0; var_411_object = Obj(); var_412_bool = 0; var_413_int = 0; var_414_bool = 0;
	var_0_object = var_405_object;
	var_415_bool = 0; var_416_object = Obj(); var_417_float = 0;
	var_405_object = var_416_object;
	func_1521(var_415_bool, var_416_object, (float)70.0);
	var_418_bool = var_415_bool == 0; //@nz
	if(var_418_bool != 0) {
		var_404_int = -2;
		return 8;
	}
	CreateDialog(var_411_object);
	var_419_int = 0;
	func_1873(var_419_int);
	@@var_411_object:SetNPCName(var_419_int);
	var_420_int = 0;
	func_1871(var_420_int);
	@@var_411_object:SetNPCDescription(var_420_int);
	var_421_string = "";
	func_1875(var_421_string);
	@@var_411_object:SetPhoto(var_421_string);
	var_422_string = "";
	func_1877(var_422_string);
	@@var_411_object:SetPhoto2(var_422_string);
	var_423_int = 0;
	func_1997(var_423_int);
	@@var_411_object:SetPlayerName(var_423_int);
	IsOverrideActive(var_412_bool);
	var_424_bool = var_412_bool;
	if(var_424_bool != 0) {
		var_404_int = -2;
		return 8;
	}
	DoDialog(var_411_object);
	var_425_bool = 0; var_426_object = Obj();
	func_1799(Obj());
	var_427_object = var_426_object;
	func_1608(var_425_bool, var_426_object);
	var_428_object = Obj(); var_429_object = Obj();
	var_405_object = var_428_object;
	var_411_object = var_429_object;
	TaskCall(7);
	func_1108(var_430_object, var_431_object, var_432_string, var_433_bool, var_428_object, var_429_object);
	TaskReturn();
	@@var_411_object:IsDialogEnd(var_414_bool);
	
Label_1090:
	var_458_bool = var_414_bool == 0; //@nz
	if(var_458_bool != 0) {
		sync();
		@@var_411_object:IsDialogEnd(var_414_bool);
		goto Label_1090;
	}
	var_405_object = Obj();
	func_1590();
	StopDialog(var_411_object);
	@@var_411_object:GetReturnValue((int)-1);
	var_413_int = var_404_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1413()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0;
	WaitForAnimEnd();
	var_38_bool = 0;
	func_1516(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 12;
	}
	func_1854((int)0);
	var_40_int = var_32_int;
	var_33_int = 0;
	
Label_1427:
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_33_int < (int)5;
	if(var_55_bool != 0) {
		var_56_bool = 0;
		func_1516(var_56_bool);
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
				func_1847(var_67_string, var_68_int);
				PlayAnimation("all", var_67_string);
				WaitForAnimEnd(var_37_bool);
				var_69_bool = var_37_bool == 0; //@nz
				if(var_69_bool == 0) goto Label_1468;
				goto Label_1479;
		}
		Label_1468:
			var_60_bool = 0;
			func_1482(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_1479;
			}
			ResetAAS();
			var_33_int = var_33_int + (int)1;
			goto Label_1427;

		}
	}
Label_1479:
	ResetAAS();
	return 12;
	
}


func_1799(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj();
	self(var_118_object);
	var_118_object = var_116_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1930()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)611, (int)2, (int)531506);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_1969(var_67_bool, var_68_object, (int)598);
	return 2;
}
EMIT "Stack[-1] = 0";


func_139(var_2_object, var_216_string)
{
	var_217_bool = 0;
	func_1879(var_217_bool);
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
	func_1762(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	return 0;
	
}


func_1293()
{
	var_462_float = 0; var_463_float = 0;
	rand(var_463_float, (int)8, (int)16);
	SetTimer((int)10, var_463_float);
	return 2;
}


func_1166(var_2_object, var_435_string)
{
	var_436_bool = 0;
	func_1879(var_436_bool);
	var_437_bool = var_436_bool == 0; //@nz
	if(var_437_bool != 0) {
		return 0;
	}
	var_438_bool = var_435_string == var_2_object;
	if(var_438_bool != 0) {
		return 0;
	}
	var_439_string = ""; var_440_bool = 0;
	var_435_string = var_439_string;
	var_442_bool = var_435_string == "";
	if(var_442_bool != 0) {
		var_440_bool = 0;
	} else {
		var_440_bool = 1;
	}
	func_1762(var_439_string, var_440_bool);
	var_2_object = var_435_string;
	return 0;
	
}


func_1805(var_80_cvector, var_81_cvector)
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


func_1302()
{
	KillTimer((int)10);
	return 0;
}


func_1815(var_301_int, var_302_string)
{
	var_303_int = 0; var_304_int = 0;
	GetVariable(var_302_string, var_304_int);
	var_304_int = var_301_int;
	return 2;
}


func_1943()
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateDiaryEntry(var_32_object, (int)601, (int)2, (int)531152);
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0;
	var_32_object = var_37_object;
	func_1969(var_36_bool, var_37_object, (int)598);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1820(var_70_bool, var_71_string, var_72_string)
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


func_1956(var_45_object)
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


func_678(var_0_object, var_342_int, var_343_object)
{
	var_345_object = Obj(); var_346_bool = 0; var_347_int = 0; var_348_bool = 0; var_349_object = Obj(); var_350_bool = 0; var_351_int = 0; var_352_bool = 0;
	var_0_object = var_343_object;
	var_353_bool = 0; var_354_object = Obj(); var_355_float = 0;
	var_343_object = var_354_object;
	func_1521(var_353_bool, var_354_object, (float)70.0);
	var_356_bool = var_353_bool == 0; //@nz
	if(var_356_bool != 0) {
		var_342_int = -2;
		return 8;
	}
	CreateDialog(var_349_object);
	var_357_int = 0;
	func_1873(var_357_int);
	@@var_349_object:SetNPCName(var_357_int);
	var_358_int = 0;
	func_1871(var_358_int);
	@@var_349_object:SetNPCDescription(var_358_int);
	var_359_string = "";
	func_1875(var_359_string);
	@@var_349_object:SetPhoto(var_359_string);
	var_360_string = "";
	func_1877(var_360_string);
	@@var_349_object:SetPhoto2(var_360_string);
	var_361_int = 0;
	func_1997(var_361_int);
	@@var_349_object:SetPlayerName(var_361_int);
	IsOverrideActive(var_350_bool);
	var_362_bool = var_350_bool;
	if(var_362_bool != 0) {
		var_342_int = -2;
		return 8;
	}
	DoDialog(var_349_object);
	var_363_bool = 0; var_364_object = Obj();
	func_1799(Obj());
	var_365_object = var_364_object;
	func_1608(var_363_bool, var_364_object);
	var_366_object = Obj(); var_367_object = Obj();
	var_343_object = var_366_object;
	var_349_object = var_367_object;
	TaskCall(5);
	func_759(var_368_object, var_369_object, var_370_string, var_371_bool, var_366_object, var_367_object);
	TaskReturn();
	@@var_349_object:IsDialogEnd(var_352_bool);
	
Label_741:
	var_402_bool = var_352_bool == 0; //@nz
	if(var_402_bool != 0) {
		sync();
		@@var_349_object:IsDialogEnd(var_352_bool);
		goto Label_741;
	}
	var_343_object = Obj();
	func_1590();
	StopDialog(var_349_object);
	@@var_349_object:GetReturnValue((int)-1);
	var_351_int = var_342_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1703(var_156_bool, var_157_object)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = "";
	var_169_int = 0;
	func_1832(var_169_int);
	var_175_int = "d" + var_169_int;
	var_163_string = var_175_int + "m";
	var_164_int = 0;
	
Label_1712:
	if((int)1 != 0) {
		var_179_int = var_164_int + (int)1;
		var_180_int = var_163_string + var_179_int;
		@@var_157_object:HasProperty(var_180_int, var_165_bool);
		var_181_bool = var_165_bool == 0; //@nz
		if(var_181_bool != 0) {
		} else {
			var_164_int = var_164_int + (int)1;
			goto Label_1712;
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
	func_1777(var_188_bool, var_189_string);
	var_188_bool = var_156_bool;
	return 10;
	
}


func_1832(var_169_int)
{
	var_170_float = 0; var_171_float = 0;
	GetGameTime(var_171_float);
	var_173_int = 0;
	var_173_int = var_171_float / (int)24;
	var_169_int = (int)1 + var_173_int;
	return 2;
}


func_300(var_0_object, var_1_object, var_2_object, var_3_string, var_292_object, var_293_object)
{
	var_0_object = var_293_object;
	var_1_object = var_292_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_299_bool = 0; var_300_object = Obj();
		var_300_object = var_1_object;
		func_1906(var_300_object);
		if(var_299_bool != 0) {
			var_307_string = "";
			func_383(var_293_object, "Questioning");
			@@@var_0_object:SetMessage((int)531123);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531124, (int)32443, (int)32442);
			@@@var_0_object:AddReply((int)531403, (int)32745, (int)32744);
		} else {
				var_330_string = "";
				func_383(var_293_object, "Neutral");
				@@@var_0_object:SetMessage((int)531127);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531128, (int)-1, (int)32446);
				@@@var_0_object:AddReply((int)531398, (int)-1, (int)32739);
				goto Label_353;
		}
	}
Label_353:
	var_322_bool = 0;
	func_1879(var_322_bool);
	if(var_322_bool != 0) {

	Label_357:
		lshWaitForAnimEnd();
		var_323_string = var_3_string;
		if(var_323_string != 0) {
		} else {
			var_324_string = "";
			var_324_string = var_2_object;
			func_1746(var_324_string);
			goto Label_357;
	}
		PlayAnimation("all", "idle");

	Label_372:
		WaitForAnimEnd();
		var_327_string = var_3_string;
		if(var_327_string != 0) {
			goto Label_382;
		}
		PlayAnimation("all", "idle");
		goto Label_372;

	}
	goto Label_382;
	
Label_382:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x130";


func_1969(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0;
	func_1956(Obj());
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


func_1841(var_268_bool, var_269_int)
{
	var_270_int = 0;
	func_1832(var_270_int);
	var_268_bool = var_270_int == var_269_int;
	return 0;
}


func_1590()
{
	var_260_bool = 0; var_261_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_263_bool = 0;
	func_1879(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		HasAnimationTrack(var_261_bool, "head");
		var_265_bool = var_261_bool;
		if(var_265_bool == 0) goto Label_1607;
		UnlookAsync("head");
	}
Label_1607:
	return 2;
	
}


func_822(var_2_object, var_373_string)
{
	var_374_bool = 0;
	func_1879(var_374_bool);
	var_375_bool = var_374_bool == 0; //@nz
	if(var_375_bool != 0) {
		return 0;
	}
	var_376_bool = var_373_string == var_2_object;
	if(var_376_bool != 0) {
		return 0;
	}
	var_377_string = ""; var_378_bool = 0;
	var_373_string = var_377_string;
	var_380_bool = var_373_string == "";
	if(var_380_bool != 0) {
		var_378_bool = 0;
	} else {
		var_378_bool = 1;
	}
	func_1762(var_377_string, var_378_bool);
	var_2_object = var_373_string;
	return 0;
	
}


func_1847(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	var_50_int = var_47_int;
	if(var_50_int != 0) {
		"idle" = "idle" + var_47_int;
	}
	var_49_string = var_46_string;
	return 2;
}


func_1854(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_43_int = 0;
	
Label_1856:
	var_46_string = ""; var_47_int = 0;
	var_43_int = var_47_int;
	func_1847(var_46_string, var_47_int);
	HasAnimation(var_44_bool, "all", var_46_string);
	var_51_bool = var_44_bool == 0; //@nz
	if(var_51_bool != 0) {
	} else {
		var_43_int = var_43_int + (int)1;
		goto Label_1856;
	}
	var_43_int = var_40_int;
	return 4;
	
}


func_1608(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0;
	GetVariable("voice_common", var_121_int);
	var_124_int = var_121_int;
	if(var_124_int != 0) {
		var_125_bool = 0; var_126_object = Obj();
		var_115_object = var_126_object;
		func_1666(var_125_bool, var_126_object);
		var_155_bool = var_125_bool == 0; //@nz
		if(var_155_bool != 0) {
			var_156_bool = 0; var_157_object = Obj();
			var_115_object = var_157_object;
			func_1703(var_156_bool, var_157_object);
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
		func_1703(var_201_bool, var_202_object);
		var_203_bool = var_201_bool == 0; //@nz
		if(var_203_bool != 0) {
			var_204_bool = 0; var_205_object = Obj();
			var_115_object = var_205_object;
			func_1666(var_204_bool, var_205_object);
			var_206_bool = var_204_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1664;
	
Label_1664:
	var_114_bool = 1;
	return 4;
	
}


func_1482(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_1484()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1997(var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	GetVariable("branch", var_107_int);
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x7dc";
	}
	var_112_bool = var_107_int == (int)1;
	if(var_112_bool != 0) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
	return 2;
}


func_1871(var_102_int)
{
	var_102_int = 515536;
	return 0;
}


func_1873(var_101_int)
{
	var_101_int = 502861;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_216_string = "";
		func_139(var_210_object, "Neutral");
		@@@var_0_object:SetMessage((int)518009);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518010, (int)32920, (int)19143);
		@@@var_0_object:AddReply((int)531560, (int)-1, (int)32919);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_240_bool = 0;
	func_1879(var_240_bool);
	if(var_240_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_241_string = var_3_string;
		if(var_241_string != 0) {
		} else {
			var_242_string = "";
			var_242_string = var_2_object;
			func_1746(var_242_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_255_string = var_3_string;
		if(var_255_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_1875(var_103_string)
{
	var_103_string = "ui/NPC_Han.png";
	return 0;
}


func_1746(var_242_string)
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


func_1877(var_104_string)
{
	var_104_string = "ui/NPC_Han_b.png";
	return 0;
}


func_1108(var_0_object, var_1_object, var_2_object, var_3_string, var_428_object, var_429_object)
{
	var_0_object = var_429_object;
	var_1_object = var_428_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_435_string = "";
		func_1166(var_429_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_1136;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x458";
	}
Label_1136:
	var_450_bool = 0;
	func_1879(var_450_bool);
	if(var_450_bool != 0) {

	Label_1140:
		lshWaitForAnimEnd();
		var_451_string = var_3_string;
		if(var_451_string != 0) {
		} else {
			var_452_string = "";
			var_452_string = var_2_object;
			func_1746(var_452_string);
			goto Label_1140;
	}
		PlayAnimation("all", "idle");

	Label_1155:
		WaitForAnimEnd();
		var_455_string = var_3_string;
		if(var_455_string != 0) {
			goto Label_1165;
		}
		PlayAnimation("all", "idle");
		goto Label_1155;
	}
	goto Label_1165;
	
Label_1165:
	return 0;
	
}


func_1879(var_96_bool)
{
	var_96_bool = 1;
	return 0;
}


func_1237(var_0_object)
{
	var_22_bool = 0;
	func_1516(var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1246:
	func_1413();
	goto Label_1246;
}
EMIT "Return(); Pop(0)";


func_1881()
{
	SetVariable("b11q02", (int)4);
	func_1943();
	return 0;
}


func_1489(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1497(var_29_bool, var_30_cvector)
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


func_2014(var_39_object)
{
	var_40_bool = GlobalVars[1];
	var_41_bool = var_40_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_42_int = 0; var_43_object = Obj();
		var_39_object = var_43_object;
		TaskCall(0);
		func_0(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_267_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_268_bool = 0; var_269_int = 0;
	func_1841(var_268_bool, (int)11);
	if(var_268_bool != 0) {
		var_271_int = 0; var_272_object = Obj();
		var_39_object = var_272_object;
		TaskCall(2);
		func_226(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	var_340_bool = 0; var_341_int = 0;
	func_1841(var_340_bool, (int)12);
	if(var_340_bool != 0) {
		var_342_int = 0; var_343_object = Obj();
		var_39_object = var_343_object;
		TaskCall(4);
		func_678(var_344_object, var_342_int, var_343_object);
		TaskReturn();
		return 0;
	}
	var_404_int = 0; var_405_object = Obj();
	var_39_object = var_405_object;
	TaskCall(6);
	func_1027(var_406_object, var_404_int, var_405_object);
	TaskReturn();
	return 0;
}


func_1762(var_220_string, var_221_bool)
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


func_1890()
{
	func_1930();
	var_70_bool = 0; var_71_string = ""; var_72_string = "";
	func_1820(var_70_bool, "quest_b11_02", "fail");
	return 0;
}


func_1507(var_25_bool, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	@@var_26_object:GetPosition(var_28_cvector);
	var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	var_28_cvector = var_30_cvector;
	func_1497(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
	return 2;
}


func_1251(var_46_bool)
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
	func_1507(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_226(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0;
	var_0_object = var_272_object;
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0;
	var_272_object = var_283_object;
	func_1521(var_282_bool, var_283_object, (float)70.0);
	var_285_bool = var_282_bool == 0; //@nz
	if(var_285_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	CreateDialog(var_278_object);
	var_286_int = 0;
	func_1873(var_286_int);
	@@var_278_object:SetNPCName(var_286_int);
	var_287_int = 0;
	func_1871(var_287_int);
	@@var_278_object:SetNPCDescription(var_287_int);
	var_288_string = "";
	func_1875(var_288_string);
	@@var_278_object:SetPhoto(var_288_string);
	var_289_string = "";
	func_1877(var_289_string);
	@@var_278_object:SetPhoto2(var_289_string);
	var_290_int = 0;
	func_1997(var_290_int);
	@@var_278_object:SetPlayerName(var_290_int);
	IsOverrideActive(var_279_bool);
	var_291_bool = var_279_bool;
	if(var_291_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	DoDialog(var_278_object);
	var_292_object = Obj(); var_293_object = Obj();
	var_272_object = var_292_object;
	var_278_object = var_293_object;
	TaskCall(3);
	func_300(var_294_object, var_295_object, var_296_string, var_297_bool, var_292_object, var_293_object);
	TaskReturn();
	@@var_278_object:IsDialogEnd(var_281_bool);
	
Label_282:
	var_338_bool = var_281_bool == 0; //@nz
	if(var_338_bool != 0) {
		sync();
		@@var_278_object:IsDialogEnd(var_281_bool);
		goto Label_282;
	}
	var_272_object = Obj();
	func_1590();
	StopDialog(var_278_object);
	@@var_278_object:GetReturnValue((int)-1);
	var_280_int = var_271_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1900()
{
	SetVariable("oob12Han1", (int)1);
	return 0;
}


func_1516(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0;
	IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
	return 2;
}


func_1521(var_53_bool, var_54_object, var_55_float)
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
	func_1805(var_80_cvector, var_81_cvector);
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
	func_1879(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		HasAnimationTrack(var_73_bool, "head");
		var_98_bool = var_73_bool;
		if(var_98_bool == 0) goto Label_1584;
		LookAsyncCamera("head");
	}
Label_1584:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_53_bool = 1;
	return 18;
	
}


func_1906(var_299_bool)
{
	var_301_int = 0; var_302_string = "";
	func_1815(var_301_int, "b11q02");
	var_306_bool = var_301_int == (int)3;
	if(var_306_bool != 0) {
		var_299_bool = 1;
		return 0;
	}
	var_299_bool = 0;
	return 0;
}


func_1266(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_98_float, var_99_float);
	return 0;
}


func_1777(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0;
	var_152_bool = 0;
	func_1879(var_152_bool);
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


func_759(var_0_object, var_1_object, var_2_object, var_3_string, var_366_object, var_367_object)
{
	var_0_object = var_367_object;
	var_1_object = var_366_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_373_string = "";
		func_822(var_367_object, "Doubt");
		@@@var_0_object:SetMessage((int)535268);
		@@@var_0_object:ClearReplies();
		var_382_bool = 0; var_383_object = Obj();
		var_383_object = var_1_object;
		func_1918(var_383_object);
		if(var_382_bool != 0) {
			@@@var_0_object:AddReply((int)535269, (int)37004, (int)36944);
		}
		@@@var_0_object:AddReply((int)535322, (int)-1, (int)37003);
		goto Label_792;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2fb";
	}
Label_792:
	var_394_bool = 0;
	func_1879(var_394_bool);
	if(var_394_bool != 0) {

	Label_796:
		lshWaitForAnimEnd();
		var_395_string = var_3_string;
		if(var_395_string != 0) {
		} else {
			var_396_string = "";
			var_396_string = var_2_object;
			func_1746(var_396_string);
			goto Label_796;
	}
		PlayAnimation("all", "idle");

	Label_811:
		WaitForAnimEnd();
		var_399_string = var_3_string;
		if(var_399_string != 0) {
			goto Label_821;
		}
		PlayAnimation("all", "idle");
		goto Label_811;
	}
	goto Label_821;
	
Label_821:
	return 0;
	
}


func_1271(var_29_bool)
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
	func_1489(var_36_float, var_37_object);
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


func_1918(var_382_bool)
{
	var_384_int = 0; var_385_string = "";
	func_1815(var_384_int, "oob12Han1");
	var_387_bool = var_384_int == (int)0;
	if(var_387_bool != 0) {
		var_382_bool = 1;
		return 0;
	}
	var_382_bool = 0;
	return 0;
}


func_383(var_2_object, var_307_string)
{
	var_308_bool = 0;
	func_1879(var_308_bool);
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
	func_1762(var_311_string, var_312_bool);
	var_2_object = var_307_string;
	return 0;
	
}


