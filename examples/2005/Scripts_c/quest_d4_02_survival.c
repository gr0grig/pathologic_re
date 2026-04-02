maintask task_0
{
	void init(void)
	{
		@GameSleep(1.0);
		bool var_1_bool;
		func_20(var_1_bool, "quest_d4_02", "survived");
		object var_7_object;
		func_14(var_7_object);
		@RemoveActor(var_7_object);
	}

}


void func_20(bool var_1_bool, string var_2_string, string var_3_string)
{
	object var_5_object;
	@FindActor(var_5_object, var_2_string);
	if(var_5_object == null)
		var_1_bool = false;
	@Trigger(var_5_object, var_3_string);
	var_1_bool = true;
}
EMIT "Stack[-1] = 0";


void func_14(object var_7_object)
{
	object var_9_object;
	@self(var_9_object);
	var_9_object = var_7_object;
}
EMIT "Stack[-1] = 0";


