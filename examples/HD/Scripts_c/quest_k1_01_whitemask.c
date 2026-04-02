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
			func_743();
			if(var_11_object == 27285) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_806();
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(525998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525999, 27287, 27286); //@t
				var_0_object->AddReply(526018, 27307, 27306); //@t
				return 0;
			}
			if(var_11_object == 27307) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526019); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526020, 27287, 27308); //@t
				return 0;
			}
			if(var_11_object == 27287) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526000); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526001, 27289, 27288); //@t
				var_0_object->AddReply(526243, -1, 27514); //@t
				return 0;
			}
			if(var_11_object == 27289) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526003, 27291, 27290); //@t
				var_0_object->AddReply(526244, 27291, 27515); //@t
				return 0;
			}
			if(var_11_object == 27291) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526245, 27518, 27517); //@t
				var_0_object->AddReply(526009, 27297, 27296); //@t
				return 0;
			}
			if(var_11_object == 27297) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526010); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526249, 27518, 27521); //@t
				return 0;
			}
			if(var_11_object == 27518) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526246); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526005, 27293, 27292); //@t
				var_0_object->AddReply(541743, -1, 43940); //@t
				return 0;
			}
			if(var_11_object == 27293) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526007, 27519, 27294); //@t
				return 0;
			}
			if(var_11_object == 27519) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526248, 27295, 27520); //@t
				return 0;
			}
			if(var_11_object == 27295) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526011, 27512, 27298); //@t
				return 0;
			}
			if(var_11_object == 27512) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(526241); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526242, -1, 27513); //@t
				var_0_object->AddReply(526250, -1, 27523); //@t
				return 0;
			}
			var_3_string = true;
			bool var_134_bool;
			func_780(var_134_bool);
			if(var_134_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa0";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
	
		for(;;) {
			func_436(var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		if(var_5_int != 0)
			return 0;
		func_501(var_10_bool, var_11_object);
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
			func_463(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_732(var_4_bool);
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
	func_614(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_774(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_772(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_776(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_778(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_813(var_79_int);
	var_23_object->SetPlayerName(var_79_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_88_object; object var_89_object;
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_145_bool = !var_26_bool; //@nz
		if(var_145_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_146_object;
	var_17_object = var_146_object;
	func_683();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_515(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_609(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_789(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_609(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_562;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_782(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_591;
				}
			} else if(var_28_int != 0) {
				goto Label_591;
			}
			}
					bool var_61_bool;
					func_594(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_586;
			}
		}
	Label_591:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_586:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_772(int var_76_int)
{
	var_76_int = 515569;
}


void func_774(int var_75_int)
{
	var_75_int = 503354;
}


void func_776(string var_77_string)
{
	var_77_string = "ui/NPC_wmask.png";
}


// @pe
void func_137(object var_2_object, string var_103_string)
{
	bool var_104_bool;
	func_780(var_104_bool);
	if(!var_104_bool) //@nz
		return 0;
	if(var_103_string == var_2_object)
		return 0;
	string var_107_string; bool var_108_bool;
	var_103_string = var_107_string;
	if(var_103_string == "")
		var_108_bool = false;
	else
		var_108_bool = true;
	func_717(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	
}


void func_778(string var_78_string)
{
	var_78_string = "ui/NPC_wmask_b.png";
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		object var_95_object; object var_96_object;
		var_95_object = var_88_object;
		var_96_object = var_0_object;
		func_806();
		func_137(var_89_object, "Neutral");
		var_0_object->SetMessage(525998); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525999, 27287, 27286); //@t
		var_0_object->AddReply(526018, 27307, 27306); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_127_bool;
	func_780(var_127_bool);
	if(var_127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_701(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_136;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_136:
		return 0;

	}
	
}


void func_780(bool var_70_bool)
{
	var_70_bool = false;
}


void func_717(string var_107_string, bool var_108_bool)
{
	bool var_114_bool; float var_115_float; float var_116_float;
	@lshHasAnimation(var_114_bool, var_107_string);
	if(var_114_bool != 0) {
		@lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		@lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_107_string);
	}
	
}


void func_782(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_463(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_601(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_594(bool var_61_bool)
{
	var_61_bool = true;
}


void func_596(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_789(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_782(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_601(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_732(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_609(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


// @pe
void func_806(void)
{
	bool var_97_bool;
	func_760(var_97_bool, "quest_k1_01", "remove_whitemask");
}


void func_614(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_750(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector, true);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_780(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_677;
		@LookAsyncCamera("head");
	}
Label_677:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_743(void)
{
	bool var_14_bool;
	func_780(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_683(void)
{
	bool var_148_bool;
	@CameraSwitchToNormal(true);
	bool var_150_bool;
	func_780(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		@HasAnimationTrack(var_148_bool, "head");
		if(var_148_bool == 0) goto Label_700;
		@UnlookAsync("head");
	}
Label_700:
	
}


void func_813(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x33c";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_750(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_436(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_609(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_515();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_501(object var_2_object, string var_3_string)
{
	func_596();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_760(bool var_97_bool, string var_98_string, string var_99_string)
{
	object var_101_object;
	@FindActor(var_101_object, var_98_string);
	if(var_101_object == null)
		var_97_bool = false;
	@Trigger(var_101_object, var_99_string);
	var_97_bool = true;
}
EMIT "Stack[-1] = 0";


void func_701(string var_129_string)
{
	bool var_133_bool; float var_134_float; float var_135_float;
	@lshHasAnimation(var_133_bool, var_129_string);
	if(var_133_bool != 0) {
		@lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		@lshPlayAnimation(var_134_float, var_135_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_129_string);
	}
	
}


