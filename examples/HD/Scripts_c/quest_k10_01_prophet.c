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
			func_616();
			if(var_11_object == 28288) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_684();
			}
			if(var_10_bool == 28285) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(526993); //@t
				var_0_object->ClearReplies(); //@t
				bool var_44_bool;
				func_691(var_1_object);
				if(var_44_bool != 0)
					var_0_object->AddReply(526994, 28287, 28286); //@t
				var_0_object->AddReply(526997, -1, 28289); //@t
				var_0_object->AddReply(528127, -1, 29475); //@t
				return 0;
			}
			if(var_10_bool == 28287) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(526995); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528128, 29478, 29476); //@t
				var_0_object->AddReply(528129, 29478, 29477); //@t
				return 0;
			}
			if(var_10_bool == 29478) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(528130); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528131, 29481, 29479); //@t
				var_0_object->AddReply(528132, 29481, 29480); //@t
				return 0;
			}
			if(var_10_bool == 29481) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(528133); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526996, -1, 28288); //@t
				return 0;
			}
			var_3_string = true;
			bool var_88_bool;
			func_658(var_88_bool);
			if(var_88_bool != 0)
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
	
		for(;;) {
			func_309(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_374(var_9_object, var_10_object);
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
			func_336(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_605(var_4_bool);
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
	func_487(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_652(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_650(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_654(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_656(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_703(var_77_int);
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
	func_556();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_388(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_482(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_667(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_482(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_435;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_660(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_464;
				}
			} else if(var_27_int != 0) {
				goto Label_464;
			}
			}
					bool var_60_bool;
					func_467(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_459;
			}
		}
	Label_464:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_459:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_650(int var_74_int)
{
	var_74_int = 518716;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_87_object, "Neutral");
		var_0_object->SetMessage(526993); //@t
		var_0_object->ClearReplies(); //@t
		bool var_111_bool;
		func_691(var_86_object);
		if(var_111_bool != 0)
			var_0_object->AddReply(526994, 28287, 28286); //@t
		var_0_object->AddReply(526997, -1, 28289); //@t
		var_0_object->AddReply(528127, -1, 29475); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_128_bool;
	func_658(var_128_bool);
	if(var_128_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_574(var_2_object);
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


void func_652(int var_73_int)
{
	var_73_int = 518715;
}


void func_638(bool var_18_bool, string var_19_string, string var_20_string)
{
	object var_22_object;
	@FindActor(var_22_object, var_19_string);
	if(var_22_object == null)
		var_18_bool = false;
	@Trigger(var_22_object, var_20_string);
	var_18_bool = true;
}
EMIT "Stack[-1] = 0";


void func_654(string var_75_string)
{
	var_75_string = "ui/NPC_Prophet.png";
}


// @pe
void func_142(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_658(var_94_bool);
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
	func_590(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_656(string var_76_string)
{
	var_76_string = "ui/NPC_Prophet_b.png";
}


void func_590(string var_97_string, bool var_98_bool)
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


void func_658(bool var_68_bool)
{
	var_68_bool = false;
}


void func_336(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_474(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_660(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_467(bool var_60_bool)
{
	var_60_bool = true;
}


void func_469(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_474(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_667(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_660(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


void func_605(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_482(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_487(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_623(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_658(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_550;
		@LookAsyncCamera("head");
	}
Label_550:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_616(void)
{
	bool var_13_bool;
	func_658(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_556(void)
{
	bool var_149_bool;
	@CameraSwitchToNormal(true);
	bool var_151_bool;
	func_658(var_151_bool);
	if(var_151_bool != 0) {
	} else {
		@HasAnimationTrack(var_149_bool, "head");
		if(var_149_bool == 0) goto Label_573;
		@UnlookAsync("head");
	}
Label_573:
	
}


// @pe
void func_684(void)
{
	bool var_18_bool;
	func_638(var_18_bool, "quest_k10_01", "teleport");
}


void func_623(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_691(bool var_111_bool)
{
	int var_113_int;
	func_633(var_113_int, "k10q01");
	if(var_113_int == 7)
		var_111_bool = true;
	var_111_bool = false;
}


// @pe
void func_309(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_482(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_388();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_374(object var_2_object, string var_3_string)
{
	func_469();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_633(int var_113_int, string var_114_string)
{
	int var_116_int;
	@GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
}


void func_574(string var_130_string)
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


void func_703(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x2ce";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


