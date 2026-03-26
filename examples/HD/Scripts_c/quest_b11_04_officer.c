// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:b11q04|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x165
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xae vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x16b vars=object
// @EVENT_26: op=0x19c vars=string
// @EVENT_6: op=0x1a4 vars=
// @EVENT_7: op=0x1e5 vars=int
// @PE: 0x4a,0x98,0xae,0x16b,0x19c,0x1bb,0x1e5,0x1fc,0x32c,0x335

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_750();
		var_17_bool = var_13_bool == (int)31881;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_812();
		}
		var_46_bool = var_13_bool == (int)32782;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_812();
		}
		var_50_bool = var_12_bool == (int)31874;
		if(var_50_bool != 0) {
			var_51_bool = 0; var_52_object = Obj();
			var_52_object = var_1_object;
			func_821(var_52_object);
			if(var_51_bool != 0) {
				var_59_string = "";
				func_152(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)530515);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530516, (int)32774, (int)31875);
				return 0;
			}
			var_80_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530524, (int)-1, (int)31883);
			@@@var_0_object:AddReply((int)531426, (int)-1, (int)32770);
			return 0;
		}
		var_89_bool = var_12_bool == (int)32774;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531431, (int)32772, (int)32775);
			return 0;
		}
		var_96_bool = var_12_bool == (int)32772;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531429, (int)31876, (int)32773);
			@@@var_0_object:AddReply((int)531432, (int)31876, (int)32776);
			return 0;
		}
		var_106_bool = var_12_bool == (int)31876;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530518, (int)31880, (int)31877);
			@@@var_0_object:AddReply((int)531433, (int)32779, (int)32778);
			return 0;
		}
		var_116_bool = var_12_bool == (int)32779;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531435, (int)31880, (int)32780);
			return 0;
		}
		var_123_bool = var_12_bool == (int)31880;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_152(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530522, (int)-1, (int)31881);
			@@@var_0_object:AddReply((int)531436, (int)-1, (int)32782);
			return 0;
		}
		var_3_string = true;
		var_132_bool = 0;
		func_810(var_132_bool);
		if(var_132_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaf";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_508(var_11_bool, var_12_object);
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
		func_392(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_508(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_441(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_757(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_470(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_739(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_507;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_507:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_374(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_621(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_804(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_802(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_806(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_808(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_887(var_79_int);
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
	var_150_bool = var_26_bool == 0; //@nz
	if(var_150_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_690();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_773(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_392(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_616(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_441(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_757(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_778(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_522()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_616(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_785((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_536:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_616(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_569;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_778(var_68_string, var_69_int);
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
						goto Label_598;
					}
					goto Label_587;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_587;
				goto Label_598;
		}
		Label_587:
			var_71_bool = 0;
			func_601(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_598;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_536;

		}
	}
Label_598:
	ResetAAS();
	return 14;
	
}


func_785(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_787:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_778(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_787;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_152(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_810(var_104_bool);
	var_105_bool = var_104_bool == 0; //@nz
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_bool = var_103_string == var_2_object;
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_string = ""; var_108_bool = 0;
	var_103_string = var_107_string;
	var_110_bool = var_103_string == "";
	if(var_110_bool != 0) {
		var_108_bool = 0;
	} else {
		var_108_bool = 1;
	}
	func_724(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	return 0;
	
}


func_802(var_76_int)
{
	var_76_int = 515597;
	return 0;
}


func_804(var_75_int)
{
	var_75_int = 514841;
	return 0;
}


func_806(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_808(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_810(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_812()
{
	SetVariable("b11q04", (int)3);
	func_833();
	return 0;
}


func_690()
{
	var_152_bool = 0; var_153_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_155_bool = 0;
	func_810(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		HasAnimationTrack(var_153_bool, "head");
		var_157_bool = var_153_bool;
		if(var_157_bool == 0) goto Label_707;
		UnlookAsync("head");
	}
Label_707:
	return 2;
	
}


func_821(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_773(var_97_int, "b11q04");
	var_102_bool = var_97_int == (int)2;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_441(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_443(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_616(var_23_bool);
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
	func_522();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_833()
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateDiaryEntry(var_23_object, (int)554, (int)2, (int)530529);
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0;
	var_23_object = var_28_object;
	func_859(var_27_bool, var_28_object, (int)551);
	return 2;
}
EMIT "Stack[-1] = 0";


func_708(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0;
	lshHasAnimation(var_130_bool, var_126_string);
	var_133_bool = var_130_bool;
	if(var_133_bool != 0) {
		lshGetAnimTimes(var_126_string, var_131_float, var_132_float);
		lshPlayAnimation(var_131_float, var_132_float, (bool)0);
	} else {
		var_136_int = "Can't find lsh animation : " + var_126_string;
		Trace(var_136_int);
	}
	return 6;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_821(var_96_object);
		if(var_95_bool != 0) {
			var_103_string = "";
			func_152(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)530515);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530516, (int)32774, (int)31875);
		} else {
				var_142_string = "";
				func_152(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)530523);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530524, (int)-1, (int)31883);
				@@@var_0_object:AddReply((int)531426, (int)-1, (int)32770);
				goto Label_122;
		}
	}
Label_122:
	var_124_bool = 0;
	func_810(var_124_bool);
	if(var_124_bool != 0) {

	Label_126:
		lshWaitForAnimEnd();
		var_125_string = var_3_string;
		if(var_125_string != 0) {
		} else {
			var_126_string = "";
			var_126_string = var_2_object;
			func_708(var_126_string);
			goto Label_126;
	}
		PlayAnimation("all", "idle");

	Label_141:
		WaitForAnimEnd();
		var_139_string = var_3_string;
		if(var_139_string != 0) {
			goto Label_151;
		}
		PlayAnimation("all", "idle");
		goto Label_141;

	}
	goto Label_151;
	
Label_151:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_846(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	GetDiaryRoot(var_38_object);
	var_39_bool = var_38_object == 0; //@nz
	if(var_39_bool != 0) {
		Trace("Can't retrieve diary root");
		var_36_object = 0;
		return 2;
	}
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_724(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0;
	lshHasAnimation(var_114_bool, var_107_string);
	var_117_bool = var_114_bool;
	if(var_117_bool != 0) {
		lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		var_119_int = "Can't find lsh animation : " + var_107_string;
		Trace(var_119_int);
	}
	return 6;
	
}


func_470(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_608(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_601(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_603()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_859(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0;
	func_846(Obj());
	var_36_object = var_33_object;
	@@var_33_object:Find(var_29_int, var_34_object);
	var_41_bool = var_34_object == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Can't find diary parent with id: " + var_29_int;
		Trace(var_43_int);
		var_27_bool = 0;
		return 6;
	}
	@@var_34_object:AddChild(var_28_object);
	SendWorldWndMessage((int)7);
	@@var_28_object:GetCategory(var_35_int);
	SetDiarySection(var_35_int);
	var_27_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_608(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_739(var_29_object)
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


func_616(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_621(var_27_bool, var_28_object, var_29_float)
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
	func_763(var_54_cvector, var_55_cvector);
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
	func_810(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_684;
		LookAsyncCamera("head");
	}
Label_684:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_750()
{
	var_15_bool = 0;
	func_810(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_757(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_374(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_376:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_443(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_376;
}
EMIT "Return(); Pop(4)";


func_887(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x386";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_763(var_54_cvector, var_55_cvector)
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


func_508(var_2_object, var_3_string)
{
	func_603();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


