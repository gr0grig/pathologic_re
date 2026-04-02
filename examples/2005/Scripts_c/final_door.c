maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor)
	{
		disable OnUse;
		@Trace("on use");
		@TriggerWorld("open");
	}

	void OnTrigger(string name)
	{
		object var_2_object;
		@Trace("trigger " + name);
		if(name == "open") {
			@FindActor(var_2_object, "player");
			object var_8_object;
			var_2_object = var_8_object;
			func_30(var_8_object);
			var_2_object = null;
		}
	}

	void OnClearPath(object actor)
	{
		bool var_3_bool = true;
		var_4_bool = !actor; //@nz
		if(var_4_bool != 1) {
			bool var_5_bool; object var_6_object;
			actor = var_6_object;
			func_96(var_6_object);
			var_12_bool = !var_5_bool; //@nz
			if(var_12_bool != 1)
				var_3_bool = false;
		}
		if(var_3_bool != 0) {
		}
		bool var_2_bool;
		@ClassifyActor(var_2_bool, actor);
		var_13_bool = !var_2_bool; //@nz
		@Open(var_13_bool);
	}

}


// @pe
void func_96(bool var_5_bool)
{
	bool var_7_bool;
	func_102(var_7_bool);
	var_5_bool = !var_7_bool;
}


void func_102(bool var_7_bool)
{
	int var_9_int;
	@GetProperty("locked", var_9_int);
	var_7_bool = var_9_int != 0;
}


void func_30(object var_8_object)
{
	if(!var_8_object) //@nz
		return 4;
	bool var_14_bool; object var_15_object;
	func_96(var_15_object);
	if(!var_14_bool) { //@nz
		@PlaySound("door_closed");
		@Trace("Door is locked");
		return 4;
	}
	bool var_11_bool;
	@ClassifyActor(var_11_bool, var_15_object);
	var_11_bool = !var_11_bool;
	int var_12_int;
	@GetOpenSide(var_12_int);
	if(!var_12_int) { //@nz
		@Open(var_11_bool);
	} else {
			if(var_12_int > 0) {
				if(var_11_bool != 0)
					@Close();
				else
					@Open(var_11_bool);
			if(var_11_bool != 0) {
				@Open(var_11_bool);
				goto Label_75;
			}
			@Close();
			}
	}
Label_75:
	for(;;) {
		return 4;

	}
	
}


