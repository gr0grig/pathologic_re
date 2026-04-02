maintask task_0
{
	void init(cvector var_0_cvector, cvector var_1_cvector)
	{
		float var_8_float; float var_9_float;
		bool var_10_bool;
		func_72(var_10_bool);
		if(!var_10_bool) { //@nz
			object var_14_object;
			func_77(var_14_object);
			@RemoveActor(var_14_object);
		}
		object var_6_object;
		@FindParticleSystem("blood", var_6_object);
		var_6_object->Enable();
		var_0_cvector = [0.0, 0.0, 0.0];
		var_1_cvector = [-100.0, 100.0, 0.0];
		var_6_object->AddSource(var_0_cvector, var_1_cvector, 0.3);
		float var_7_float = 0.4;
	
		while(var_7_float > 0) {
			@sync(var_8_float);
			var_7_float -= var_8_float;
			var_21_float = GetByIndex(var_0_cvector, 1);
			SetByIndex(var_0_cvector, 1) = (var_21_float - (150 * var_8_float));
			var_6_object->AddSource(var_0_cvector, var_1_cvector, 0.3);
		}
	
		var_6_object->Fade(true);
		var_7_float = 0.4;
	
		while(var_7_float > 0) {
			@sync(var_9_float);
			var_7_float -= var_9_float;
			var_28_float = GetByIndex(var_0_cvector, 1);
			SetByIndex(var_0_cvector, 1) = (var_28_float - (150 * var_9_float));
			var_6_object->AddSource(var_0_cvector, var_1_cvector, 0.3);
		}
	
		object var_32_object;
		func_77(var_32_object);
		@RemoveActor(var_32_object);
	}
	EMIT "Stack[-4] = 0";

	void OnUnload(cvector var_0_cvector, cvector var_1_cvector)
	{
		object var_2_object;
		func_77(var_2_object);
		@RemoveActor(var_2_object);
		@sync();
	}

}


void func_72(bool var_10_bool)
{
	bool var_12_bool;
	@IsLoaded(var_12_bool);
	var_12_bool = var_10_bool;
}


void func_77(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


