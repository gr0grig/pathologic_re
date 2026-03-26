// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,GetProperty/2,UnlockAchievement/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png|W:Late1|W:klara2_positioner|W:remove_klara|W:klara2_svita_positioner|W:place_svita|W:klara_stay|W:branch|W:day|W:K2S_Klara2|W:k2system_klara_day|W:k2system_klara_state|W:mt_klara2|W:ACHIEVEMENT_SOMETHING
// @GLOBALS: 0:object:
// @RUN_OP: 0x3bf
// @RUN_TASK: 6
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1b4 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x355 vars=int,int
// @TASK_6: vars=cvector,bool params=0
// @EVENT_26: op=0x3c7 vars=string
// @EVENT_6: op=0x3db vars=
// @EVENT_5: op=0x3e8 vars=
// @EVENT_7: op=0x431 vars=int
// @EVENT_45: op=0x473 vars=bool
// @EVENT_0: op=0x47f vars=object
// @PE: 0x51,0x8b,0xa1,0x15a,0x19e,0x1b4,0x2fb,0x33f,0x355,0x3bf,0x3c3,0x3e8,0x431,0x457,0x473,0x665,0x66b,0x671,0x678,0x67f,0x686,0x68b,0x695,0x69f,0x6a9,0x6b3,0x6ba,0x6c1,0x6c8

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector, var_18_bool)
{
	if((int)1 != 0) {
		func_1559();
		var_22_bool = var_17_cvector == (int)40394;
		if(var_22_bool != 0) {
			var_23_string = "";
			func_139(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538517, (int)40400, (int)40395);
			@@@var_0_object:AddReply((int)538518, (int)40397, (int)40396);
			return 0;
		}
		var_48_bool = var_17_cvector == (int)40397;
		if(var_48_bool != 0) {
			var_49_string = "";
			func_139(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538520, (int)40404, (int)40398);
			@@@var_0_object:AddReply((int)538521, (int)40404, (int)40399);
			return 0;
		}
		var_58_bool = var_17_cvector == (int)40400;
		if(var_58_bool != 0) {
			var_59_string = "";
			func_139(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538522);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538523, (int)40404, (int)40401);
			@@@var_0_object:AddReply((int)538524, (int)40397, (int)40402);
			return 0;
		}
		var_68_bool = var_17_cvector == (int)40404;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_139(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538525);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538526, (int)-1, (int)40407);
			@@@var_0_object:AddReply((int)538527, (int)-1, (int)40408);
			return 0;
		}
		var_3_string = true;
		var_77_bool = 0;
		func_1635(var_77_bool);
		if(var_77_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector, var_18_bool)
{
	if((int)1 != 0) {
		func_1559();
		var_22_bool = var_18_bool == (int)40419;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_object;
			var_24_object = var_0_object;
			func_1643();
		}
		var_34_bool = var_18_bool == (int)40477;
		if(var_34_bool != 0) {
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_1649();
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_1656();
		}
		var_49_bool = var_18_bool == (int)40478;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_1649();
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_1656();
		}
		var_55_bool = var_18_bool == (int)40479;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_1656();
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_1663();
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_1670();
		}
		var_75_bool = var_18_bool == (int)40476;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_1649();
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_1656();
		}
		var_81_bool = var_17_cvector == (int)40410;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_414(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538529);
			@@@var_0_object:ClearReplies();
			var_100_bool = 0; var_101_object = Obj();
			var_101_object = var_1_object;
			func_1685(var_100_bool, var_101_object);
			if(var_100_bool != 0) {
				@@@var_0_object:AddReply((int)538538, (int)40420, (int)40419);
			}
			@@@var_0_object:AddReply((int)538535, (int)-1, (int)40416);
			@@@var_0_object:AddReply((int)538536, (int)-1, (int)40417);
			return 0;
		}
		var_125_bool = var_17_cvector == (int)40420;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_414(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538540, (int)40426, (int)40421);
			@@@var_0_object:AddReply((int)538541, (int)40424, (int)40422);
			@@@var_0_object:AddReply((int)538542, (int)40425, (int)40423);
			return 0;
		}
		var_138_bool = var_17_cvector == (int)40425;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_414(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538544);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538587, (int)40474, (int)40473);
			@@@var_0_object:AddReply((int)538589, (int)-1, (int)40476);
			return 0;
		}
		var_148_bool = var_17_cvector == (int)40424;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_414(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538543);
			@@@var_0_object:ClearReplies();
			var_151_bool = 0;
			var_151_bool = 0;
			var_152_bool = 0; var_153_object = Obj();
			var_153_object = var_1_object;
			func_1695(var_152_bool, var_153_object);
			var_163_bool = var_152_bool == 0; //@nz
			if(var_163_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_1705(var_164_bool, var_165_object);
				var_170_bool = var_164_bool == 0; //@nz
				if(var_170_bool != 0) {
					var_151_bool = 1;
				}
			}
			if(var_151_bool != 0) {
				@@@var_0_object:AddReply((int)538592, (int)-1, (int)40479);
			}
			@@@var_0_object:AddReply((int)538593, (int)40425, (int)40480);
			return 0;
		}
		var_178_bool = var_17_cvector == (int)40426;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_414(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538585, (int)40424, (int)40470);
			@@@var_0_object:AddReply((int)538586, (int)40474, (int)40471);
			return 0;
		}
		var_188_bool = var_17_cvector == (int)40474;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_414(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538588);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538590, (int)-1, (int)40477);
			@@@var_0_object:AddReply((int)538591, (int)-1, (int)40478);
			return 0;
		}
		var_3_string = true;
		var_197_bool = 0;
		func_1635(var_197_bool);
		if(var_197_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1b5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_cvector, var_18_bool)
{
	if((int)1 != 0) {
		func_1559();
		var_22_bool = var_18_bool == (int)40461;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_object;
			var_24_object = var_0_object;
			func_1637();
		}
		var_34_bool = var_17_cvector == (int)40460;
		if(var_34_bool != 0) {
			var_35_string = "";
			func_831(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538575);
			@@@var_0_object:ClearReplies();
			var_53_bool = 0; var_54_object = Obj();
			var_54_object = var_1_object;
			func_1675(var_53_bool, var_54_object);
			if(var_53_bool != 0) {
				@@@var_0_object:AddReply((int)538576, (int)40462, (int)40461);
			}
			@@@var_0_object:AddReply((int)538581, (int)-1, (int)40466);
			@@@var_0_object:AddReply((int)538582, (int)-1, (int)40467);
			return 0;
		}
		var_78_bool = var_17_cvector == (int)40462;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_831(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538578, (int)40464, (int)40463);
			@@@var_0_object:AddReply((int)538583, (int)-1, (int)40468);
			return 0;
		}
		var_88_bool = var_17_cvector == (int)40464;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_831(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538580, (int)-1, (int)40465);
			@@@var_0_object:AddReply((int)538584, (int)-1, (int)40469);
			return 0;
		}
		var_3_string = true;
		var_97_bool = 0;
		func_1635(var_97_bool);
		if(var_97_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x356";
	
}


task_6_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool, var_17_string)
{
	var_18_bool = 0; var_19_bool = 0;
	var_21_bool = var_17_string == "cleanup";
	if(var_21_bool != 0) {
		var_1_object = true;
		IsLoaded(var_19_bool);
		var_22_bool = var_19_bool == 0; //@nz
		if(var_22_bool != 0) {
			var_23_object = Obj();
			func_1566(var_23_object);
			RemoveActor(var_23_object);
		}
	} else {
		var_27_bool = var_17_string == "restore";
		if(var_27_bool == 0) goto Label_986;
		var_1_object = false;
	}
Label_986:
	return 2;
	
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_object = var_1_object;
	if(var_17_object != 0) {
		var_18_object = Obj();
		func_1566(var_18_object);
		RemoveActor(var_18_object);
		Hold();
	}
	func_1111();
	return 0;
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	func_1126();
	return 0;
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool, var_17_int)
{
	var_19_bool = var_17_int == (int)10;
	if(var_19_bool != 0) {
		func_1069();
		var_21_bool = 0;
		var_21_bool = 0;
		var_22_bool = 0;
		func_1283(var_22_bool);
		if(var_22_bool != 0) {
			var_25_bool = 0;
			func_1038(var_25_bool);
			if(var_25_bool != 0) {
				var_21_bool = 1;
			}
		}
		if(var_21_bool != 0) {
			var_42_bool = 0;
			func_1018(var_42_bool);
			if(var_42_bool != 0) {
				var_61_bool = 0; var_62_object = Obj();
				func_1566(Obj());
				var_63_object = var_62_object;
				func_1433(var_61_bool, var_62_object);
			}
		} else {
			func_1033(var_17_int);
			func_1060();
		}
	}
	return 0;
	
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool, var_17_bool)
{
	var_18_bool = var_17_bool;
	if(var_18_bool != 0) {
		func_1060();
	} else {
		var_24_string = "";
		func_1513("Neutral");
	}
	return 0;
	
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsOverrideActive(var_19_bool);
	var_20_bool = var_19_bool == 0; //@nz
	if(var_20_bool != 0) {
		EventDisable(0);
		func_1251();
		var_21_bool = 0; var_22_object = Obj();
		var_17_object = var_22_object;
		func_1274(var_21_bool, var_22_object);
		EventEnable(0);
		var_35_object = Obj();
		var_17_object = var_35_object;
		func_1804(var_35_object);
		var_406_string = "";
		func_1513("Neutral");
		func_1069();
		func_1060();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	func_963();
	return 0;
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0;
	var_0_object = var_43_object;
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0;
	var_43_object = var_54_object;
	func_1288(var_53_bool, var_54_object, (float)70.0);
	var_100_bool = var_53_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	CreateDialog(var_49_object);
	var_101_int = 0;
	func_1629(var_101_int);
	@@var_49_object:SetNPCName(var_101_int);
	var_102_int = 0;
	func_1627(var_102_int);
	@@var_49_object:SetNPCDescription(var_102_int);
	var_103_string = "";
	func_1631(var_103_string);
	@@var_49_object:SetPhoto(var_103_string);
	var_104_string = "";
	func_1633(var_104_string);
	@@var_49_object:SetPhoto2(var_104_string);
	var_105_int = 0;
	func_1743(var_105_int);
	@@var_49_object:SetPlayerName(var_105_int);
	IsOverrideActive(var_50_bool);
	var_113_bool = var_50_bool;
	if(var_113_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	DoDialog(var_49_object);
	var_114_bool = 0; var_115_object = Obj();
	func_1566(Obj());
	var_116_object = var_115_object;
	func_1375(var_114_bool, var_115_object);
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
	func_1357();
	StopDialog(var_49_object);
	@@var_49_object:GetReturnValue((int)-1);
	var_51_int = var_42_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1018(var_42_bool)
{
	var_43_object = Obj(); var_44_object = Obj();
	FindActor(var_44_object, "player");
	var_46_bool = var_44_object == 0; //@nz
	if(var_46_bool != 0) {
		var_42_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj();
	var_44_object = var_48_object;
	func_1274(var_47_bool, var_48_object);
	var_47_bool = var_42_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1283(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
	return 2;
}


func_1799()
{
	var_65_int = 0;
	func_1789((int)1);
	return 0;
}


func_1288(var_53_bool, var_54_object, var_55_float)
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
	func_1572(var_80_cvector, var_81_cvector);
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
	func_1635(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		HasAnimationTrack(var_73_bool, "head");
		var_98_bool = var_73_bool;
		if(var_98_bool == 0) goto Label_1351;
		LookAsyncCamera("head");
	}
Label_1351:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_53_bool = 1;
	return 18;
	
}


func_1033(var_0_object)
{
	var_94_float = GetByIndex(var_0_object, 0);
	var_95_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_94_float, var_95_float);
	return 0;
}


func_1544(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0;
	var_152_bool = 0;
	func_1635(var_152_bool);
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


func_1804(var_35_object)
{
	var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0;
	GetVariable("mt_klara2", var_38_int);
	var_41_bool = var_38_int == 0; //@nz
	if(var_41_bool != 0) {
		var_42_int = 0; var_43_object = Obj();
		var_35_object = var_43_object;
		TaskCall(0);
		func_0(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		SetVariable("mt_klara2", (int)1);
		UnlockAchievement("ACHIEVEMENT_SOMETHING");
	}
	GetProperty("day", var_39_int);
	var_271_int = 0;
	func_1594(var_271_int);
	var_272_bool = var_39_int == var_271_int;
	if(var_272_bool != 0) {
		var_273_int = 0; var_274_object = Obj();
		var_35_object = var_274_object;
		TaskCall(2);
		func_272(var_275_object, var_273_int, var_274_object);
		TaskReturn();
	} else {
		var_344_int = 0; var_345_object = Obj();
		var_35_object = var_345_object;
		TaskCall(4);
		func_689(var_346_object, var_344_int, var_345_object);
		TaskReturn();
	}
	return 4;
	
}


func_1038(var_25_bool)
{
	var_26_object = Obj(); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0;
	FindActor(var_28_object, "player");
	var_31_bool = var_28_object == 0; //@nz
	if(var_31_bool != 0) {
		var_25_bool = 0;
		return 4;
	}
	var_32_float = 0; var_33_object = Obj();
	var_28_object = var_33_object;
	func_1256(var_32_float, var_33_object);
	var_41_bool = var_32_float > (float)90000.0;
	if(var_41_bool != 0) {
		var_25_bool = 0;
		return 4;
	}
	CanSee(var_29_bool, var_28_object);
	var_29_bool = var_25_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_272(var_0_object, var_273_int, var_274_object)
{
	var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0; var_280_object = Obj(); var_281_bool = 0; var_282_int = 0; var_283_bool = 0;
	var_0_object = var_274_object;
	var_284_bool = 0; var_285_object = Obj(); var_286_float = 0;
	var_274_object = var_285_object;
	func_1288(var_284_bool, var_285_object, (float)70.0);
	var_287_bool = var_284_bool == 0; //@nz
	if(var_287_bool != 0) {
		var_273_int = -2;
		return 8;
	}
	CreateDialog(var_280_object);
	var_288_int = 0;
	func_1629(var_288_int);
	@@var_280_object:SetNPCName(var_288_int);
	var_289_int = 0;
	func_1627(var_289_int);
	@@var_280_object:SetNPCDescription(var_289_int);
	var_290_string = "";
	func_1631(var_290_string);
	@@var_280_object:SetPhoto(var_290_string);
	var_291_string = "";
	func_1633(var_291_string);
	@@var_280_object:SetPhoto2(var_291_string);
	var_292_int = 0;
	func_1743(var_292_int);
	@@var_280_object:SetPlayerName(var_292_int);
	IsOverrideActive(var_281_bool);
	var_293_bool = var_281_bool;
	if(var_293_bool != 0) {
		var_273_int = -2;
		return 8;
	}
	DoDialog(var_280_object);
	var_294_object = Obj(); var_295_object = Obj();
	var_274_object = var_294_object;
	var_280_object = var_295_object;
	TaskCall(3);
	func_346(var_296_object, var_297_object, var_298_string, var_299_bool, var_294_object, var_295_object);
	TaskReturn();
	@@var_280_object:IsDialogEnd(var_283_bool);
	
Label_328:
	var_342_bool = var_283_bool == 0; //@nz
	if(var_342_bool != 0) {
		sync();
		@@var_280_object:IsDialogEnd(var_283_bool);
		goto Label_328;
	}
	var_274_object = Obj();
	func_1357();
	StopDialog(var_280_object);
	@@var_280_object:GetReturnValue((int)-1);
	var_282_int = var_273_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1559()
{
	var_20_bool = 0;
	func_1635(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1566(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj();
	self(var_118_object);
	var_118_object = var_116_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1060()
{
	var_408_float = 0; var_409_float = 0;
	rand(var_409_float, (int)8, (int)16);
	SetTimer((int)10, var_409_float);
	return 2;
}


func_1572(var_80_cvector, var_81_cvector)
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


func_1069()
{
	KillTimer((int)10);
	return 0;
}


func_1582(var_37_bool, var_38_string, var_39_string)
{
	var_40_object = Obj(); var_41_object = Obj();
	FindActor(var_41_object, var_38_string);
	var_42_bool = var_41_object == 0; //@ne
	if(var_42_bool != 0) {
		var_37_bool = 0;
		return 2;
	}
	Trigger(var_41_object, var_39_string);
	var_37_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1594(var_169_int)
{
	var_170_float = 0; var_171_float = 0;
	GetGameTime(var_171_float);
	var_173_int = 0;
	var_173_int = var_171_float / (int)24;
	var_169_int = (int)1 + var_173_int;
	return 2;
}


func_831(var_2_object, var_372_string)
{
	var_373_bool = 0;
	func_1635(var_373_bool);
	var_374_bool = var_373_bool == 0; //@nz
	if(var_374_bool != 0) {
		return 0;
	}
	var_375_bool = var_372_string == var_2_object;
	if(var_375_bool != 0) {
		return 0;
	}
	var_376_string = ""; var_377_bool = 0;
	var_372_string = var_376_string;
	var_379_bool = var_372_string == "";
	if(var_379_bool != 0) {
		var_377_bool = 0;
	} else {
		var_377_bool = 1;
	}
	func_1529(var_376_string, var_377_bool);
	var_2_object = var_372_string;
	return 0;
	
}


func_1603(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_1610(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_1612:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_1603(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_1612;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_1357()
{
	var_260_bool = 0; var_261_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_263_bool = 0;
	func_1635(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		HasAnimationTrack(var_261_bool, "head");
		var_265_bool = var_261_bool;
		if(var_265_bool == 0) goto Label_1374;
		UnlookAsync("head");
	}
Label_1374:
	return 2;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_216_string = "";
		func_139(var_210_object, "Neutral");
		@@@var_0_object:SetMessage((int)538516);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)538517, (int)40400, (int)40395);
		@@@var_0_object:AddReply((int)538518, (int)40397, (int)40396);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_240_bool = 0;
	func_1635(var_240_bool);
	if(var_240_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_241_string = var_3_string;
		if(var_241_string != 0) {
		} else {
			var_242_string = "";
			var_242_string = var_2_object;
			func_1513(var_242_string);
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


func_1111()
{
	func_1251();
	func_1069();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_346(var_0_object, var_1_object, var_2_object, var_3_string, var_294_object, var_295_object)
{
	var_0_object = var_295_object;
	var_1_object = var_294_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_301_string = "";
		func_414(var_295_object, "Neutral");
		@@@var_0_object:SetMessage((int)538529);
		@@@var_0_object:ClearReplies();
		var_310_bool = 0; var_311_object = Obj();
		var_311_object = var_1_object;
		func_1685(var_310_bool, var_311_object);
		if(var_310_bool != 0) {
			@@@var_0_object:AddReply((int)538538, (int)40420, (int)40419);
		}
		@@@var_0_object:AddReply((int)538535, (int)-1, (int)40416);
		@@@var_0_object:AddReply((int)538536, (int)-1, (int)40417);
		goto Label_384;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x15e";
	}
Label_384:
	var_334_bool = 0;
	func_1635(var_334_bool);
	if(var_334_bool != 0) {

	Label_388:
		lshWaitForAnimEnd();
		var_335_string = var_3_string;
		if(var_335_string != 0) {
		} else {
			var_336_string = "";
			var_336_string = var_2_object;
			func_1513(var_336_string);
			goto Label_388;
	}
		PlayAnimation("all", "idle");

	Label_403:
		WaitForAnimEnd();
		var_339_string = var_3_string;
		if(var_339_string != 0) {
			goto Label_413;
		}
		PlayAnimation("all", "idle");
		goto Label_403;
	}
	goto Label_413;
	
Label_413:
	return 0;
	
}


func_1627(var_102_int)
{
	var_102_int = 515540;
	return 0;
}


func_1629(var_101_int)
{
	var_101_int = 502865;
	return 0;
}


func_1375(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0;
	GetVariable("voice_common", var_121_int);
	var_124_int = var_121_int;
	if(var_124_int != 0) {
		var_125_bool = 0; var_126_object = Obj();
		var_115_object = var_126_object;
		func_1433(var_125_bool, var_126_object);
		var_155_bool = var_125_bool == 0; //@nz
		if(var_155_bool != 0) {
			var_156_bool = 0; var_157_object = Obj();
			var_115_object = var_157_object;
			func_1470(var_156_bool, var_157_object);
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
		func_1470(var_201_bool, var_202_object);
		var_203_bool = var_201_bool == 0; //@nz
		if(var_203_bool != 0) {
			var_204_bool = 0; var_205_object = Obj();
			var_115_object = var_205_object;
			func_1433(var_204_bool, var_205_object);
			var_206_bool = var_204_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1431;
	
Label_1431:
	var_114_bool = 1;
	return 4;
	
}


func_1631(var_103_string)
{
	var_103_string = "ui/NPC_Klara.png";
	return 0;
}


func_1633(var_104_string)
{
	var_104_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1635(var_96_bool)
{
	var_96_bool = 1;
	return 0;
}


func_1637()
{
	var_25_string = "";
	func_1760("Late1");
	return 0;
}


func_1126()
{
	StopGroup0();
	func_1069();
	var_18_string = "";
	func_1513("Neutral");
	func_1060();
	return 0;
}


func_1643()
{
	var_25_string = "";
	func_1760("1");
	return 0;
}


func_1649()
{
	var_37_bool = 0; var_38_string = ""; var_39_string = "";
	func_1582(var_37_bool, "klara2_positioner", "remove_klara");
	return 0;
}


func_1656()
{
	var_45_bool = 0; var_46_string = ""; var_47_string = "";
	func_1582(var_45_bool, "klara2_svita_positioner", "place_svita");
	return 0;
}


func_1663()
{
	var_60_bool = 0; var_61_string = ""; var_62_string = "";
	func_1582(var_60_bool, "klara2_positioner", "klara_stay");
	return 0;
}


func_1670()
{
	func_1799();
	return 0;
}


func_139(var_2_object, var_216_string)
{
	var_217_bool = 0;
	func_1635(var_217_bool);
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
	func_1529(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	return 0;
	
}


func_1675(var_381_bool, var_382_object)
{
	var_383_bool = 0; var_384_object = Obj();
	var_382_object = var_384_object;
	func_1715(var_384_object);
	if(var_383_bool != 0) {
		var_381_bool = 1;
		return 0;
	}
	var_381_bool = 0;
	return 0;
}


func_1685(var_310_bool, var_311_object)
{
	var_312_bool = 0; var_313_object = Obj();
	var_311_object = var_313_object;
	func_1722(var_313_object);
	if(var_312_bool != 0) {
		var_310_bool = 1;
		return 0;
	}
	var_310_bool = 0;
	return 0;
}


func_1433(var_125_bool, var_126_object)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = "";
	var_132_string = "c";
	var_133_int = 0;
	
Label_1436:
	if((int)1 != 0) {
		var_139_int = var_133_int + (int)1;
		var_140_int = var_132_string + var_139_int;
		@@var_126_object:HasProperty(var_140_int, var_134_bool);
		var_141_bool = var_134_bool == 0; //@nz
		if(var_141_bool != 0) {
		} else {
			var_133_int = var_133_int + (int)1;
			goto Label_1436;
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
	func_1544(var_148_bool, var_149_string);
	var_148_bool = var_125_bool;
	return 10;
	
}


func_1180()
{
	var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_1283(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 12;
	}
	func_1610((int)0);
	var_35_int = var_27_int;
	var_28_int = 0;
	
Label_1194:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_28_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_1283(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		var_52_bool = var_27_int == 0; //@nz
		if(var_52_bool != 0) {
			Sleep((int)3, var_29_bool);
			var_54_bool = var_29_bool == 0; //@nz
			if(var_54_bool != 0) {
			} else {
		} else {
				irand(var_30_int, var_27_int);
				irand(var_31_int, (int)5);
				var_60_bool = var_31_int != (int)0;
				if(var_60_bool != 0) {
					var_30_int = 0;
				}
				var_62_string = ""; var_63_int = 0;
				var_30_int = var_63_int;
				func_1603(var_62_string, var_63_int);
				PlayAnimation("all", var_62_string);
				WaitForAnimEnd(var_32_bool);
				var_64_bool = var_32_bool == 0; //@nz
				if(var_64_bool == 0) goto Label_1235;
				goto Label_1246;
		}
		Label_1235:
			var_55_bool = 0;
			func_1249(var_55_bool);
			var_56_bool = var_55_bool == 0; //@nz
			if(var_56_bool != 0) {
				goto Label_1246;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_1194;

		}
	}
Label_1246:
	ResetAAS();
	return 12;
	
}


func_414(var_2_object, var_301_string)
{
	var_302_bool = 0;
	func_1635(var_302_bool);
	var_303_bool = var_302_bool == 0; //@nz
	if(var_303_bool != 0) {
		return 0;
	}
	var_304_bool = var_301_string == var_2_object;
	if(var_304_bool != 0) {
		return 0;
	}
	var_305_string = ""; var_306_bool = 0;
	var_301_string = var_305_string;
	var_308_bool = var_301_string == "";
	if(var_308_bool != 0) {
		var_306_bool = 0;
	} else {
		var_306_bool = 1;
	}
	func_1529(var_305_string, var_306_bool);
	var_2_object = var_301_string;
	return 0;
	
}


func_1695(var_152_bool, var_153_object)
{
	var_154_bool = 0; var_155_object = Obj();
	var_153_object = var_155_object;
	func_1729(var_155_object);
	if(var_154_bool != 0) {
		var_152_bool = 1;
		return 0;
	}
	var_152_bool = 0;
	return 0;
}


func_1705(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj();
	var_165_object = var_167_object;
	func_1736(var_167_object);
	if(var_166_bool != 0) {
		var_164_bool = 1;
		return 0;
	}
	var_164_bool = 0;
	return 0;
}


func_689(var_0_object, var_344_int, var_345_object)
{
	var_347_object = Obj(); var_348_bool = 0; var_349_int = 0; var_350_bool = 0; var_351_object = Obj(); var_352_bool = 0; var_353_int = 0; var_354_bool = 0;
	var_0_object = var_345_object;
	var_355_bool = 0; var_356_object = Obj(); var_357_float = 0;
	var_345_object = var_356_object;
	func_1288(var_355_bool, var_356_object, (float)70.0);
	var_358_bool = var_355_bool == 0; //@nz
	if(var_358_bool != 0) {
		var_344_int = -2;
		return 8;
	}
	CreateDialog(var_351_object);
	var_359_int = 0;
	func_1629(var_359_int);
	@@var_351_object:SetNPCName(var_359_int);
	var_360_int = 0;
	func_1627(var_360_int);
	@@var_351_object:SetNPCDescription(var_360_int);
	var_361_string = "";
	func_1631(var_361_string);
	@@var_351_object:SetPhoto(var_361_string);
	var_362_string = "";
	func_1633(var_362_string);
	@@var_351_object:SetPhoto2(var_362_string);
	var_363_int = 0;
	func_1743(var_363_int);
	@@var_351_object:SetPlayerName(var_363_int);
	IsOverrideActive(var_352_bool);
	var_364_bool = var_352_bool;
	if(var_364_bool != 0) {
		var_344_int = -2;
		return 8;
	}
	DoDialog(var_351_object);
	var_365_object = Obj(); var_366_object = Obj();
	var_345_object = var_365_object;
	var_351_object = var_366_object;
	TaskCall(5);
	func_763(var_367_object, var_368_object, var_369_string, var_370_bool, var_365_object, var_366_object);
	TaskReturn();
	@@var_351_object:IsDialogEnd(var_354_bool);
	
Label_745:
	var_404_bool = var_354_bool == 0; //@nz
	if(var_404_bool != 0) {
		sync();
		@@var_351_object:IsDialogEnd(var_354_bool);
		goto Label_745;
	}
	var_345_object = Obj();
	func_1357();
	StopDialog(var_351_object);
	@@var_351_object:GetReturnValue((int)-1);
	var_353_int = var_344_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1715(var_383_bool)
{
	var_385_bool = 0; var_386_string = "";
	func_1771(var_385_bool, "Late1");
	var_385_bool = var_383_bool;
	return 0;
}


func_1722(var_312_bool)
{
	var_314_bool = 0; var_315_string = "";
	func_1771(var_314_bool, "1");
	var_314_bool = var_312_bool;
	return 0;
}


func_1470(var_156_bool, var_157_object)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = "";
	var_169_int = 0;
	func_1594(var_169_int);
	var_175_int = "d" + var_169_int;
	var_163_string = var_175_int + "m";
	var_164_int = 0;
	
Label_1479:
	if((int)1 != 0) {
		var_179_int = var_164_int + (int)1;
		var_180_int = var_163_string + var_179_int;
		@@var_157_object:HasProperty(var_180_int, var_165_bool);
		var_181_bool = var_165_bool == 0; //@nz
		if(var_181_bool != 0) {
		} else {
			var_164_int = var_164_int + (int)1;
			goto Label_1479;
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
	func_1544(var_188_bool, var_189_string);
	var_188_bool = var_156_bool;
	return 10;
	
}


func_1729(var_154_bool)
{
	var_156_int = 0;
	func_1594(var_156_int);
	var_154_bool = var_156_int == (int)6;
	return 0;
}


func_963()
{
	func_1004(var_16_bool);
	return 0;
}


func_1736(var_166_bool)
{
	var_168_int = 0;
	func_1594(var_168_int);
	var_166_bool = var_168_int == (int)7;
	return 0;
}


func_1743(var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	GetVariable("branch", var_107_int);
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x6de";
	}
	var_112_bool = var_107_int == (int)1;
	if(var_112_bool != 0) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
	return 2;
}


func_1760(var_25_string)
{
	var_26_int = 0; var_27_int = 0;
	GetProperty("day", var_27_int);
	var_30_int = "K2S_Klara2" + var_25_string;
	var_31_int = var_30_int + var_27_int;
	SetVariable(var_31_int, (int)1);
	return 2;
}


func_1249(var_55_bool)
{
	var_55_bool = 1;
	return 0;
}


func_1251()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1256(var_32_float, var_33_object)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	GetPosition(var_37_cvector);
	@@var_33_object:GetPosition(var_38_cvector);
	var_39_cvector = var_38_cvector - var_37_cvector;
	var_32_float = var_39_cvector | var_39_cvector;
	return 6;
}


func_1513(var_242_string)
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


func_1771(var_314_bool, var_315_string)
{
	var_316_int = 0; var_317_int = 0; var_318_int = 0; var_319_int = 0;
	GetProperty("day", var_318_int);
	var_322_int = "K2S_Klara2" + var_315_string;
	var_323_int = var_322_int + var_318_int;
	GetVariable(var_323_int, var_319_int);
	var_314_bool = var_319_int == (int)0;
	return 4;
}


func_1004(var_0_object)
{
	var_17_bool = 0;
	func_1283(var_17_bool);
	var_20_bool = var_17_bool == 0; //@nz
	if(var_20_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1013:
	func_1180();
	goto Label_1013;
}
EMIT "Return(); Pop(0)";


func_1264(var_25_bool, var_26_cvector)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0;
	GetPosition(var_30_cvector);
	var_31_cvector = var_26_cvector - var_30_cvector;
	var_33_float = GetByIndex(var_31_cvector, 0);
	var_34_float = GetByIndex(var_31_cvector, 2);
	Rotate(var_33_float, var_34_float, var_32_bool);
	var_32_bool = var_25_bool;
	return 6;
}


func_1783(var_68_int)
{
	var_69_int = 0; var_70_int = 0;
	GetVariable("k2system_klara_day", var_70_int);
	var_70_int = var_68_int;
	return 2;
}


func_1529(var_220_string, var_221_bool)
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


func_1274(var_21_bool, var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	@@var_22_object:GetPosition(var_24_cvector);
	var_25_bool = 0; var_26_cvector = CVector(0,0,0);
	var_24_cvector = var_26_cvector;
	func_1264(var_25_bool, var_26_cvector);
	var_25_bool = var_21_bool;
	return 2;
}


func_763(var_0_object, var_1_object, var_2_object, var_3_string, var_365_object, var_366_object)
{
	var_0_object = var_366_object;
	var_1_object = var_365_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_372_string = "";
		func_831(var_366_object, "Neutral");
		@@@var_0_object:SetMessage((int)538575);
		@@@var_0_object:ClearReplies();
		var_381_bool = 0; var_382_object = Obj();
		var_382_object = var_1_object;
		func_1675(var_381_bool, var_382_object);
		if(var_381_bool != 0) {
			@@@var_0_object:AddReply((int)538576, (int)40462, (int)40461);
		}
		@@@var_0_object:AddReply((int)538581, (int)-1, (int)40466);
		@@@var_0_object:AddReply((int)538582, (int)-1, (int)40467);
		goto Label_801;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2ff";
	}
Label_801:
	var_396_bool = 0;
	func_1635(var_396_bool);
	if(var_396_bool != 0) {

	Label_805:
		lshWaitForAnimEnd();
		var_397_string = var_3_string;
		if(var_397_string != 0) {
		} else {
			var_398_string = "";
			var_398_string = var_2_object;
			func_1513(var_398_string);
			goto Label_805;
	}
		PlayAnimation("all", "idle");

	Label_820:
		WaitForAnimEnd();
		var_401_string = var_3_string;
		if(var_401_string != 0) {
			goto Label_830;
		}
		PlayAnimation("all", "idle");
		goto Label_820;
	}
	goto Label_830;
	
Label_830:
	return 0;
	
}


func_1789(var_65_int)
{
	var_66_int = 0; var_67_int = 0;
	func_1783((int)0);
	var_68_int = var_67_int;
	var_73_int = "k2system_klara_state" + var_67_int;
	SetVariable(var_73_int, var_65_int);
	return 2;
}


