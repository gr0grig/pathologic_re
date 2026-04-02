maintask task_0
{
	void init(bool var_0_bool, object var_1_object)
	{
		object var_8_object; float var_12_float; cvector var_13_cvector;
		@GetScene(var_8_object);
		@AddScriptedActor(var_1_object, "trigger_d10q01_fire", "trigger_fire_damage.bin", var_8_object, [0.0, 0.0, 0.0]);
		bool var_17_bool;
		func_129(var_17_bool);
		if(!var_17_bool) //@nz
			@Hold();
		object var_9_object;
		@FindParticleSystem("fire", var_9_object);
		if(var_9_object == null)
			@Trace("Can't find fire particle system");
		float var_10_float = 60.0;
		float var_11_float = -var_10_float;
	
		while(var_11_float < var_10_float) {
			var_12_float = -var_10_float;

			for(;;) {
				if(var_12_float < var_10_float) {
					if(((var_11_float * var_11_float) + (var_12_float * var_12_float)) > (var_10_float * var_10_float)) {
					} else {
					var_33_float = GetByIndex(var_13_cvector, 0);
					var_11_float = var_33_float;
					SetByIndex(var_13_cvector, 0) = var_33_float;
					var_34_float = GetByIndex(var_13_cvector, 1);
					SetByIndex(var_13_cvector, 1) = (float)0;
					var_35_float = GetByIndex(var_13_cvector, 2);
					var_12_float = var_35_float;
					SetByIndex(var_13_cvector, 2) = var_35_float;
					var_9_object->AddSource(var_13_cvector, [0.0, 1.0, 0.0], 0.0);
				}
				var_11_float += (var_10_float / 10);
				}
				var_12_float += (var_10_float / 10);
			}

		}
	
		var_9_object->Enable();
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(12)";
	EMIT "Stack[-5] = 0";
	EMIT "Stack[-6] = 0";

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object)
	{
		func_111();
		@Hold();
	}

	void OnLoad(bool var_0_bool, object var_1_object)
	{
		@StopGroup0();
		@sync();
	}

	void OnDispose(bool var_0_bool, object var_1_object)
	{
		if(var_1_object != 0)
			@RemoveActor(var_1_object);
	}

	void OnTrigger(bool var_0_bool, object var_1_object, string var_2_string)
	{
		bool var_4_bool;
		if(var_2_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_4_bool);
			bool var_7_bool = false;
			if(!var_4_bool) { //@nz
				bool var_9_bool;
				func_127(var_9_bool);
				if(var_9_bool != 0)
					var_7_bool = true;
			}
			if(var_7_bool != 0) {
				object var_10_object;
				func_134(var_10_object);
				@RemoveActor(var_10_object);
			}
		} else if(var_2_string == "restore") {
			var_0_bool = false;
		}
	
	}

}


void func_129(bool var_17_bool)
{
	bool var_19_bool;
	@IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
}


void func_127(bool var_9_bool)
{
	var_9_bool = true;
}


void func_134(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_111(void)
{
	bool var_2_bool = false;
	if(var_0_bool != 0) {
		bool var_4_bool;
		func_127(var_4_bool);
		if(var_4_bool != 0)
			var_2_bool = true;
	}
	if(var_2_bool != 0) {
		object var_5_object;
		func_134(var_5_object);
		@RemoveActor(var_5_object);
	}
}


