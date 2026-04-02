maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool)
	{
		@sync();
		bool var_2_bool;
		func_104(var_2_bool);
		if(!var_2_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		} else {
			var_1_bool = false;
		}
		func_56();
	
	}

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object)
	{
		@SetVariable("d5q02KnowNudeIsDead", 1);
		bool var_4_bool;
		@IsOverrideActive(var_4_bool);
		if(!var_4_bool) //@nz
			@WorkWithCorpse(var_2_object);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool)
	{
		if(!var_1_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		}
		func_88();
	}

	void OnTrigger(bool var_0_bool, bool var_1_bool, string var_2_string)
	{
		bool var_4_bool;
		if(var_2_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_4_bool);
			bool var_7_bool = false;
			if(!var_4_bool) { //@nz
				bool var_9_bool;
				func_12(var_9_bool);
				if(var_9_bool != 0)
					var_7_bool = true;
			}
			if(var_7_bool != 0) {
				object var_23_object;
				func_109(var_23_object);
				@RemoveActor(var_23_object);
			}
		} else if(var_2_string == "restore") {
			var_0_bool = false;
		}
	
	}

}


void func_104(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


void func_12(bool var_9_bool)
{
	int var_12_int;
	@GetItemCountOfType(var_12_int, "d5q01_heart");
	if(!var_12_int) //@nz
		var_9_bool = true;
	int var_13_int;
	@GetVariable("d5q01", var_13_int);
	bool var_17_bool; int var_18_int;
	var_13_int = var_18_int;
	func_115(var_17_bool, var_18_int);
	var_9_bool = !var_17_bool;
}


void func_109(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_115(bool var_17_bool, int var_18_int)
{
	var_17_bool = false;
	if(var_18_int >= 1) {
		if(var_18_int < 1000)
			var_17_bool = true;
	}
}


void func_88(void)
{
	bool var_4_bool = false;
	if(var_0_bool != 0) {
		bool var_6_bool;
		func_12(var_6_bool);
		if(var_6_bool != 0)
			var_4_bool = true;
	}
	if(var_4_bool != 0) {
		object var_20_object;
		func_109(var_20_object);
		@RemoveActor(var_20_object);
	}
}


void func_56(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


