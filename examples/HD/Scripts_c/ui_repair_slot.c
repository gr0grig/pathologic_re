maintask task_0
{
	void init(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string)
	{
		var_2_object = null;
		var_0_int = 1;
		var_4_bool = false;
		var_5_bool = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string)
	{
		if(!var_2_object) { //@nz
		}
		@Blit(var_3_string, 1, 1);
		if(var_0_int > 1)
			@Print("default", 2, 35, var_0_int);
	}

	void OnGameTime(int iID, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string)
	{
		int var_9_int;
		if(!var_4_bool) { //@nz
			var_5_bool = true;

			while(0 < 4) {
				string var_14_string; int var_15_int;
				var_9_int = var_15_int;
				func_260(var_14_string, var_15_int);
				@SendMessage(-5, var_14_string);
				var_9_int += 1;
			}

			var_4_bool = true;
		}
		@SendMessageToParent(-9);
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string, int var_8_int, int var_9_int)
	{
		if(!var_2_object) //@nz
			return 0;
		@SetBackground("selected");
		@SendMessageToParent(0);
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string, int var_8_int, int var_9_int)
	{
		if(!var_2_object) { //@nz
		}
		@SendMessageToParent(1);
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string, int var_8_int, int var_9_int)
	{
	}

	void event_200(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string, int var_8_int, string var_9_string, object var_10_object)
	{
		string var_15_string; int var_16_int;
		if(var_8_int == -7) {
			if(var_4_bool != 0)
				func_52();
			return 6;
		}
		if(var_8_int == -6) {
			var_4_bool = true;
			return 6;
		}
		if(var_8_int == -1) {
			if(var_10_object != null) {
				var_10_object->get(var_6_string, 0);
				var_10_object->get(var_7_string, 1);
			}
			return 6;
		}
		if(var_8_int == -2) {
			if(var_4_bool != 0)
				func_70(var_16_int, var_6_string);
			return 6;
		}
		if(var_8_int == -3) {
			if(var_4_bool != 0)
				func_70(var_16_int, var_7_string);
			return 6;
		}
		if(var_8_int == -4) {
			var_4_bool = true;
			func_52();
			return 6;
		}
		if(var_8_int == -5) {
			if(var_5_bool != 0)
				var_5_bool = false;
			else
				var_4_bool = false;
			if((var_8_int & 65536) != 0) {
				var_0_int = var_8_int & 16383;
				return 6;
			}
			if((var_8_int & 16384) != 0)
				@SetBackground("selected");
			else
				@SetBackground("default");
			if((var_8_int & 32768) != 0) {
				var_2_object = null;
				@SetTooltip(-1, "");
			} else {
					@GetStringByID(var_15_string, 1007);
					var_2_object = var_10_object;
					if(var_2_object == 0) goto Label_255;
					var_2_object->GetItemID(var_16_int); //@t
					@GetInvItemSprite(var_3_string, var_16_int);
					@LoadImage(var_3_string);
					@GetInvItemMaxStackSize(var_1_int, var_16_int);
					@SetTooltip(1, (var_15_string + (var_8_int & 16383)), var_2_object);
			}
			for(;;) {
				return 6;

			}

		Label_255:
			@SetTooltip(-1, "");
		}
	
	}

}


// @pe
void func_260(string var_14_string, int var_15_int)
{
	if((var_15_int + 1) < 10)
		var_14_string = "slot0" + (var_15_int + 1);
	var_14_string = "slot" + (var_15_int + 1);
}


void func_70(bool var_4_bool, string var_44_string)
{
	int var_51_int; int var_52_int; int var_53_int; int var_54_int; int var_55_int; int var_56_int;
	if(var_44_string != "") {
		var_51_int = 0;
		var_52_int = 0;
		var_53_int = 0;
		var_54_int = 0;
		@ClientToScreen(var_51_int, var_52_int);
		@GetWindowSize(var_53_int, var_54_int);
		var_55_int = 0;
		var_56_int = 0;
		@GetCursorPos(var_55_int, var_56_int);
		bool var_59_bool = false;
		bool var_60_bool = false;
		bool var_61_bool = false;
		if(var_55_int > var_51_int) {
			if(var_56_int > var_52_int)
				var_61_bool = true;
		}
		if(var_61_bool != 0) {
			if(var_55_int < (var_51_int + var_53_int))
				var_60_bool = true;
		}
		if(var_60_bool != 0) {
			if(var_56_int < (var_52_int + var_54_int))
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			var_4_bool = false;
			if(var_44_string == "$parent")
				@SendMessageToParent(-4);
			else
				@SendMessage(-4, var_44_string);
			func_52();
		}
		goto Label_123;
	}
Label_123:
	
}


void func_52(void)
{
	int var_24_int = 0;
	int var_25_int = 0;
	int var_26_int = 0;
	int var_27_int = 0;
	@ClientToScreen(var_24_int, var_25_int);
	@GetWindowSize(var_26_int, var_27_int);
	@SetMousePos((var_24_int + (var_26_int / 2)), (var_25_int + (var_27_int / 2)));
}


