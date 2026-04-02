maintask task_0
{
	void init(string var_0_string, object var_1_object)
	{
		object var_3_object;
		@GetConversation(var_3_object);
		if(var_3_object == null)
			@UITrace("null conversation");
		var_3_object->GetPhoto(var_0_string);
		@LoadImage(var_0_string);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	EMIT "Stack[-1] = 0";

	void OnUse(string var_0_string, object var_1_object)
	{
		@Blit(var_0_string, 0, 0);
	}

	// @pe
	void OnStopSee(string var_0_string, object var_1_object, int var_2_int, int var_3_int)
	{
		if(!var_1_object) //@nz
			@CreateWindow("dialog_photo.xml", true, var_1_object);
		else
			var_1_object->DestroyWindow(); //@t
	
	}

}


