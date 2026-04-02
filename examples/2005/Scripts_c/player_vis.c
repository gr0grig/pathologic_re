maintask task_0
{
	void init(void)
	{
		float var_2_float;
	
		for(;;) {
			@GetGameTime(var_2_float);
			var_2_float = var_2_float % 24;
			if(var_2_float <= 6.0) {
			} else {
			if(var_2_float <= 8.0) {
				float var_10_float; float var_11_float;
				var_2_float = var_11_float;
				func_49(var_10_float, var_11_float, 6.0, 8.0, 0.15686275, 0.47058824);
				var_10_float = 0.15686275;
			} else if(var_2_float <= 20.0) {
			} else if(var_2_float <= 21.0) {
				float var_28_float; float var_29_float;
				var_2_float = var_29_float;
				func_49(var_28_float, var_29_float, 20.0, 21.0, 0.47058824, 0.15686275);
				var_28_float = 0.47058824;
			}
			}
			@SetBaseVisibility(0.15686275);
			@Sleep(5);
		}
	
	}
	EMIT "Return(); Pop(4)";

}


void func_49(float var_10_float, float var_11_float, float var_12_float, float var_13_float, float var_14_float, float var_15_float)
{
	var_10_float = (var_14_float * (1 - ((var_11_float - var_12_float) / (var_13_float - var_12_float)))) + (var_15_float * ((var_11_float - var_12_float) / (var_13_float - var_12_float)));
}


