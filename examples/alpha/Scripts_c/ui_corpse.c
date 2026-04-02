maintask task_0
{
	void init(void)
	{
		@SetOwnerDraw(false);
		func_43();
		@ProcessEvents();
	}

	// @pe
	void event_200(int var_0_int, string var_1_string, object var_2_object)
	{
		if(var_1_string == "scalpel") {
			bool var_5_bool;
			func_32(var_5_bool);
			if(var_5_bool != 0)
				@UITrace("has slot");
		} else {
			if(!(var_1_string == "squirt")) goto Label_31;
			bool var_14_bool;
			func_32(var_14_bool);
			if(var_14_bool == 0) goto Label_31;
			@UITrace("has slot");
		}
	Label_31:
	
	}

}


void func_32(bool var_5_bool)
{
	int var_8_int;
	@GetContainerItemCount(var_8_int);
	int var_9_int;
	@GetContainerSize(var_9_int);
	if(var_8_int >= var_9_int)
		var_5_bool = false;
	var_5_bool = true;
}


void func_43(void)
{
}


