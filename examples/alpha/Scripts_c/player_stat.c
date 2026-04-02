maintask task_0
{
	void init(void)
	{
		bool var_10_bool; float var_11_float; float var_12_float; float var_13_float; float var_15_float; float var_16_float; float var_17_float; float var_18_float; float var_19_float;
	
		for(;;) {
			@Sleep(1.0);
			bool var_21_bool;
			func_122(var_21_bool);
			var_21_bool = var_10_bool;
			if(var_10_bool != 0)
				var_11_float = 200.0;
			else
				var_11_float = 1.0;
			@GetGameTimeScale(var_12_float);
			var_11_float *= var_12_float;
			@GetProperty("DiseaseSpeed", var_13_float);
			bool var_33_bool;
			func_103(var_33_bool, "hunger", (var_11_float * 0.041666668), (float)0, (float)1);
			@GetProperty("hunger", var_15_float);
			bool var_51_bool;
			var_56_int = -var_11_float;
			func_103(var_51_bool, "immunity", (var_56_int * 0.0625), (float)0, (float)1);
			@GetProperty("immunity", var_16_float);
			@GetProperty("disease", var_17_float);
			if((var_17_float + ((var_11_float * ((1.0 / var_13_float) - (var_16_float * ((1.0 / var_13_float) * 0.7)))) * var_17_float)) < 0.01) {
			} else if((float)0 > 1) {
				var_17_float = 1;

			}
			@SetProperty("disease", var_17_float);
			bool var_67_bool;
			if(var_10_bool != 0)
				var_73_float = -0.125;
			else
				var_88_float = 0.0625;

			func_103(var_67_bool, "tiredness", (var_11_float * var_73_float), (float)0, (float)1);
			@GetProperty("tiredness", var_18_float);
			var_19_float = var_17_float * 0.16666667;
			if(var_15_float == 1)
				var_19_float += 0.33333334;
			if(var_18_float == 1)
				var_19_float += 0.16666667;
			bool var_82_bool;
			var_87_int = -var_11_float;
			func_103(var_82_bool, "health", (var_87_int * var_19_float), (float)0, (float)1);
		}
	
	}
	EMIT "Return(); Pop(20)";

}


// @pe
void func_135(float var_44_float, float var_45_float, float var_46_float, float var_47_float)
{
	if(var_45_float < var_46_float) {
		var_46_float = var_44_float;
		return 0;
	}
	if(var_45_float > var_47_float) {
		var_47_float = var_44_float;
		return 0;
	}
	var_45_float = var_44_float;
}


void func_122(bool var_21_bool)
{
	bool var_24_bool;
	@HasProperty("sleeping", var_24_bool);
	if(!var_24_bool) //@nz
		var_21_bool = false;
	bool var_25_bool;
	@GetProperty("sleeping", var_25_bool);
	var_25_bool = var_21_bool;
}


void func_103(bool var_33_bool, string var_34_string, float var_35_float, float var_36_float, float var_37_float)
{
	bool var_41_bool;
	@HasProperty(var_34_string, var_41_bool);
	if(!var_41_bool) //@nz
		var_33_bool = false;
	float var_42_float;
	@GetProperty(var_34_string, var_42_float);
	float var_44_float; float var_46_float; float var_47_float;
	var_36_float = var_46_float;
	var_37_float = var_47_float;
	func_135(var_44_float, (var_42_float + var_35_float), var_46_float, var_47_float);
	@SetProperty(var_34_string, var_44_float);
	var_33_bool = true;
}


