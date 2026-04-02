maintask task_0
{
	void init(float var_0_float)
	{
		float var_6_float;
		@Trace("dream effect inited");
		float var_4_float;
		@GetGameTime(var_4_float);
		float var_5_float;
		var_4_float = var_5_float;
	
		for(;;) {
			@sync();
			@GetGameTime(var_6_float);
			if(var_6_float <= var_5_float) {
			} else {
			func_21(var_6_float, (var_6_float - var_5_float));
			var_6_float = var_5_float;
			}
		}
	
	}
	EMIT "Return(); Pop(6)";

}


void func_57(bool var_22_bool, string var_23_string, string var_24_string)
{
	object var_26_object;
	@FindActor(var_26_object, var_23_string);
	if(var_26_object == null)
		var_22_bool = false;
	@Trigger(var_26_object, var_24_string);
	var_22_bool = true;
}
EMIT "Stack[-1] = 0";


void func_44(bool var_10_bool)
{
	bool var_13_bool;
	@HasProperty("sleeping", var_13_bool);
	if(!var_13_bool) //@nz
		var_10_bool = false;
	bool var_14_bool;
	@GetProperty("sleeping", var_14_bool);
	var_14_bool = var_10_bool;
}


// @pe
void func_21(float var_0_float, float var_9_float)
{
	bool var_10_bool;
	func_44(var_10_bool);
	if(var_10_bool != 0) {
		var_0_float += var_9_float;
	} else if(var_0_float > 4.0) {
		@Trace("dream time");
		var_0_float -= 4.0;
		@sync();
		bool var_22_bool;
		func_57(var_22_bool, "klara2_positioner", "sleep_end");
	}
	
}


