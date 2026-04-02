maintask task_0
{
	void init(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool)
	{
		var_2_object = null;
		var_0_int = 0;
		var_4_bool = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool)
	{
		if(!var_2_object) //@nz
			return 0;
		@Blit(var_3_string, 1, 1);
		if(var_0_int >= 2) {
			if(var_1_int > 1)
				@Print("default", 2, 35, var_0_int);
		}
		if(var_4_bool != 0)
			@StretchBlit("disabled", 0, 0, 50, 50);
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		@SendMessageToParent(0);
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		@SendMessageToParent(1);
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
	}

	void event_200(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, string var_6_string, object var_7_object)
	{
		int var_9_int;
		if((var_5_int & 65536) != 0) {
			var_0_int = var_5_int & 16383;
			return 2;
		}
		if((var_5_int & 16384) != 0)
			@SetBackground("selected");
		else
			@SetBackground("default");
		if((var_5_int & 32768) != 0) {
			var_2_object = null;
			@SetTooltip(-1, "");
			return 2;
		}
		if((var_5_int & 131072) != 0)
			var_4_bool = true;
		else
			var_4_bool = false;

		var_2_object = var_7_object;
		if(var_2_object != 0) {
			var_2_object->GetItemID(var_9_int); //@t
			@GetItemImage(var_9_int, var_3_string);
			@LoadImage(var_3_string);
			@GetItemMaxStackSize(var_9_int, var_1_int);
			if(var_4_bool != 0)
				@SetTooltip(-1, "");
			else
				@SetTooltip(4, "", var_2_object);
			@SetTooltip(-1, "");

		}
		goto Label_111;
	
	Label_111:
	
	}

}


