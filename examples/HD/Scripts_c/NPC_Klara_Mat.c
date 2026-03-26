// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Untrust|W:Rage|W:Patronage|W:Discontent|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Mat.png|W:ui/NPC_Mat_b.png|W:k8q01|W:quest_k8_01|W:unlock_boiny|W:fail|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x4c8
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9c vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x18d vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3a0 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x49e vars=int,int
// @TASK_8: vars=cvector params=0
// @EVENT_7: op=0x514 vars=int
// @EVENT_6: op=0x53a vars=
// @EVENT_5: op=0x549 vars=
// @EVENT_45: op=0x556 vars=bool
// @EVENT_0: op=0x562 vars=object
// @PE: 0x51,0x86,0x9c,0x129,0x177,0x18d,0x34b,0x38a,0x3a0,0x44e,0x488,0x49e,0x514,0x53a,0x556,0x72b,0x753,0x75c,0x76a,0x774,0x780,0x7ed

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1786();
		var_26_bool = var_21_bool == (int)26863;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_134(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525507);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525508, (int)30772, (int)26864);
			return 0;
		}
		var_49_bool = var_21_bool == (int)30772;
		if(var_49_bool != 0) {
			var_50_string = "";
			func_134(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529319, (int)-1, (int)30773);
			@@@var_0_object:AddReply((int)529320, (int)-1, (int)30774);
			return 0;
		}
		var_3_string = true;
		var_58_bool = 0;
		func_1873(var_58_bool);
		if(var_58_bool != 0) {
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
		func_1786();
		var_26_bool = var_22_cvector == (int)27685;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1875();
		}
		var_55_bool = var_22_cvector == (int)30467;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_1898();
		}
		var_73_bool = var_22_cvector == (int)30471;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_1898();
		}
		var_77_bool = var_22_cvector == (int)27703;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_1884();
		}
		var_94_bool = var_22_cvector == (int)30462;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_1898();
		}
		var_98_bool = var_21_bool == (int)27680;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_375(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526405);
			@@@var_0_object:ClearReplies();
			var_117_bool = 0; var_118_object = Obj();
			var_118_object = var_1_object;
			func_1908(var_118_object);
			if(var_117_bool != 0) {
				@@@var_0_object:AddReply((int)526406, (int)27682, (int)27681);
			}
			var_128_bool = 0; var_129_object = Obj();
			var_129_object = var_1_object;
			func_1920(var_129_object);
			if(var_128_bool != 0) {
				@@@var_0_object:AddReply((int)526420, (int)27696, (int)27695);
			}
			@@@var_0_object:AddReply((int)526411, (int)-1, (int)27686);
			@@@var_0_object:AddReply((int)529012, (int)-1, (int)30452);
			return 0;
		}
		var_144_bool = var_21_bool == (int)27696;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_375(var_22_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)526421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526422, (int)30457, (int)27697);
			return 0;
		}
		var_151_bool = var_21_bool == (int)30457;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_375(var_22_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)529017);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529018, (int)27698, (int)30458);
			return 0;
		}
		var_158_bool = var_21_bool == (int)27698;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_375(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526423);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529019, (int)30464, (int)30459);
			@@@var_0_object:AddReply((int)529020, (int)30468, (int)30460);
			@@@var_0_object:AddReply((int)526424, (int)30461, (int)27699);
			return 0;
		}
		var_171_bool = var_21_bool == (int)30461;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_375(var_22_cvector, "Rage");
			@@@var_0_object:SetMessage((int)529021);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529023, (int)30472, (int)30463);
			@@@var_0_object:AddReply((int)529022, (int)-1, (int)30462);
			return 0;
		}
		var_181_bool = var_21_bool == (int)30472;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_375(var_22_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)529032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529033, (int)27700, (int)30473);
			return 0;
		}
		var_188_bool = var_21_bool == (int)27700;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_375(var_22_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)526425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526426, (int)27702, (int)27701);
			return 0;
		}
		var_195_bool = var_21_bool == (int)27702;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_375(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526428, (int)-1, (int)27703);
			return 0;
		}
		var_202_bool = var_21_bool == (int)30468;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_375(var_22_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)529028);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529029, (int)30470, (int)30469);
			return 0;
		}
		var_209_bool = var_21_bool == (int)30470;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_375(var_22_cvector, "Rage");
			@@@var_0_object:SetMessage((int)529030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529031, (int)-1, (int)30471);
			return 0;
		}
		var_216_bool = var_21_bool == (int)30464;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_375(var_22_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)529024);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529025, (int)30466, (int)30465);
			return 0;
		}
		var_223_bool = var_21_bool == (int)30466;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_375(var_22_cvector, "Rage");
			@@@var_0_object:SetMessage((int)529026);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529027, (int)-1, (int)30467);
			return 0;
		}
		var_230_bool = var_21_bool == (int)27682;
		if(var_230_bool != 0) {
			@@@var_0_object:SetMessage((int)526407);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526408, (int)30453, (int)27683);
			return 0;
		}
		var_236_bool = var_21_bool == (int)30453;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_375(var_22_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)529013);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529014, (int)27684, (int)30454);
			return 0;
		}
		var_243_bool = var_21_bool == (int)27684;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_375(var_22_cvector, "Rage");
			@@@var_0_object:SetMessage((int)526409);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526410, (int)-1, (int)27685);
			return 0;
		}
		var_3_string = true;
		var_249_bool = 0;
		func_1873(var_249_bool);
		if(var_249_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x18e";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1786();
		var_26_bool = var_21_bool == (int)36960;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_906(var_22_cvector, "Neutral");
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
			func_906(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_65_bool = var_21_bool == (int)36964;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_906(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_74_bool = 0;
		func_1873(var_74_bool);
		if(var_74_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3a1";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	if((int)1 != 0) {
		func_1786();
		var_26_bool = var_21_int == (int)42548;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_1160(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_1873(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x49f";
	
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_23_bool = var_21_int == (int)10;
	if(var_23_bool != 0) {
		func_1296();
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = 0;
		func_1510(var_26_bool);
		if(var_26_bool != 0) {
			var_29_bool = 0;
			func_1265(var_29_bool);
			if(var_29_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_46_bool = 0;
			func_1245(var_46_bool);
			if(var_46_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				func_1793(Obj());
				var_67_object = var_66_object;
				func_1660(var_65_bool, var_66_object);
			}
		} else {
			func_1260(var_21_int);
			func_1287();
		}
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1478();
	func_1296();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0();
	func_1296();
	var_22_string = "";
	func_1740("Neutral");
	func_1287();
	return 0;
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		func_1287();
	} else {
		var_28_string = "";
		func_1740("Neutral");
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
		func_1478();
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_1501(var_25_bool, var_26_object);
		EventEnable(0);
		var_39_object = Obj();
		var_21_object = var_39_object;
		func_2029(var_39_object);
		var_461_string = "";
		func_1740("Neutral");
		func_1296();
		func_1287();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1231(var_20_cvector);
	return 0;
}


func_1920(var_319_bool)
{
	var_321_int = 0; var_322_string = "";
	func_1809(var_321_int, "k8q01");
	var_324_bool = var_321_int == (int)3;
	if(var_324_bool != 0) {
		var_319_bool = 1;
		return 0;
	}
	var_319_bool = 0;
	return 0;
}


func_1793(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj();
	self(var_118_object);
	var_118_object = var_116_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0;
	var_0_object = var_43_object;
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0;
	var_43_object = var_54_object;
	func_1515(var_53_bool, var_54_object, (float)70.0);
	var_100_bool = var_53_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	CreateDialog(var_49_object);
	var_101_int = 0;
	func_1867(var_101_int);
	@@var_49_object:SetNPCName(var_101_int);
	var_102_int = 0;
	func_1865(var_102_int);
	@@var_49_object:SetNPCDescription(var_102_int);
	var_103_string = "";
	func_1869(var_103_string);
	@@var_49_object:SetPhoto(var_103_string);
	var_104_string = "";
	func_1871(var_104_string);
	@@var_49_object:SetPhoto2(var_104_string);
	var_105_int = 0;
	func_2012(var_105_int);
	@@var_49_object:SetPlayerName(var_105_int);
	IsOverrideActive(var_50_bool);
	var_113_bool = var_50_bool;
	if(var_113_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	DoDialog(var_49_object);
	var_114_bool = 0; var_115_object = Obj();
	func_1793(Obj());
	var_116_object = var_115_object;
	func_1602(var_114_bool, var_115_object);
	var_209_object = Obj(); var_210_object = Obj();
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(1);
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	@@var_49_object:IsDialogEnd(var_52_bool);
	
Label_63:
	var_255_bool = var_52_bool == 0; //@nz
	if(var_255_bool != 0) {
		sync();
		@@var_49_object:IsDialogEnd(var_52_bool);
		goto Label_63;
	}
	var_43_object = Obj();
	func_1584();
	StopDialog(var_49_object);
	@@var_49_object:GetReturnValue((int)-1);
	var_51_int = var_42_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_134(var_2_object, var_216_string)
{
	var_217_bool = 0;
	func_1873(var_217_bool);
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
	func_1756(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	return 0;
	
}


func_1287()
{
	var_463_float = 0; var_464_float = 0;
	rand(var_464_float, (int)8, (int)16);
	SetTimer((int)10, var_464_float);
	return 2;
}


func_1160(var_2_object, var_436_string)
{
	var_437_bool = 0;
	func_1873(var_437_bool);
	var_438_bool = var_437_bool == 0; //@nz
	if(var_438_bool != 0) {
		return 0;
	}
	var_439_bool = var_436_string == var_2_object;
	if(var_439_bool != 0) {
		return 0;
	}
	var_440_string = ""; var_441_bool = 0;
	var_436_string = var_440_string;
	var_443_bool = var_436_string == "";
	if(var_443_bool != 0) {
		var_441_bool = 0;
	} else {
		var_441_bool = 1;
	}
	func_1756(var_440_string, var_441_bool);
	var_2_object = var_436_string;
	return 0;
	
}


func_1799(var_80_cvector, var_81_cvector)
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


func_906(var_2_object, var_377_string)
{
	var_378_bool = 0;
	func_1873(var_378_bool);
	var_379_bool = var_378_bool == 0; //@nz
	if(var_379_bool != 0) {
		return 0;
	}
	var_380_bool = var_377_string == var_2_object;
	if(var_380_bool != 0) {
		return 0;
	}
	var_381_string = ""; var_382_bool = 0;
	var_377_string = var_381_string;
	var_384_bool = var_377_string == "";
	if(var_384_bool != 0) {
		var_382_bool = 0;
	} else {
		var_382_bool = 1;
	}
	func_1756(var_381_string, var_382_bool);
	var_2_object = var_377_string;
	return 0;
	
}


func_1932()
{
	var_58_object = Obj(); var_59_object = Obj();
	CreateDiaryEntry(var_59_object, (int)530, (int)1, (int)530194);
	var_63_bool = 0; var_64_object = Obj(); var_65_int = 0;
	var_59_object = var_64_object;
	func_1984(var_63_bool, var_64_object, (int)438);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1296()
{
	KillTimer((int)10);
	return 0;
}


func_1809(var_310_int, var_311_string)
{
	var_312_int = 0; var_313_int = 0;
	GetVariable(var_311_string, var_313_int);
	var_313_int = var_310_int;
	return 2;
}


func_1814(var_66_bool, var_67_string, var_68_string)
{
	var_69_object = Obj(); var_70_object = Obj();
	FindActor(var_70_object, var_67_string);
	var_71_bool = var_70_object == 0; //@ne
	if(var_71_bool != 0) {
		var_66_bool = 0;
		return 2;
	}
	Trigger(var_70_object, var_68_string);
	var_66_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1945()
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateDiaryEntry(var_32_object, (int)440, (int)1, (int)526465);
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0;
	var_32_object = var_37_object;
	func_1984(var_36_bool, var_37_object, (int)438);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1786()
{
	var_24_bool = 0;
	func_1873(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1697(var_156_bool, var_157_object)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = "";
	var_169_int = 0;
	func_1826(var_169_int);
	var_175_int = "d" + var_169_int;
	var_163_string = var_175_int + "m";
	var_164_int = 0;
	
Label_1706:
	if((int)1 != 0) {
		var_179_int = var_164_int + (int)1;
		var_180_int = var_163_string + var_179_int;
		@@var_157_object:HasProperty(var_180_int, var_165_bool);
		var_181_bool = var_165_bool == 0; //@nz
		if(var_181_bool != 0) {
		} else {
			var_164_int = var_164_int + (int)1;
			goto Label_1706;
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
	func_1771(var_188_bool, var_189_string);
	var_188_bool = var_156_bool;
	return 10;
	
}


func_1826(var_169_int)
{
	var_170_float = 0; var_171_float = 0;
	GetGameTime(var_171_float);
	var_173_int = 0;
	var_173_int = var_171_float / (int)24;
	var_169_int = (int)1 + var_173_int;
	return 2;
}


func_1958()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)442, (int)1, (int)526467);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_1984(var_87_bool, var_88_object, (int)438);
	return 2;
}
EMIT "Stack[-1] = 0";


func_297(var_0_object, var_1_object, var_2_object, var_3_string, var_292_object, var_293_object)
{
	var_0_object = var_293_object;
	var_1_object = var_292_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_299_string = "";
		func_375(var_293_object, "Neutral");
		@@@var_0_object:SetMessage((int)526405);
		@@@var_0_object:ClearReplies();
		var_308_bool = 0; var_309_object = Obj();
		var_309_object = var_1_object;
		func_1908(var_309_object);
		if(var_308_bool != 0) {
			@@@var_0_object:AddReply((int)526406, (int)27682, (int)27681);
		}
		var_319_bool = 0; var_320_object = Obj();
		var_320_object = var_1_object;
		func_1920(var_320_object);
		if(var_319_bool != 0) {
			@@@var_0_object:AddReply((int)526420, (int)27696, (int)27695);
		}
		@@@var_0_object:AddReply((int)526411, (int)-1, (int)27686);
		@@@var_0_object:AddReply((int)529012, (int)-1, (int)30452);
		goto Label_345;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12d";
	}
Label_345:
	var_334_bool = 0;
	func_1873(var_334_bool);
	if(var_334_bool != 0) {

	Label_349:
		lshWaitForAnimEnd();
		var_335_string = var_3_string;
		if(var_335_string != 0) {
		} else {
			var_336_string = "";
			var_336_string = var_2_object;
			func_1740(var_336_string);
			goto Label_349;
	}
		PlayAnimation("all", "idle");

	Label_364:
		WaitForAnimEnd();
		var_339_string = var_3_string;
		if(var_339_string != 0) {
			goto Label_374;
		}
		PlayAnimation("all", "idle");
		goto Label_364;
	}
	goto Label_374;
	
Label_374:
	return 0;
	
}


func_1835(var_265_bool, var_266_int)
{
	var_267_int = 0;
	func_1826(var_267_int);
	var_265_bool = var_267_int == var_266_int;
	return 0;
}


func_1584()
{
	var_257_bool = 0; var_258_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_260_bool = 0;
	func_1873(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		HasAnimationTrack(var_258_bool, "head");
		var_262_bool = var_258_bool;
		if(var_262_bool == 0) goto Label_1601;
		UnlookAsync("head");
	}
Label_1601:
	return 2;
	
}


func_1841(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	var_50_int = var_47_int;
	if(var_50_int != 0) {
		"idle" = "idle" + var_47_int;
	}
	var_49_string = var_46_string;
	return 2;
}


func_1971(var_45_object)
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


func_1848(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_43_int = 0;
	
Label_1850:
	var_46_string = ""; var_47_int = 0;
	var_43_int = var_47_int;
	func_1841(var_46_string, var_47_int);
	HasAnimation(var_44_bool, "all", var_46_string);
	var_51_bool = var_44_bool == 0; //@nz
	if(var_51_bool != 0) {
	} else {
		var_43_int = var_43_int + (int)1;
		goto Label_1850;
	}
	var_43_int = var_40_int;
	return 4;
	
}


func_1984(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0;
	func_1971(Obj());
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


func_1602(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0;
	GetVariable("voice_common", var_121_int);
	var_124_int = var_121_int;
	if(var_124_int != 0) {
		var_125_bool = 0; var_126_object = Obj();
		var_115_object = var_126_object;
		func_1660(var_125_bool, var_126_object);
		var_155_bool = var_125_bool == 0; //@nz
		if(var_155_bool != 0) {
			var_156_bool = 0; var_157_object = Obj();
			var_115_object = var_157_object;
			func_1697(var_156_bool, var_157_object);
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
		func_1697(var_201_bool, var_202_object);
		var_203_bool = var_201_bool == 0; //@nz
		if(var_203_bool != 0) {
			var_204_bool = 0; var_205_object = Obj();
			var_115_object = var_205_object;
			func_1660(var_204_bool, var_205_object);
			var_206_bool = var_204_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1658;
	
Label_1658:
	var_114_bool = 1;
	return 4;
	
}


func_1476(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_1478()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1865(var_102_int)
{
	var_102_int = 515545;
	return 0;
}


func_1483(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1867(var_101_int)
{
	var_101_int = 502870;
	return 0;
}


func_1740(var_239_string)
{
	var_240_bool = 0; var_241_float = 0; var_242_float = 0; var_243_bool = 0; var_244_float = 0; var_245_float = 0;
	lshHasAnimation(var_243_bool, var_239_string);
	var_246_bool = var_243_bool;
	if(var_246_bool != 0) {
		lshGetAnimTimes(var_239_string, var_244_float, var_245_float);
		lshPlayAnimation(var_244_float, var_245_float, (bool)0);
	} else {
		var_249_int = "Can't find lsh animation : " + var_239_string;
		Trace(var_249_int);
	}
	return 6;
	
}


func_1869(var_103_string)
{
	var_103_string = "ui/NPC_Mat.png";
	return 0;
}


func_843(var_0_object, var_1_object, var_2_object, var_3_string, var_370_object, var_371_object)
{
	var_0_object = var_371_object;
	var_1_object = var_370_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_377_string = "";
		func_906(var_371_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_876;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x34f";
	}
Label_876:
	var_395_bool = 0;
	func_1873(var_395_bool);
	if(var_395_bool != 0) {

	Label_880:
		lshWaitForAnimEnd();
		var_396_string = var_3_string;
		if(var_396_string != 0) {
		} else {
			var_397_string = "";
			var_397_string = var_2_object;
			func_1740(var_397_string);
			goto Label_880;
	}
		PlayAnimation("all", "idle");

	Label_895:
		WaitForAnimEnd();
		var_400_string = var_3_string;
		if(var_400_string != 0) {
			goto Label_905;
		}
		PlayAnimation("all", "idle");
		goto Label_895;
	}
	goto Label_905;
	
Label_905:
	return 0;
	
}


func_1871(var_104_string)
{
	var_104_string = "ui/NPC_Mat_b.png";
	return 0;
}


func_1102(var_0_object, var_1_object, var_2_object, var_3_string, var_429_object, var_430_object)
{
	var_0_object = var_430_object;
	var_1_object = var_429_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_436_string = "";
		func_1160(var_430_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_1130;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x452";
	}
Label_1130:
	var_451_bool = 0;
	func_1873(var_451_bool);
	if(var_451_bool != 0) {

	Label_1134:
		lshWaitForAnimEnd();
		var_452_string = var_3_string;
		if(var_452_string != 0) {
		} else {
			var_453_string = "";
			var_453_string = var_2_object;
			func_1740(var_453_string);
			goto Label_1134;
	}
		PlayAnimation("all", "idle");

	Label_1149:
		WaitForAnimEnd();
		var_456_string = var_3_string;
		if(var_456_string != 0) {
			goto Label_1159;
		}
		PlayAnimation("all", "idle");
		goto Label_1149;
	}
	goto Label_1159;
	
Label_1159:
	return 0;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_216_string = "";
		func_134(var_210_object, "Neutral");
		@@@var_0_object:SetMessage((int)525507);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525508, (int)30772, (int)26864);
		goto Label_104;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_104:
	var_237_bool = 0;
	func_1873(var_237_bool);
	if(var_237_bool != 0) {

	Label_108:
		lshWaitForAnimEnd();
		var_238_string = var_3_string;
		if(var_238_string != 0) {
		} else {
			var_239_string = "";
			var_239_string = var_2_object;
			func_1740(var_239_string);
			goto Label_108;
	}
		PlayAnimation("all", "idle");

	Label_123:
		WaitForAnimEnd();
		var_252_string = var_3_string;
		if(var_252_string != 0) {
			goto Label_133;
		}
		PlayAnimation("all", "idle");
		goto Label_123;
	}
	goto Label_133;
	
Label_133:
	return 0;
	
}


func_1873(var_96_bool)
{
	var_96_bool = 1;
	return 0;
}


func_1875()
{
	SetVariable("k8q01", (int)2);
	func_1945();
	return 0;
}


func_1231(var_0_object)
{
	var_22_bool = 0;
	func_1510(var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1240:
	func_1407();
	goto Label_1240;
}
EMIT "Return(); Pop(0)";


func_1491(var_29_bool, var_30_cvector)
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


func_216(var_0_object, var_268_int, var_269_object)
{
	var_271_object = Obj(); var_272_bool = 0; var_273_int = 0; var_274_bool = 0; var_275_object = Obj(); var_276_bool = 0; var_277_int = 0; var_278_bool = 0;
	var_0_object = var_269_object;
	var_279_bool = 0; var_280_object = Obj(); var_281_float = 0;
	var_269_object = var_280_object;
	func_1515(var_279_bool, var_280_object, (float)70.0);
	var_282_bool = var_279_bool == 0; //@nz
	if(var_282_bool != 0) {
		var_268_int = -2;
		return 8;
	}
	CreateDialog(var_275_object);
	var_283_int = 0;
	func_1867(var_283_int);
	@@var_275_object:SetNPCName(var_283_int);
	var_284_int = 0;
	func_1865(var_284_int);
	@@var_275_object:SetNPCDescription(var_284_int);
	var_285_string = "";
	func_1869(var_285_string);
	@@var_275_object:SetPhoto(var_285_string);
	var_286_string = "";
	func_1871(var_286_string);
	@@var_275_object:SetPhoto2(var_286_string);
	var_287_int = 0;
	func_2012(var_287_int);
	@@var_275_object:SetPlayerName(var_287_int);
	IsOverrideActive(var_276_bool);
	var_288_bool = var_276_bool;
	if(var_288_bool != 0) {
		var_268_int = -2;
		return 8;
	}
	DoDialog(var_275_object);
	var_289_bool = 0; var_290_object = Obj();
	func_1793(Obj());
	var_291_object = var_290_object;
	func_1602(var_289_bool, var_290_object);
	var_292_object = Obj(); var_293_object = Obj();
	var_269_object = var_292_object;
	var_275_object = var_293_object;
	TaskCall(3);
	func_297(var_294_object, var_295_object, var_296_string, var_297_bool, var_292_object, var_293_object);
	TaskReturn();
	@@var_275_object:IsDialogEnd(var_278_bool);
	
Label_279:
	var_342_bool = var_278_bool == 0; //@nz
	if(var_342_bool != 0) {
		sync();
		@@var_275_object:IsDialogEnd(var_278_bool);
		goto Label_279;
	}
	var_269_object = Obj();
	func_1584();
	StopDialog(var_275_object);
	@@var_275_object:GetReturnValue((int)-1);
	var_277_int = var_268_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1756(var_220_string, var_221_bool)
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


func_2012(var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	GetVariable("branch", var_107_int);
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x7eb";
	}
	var_112_bool = var_107_int == (int)1;
	if(var_112_bool != 0) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
	return 2;
}


func_1884()
{
	SetVariable("k8q01", (int)4);
	func_1958();
	var_90_bool = 0; var_91_string = ""; var_92_string = "";
	func_1814(var_90_bool, "quest_k8_01", "unlock_boiny");
	return 0;
}


func_1501(var_25_bool, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	@@var_26_object:GetPosition(var_28_cvector);
	var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	var_28_cvector = var_30_cvector;
	func_1491(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
	return 2;
}


func_1245(var_46_bool)
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
	func_1501(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1510(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0;
	IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
	return 2;
}


func_1898()
{
	func_1932();
	var_66_bool = 0; var_67_string = ""; var_68_string = "";
	func_1814(var_66_bool, "quest_k8_01", "fail");
	return 0;
}


func_1515(var_53_bool, var_54_object, var_55_float)
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
	func_1799(var_80_cvector, var_81_cvector);
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
	func_1873(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		HasAnimationTrack(var_73_bool, "head");
		var_98_bool = var_73_bool;
		if(var_98_bool == 0) goto Label_1578;
		LookAsyncCamera("head");
	}
Label_1578:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_53_bool = 1;
	return 18;
	
}


func_1260(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_98_float, var_99_float);
	return 0;
}


func_2029(var_39_object)
{
	var_40_bool = GlobalVars[1];
	var_41_bool = var_40_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_42_int = 0; var_43_object = Obj();
		var_39_object = var_43_object;
		TaskCall(0);
		func_0(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_264_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_265_bool = 0; var_266_int = 0;
	func_1835(var_265_bool, (int)8);
	if(var_265_bool != 0) {
		var_268_int = 0; var_269_object = Obj();
		var_39_object = var_269_object;
		TaskCall(2);
		func_216(var_270_object, var_268_int, var_269_object);
		TaskReturn();
		return 0;
	}
	var_344_bool = 0; var_345_int = 0;
	func_1835(var_344_bool, (int)12);
	if(var_344_bool != 0) {
		var_346_int = 0; var_347_object = Obj();
		var_39_object = var_347_object;
		TaskCall(4);
		func_762(var_348_object, var_346_int, var_347_object);
		TaskReturn();
		return 0;
	}
	var_405_int = 0; var_406_object = Obj();
	var_39_object = var_406_object;
	TaskCall(6);
	func_1021(var_407_object, var_405_int, var_406_object);
	TaskReturn();
	return 0;
}


func_1771(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0;
	var_152_bool = 0;
	func_1873(var_152_bool);
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


func_1265(var_29_bool)
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
	func_1483(var_36_float, var_37_object);
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


func_1908(var_308_bool)
{
	var_310_int = 0; var_311_string = "";
	func_1809(var_310_int, "k8q01");
	var_315_bool = var_310_int == (int)1;
	if(var_315_bool != 0) {
		var_308_bool = 1;
		return 0;
	}
	var_308_bool = 0;
	return 0;
}


func_375(var_2_object, var_299_string)
{
	var_300_bool = 0;
	func_1873(var_300_bool);
	var_301_bool = var_300_bool == 0; //@nz
	if(var_301_bool != 0) {
		return 0;
	}
	var_302_bool = var_299_string == var_2_object;
	if(var_302_bool != 0) {
		return 0;
	}
	var_303_string = ""; var_304_bool = 0;
	var_299_string = var_303_string;
	var_306_bool = var_299_string == "";
	if(var_306_bool != 0) {
		var_304_bool = 0;
	} else {
		var_304_bool = 1;
	}
	func_1756(var_303_string, var_304_bool);
	var_2_object = var_299_string;
	return 0;
	
}


func_762(var_0_object, var_346_int, var_347_object)
{
	var_349_object = Obj(); var_350_bool = 0; var_351_int = 0; var_352_bool = 0; var_353_object = Obj(); var_354_bool = 0; var_355_int = 0; var_356_bool = 0;
	var_0_object = var_347_object;
	var_357_bool = 0; var_358_object = Obj(); var_359_float = 0;
	var_347_object = var_358_object;
	func_1515(var_357_bool, var_358_object, (float)70.0);
	var_360_bool = var_357_bool == 0; //@nz
	if(var_360_bool != 0) {
		var_346_int = -2;
		return 8;
	}
	CreateDialog(var_353_object);
	var_361_int = 0;
	func_1867(var_361_int);
	@@var_353_object:SetNPCName(var_361_int);
	var_362_int = 0;
	func_1865(var_362_int);
	@@var_353_object:SetNPCDescription(var_362_int);
	var_363_string = "";
	func_1869(var_363_string);
	@@var_353_object:SetPhoto(var_363_string);
	var_364_string = "";
	func_1871(var_364_string);
	@@var_353_object:SetPhoto2(var_364_string);
	var_365_int = 0;
	func_2012(var_365_int);
	@@var_353_object:SetPlayerName(var_365_int);
	IsOverrideActive(var_354_bool);
	var_366_bool = var_354_bool;
	if(var_366_bool != 0) {
		var_346_int = -2;
		return 8;
	}
	DoDialog(var_353_object);
	var_367_bool = 0; var_368_object = Obj();
	func_1793(Obj());
	var_369_object = var_368_object;
	func_1602(var_367_bool, var_368_object);
	var_370_object = Obj(); var_371_object = Obj();
	var_347_object = var_370_object;
	var_353_object = var_371_object;
	TaskCall(5);
	func_843(var_372_object, var_373_object, var_374_string, var_375_bool, var_370_object, var_371_object);
	TaskReturn();
	@@var_353_object:IsDialogEnd(var_356_bool);
	
Label_825:
	var_403_bool = var_356_bool == 0; //@nz
	if(var_403_bool != 0) {
		sync();
		@@var_353_object:IsDialogEnd(var_356_bool);
		goto Label_825;
	}
	var_347_object = Obj();
	func_1584();
	StopDialog(var_353_object);
	@@var_353_object:GetReturnValue((int)-1);
	var_355_int = var_346_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1660(var_125_bool, var_126_object)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = "";
	var_132_string = "c";
	var_133_int = 0;
	
Label_1663:
	if((int)1 != 0) {
		var_139_int = var_133_int + (int)1;
		var_140_int = var_132_string + var_139_int;
		@@var_126_object:HasProperty(var_140_int, var_134_bool);
		var_141_bool = var_134_bool == 0; //@nz
		if(var_141_bool != 0) {
		} else {
			var_133_int = var_133_int + (int)1;
			goto Label_1663;
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
	func_1771(var_148_bool, var_149_string);
	var_148_bool = var_125_bool;
	return 10;
	
}


func_1021(var_0_object, var_405_int, var_406_object)
{
	var_408_object = Obj(); var_409_bool = 0; var_410_int = 0; var_411_bool = 0; var_412_object = Obj(); var_413_bool = 0; var_414_int = 0; var_415_bool = 0;
	var_0_object = var_406_object;
	var_416_bool = 0; var_417_object = Obj(); var_418_float = 0;
	var_406_object = var_417_object;
	func_1515(var_416_bool, var_417_object, (float)70.0);
	var_419_bool = var_416_bool == 0; //@nz
	if(var_419_bool != 0) {
		var_405_int = -2;
		return 8;
	}
	CreateDialog(var_412_object);
	var_420_int = 0;
	func_1867(var_420_int);
	@@var_412_object:SetNPCName(var_420_int);
	var_421_int = 0;
	func_1865(var_421_int);
	@@var_412_object:SetNPCDescription(var_421_int);
	var_422_string = "";
	func_1869(var_422_string);
	@@var_412_object:SetPhoto(var_422_string);
	var_423_string = "";
	func_1871(var_423_string);
	@@var_412_object:SetPhoto2(var_423_string);
	var_424_int = 0;
	func_2012(var_424_int);
	@@var_412_object:SetPlayerName(var_424_int);
	IsOverrideActive(var_413_bool);
	var_425_bool = var_413_bool;
	if(var_425_bool != 0) {
		var_405_int = -2;
		return 8;
	}
	DoDialog(var_412_object);
	var_426_bool = 0; var_427_object = Obj();
	func_1793(Obj());
	var_428_object = var_427_object;
	func_1602(var_426_bool, var_427_object);
	var_429_object = Obj(); var_430_object = Obj();
	var_406_object = var_429_object;
	var_412_object = var_430_object;
	TaskCall(7);
	func_1102(var_431_object, var_432_object, var_433_string, var_434_bool, var_429_object, var_430_object);
	TaskReturn();
	@@var_412_object:IsDialogEnd(var_415_bool);
	
Label_1084:
	var_459_bool = var_415_bool == 0; //@nz
	if(var_459_bool != 0) {
		sync();
		@@var_412_object:IsDialogEnd(var_415_bool);
		goto Label_1084;
	}
	var_406_object = Obj();
	func_1584();
	StopDialog(var_412_object);
	@@var_412_object:GetReturnValue((int)-1);
	var_414_int = var_405_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1407()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0;
	WaitForAnimEnd();
	var_38_bool = 0;
	func_1510(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 12;
	}
	func_1848((int)0);
	var_40_int = var_32_int;
	var_33_int = 0;
	
Label_1421:
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_33_int < (int)5;
	if(var_55_bool != 0) {
		var_56_bool = 0;
		func_1510(var_56_bool);
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
				func_1841(var_67_string, var_68_int);
				PlayAnimation("all", var_67_string);
				WaitForAnimEnd(var_37_bool);
				var_69_bool = var_37_bool == 0; //@nz
				if(var_69_bool == 0) goto Label_1462;
				goto Label_1473;
		}
		Label_1462:
			var_60_bool = 0;
			func_1476(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_1473;
			}
			ResetAAS();
			var_33_int = var_33_int + (int)1;
			goto Label_1421;

		}
	}
Label_1473:
	ResetAAS();
	return 12;
	
}


