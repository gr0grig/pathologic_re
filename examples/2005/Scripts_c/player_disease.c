maintask task_0
{
	void init(float var_0_float, int var_1_int)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, float var_2_float, int var_3_int)
	{
		if(var_3_int == "disease") {
			bool var_6_bool;
			func_420(var_6_bool);
			if(!var_6_bool) { //@nz
				TaskCall(1);
				func_19(var_3_int);
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
	void OnPropertyChange(float var_0_float, int var_1_int, object var_2_object, string var_3_string)
	{
		float var_5_float;
		if(var_3_string == "disease") {
			bool var_8_bool;
			func_420(var_8_bool);
			if(var_8_bool != 0) {
				var_1_int = 1;
				@StopGroup0();
			}
			@GetProperty("disease", var_5_float);
			float var_14_float; float var_15_float;
			var_5_float = var_15_float;
			func_409(var_14_float, var_15_float, (float)0, (float)1);
			var_14_float = var_5_float;
			if(var_5_float > (var_0_float + 0.001)) {
				@StopGroup0();
			} else if((var_5_float + 0.001) < var_0_float) {
					var_1_int = 2;
					@StopGroup0();
			}
		}
		for(;;) {
			return 2;

		}
	
		var_0_float = var_5_float;
	}

}


void func_386(bool var_18_bool)
{
	bool var_21_bool;
	@HasProperty("sleeping", var_21_bool);
	if(!var_21_bool) //@nz
		var_18_bool = false;
	bool var_22_bool;
	@GetProperty("sleeping", var_22_bool);
	var_22_bool = var_18_bool;
}


// @pe
void func_323(float var_92_float, float var_93_float)
{
	@SetCameraFOV(var_93_float * (1 - (var_92_float * 0.75)));
}


void func_420(bool var_8_bool)
{
	float var_10_float;
	@GetProperty("disease", var_10_float);
	var_8_bool = var_10_float <= 0.001;
}


void func_200(bool var_35_bool, float var_36_float)
{
	bool var_55_bool;
	func_386(var_55_bool);
	if(var_55_bool != 0)
		var_35_bool = false;
	@PlaySound("sick");
	bool var_46_bool;
	@LockCameraRoll(var_46_bool);
	bool var_47_bool;
	@LockCameraFOV(var_47_bool);
	float var_48_float;
	@irand(var_48_float, 2);
	var_48_float = 0.62831855 * (var_48_float - 0.5);
	if(var_36_float < 0.25)
		var_63_float = 0.25;
	else
		var_115_float = var_36_float;
	var_48_float *= var_63_float;
	float var_49_float;
	@GetCameraCurrentFOV(var_49_float);
	float var_50_float = 0.5 + (0.5 * var_36_float);
	float var_52_float = 0;
	
Label_239:
	float var_53_float;
	@sync(var_53_float);
	var_52_float += (var_53_float * var_50_float);
	if(var_46_bool != 0) {
		float var_72_float; float var_73_float;
		var_52_float = var_72_float;
		var_48_float = var_73_float;
		func_303(var_72_float, var_73_float);
	}
	if(var_47_bool != 0) {
		float var_92_float; float var_93_float;
		var_52_float = var_92_float;
		var_49_float = var_93_float;
		func_323(var_92_float, var_93_float);
	}
	@ModDarkenLevel(var_52_float);
	var_99_bool = var_52_float < (0.25 + (0.75 * var_36_float));
	if(var_99_bool == 1) goto Label_239;
	float var_51_float = var_52_float;
	
Label_262:
	float var_54_float;
	@sync(var_54_float);
	var_52_float -= ((var_54_float * var_50_float) / 5);
	if(var_46_bool != 0) {
		float var_104_float; float var_105_float;
		var_52_float = var_104_float;
		var_48_float = var_105_float;
		func_303(var_104_float, var_105_float);
	}
	if(var_47_bool != 0) {
		float var_107_float; float var_108_float;
		var_52_float = var_107_float;
		var_49_float = var_108_float;
		func_323(var_107_float, var_108_float);
	}
	@ModDarkenLevel(var_52_float);
	var_110_bool = var_52_float > 0;
	if(var_110_bool == 1) goto Label_262;
	@UnlockCameraFOV(var_47_bool);
	@UnlockCameraRoll(var_46_bool);
	@ModBlurLevel(var_36_float / 2);
	@Sleep(10);
	@ModBlurLevel(0);
	var_35_bool = true;
	
}


void func_332(object var_0_object, string var_1_string, int var_131_int, float var_132_float)
{
	@GetProperty("disease", var_0_object);
	float var_138_float;
	func_409(var_138_float, var_0_object, (float)0, (float)1);
	var_0_object = var_138_float;
	bool var_136_bool;
	@Sleep(var_132_float, var_136_bool);
	var_131_int = 0;
}


void func_303(float var_72_float, float var_73_float)
{
	float var_77_float = var_72_float * var_73_float;
	@SetCameraRoll(var_77_float);
	cvector var_78_cvector;
	@GetForce(var_78_cvector);
	cvector var_79_cvector;
	@GetDirection(var_79_cvector);
	cvector var_80_cvector;
	func_399(var_80_cvector, (var_79_cvector ^ [0.0, 1.0, 0.0]));
	@SetForce(var_78_cvector + ((var_80_cvector * var_77_float) * 1500));
}


void func_399(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


void func_19(float var_133_float)
{
	float var_16_float; int var_17_int;
	bool var_18_bool;
	func_386(var_18_bool);
	if(var_18_bool != 0)
		return 6;
	@Trace("Disease effect started");
	float var_15_float;
	@GetProperty("disease", var_15_float);
	float var_28_float;
	func_409(var_28_float, (var_15_float * 2), (float)0, (float)1);
	var_28_float = var_15_float;
	bool var_35_bool; float var_36_float;
	func_200(var_35_bool, var_36_float);
	if(var_35_bool != 0) {

		for(;;) {
			bool var_116_bool;
			func_420(var_116_bool);
			if(!var_116_bool) { //@nz
				@GetProperty("disease", var_36_float);
				float var_119_float; float var_120_float;
				var_15_float = var_120_float;
				func_409(var_119_float, var_120_float, (float)0, (float)1);
				var_119_float = var_15_float;
				@rand(var_16_float, (600 - (var_15_float * 500)), (1200 - (var_15_float * 1000)));
				int var_131_int; float var_132_float;
				var_16_float = var_132_float;
				TaskCall(2);
				func_332(var_133_float, var_134_int, var_131_int, var_132_float);
				TaskReturn();
				var_133_float = var_17_int;
				@GetProperty("disease", var_15_float);
				float var_143_float; float var_144_float;
				func_409(var_143_float, var_144_float, (float)0, (float)1);
				var_143_float = var_144_float;
				if(1 == var_17_int) {
					bool var_149_bool;
					func_118(var_149_bool, 0.1);
					goto Label_114;
				EMIT "GOTO 0x71";
			}
	}
		Label_114:
			for(;;) {
				@Trace("Disease effect stopped");
				return 6;
		}
			if(2 == var_17_int) {
				bool var_203_bool; float var_204_float;
				var_15_float = var_204_float;
				func_118(var_203_bool, var_204_float);
				var_205_bool = !var_203_bool; //@nz
				if(var_205_bool == 0) goto Label_105;
			}

		Label_105:
			} else {
		bool var_206_bool; float var_207_float;
		var_15_float = var_207_float;
		func_200(var_206_bool, var_207_float);
		var_208_bool = !var_206_bool; //@nz
		if(var_208_bool == 0) goto Label_113;
		goto Label_114;
			}
	Label_113:
	}
	
}


void func_118(bool var_149_bool, float var_150_float)
{
	bool var_169_bool;
	func_386(var_169_bool);
	if(var_169_bool != 0)
		var_149_bool = false;
	@PlaySound("sick");
	bool var_160_bool;
	@LockCameraRoll(var_160_bool);
	bool var_161_bool;
	@LockCameraFOV(var_161_bool);
	float var_162_float;
	@irand(var_162_float, 2);
	var_162_float = 0.62831855 * (var_162_float - 0.5);
	float var_163_float;
	@GetCameraCurrentFOV(var_163_float);
	float var_164_float = 0.5 + (0.5 * var_150_float);
	float var_166_float = 0;
	
Label_150:
	float var_167_float;
	@sync(var_167_float);
	var_166_float += (var_167_float * var_164_float);
	if(var_160_bool != 0) {
		float var_183_float; float var_184_float;
		var_166_float = var_183_float;
		var_162_float = var_184_float;
		func_303(var_183_float, var_184_float);
	}
	if(var_161_bool != 0) {
		float var_186_float; float var_187_float;
		var_166_float = var_186_float;
		var_163_float = var_187_float;
		func_323(var_186_float, var_187_float);
	}
	var_188_bool = var_166_float < (0.25 + (0.75 * var_150_float));
	if(var_188_bool == 1) goto Label_150;
	float var_165_float = var_166_float;
	
Label_171:
	float var_168_float;
	@sync(var_168_float);
	var_166_float -= ((var_168_float * var_164_float) / 5);
	if(var_160_bool != 0) {
		float var_193_float; float var_194_float;
		var_166_float = var_193_float;
		var_162_float = var_194_float;
		func_303(var_193_float, var_194_float);
	}
	if(var_161_bool != 0) {
		float var_196_float; float var_197_float;
		var_166_float = var_196_float;
		var_163_float = var_197_float;
		func_323(var_196_float, var_197_float);
	}
	var_199_bool = var_166_float > 0;
	if(var_199_bool == 1) goto Label_171;
	@UnlockCameraFOV(var_161_bool);
	@UnlockCameraRoll(var_160_bool);
	var_149_bool = true;
}


// @pe
void func_409(float var_14_float, float var_15_float, float var_16_float, float var_17_float)
{
	if(var_15_float < var_16_float) {
		var_16_float = var_14_float;
		return 0;
	}
	if(var_15_float > var_17_float) {
		var_17_float = var_14_float;
		return 0;
	}
	var_15_float = var_14_float;
}


