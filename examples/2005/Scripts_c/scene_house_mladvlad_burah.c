maintask task_0
{
	// @pe
	void init(object var_0_object, bool var_1_bool)
	{
		func_34(var_1_bool);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object, bool var_1_bool)
	{
		float var_4_float; object var_5_object;
		if(!var_1_bool) { //@nz
			@GetGameTime(var_4_float);
			if(var_4_float >= 168) {
				var_1_bool = true;
				object var_10_object;
				func_44(var_10_object);
				@AddActor(var_5_object, "d8q01_well_block", var_10_object, [0.0, 0.0, 0.0]);
				var_5_object = null;
			}
		}
		func_21();
	}

	// @pe
	void OnUnload(object var_0_object, bool var_1_bool)
	{
		func_39(var_1_bool);
		@sync();
	}

}


void func_34(object var_0_object)
{
	object var_2_object;
	func_50(var_2_object);
	var_0_object = var_2_object;
}


void func_39(object var_0_object)
{
	func_56(var_0_object);
}


void func_44(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_50(object var_2_object)
{
	object var_4_object;
	@CreateObjectVector(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


void func_56(object var_2_object)
{
	int var_6_int; int var_7_int; object var_8_object;
	if(var_2_object != 0) {
		var_2_object->size(var_6_int);
		var_7_int = 0;

		while(var_7_int < var_6_int) {
			var_2_object->get(var_8_object, var_7_int);
			if(var_8_object != 0)
				@RemoveActor(var_8_object);
			var_8_object = null;
			var_7_int += 1;
		}

		var_2_object->clear();
	}
}


