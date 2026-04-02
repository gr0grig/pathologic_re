maintask task_0
{
	void init(int var_0_int, object var_1_object, string var_2_string)
	{
		var_1_object = null;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(int var_0_int, object var_1_object, string var_2_string)
	{
		if(!var_1_object) { //@nz
		}
		@Blit(var_2_string, 1, 1);
	}

	// @pe
	void OnStopSee(int var_0_int, object var_1_object, string var_2_string, int var_3_int, int var_4_int)
	{
		@SendMessageToParent(0);
	}

	// @pe
	void OnUnload(int var_0_int, object var_1_object, string var_2_string, int var_3_int, int var_4_int)
	{
		@SendMessageToParent(1);
	}

	// @pe
	void OnHear(int var_0_int, object var_1_object, string var_2_string, int var_3_int, int var_4_int)
	{
	}

	void event_200(int var_0_int, object var_1_object, string var_2_string, int var_3_int, string var_4_string, object var_5_object)
	{
		int var_7_int;
		if((var_3_int & 65536) != 0)
			return 2;
		if((var_3_int & 16384) != 0)
			@SetBackground("selected");
		else
			@SetBackground("default");
		if((var_3_int & 32768) != 0) {
			var_1_object = null;
			@SetTooltip(-1, "");
			return 2;
		}
		var_1_object = var_5_object;
		if(var_1_object != 0) {
			var_1_object->GetItemID(var_7_int); //@t
			@GetInvItemSprite(var_2_string, var_7_int);
			@LoadImage(var_2_string);
			@GetInvItemMaxStackSize(var_0_int, var_7_int);
			@SetTooltip(1, "", var_1_object);
		} else {
			@SetTooltip(-1, "");

		}
	
	}

}


