maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(void)
	{
		bool var_0_bool;
		func_16(var_0_bool, "quest_d4_03", "scene_load");
	}

	void OnUnload(void)
	{
		bool var_0_bool;
		func_16(var_0_bool, "quest_b4_01", "wg_unload");
	}

}


void func_16(bool var_0_bool, string var_1_string, string var_2_string)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(var_4_object == null)
		var_0_bool = false;
	@Trigger(var_4_object, var_2_string);
	var_0_bool = true;
}
EMIT "Stack[-1] = 0";


