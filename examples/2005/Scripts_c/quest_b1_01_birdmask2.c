// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_690();
			if(var_10_bool == 19241) {
				bool var_16_bool;
				func_769(var_1_object);
				if(var_16_bool != 0) {
					object var_24_object; object var_25_object;
					var_24_object = var_1_object;
					var_25_object = var_0_object;
					func_758();
					func_157(var_11_object, "Neutral");
					var_0_object->SetMessage(518122); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518123, 19396, 19242); //@t
					return 0;
				}
				func_157(var_11_object, "Neutral");
				var_0_object->SetMessage(520035); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520036, -1, 21221); //@t
				var_0_object->AddReply(527021, -1, 28305); //@t
				return 0;
			}
			if(var_10_bool == 19396) {
				func_157(var_11_object, "Neutral");
				var_0_object->SetMessage(518292); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518293, 19398, 19397); //@t
				var_0_object->AddReply(527019, 19398, 28302); //@t
				return 0;
			}
			if(var_10_bool == 19398) {
				func_157(var_11_object, "Neutral");
				var_0_object->SetMessage(518294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518295, 19400, 19399); //@t
				return 0;
			}
			if(var_10_bool == 19400) {
				func_157(var_11_object, "Neutral");
				var_0_object->SetMessage(518296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518297, 19402, 19401); //@t
				return 0;
			}
			if(var_10_bool == 19402) {
				func_157(var_11_object, "Neutral");
				var_0_object->SetMessage(518298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518299, 19404, 19403); //@t
				return 0;
			}
			if(var_10_bool == 19404) {
				func_157(var_11_object, "Neutral");
				var_0_object->SetMessage(518300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518301, 19407, 19405); //@t
				return 0;
			}
			if(var_10_bool == 19407) {
				func_157(var_11_object, "Neutral");
				var_0_object->SetMessage(518303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518304, 19409, 19408); //@t
				return 0;
			}
			if(var_10_bool == 19409) {
				func_157(var_11_object, "Neutral");
				var_0_object->SetMessage(518305); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518306, -1, 19410); //@t
				var_0_object->AddReply(527020, -1, 28304); //@t
				return 0;
			}
			var_3_string = true;
			bool var_113_bool;
			func_732(var_113_bool);
			if(var_113_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_403(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_468(var_9_object, var_10_object);
		int var_14_int; object var_15_object;
		var_10_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_430(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_679(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_581(var_25_bool, var_26_object, 130.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_726(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_724(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_728(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_730(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_781(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_147_bool = !var_24_bool; //@nz
		if(var_147_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_148_object;
	var_15_object = var_148_object;
	func_649();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_769(bool var_92_bool)
{
	int var_94_int;
	func_707(var_94_int, "oob1Birdmask2_1");
	if(var_94_int == 0) {
		var_92_bool = true;
		return 0;
	}
	var_92_bool = false;
}


void func_576(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_707(int var_94_int, string var_95_string)
{
	int var_97_int;
	@GetVariable(var_95_string, var_97_int);
	var_97_int = var_94_int;
}


void func_581(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_697(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_732(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_643;
		@LookAsyncCamera("head");
	}
Label_643:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_712(bool var_104_bool, string var_105_string, string var_106_string)
{
	object var_108_object;
	@FindActor(var_108_object, var_105_string);
	if(var_108_object == null)
		var_104_bool = false;
	@Trigger(var_108_object, var_106_string);
	var_104_bool = true;
}
EMIT "Stack[-1] = 0";


void func_649(void)
{
	bool var_150_bool;
	@CameraSwitchToNormal();
	bool var_151_bool;
	func_732(var_151_bool);
	if(var_151_bool != 0) {
	} else {
		@HasAnimationTrack(var_150_bool, "head");
		if(var_150_bool == 0) goto Label_665;
		@UnlookAsync("head");
	}
Label_665:
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool;
		func_769(var_1_object);
		if(var_92_bool != 0) {
			object var_100_object; object var_101_object;
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_758();
			func_157(var_86_object, "Neutral");
			var_0_object->SetMessage(518122); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(518123, 19396, 19242); //@t
		} else {
					func_157(var_86_object, "Neutral");
					var_0_object->SetMessage(520035); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520036, -1, 21221); //@t
					var_0_object->AddReply(527021, -1, 28305); //@t
		}
	}
	for(;;) {
		bool var_126_bool;
		func_732(var_126_bool);
		if(var_126_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_666(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_781(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x31c";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


// @pe
void func_403(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_576(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_482();
	if(!false) //@nz
		@KillTimer(10);
}


void func_724(int var_73_int)
{
	var_73_int = 515571;
}


// @pe
void func_468(object var_2_object, string var_3_string)
{
	func_563();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_726(int var_72_int)
{
	var_72_int = 504029;
}


void func_728(string var_74_string)
{
	var_74_string = "ui/NPC_bmask.png";
}


void func_666(string var_128_string)
{
	float var_131_float; float var_132_float;
	@lshGetAnimTimes(var_128_string, var_131_float, var_132_float);
	@lshPlayAnimation(var_131_float, var_132_float, false);
}


void func_730(string var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png";
}


void func_732(bool var_67_bool)
{
	var_67_bool = false;
}


// @pe
void func_157(object var_2_object, string var_110_string)
{
	bool var_111_bool;
	func_732(var_111_bool);
	if(!var_111_bool) //@nz
		return 0;
	if(var_110_string == var_2_object)
		return 0;
	string var_114_string; bool var_115_bool;
	var_110_string = var_114_string;
	if(var_110_string == "")
		var_115_bool = false;
	else
		var_115_bool = true;
	func_673(var_114_string, var_115_bool);
	var_2_object = var_110_string;
	
}


void func_734(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_673(string var_114_string, bool var_115_bool)
{
	float var_120_float; float var_121_float;
	@lshGetAnimTimes(var_114_string, var_120_float, var_121_float);
	@lshPlayAnimation(var_120_float, var_121_float, var_115_bool);
}


void func_482(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_576(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_741(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_576(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_529;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_734(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_558;
				}
			} else if(var_27_int != 0) {
				goto Label_558;
			}
			}
					bool var_60_bool;
					func_561(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_553;
			}
		}
	Label_558:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_553:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_741(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_734(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


void func_679(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_430(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_568(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_561(bool var_60_bool)
{
	var_60_bool = true;
}


void func_690(void)
{
	bool var_13_bool;
	func_732(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_563(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_758(void)
{
	@SetVariable("oob1Birdmask2_1", 1);
	bool var_104_bool;
	func_712(var_104_bool, "quest_b1_01", "remove2");
}


void func_568(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_697(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


