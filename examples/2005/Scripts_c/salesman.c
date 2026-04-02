task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, float var_17_float, int var_18_int)
	{
		bool var_19_bool;
		func_1432(var_19_bool);
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
			func_842();
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
			bool var_53_bool;
			func_1432(var_53_bool);
			if(var_53_bool != 0)
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
		func_1434(var_19_float, var_20_object);
		if(var_10_object > var_19_float) {
			int var_25_int; object var_26_object;
			var_18_object = var_26_object;
			TaskCall(1);
			func_40(var_27_object, var_25_int, var_26_object);
			TaskReturn();
			return 0;
		}
		int var_143_int;
		func_939(var_143_int);
		if(var_11_bool != var_143_int) {
			@Trace("Updating salesman");
			int var_151_int;
			func_939(var_151_int);
			var_11_bool = var_151_int;
			func_420();
		}
		bool var_467_bool; object var_468_object;
		var_18_object = var_468_object;
		func_759(var_467_bool, var_468_object);
		if(var_467_bool != 0) {
			object var_498_object;
			var_18_object = var_498_object;
			TaskCall(0);
			func_0(var_498_object);
			TaskReturn();
			object var_505_object;
			var_18_object = var_505_object;
			func_814();
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
					func_831(var_4_string);
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
		bool var_500_bool;
		func_1432(var_500_bool);
		if(var_500_bool == 0) goto Label_15;
		func_818("Neutral");
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


void func_642(bool var_126_bool)
{
	var_126_bool = true;
}


void func_644(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_901(string var_420_string, int var_421_int, int var_422_int, int var_423_int, int var_424_int)
{
	int var_427_int; bool var_428_bool;
	int var_430_int;
	var_421_int = var_430_int;
	int var_431_int;
	var_422_int = var_431_int;
	bool var_429_bool;
	func_934(var_429_bool, var_430_int, var_431_int);
	if(var_429_bool != 0) {
		@irand(var_427_int, ((var_424_int - var_423_int) + 1));
		@AddItem(var_428_bool, var_420_string, 0, (var_427_int + var_423_int));
	}
}


void func_649(float var_25_float, object var_26_object)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	var_26_object->GetPosition(var_31_cvector);
	var_25_float = (var_31_cvector - var_30_cvector) | (var_31_cvector - var_30_cvector);
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


void func_1424(int var_84_int)
{
	var_84_int = 531557;
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


void func_1426(int var_83_int)
{
	var_83_int = 531556;
}


void func_1428(string var_85_string)
{
	var_85_string = "ui/NPC_Citizen1.png";
}


void func_1430(string var_86_string)
{
	var_86_string = "ui/NPC_Citizen1_b.png";
}


void func_918(object var_33_object)
{
	object var_35_object;
	@self(var_35_object);
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_1432(bool var_78_bool)
{
	var_78_bool = false;
}


void func_1434(float var_19_float, object var_20_object)
{
	float var_22_float;
	var_20_object->GetProperty("reputation", var_22_float);
	var_22_float = var_19_float;
}


void func_924(cvector var_63_cvector, cvector var_64_cvector)
{
	float var_67_float = sqrt(var_64_cvector | var_64_cvector);
	if(var_67_float < 0.000001)
		var_63_cvector = [0.0, 0.0, 0.0];
	var_63_cvector = var_64_cvector / var_67_float;
}


void func_669(bool var_73_bool)
{
	bool var_75_bool;
	@IsLoaded(var_75_bool);
	var_75_bool = var_73_bool;
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
	func_924(var_63_cvector, (var_52_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_53_cvector = ((var_51_cvector * var_38_float) + (var_63_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0)
		var_36_bool = false;
	@StopWorld();
	@CameraTransit((var_50_cvector + var_53_cvector), var_52_cvector);
	var_76_float = GetByIndex(var_53_cvector, 0);
	var_77_float = GetByIndex(var_53_cvector, 2);
	@Rotate(var_76_float, var_77_float);
	bool var_78_bool;
	func_1432(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		@HasAnimationTrack(var_56_bool, "head");
		if(var_56_bool == 0) goto Label_736;
		@LookAsyncCamera("head");
	}
Label_736:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_36_bool = true;
	
}


void func_420(void)
{
	int var_154_int;
	func_939(var_154_int);
	int var_153_int;
	var_154_int = var_153_int;
	@ClearSubContainer(0);
	if(var_5_bool != 0) {
		bool var_157_bool; object var_158_object; int var_159_int;
		object var_161_object;
		func_918(var_161_object);
		var_161_object = var_158_object;
		var_153_int = var_159_int;
		func_948(var_157_bool, var_158_object, var_159_int, 1);
	}
	if(var_6_int != 0) {
		bool var_444_bool; object var_445_object; int var_446_int;
		object var_448_object;
		func_918(var_448_object);
		var_448_object = var_445_object;
		var_153_int = var_446_int;
		func_948(var_444_bool, var_445_object, var_446_int, 0);
	}
	if(var_7_int != 0) {
		bool var_450_bool; object var_451_object; int var_452_int;
		object var_454_object;
		func_918(var_454_object);
		var_454_object = var_451_object;
		var_153_int = var_452_int;
		func_948(var_450_bool, var_451_object, var_452_int, 3);
	}
	if(var_8_bool != 0) {
		bool var_456_bool; object var_457_object; int var_458_int;
		object var_460_object;
		func_918(var_460_object);
		var_460_object = var_457_object;
		var_153_int = var_458_int;
		func_948(var_456_bool, var_457_object, var_458_int, 2);
	}
	if(var_9_bool != 0) {
		bool var_462_bool; object var_463_object; int var_464_int;
		object var_466_object;
		func_918(var_466_object);
		var_466_object = var_463_object;
		var_153_int = var_464_int;
		func_948(var_462_bool, var_463_object, var_464_int, 4);
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


void func_934(bool var_179_bool, int var_180_int, int var_181_int)
{
	int var_183_int;
	@irand(var_183_int, var_181_int);
	var_179_bool = var_183_int < var_180_int;
}


void func_1407(int var_101_int)
{
	int var_104_int; bool var_105_bool;
	var_104_int = 0;
	
	for(;;) {
		string var_107_string; int var_108_int;
		var_104_int = var_108_int;
		func_1400(var_107_string, var_108_int);
		@HasAnimation(var_105_bool, "all", var_107_string);
		if(!var_105_bool) //@nz
			break;
		var_104_int += 1;
	}
	var_104_int = var_101_int;
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
	int var_83_int;
	func_1426(var_83_int);
	var_32_object->SetNPCName(var_83_int);
	int var_84_int;
	func_1424(var_84_int);
	var_32_object->SetNPCDescription(var_84_int);
	string var_85_string;
	func_1428(var_85_string);
	var_32_object->SetPhoto(var_85_string);
	string var_86_string;
	func_1430(var_86_string);
	var_32_object->SetPhoto2(var_86_string);
	int var_87_int;
	func_1383(var_87_int);
	var_32_object->SetPlayerName(var_87_int);
	bool var_33_bool;
	@IsOverrideActive(var_33_bool);
	if(var_33_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	@DoDialog(var_32_object);
	object var_96_object; object var_97_object;
	var_26_object = var_96_object;
	var_32_object = var_97_object;
	TaskCall(2);
	func_114(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object);
	TaskReturn();
	bool var_35_bool;
	var_32_object->IsDialogEnd(var_35_bool);
	
	for(;;) {
		var_135_bool = !var_35_bool; //@nz
		if(var_135_bool == 0) goto Label_103;
		@sync();
		var_32_object->IsDialogEnd(var_35_bool);
	}
	
Label_103:
	object var_136_object;
	var_26_object = var_136_object;
	func_742();
	@StopDialog(var_32_object);
	var_32_object->GetReturnValue(-1);
	int var_34_int = var_25_int;
}
EMIT "Stack[-4] = 0";


void func_939(int var_143_int)
{
	float var_145_float;
	@GetGameTime(var_145_float);
	var_143_int = 1 + (var_145_float / 24);
}


// @pe
void func_172(object var_2_object, string var_103_string)
{
	bool var_104_bool;
	func_1432(var_104_bool);
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
	func_825(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	
}


// @pe
void func_814(void)
{
	@CameraSwitchToNormal();
}


void func_818(string var_124_string)
{
	float var_127_float; float var_128_float;
	@lshGetAnimTimes(var_124_string, var_127_float, var_128_float);
	@lshPlayAnimation(var_127_float, var_128_float, false);
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
	func_1407(var_101_int);
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
				func_1400(var_123_string, var_124_int);
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


// @pe
void func_948(bool var_157_bool, object var_158_object, int var_159_int, int var_160_int)
{
	if(var_160_int == 0) {
		bool var_166_bool; object var_167_object; int var_168_int;
		var_158_object = var_167_object;
		var_159_int = var_168_int;
		func_999(var_168_int);
		var_166_bool = var_157_bool;
		return 0;
	EMIT "GOTO 0x3e0";
	}
	if(var_160_int == 1) {
		bool var_171_bool; object var_172_object; int var_173_int;
		var_158_object = var_172_object;
		var_159_int = var_173_int;
		func_1002(var_172_object, var_173_int);
		var_171_bool = var_157_bool;
		return 0;
	EMIT "GOTO 0x3e0";
	}
	if(var_160_int == 2) {
		bool var_232_bool; object var_233_object; int var_234_int;
		var_158_object = var_233_object;
		var_159_int = var_234_int;
		func_1095(var_232_bool, var_233_object, var_234_int);
		var_232_bool = var_157_bool;
		return 0;
	EMIT "GOTO 0x3e0";
	}
	if(var_160_int == 3) {
		bool var_327_bool; object var_328_object; int var_329_int;
		var_158_object = var_328_object;
		var_159_int = var_329_int;
		func_1216(var_328_object, var_329_int);
		var_327_bool = var_157_bool;
		return 0;
	}
	bool var_410_bool; object var_411_object; int var_412_int;
	var_158_object = var_411_object;
	var_159_int = var_412_int;
	func_1349(var_411_object, var_412_int);
	var_410_bool = var_157_bool;
}


void func_825(string var_107_string, bool var_108_bool)
{
	float var_113_float; float var_114_float;
	@lshGetAnimTimes(var_107_string, var_113_float, var_114_float);
	@lshPlayAnimation(var_113_float, var_114_float, var_108_bool);
}


void func_831(object var_35_object)
{
	float var_38_float;
	var_35_object->GetEyesHeight(var_38_float);
	cvector var_39_cvector = [0.0, 0.0, 0.0];
	var_40_float = GetByIndex(var_39_cvector, 1);
	var_38_float = var_40_float;
	SetByIndex(var_39_cvector, 1) = var_40_float;
	@LookAsync(var_35_object, "head", var_39_cvector);
}


void func_1216(bool var_327_bool, int var_329_int)
{
	int var_335_int;
	if(var_329_int < 3) {
		var_335_int = 2;
	} else if(var_329_int < 5) {
			var_335_int = 3;
	}

	for(;;) {
		int var_340_int;
		var_335_int = var_340_int;
		func_875("lemon", 1, var_340_int);
		int var_343_int;
		var_335_int = var_343_int;
		func_875("rusk", 1, var_343_int);
		if(var_329_int == 2) {
			func_886("dried_fish", 1, 1, 2);
			func_886("smoked_meat", 1, 1, 2);
			func_886("bread", 1, 1, 2);
			break;
		}
		int var_397_int;
		var_335_int = var_397_int;
		func_875("dried_fish", 1, var_397_int);
		int var_400_int;
		var_335_int = var_400_int;
		func_875("smoked_meat", 1, var_400_int);
		int var_403_int;
		var_335_int = var_403_int;
		func_875("bread", 1, var_403_int);

	}
	int var_370_int;
	var_335_int = var_370_int;
	func_875("egg", 1, var_370_int);
	int var_373_int;
	var_335_int = var_373_int;
	func_875("vegetables", 1, var_373_int);
	int var_376_int;
	var_335_int = var_376_int;
	func_875("milk", 1, var_376_int);
	int var_379_int;
	var_335_int = var_379_int;
	func_875("dried_meat", 1, var_379_int);
	int var_382_int;
	var_335_int = var_382_int;
	func_875("fresh_fish", 1, var_382_int);
	int var_385_int;
	var_335_int = var_385_int;
	func_875("fresh_meat", 1, var_385_int);
	func_875("funduk", 1, 20);
	func_875("peanut", 1, 20);
	func_875("walnut", 1, 20);
	var_327_bool = true;
	
	if(var_329_int < 7) {
		var_335_int = 3;
	} else if(var_329_int < 7) {
		var_335_int = 4;
	}
	var_335_int = 5;
}


// @pe
void func_1349(bool var_410_bool, int var_412_int)
{
	func_875("hook", 1, 5);
	func_886("needle", 2, 3, 3);
	func_901("kerosene", 9, 10, 4, 20);
	if(var_412_int >= 9)
		func_886("rifle_ammo", 1, 2, 5);
	var_410_bool = true;
}


void func_1095(bool var_232_bool, object var_233_object, int var_234_int)
{
	object var_237_object;
	var_233_object = var_237_object;
	func_860(var_237_object, "tourniquet", 1, 2, 10);
	object var_252_object;
	var_233_object = var_252_object;
	func_860(var_252_object, "alpha_pills", 1, 1, 10);
	object var_257_object;
	var_233_object = var_257_object;
	func_860(var_257_object, "meradorm", 1, 1, 2);
	if(var_234_int >= 3) {
		object var_264_object;
		var_233_object = var_264_object;
		func_860(var_264_object, "neomicin", 1, 1, 2);
	}
	if(var_234_int >= 4) {
		object var_271_object;
		var_233_object = var_271_object;
		func_849(var_271_object, "novocaine", 1, 2);
		object var_281_object;
		var_233_object = var_281_object;
		func_860(var_281_object, "gamma_pills", 1, 2, 2);
		object var_286_object;
		var_233_object = var_286_object;
		func_860(var_286_object, "beta_pills", 1, 2, 2);
	}
	if(var_234_int >= 6) {
		object var_293_object;
		var_233_object = var_293_object;
		func_849(var_293_object, "packet", 1, 4);
		object var_297_object;
		var_233_object = var_297_object;
		func_849(var_297_object, "morfin", 1, 2);
		object var_301_object;
		var_233_object = var_301_object;
		func_849(var_301_object, "Scalpel", 1, 8);
		object var_305_object;
		var_233_object = var_305_object;
		func_860(var_305_object, "monomicin", 1, 2, 2);
	}
	if(var_234_int >= 9) {
		object var_312_object;
		var_233_object = var_312_object;
		func_849(var_312_object, "etorfin", 1, 2);
		object var_316_object;
		var_233_object = var_316_object;
		func_849(var_316_object, "feromicin", 1, 2);
		object var_320_object;
		var_233_object = var_320_object;
		func_860(var_320_object, "delta_pills", 1, 2, 2);
	}
	var_232_bool = true;
}


void func_842(void)
{
	bool var_21_bool;
	func_1432(var_21_bool);
	if(var_21_bool != 0)
		@lshStopSpeech();
}


void func_333(bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, object var_10_object)
{
	int var_24_int; int var_25_int; int var_26_int; int var_27_int; int var_28_int; float var_29_float;
	object var_33_object;
	func_918(var_33_object);
	object var_31_object;
	var_33_object = var_31_object;
	bool var_30_bool;
	func_657(var_30_bool, var_31_object, "clothes");
	if(var_30_bool != 0)
		@GetProperty("clothes", var_24_int);
	bool var_43_bool; object var_44_object;
	object var_46_object;
	func_918(var_46_object);
	var_46_object = var_44_object;
	func_657(var_43_bool, var_44_object, "weapon");
	if(var_43_bool != 0)
		@GetProperty("weapon", var_25_int);
	bool var_48_bool; object var_49_object;
	object var_51_object;
	func_918(var_51_object);
	var_51_object = var_49_object;
	func_657(var_48_bool, var_49_object, "food");
	if(var_48_bool != 0)
		@GetProperty("food", var_26_int);
	bool var_53_bool; object var_54_object;
	object var_56_object;
	func_918(var_56_object);
	var_56_object = var_54_object;
	func_657(var_53_bool, var_54_object, "medcine");
	if(var_53_bool != 0)
		@GetProperty("medcine", var_27_int);
	bool var_58_bool; object var_59_object;
	object var_61_object;
	func_918(var_61_object);
	var_61_object = var_59_object;
	func_657(var_58_bool, var_59_object, "other");
	if(var_58_bool != 0)
		@GetProperty("other", var_28_int);
	bool var_63_bool; object var_64_object;
	object var_66_object;
	func_918(var_66_object);
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


void func_849(object var_271_object, string var_272_string, int var_273_int, int var_274_int)
{
	bool var_276_bool;
	int var_278_int;
	var_273_int = var_278_int;
	int var_279_int;
	var_274_int = var_279_int;
	bool var_277_bool;
	func_934(var_277_bool, var_278_int, var_279_int);
	if(var_277_bool != 0)
		var_271_object->AddItem(var_276_bool, var_272_string, 0);
}


void func_860(object var_237_object, string var_238_string, int var_239_int, int var_240_int, int var_241_int)
{
	int var_244_int; bool var_245_bool;
	int var_247_int;
	var_239_int = var_247_int;
	int var_248_int;
	var_240_int = var_248_int;
	bool var_246_bool;
	func_934(var_246_bool, var_247_int, var_248_int);
	if(var_246_bool != 0) {
		@irand(var_244_int, var_241_int);
		var_237_object->AddItem(var_245_bool, var_238_string, 0, (var_241_int + 1));
	}
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


void func_742(void)
{
	bool var_138_bool;
	@CameraSwitchToNormal();
	bool var_139_bool;
	func_1432(var_139_bool);
	if(var_139_bool != 0) {
	} else {
		@HasAnimationTrack(var_138_bool, "head");
		if(var_138_bool == 0) goto Label_758;
		@UnlookAsync("head");
	}
Label_758:
	
}


void func_1383(int var_87_int)
{
	int var_89_int;
	@GetVariable("branch", var_89_int);
	if(var_89_int == 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x576";
	}
	if(var_89_int == 1) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
}


// @pe
void func_999(bool var_166_bool)
{
	var_166_bool = true;
}


// @pe
void func_1002(bool var_171_bool, int var_173_int)
{
	func_875("drapery", 1, 2);
	if(var_173_int >= 2) {
		func_875("halfboot_repel", 1, 3);
		func_875("glove_disp", 1, 3);
		func_875("drapery", 1, 3);
	}
	if(var_173_int >= 4) {
		func_875("glove", 1, 4);
		func_875("cloak_repel", 1, 4);
	}
	if(var_173_int >= 5) {
		func_875("mask", 1, 8);
		func_875("boot_repel", 1, 4);
	}
	if(var_173_int >= 7)
		func_875("raincoat_repel", 1, 4);
	if(var_173_int >= 9) {
		func_875("glove_army", 1, 5);
		func_875("boot_army", 1, 5);
	}
	if(var_173_int >= 10)
		func_875("balahon", 1, 9);
	var_171_bool = true;
}


void func_875(string var_174_string, int var_175_int, int var_176_int)
{
	bool var_178_bool;
	int var_180_int;
	var_175_int = var_180_int;
	int var_181_int;
	var_176_int = var_181_int;
	bool var_179_bool;
	func_934(var_179_bool, var_180_int, var_181_int);
	if(var_179_bool != 0)
		@AddItem(var_178_bool, var_174_string, 0);
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_96_object, object var_97_object)
{
	var_0_bool = var_97_object;
	var_1_object = var_96_object;
	var_3_object = false;
	if(1 != 0) {
		func_172(var_97_object, "Neutral");
		var_0_bool->SetMessage(520509); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(524384, 25709, 25708); //@t
		var_0_bool->AddReply(520510, -1, 21713); //@t
		goto Label_142;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_142:
	bool var_122_bool;
	func_1432(var_122_bool);
	if(var_122_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_818(var_2_object);
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


void func_886(string var_346_string, int var_347_int, int var_348_int, int var_349_int)
{
	int var_352_int; bool var_353_bool;
	int var_355_int;
	var_347_int = var_355_int;
	int var_356_int;
	var_348_int = var_356_int;
	bool var_354_bool;
	func_934(var_354_bool, var_355_int, var_356_int);
	if(var_354_bool != 0) {
		@irand(var_352_int, var_349_int);
		@AddItem(var_353_bool, var_346_string, 0, (var_352_int + 1));
	}
}


// @pe
void func_759(bool var_467_bool, object var_468_object)
{
	object var_470_object;
	var_468_object = var_470_object;
	bool var_469_bool;
	func_767(var_469_bool, var_470_object, (float)70);
	var_469_bool = var_467_bool;
}


void func_1400(string var_107_string, int var_108_int)
{
	string var_110_string = "idle";
	if(var_108_int != 0)
		var_110_string += var_108_int;
	var_110_string = var_107_string;
}


void func_767(bool var_469_bool, object var_470_object, float var_471_float)
{
	cvector var_481_cvector;
	var_470_object->GetPosition(var_481_cvector);
	float var_480_float;
	var_470_object->GetEyesHeight(var_480_float);
	var_488_float = GetByIndex(var_481_cvector, 1);
	SetByIndex(var_481_cvector, 1) = (var_488_float + var_480_float);
	cvector var_482_cvector;
	@GetPosition(var_482_cvector);
	@GetEyesHeight(var_480_float);
	var_489_float = GetByIndex(var_482_cvector, 1);
	SetByIndex(var_482_cvector, 1) = (var_489_float + var_480_float);
	cvector var_483_cvector = var_481_cvector - var_482_cvector;
	var_490_float = GetByIndex(var_483_cvector, 1);
	SetByIndex(var_483_cvector, 1) = (float)0;
	var_492_float = sqrt(var_483_cvector | var_483_cvector);
	var_483_cvector /= var_492_float;
	cvector var_484_cvector = -var_483_cvector;
	cvector var_485_cvector = (var_483_cvector * var_471_float) - [0.0, 10.0, 0.0];
	bool var_487_bool;
	@IsOverrideActive(var_487_bool);
	if(var_487_bool != 0)
		var_469_bool = false;
	@StopWorld();
	@CameraTransit((var_482_cvector + var_485_cvector), var_484_cvector);
	var_496_float = GetByIndex(var_485_cvector, 0);
	var_497_float = GetByIndex(var_485_cvector, 2);
	@Rotate(var_496_float, var_497_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_469_bool = true;
}


