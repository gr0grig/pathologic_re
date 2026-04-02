maintask task_0
{
	void init(bool var_0_bool)
	{
		float var_2_float;
	
		for(;;) {
			@sync(var_2_float);
			var_3_int = -var_2_float;
			@Trace(var_3_int / 4.0);
			bool var_6_bool;
			var_11_int = -var_2_float;
			func_25(var_6_bool, "health", (var_11_int / 2.0), (float)0, (float)1);
			var_25_int = -var_2_float;
			func_55(var_25_int / 3.0);
		}
	}
	EMIT "Return(); Pop(2)";

}


void func_25(bool var_6_bool, string var_7_string, float var_8_float, float var_9_float, float var_10_float)
{
	bool var_15_bool;
	@HasProperty(var_7_string, var_15_bool);
	if(!var_15_bool) //@nz
		var_6_bool = false;
	float var_16_float;
	@GetProperty(var_7_string, var_16_float);
	float var_18_float; float var_20_float; float var_21_float;
	var_9_float = var_20_float;
	var_10_float = var_21_float;
	func_44(var_18_float, (var_16_float + var_8_float), var_20_float, var_21_float);
	@SetProperty(var_7_string, var_18_float);
	var_6_bool = true;
}


// @pe
void func_44(float var_18_float, float var_19_float, float var_20_float, float var_21_float)
{
	if(var_19_float < var_20_float) {
		var_20_float = var_18_float;
		return 0;
	}
	if(var_19_float > var_21_float) {
		var_21_float = var_18_float;
		return 0;
	}
	var_19_float = var_18_float;
}


void func_55(float var_24_float)
{
	object var_28_object;
	@CreateFloatVector(var_28_object);
	var_28_object->add(var_24_float);
	if(var_24_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_28_object);
}
EMIT "Stack[-1] = 0";


