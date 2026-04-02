maintask task_0
{
	void init(object var_0_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnIntersection(object actor, object var_1_object)
	{
		bool var_3_bool;
		@IsPlayerActor(var_1_object, var_3_bool);
		if(var_3_bool != 0) {
			object var_5_object;
			var_1_object = var_5_object;
			TaskCall(1);
			func_16(var_6_object, var_5_object);
			TaskReturn();
		}
	}

}


task task_1
{
	void OnUnload(object var_0_object)
	{
		@StopGroup0();
	}

	// @pe
	void OnStopIntersection(object actor, object var_1_object)
	{
		if(actor == var_1_object)
			@StopGroup0();
	}

}


void func_16(object var_0_object, object var_5_object)
{
	int var_9_int; bool var_10_bool;
	
	for(;;) {
		bool var_11_bool;
		func_55(var_11_bool, 0.5);
		if(var_11_bool != 0)
			var_15_string = "sound1";
		else
			var_22_string = "sound2";
		@PlaySound(var_15_string);
		@irand(var_9_int, 15);
		@Sleep((var_9_int + 15), var_10_bool);
		bool var_19_bool = true;
		var_20_bool = !var_10_bool; //@nz
		if(var_20_bool != 1) {
			var_21_bool = !var_5_object; //@nz
			if(var_21_bool != 1)
				var_19_bool = false;
		}
		if(var_19_bool != 0)
			break;
	}
	
}


void func_55(bool var_11_bool, float var_12_float)
{
	float var_14_float;
	@rand(var_14_float);
	var_11_bool = var_14_float < var_12_float;
}


