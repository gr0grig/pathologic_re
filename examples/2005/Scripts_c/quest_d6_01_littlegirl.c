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
			func_611();
			if(var_11_object == 4332) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_667();
			}
			if(var_11_object == 4333) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_673();
			}
			if(var_10_bool == 4331) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(503978); //@t
				var_0_object->ClearReplies(); //@t
				bool var_41_bool;
				func_679(var_1_object);
				if(var_41_bool != 0)
					var_0_object->AddReply(503979, 4336, 4332); //@t
				bool var_52_bool;
				func_691(var_1_object);
				if(var_52_bool != 0)
					var_0_object->AddReply(503980, 4334, 4333); //@t
				var_0_object->AddReply(536325, -1, 38106); //@t
				return 0;
			}
			if(var_10_bool == 4334) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(503981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503982, -1, 4335); //@t
				return 0;
			}
			if(var_10_bool == 4336) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(503983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503984, 4338, 4337); //@t
				var_0_object->AddReply(503986, -1, 4339); //@t
				return 0;
			}
			if(var_10_bool == 4338) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(503985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503987, -1, 4340); //@t
				return 0;
			}
			var_3_string = true;
			bool var_88_bool;
			func_665(var_88_bool);
			if(var_88_bool != 0)
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
			func_324(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_389(var_9_object, var_10_object);
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
			func_351(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_600(var_4_bool);
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
	func_502(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_659(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_657(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_661(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_663(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_703(var_76_int);
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
	func_570();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_640(int var_37_int)
{
	int var_40_int; bool var_41_bool;
	var_40_int = 0;
	
	for(;;) {
		string var_43_string; int var_44_int;
		var_40_int = var_44_int;
		func_633(var_43_string, var_44_int);
		@HasAnimation(var_41_bool, "all", var_43_string);
		if(!var_41_bool) //@nz
			break;
		var_40_int += 1;
	}
	var_40_int = var_37_int;
}


// @pe
void func_324(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_12_float, float var_13_float)
{
	bool var_14_bool;
	func_497(var_14_bool);
	if(!var_14_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_12_float;
	var_1_object = var_13_float;
	@SetTimer(10, 1.0);
	func_403();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_389(object var_2_object, string var_3_string)
{
	func_484();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		func_147(var_86_object, "Neutral");
		var_0_object->SetMessage(503978); //@t
		var_0_object->ClearReplies(); //@t
		bool var_105_bool;
		func_679(var_1_object);
		if(var_105_bool != 0)
			var_0_object->AddReply(503979, 4336, 4332); //@t
		bool var_116_bool;
		func_691(var_1_object);
		if(var_116_bool != 0)
			var_0_object->AddReply(503980, 4334, 4333); //@t
		var_0_object->AddReply(536325, -1, 38106); //@t
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_117:
	bool var_128_bool;
	func_665(var_128_bool);
	if(var_128_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_587(var_2_object);
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


void func_587(string var_130_string)
{
	float var_133_float; float var_134_float;
	@lshGetAnimTimes(var_130_string, var_133_float, var_134_float);
	@lshPlayAnimation(var_133_float, var_134_float, false);
}


void func_657(int var_73_int)
{
	var_73_int = 515561;
}


void func_594(string var_96_string, bool var_97_bool)
{
	float var_102_float; float var_103_float;
	@lshGetAnimTimes(var_96_string, var_102_float, var_103_float);
	@lshPlayAnimation(var_102_float, var_103_float, var_97_bool);
}


void func_659(int var_72_int)
{
	var_72_int = 503346;
}


// @pe
void func_147(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_665(var_93_bool);
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
	func_594(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


void func_661(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png";
}


void func_403(void)
{
	int var_30_int; int var_31_int; bool var_32_bool; float var_33_float; bool var_34_bool;
	@WaitForAnimEnd();
	bool var_35_bool;
	func_497(var_35_bool);
	if(!var_35_bool) //@nz
		return 14;
	int var_37_int;
	func_640(var_37_int);
	int var_28_int;
	var_37_int = var_28_int;
	int var_29_int = 0;
	
	for(;;) {
		bool var_50_bool = false;
		if(var_29_int < 5) {
			bool var_53_bool;
			func_497(var_53_bool);
			if(var_53_bool != 0)
				var_50_bool = true;
		}
		if(var_50_bool != 0) {
			@irand(var_30_int, 3);
			if(var_30_int == 0) {
				if(var_28_int == 0) goto Label_450;
				@irand(var_31_int, var_28_int);
				string var_59_string; int var_60_int;
				var_31_int = var_60_int;
				func_633(var_59_string, var_60_int);
				@PlayAnimation("all", var_59_string);
				@WaitForAnimEnd(var_32_bool);
				if(!var_32_bool) { //@nz
				} else {
			} else {
			if(var_30_int == 1) {
				@rand(var_33_float, 4);
				@Sleep((var_33_float + 1), var_34_bool);
				if(!var_34_bool) { //@nz
					goto Label_479;
				}
			} else if(var_29_int != 0) {
				goto Label_479;
			}
			}
					bool var_62_bool;
					func_482(var_62_bool);
					var_63_bool = !var_62_bool; //@nz
					if(var_63_bool == 0) goto Label_474;
			}
		}
	Label_479:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_474:
		@ResetAAS();
		var_29_int += 1;
	}
	
}


void func_663(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png";
}


void func_600(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_665(bool var_67_bool)
{
	var_67_bool = false;
}


// @pe
void func_667(void)
{
	@SetVariable("ood6Littlegirl1", 1);
}


void func_351(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_489(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_673(void)
{
	@SetVariable("ood6Littlegirl2", 1);
}


void func_482(bool var_62_bool)
{
	var_62_bool = true;
}


void func_611(void)
{
	bool var_13_bool;
	func_665(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_484(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_679(bool var_105_bool)
{
	int var_107_int;
	func_628(var_107_int, "ood6Littlegirl1");
	if(var_107_int == 0) {
		var_105_bool = true;
		return 0;
	}
	var_105_bool = false;
}


void func_489(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_618(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_497(bool var_14_bool)
{
	bool var_16_bool;
	@IsLoaded(var_16_bool);
	var_16_bool = var_14_bool;
}


// @pe
void func_691(bool var_116_bool)
{
	int var_118_int;
	func_628(var_118_int, "ood6Littlegirl2");
	if(var_118_int == 0) {
		var_116_bool = true;
		return 0;
	}
	var_116_bool = false;
}


void func_628(int var_107_int, string var_108_string)
{
	int var_110_int;
	@GetVariable(var_108_string, var_110_int);
	var_110_int = var_107_int;
}


void func_502(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_618(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_665(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_564;
		@LookAsyncCamera("head");
	}
Label_564:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_633(string var_43_string, int var_44_int)
{
	string var_46_string = "idle";
	if(var_44_int != 0)
		var_46_string += var_44_int;
	var_46_string = var_43_string;
}


void func_570(void)
{
	bool var_144_bool;
	@CameraSwitchToNormal();
	bool var_145_bool;
	func_665(var_145_bool);
	if(var_145_bool != 0) {
	} else {
		@HasAnimationTrack(var_144_bool, "head");
		if(var_144_bool == 0) goto Label_586;
		@UnlookAsync("head");
	}
Label_586:
	
}


void func_703(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x2ce";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


