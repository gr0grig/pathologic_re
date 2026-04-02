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
		string var_3_string; int var_4_int;
		bool var_5_bool;
		func_97(var_5_bool);
		if(var_5_bool != 0) {
			@GetProperty("key", var_3_string);
			actor->GetItemCountOfType(var_4_int, var_3_string);
			if(var_4_int != 0)
				func_104(false);
		}
		object var_14_object;
		actor = var_14_object;
		func_25(var_14_object);
	}

	void OnClearPath(object actor)
	{
		bool var_3_bool = true;
		var_4_bool = !actor; //@nz
		if(var_4_bool != 1) {
			bool var_5_bool; object var_6_object;
			actor = var_6_object;
			func_91(var_6_object);
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
void func_104(bool var_12_bool)
{
	@SetProperty("locked", var_12_bool);
}


void func_97(bool var_7_bool)
{
	int var_9_int;
	@GetProperty("locked", var_9_int);
	var_7_bool = var_9_int != 0;
}


// @pe
void func_91(bool var_5_bool)
{
	bool var_7_bool;
	func_97(var_7_bool);
	var_5_bool = !var_7_bool;
}


void func_25(object var_14_object)
{
	if(!var_14_object) //@nz
		return 4;
	bool var_20_bool; object var_21_object;
	func_91(var_21_object);
	if(!var_20_bool) { //@nz
		@PlaySound("door_closed");
		@Trace("Door is locked");
		return 4;
	}
	bool var_17_bool;
	@ClassifyActor(var_17_bool, var_21_object);
	var_17_bool = !var_17_bool;
	int var_18_int;
	@GetOpenSide(var_18_int);
	if(!var_18_int) { //@nz
		@Open(var_17_bool);
	} else {
			if(var_18_int > 0) {
				if(var_17_bool != 0)
					@Close();
				else
					@Open(var_17_bool);
			if(var_17_bool != 0) {
				@Open(var_17_bool);
				goto Label_70;
			}
			@Close();
			}
	}
Label_70:
	for(;;) {
		return 4;

	}
	
}


