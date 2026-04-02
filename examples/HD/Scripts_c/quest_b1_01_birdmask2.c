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
			func_710();
			if(var_10_bool == 19241) {
				bool var_16_bool;
				func_789(var_1_object);
				if(var_16_bool != 0) {
					object var_24_object; object var_25_object;
					var_24_object = var_1_object;
					var_25_object = var_0_object;
					func_778();
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
			bool var_118_bool;
			func_752(var_118_bool);
			if(var_118_bool != 0)
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
					func_699(var_4_bool);
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
	int var_73_int;
	func_746(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_744(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_748(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_750(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_801(var_77_int);
	var_21_object->SetPlayerName(var_77_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_86_object; object var_87_object;
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_158_bool = !var_24_bool; //@nz
		if(var_158_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_159_object;
	var_15_object = var_159_object;
	func_650();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_576(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
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
	func_717(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector, true);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_752(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_644;
		@LookAsyncCamera("head");
	}
Label_644:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_710(void)
{
	bool var_13_bool;
	func_752(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_650(void)
{
	bool var_161_bool;
	@CameraSwitchToNormal(true);
	bool var_163_bool;
	func_752(var_163_bool);
	if(var_163_bool != 0) {
	} else {
		@HasAnimationTrack(var_161_bool, "head");
		if(var_161_bool == 0) goto Label_667;
		@UnlookAsync("head");
	}
Label_667:
	
}


// @pe
void func_778(void)
{
	@SetVariable("oob1Birdmask2_1", 1);
	bool var_105_bool;
	func_732(var_105_bool, "quest_b1_01", "remove2");
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_789(var_1_object);
		if(var_93_bool != 0) {
			object var_101_object; object var_102_object;
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_778();
			func_157(var_87_object, "Neutral");
			var_0_object->SetMessage(518122); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(518123, 19396, 19242); //@t
		} else {
					func_157(var_87_object, "Neutral");
					var_0_object->SetMessage(520035); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520036, -1, 21221); //@t
					var_0_object->AddReply(527021, -1, 28305); //@t
		}
	}
	for(;;) {
		bool var_132_bool;
		func_752(var_132_bool);
		if(var_132_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_668(var_2_object);
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


void func_717(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
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


// @pe
void func_789(bool var_93_bool)
{
	int var_95_int;
	func_727(var_95_int, "oob1Birdmask2_1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


void func_727(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_668(string var_134_string)
{
	bool var_138_bool; float var_139_float; float var_140_float;
	@lshHasAnimation(var_138_bool, var_134_string);
	if(var_138_bool != 0) {
		@lshGetAnimTimes(var_134_string, var_139_float, var_140_float);
		@lshPlayAnimation(var_139_float, var_140_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_134_string);
	}
	
}


// @pe
void func_157(object var_2_object, string var_111_string)
{
	bool var_112_bool;
	func_752(var_112_bool);
	if(!var_112_bool) //@nz
		return 0;
	if(var_111_string == var_2_object)
		return 0;
	string var_115_string; bool var_116_bool;
	var_111_string = var_115_string;
	if(var_111_string == "")
		var_116_bool = false;
	else
		var_116_bool = true;
	func_684(var_115_string, var_116_bool);
	var_2_object = var_111_string;
	
}


void func_732(bool var_105_bool, string var_106_string, string var_107_string)
{
	object var_109_object;
	@FindActor(var_109_object, var_106_string);
	if(var_109_object == null)
		var_105_bool = false;
	@Trigger(var_109_object, var_107_string);
	var_105_bool = true;
}
EMIT "Stack[-1] = 0";


void func_801(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x330";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
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
	func_761(var_35_int);
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
				func_754(var_57_string, var_58_int);
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


void func_744(int var_74_int)
{
	var_74_int = 515571;
}


void func_746(int var_73_int)
{
	var_73_int = 504029;
}


void func_684(string var_115_string, bool var_116_bool)
{
	bool var_122_bool; float var_123_float; float var_124_float;
	@lshHasAnimation(var_122_bool, var_115_string);
	if(var_122_bool != 0) {
		@lshGetAnimTimes(var_115_string, var_123_float, var_124_float);
		@lshPlayAnimation(var_123_float, var_124_float, var_116_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_115_string);
	}
	
}


void func_748(string var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
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


void func_750(string var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
}


void func_752(bool var_68_bool)
{
	var_68_bool = false;
}


void func_561(bool var_60_bool)
{
	var_60_bool = true;
}


void func_754(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_563(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_568(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_761(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_754(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


void func_699(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


