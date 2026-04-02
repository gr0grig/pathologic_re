maintask task_0
{
	void init(void)
	{
		bool var_9_bool; float var_10_float; float var_11_float; int var_12_int; float var_13_float; float var_14_float; float var_15_float; float var_16_float; float var_17_float;
	
		for(;;) {
			@Sleep(1.0);
			bool var_19_bool;
			func_148(var_19_bool);
			var_19_bool = var_9_bool;
			if(var_9_bool != 0)
				var_10_float = 200.0;
			else
				var_10_float = 1.0;
			@GetGameTimeScale(var_11_float);
			var_10_float *= var_11_float;
			@GetProperty("DiseaseSpeed", var_12_int);
			bool var_29_bool;
			func_129(var_29_bool, "hunger", (var_10_float * 0.041666668), (float)0, (float)1);
			@GetProperty("hunger", var_13_float);
			@GetProperty("immunity", var_14_float);
			if(var_14_float < 0.5) {
				if((var_14_float + (0.125 * var_10_float)) > 0.5)
					var_14_float = 0.5;
				@SetProperty("immunity", var_14_float);
			} else if(var_14_float > 0.5) {
						if((var_14_float - (0.0625 * var_10_float)) < 0)
							var_14_float = 0;
						@SetProperty("immunity", var_14_float);

			}
			@GetProperty("disease", var_15_float);
			if(var_15_float < 0.001) {
				var_15_float = 0;
			} else {
				if(var_15_float < 0.33333334)
					var_15_float += ((0.0069444445 * var_10_float) / var_12_int);
				else
					var_15_float += ((0.041666668 * var_10_float) / var_12_int);

				if(!(var_15_float > 1)) goto Label_84;
				var_15_float = 1;
			}
		Label_84:
			@SetProperty("disease", var_15_float);
			bool var_59_bool;
			if(var_9_bool != 0)
				var_65_float = -0.125;
			else
				var_83_float = 0.0625;

			func_129(var_59_bool, "tiredness", (var_10_float * var_65_float), (float)0, (float)1);
			@GetProperty("tiredness", var_16_float);
			var_17_float = 0;
			if(var_15_float >= 0.001)
				var_17_float += (var_15_float * 0.16666667);
			if(var_13_float == 1)
				var_17_float += 0.33333334;
			if(var_16_float == 1)
				var_17_float += 0.16666667;
			bool var_77_bool;
			var_82_int = -var_10_float;
			func_129(var_77_bool, "health", (var_82_int * var_17_float), (float)0, (float)1);
		}
	
	}
	EMIT "Return(); Pop(18)";

}


void func_129(bool var_29_bool, string var_30_string, float var_31_float, float var_32_float, float var_33_float)
{
	bool var_37_bool;
	@HasProperty(var_30_string, var_37_bool);
	if(!var_37_bool) //@nz
		var_29_bool = false;
	float var_38_float;
	@GetProperty(var_30_string, var_38_float);
	float var_40_float; float var_42_float; float var_43_float;
	var_32_float = var_42_float;
	var_33_float = var_43_float;
	func_161(var_40_float, (var_38_float + var_31_float), var_42_float, var_43_float);
	@SetProperty(var_30_string, var_40_float);
	var_29_bool = true;
}


// @pe
void func_161(float var_40_float, float var_41_float, float var_42_float, float var_43_float)
{
	if(var_41_float < var_42_float) {
		var_42_float = var_40_float;
		return 0;
	}
	if(var_41_float > var_43_float) {
		var_43_float = var_40_float;
		return 0;
	}
	var_41_float = var_40_float;
}


void func_148(bool var_19_bool)
{
	bool var_22_bool;
	@HasProperty("sleeping", var_22_bool);
	if(!var_22_bool) //@nz
		var_19_bool = false;
	bool var_23_bool;
	@GetProperty("sleeping", var_23_bool);
	var_23_bool = var_19_bool;
}


