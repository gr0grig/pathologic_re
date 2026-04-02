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
			func_651();
			if(var_11_object == 4170) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_707();
			}
			if(var_10_bool == 4169) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(503835); //@t
				var_0_object->ClearReplies(); //@t
				bool var_40_bool;
				func_713(var_1_object);
				if(var_40_bool != 0)
					var_0_object->AddReply(503836, 4173, 4170); //@t
				var_0_object->AddReply(536330, -1, 38111); //@t
				var_0_object->AddReply(536331, -1, 38112); //@t
				return 0;
			}
			if(var_10_bool == 4173) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(503839); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503842, 4179, 4177); //@t
				var_0_object->AddReply(503837, 4174, 4171); //@t
				return 0;
			}
			if(var_10_bool == 4174) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(503840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503841, 4179, 4175); //@t
				var_0_object->AddReply(503843, 4179, 4178); //@t
				return 0;
			}
			if(var_10_bool == 4179) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(503844); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503845, 4183, 4181); //@t
				var_0_object->AddReply(503846, -1, 4182); //@t
				return 0;
			}
			if(var_10_bool == 4183) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(503847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503848, -1, 4185); //@t
				var_0_object->AddReply(503849, -1, 4186); //@t
				var_0_object->AddReply(503850, -1, 4187); //@t
				return 0;
			}
			var_3_string = true;
			bool var_100_bool;
			func_705(var_100_bool);
			if(var_100_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		while(true != 0) {
			@Sleep(1);
			func_344(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_409(var_9_object, var_10_object);
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
			func_371(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_640(var_4_bool);
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
	func_522(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_699(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_697(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_701(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_703(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_725(var_77_int);
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
		var_146_bool = !var_24_bool; //@nz
		if(var_146_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_147_object;
	var_15_object = var_147_object;
	func_591();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_640(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_705(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_707(void)
{
	@SetVariable("ood6WastedMale1", 1);
}


void func_509(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_517(bool var_14_bool)
{
	bool var_16_bool;
	@IsLoaded(var_16_bool);
	var_16_bool = var_14_bool;
}


// @pe
void func_713(bool var_111_bool)
{
	int var_113_int;
	func_668(var_113_int, "ood6WastedMale1");
	if(var_113_int == 0) {
		var_111_bool = true;
		return 0;
	}
	var_111_bool = false;
}


void func_522(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_658(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_705(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_585;
		@LookAsyncCamera("head");
	}
Label_585:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_651(void)
{
	bool var_13_bool;
	func_705(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_87_object, "Neutral");
		var_0_object->SetMessage(503835); //@t
		var_0_object->ClearReplies(); //@t
		bool var_111_bool;
		func_713(var_86_object);
		if(var_111_bool != 0)
			var_0_object->AddReply(503836, 4173, 4170); //@t
		var_0_object->AddReply(536330, -1, 38111); //@t
		var_0_object->AddReply(536331, -1, 38112); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_128_bool;
	func_705(var_128_bool);
	if(var_128_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_609(var_2_object);
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
void func_142(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_705(var_94_bool);
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
	func_625(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_591(void)
{
	bool var_149_bool;
	@CameraSwitchToNormal(true);
	bool var_151_bool;
	func_705(var_151_bool);
	if(var_151_bool != 0) {
	} else {
		@HasAnimationTrack(var_149_bool, "head");
		if(var_149_bool == 0) goto Label_608;
		@UnlookAsync("head");
	}
Label_608:
	
}


void func_658(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_725(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x2e4";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


// @pe
void func_344(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_12_float, float var_13_float)
{
	bool var_14_bool;
	func_517(var_14_bool);
	if(!var_14_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_12_float;
	var_1_object = var_13_float;
	@SetTimer(10, 1.0);
	func_423();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_409(object var_2_object, string var_3_string)
{
	func_504();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_668(int var_113_int, string var_114_string)
{
	int var_116_int;
	@GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
}


void func_673(string var_43_string, int var_44_int)
{
	string var_46_string = "idle";
	if(var_44_int != 0)
		var_46_string += var_44_int;
	var_46_string = var_43_string;
}


void func_609(string var_130_string)
{
	bool var_134_bool; float var_135_float; float var_136_float;
	@lshHasAnimation(var_134_bool, var_130_string);
	if(var_134_bool != 0) {
		@lshGetAnimTimes(var_130_string, var_135_float, var_136_float);
		@lshPlayAnimation(var_135_float, var_136_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_130_string);
	}
	
}


void func_423(void)
{
	int var_30_int; int var_31_int; bool var_32_bool; float var_33_float; bool var_34_bool;
	@WaitForAnimEnd();
	bool var_35_bool;
	func_517(var_35_bool);
	if(!var_35_bool) //@nz
		return 14;
	int var_37_int;
	func_680(var_37_int);
	int var_28_int;
	var_37_int = var_28_int;
	int var_29_int = 0;
	
	for(;;) {
		bool var_50_bool = false;
		if(var_29_int < 5) {
			bool var_53_bool;
			func_517(var_53_bool);
			if(var_53_bool != 0)
				var_50_bool = true;
		}
		if(var_50_bool != 0) {
			@irand(var_30_int, 3);
			if(var_30_int == 0) {
				if(var_28_int == 0) goto Label_470;
				@irand(var_31_int, var_28_int);
				string var_59_string; int var_60_int;
				var_31_int = var_60_int;
				func_673(var_59_string, var_60_int);
				@PlayAnimation("all", var_59_string);
				@WaitForAnimEnd(var_32_bool);
				if(!var_32_bool) { //@nz
				} else {
			} else {
			if(var_30_int == 1) {
				@rand(var_33_float, 4);
				@Sleep((var_33_float + 1), var_34_bool);
				if(!var_34_bool) { //@nz
					goto Label_499;
				}
			} else if(var_29_int != 0) {
				goto Label_499;
			}
			}
					bool var_62_bool;
					func_502(var_62_bool);
					var_63_bool = !var_62_bool; //@nz
					if(var_63_bool == 0) goto Label_494;
			}
		}
	Label_499:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_494:
		@ResetAAS();
		var_29_int += 1;
	}
	
}


void func_680(int var_37_int)
{
	int var_40_int; bool var_41_bool;
	var_40_int = 0;
	
	for(;;) {
		string var_43_string; int var_44_int;
		var_40_int = var_44_int;
		func_673(var_43_string, var_44_int);
		@HasAnimation(var_41_bool, "all", var_43_string);
		if(!var_41_bool) //@nz
			break;
		var_40_int += 1;
	}
	var_40_int = var_37_int;
}


void func_625(string var_97_string, bool var_98_bool)
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


void func_371(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_509(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_502(bool var_62_bool)
{
	var_62_bool = true;
}


void func_504(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_697(int var_74_int)
{
	var_74_int = 515556;
}


void func_699(int var_73_int)
{
	var_73_int = 503341;
}


void func_701(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


void func_703(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


