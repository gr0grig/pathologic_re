// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:ook11Soldier1|W:ook11Soldier2|W:k11q01|W:k11q01Cured|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1b4
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xfb vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x1be vars=object
// @EVENT_7: op=0x1f3 vars=int
// @PE: 0x4a,0xe5,0xfb,0x1be,0x1c9,0x1f3,0x20a,0x334,0x33a,0x340,0x34c,0x358,0x364

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_764();
		var_15_bool = var_10_bool == (int)29382;
		if(var_15_bool != 0) {
			var_16_bool = 0;
			var_16_bool = 0;
			var_17_bool = 0;
			var_17_bool = 0;
			var_18_bool = 0; var_19_object = Obj();
			var_19_object = var_1_object;
			func_844(var_19_object);
			if(var_18_bool != 0) {
				var_26_bool = 0; var_27_object = Obj();
				var_27_object = var_1_object;
				func_832(var_27_object);
				if(var_26_bool != 0) {
					var_17_bool = 1;
				}
			}
			if(var_17_bool != 0) {
				var_32_bool = 0; var_33_object = Obj();
				var_33_object = var_1_object;
				func_856(var_33_object);
				var_38_bool = var_32_bool == 0; //@nz
				if(var_38_bool != 0) {
					var_16_bool = 1;
				}
			}
			if(var_16_bool != 0) {
				var_39_object = Obj(); var_40_object = Obj();
				var_39_object = var_1_object;
				var_40_object = var_0_object;
				func_820();
				var_43_string = "";
				func_229(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)528020);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528021, (int)31634, (int)29383);
				@@@var_0_object:AddReply((int)530245, (int)31634, (int)31633);
				return 0;
			}
			var_67_bool = 0;
			var_67_bool = 0;
			var_68_bool = 0;
			var_68_bool = 0;
			var_69_bool = 0; var_70_object = Obj();
			var_70_object = var_1_object;
			func_868(var_70_object);
			if(var_69_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				var_76_object = var_1_object;
				func_832(var_76_object);
				if(var_75_bool != 0) {
					var_68_bool = 1;
				}
			}
			if(var_68_bool != 0) {
				var_77_bool = 0; var_78_object = Obj();
				var_78_object = var_1_object;
				func_856(var_78_object);
				if(var_77_bool != 0) {
					var_67_bool = 1;
				}
			}
			if(var_67_bool != 0) {
				var_79_object = Obj(); var_80_object = Obj();
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_826();
				var_83_string = "";
				func_229(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)528028);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530244, (int)-1, (int)31632);
				@@@var_0_object:AddReply((int)528029, (int)-1, (int)29391);
				return 0;
			}
			var_91_string = "";
			func_229(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)528022);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528023, (int)-1, (int)29385);
			@@@var_0_object:AddReply((int)530243, (int)-1, (int)31631);
			return 0;
		}
		var_100_bool = var_10_bool == (int)31634;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_229(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)530246);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530247, (int)31636, (int)31635);
			@@@var_0_object:AddReply((int)530249, (int)31636, (int)31637);
			return 0;
		}
		var_110_bool = var_10_bool == (int)31636;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_229(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)530248);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530250, (int)-1, (int)31639);
			@@@var_0_object:AddReply((int)530251, (int)-1, (int)31640);
			return 0;
		}
		var_3_string = true;
		var_119_bool = 0;
		func_794(var_119_bool);
		if(var_119_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfc";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_522(var_9_object, var_10_object);
	var_14_int = 0; var_15_object = Obj();
	var_10_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_484(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_753(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_521;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_521:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_436:
	var_10_float = 0; var_11_float = 0;
	func_457(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_436;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_635(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_788(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_786(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_790(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_792(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_880(var_77_int);
	@@var_21_object:SetPlayerName(var_77_int);
	IsOverrideActive(var_22_bool);
	var_85_bool = var_22_bool;
	if(var_85_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_86_object = Obj(); var_87_object = Obj();
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_56:
	var_194_bool = var_24_bool == 0; //@nz
	if(var_194_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_704();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_771(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_53_cvector | var_53_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_56_float;
	return 2;
}


func_522(var_2_object, var_3_string)
{
	func_617();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_781(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_786(var_74_int)
{
	var_74_int = 527721;
	return 0;
}


func_788(var_73_int)
{
	var_73_int = 527720;
	return 0;
}


func_790(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_536()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_630(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 14;
	}
	func_803((int)0);
	var_35_int = var_26_int;
	var_27_int = 0;
	
Label_550:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_27_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_630(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		irand(var_28_int, (int)3);
		var_54_bool = var_28_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = var_26_int;
			if(var_55_int == 0) goto Label_583;
			irand(var_29_int, var_26_int);
			var_57_string = ""; var_58_int = 0;
			var_29_int = var_58_int;
			func_796(var_57_string, var_58_int);
			PlayAnimation("all", var_57_string);
			WaitForAnimEnd(var_30_bool);
			var_59_bool = var_30_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
		} else {
				var_64_bool = var_28_int == (int)1;
				if(var_64_bool != 0) {
					rand(var_31_float, (int)4);
					var_67_int = var_31_float + (int)1;
					Sleep(var_67_int, var_32_bool);
					var_68_bool = var_32_bool == 0; //@nz
					if(var_68_bool != 0) {
						goto Label_612;
					}
					goto Label_601;
				}
				var_69_int = var_27_int;
				if(var_69_int == 0) goto Label_601;
				goto Label_612;
		}
		Label_601:
			var_60_bool = 0;
			func_615(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_612;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_550;

		}
	}
Label_612:
	ResetAAS();
	return 14;
	
}


func_792(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_794(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_796(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_803(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_805:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_796(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_805;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_820()
{
	SetVariable("ook11Soldier1", (int)1);
	return 0;
}


func_826()
{
	SetVariable("ook11Soldier2", (int)1);
	return 0;
}


func_704()
{
	var_196_bool = 0; var_197_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_199_bool = 0;
	func_794(var_199_bool);
	if(var_199_bool != 0) {
	} else {
		HasAnimationTrack(var_197_bool, "head");
		var_201_bool = var_197_bool;
		if(var_201_bool == 0) goto Label_721;
		UnlookAsync("head");
	}
Label_721:
	return 2;
	
}


func_832(var_103_bool)
{
	var_105_int = 0; var_106_string = "";
	func_781(var_105_int, "k11q01");
	var_108_bool = var_105_int == (int)2;
	if(var_108_bool != 0) {
		var_103_bool = 1;
		return 0;
	}
	var_103_bool = 0;
	return 0;
}


func_457(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_10_float, var_11_float)
{
	var_12_bool = 0;
	func_630(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	SetTimer((int)10, (float)1.0);
	func_536();
	var_70_bool = var_3_string == 0; //@nz
	if(var_70_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0;
		var_93_bool = 0;
		var_94_bool = 0;
		var_94_bool = 0;
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_844(var_96_object);
		if(var_95_bool != 0) {
			var_103_bool = 0; var_104_object = Obj();
			var_104_object = var_1_object;
			func_832(var_104_object);
			if(var_103_bool != 0) {
				var_94_bool = 1;
			}
		}
		if(var_94_bool != 0) {
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_856(var_110_object);
			var_115_bool = var_109_bool == 0; //@nz
			if(var_115_bool != 0) {
				var_93_bool = 1;
			}
		}
		if(var_93_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_820();
			var_120_string = "";
			func_229(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)528020);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528021, (int)31634, (int)29383);
			@@@var_0_object:AddReply((int)530245, (int)31634, (int)31633);
		} else {
				var_162_bool = 0;
				var_162_bool = 0;
				var_163_bool = 0;
				var_163_bool = 0;
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_868(var_165_object);
				if(var_164_bool != 0) {
					var_170_bool = 0; var_171_object = Obj();
					var_171_object = var_1_object;
					func_832(var_171_object);
					if(var_170_bool != 0) {
						var_163_bool = 1;
					}
				}
				if(var_163_bool != 0) {
					var_172_bool = 0; var_173_object = Obj();
					var_173_object = var_1_object;
					func_856(var_173_object);
					if(var_172_bool != 0) {
						var_162_bool = 1;
					}
				}
				if(var_162_bool != 0) {
					var_174_object = Obj(); var_175_object = Obj();
					var_174_object = var_1_object;
					var_175_object = var_0_object;
					func_826();
					var_178_string = "";
					func_229(var_87_object, "Neutral");
					@@@var_0_object:SetMessage((int)528028);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)530244, (int)-1, (int)31632);
					@@@var_0_object:AddReply((int)528029, (int)-1, (int)29391);
					goto Label_199;
				}
				var_186_string = "";
				func_229(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)528022);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528023, (int)-1, (int)29385);
				@@@var_0_object:AddReply((int)530243, (int)-1, (int)31631);
				goto Label_199;
		}
	}
Label_199:
	var_144_bool = 0;
	func_794(var_144_bool);
	if(var_144_bool != 0) {

	Label_203:
		lshWaitForAnimEnd();
		var_145_string = var_3_string;
		if(var_145_string != 0) {
		} else {
			var_146_string = "";
			var_146_string = var_2_object;
			func_722(var_146_string);
			goto Label_203;
	}
		PlayAnimation("all", "idle");

	Label_218:
		WaitForAnimEnd();
		var_159_string = var_3_string;
		if(var_159_string != 0) {
			goto Label_228;
		}
		PlayAnimation("all", "idle");
		goto Label_218;

	}
	goto Label_228;
	
Label_228:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_844(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_781(var_97_int, "ook11Soldier1");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_722(var_146_string)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0;
	lshHasAnimation(var_150_bool, var_146_string);
	var_153_bool = var_150_bool;
	if(var_153_bool != 0) {
		lshGetAnimTimes(var_146_string, var_151_float, var_152_float);
		lshPlayAnimation(var_151_float, var_152_float, (bool)0);
	} else {
		var_156_int = "Can't find lsh animation : " + var_146_string;
		Trace(var_156_int);
	}
	return 6;
	
}


func_856(var_109_bool)
{
	var_111_int = 0; var_112_string = "";
	func_781(var_111_int, "k11q01Cured");
	var_114_bool = var_111_int != (int)0;
	if(var_114_bool != 0) {
		var_109_bool = 1;
		return 0;
	}
	var_109_bool = 0;
	return 0;
}


func_738(var_124_string, var_125_bool)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0;
	lshHasAnimation(var_131_bool, var_124_string);
	var_134_bool = var_131_bool;
	if(var_134_bool != 0) {
		lshGetAnimTimes(var_124_string, var_132_float, var_133_float);
		lshPlayAnimation(var_132_float, var_133_float, var_125_bool);
	} else {
		var_136_int = "Can't find lsh animation : " + var_124_string;
		Trace(var_136_int);
	}
	return 6;
	
}


func_868(var_164_bool)
{
	var_166_int = 0; var_167_string = "";
	func_781(var_166_int, "ook11Soldier2");
	var_169_bool = var_166_int == (int)0;
	if(var_169_bool != 0) {
		var_164_bool = 1;
		return 0;
	}
	var_164_bool = 0;
	return 0;
}


func_229(var_2_object, var_120_string)
{
	var_121_bool = 0;
	func_794(var_121_bool);
	var_122_bool = var_121_bool == 0; //@nz
	if(var_122_bool != 0) {
		return 0;
	}
	var_123_bool = var_120_string == var_2_object;
	if(var_123_bool != 0) {
		return 0;
	}
	var_124_string = ""; var_125_bool = 0;
	var_120_string = var_124_string;
	var_127_bool = var_120_string == "";
	if(var_127_bool != 0) {
		var_125_bool = 0;
	} else {
		var_125_bool = 1;
	}
	func_738(var_124_string, var_125_bool);
	var_2_object = var_120_string;
	return 0;
	
}


func_484(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_622(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_615(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_617()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_622(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_880(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x37f";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_753(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0);
	@@var_27_object:GetEyesHeight(var_30_float);
	var_31_cvector = CVector(0.0, 0.0, 0.0);
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	LookAsync(var_27_object, "head", var_31_cvector);
	return 4;
}


func_630(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_635(var_25_bool, var_26_object, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0;
	@@var_26_object:GetPosition(var_38_cvector);
	@@var_26_object:GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_37_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	GetPosition(var_39_cvector);
	GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	var_47_float = var_47_float + var_37_float;
	SetByIndex(var_39_cvector, 1) = var_47_float;
	var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_int = var_40_cvector | var_40_cvector;
	var_50_float = sqrt(var_49_int);
	var_40_cvector = var_40_cvector / var_50_float;
	var_41_cvector = -var_40_cvector;
	var_51_float = var_40_cvector * var_27_float;
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_41_cvector ^ CVector(0.0, 1.0, 0.0);
	func_771(var_52_cvector, var_53_cvector);
	var_61_float = var_52_cvector * (int)25;
	var_62_int = var_51_float + var_61_float;
	var_42_cvector = var_62_int - CVector(0.0, 10.0, 0.0);
	var_43_cvector = var_39_cvector + var_42_cvector;
	IsOverrideActive(var_44_bool);
	var_64_bool = var_44_bool;
	if(var_64_bool != 0) {
		var_25_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_43_cvector, var_41_cvector, (bool)1);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	Rotate(var_66_float, var_67_float);
	var_68_bool = 0;
	func_794(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_698;
		LookAsyncCamera("head");
	}
Label_698:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_764()
{
	var_13_bool = 0;
	func_794(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


