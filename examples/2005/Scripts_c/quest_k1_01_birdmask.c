// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(1 != 0) {
			func_769();
			if(var_11_object == 27252) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_832();
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525968); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525969, 27254, 27253); //@t
				var_0_object->AddReply(525988, 27273, 27272); //@t
				var_0_object->AddReply(525996, 27284, 27283); //@t
				return 0;
			}
			if(var_11_object == 27284) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525997); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526229, 27273, 27495); //@t
				var_0_object->AddReply(526230, 27254, 27496); //@t
				return 0;
			}
			if(var_11_object == 27273) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525990, 27254, 27274); //@t
				return 0;
			}
			if(var_11_object == 27254) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525971, 27256, 27255); //@t
				var_0_object->AddReply(526231, -1, 27499); //@t
				return 0;
			}
			if(var_11_object == 27256) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525973, 27258, 27257); //@t
				var_0_object->AddReply(526232, 27258, 27501); //@t
				return 0;
			}
			if(var_11_object == 27258) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525975, 27260, 27259); //@t
				return 0;
			}
			if(var_11_object == 27260) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525976); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525977, 27262, 27261); //@t
				return 0;
			}
			if(var_11_object == 27262) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525979, 27264, 27263); //@t
				return 0;
			}
			if(var_11_object == 27264) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525980); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525981, 27266, 27265); //@t
				return 0;
			}
			if(var_11_object == 27266) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(525982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525983, 27504, 27267); //@t
				var_0_object->AddReply(526233, 27504, 27503); //@t
				return 0;
			}
			if(var_11_object == 27504) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(526234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526235, 27507, 27506); //@t
				var_0_object->AddReply(526238, 27510, 27509); //@t
				return 0;
			}
			if(var_11_object == 27510) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(526239); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526240, -1, 27511); //@t
				return 0;
			}
			if(var_11_object == 27507) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(526236); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526237, -1, 27508); //@t
				return 0;
			}
			var_3_string = true;
			bool var_146_bool;
			func_806(var_146_bool);
			if(var_146_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
	
		for(;;) {
			func_482(var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		if(var_5_int != 0)
			return 0;
		func_547(var_10_bool, var_11_object);
		int var_16_int; object var_17_object;
		var_11_object = var_17_object;
		TaskCall(0);
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
		var_5_int = true;
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_509(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_758(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_660(var_27_bool, var_28_object, 130.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_74_int;
	func_800(var_74_int);
	var_23_object->SetNPCName(var_74_int);
	int var_75_int;
	func_798(var_75_int);
	var_23_object->SetNPCDescription(var_75_int);
	string var_76_string;
	func_802(var_76_string);
	var_23_object->SetPhoto(var_76_string);
	string var_77_string;
	func_804(var_77_string);
	var_23_object->SetPhoto2(var_77_string);
	int var_78_int;
	func_839(var_78_int);
	var_23_object->SetPlayerName(var_78_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_87_object; object var_88_object;
	var_17_object = var_87_object;
	var_23_object = var_88_object;
	TaskCall(1);
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_137_bool = !var_26_bool; //@nz
		if(var_137_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_138_object;
	var_17_object = var_138_object;
	func_728();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_769(void)
{
	bool var_14_bool;
	func_806(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_642(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_640(bool var_61_bool)
{
	var_61_bool = true;
}


// @pe
void func_832(void)
{
	bool var_96_bool;
	func_786(var_96_bool, "quest_k1_01", "remove_birdmask");
}


void func_647(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_776(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


void func_839(int var_78_int)
{
	int var_80_int;
	@GetVariable("branch", var_80_int);
	if(var_80_int == 0) {
		var_78_int = 1;
		return 2;
	EMIT "GOTO 0x356";
	}
	if(var_80_int == 1) {
		var_78_int = 2;
		return 2;
	}
	var_78_int = 3;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_87_object, object var_88_object)
{
	var_0_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		object var_94_object; object var_95_object;
		var_94_object = var_87_object;
		var_95_object = var_0_object;
		func_832();
		func_142(var_88_object, "Neutral");
		var_0_object->SetMessage(525968); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525969, 27254, 27253); //@t
		var_0_object->AddReply(525988, 27273, 27272); //@t
		var_0_object->AddReply(525996, 27284, 27283); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_124_bool;
	func_806(var_124_bool);
	if(var_124_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_745(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_141:
		return 0;

	}
	
}


// @pe
void func_142(object var_2_object, string var_102_string)
{
	bool var_103_bool;
	func_806(var_103_bool);
	if(!var_103_bool) //@nz
		return 0;
	if(var_102_string == var_2_object)
		return 0;
	string var_106_string; bool var_107_bool;
	var_102_string = var_106_string;
	if(var_102_string == "")
		var_107_bool = false;
	else
		var_107_bool = true;
	func_752(var_106_string, var_107_bool);
	var_2_object = var_102_string;
	
}


void func_655(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_786(bool var_96_bool, string var_97_string, string var_98_string)
{
	object var_100_object;
	@FindActor(var_100_object, var_97_string);
	if(var_100_object == null)
		var_96_bool = false;
	@Trigger(var_100_object, var_98_string);
	var_96_bool = true;
}
EMIT "Stack[-1] = 0";


void func_660(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_776(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector);
	var_67_float = GetByIndex(var_44_cvector, 0);
	var_68_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_67_float, var_68_float);
	bool var_69_bool;
	func_806(var_69_bool);
	if(var_69_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_722;
		@LookAsyncCamera("head");
	}
Label_722:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_728(void)
{
	bool var_140_bool;
	@CameraSwitchToNormal();
	bool var_141_bool;
	func_806(var_141_bool);
	if(var_141_bool != 0) {
	} else {
		@HasAnimationTrack(var_140_bool, "head");
		if(var_140_bool == 0) goto Label_744;
		@UnlookAsync("head");
	}
Label_744:
	
}


void func_798(int var_75_int)
{
	var_75_int = 515571;
}


void func_800(int var_74_int)
{
	var_74_int = 504029;
}


void func_802(string var_76_string)
{
	var_76_string = "ui/NPC_bmask.png";
}


// @pe
void func_547(object var_2_object, string var_3_string)
{
	func_642();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_804(string var_77_string)
{
	var_77_string = "ui/NPC_bmask_b.png";
}


// @pe
void func_482(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_655(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_561();
	if(!false) //@nz
		@KillTimer(10);
}


void func_806(bool var_69_bool)
{
	var_69_bool = false;
}


void func_808(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_745(string var_126_string)
{
	float var_129_float; float var_130_float;
	@lshGetAnimTimes(var_126_string, var_129_float, var_130_float);
	@lshPlayAnimation(var_129_float, var_130_float, false);
}


void func_815(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_808(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_752(string var_106_string, bool var_107_bool)
{
	float var_112_float; float var_113_float;
	@lshGetAnimTimes(var_106_string, var_112_float, var_113_float);
	@lshPlayAnimation(var_112_float, var_113_float, var_107_bool);
}


void func_561(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_655(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_815(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_655(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_608;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_808(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_637;
				}
			} else if(var_28_int != 0) {
				goto Label_637;
			}
			}
					bool var_61_bool;
					func_640(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_632;
			}
		}
	Label_637:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_632:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_758(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_509(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_647(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


