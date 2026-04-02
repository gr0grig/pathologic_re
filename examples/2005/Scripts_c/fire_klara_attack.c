// @GLOBALS: 0:object:Target

maintask task_0
{
	void init(void)
	{
		int var_15_int;
		@Trace("1");
		@sync();
		@Trace("2");
		bool var_18_bool = true;
		bool var_19_bool;
		func_188(var_19_bool);
		var_22_bool = !var_19_bool; //@nz
		if(var_22_bool != 1) {
			bool var_23_bool; object var_24_object;
			var_25_object = GlobalVars[0];
			var_25_object = var_24_object;
			func_154(var_23_bool, var_24_object);
			var_47_bool = !var_23_bool; //@nz
			if(var_47_bool != 1)
				var_18_bool = false;
		}
		if(var_18_bool != 0) {
			object var_48_object;
			func_193(var_48_object);
			@RemoveActor(var_48_object);
			return 16;
		}
		@Trace("3");
		object var_8_object;
		@FindParticleSystem("fire", var_8_object);
		if(var_8_object == null) {
			@Trace("Can't find fire particle system");
			return 16;
		}
		@Trace("4");
		var_56_object = GlobalVars[0];
		cvector var_9_cvector;
		var_56_object->GetPosition(var_9_cvector);
		cvector var_10_cvector;
		@GetPosition(var_10_cvector);
		var_58_float = GetByIndex(var_9_cvector, 0);
		var_62_float = GetByIndex(var_9_cvector, 1);
		var_66_float = GetByIndex(var_9_cvector, 2);
		@Trace((((("x" + var_58_float) + " y ") + var_62_float) + " z") + var_66_float);
		var_8_object->AddSource((var_9_cvector - var_10_cvector), [0.0, 1.0, 0.0], 0.5);
		var_8_object->Enable();
		var_8_object->Fade(false);
		@Trace("5");
		cvector var_11_cvector;
		var_9_cvector = var_11_cvector;
		int var_12_int = 2;
		int var_13_int = 0;
	
		for(;;) {
			if(var_13_int < 600) {
				@sync();
				bool var_75_bool; object var_76_object;
				var_77_object = GlobalVars[0];
				var_77_object = var_76_object;
				func_154(var_75_bool, var_76_object);
				if(!var_75_bool) { //@nz
				} else {
					var_82_object = GlobalVars[0];
					var_82_object->GetPosition(var_9_cvector);
					if(((var_11_cvector - var_9_cvector) | (var_11_cvector - var_9_cvector)) > 25) {
						var_15_int = 0;

						while(var_15_int < var_12_int) {
							var_8_object->AddSource((var_9_cvector - var_10_cvector), [0.0, 1.0, 0.0], 0.5);
							var_15_int += 1;
						}

						var_12_int += 3;
						var_9_cvector = var_11_cvector;
					}
					var_13_int += 1;
				}
			}
			@Trace("6");
			var_8_object->Fade();
			@Sleep(3);
			object var_81_object;
			func_193(var_81_object);
			@RemoveActor(var_81_object);
			return 16;

		}
	}
	EMIT "Stack[-8] = 0";

	void OnUnload(void)
	{
		object var_0_object;
		func_193(var_0_object);
		@RemoveActor(var_0_object);
	}

}


void func_193(object var_48_object)
{
	object var_50_object;
	@self(var_50_object);
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


void func_154(bool var_23_bool, object var_24_object)
{
	if(var_24_object == null) {
		var_23_bool = false;
		return 6;
	}
	object var_29_object;
	@GetScene(var_29_object);
	if(var_29_object == null) {
		var_23_bool = false;
		return 6;
	}
	object var_30_object;
	var_24_object->GetScene(var_30_object);
	if(var_29_object != var_30_object) {
		var_23_bool = false;
		return 6;
	}
	bool var_35_bool; object var_36_object;
	func_142(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_23_bool = true;
		return 6;
	}
	int var_31_int;
	var_36_object->GetProperty("noaccess", var_31_int);
	var_23_bool = var_31_int == 0;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_188(bool var_19_bool)
{
	bool var_21_bool;
	@IsLoaded(var_21_bool);
	var_21_bool = var_19_bool;
}


void func_142(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


