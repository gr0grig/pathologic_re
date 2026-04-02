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
			func_772();
			if(var_11_object == 3243) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_818();
			}
			if(var_11_object == 3244) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_824();
			}
			if(var_10_bool == 3242) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502916); //@t
				var_0_object->ClearReplies(); //@t
				bool var_46_bool;
				func_830(var_1_object);
				if(var_46_bool != 0)
					var_0_object->AddReply(502917, 3252, 3243); //@t
				bool var_57_bool;
				func_842(var_1_object);
				if(var_57_bool != 0)
					var_0_object->AddReply(502918, 3245, 3244); //@t
				var_0_object->AddReply(536324, -1, 38104); //@t
				return 0;
			}
			if(var_10_bool == 3245) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(502920, 3247, 3246); //@t
				var_0_object->AddReply(502922, 3249, 3248); //@t
				return 0;
			}
			if(var_10_bool == 3249) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502923); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(502924, -1, 3250); //@t
				var_0_object->AddReply(502925, -1, 3251); //@t
				return 0;
			}
			if(var_10_bool == 3247) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515526, -1, 16622); //@t
				return 0;
			}
			if(var_10_bool == 3252) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502926); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(502927, 3258, 3253); //@t
				var_0_object->AddReply(502928, 3255, 3254); //@t
				return 0;
			}
			if(var_10_bool == 3255) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502929); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(502931, 3258, 3257); //@t
				var_0_object->AddReply(502930, -1, 3256); //@t
				return 0;
			}
			if(var_10_bool == 3258) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(502938, 3265, 3264); //@t
				var_0_object->AddReply(502934, 3261, 3260); //@t
				var_0_object->AddReply(502933, -1, 3259); //@t
				return 0;
			}
			if(var_10_bool == 3261) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(502936, -1, 3262); //@t
				var_0_object->AddReply(502937, -1, 3263); //@t
				return 0;
			}
			if(var_10_bool == 3265) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(502940, 3261, 3266); //@t
				var_0_object->AddReply(502941, 3269, 3267); //@t
				return 0;
			}
			if(var_10_bool == 3269) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(502942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(502943, -1, 3270); //@t
				return 0;
			}
			var_3_string = true;
			bool var_156_bool;
			func_879(var_156_bool);
			if(var_156_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaa";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			@Sleep(1);
			func_465(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_530(var_9_object, var_10_object);
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
			func_492(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_761(var_4_bool);
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
	func_643(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_873(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_871(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_875(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_877(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_854(var_77_int);
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
		var_152_bool = !var_24_bool; //@nz
		if(var_152_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_153_object;
	var_15_object = var_153_object;
	func_712();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_643(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_779(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_879(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_706;
		@LookAsyncCamera("head");
	}
Label_706:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_772(void)
{
	bool var_13_bool;
	func_879(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_712(void)
{
	bool var_155_bool;
	@CameraSwitchToNormal(true);
	bool var_157_bool;
	func_879(var_157_bool);
	if(var_157_bool != 0) {
	} else {
		@HasAnimationTrack(var_155_bool, "head");
		if(var_155_bool == 0) goto Label_729;
		@UnlookAsync("head");
	}
Label_729:
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		func_147(var_87_object, "Neutral");
		var_0_object->SetMessage(502916); //@t
		var_0_object->ClearReplies(); //@t
		bool var_111_bool;
		func_830(var_1_object);
		if(var_111_bool != 0)
			var_0_object->AddReply(502917, 3252, 3243); //@t
		bool var_122_bool;
		func_842(var_1_object);
		if(var_122_bool != 0)
			var_0_object->AddReply(502918, 3245, 3244); //@t
		var_0_object->AddReply(536324, -1, 38104); //@t
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_117:
	bool var_134_bool;
	func_879(var_134_bool);
	if(var_134_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_730(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_146;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_146:
		return 0;

	}
	
}


void func_779(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_842(bool var_122_bool)
{
	int var_124_int;
	func_789(var_124_int, "ood5Whitemask2");
	if(var_124_int == 0) {
		var_122_bool = true;
		return 0;
	}
	var_122_bool = false;
}


void func_638(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


// @pe
void func_465(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_638(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_544();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_530(object var_2_object, string var_3_string)
{
	func_625();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_147(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_879(var_94_bool);
	if(!var_94_bool) //@nz
		return 0;
	if(var_93_string == var_2_object)
		return 0;
	string var_97_string; bool var_98_bool;
	var_93_string = var_97_string;
	if(var_93_string == "")
		var_98_bool = false;
	else
		var_98_bool = true;
	func_746(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_789(int var_113_int, string var_114_string)
{
	int var_116_int;
	@GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
}


void func_854(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x365";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_794(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_730(string var_136_string)
{
	bool var_140_bool; float var_141_float; float var_142_float;
	@lshHasAnimation(var_140_bool, var_136_string);
	if(var_140_bool != 0) {
		@lshGetAnimTimes(var_136_string, var_141_float, var_142_float);
		@lshPlayAnimation(var_141_float, var_142_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_136_string);
	}
	
}


void func_544(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_638(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_801(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_638(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_591;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_794(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_620;
				}
			} else if(var_28_int != 0) {
				goto Label_620;
			}
			}
					bool var_61_bool;
					func_623(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_615;
			}
		}
	Label_620:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_615:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_801(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_794(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_871(int var_74_int)
{
	var_74_int = 515569;
}


void func_873(int var_73_int)
{
	var_73_int = 503354;
}


void func_746(string var_97_string, bool var_98_bool)
{
	bool var_104_bool; float var_105_float; float var_106_float;
	@lshHasAnimation(var_104_bool, var_97_string);
	if(var_104_bool != 0) {
		@lshGetAnimTimes(var_97_string, var_105_float, var_106_float);
		@lshPlayAnimation(var_105_float, var_106_float, var_98_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_97_string);
	}
	
}


void func_875(string var_75_string)
{
	var_75_string = "ui/NPC_wmask.png";
}


void func_492(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_630(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_877(string var_76_string)
{
	var_76_string = "ui/NPC_wmask_b.png";
}


void func_879(bool var_68_bool)
{
	var_68_bool = false;
}


void func_623(bool var_61_bool)
{
	var_61_bool = true;
}


void func_625(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_818(void)
{
	@SetVariable("ood5Whitemask1", 1);
}


void func_630(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


// @pe
void func_824(void)
{
	@SetVariable("ood5Whitemask2", 1);
}


void func_761(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


// @pe
void func_830(bool var_111_bool)
{
	int var_113_int;
	func_789(var_113_int, "ood5Whitemask1");
	if(var_113_int == 0) {
		var_111_bool = true;
		return 0;
	}
	var_111_bool = false;
}


