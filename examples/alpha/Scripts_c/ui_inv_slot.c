maintask task_0
{
	void init(int var_0_int, int var_1_int, object var_2_object, string var_3_string)
	{
		var_2_object = null;
		var_0_int = 1;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(int var_0_int, int var_1_int, object var_2_object, string var_3_string)
	{
		if(!var_2_object) //@nz
			return 0;
		@Blit(var_3_string, 1, 1);
		if(var_0_int < 2)
			return 0;
		if(var_1_int > 1)
			@Print("default", 2, 35, var_0_int);
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, object var_2_object, string var_3_string, int var_4_int, int var_5_int)
	{
		@SetBackground("selected");
		@SendMessageToParent(0);
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, object var_2_object, string var_3_string, int var_4_int, int var_5_int)
	{
		@SendMessageToParent(1);
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int, object var_2_object, string var_3_string, int var_4_int, int var_5_int)
	{
	}

	void event_200(int var_0_int, int var_1_int, object var_2_object, string var_3_string, int var_4_int, string var_5_string, object var_6_object)
	{
		int var_8_int;
		if((var_4_int & 65536) != 0) {
			var_0_int = var_4_int & 16383;
			return 2;
		}
		if((var_4_int & 16384) != 0)
			@SetBackground("selected");
		else
			@SetBackground("default");
		if((var_4_int & 32768) != 0) {
			var_2_object = null;
			@SetTooltip(-1, "");
		} else {
				var_2_object = var_6_object;
				if(var_2_object == 0) goto Label_88;
				var_2_object->GetItemID(var_8_int); //@t
				@GetInvItemSprite(var_3_string, var_8_int);
				@LoadImage(var_3_string);
				@GetInvItemMaxStackSize(var_1_int, var_8_int);
				@SetTooltip(1, "", var_2_object);
		}
		for(;;) {
			return 2;

		}
	
	Label_88:
		@SetTooltip(-1, "");
	
	}

}


