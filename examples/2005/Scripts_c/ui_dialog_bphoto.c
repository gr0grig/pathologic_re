maintask task_0
{
	void init(string var_0_string)
	{
		object var_2_object;
		@GetConversation(var_2_object);
		if(var_2_object == null)
			@UITrace("null conversation");
		var_2_object->GetPhoto2(var_0_string);
		@LoadImage(var_0_string);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	EMIT "Stack[-1] = 0";

	void OnUse(string var_0_string)
	{
		@StretchBlit(var_0_string, 0, 0, 234, 278);
	}

}


