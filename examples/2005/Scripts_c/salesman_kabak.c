task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, bool var_4_bool, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, float var_12_float)
	{
		bool var_13_bool;
		func_529(var_13_bool);
		if(var_13_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


maintask task_1
{
	void init(bool var_0_bool, int var_1_int, int var_2_int, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, float var_11_float)
	{
		bool var_12_bool;
		func_295(var_12_bool);
		if(!var_12_bool) //@nz
			@Hold();
		while(true != 0) {
			func_122(var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, int var_1_int, int var_2_int, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, float var_11_float)
	{
		func_187(var_10_bool, var_11_float);
		@Hold();
	}

	void OnLoad(bool var_0_bool, int var_1_int, int var_2_int, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, float var_11_float)
	{
		@StopGroup0();
	}

	void OnUse(bool var_0_bool, int var_1_int, int var_2_int, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, float var_11_float, object var_12_object)
	{
		int var_14_int;
		@GetVariable("tr_salesman_kabak", var_14_int);
		int var_16_int;
		func_414(var_16_int);
		if(var_14_int != var_16_int) {
			@Trace("Updating salesman");
			int var_25_int;
			func_414(var_25_int);
			@SetVariable("tr_salesman_kabak", var_25_int);
			func_102();
		}
		bool var_101_bool; object var_102_object;
		var_12_object = var_102_object;
		func_300(var_101_bool, var_102_object);
		if(var_101_bool != 0) {
			object var_132_object;
			var_12_object = var_132_object;
			TaskCall(0);
			func_0(var_132_object);
			TaskReturn();
			object var_144_object;
			var_12_object = var_144_object;
			func_355();
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, int var_1_int, int var_2_int, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, float var_11_float, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_149(var_10_bool, var_11_float, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_int) { //@nz
					func_366(var_4_bool);
					var_2_int = true;
				}
			} else if(var_2_int != 0) {
				@UnlookAsync("head");
				var_2_int = false;
			}
		}
	
	}

}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_134_bool;
		func_529(var_134_bool);
		if(var_134_bool == 0) goto Label_15;
		func_359("Neutral");
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


void func_512(int var_40_int)
{
	int var_43_int; bool var_44_bool;
	var_43_int = 0;
	
	for(;;) {
		string var_46_string; int var_47_int;
		var_43_int = var_47_int;
		func_505(var_46_string, var_47_int);
		@HasAnimation(var_44_bool, "all", var_46_string);
		if(!var_44_bool) //@nz
			break;
		var_43_int += 1;
	}
	var_43_int = var_40_int;
}


void func_388(object var_37_object, string var_38_string, int var_39_int, int var_40_int, int var_41_int)
{
	int var_44_int; bool var_45_bool;
	int var_47_int;
	var_39_int = var_47_int;
	int var_48_int;
	var_40_int = var_48_int;
	bool var_46_bool;
	func_409(var_46_bool, var_47_int, var_48_int);
	if(var_46_bool != 0) {
		@irand(var_44_int, var_41_int);
		var_37_object->AddItem(var_45_bool, var_38_string, 0, (var_41_int + 1));
	}
}


void func_529(bool var_134_bool)
{
	var_134_bool = false;
}


void func_403(object var_33_object)
{
	object var_35_object;
	@self(var_35_object);
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_149(bool var_0_bool, int var_1_int, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_287(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_int != 0)
		var_17_float -= var_1_int;
	var_15_bool = var_17_float < var_0_bool;
}


void func_280(bool var_65_bool)
{
	var_65_bool = true;
}


void func_409(bool var_46_bool, int var_47_int, int var_48_int)
{
	int var_50_int;
	@irand(var_50_int, var_48_int);
	var_46_bool = var_50_int < var_47_int;
}


void func_282(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_414(int var_16_int)
{
	float var_18_float;
	@GetGameTime(var_18_float);
	var_16_int = 1 + (var_18_float / 24);
}


void func_287(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_295(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


// @pe
void func_423(bool var_30_bool, object var_31_object)
{
	object var_37_object;
	var_31_object = var_37_object;
	func_388(var_37_object, "coffee", 1, 1, 2);
	object var_54_object;
	var_31_object = var_54_object;
	func_388(var_54_object, "tvirin", 1, 1, 2);
	object var_59_object;
	var_31_object = var_59_object;
	func_377(var_59_object, "silver_ring", 1, 2);
	object var_69_object;
	var_31_object = var_69_object;
	func_377(var_69_object, "gold_ring", 1, 2);
	object var_73_object;
	var_31_object = var_73_object;
	func_377(var_73_object, "bracelet", 1, 2);
	object var_77_object;
	var_31_object = var_77_object;
	func_377(var_77_object, "watch", 1, 2);
	object var_81_object;
	var_31_object = var_81_object;
	func_377(var_81_object, "beads", 1, 2);
	object var_85_object;
	var_31_object = var_85_object;
	func_377(var_85_object, "ear_ring", 1, 2);
	object var_89_object;
	var_31_object = var_89_object;
	func_377(var_89_object, "flower", 1, 2);
	object var_93_object;
	var_31_object = var_93_object;
	func_377(var_93_object, "hook", 1, 4);
	object var_97_object;
	var_31_object = var_97_object;
	func_377(var_97_object, "morfin", 1, 4);
	var_30_bool = true;
}


// @pe
void func_300(bool var_101_bool, object var_102_object)
{
	object var_104_object;
	var_102_object = var_104_object;
	bool var_103_bool;
	func_308(var_103_bool, var_104_object, (float)70);
	var_103_bool = var_101_bool;
}


void func_308(bool var_103_bool, object var_104_object, float var_105_float)
{
	cvector var_115_cvector;
	var_104_object->GetPosition(var_115_cvector);
	float var_114_float;
	var_104_object->GetEyesHeight(var_114_float);
	var_122_float = GetByIndex(var_115_cvector, 1);
	SetByIndex(var_115_cvector, 1) = (var_122_float + var_114_float);
	cvector var_116_cvector;
	@GetPosition(var_116_cvector);
	@GetEyesHeight(var_114_float);
	var_123_float = GetByIndex(var_116_cvector, 1);
	SetByIndex(var_116_cvector, 1) = (var_123_float + var_114_float);
	cvector var_117_cvector = var_115_cvector - var_116_cvector;
	var_124_float = GetByIndex(var_117_cvector, 1);
	SetByIndex(var_117_cvector, 1) = (float)0;
	var_126_float = sqrt(var_117_cvector | var_117_cvector);
	var_117_cvector /= var_126_float;
	cvector var_118_cvector = -var_117_cvector;
	cvector var_119_cvector = (var_117_cvector * var_105_float) - [0.0, 10.0, 0.0];
	bool var_121_bool;
	@IsOverrideActive(var_121_bool);
	if(var_121_bool != 0)
		var_103_bool = false;
	@StopWorld();
	@CameraTransit((var_116_cvector + var_119_cvector), var_118_cvector);
	var_130_float = GetByIndex(var_119_cvector, 0);
	var_131_float = GetByIndex(var_119_cvector, 2);
	@Rotate(var_130_float, var_131_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_103_bool = true;
}


// @pe
void func_187(int var_2_int, bool var_3_bool)
{
	func_282();
	@KillTimer(10);
	if(var_2_int != 0) {
		@UnlookAsync("head");
		var_2_int = false;
	}
	var_3_bool = true;
}


void func_201(void)
{
	int var_33_int; int var_34_int; bool var_35_bool; float var_36_float; bool var_37_bool;
	@WaitForAnimEnd();
	bool var_38_bool;
	func_295(var_38_bool);
	if(!var_38_bool) //@nz
		return 14;
	int var_40_int;
	func_512(var_40_int);
	int var_31_int;
	var_40_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_53_bool = false;
		if(var_32_int < 5) {
			bool var_56_bool;
			func_295(var_56_bool);
			if(var_56_bool != 0)
				var_53_bool = true;
		}
		if(var_53_bool != 0) {
			@irand(var_33_int, 3);
			if(var_33_int == 0) {
				if(var_31_int == 0) goto Label_248;
				@irand(var_34_int, var_31_int);
				string var_62_string; int var_63_int;
				var_34_int = var_63_int;
				func_505(var_62_string, var_63_int);
				@PlayAnimation("all", var_62_string);
				@WaitForAnimEnd(var_35_bool);
				if(!var_35_bool) { //@nz
				} else {
			} else {
			if(var_33_int == 1) {
				@rand(var_36_float, 4);
				@Sleep((var_36_float + 1), var_37_bool);
				if(!var_37_bool) { //@nz
					goto Label_277;
				}
			} else if(var_32_int != 0) {
				goto Label_277;
			}
			}
					bool var_65_bool;
					func_280(var_65_bool);
					var_66_bool = !var_65_bool; //@nz
					if(var_66_bool == 0) goto Label_272;
			}
		}
	Label_277:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_272:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


// @pe
void func_355(void)
{
	@CameraSwitchToNormal();
}


void func_102(void)
{
	int var_28_int;
	func_414(var_28_int);
	int var_27_int;
	var_28_int = var_27_int;
	@ClearSubContainer(0);
	object var_31_object; int var_32_int;
	object var_33_object;
	func_403(var_33_object);
	var_33_object = var_31_object;
	int var_36_int;
	func_414(var_36_int);
	var_36_int = var_32_int;
	func_423(var_31_object, var_32_int);
}


void func_359(string var_135_string)
{
	float var_138_float; float var_139_float;
	@lshGetAnimTimes(var_135_string, var_138_float, var_139_float);
	@lshPlayAnimation(var_138_float, var_139_float, false);
}


void func_377(object var_59_object, string var_60_string, int var_61_int, int var_62_int)
{
	bool var_64_bool;
	int var_66_int;
	var_61_int = var_66_int;
	int var_67_int;
	var_62_int = var_67_int;
	bool var_65_bool;
	func_409(var_65_bool, var_66_int, var_67_int);
	if(var_65_bool != 0)
		var_59_object->AddItem(var_64_bool, var_60_string, 0);
}


void func_366(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_505(string var_46_string, int var_47_int)
{
	string var_49_string = "idle";
	if(var_47_int != 0)
		var_49_string += var_47_int;
	var_49_string = var_46_string;
}


// @pe
void func_122(bool var_0_bool, int var_1_int, int var_2_int, bool var_3_bool, bool var_4_bool, float var_17_float, float var_18_float)
{
	bool var_19_bool;
	func_295(var_19_bool);
	if(!var_19_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_int = false;
	var_0_bool = var_17_float;
	var_1_int = var_18_float;
	@SetTimer(10, 1.0);
	func_201();
	if(!false) //@nz
		@KillTimer(10);
}


