maintask task_0
{
	void init(string var_0_string, string var_1_string, int var_2_int, int var_3_int)
	{
		object var_7_object;
		@GetConversation(var_7_object);
		if(var_7_object == null)
			@UITrace("null conversation");
		var_7_object->GetNPCName(var_0_string);
		@_strupr(var_0_string);
		var_7_object->GetNPCDescription(var_1_string);
		@GetWindowSize(var_2_int, var_3_int);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	EMIT "Stack[-3] = 0";

	void OnUse(string var_0_string, string var_1_string, int var_2_int, int var_3_int)
	{
		int var_8_int = 0;
		int var_7_int;
		@GetTextHeightInWidth(var_7_int, "default", (var_2_int - 50), var_0_string);
		var_8_int += (var_7_int + 18);
		@GetTextHeightInWidth(var_7_int, "default", (var_2_int - 50), var_1_string);
		var_8_int += var_7_int;
		int var_9_int = (var_3_int - var_8_int) / 2;
		var_9_int = var_8_int;
		@PrintInWidth(var_7_int, "default", 25, var_8_int, (var_2_int - 50), var_0_string, 1.0, 1.0, 1.0);
		@PrintInWidth(var_7_int, "default", 25, (var_8_int + (var_7_int + 18)), (var_2_int - 50), var_1_string, 0.8, 0.8, 0.8);
	}

}


