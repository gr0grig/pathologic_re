maintask task_0
{
	void init(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string)
	{
		var_2_object = null;
		var_0_int = 0;
		var_1_int = 1;
		var_3_bool = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	// @pe
	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, int var_5_int, int var_6_int, float var_7_float)
	{
		@SendToParent();
	}

	void OnUse(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string)
	{
		if(!var_2_object) //@nz
			return 2;
		@Blit(var_4_string, 1, 1);
		bool var_10_bool = false;
		if(var_1_int > 1) {
			if(!var_3_bool) //@nz
				var_10_bool = true;
		}
		if(var_10_bool != 0)
			@Print("default", 2, 35, ((var_0_int + "/") + var_1_int));
		if(var_3_bool != 0)
			@StretchBlit("disabled", 1, 1, 50, 50);
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, int var_5_int, int var_6_int)
	{
		@SendMessageToParent(0);
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, int var_5_int, int var_6_int)
	{
		@SendMessageToParent(1);
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, int var_5_int, int var_6_int)
	{
	}

	void event_200(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, int var_5_int, string var_6_string, object var_7_object)
	{
		int var_9_int;
		if((var_5_int & 65536) != 0) {
			var_7_object->get(var_0_int, 0);
			var_7_object->get(var_1_int, 1);
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
			var_3_bool = true;
		else
			var_3_bool = false;

		var_2_object = var_7_object;
		if(var_2_object != 0) {
			var_2_object->GetItemID(var_9_int); //@t
			@GetItemImage(var_9_int, var_4_string);
			@LoadImage(var_4_string);
			if(var_3_bool != 0)
				@SetTooltip(-1, "");
			else
				@SetTooltip(4, "", var_2_object);
			@SetTooltip(-1, "");

		}
		goto Label_125;
	
	Label_125:
	
	}

}


