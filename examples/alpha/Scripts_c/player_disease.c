maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string)
	{
		if(var_1_string == "disease") {
			bool var_4_bool;
			func_248(var_4_bool);
			if(!var_4_bool) { //@nz
				TaskCall(1);
				func_19();
				TaskReturn();
			}
		}
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string)
	{
		if(var_1_string == "disease") {
			bool var_4_bool;
			func_248(var_4_bool);
			if(var_4_bool != 0)
				@StopGroup0();
		}
	}

}


void func_227(cvector var_63_cvector, cvector var_64_cvector)
{
	float var_67_float = sqrt(var_64_cvector | var_64_cvector);
	if(var_67_float < 0.000001)
		var_63_cvector = [0.0, 0.0, 0.0];
	var_63_cvector = var_64_cvector / var_67_float;
}


// @pe
void func_202(float var_75_float, float var_76_float)
{
	@SetCameraFOV(var_76_float * (1 - (var_75_float * 0.75)));
}


// @pe
void func_237(float var_16_float, float var_17_float, float var_18_float, float var_19_float)
{
	if(var_17_float < var_18_float) {
		var_18_float = var_16_float;
		return 0;
	}
	if(var_17_float > var_19_float) {
		var_19_float = var_16_float;
		return 0;
	}
	var_17_float = var_16_float;
}


void func_19(void)
{
	float var_13_float;
	@Trace("Disease effect started");
	float var_12_float;
	@GetProperty("disease", var_12_float);
	float var_16_float;
	func_237(var_16_float, (var_12_float * 2), (float)0, (float)1);
	var_16_float = var_12_float;
	bool var_23_bool; float var_24_float;
	func_95(var_23_bool, var_24_float);
	if(var_23_bool != 0) {

		for(;;) {
			bool var_98_bool;
			func_248(var_98_bool);
			if(!var_98_bool) { //@nz
				@GetProperty("disease", var_24_float);
				float var_101_float; float var_102_float;
				var_12_float = var_102_float;
				func_237(var_101_float, var_102_float, (float)0, (float)1);
				var_101_float = var_12_float;
				@rand(var_13_float, (30 - (var_12_float * 15)), (120 - (var_12_float * 80)));
				bool var_113_bool; float var_114_float;
				var_13_float = var_114_float;
				TaskCall(2);
				func_211(var_113_bool, var_114_float);
				TaskReturn();
				if(!var_113_bool) { //@nz
				} else {
						@GetProperty("disease", var_12_float);
						float var_120_float; float var_121_float;
						func_237(var_120_float, var_121_float, (float)0, (float)1);
						var_120_float = var_121_float;
						bool var_124_bool; float var_125_float;
						var_12_float = var_125_float;
						func_95(var_124_bool, var_125_float);
						var_126_bool = !var_124_bool; //@nz
						if(var_126_bool == 0) goto Label_90;
				}
			}
	}
		for(;;) {
			@Trace("Disease effect stopped");

		}

	Label_90:
	}
}


void func_211(bool var_113_bool, float var_114_float)
{
	bool var_116_bool;
	@Sleep(var_114_float, var_116_bool);
	var_116_bool = var_113_bool;
}


void func_182(float var_55_float, float var_56_float)
{
	float var_60_float = var_55_float * var_56_float;
	@SetCameraRoll(var_60_float);
	cvector var_61_cvector;
	@GetForce(var_61_cvector);
	cvector var_62_cvector;
	@GetDirection(var_62_cvector);
	cvector var_63_cvector;
	func_227(var_63_cvector, (var_62_cvector ^ [0.0, 1.0, 0.0]));
	@SetForce(var_61_cvector + ((var_63_cvector * var_60_float) * 1500));
}


void func_248(bool var_4_bool)
{
	float var_6_float;
	@GetProperty("disease", var_6_float);
	var_4_bool = var_6_float <= 0.01;
}


void func_95(bool var_23_bool, float var_24_float)
{
	bool var_34_bool;
	@LockCameraRoll(var_34_bool);
	bool var_35_bool;
	@LockCameraFOV(var_35_bool);
	float var_36_float;
	@irand(var_36_float, 2);
	var_36_float = 0.62831855 * (var_36_float - 0.5);
	float var_37_float;
	@GetCameraCurrentFOV(var_37_float);
	float var_38_float = 0.5 + (0.5 * var_24_float);
	float var_40_float = 0;
	
Label_118:
	float var_41_float;
	@sync(var_41_float);
	var_40_float += (var_41_float * var_38_float);
	if(var_34_bool != 0) {
		float var_55_float; float var_56_float;
		var_40_float = var_55_float;
		var_36_float = var_56_float;
		func_182(var_55_float, var_56_float);
	}
	if(var_35_bool != 0) {
		float var_75_float; float var_76_float;
		var_40_float = var_75_float;
		var_37_float = var_76_float;
		func_202(var_75_float, var_76_float);
	}
	@ModDarkenLevel(var_40_float);
	var_82_bool = var_40_float < (0.5 + (0.5 * var_24_float));
	if(var_82_bool == 1) goto Label_118;
	float var_39_float = var_40_float;
	
Label_141:
	float var_42_float;
	@sync(var_42_float);
	var_40_float -= ((var_42_float * var_38_float) / 5);
	if(var_34_bool != 0) {
		float var_87_float; float var_88_float;
		var_40_float = var_87_float;
		var_36_float = var_88_float;
		func_182(var_87_float, var_88_float);
	}
	if(var_35_bool != 0) {
		float var_90_float; float var_91_float;
		var_40_float = var_90_float;
		var_37_float = var_91_float;
		func_202(var_90_float, var_91_float);
	}
	@ModDarkenLevel(var_40_float);
	var_93_bool = var_40_float > 0;
	if(var_93_bool == 1) goto Label_141;
	@UnlockCameraFOV(var_35_bool);
	@UnlockCameraRoll(var_34_bool);
	@ModBlurLevel(var_24_float / 2);
	@Sleep(10);
	@ModBlurLevel(0);
	var_23_bool = true;
}


