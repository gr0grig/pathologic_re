// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,Trigger/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:oob1Birdmask2_1|W:quest_b1_01|W:remove2|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x17e
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x188 vars=object
// @EVENT_7: op=0x1bd vars=int
// @PE: 0x4a,0x9d,0xb3,0x188,0x193,0x1bd,0x1d4,0x30a,0x315

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_710();
		var_15_bool = var_10_bool == (int)19241;
		if(var_15_bool != 0) {
			var_16_bool = 0; var_17_object = Obj();
			var_17_object = var_1_object;
			func_789(var_17_object);
			if(var_16_bool != 0) {
				var_24_object = Obj(); var_25_object = Obj();
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_778();
				var_34_string = "";
				func_157(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)518122);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518123, (int)19396, (int)19242);
				return 0;
			}
			var_55_string = "";
			func_157(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)520035);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520036, (int)-1, (int)21221);
			@@@var_0_object:AddReply((int)527021, (int)-1, (int)28305);
			return 0;
		}
		var_64_bool = var_10_bool == (int)19396;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_157(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518292);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518293, (int)19398, (int)19397);
			@@@var_0_object:AddReply((int)527019, (int)19398, (int)28302);
			return 0;
		}
		var_74_bool = var_10_bool == (int)19398;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_157(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518295, (int)19400, (int)19399);
			return 0;
		}
		var_81_bool = var_10_bool == (int)19400;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_157(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518297, (int)19402, (int)19401);
			return 0;
		}
		var_88_bool = var_10_bool == (int)19402;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_157(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518299, (int)19404, (int)19403);
			return 0;
		}
		var_95_bool = var_10_bool == (int)19404;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_157(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518301, (int)19407, (int)19405);
			return 0;
		}
		var_102_bool = var_10_bool == (int)19407;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_157(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518304, (int)19409, (int)19408);
			return 0;
		}
		var_109_bool = var_10_bool == (int)19409;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_157(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518305);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518306, (int)-1, (int)19410);
			@@@var_0_object:AddReply((int)527020, (int)-1, (int)28304);
			return 0;
		}
		var_3_string = true;
		var_118_bool = 0;
		func_752(var_118_bool);
		if(var_118_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_468(var_9_object, var_10_object);
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
		func_430(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_699(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_467;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_467:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_382:
	var_10_float = 0; var_11_float = 0;
	func_403(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_382;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_581(var_25_bool, var_26_object, (float)130.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_746(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_744(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_748(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_750(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_801(var_77_int);
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
	var_158_bool = var_24_bool == 0; //@nz
	if(var_158_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_650();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_576(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_581(var_25_bool, var_26_object, var_27_float)
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
	func_717(var_52_cvector, var_53_cvector);
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
	func_752(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_644;
		LookAsyncCamera("head");
	}
Label_644:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_710()
{
	var_13_bool = 0;
	func_752(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_650()
{
	var_160_bool = 0; var_161_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_163_bool = 0;
	func_752(var_163_bool);
	if(var_163_bool != 0) {
	} else {
		HasAnimationTrack(var_161_bool, "head");
		var_165_bool = var_161_bool;
		if(var_165_bool == 0) goto Label_667;
		UnlookAsync("head");
	}
Label_667:
	return 2;
	
}


func_778()
{
	SetVariable("oob1Birdmask2_1", (int)1);
	var_105_bool = 0; var_106_string = ""; var_107_string = "";
	func_732(var_105_bool, "quest_b1_01", "remove2");
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0; var_94_object = Obj();
		var_94_object = var_1_object;
		func_789(var_94_object);
		if(var_93_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_778();
			var_111_string = "";
			func_157(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)518122);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518123, (int)19396, (int)19242);
		} else {
				var_150_string = "";
				func_157(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)520035);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520036, (int)-1, (int)21221);
				@@@var_0_object:AddReply((int)527021, (int)-1, (int)28305);
				goto Label_127;
		}
	}
Label_127:
	var_132_bool = 0;
	func_752(var_132_bool);
	if(var_132_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_133_string = var_3_string;
		if(var_133_string != 0) {
		} else {
			var_134_string = "";
			var_134_string = var_2_object;
			func_668(var_134_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_147_string = var_3_string;
		if(var_147_string != 0) {
			goto Label_156;
		}
		PlayAnimation("all", "idle");
		goto Label_146;

	}
	goto Label_156;
	
Label_156:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_717(var_52_cvector, var_53_cvector)
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


func_403(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_10_float, var_11_float)
{
	var_12_bool = 0;
	func_576(var_12_bool);
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
	func_482();
	var_70_bool = var_3_string == 0; //@nz
	if(var_70_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_468(var_2_object, var_3_string)
{
	func_563();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_789(var_93_bool)
{
	var_95_int = 0; var_96_string = "";
	func_727(var_95_int, "oob1Birdmask2_1");
	var_100_bool = var_95_int == (int)0;
	if(var_100_bool != 0) {
		var_93_bool = 1;
		return 0;
	}
	var_93_bool = 0;
	return 0;
}


func_727(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
	return 2;
}


func_668(var_134_string)
{
	var_135_bool = 0; var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_float = 0; var_140_float = 0;
	lshHasAnimation(var_138_bool, var_134_string);
	var_141_bool = var_138_bool;
	if(var_141_bool != 0) {
		lshGetAnimTimes(var_134_string, var_139_float, var_140_float);
		lshPlayAnimation(var_139_float, var_140_float, (bool)0);
	} else {
		var_144_int = "Can't find lsh animation : " + var_134_string;
		Trace(var_144_int);
	}
	return 6;
	
}


func_157(var_2_object, var_111_string)
{
	var_112_bool = 0;
	func_752(var_112_bool);
	var_113_bool = var_112_bool == 0; //@nz
	if(var_113_bool != 0) {
		return 0;
	}
	var_114_bool = var_111_string == var_2_object;
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_string = ""; var_116_bool = 0;
	var_111_string = var_115_string;
	var_118_bool = var_111_string == "";
	if(var_118_bool != 0) {
		var_116_bool = 0;
	} else {
		var_116_bool = 1;
	}
	func_684(var_115_string, var_116_bool);
	var_2_object = var_111_string;
	return 0;
	
}


func_732(var_105_bool, var_106_string, var_107_string)
{
	var_108_object = Obj(); var_109_object = Obj();
	FindActor(var_109_object, var_106_string);
	var_110_bool = var_109_object == 0; //@ne
	if(var_110_bool != 0) {
		var_105_bool = 0;
		return 2;
	}
	Trigger(var_109_object, var_107_string);
	var_105_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_801(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x330";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_482()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_576(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 14;
	}
	func_761((int)0);
	var_35_int = var_26_int;
	var_27_int = 0;
	
Label_496:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_27_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_576(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		irand(var_28_int, (int)3);
		var_54_bool = var_28_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = var_26_int;
			if(var_55_int == 0) goto Label_529;
			irand(var_29_int, var_26_int);
			var_57_string = ""; var_58_int = 0;
			var_29_int = var_58_int;
			func_754(var_57_string, var_58_int);
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
						goto Label_558;
					}
					goto Label_547;
				}
				var_69_int = var_27_int;
				if(var_69_int == 0) goto Label_547;
				goto Label_558;
		}
		Label_547:
			var_60_bool = 0;
			func_561(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_558;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_496;

		}
	}
Label_558:
	ResetAAS();
	return 14;
	
}


func_744(var_74_int)
{
	var_74_int = 515571;
	return 0;
}


func_746(var_73_int)
{
	var_73_int = 504029;
	return 0;
}


func_684(var_115_string, var_116_bool)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0;
	lshHasAnimation(var_122_bool, var_115_string);
	var_125_bool = var_122_bool;
	if(var_125_bool != 0) {
		lshGetAnimTimes(var_115_string, var_123_float, var_124_float);
		lshPlayAnimation(var_123_float, var_124_float, var_116_bool);
	} else {
		var_127_int = "Can't find lsh animation : " + var_115_string;
		Trace(var_127_int);
	}
	return 6;
	
}


func_748(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
	return 0;
}


func_430(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_568(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_750(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_752(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_561(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_754(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_563()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_568(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_761(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_763:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_754(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_763;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_699(var_27_object)
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


