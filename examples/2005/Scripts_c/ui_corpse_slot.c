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
			@Blit("scalpel", 1, 1);
		@Blit(var_3_string, 1, 1);
		if(var_1_int > 1)
			@Print("default", 2, 35, var_0_int);
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, object var_2_object, string var_3_string, int var_4_int, int var_5_int)
	{
		if(var_2_object != 0)
			@SendMessageToParent(0);
	}

	void event_200(int var_0_int, int var_1_int, object var_2_object, string var_3_string, int var_4_int, string var_5_string, object var_6_object)
	{
		int var_8_int;
		if((var_4_int & 65536) != 0) {
			var_0_int = var_4_int & 16383;
			return 2;
		}
		if((var_4_int & 32768) != 0) {
			var_2_object = null;
			@SetTooltip(-1, "");
		} else {
				var_2_object = var_6_object;
				if(var_2_object == 0) goto Label_71;
				var_2_object->GetItemID(var_8_int); //@t
				@GetInvItemSprite(var_3_string, var_8_int);
				@LoadImage(var_3_string);
				@GetInvItemMaxStackSize(var_1_int, var_8_int);
				@SetTooltip(1, "", var_2_object);
		}
		for(;;) {
			return 2;

		}
	
	Label_71:
		@SetTooltip(-1, "");
	}

}


