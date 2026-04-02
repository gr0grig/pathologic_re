maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor)
	{
		if(!actor) //@nz
			return 4;
		bool var_6_bool; object var_7_object;
		func_70(var_7_object);
		if(!var_6_bool) { //@nz
			@PlaySound("door_closed");
			@Trace("Door is locked");
			return 4;
		}
		bool var_3_bool;
		@ClassifyActor(var_3_bool, var_7_object);
		var_3_bool = !var_3_bool;
		int var_4_int;
		@GetOpenSide(var_4_int);
		if(!var_4_int) { //@nz
			@Open(var_3_bool);
		} else {
				if(var_4_int > 0) {
					if(var_3_bool != 0)
						@Close();
					else
						@Open(var_3_bool);
				if(var_3_bool != 0) {
					@Open(var_3_bool);
					goto Label_49;
				}
				@Close();
				}
		}
	Label_49:
		for(;;) {
			return 4;

		}
	
	}

	void OnClearPath(object actor)
	{
		bool var_3_bool = true;
		var_4_bool = !actor; //@nz
		if(var_4_bool != 1) {
			bool var_5_bool; object var_6_object;
			actor = var_6_object;
			func_70(var_6_object);
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


void func_76(bool var_7_bool)
{
	int var_9_int;
	@GetProperty("locked", var_9_int);
	var_7_bool = var_9_int != 0;
}


// @pe
void func_70(bool var_5_bool)
{
	bool var_7_bool;
	func_76(var_7_bool);
	var_5_bool = !var_7_bool;
}


