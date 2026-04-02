// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool)
	{
		if(1 != 0) {
			func_702();
			if(var_7_bool == 18970) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517836, 18972, 18971); //@t
				var_0_object->AddReply(517855, 18992, 18991); //@t
				var_0_object->AddReply(517859, -1, 18996); //@t
				return 0;
			}
			if(var_7_bool == 18992) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517856); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517857, 18972, 18993); //@t
				var_0_object->AddReply(517858, -1, 18995); //@t
				return 0;
			}
			if(var_7_bool == 18972) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517837); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517838, 18974, 18973); //@t
				var_0_object->AddReply(517854, 18974, 18989); //@t
				return 0;
			}
			if(var_7_bool == 18974) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517839); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517840, 18976, 18975); //@t
				var_0_object->AddReply(532787, -1, 34258); //@t
				return 0;
			}
			if(var_7_bool == 18976) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517842, 18978, 18977); //@t
				return 0;
			}
			if(var_7_bool == 18978) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517844, 18980, 18979); //@t
				var_0_object->AddReply(532788, -1, 34259); //@t
				return 0;
			}
			if(var_7_bool == 18980) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517846, 18982, 18981); //@t
				return 0;
			}
			if(var_7_bool == 18982) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517848, 18984, 18983); //@t
				return 0;
			}
			if(var_7_bool == 18984) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517849); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517850, 18986, 18985); //@t
				var_0_object->AddReply(517853, -1, 18988); //@t
				return 0;
			}
			if(var_7_bool == 18986) {
				func_137(var_8_bool, "Neutral");
				var_0_object->SetMessage(517851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517852, -1, 18987); //@t
				return 0;
			}
			var_3_string = true;
			bool var_113_bool;
			func_757(var_113_bool);
			if(var_113_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		var_1_object = false;
		func_433(true);
		func_441();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		if(!var_1_object) { //@nz
			func_594();
			int var_9_int; object var_10_object;
			var_7_object = var_10_object;
			TaskCall(0);
			func_0(var_11_object, var_9_int, var_10_object);
			TaskReturn();
			var_1_object = true;
			string var_130_string = "cleanup";
			func_420();
		}
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string)
	{
		if(var_7_string == "cleanup")
			func_433(false);
		string var_14_string;
		var_7_string = var_14_string;
		func_482(var_14_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		bool var_7_bool = false;
		if(var_0_object != 0) {
			bool var_9_bool;
			func_511(var_9_bool);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			object var_10_object;
			func_709(var_10_object);
			@RemoveActor(var_10_object);
		}
	}

}


void func_0(object var_0_object, int var_9_int, object var_10_object)
{
	var_0_object = var_10_object;
	bool var_20_bool; object var_21_object;
	var_10_object = var_21_object;
	func_604(var_20_bool, var_21_object, 70.0);
	if(!var_20_bool) { //@nz
		var_9_int = -2;
		return 8;
	}
	object var_16_object;
	@CreateDialog(var_16_object);
	int var_67_int;
	func_751(var_67_int);
	var_16_object->SetNPCName(var_67_int);
	int var_68_int;
	func_749(var_68_int);
	var_16_object->SetNPCDescription(var_68_int);
	string var_69_string;
	func_753(var_69_string);
	var_16_object->SetPhoto(var_69_string);
	string var_70_string;
	func_755(var_70_string);
	var_16_object->SetPhoto2(var_70_string);
	int var_71_int;
	func_759(var_71_int);
	var_16_object->SetPlayerName(var_71_int);
	bool var_17_bool;
	@IsOverrideActive(var_17_bool);
	if(var_17_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	@DoDialog(var_16_object);
	object var_80_object; object var_81_object;
	var_10_object = var_80_object;
	var_16_object = var_81_object;
	TaskCall(1);
	func_74(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object);
	TaskReturn();
	bool var_19_bool;
	var_16_object->IsDialogEnd(var_19_bool);
	
	for(;;) {
		var_122_bool = !var_19_bool; //@nz
		if(var_122_bool == 0) goto Label_63;
		@sync();
		var_16_object->IsDialogEnd(var_19_bool);
	}
	
Label_63:
	object var_123_object;
	var_10_object = var_123_object;
	func_672();
	@StopDialog(var_16_object);
	var_16_object->GetReturnValue(-1);
	int var_18_int = var_9_int;
}
EMIT "Stack[-4] = 0";


void func_513(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_599(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_732(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_599(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_560;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_725(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_589;
				}
			} else if(var_28_int != 0) {
				goto Label_589;
			}
			}
					bool var_61_bool;
					func_592(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_584;
			}
		}
	Label_589:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_584:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_709(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_137(object var_2_object, string var_87_string)
{
	bool var_88_bool;
	func_757(var_88_bool);
	if(!var_88_bool) //@nz
		return 0;
	if(var_87_string == var_2_object)
		return 0;
	string var_91_string; bool var_92_bool;
	var_87_string = var_91_string;
	if(var_87_string == "")
		var_92_bool = false;
	else
		var_92_bool = true;
	func_696(var_91_string, var_92_bool);
	var_2_object = var_87_string;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_80_object, object var_81_object)
{
	var_0_object = var_81_object;
	var_1_object = var_80_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_81_object, "Neutral");
		var_0_object->SetMessage(517835); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(517836, 18972, 18971); //@t
		var_0_object->AddReply(517855, 18992, 18991); //@t
		var_0_object->AddReply(517859, -1, 18996); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_109_bool;
	func_757(var_109_bool);
	if(var_109_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_689(var_2_object);
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


void func_715(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_51_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_51_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_51_float;
}


void func_462(object var_0_object)
{
	var_0_object = true;
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	bool var_19_bool = false;
	if(!var_18_bool) { //@nz
		bool var_21_bool;
		func_511(var_21_bool);
		if(var_21_bool != 0)
			var_19_bool = true;
	}
	if(var_19_bool != 0) {
		object var_22_object;
		func_709(var_22_object);
		@RemoveActor(var_22_object);
	}
}


void func_592(bool var_61_bool)
{
	var_61_bool = true;
}


void func_594(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_725(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_599(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_604(bool var_20_bool, object var_21_object, float var_22_float)
{
	cvector var_33_cvector; bool var_40_bool;
	var_21_object->GetPosition(var_33_cvector);
	float var_32_float;
	var_21_object->GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (var_41_float + var_32_float);
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	@GetEyesHeight(var_32_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	SetByIndex(var_34_cvector, 1) = (var_42_float + var_32_float);
	cvector var_35_cvector = var_33_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_45_float = sqrt(var_35_cvector | var_35_cvector);
	var_35_cvector /= var_45_float;
	cvector var_36_cvector = -var_35_cvector;
	cvector var_47_cvector;
	func_715(var_47_cvector, (var_36_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_37_cvector = ((var_35_cvector * var_22_float) + (var_47_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0)
		var_20_bool = false;
	@StopWorld();
	@CameraTransit((var_34_cvector + var_37_cvector), var_36_cvector);
	var_60_float = GetByIndex(var_37_cvector, 0);
	var_61_float = GetByIndex(var_37_cvector, 2);
	@Rotate(var_60_float, var_61_float);
	bool var_62_bool;
	func_757(var_62_bool);
	if(var_62_bool != 0) {
	} else {
		@HasAnimationTrack(var_40_bool, "head");
		if(var_40_bool == 0) goto Label_666;
		@LookAsyncCamera("head");
	}
Label_666:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_20_bool = true;
	
}


void func_732(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_725(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_672(void)
{
	bool var_125_bool;
	@CameraSwitchToNormal();
	bool var_126_bool;
	func_757(var_126_bool);
	if(var_126_bool != 0) {
	} else {
		@HasAnimationTrack(var_125_bool, "head");
		if(var_125_bool == 0) goto Label_688;
		@UnlookAsync("head");
	}
Label_688:
	
}


// @pe
void func_482(string var_14_string)
{
	if(var_14_string == "cleanup")
		func_462(var_14_string);
}


void func_749(int var_68_int)
{
	var_68_int = 515569;
}


void func_751(int var_67_int)
{
	var_67_int = 503354;
}


void func_689(string var_111_string)
{
	float var_114_float; float var_115_float;
	@lshGetAnimTimes(var_111_string, var_114_float, var_115_float);
	@lshPlayAnimation(var_114_float, var_115_float, false);
}


void func_433(bool var_7_bool)
{
	object var_9_object;
	@FindActor(var_9_object, "tutorial_light_2");
	var_9_object->Switch(var_7_bool);
}
EMIT "Stack[-1] = 0";


void func_753(string var_69_string)
{
	var_69_string = "ui/NPC_wmask.png";
}


void func_755(string var_70_string)
{
	var_70_string = "ui/NPC_wmask_b.png";
}


void func_757(bool var_62_bool)
{
	var_62_bool = false;
}


void func_759(int var_71_int)
{
	int var_73_int;
	@GetVariable("branch", var_73_int);
	if(var_73_int == 0) {
		var_71_int = 1;
		return 2;
	EMIT "GOTO 0x306";
	}
	if(var_73_int == 1) {
		var_71_int = 2;
		return 2;
	}
	var_71_int = 3;
}


void func_696(string var_91_string, bool var_92_bool)
{
	float var_97_float; float var_98_float;
	@lshGetAnimTimes(var_91_string, var_97_float, var_98_float);
	@lshPlayAnimation(var_97_float, var_98_float, var_92_bool);
}


void func_441(void)
{
	
Label_442:
	for(;;) {
		bool var_13_bool;
		func_599(var_13_bool);
		var_16_bool = !var_13_bool; //@nz
		if(var_16_bool == 0) goto Label_450;
		@Hold();
	}
	
Label_450:
	float var_12_float;
	@rand(var_12_float, 3);
	@Sleep(var_12_float + 3);
	func_513();
	goto Label_442;
}
EMIT "Return(); Pop(2)";


void func_702(void)
{
	bool var_10_bool;
	func_757(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_511(bool var_9_bool)
{
	var_9_bool = true;
}


