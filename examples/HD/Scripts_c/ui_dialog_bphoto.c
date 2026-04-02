maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int)
	{
		object var_4_object;
		@GetConversation(var_4_object);
		if(var_4_object == null)
			@UITrace("null conversation");
		var_4_object->GetPhoto2(var_0_string);
		@LoadImage(var_0_string);
		@SetOwnerDraw(true);
		@GetWindowSize(var_1_int, var_2_int);
		@ProcessEvents();
	}
	EMIT "Stack[-1] = 0";

	void OnUse(string var_0_string, int var_1_int, int var_2_int)
	{
		@StretchBlit(var_0_string, 0, 0, var_1_int, var_2_int);
	}

}


