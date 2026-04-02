maintask task_0
{
	void init(void)
	{
		bool var_1_bool;
		@IsLoaded(var_1_bool);
		if(var_1_bool != 0) {
			@sync();
			@sync();
		} else {
			@Trace("Unloaded dynamic light");
		}
		object var_3_object;
		func_19(var_3_object);
		@RemoveActor(var_3_object);
	
	}

}


void func_19(object var_3_object)
{
	object var_5_object;
	@self(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


