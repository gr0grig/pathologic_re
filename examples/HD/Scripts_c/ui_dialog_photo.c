maintask task_0
{
	void init(string var_0_string, object var_1_object, int var_2_int, int var_3_int)
	{
		object var_5_object;
		@GetConversation(var_5_object);
		if(var_5_object == null)
			@UITrace("null conversation");
		var_5_object->GetPhoto(var_0_string);
		@LoadImage(var_0_string);
		@SetOwnerDraw(true);
		@GetWindowSize(var_2_int, var_3_int);
		@ProcessEvents();
	}
	EMIT "Stack[-1] = 0";

	void OnUse(string var_0_string, object var_1_object, int var_2_int, int var_3_int)
	{
		@StretchBlit(var_0_string, 0, 0, var_2_int, var_3_int);
	}

	// @pe
	void OnStopSee(string var_0_string, object var_1_object, int var_2_int, int var_3_int, int var_4_int, int var_5_int)
	{
		if(!var_1_object) //@nz
			@CreateWindow("dialog_photo.xml", true, var_1_object);
		else
			var_1_object->DestroyWindow(); //@t
	
	}

}


