maintask task_0
{
	void init(bool var_0_bool)
	{
	
	Label_1:
		for(;;) {
			bool var_3_bool;
			func_153(var_3_bool);
			var_6_bool = !var_3_bool; //@nz
			if(var_6_bool == 0) goto Label_9;
			@Hold();
		}
	
	Label_9:
		float var_2_float;
		@rand(var_2_float, 3);
		@Sleep(var_2_float + 3);
		func_72();
		goto Label_1;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		if(var_1_string == "cleanup")
			func_21(var_1_string);
	}

	void OnLoad(bool var_0_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(bool var_0_bool)
	{
		bool var_1_bool = false;
		if(var_0_bool != 0) {
			bool var_3_bool;
			func_70(var_3_bool);
			if(var_3_bool != 0)
				var_1_bool = true;
		}
		if(var_1_bool != 0) {
			object var_4_object;
			func_158(var_4_object);
			@RemoveActor(var_4_object);
		}
	}

}


void func_164(string var_32_string, int var_33_int)
{
	string var_35_string = "idle";
	if(var_33_int != 0)
		var_35_string += var_33_int;
	var_35_string = var_32_string;
}


void func_70(bool var_3_bool)
{
	var_3_bool = true;
}


void func_72(void)
{
	int var_19_int; int var_20_int; bool var_21_bool; float var_22_float; bool var_23_bool;
	@WaitForAnimEnd();
	bool var_24_bool;
	func_153(var_24_bool);
	if(!var_24_bool) //@nz
		return 14;
	int var_26_int;
	func_171(var_26_int);
	int var_17_int;
	var_26_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_39_bool = false;
		if(var_18_int < 5) {
			bool var_42_bool;
			func_153(var_42_bool);
			if(var_42_bool != 0)
				var_39_bool = true;
		}
		if(var_39_bool != 0) {
			@irand(var_19_int, 3);
			if(var_19_int == 0) {
				if(var_17_int == 0) goto Label_119;
				@irand(var_20_int, var_17_int);
				string var_48_string; int var_49_int;
				var_20_int = var_49_int;
				func_164(var_48_string, var_49_int);
				@PlayAnimation("all", var_48_string);
				@WaitForAnimEnd(var_21_bool);
				if(!var_21_bool) { //@nz
				} else {
			} else {
			if(var_19_int == 1) {
				@rand(var_22_float, 4);
				@Sleep((var_22_float + 1), var_23_bool);
				if(!var_23_bool) { //@nz
					goto Label_148;
				}
			} else if(var_18_int != 0) {
				goto Label_148;
			}
			}
					bool var_51_bool;
					func_151(var_51_bool);
					var_52_bool = !var_51_bool; //@nz
					if(var_52_bool == 0) goto Label_143;
			}
		}
	Label_148:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_143:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_171(int var_26_int)
{
	int var_29_int; bool var_30_bool;
	var_29_int = 0;
	
	for(;;) {
		string var_32_string; int var_33_int;
		var_29_int = var_33_int;
		func_164(var_32_string, var_33_int);
		@HasAnimation(var_30_bool, "all", var_32_string);
		if(!var_30_bool) //@nz
			break;
		var_29_int += 1;
	}
	var_29_int = var_26_int;
}


void func_21(bool var_0_bool)
{
	var_0_bool = true;
	bool var_5_bool;
	@IsLoaded(var_5_bool);
	bool var_6_bool = false;
	if(!var_5_bool) { //@nz
		bool var_8_bool;
		func_70(var_8_bool);
		if(var_8_bool != 0)
			var_6_bool = true;
	}
	if(var_6_bool != 0) {
		object var_9_object;
		func_158(var_9_object);
		@RemoveActor(var_9_object);
	}
}


void func_151(bool var_51_bool)
{
	var_51_bool = true;
}


void func_153(bool var_3_bool)
{
	bool var_5_bool;
	@IsLoaded(var_5_bool);
	var_5_bool = var_3_bool;
}


void func_158(object var_4_object)
{
	object var_6_object;
	@self(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


