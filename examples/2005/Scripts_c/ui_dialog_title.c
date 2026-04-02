maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int)
	{
		@ShowCursor();
		@SetOwnerDraw(true);
		@GetWindowSize(var_1_int, var_2_int);
		object var_4_object;
		@GetConversation(var_4_object);
		if(var_4_object == null)
			@UITrace("null conversation");
		var_4_object->GetNPCName(var_0_string);
		@ProcessEvents();
	}
	EMIT "Stack[-1] = 0";

	void OnUse(string var_0_string, int var_1_int, int var_2_int)
	{
		int var_4_int;
		@PrintInWidth(var_4_int, "default", 0, 0, var_1_int, var_0_string, 0.5019608, 0.5019608, 0.5019608);
	}

}


