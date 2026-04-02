maintask task_0
{
	void init(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string)
	{
		var_2_object = null;
		var_0_int = 1;
		var_5_bool = false;
		var_6_bool = false;
		var_4_bool = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnGameTime(int iID, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string)
	{
		int var_10_int;
		if(!var_5_bool) { //@nz
			var_6_bool = true;

			while(0 < 12) {
				string var_15_string; int var_16_int;
				var_10_int = var_16_int;
				func_273(var_15_string, var_16_int);
				@SendMessage(-5, var_15_string);
				var_10_int += 1;
			}

			var_5_bool = true;
		}
		@SendMessageToParent(-8);
	}

	void OnCollision(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string)
	{
	}

	void OnUse(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string)
	{
		if(!var_2_object) //@nz
			return 0;
		@Blit(var_3_string, 1, 1);
		if(var_0_int > 1)
			@Print("default", 2, 35, var_0_int);
		if(var_4_bool != 0)
			@StretchBlit("disabled", 1, 1, 50, 50);
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, int var_9_int, int var_10_int)
	{
		@SetBackground("selected");
		@SendMessageToParent(0);
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, int var_9_int, int var_10_int)
	{
		@SendMessageToParent(1);
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, int var_9_int, int var_10_int)
	{
	}

	void event_200(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, int var_9_int, string var_10_string, object var_11_object)
	{
		int var_13_int;
		if(var_9_int == -7) {
			if(var_5_bool != 0)
				func_78();
			return 2;
		}
		if(var_9_int == -6) {
			var_5_bool = true;
			return 2;
		}
		if(var_9_int == -1) {
			if(var_11_object != null) {
				var_11_object->get(var_7_string, 0);
				var_11_object->get(var_8_string, 1);
			}
			return 2;
		}
		if(var_9_int == -2) {
			if(var_5_bool != 0)
				func_96(var_13_int, var_7_string);
			return 2;
		}
		if(var_9_int == -3) {
			if(var_5_bool != 0)
				func_96(var_13_int, var_8_string);
			return 2;
		}
		if(var_9_int == -4) {
			var_5_bool = true;
			func_78();
			return 2;
		}
		if(var_9_int == -5) {
			if(var_6_bool != 0)
				var_6_bool = false;
			else
				var_5_bool = false;
			if((var_9_int & 65536) != 0) {
				var_0_int = var_9_int & 16383;
				return 2;
			}
			if((var_9_int & 16384) != 0)
				@SetBackground("selected");
			else
				@SetBackground("default");
			if((var_9_int & 32768) != 0) {
				var_2_object = null;
				@SetTooltip(-1, "");
			} else {
					if((var_9_int & 131072) != 0) {
						var_4_bool = true;
					} else {

					}
					var_2_object = var_11_object;
					if(var_2_object != 0) {
						var_2_object->GetItemID(var_13_int); //@t
						@GetInvItemSprite(var_3_string, var_13_int);
						@LoadImage(var_3_string);
						@GetInvItemMaxStackSize(var_1_int, var_13_int);
						if(false != 0)
							@SetTooltip(-1, "");
						else
							@SetTooltip(1, "", var_2_object);
					@SetTooltip(-1, "");

					}
			}
			for(;;) {
				return 2;

			}
		}
	
	}

}


void func_96(bool var_5_bool, string var_41_string)
{
	int var_48_int; int var_49_int; int var_50_int; int var_51_int; int var_52_int; int var_53_int;
	if(var_41_string != "") {
		var_48_int = 0;
		var_49_int = 0;
		var_50_int = 0;
		var_51_int = 0;
		@ClientToScreen(var_48_int, var_49_int);
		@GetWindowSize(var_50_int, var_51_int);
		var_52_int = 0;
		var_53_int = 0;
		@GetCursorPos(var_52_int, var_53_int);
		bool var_56_bool = false;
		bool var_57_bool = false;
		bool var_58_bool = false;
		if(var_52_int > var_48_int) {
			if(var_53_int > var_49_int)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			if(var_52_int < (var_48_int + var_50_int))
				var_57_bool = true;
		}
		if(var_57_bool != 0) {
			if(var_53_int < (var_49_int + var_51_int))
				var_56_bool = true;
		}
		if(var_56_bool != 0) {
			var_5_bool = false;
			if(var_41_string == "$parent")
				@SendMessageToParent(-4);
			else
				@SendMessage(-4, var_41_string);
			func_78();
		}
		goto Label_149;
	}
Label_149:
	
}


// @pe
void func_273(string var_15_string, int var_16_int)
{
	if((var_16_int + 1) < 10)
		var_15_string = "slot0" + (var_16_int + 1);
	var_15_string = "slot" + (var_16_int + 1);
}


void func_78(void)
{
	int var_21_int = 0;
	int var_22_int = 0;
	int var_23_int = 0;
	int var_24_int = 0;
	@ClientToScreen(var_21_int, var_22_int);
	@GetWindowSize(var_23_int, var_24_int);
	@SetMousePos((var_21_int + (var_23_int / 2)), (var_22_int + (var_24_int / 2)));
}


