task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, float var_17_float, int var_18_int)
	{
		bool var_19_bool;
		func_1454(var_19_bool);
		if(var_19_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, int var_8_int, int var_9_int, bool var_10_bool, bool var_11_bool, object var_12_object, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, bool var_17_bool, float var_18_float, int var_19_int)
	{
		if(1 != 0) {
			func_864();
			if(var_18_float == 21712) {
				func_172(var_19_int, "Neutral");
				var_0_bool->SetMessage(520509); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(524384, 25709, 25708); //@t
				var_0_bool->AddReply(520510, -1, 21713); //@t
				return 0;
			}
			if(var_18_float == 25709) {
				func_172(var_19_int, "Neutral");
				var_0_bool->SetMessage(524385); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(524387, -1, 25711); //@t
				var_0_bool->AddReply(524386, -1, 25710); //@t
				return 0;
			}
			var_3_object = true;
			bool var_58_bool;
			func_1454(var_58_bool);
			if(var_58_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc3";
	
	}

}


maintask task_3
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, float var_16_float, int var_17_int)
	{
		var_11_bool = -1;
		func_333(var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int);
		bool var_73_bool;
		func_669(var_73_bool);
		if(!var_73_bool) //@nz
			@Hold();
		while(true != 0) {
			func_484(var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, float var_16_float, int var_17_int)
	{
		func_549(var_16_float, var_17_int);
		@Hold();
	}

	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, float var_16_float, int var_17_int)
	{
		@StopGroup0();
	}

	// @pe
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, float var_16_float, int var_17_int, object var_18_object)
	{
		object var_20_object;
		var_18_object = var_20_object;
		float var_19_float;
		func_1456(var_19_float, var_20_object);
		if(var_10_object > var_19_float) {
			int var_25_int; object var_26_object;
			var_18_object = var_26_object;
			TaskCall(1);
			func_40(var_27_object, var_25_int, var_26_object);
			TaskReturn();
			return 0;
		}
		int var_155_int;
		func_961(var_155_int);
		if(var_11_bool != var_155_int) {
			@Trace("Updating salesman");
			int var_163_int;
			func_961(var_163_int);
			var_11_bool = var_163_int;
			func_420();
		}
		bool var_479_bool; object var_480_object;
		var_18_object = var_480_object;
		func_761(var_479_bool, var_480_object);
		if(var_479_bool != 0) {
			object var_511_object;
			var_18_object = var_511_object;
			TaskCall(0);
			func_0(var_511_object);
			TaskReturn();
			object var_518_object;
			var_18_object = var_518_object;
			func_817();
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, float var_16_float, int var_17_int, int var_18_int)
	{
		if(var_18_int == 10) {
			bool var_21_bool;
			func_511(var_16_float, var_17_int, var_18_int, var_21_bool);
			if(var_21_bool != 0) {
				if(!var_2_object) { //@nz
					func_853(var_4_string);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_513_bool;
		func_1454(var_513_bool);
		if(var_513_bool == 0) goto Label_15;
		func_822("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_24:
	}
	if(false == 0) goto Label_24;
	return 0;
	
Label_15:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


void func_769(bool var_481_bool, object var_482_object, float var_483_float)
{
	cvector var_493_cvector;
	var_482_object->GetPosition(var_493_cvector);
	float var_492_float;
	var_482_object->GetEyesHeight(var_492_float);
	var_500_float = GetByIndex(var_493_cvector, 1);
	SetByIndex(var_493_cvector, 1) = (var_500_float + var_492_float);
	cvector var_494_cvector;
	@GetPosition(var_494_cvector);
	@GetEyesHeight(var_492_float);
	var_501_float = GetByIndex(var_494_cvector, 1);
	SetByIndex(var_494_cvector, 1) = (var_501_float + var_492_float);
	cvector var_495_cvector = var_493_cvector - var_494_cvector;
	var_502_float = GetByIndex(var_495_cvector, 1);
	SetByIndex(var_495_cvector, 1) = (float)0;
	var_504_float = sqrt(var_495_cvector | var_495_cvector);
	var_495_cvector /= var_504_float;
	cvector var_496_cvector = -var_495_cvector;
	cvector var_497_cvector = (var_495_cvector * var_483_float) - [0.0, 10.0, 0.0];
	bool var_499_bool;
	@IsOverrideActive(var_499_bool);
	if(var_499_bool != 0)
		var_481_bool = false;
	@StopWorld();
	@CameraTransit((var_494_cvector + var_497_cvector), var_496_cvector, true);
	var_509_float = GetByIndex(var_497_cvector, 0);
	var_510_float = GetByIndex(var_497_cvector, 2);
	@Rotate(var_509_float, var_510_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_481_bool = true;
}


void func_642(bool var_126_bool)
{
	var_126_bool = true;
}


// @pe
void func_1024(bool var_183_bool, int var_185_int)
{
	func_897("drapery", 1, 2);
	if(var_185_int >= 2) {
		func_897("halfboot_repel", 1, 3);
		func_897("glove_disp", 1, 3);
		func_897("drapery", 1, 3);
	}
	if(var_185_int >= 4) {
		func_897("glove", 1, 4);
		func_897("cloak_repel", 1, 4);
	}
	if(var_185_int >= 5) {
		func_897("mask", 1, 8);
		func_897("boot_repel", 1, 4);
	}
	if(var_185_int >= 7)
		func_897("raincoat_repel", 1, 4);
	if(var_185_int >= 9) {
		func_897("glove_army", 1, 5);
		func_897("boot_army", 1, 5);
	}
	if(var_185_int >= 10)
		func_897("balahon", 1, 9);
	var_183_bool = true;
}


void func_644(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_897(string var_186_string, int var_187_int, int var_188_int)
{
	bool var_190_bool;
	int var_192_int;
	var_187_int = var_192_int;
	int var_193_int;
	var_188_int = var_193_int;
	bool var_191_bool;
	func_956(var_191_bool, var_192_int, var_193_int);
	if(var_191_bool != 0)
		@AddItem(var_190_bool, var_186_string, 0);
}


void func_649(float var_25_float, object var_26_object)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	var_26_object->GetPosition(var_31_cvector);
	var_25_float = (var_31_cvector - var_30_cvector) | (var_31_cvector - var_30_cvector);
}


void func_908(string var_358_string, int var_359_int, int var_360_int, int var_361_int)
{
	int var_364_int; bool var_365_bool;
	int var_367_int;
	var_359_int = var_367_int;
	int var_368_int;
	var_360_int = var_368_int;
	bool var_366_bool;
	func_956(var_366_bool, var_367_int, var_368_int);
	if(var_366_bool != 0) {
		@irand(var_364_int, var_361_int);
		@AddItem(var_365_bool, var_358_string, 0, (var_364_int + 1));
	}
}


void func_1422(string var_107_string, int var_108_int)
{
	string var_110_string = "idle";
	if(var_108_int != 0)
		var_110_string += var_108_int;
	var_110_string = var_107_string;
}


void func_657(bool var_30_bool, object var_31_object, string var_32_string)
{
	var_40_bool = IsFuncExist(var_31_object, "HasProperty", 2);
	if(!var_40_bool) { //@nz
		var_30_bool = false;
		return 2;
	}
	bool var_37_bool;
	var_31_object->HasProperty(var_32_string, var_37_bool);
	var_37_bool = var_30_bool;
}


void func_1429(int var_101_int)
{
	int var_104_int; bool var_105_bool;
	var_104_int = 0;
	
	for(;;) {
		string var_107_string; int var_108_int;
		var_104_int = var_108_int;
		func_1422(var_107_string, var_108_int);
		@HasAnimation(var_105_bool, "all", var_107_string);
		if(!var_105_bool) //@nz
			break;
		var_104_int += 1;
	}
	var_104_int = var_101_int;
}


void func_923(string var_432_string, int var_433_int, int var_434_int, int var_435_int, int var_436_int)
{
	int var_439_int; bool var_440_bool;
	int var_442_int;
	var_433_int = var_442_int;
	int var_443_int;
	var_434_int = var_443_int;
	bool var_441_bool;
	func_956(var_441_bool, var_442_int, var_443_int);
	if(var_441_bool != 0) {
		@irand(var_439_int, ((var_436_int - var_435_int) + 1));
		@AddItem(var_440_bool, var_432_string, 0, (var_439_int + var_435_int));
	}
}


void func_669(bool var_73_bool)
{
	bool var_75_bool;
	@IsLoaded(var_75_bool);
	var_75_bool = var_73_bool;
}


void func_1405(int var_88_int)
{
	int var_90_int;
	@GetVariable("branch", var_90_int);
	if(var_90_int == 0) {
		var_88_int = 1;
		return 2;
	EMIT "GOTO 0x58c";
	}
	if(var_90_int == 1) {
		var_88_int = 2;
		return 2;
	}
	var_88_int = 3;
}


void func_674(bool var_36_bool, object var_37_object, float var_38_float)
{
	cvector var_49_cvector; bool var_56_bool;
	var_37_object->GetPosition(var_49_cvector);
	float var_48_float;
	var_37_object->GetEyesHeight(var_48_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	SetByIndex(var_49_cvector, 1) = (var_57_float + var_48_float);
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	@GetEyesHeight(var_48_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_48_float);
	cvector var_51_cvector = var_49_cvector - var_50_cvector;
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (float)0;
	var_61_float = sqrt(var_51_cvector | var_51_cvector);
	var_51_cvector /= var_61_float;
	cvector var_52_cvector = -var_51_cvector;
	cvector var_63_cvector;
	func_946(var_63_cvector, (var_52_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_53_cvector = ((var_51_cvector * var_38_float) + (var_63_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0)
		var_36_bool = false;
	@StopWorld();
	@CameraTransit((var_50_cvector + var_53_cvector), var_52_cvector, true);
	var_77_float = GetByIndex(var_53_cvector, 0);
	var_78_float = GetByIndex(var_53_cvector, 2);
	@Rotate(var_77_float, var_78_float);
	bool var_79_bool;
	func_1454(var_79_bool);
	if(var_79_bool != 0) {
	} else {
		@HasAnimationTrack(var_56_bool, "head");
		if(var_56_bool == 0) goto Label_737;
		@LookAsyncCamera("head");
	}
Label_737:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_36_bool = true;
	
}


void func_420(void)
{
	int var_166_int;
	func_961(var_166_int);
	int var_165_int;
	var_166_int = var_165_int;
	@ClearSubContainer(0);
	if(var_5_bool != 0) {
		bool var_169_bool; object var_170_object; int var_171_int;
		object var_173_object;
		func_940(var_173_object);
		var_173_object = var_170_object;
		var_165_int = var_171_int;
		func_970(var_169_bool, var_170_object, var_171_int, 1);
	}
	if(var_6_int != 0) {
		bool var_456_bool; object var_457_object; int var_458_int;
		object var_460_object;
		func_940(var_460_object);
		var_460_object = var_457_object;
		var_165_int = var_458_int;
		func_970(var_456_bool, var_457_object, var_458_int, 0);
	}
	if(var_7_int != 0) {
		bool var_462_bool; object var_463_object; int var_464_int;
		object var_466_object;
		func_940(var_466_object);
		var_466_object = var_463_object;
		var_165_int = var_464_int;
		func_970(var_462_bool, var_463_object, var_464_int, 3);
	}
	if(var_8_bool != 0) {
		bool var_468_bool; object var_469_object; int var_470_int;
		object var_472_object;
		func_940(var_472_object);
		var_472_object = var_469_object;
		var_165_int = var_470_int;
		func_970(var_468_bool, var_469_object, var_470_int, 2);
	}
	if(var_9_bool != 0) {
		bool var_474_bool; object var_475_object; int var_476_int;
		object var_478_object;
		func_940(var_478_object);
		var_478_object = var_475_object;
		var_165_int = var_476_int;
		func_970(var_474_bool, var_475_object, var_476_int, 4);
	}
}


// @pe
void func_549(object var_2_object, object var_3_object)
{
	func_644();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_object = true;
}


void func_1446(int var_85_int)
{
	var_85_int = 531557;
}


void func_1448(int var_84_int)
{
	var_84_int = 531556;
}


void func_40(bool var_0_bool, int var_25_int, object var_26_object)
{
	var_0_bool = var_26_object;
	bool var_36_bool; object var_37_object;
	var_26_object = var_37_object;
	func_674(var_36_bool, var_37_object, 70.0);
	if(!var_36_bool) { //@nz
		var_25_int = -2;
		return 8;
	}
	object var_32_object;
	@CreateDialog(var_32_object);
	int var_84_int;
	func_1448(var_84_int);
	var_32_object->SetNPCName(var_84_int);
	int var_85_int;
	func_1446(var_85_int);
	var_32_object->SetNPCDescription(var_85_int);
	string var_86_string;
	func_1450(var_86_string);
	var_32_object->SetPhoto(var_86_string);
	string var_87_string;
	func_1452(var_87_string);
	var_32_object->SetPhoto2(var_87_string);
	int var_88_int;
	func_1405(var_88_int);
	var_32_object->SetPlayerName(var_88_int);
	bool var_33_bool;
	@IsOverrideActive(var_33_bool);
	if(var_33_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	@DoDialog(var_32_object);
	object var_97_object; object var_98_object;
	var_26_object = var_97_object;
	var_32_object = var_98_object;
	TaskCall(2);
	func_114(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	bool var_35_bool;
	var_32_object->IsDialogEnd(var_35_bool);
	
	for(;;) {
		var_146_bool = !var_35_bool; //@nz
		if(var_146_bool == 0) goto Label_103;
		@sync();
		var_32_object->IsDialogEnd(var_35_bool);
	}
	
Label_103:
	object var_147_object;
	var_26_object = var_147_object;
	func_743();
	@StopDialog(var_32_object);
	var_32_object->GetReturnValue(-1);
	int var_34_int = var_25_int;
}
EMIT "Stack[-4] = 0";


void func_1450(string var_86_string)
{
	var_86_string = "ui/NPC_Citizen1.png";
}


void func_1452(string var_87_string)
{
	var_87_string = "ui/NPC_Citizen1_b.png";
}


// @pe
void func_172(object var_2_object, string var_104_string)
{
	bool var_105_bool;
	func_1454(var_105_bool);
	if(!var_105_bool) //@nz
		return 0;
	if(var_104_string == var_2_object)
		return 0;
	string var_108_string; bool var_109_bool;
	var_104_string = var_108_string;
	if(var_104_string == "")
		var_109_bool = false;
	else
		var_109_bool = true;
	func_838(var_108_string, var_109_bool);
	var_2_object = var_104_string;
	
}


void func_1454(bool var_79_bool)
{
	var_79_bool = false;
}


void func_940(object var_33_object)
{
	object var_35_object;
	@self(var_35_object);
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_1456(float var_19_float, object var_20_object)
{
	float var_22_float;
	var_20_object->GetProperty("reputation", var_22_float);
	var_22_float = var_19_float;
}


// @pe
void func_817(void)
{
	@CameraSwitchToNormal(true);
}


void func_946(cvector var_63_cvector, cvector var_64_cvector)
{
	float var_67_float = sqrt(var_64_cvector | var_64_cvector);
	if(var_67_float < 0.000001)
		var_63_cvector = [0.0, 0.0, 0.0];
	var_63_cvector = var_64_cvector / var_67_float;
}


void func_563(void)
{
	int var_94_int; int var_95_int; bool var_96_bool; float var_97_float; bool var_98_bool;
	@WaitForAnimEnd();
	bool var_99_bool;
	func_669(var_99_bool);
	if(!var_99_bool) //@nz
		return 14;
	int var_101_int;
	func_1429(var_101_int);
	int var_92_int;
	var_101_int = var_92_int;
	int var_93_int = 0;
	
	for(;;) {
		bool var_114_bool = false;
		if(var_93_int < 5) {
			bool var_117_bool;
			func_669(var_117_bool);
			if(var_117_bool != 0)
				var_114_bool = true;
		}
		if(var_114_bool != 0) {
			@irand(var_94_int, 3);
			if(var_94_int == 0) {
				if(var_92_int == 0) goto Label_610;
				@irand(var_95_int, var_92_int);
				string var_123_string; int var_124_int;
				var_95_int = var_124_int;
				func_1422(var_123_string, var_124_int);
				@PlayAnimation("all", var_123_string);
				@WaitForAnimEnd(var_96_bool);
				if(!var_96_bool) { //@nz
				} else {
			} else {
			if(var_94_int == 1) {
				@rand(var_97_float, 4);
				@Sleep((var_97_float + 1), var_98_bool);
				if(!var_98_bool) { //@nz
					goto Label_639;
				}
			} else if(var_93_int != 0) {
				goto Label_639;
			}
			}
					bool var_126_bool;
					func_642(var_126_bool);
					var_127_bool = !var_126_bool; //@nz
					if(var_127_bool == 0) goto Label_634;
			}
		}
	Label_639:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_634:
		@ResetAAS();
		var_93_int += 1;
	}
	
}


void func_822(string var_130_string)
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


void func_956(bool var_191_bool, int var_192_int, int var_193_int)
{
	int var_195_int;
	@irand(var_195_int, var_193_int);
	var_191_bool = var_195_int < var_192_int;
}


void func_961(int var_155_int)
{
	float var_157_float;
	@GetGameTime(var_157_float);
	var_155_int = 1 + (var_157_float / 24);
}


void func_838(string var_108_string, bool var_109_bool)
{
	bool var_115_bool; float var_116_float; float var_117_float;
	@lshHasAnimation(var_115_bool, var_108_string);
	if(var_115_bool != 0) {
		@lshGetAnimTimes(var_108_string, var_116_float, var_117_float);
		@lshPlayAnimation(var_116_float, var_117_float, var_109_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_108_string);
	}
	
}


// @pe
void func_970(bool var_169_bool, object var_170_object, int var_171_int, int var_172_int)
{
	if(var_172_int == 0) {
		bool var_178_bool; object var_179_object; int var_180_int;
		var_170_object = var_179_object;
		var_171_int = var_180_int;
		func_1021(var_180_int);
		var_178_bool = var_169_bool;
		return 0;
	EMIT "GOTO 0x3f6";
	}
	if(var_172_int == 1) {
		bool var_183_bool; object var_184_object; int var_185_int;
		var_170_object = var_184_object;
		var_171_int = var_185_int;
		func_1024(var_184_object, var_185_int);
		var_183_bool = var_169_bool;
		return 0;
	EMIT "GOTO 0x3f6";
	}
	if(var_172_int == 2) {
		bool var_244_bool; object var_245_object; int var_246_int;
		var_170_object = var_245_object;
		var_171_int = var_246_int;
		func_1117(var_244_bool, var_245_object, var_246_int);
		var_244_bool = var_169_bool;
		return 0;
	EMIT "GOTO 0x3f6";
	}
	if(var_172_int == 3) {
		bool var_339_bool; object var_340_object; int var_341_int;
		var_170_object = var_340_object;
		var_171_int = var_341_int;
		func_1238(var_340_object, var_341_int);
		var_339_bool = var_169_bool;
		return 0;
	}
	bool var_422_bool; object var_423_object; int var_424_int;
	var_170_object = var_423_object;
	var_171_int = var_424_int;
	func_1371(var_423_object, var_424_int);
	var_422_bool = var_169_bool;
}


void func_333(bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, object var_10_object)
{
	int var_24_int; int var_25_int; int var_26_int; int var_27_int; int var_28_int; float var_29_float;
	object var_33_object;
	func_940(var_33_object);
	object var_31_object;
	var_33_object = var_31_object;
	bool var_30_bool;
	func_657(var_30_bool, var_31_object, "clothes");
	if(var_30_bool != 0)
		@GetProperty("clothes", var_24_int);
	bool var_43_bool; object var_44_object;
	object var_46_object;
	func_940(var_46_object);
	var_46_object = var_44_object;
	func_657(var_43_bool, var_44_object, "weapon");
	if(var_43_bool != 0)
		@GetProperty("weapon", var_25_int);
	bool var_48_bool; object var_49_object;
	object var_51_object;
	func_940(var_51_object);
	var_51_object = var_49_object;
	func_657(var_48_bool, var_49_object, "food");
	if(var_48_bool != 0)
		@GetProperty("food", var_26_int);
	bool var_53_bool; object var_54_object;
	object var_56_object;
	func_940(var_56_object);
	var_56_object = var_54_object;
	func_657(var_53_bool, var_54_object, "medcine");
	if(var_53_bool != 0)
		@GetProperty("medcine", var_27_int);
	bool var_58_bool; object var_59_object;
	object var_61_object;
	func_940(var_61_object);
	var_61_object = var_59_object;
	func_657(var_58_bool, var_59_object, "other");
	if(var_58_bool != 0)
		@GetProperty("other", var_28_int);
	bool var_63_bool; object var_64_object;
	object var_66_object;
	func_940(var_66_object);
	var_66_object = var_64_object;
	func_657(var_63_bool, var_64_object, "rep_threshold");
	if(var_63_bool != 0)
		@GetProperty("rep_threshold", var_29_float);
	else
		var_29_float = 0.33;
	var_5_bool = var_24_int != 0;
	var_6_int = var_25_int != 0;
	var_7_int = var_26_int != 0;
	var_8_bool = var_27_int != 0;
	var_9_bool = var_28_int != 0;
	var_10_object = var_29_float;
	
}


void func_853(object var_35_object)
{
	float var_38_float;
	var_35_object->GetEyesHeight(var_38_float);
	cvector var_39_cvector = [0.0, 0.0, 0.0];
	var_40_float = GetByIndex(var_39_cvector, 1);
	var_38_float = var_40_float;
	SetByIndex(var_39_cvector, 1) = var_40_float;
	@LookAsync(var_35_object, "head", var_39_cvector);
}


void func_1238(bool var_339_bool, int var_341_int)
{
	int var_347_int;
	if(var_341_int < 3) {
		var_347_int = 2;
	} else if(var_341_int < 5) {
			var_347_int = 3;
	}

	for(;;) {
		int var_352_int;
		var_347_int = var_352_int;
		func_897("lemon", 1, var_352_int);
		int var_355_int;
		var_347_int = var_355_int;
		func_897("rusk", 1, var_355_int);
		if(var_341_int == 2) {
			func_908("dried_fish", 1, 1, 2);
			func_908("smoked_meat", 1, 1, 2);
			func_908("bread", 1, 1, 2);
			break;
		}
		int var_409_int;
		var_347_int = var_409_int;
		func_897("dried_fish", 1, var_409_int);
		int var_412_int;
		var_347_int = var_412_int;
		func_897("smoked_meat", 1, var_412_int);
		int var_415_int;
		var_347_int = var_415_int;
		func_897("bread", 1, var_415_int);

	}
	int var_382_int;
	var_347_int = var_382_int;
	func_897("egg", 1, var_382_int);
	int var_385_int;
	var_347_int = var_385_int;
	func_897("vegetables", 1, var_385_int);
	int var_388_int;
	var_347_int = var_388_int;
	func_897("milk", 1, var_388_int);
	int var_391_int;
	var_347_int = var_391_int;
	func_897("dried_meat", 1, var_391_int);
	int var_394_int;
	var_347_int = var_394_int;
	func_897("fresh_fish", 1, var_394_int);
	int var_397_int;
	var_347_int = var_397_int;
	func_897("fresh_meat", 1, var_397_int);
	func_897("funduk", 1, 20);
	func_897("peanut", 1, 20);
	func_897("walnut", 1, 20);
	var_339_bool = true;
	
	if(var_341_int < 7) {
		var_347_int = 3;
	} else if(var_341_int < 7) {
		var_347_int = 4;
	}
	var_347_int = 5;
}


// @pe
void func_1371(bool var_422_bool, int var_424_int)
{
	func_897("hook", 1, 5);
	func_908("needle", 2, 3, 3);
	func_923("kerosene", 9, 10, 4, 20);
	if(var_424_int >= 9)
		func_908("rifle_ammo", 1, 2, 5);
	var_422_bool = true;
}


void func_1117(bool var_244_bool, object var_245_object, int var_246_int)
{
	object var_249_object;
	var_245_object = var_249_object;
	func_882(var_249_object, "tourniquet", 1, 2, 10);
	object var_264_object;
	var_245_object = var_264_object;
	func_882(var_264_object, "alpha_pills", 1, 1, 10);
	object var_269_object;
	var_245_object = var_269_object;
	func_882(var_269_object, "meradorm", 1, 1, 2);
	if(var_246_int >= 3) {
		object var_276_object;
		var_245_object = var_276_object;
		func_882(var_276_object, "neomicin", 1, 1, 2);
	}
	if(var_246_int >= 4) {
		object var_283_object;
		var_245_object = var_283_object;
		func_871(var_283_object, "novocaine", 1, 2);
		object var_293_object;
		var_245_object = var_293_object;
		func_882(var_293_object, "gamma_pills", 1, 2, 2);
		object var_298_object;
		var_245_object = var_298_object;
		func_882(var_298_object, "beta_pills", 1, 2, 2);
	}
	if(var_246_int >= 6) {
		object var_305_object;
		var_245_object = var_305_object;
		func_871(var_305_object, "packet", 1, 4);
		object var_309_object;
		var_245_object = var_309_object;
		func_871(var_309_object, "morfin", 1, 2);
		object var_313_object;
		var_245_object = var_313_object;
		func_871(var_313_object, "Scalpel", 1, 8);
		object var_317_object;
		var_245_object = var_317_object;
		func_882(var_317_object, "monomicin", 1, 2, 2);
	}
	if(var_246_int >= 9) {
		object var_324_object;
		var_245_object = var_324_object;
		func_871(var_324_object, "etorfin", 1, 2);
		object var_328_object;
		var_245_object = var_328_object;
		func_871(var_328_object, "feromicin", 1, 2);
		object var_332_object;
		var_245_object = var_332_object;
		func_882(var_332_object, "delta_pills", 1, 2, 2);
	}
	var_244_bool = true;
}


void func_864(void)
{
	bool var_21_bool;
	func_1454(var_21_bool);
	if(var_21_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_484(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, float var_78_float, float var_79_float)
{
	bool var_80_bool;
	func_669(var_80_bool);
	if(!var_80_bool) //@nz
		return 0;
	@FindActor(var_4_string, "player");
	var_2_object = false;
	var_0_bool = var_78_float;
	var_1_object = var_79_float;
	@SetTimer(10, 1.0);
	func_563();
	if(!false) //@nz
		@KillTimer(10);
}


void func_743(void)
{
	bool var_149_bool;
	@CameraSwitchToNormal(true);
	bool var_151_bool;
	func_1454(var_151_bool);
	if(var_151_bool != 0) {
	} else {
		@HasAnimationTrack(var_149_bool, "head");
		if(var_149_bool == 0) goto Label_760;
		@UnlookAsync("head");
	}
Label_760:
	
}


void func_871(object var_283_object, string var_284_string, int var_285_int, int var_286_int)
{
	bool var_288_bool;
	int var_290_int;
	var_285_int = var_290_int;
	int var_291_int;
	var_286_int = var_291_int;
	bool var_289_bool;
	func_956(var_289_bool, var_290_int, var_291_int);
	if(var_289_bool != 0)
		var_283_object->AddItem(var_288_bool, var_284_string, 0);
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_97_object, object var_98_object)
{
	var_0_bool = var_98_object;
	var_1_object = var_97_object;
	var_3_object = false;
	if(1 != 0) {
		func_172(var_98_object, "Neutral");
		var_0_bool->SetMessage(520509); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(524384, 25709, 25708); //@t
		var_0_bool->AddReply(520510, -1, 21713); //@t
		goto Label_142;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_142:
	bool var_128_bool;
	func_1454(var_128_bool);
	if(var_128_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_822(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_171;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_171:
		return 0;

	}
	
}


void func_882(object var_249_object, string var_250_string, int var_251_int, int var_252_int, int var_253_int)
{
	int var_256_int; bool var_257_bool;
	int var_259_int;
	var_251_int = var_259_int;
	int var_260_int;
	var_252_int = var_260_int;
	bool var_258_bool;
	func_956(var_258_bool, var_259_int, var_260_int);
	if(var_258_bool != 0) {
		@irand(var_256_int, var_253_int);
		var_249_object->AddItem(var_257_bool, var_250_string, 0, (var_253_int + 1));
	}
}


// @pe
void func_761(bool var_479_bool, object var_480_object)
{
	object var_482_object;
	var_480_object = var_482_object;
	bool var_481_bool;
	func_769(var_481_bool, var_482_object, (float)70);
	var_481_bool = var_479_bool;
}


// @pe
void func_1021(bool var_178_bool)
{
	var_178_bool = true;
}


void func_511(bool var_0_bool, object var_1_object, string var_4_string, bool var_21_bool)
{
	if(var_4_string == null)
		var_21_bool = false;
	float var_25_float;
	func_649(var_25_float, var_4_string);
	float var_23_float = sqrt(var_25_float);
	if(var_2_object != 0)
		var_23_float -= var_1_object;
	var_21_bool = var_23_float < var_0_bool;
}


