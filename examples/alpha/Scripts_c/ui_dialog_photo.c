maintask task_0
{
	void init(string var_0_string)
	{
		object var_2_object;
		@GetConversation(var_2_object);
		if(var_2_object == null)
			@UITrace("null conversation");
		var_2_object->GetPhoto(var_0_string);
		@LoadImage(var_0_string);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	EMIT "Stack[-1] = 0";

	void OnUse(string var_0_string)
	{
		@Blit(var_0_string, 0, 0);
	}

}


