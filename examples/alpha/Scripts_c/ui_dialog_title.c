maintask task_0
{
	void init(string var_0_string)
	{
		@ShowCursor();
		@SetOwnerDraw(true);
		object var_2_object;
		@GetConversation(var_2_object);
		if(var_2_object == null)
			@UITrace("null conversation");
		var_2_object->GetNPCName(var_0_string);
		@_strupr(var_0_string);
		@ProcessEvents();
	}
	EMIT "Stack[-1] = 0";

	void OnUse(string var_0_string)
	{
		@Print("default", 0, 0, var_0_string, 1.0, 1.0, 1.0);
	}

}


