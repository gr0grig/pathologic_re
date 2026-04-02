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
			func_603();
			if(var_11_object == 4374) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_659();
			}
			if(var_11_object == 4376) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_665();
			}
			if(var_10_bool == 4373) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(504018); //@t
				var_0_object->ClearReplies(); //@t
				bool var_41_bool;
				func_671(var_1_object);
				if(var_41_bool != 0)
					var_0_object->AddReply(504019, 4375, 4374); //@t
				bool var_52_bool;
				func_683(var_1_object);
				if(var_52_bool != 0)
					var_0_object->AddReply(504021, 4377, 4376); //@t
				var_0_object->AddReply(536329, -1, 38110); //@t
				return 0;
			}
			if(var_10_bool == 4377) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(504022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504023, -1, 4378); //@t
				var_0_object->AddReply(504024, -1, 4379); //@t
				var_0_object->AddReply(504025, -1, 4380); //@t
				return 0;
			}
			if(var_10_bool == 4375) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(504020); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504026, -1, 4381); //@t
				var_0_object->AddReply(504027, -1, 4382); //@t
				return 0;
			}
			var_3_string = true;
			bool var_87_bool;
			func_657(var_87_bool);
			if(var_87_bool != 0)
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
	
		while(true != 0) {
			@Sleep(1);
			func_316(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_381(var_9_object, var_10_object);
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
			func_343(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_592(var_4_bool);
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
	func_494(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_651(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_649(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_653(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_655(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_695(var_76_int);
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
		var_141_bool = !var_24_bool; //@nz
		if(var_141_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_142_object;
	var_15_object = var_142_object;
	func_562();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_579(string var_130_string)
{
	float var_133_float; float var_134_float;
	@lshGetAnimTimes(var_130_string, var_133_float, var_134_float);
	@lshPlayAnimation(var_133_float, var_134_float, false);
}


void func_649(int var_73_int)
{
	var_73_int = 515564;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		func_147(var_86_object, "Neutral");
		var_0_object->SetMessage(504018); //@t
		var_0_object->ClearReplies(); //@t
		bool var_105_bool;
		func_671(var_1_object);
		if(var_105_bool != 0)
			var_0_object->AddReply(504019, 4375, 4374); //@t
		bool var_116_bool;
		func_683(var_1_object);
		if(var_116_bool != 0)
			var_0_object->AddReply(504021, 4377, 4376); //@t
		var_0_object->AddReply(536329, -1, 38110); //@t
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_117:
	bool var_128_bool;
	func_657(var_128_bool);
	if(var_128_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_579(var_2_object);
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


void func_651(int var_72_int)
{
	var_72_int = 503349;
}


void func_395(void)
{
	int var_30_int; int var_31_int; bool var_32_bool; float var_33_float; bool var_34_bool;
	@WaitForAnimEnd();
	bool var_35_bool;
	func_489(var_35_bool);
	if(!var_35_bool) //@nz
		return 14;
	int var_37_int;
	func_632(var_37_int);
	int var_28_int;
	var_37_int = var_28_int;
	int var_29_int = 0;
	
	for(;;) {
		bool var_50_bool = false;
		if(var_29_int < 5) {
			bool var_53_bool;
			func_489(var_53_bool);
			if(var_53_bool != 0)
				var_50_bool = true;
		}
		if(var_50_bool != 0) {
			@irand(var_30_int, 3);
			if(var_30_int == 0) {
				if(var_28_int == 0) goto Label_442;
				@irand(var_31_int, var_28_int);
				string var_59_string; int var_60_int;
				var_31_int = var_60_int;
				func_625(var_59_string, var_60_int);
				@PlayAnimation("all", var_59_string);
				@WaitForAnimEnd(var_32_bool);
				if(!var_32_bool) { //@nz
				} else {
			} else {
			if(var_30_int == 1) {
				@rand(var_33_float, 4);
				@Sleep((var_33_float + 1), var_34_bool);
				if(!var_34_bool) { //@nz
					goto Label_471;
				}
			} else if(var_29_int != 0) {
				goto Label_471;
			}
			}
					bool var_62_bool;
					func_474(var_62_bool);
					var_63_bool = !var_62_bool; //@nz
					if(var_63_bool == 0) goto Label_466;
			}
		}
	Label_471:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_466:
		@ResetAAS();
		var_29_int += 1;
	}
	
}


void func_653(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png";
}


void func_586(string var_96_string, bool var_97_bool)
{
	float var_102_float; float var_103_float;
	@lshGetAnimTimes(var_96_string, var_102_float, var_103_float);
	@lshPlayAnimation(var_102_float, var_103_float, var_97_bool);
}


void func_655(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png";
}


void func_592(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_657(bool var_67_bool)
{
	var_67_bool = false;
}


// @pe
void func_147(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_657(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string; bool var_97_bool;
	var_92_string = var_96_string;
	if(var_92_string == "")
		var_97_bool = false;
	else
		var_97_bool = true;
	func_586(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


// @pe
void func_659(void)
{
	@SetVariable("ood6Unosha1", 1);
}


void func_343(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_481(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_665(void)
{
	@SetVariable("ood6Unosha2", 1);
}


void func_474(bool var_62_bool)
{
	var_62_bool = true;
}


void func_603(void)
{
	bool var_13_bool;
	func_657(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_476(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_671(bool var_105_bool)
{
	int var_107_int;
	func_620(var_107_int, "ood6Unosha1");
	if(var_107_int == 0) {
		var_105_bool = true;
		return 0;
	}
	var_105_bool = false;
}


void func_481(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_610(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_489(bool var_14_bool)
{
	bool var_16_bool;
	@IsLoaded(var_16_bool);
	var_16_bool = var_14_bool;
}


// @pe
void func_683(bool var_116_bool)
{
	int var_118_int;
	func_620(var_118_int, "ood6Unosha2");
	if(var_118_int == 0) {
		var_116_bool = true;
		return 0;
	}
	var_116_bool = false;
}


void func_620(int var_107_int, string var_108_string)
{
	int var_110_int;
	@GetVariable(var_108_string, var_110_int);
	var_110_int = var_107_int;
}


void func_494(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_610(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_657(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_556;
		@LookAsyncCamera("head");
	}
Label_556:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_625(string var_43_string, int var_44_int)
{
	string var_46_string = "idle";
	if(var_44_int != 0)
		var_46_string += var_44_int;
	var_46_string = var_43_string;
}


void func_562(void)
{
	bool var_144_bool;
	@CameraSwitchToNormal();
	bool var_145_bool;
	func_657(var_145_bool);
	if(var_145_bool != 0) {
	} else {
		@HasAnimationTrack(var_144_bool, "head");
		if(var_144_bool == 0) goto Label_578;
		@UnlookAsync("head");
	}
Label_578:
	
}


void func_695(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x2c6";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_632(int var_37_int)
{
	int var_40_int; bool var_41_bool;
	var_40_int = 0;
	
	for(;;) {
		string var_43_string; int var_44_int;
		var_40_int = var_44_int;
		func_625(var_43_string, var_44_int);
		@HasAnimation(var_41_bool, "all", var_43_string);
		if(!var_41_bool) //@nz
			break;
		var_40_int += 1;
	}
	var_40_int = var_37_int;
}


// @pe
void func_316(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_12_float, float var_13_float)
{
	bool var_14_bool;
	func_489(var_14_bool);
	if(!var_14_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_12_float;
	var_1_object = var_13_float;
	@SetTimer(10, 1.0);
	func_395();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_381(object var_2_object, string var_3_string)
{
	func_476();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


